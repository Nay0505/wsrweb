// DolRecomp output
#include "../RZTE01.h"

static void loop_80104B50(CPUState* ctx) {
label_80104B50:
    ctx->downcount -= 5;
    ctx->pc = 0x80104B50u;
    // 80104B50: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104B54u;
    // 80104B54: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80104B58u;
    // 80104B58: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80104B5Cu;
    // 80104B5C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80104B60: bc    16, 0, 0x80104B50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104B50u;
                return;
            }
            goto label_80104B50;
        }
    }

    ctx->pc = 0x80104B64u;
}

static void loop_80104B90(CPUState* ctx) {
label_80104B90:
    ctx->downcount -= 5;
    ctx->pc = 0x80104B90u;
    // 80104B90: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104B94u;
    // 80104B94: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x80104B98u;
    // 80104B98: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80104B9Cu;
    // 80104B9C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80104BA0: bc    16, 0, 0x80104B90
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104B90u;
                return;
            }
            goto label_80104B90;
        }
    }

    ctx->pc = 0x80104BA4u;
}

static void loop_80104C38(CPUState* ctx) {
label_80104C38:
    ctx->downcount -= 5;
    ctx->pc = 0x80104C38u;
    // 80104C38: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104C3Cu;
    // 80104C3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80104C40u;
    // 80104C40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80104C44u;
    // 80104C44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80104C48: bc    16, 0, 0x80104C38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104C38u;
                return;
            }
            goto label_80104C38;
        }
    }

    ctx->pc = 0x80104C4Cu;
}

static void loop_80104D00(CPUState* ctx) {
label_80104D00:
    ctx->downcount -= 5;
    ctx->pc = 0x80104D00u;
    // 80104D00: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104D04u;
    // 80104D04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80104D08u;
    // 80104D08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80104D0Cu;
    // 80104D0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80104D10: bc    16, 0, 0x80104D00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104D00u;
                return;
            }
            goto label_80104D00;
        }
    }

    ctx->pc = 0x80104D14u;
}

static void loop_80104DC8(CPUState* ctx) {
label_80104DC8:
    ctx->downcount -= 5;
    ctx->pc = 0x80104DC8u;
    // 80104DC8: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104DCCu;
    // 80104DCC: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x80104DD0u;
    // 80104DD0: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80104DD4u;
    // 80104DD4: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80104DD8: bc    16, 0, 0x80104DC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104DC8u;
                return;
            }
            goto label_80104DC8;
        }
    }

    ctx->pc = 0x80104DDCu;
}

static void loop_80104E88(CPUState* ctx) {
label_80104E88:
    ctx->downcount -= 5;
    ctx->pc = 0x80104E88u;
    // 80104E88: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104E8Cu;
    // 80104E8C: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x80104E90u;
    // 80104E90: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80104E94u;
    // 80104E94: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80104E98: bc    16, 0, 0x80104E88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104E88u;
                return;
            }
            goto label_80104E88;
        }
    }

    ctx->pc = 0x80104E9Cu;
}

static void loop_80104F30(CPUState* ctx) {
label_80104F30:
    ctx->downcount -= 5;
    ctx->pc = 0x80104F30u;
    // 80104F30: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80104F34u;
    // 80104F34: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80104F38u;
    // 80104F38: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80104F3Cu;
    // 80104F3C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80104F40: bc    16, 0, 0x80104F30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104F30u;
                return;
            }
            goto label_80104F30;
        }
    }

    ctx->pc = 0x80104F44u;
}

void func_801031C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x801031C0u: goto label_801031C0;
    case 0x801031C4u: goto label_801031C4;
    case 0x801031C8u: goto label_801031C8;
    case 0x801031CCu: goto label_801031CC;
    case 0x801031D0u: goto label_801031D0;
    case 0x801031D4u: goto label_801031D4;
    case 0x801031D8u: goto label_801031D8;
    case 0x801031DCu: goto label_801031DC;
    case 0x801031E0u: goto label_801031E0;
    case 0x801031E4u: goto label_801031E4;
    case 0x801031E8u: goto label_801031E8;
    case 0x801031ECu: goto label_801031EC;
    case 0x801031F0u: goto label_801031F0;
    case 0x801031F4u: goto label_801031F4;
    case 0x801031F8u: goto label_801031F8;
    case 0x801031FCu: goto label_801031FC;
    case 0x80103200u: goto label_80103200;
    case 0x80103204u: goto label_80103204;
    case 0x80103208u: goto label_80103208;
    case 0x8010320Cu: goto label_8010320C;
    case 0x80103210u: goto label_80103210;
    case 0x80103214u: goto label_80103214;
    case 0x80103218u: goto label_80103218;
    case 0x8010321Cu: goto label_8010321C;
    case 0x80103220u: goto label_80103220;
    case 0x80103224u: goto label_80103224;
    case 0x80103228u: goto label_80103228;
    case 0x8010322Cu: goto label_8010322C;
    case 0x80103230u: goto label_80103230;
    case 0x80103234u: goto label_80103234;
    case 0x80103238u: goto label_80103238;
    case 0x8010323Cu: goto label_8010323C;
    case 0x80103240u: goto label_80103240;
    case 0x80103244u: goto label_80103244;
    case 0x80103248u: goto label_80103248;
    case 0x8010324Cu: goto label_8010324C;
    case 0x80103250u: goto label_80103250;
    case 0x80103254u: goto label_80103254;
    case 0x80103258u: goto label_80103258;
    case 0x8010325Cu: goto label_8010325C;
    case 0x80103260u: goto label_80103260;
    case 0x80103264u: goto label_80103264;
    case 0x80103268u: goto label_80103268;
    case 0x8010326Cu: goto label_8010326C;
    case 0x80103270u: goto label_80103270;
    case 0x80103274u: goto label_80103274;
    case 0x80103278u: goto label_80103278;
    case 0x8010327Cu: goto label_8010327C;
    case 0x80103280u: goto label_80103280;
    case 0x80103284u: goto label_80103284;
    case 0x80103288u: goto label_80103288;
    case 0x8010328Cu: goto label_8010328C;
    case 0x80103290u: goto label_80103290;
    case 0x80103294u: goto label_80103294;
    case 0x80103298u: goto label_80103298;
    case 0x8010329Cu: goto label_8010329C;
    case 0x801032A0u: goto label_801032A0;
    case 0x801032A4u: goto label_801032A4;
    case 0x801032A8u: goto label_801032A8;
    case 0x801032ACu: goto label_801032AC;
    case 0x801032B0u: goto label_801032B0;
    case 0x801032B4u: goto label_801032B4;
    case 0x801032B8u: goto label_801032B8;
    case 0x801032BCu: goto label_801032BC;
    case 0x801032C0u: goto label_801032C0;
    case 0x801032C4u: goto label_801032C4;
    case 0x801032C8u: goto label_801032C8;
    case 0x801032CCu: goto label_801032CC;
    case 0x801032D0u: goto label_801032D0;
    case 0x801032D4u: goto label_801032D4;
    case 0x801032D8u: goto label_801032D8;
    case 0x801032DCu: goto label_801032DC;
    case 0x801032E0u: goto label_801032E0;
    case 0x801032E4u: goto label_801032E4;
    case 0x801032E8u: goto label_801032E8;
    case 0x801032ECu: goto label_801032EC;
    case 0x801032F0u: goto label_801032F0;
    case 0x801032F4u: goto label_801032F4;
    case 0x801032F8u: goto label_801032F8;
    case 0x801032FCu: goto label_801032FC;
    case 0x80103300u: goto label_80103300;
    case 0x80103304u: goto label_80103304;
    case 0x80103308u: goto label_80103308;
    case 0x8010330Cu: goto label_8010330C;
    case 0x80103310u: goto label_80103310;
    case 0x80103314u: goto label_80103314;
    case 0x80103318u: goto label_80103318;
    case 0x8010331Cu: goto label_8010331C;
    case 0x80103320u: goto label_80103320;
    case 0x80103324u: goto label_80103324;
    case 0x80103328u: goto label_80103328;
    case 0x8010332Cu: goto label_8010332C;
    case 0x80103330u: goto label_80103330;
    case 0x80103334u: goto label_80103334;
    case 0x80103338u: goto label_80103338;
    case 0x8010333Cu: goto label_8010333C;
    case 0x80103340u: goto label_80103340;
    case 0x80103344u: goto label_80103344;
    case 0x80103348u: goto label_80103348;
    case 0x8010334Cu: goto label_8010334C;
    case 0x80103350u: goto label_80103350;
    case 0x80103354u: goto label_80103354;
    case 0x80103358u: goto label_80103358;
    case 0x8010335Cu: goto label_8010335C;
    case 0x80103360u: goto label_80103360;
    case 0x80103364u: goto label_80103364;
    case 0x80103368u: goto label_80103368;
    case 0x8010336Cu: goto label_8010336C;
    case 0x80103370u: goto label_80103370;
    case 0x80103374u: goto label_80103374;
    case 0x80103378u: goto label_80103378;
    case 0x8010337Cu: goto label_8010337C;
    case 0x80103380u: goto label_80103380;
    case 0x80103384u: goto label_80103384;
    case 0x80103388u: goto label_80103388;
    case 0x8010338Cu: goto label_8010338C;
    case 0x80103390u: goto label_80103390;
    case 0x80103394u: goto label_80103394;
    case 0x80103398u: goto label_80103398;
    case 0x8010339Cu: goto label_8010339C;
    case 0x801033A0u: goto label_801033A0;
    case 0x801033A4u: goto label_801033A4;
    case 0x801033A8u: goto label_801033A8;
    case 0x801033ACu: goto label_801033AC;
    case 0x801033B0u: goto label_801033B0;
    case 0x801033B4u: goto label_801033B4;
    case 0x801033B8u: goto label_801033B8;
    case 0x801033BCu: goto label_801033BC;
    case 0x801033C0u: goto label_801033C0;
    case 0x801033C4u: goto label_801033C4;
    case 0x801033C8u: goto label_801033C8;
    case 0x801033CCu: goto label_801033CC;
    case 0x801033D0u: goto label_801033D0;
    case 0x801033D4u: goto label_801033D4;
    case 0x801033D8u: goto label_801033D8;
    case 0x801033DCu: goto label_801033DC;
    case 0x801033E0u: goto label_801033E0;
    case 0x801033E4u: goto label_801033E4;
    case 0x801033E8u: goto label_801033E8;
    case 0x801033ECu: goto label_801033EC;
    case 0x801033F0u: goto label_801033F0;
    case 0x801033F4u: goto label_801033F4;
    case 0x801033F8u: goto label_801033F8;
    case 0x801033FCu: goto label_801033FC;
    case 0x80103400u: goto label_80103400;
    case 0x80103404u: goto label_80103404;
    case 0x80103408u: goto label_80103408;
    case 0x8010340Cu: goto label_8010340C;
    case 0x80103410u: goto label_80103410;
    case 0x80103414u: goto label_80103414;
    case 0x80103418u: goto label_80103418;
    case 0x8010341Cu: goto label_8010341C;
    case 0x80103420u: goto label_80103420;
    case 0x80103424u: goto label_80103424;
    case 0x80103428u: goto label_80103428;
    case 0x8010342Cu: goto label_8010342C;
    case 0x80103430u: goto label_80103430;
    case 0x80103434u: goto label_80103434;
    case 0x80103438u: goto label_80103438;
    case 0x8010343Cu: goto label_8010343C;
    case 0x80103440u: goto label_80103440;
    case 0x80103444u: goto label_80103444;
    case 0x80103448u: goto label_80103448;
    case 0x8010344Cu: goto label_8010344C;
    case 0x80103450u: goto label_80103450;
    case 0x80103454u: goto label_80103454;
    case 0x80103458u: goto label_80103458;
    case 0x8010345Cu: goto label_8010345C;
    case 0x80103460u: goto label_80103460;
    case 0x80103464u: goto label_80103464;
    case 0x80103468u: goto label_80103468;
    case 0x8010346Cu: goto label_8010346C;
    case 0x80103470u: goto label_80103470;
    case 0x80103474u: goto label_80103474;
    case 0x80103478u: goto label_80103478;
    case 0x8010347Cu: goto label_8010347C;
    case 0x80103480u: goto label_80103480;
    case 0x80103484u: goto label_80103484;
    case 0x80103488u: goto label_80103488;
    case 0x8010348Cu: goto label_8010348C;
    case 0x80103490u: goto label_80103490;
    case 0x80103494u: goto label_80103494;
    case 0x80103498u: goto label_80103498;
    case 0x8010349Cu: goto label_8010349C;
    case 0x801034A0u: goto label_801034A0;
    case 0x801034A4u: goto label_801034A4;
    case 0x801034A8u: goto label_801034A8;
    case 0x801034ACu: goto label_801034AC;
    case 0x801034B0u: goto label_801034B0;
    case 0x801034B4u: goto label_801034B4;
    case 0x801034B8u: goto label_801034B8;
    case 0x801034BCu: goto label_801034BC;
    case 0x801034C0u: goto label_801034C0;
    case 0x801034C4u: goto label_801034C4;
    case 0x801034C8u: goto label_801034C8;
    case 0x801034CCu: goto label_801034CC;
    case 0x801034D0u: goto label_801034D0;
    case 0x801034D4u: goto label_801034D4;
    case 0x801034D8u: goto label_801034D8;
    case 0x801034DCu: goto label_801034DC;
    case 0x801034E0u: goto label_801034E0;
    case 0x801034E4u: goto label_801034E4;
    case 0x801034E8u: goto label_801034E8;
    case 0x801034ECu: goto label_801034EC;
    case 0x801034F0u: goto label_801034F0;
    case 0x801034F4u: goto label_801034F4;
    case 0x801034F8u: goto label_801034F8;
    case 0x801034FCu: goto label_801034FC;
    case 0x80103500u: goto label_80103500;
    case 0x80103504u: goto label_80103504;
    case 0x80103508u: goto label_80103508;
    case 0x8010350Cu: goto label_8010350C;
    case 0x80103510u: goto label_80103510;
    case 0x80103514u: goto label_80103514;
    case 0x80103518u: goto label_80103518;
    case 0x8010351Cu: goto label_8010351C;
    case 0x80103520u: goto label_80103520;
    case 0x80103524u: goto label_80103524;
    case 0x80103528u: goto label_80103528;
    case 0x8010352Cu: goto label_8010352C;
    case 0x80103530u: goto label_80103530;
    case 0x80103534u: goto label_80103534;
    case 0x80103538u: goto label_80103538;
    case 0x8010353Cu: goto label_8010353C;
    case 0x80103540u: goto label_80103540;
    case 0x80103544u: goto label_80103544;
    case 0x80103548u: goto label_80103548;
    case 0x8010354Cu: goto label_8010354C;
    case 0x80103550u: goto label_80103550;
    case 0x80103554u: goto label_80103554;
    case 0x80103558u: goto label_80103558;
    case 0x8010355Cu: goto label_8010355C;
    case 0x80103560u: goto label_80103560;
    case 0x80103564u: goto label_80103564;
    case 0x80103568u: goto label_80103568;
    case 0x8010356Cu: goto label_8010356C;
    case 0x80103570u: goto label_80103570;
    case 0x80103574u: goto label_80103574;
    case 0x80103578u: goto label_80103578;
    case 0x8010357Cu: goto label_8010357C;
    case 0x80103580u: goto label_80103580;
    case 0x80103584u: goto label_80103584;
    case 0x80103588u: goto label_80103588;
    case 0x8010358Cu: goto label_8010358C;
    case 0x80103590u: goto label_80103590;
    case 0x80103594u: goto label_80103594;
    case 0x80103598u: goto label_80103598;
    case 0x8010359Cu: goto label_8010359C;
    case 0x801035A0u: goto label_801035A0;
    case 0x801035A4u: goto label_801035A4;
    case 0x801035A8u: goto label_801035A8;
    case 0x801035ACu: goto label_801035AC;
    case 0x801035B0u: goto label_801035B0;
    case 0x801035B4u: goto label_801035B4;
    case 0x801035B8u: goto label_801035B8;
    case 0x801035BCu: goto label_801035BC;
    case 0x801035C0u: goto label_801035C0;
    case 0x801035C4u: goto label_801035C4;
    case 0x801035C8u: goto label_801035C8;
    case 0x801035CCu: goto label_801035CC;
    case 0x801035D0u: goto label_801035D0;
    case 0x801035D4u: goto label_801035D4;
    case 0x801035D8u: goto label_801035D8;
    case 0x801035DCu: goto label_801035DC;
    case 0x801035E0u: goto label_801035E0;
    case 0x801035E4u: goto label_801035E4;
    case 0x801035E8u: goto label_801035E8;
    case 0x801035ECu: goto label_801035EC;
    case 0x801035F0u: goto label_801035F0;
    case 0x801035F4u: goto label_801035F4;
    case 0x801035F8u: goto label_801035F8;
    case 0x801035FCu: goto label_801035FC;
    case 0x80103600u: goto label_80103600;
    case 0x80103604u: goto label_80103604;
    case 0x80103608u: goto label_80103608;
    case 0x8010360Cu: goto label_8010360C;
    case 0x80103610u: goto label_80103610;
    case 0x80103614u: goto label_80103614;
    case 0x80103618u: goto label_80103618;
    case 0x8010361Cu: goto label_8010361C;
    case 0x80103620u: goto label_80103620;
    case 0x80103624u: goto label_80103624;
    case 0x80103628u: goto label_80103628;
    case 0x8010362Cu: goto label_8010362C;
    case 0x80103630u: goto label_80103630;
    case 0x80103634u: goto label_80103634;
    case 0x80103638u: goto label_80103638;
    case 0x8010363Cu: goto label_8010363C;
    case 0x80103640u: goto label_80103640;
    case 0x80103644u: goto label_80103644;
    case 0x80103648u: goto label_80103648;
    case 0x8010364Cu: goto label_8010364C;
    case 0x80103650u: goto label_80103650;
    case 0x80103654u: goto label_80103654;
    case 0x80103658u: goto label_80103658;
    case 0x8010365Cu: goto label_8010365C;
    case 0x80103660u: goto label_80103660;
    case 0x80103664u: goto label_80103664;
    case 0x80103668u: goto label_80103668;
    case 0x8010366Cu: goto label_8010366C;
    case 0x80103670u: goto label_80103670;
    case 0x80103674u: goto label_80103674;
    case 0x80103678u: goto label_80103678;
    case 0x8010367Cu: goto label_8010367C;
    case 0x80103680u: goto label_80103680;
    case 0x80103684u: goto label_80103684;
    case 0x80103688u: goto label_80103688;
    case 0x8010368Cu: goto label_8010368C;
    case 0x80103690u: goto label_80103690;
    case 0x80103694u: goto label_80103694;
    case 0x80103698u: goto label_80103698;
    case 0x8010369Cu: goto label_8010369C;
    case 0x801036A0u: goto label_801036A0;
    case 0x801036A4u: goto label_801036A4;
    case 0x801036A8u: goto label_801036A8;
    case 0x801036ACu: goto label_801036AC;
    case 0x801036B0u: goto label_801036B0;
    case 0x801036B4u: goto label_801036B4;
    case 0x801036B8u: goto label_801036B8;
    case 0x801036BCu: goto label_801036BC;
    case 0x801036C0u: goto label_801036C0;
    case 0x801036C4u: goto label_801036C4;
    case 0x801036C8u: goto label_801036C8;
    case 0x801036CCu: goto label_801036CC;
    case 0x801036D0u: goto label_801036D0;
    case 0x801036D4u: goto label_801036D4;
    case 0x801036D8u: goto label_801036D8;
    case 0x801036DCu: goto label_801036DC;
    case 0x801036E0u: goto label_801036E0;
    case 0x801036E4u: goto label_801036E4;
    case 0x801036E8u: goto label_801036E8;
    case 0x801036ECu: goto label_801036EC;
    case 0x801036F0u: goto label_801036F0;
    case 0x801036F4u: goto label_801036F4;
    case 0x801036F8u: goto label_801036F8;
    case 0x801036FCu: goto label_801036FC;
    case 0x80103700u: goto label_80103700;
    case 0x80103704u: goto label_80103704;
    case 0x80103708u: goto label_80103708;
    case 0x8010370Cu: goto label_8010370C;
    case 0x80103710u: goto label_80103710;
    case 0x80103714u: goto label_80103714;
    case 0x80103718u: goto label_80103718;
    case 0x8010371Cu: goto label_8010371C;
    case 0x80103720u: goto label_80103720;
    case 0x80103724u: goto label_80103724;
    case 0x80103728u: goto label_80103728;
    case 0x8010372Cu: goto label_8010372C;
    case 0x80103730u: goto label_80103730;
    case 0x80103734u: goto label_80103734;
    case 0x80103738u: goto label_80103738;
    case 0x8010373Cu: goto label_8010373C;
    case 0x80103740u: goto label_80103740;
    case 0x80103744u: goto label_80103744;
    case 0x80103748u: goto label_80103748;
    case 0x8010374Cu: goto label_8010374C;
    case 0x80103750u: goto label_80103750;
    case 0x80103754u: goto label_80103754;
    case 0x80103758u: goto label_80103758;
    case 0x8010375Cu: goto label_8010375C;
    case 0x80103760u: goto label_80103760;
    case 0x80103764u: goto label_80103764;
    case 0x80103768u: goto label_80103768;
    case 0x8010376Cu: goto label_8010376C;
    case 0x80103770u: goto label_80103770;
    case 0x80103774u: goto label_80103774;
    case 0x80103778u: goto label_80103778;
    case 0x8010377Cu: goto label_8010377C;
    case 0x80103780u: goto label_80103780;
    case 0x80103784u: goto label_80103784;
    case 0x80103788u: goto label_80103788;
    case 0x8010378Cu: goto label_8010378C;
    case 0x80103790u: goto label_80103790;
    case 0x80103794u: goto label_80103794;
    case 0x80103798u: goto label_80103798;
    case 0x8010379Cu: goto label_8010379C;
    case 0x801037A0u: goto label_801037A0;
    case 0x801037A4u: goto label_801037A4;
    case 0x801037A8u: goto label_801037A8;
    case 0x801037ACu: goto label_801037AC;
    case 0x801037B0u: goto label_801037B0;
    case 0x801037B4u: goto label_801037B4;
    case 0x801037B8u: goto label_801037B8;
    case 0x801037BCu: goto label_801037BC;
    case 0x801037C0u: goto label_801037C0;
    case 0x801037C4u: goto label_801037C4;
    case 0x801037C8u: goto label_801037C8;
    case 0x801037CCu: goto label_801037CC;
    case 0x801037D0u: goto label_801037D0;
    case 0x801037D4u: goto label_801037D4;
    case 0x801037D8u: goto label_801037D8;
    case 0x801037DCu: goto label_801037DC;
    case 0x801037E0u: goto label_801037E0;
    case 0x801037E4u: goto label_801037E4;
    case 0x801037E8u: goto label_801037E8;
    case 0x801037ECu: goto label_801037EC;
    case 0x801037F0u: goto label_801037F0;
    case 0x801037F4u: goto label_801037F4;
    case 0x801037F8u: goto label_801037F8;
    case 0x801037FCu: goto label_801037FC;
    case 0x80103800u: goto label_80103800;
    case 0x80103804u: goto label_80103804;
    case 0x80103808u: goto label_80103808;
    case 0x8010380Cu: goto label_8010380C;
    case 0x80103810u: goto label_80103810;
    case 0x80103814u: goto label_80103814;
    case 0x80103818u: goto label_80103818;
    case 0x8010381Cu: goto label_8010381C;
    case 0x80103820u: goto label_80103820;
    case 0x80103824u: goto label_80103824;
    case 0x80103828u: goto label_80103828;
    case 0x8010382Cu: goto label_8010382C;
    case 0x80103830u: goto label_80103830;
    case 0x80103834u: goto label_80103834;
    case 0x80103838u: goto label_80103838;
    case 0x8010383Cu: goto label_8010383C;
    case 0x80103840u: goto label_80103840;
    case 0x80103844u: goto label_80103844;
    case 0x80103848u: goto label_80103848;
    case 0x8010384Cu: goto label_8010384C;
    case 0x80103850u: goto label_80103850;
    case 0x80103854u: goto label_80103854;
    case 0x80103858u: goto label_80103858;
    case 0x8010385Cu: goto label_8010385C;
    case 0x80103860u: goto label_80103860;
    case 0x80103864u: goto label_80103864;
    case 0x80103868u: goto label_80103868;
    case 0x8010386Cu: goto label_8010386C;
    case 0x80103870u: goto label_80103870;
    case 0x80103874u: goto label_80103874;
    case 0x80103878u: goto label_80103878;
    case 0x8010387Cu: goto label_8010387C;
    case 0x80103880u: goto label_80103880;
    case 0x80103884u: goto label_80103884;
    case 0x80103888u: goto label_80103888;
    case 0x8010388Cu: goto label_8010388C;
    case 0x80103890u: goto label_80103890;
    case 0x80103894u: goto label_80103894;
    case 0x80103898u: goto label_80103898;
    case 0x8010389Cu: goto label_8010389C;
    case 0x801038A0u: goto label_801038A0;
    case 0x801038A4u: goto label_801038A4;
    case 0x801038A8u: goto label_801038A8;
    case 0x801038ACu: goto label_801038AC;
    case 0x801038B0u: goto label_801038B0;
    case 0x801038B4u: goto label_801038B4;
    case 0x801038B8u: goto label_801038B8;
    case 0x801038BCu: goto label_801038BC;
    case 0x801038C0u: goto label_801038C0;
    case 0x801038C4u: goto label_801038C4;
    case 0x801038C8u: goto label_801038C8;
    case 0x801038CCu: goto label_801038CC;
    case 0x801038D0u: goto label_801038D0;
    case 0x801038D4u: goto label_801038D4;
    case 0x801038D8u: goto label_801038D8;
    case 0x801038DCu: goto label_801038DC;
    case 0x801038E0u: goto label_801038E0;
    case 0x801038E4u: goto label_801038E4;
    case 0x801038E8u: goto label_801038E8;
    case 0x801038ECu: goto label_801038EC;
    case 0x801038F0u: goto label_801038F0;
    case 0x801038F4u: goto label_801038F4;
    case 0x801038F8u: goto label_801038F8;
    case 0x801038FCu: goto label_801038FC;
    case 0x80103900u: goto label_80103900;
    case 0x80103904u: goto label_80103904;
    case 0x80103908u: goto label_80103908;
    case 0x8010390Cu: goto label_8010390C;
    case 0x80103910u: goto label_80103910;
    case 0x80103914u: goto label_80103914;
    case 0x80103918u: goto label_80103918;
    case 0x8010391Cu: goto label_8010391C;
    case 0x80103920u: goto label_80103920;
    case 0x80103924u: goto label_80103924;
    case 0x80103928u: goto label_80103928;
    case 0x8010392Cu: goto label_8010392C;
    case 0x80103930u: goto label_80103930;
    case 0x80103934u: goto label_80103934;
    case 0x80103938u: goto label_80103938;
    case 0x8010393Cu: goto label_8010393C;
    case 0x80103940u: goto label_80103940;
    case 0x80103944u: goto label_80103944;
    case 0x80103948u: goto label_80103948;
    case 0x8010394Cu: goto label_8010394C;
    case 0x80103950u: goto label_80103950;
    case 0x80103954u: goto label_80103954;
    case 0x80103958u: goto label_80103958;
    case 0x8010395Cu: goto label_8010395C;
    case 0x80103960u: goto label_80103960;
    case 0x80103964u: goto label_80103964;
    case 0x80103968u: goto label_80103968;
    case 0x8010396Cu: goto label_8010396C;
    case 0x80103970u: goto label_80103970;
    case 0x80103974u: goto label_80103974;
    case 0x80103978u: goto label_80103978;
    case 0x8010397Cu: goto label_8010397C;
    case 0x80103980u: goto label_80103980;
    case 0x80103984u: goto label_80103984;
    case 0x80103988u: goto label_80103988;
    case 0x8010398Cu: goto label_8010398C;
    case 0x80103990u: goto label_80103990;
    case 0x80103994u: goto label_80103994;
    case 0x80103998u: goto label_80103998;
    case 0x8010399Cu: goto label_8010399C;
    case 0x801039A0u: goto label_801039A0;
    case 0x801039A4u: goto label_801039A4;
    case 0x801039A8u: goto label_801039A8;
    case 0x801039ACu: goto label_801039AC;
    case 0x801039B0u: goto label_801039B0;
    case 0x801039B4u: goto label_801039B4;
    case 0x801039B8u: goto label_801039B8;
    case 0x801039BCu: goto label_801039BC;
    case 0x801039C0u: goto label_801039C0;
    case 0x801039C4u: goto label_801039C4;
    case 0x801039C8u: goto label_801039C8;
    case 0x801039CCu: goto label_801039CC;
    case 0x801039D0u: goto label_801039D0;
    case 0x801039D4u: goto label_801039D4;
    case 0x801039D8u: goto label_801039D8;
    case 0x801039DCu: goto label_801039DC;
    case 0x801039E0u: goto label_801039E0;
    case 0x801039E4u: goto label_801039E4;
    case 0x801039E8u: goto label_801039E8;
    case 0x801039ECu: goto label_801039EC;
    case 0x801039F0u: goto label_801039F0;
    case 0x801039F4u: goto label_801039F4;
    case 0x801039F8u: goto label_801039F8;
    case 0x801039FCu: goto label_801039FC;
    case 0x80103A00u: goto label_80103A00;
    case 0x80103A04u: goto label_80103A04;
    case 0x80103A08u: goto label_80103A08;
    case 0x80103A0Cu: goto label_80103A0C;
    case 0x80103A10u: goto label_80103A10;
    case 0x80103A14u: goto label_80103A14;
    case 0x80103A18u: goto label_80103A18;
    case 0x80103A1Cu: goto label_80103A1C;
    case 0x80103A20u: goto label_80103A20;
    case 0x80103A24u: goto label_80103A24;
    case 0x80103A28u: goto label_80103A28;
    case 0x80103A2Cu: goto label_80103A2C;
    case 0x80103A30u: goto label_80103A30;
    case 0x80103A34u: goto label_80103A34;
    case 0x80103A38u: goto label_80103A38;
    case 0x80103A3Cu: goto label_80103A3C;
    case 0x80103A40u: goto label_80103A40;
    case 0x80103A44u: goto label_80103A44;
    case 0x80103A48u: goto label_80103A48;
    case 0x80103A4Cu: goto label_80103A4C;
    case 0x80103A50u: goto label_80103A50;
    case 0x80103A54u: goto label_80103A54;
    case 0x80103A58u: goto label_80103A58;
    case 0x80103A5Cu: goto label_80103A5C;
    case 0x80103A60u: goto label_80103A60;
    case 0x80103A64u: goto label_80103A64;
    case 0x80103A68u: goto label_80103A68;
    case 0x80103A6Cu: goto label_80103A6C;
    case 0x80103A70u: goto label_80103A70;
    case 0x80103A74u: goto label_80103A74;
    case 0x80103A78u: goto label_80103A78;
    case 0x80103A7Cu: goto label_80103A7C;
    case 0x80103A80u: goto label_80103A80;
    case 0x80103A84u: goto label_80103A84;
    case 0x80103A88u: goto label_80103A88;
    case 0x80103A8Cu: goto label_80103A8C;
    case 0x80103A90u: goto label_80103A90;
    case 0x80103A94u: goto label_80103A94;
    case 0x80103A98u: goto label_80103A98;
    case 0x80103A9Cu: goto label_80103A9C;
    case 0x80103AA0u: goto label_80103AA0;
    case 0x80103AA4u: goto label_80103AA4;
    case 0x80103AA8u: goto label_80103AA8;
    case 0x80103AACu: goto label_80103AAC;
    case 0x80103AB0u: goto label_80103AB0;
    case 0x80103AB4u: goto label_80103AB4;
    case 0x80103AB8u: goto label_80103AB8;
    case 0x80103ABCu: goto label_80103ABC;
    case 0x80103AC0u: goto label_80103AC0;
    case 0x80103AC4u: goto label_80103AC4;
    case 0x80103AC8u: goto label_80103AC8;
    case 0x80103ACCu: goto label_80103ACC;
    case 0x80103AD0u: goto label_80103AD0;
    case 0x80103AD4u: goto label_80103AD4;
    case 0x80103AD8u: goto label_80103AD8;
    case 0x80103ADCu: goto label_80103ADC;
    case 0x80103AE0u: goto label_80103AE0;
    case 0x80103AE4u: goto label_80103AE4;
    case 0x80103AE8u: goto label_80103AE8;
    case 0x80103AECu: goto label_80103AEC;
    case 0x80103AF0u: goto label_80103AF0;
    case 0x80103AF4u: goto label_80103AF4;
    case 0x80103AF8u: goto label_80103AF8;
    case 0x80103AFCu: goto label_80103AFC;
    case 0x80103B00u: goto label_80103B00;
    case 0x80103B04u: goto label_80103B04;
    case 0x80103B08u: goto label_80103B08;
    case 0x80103B0Cu: goto label_80103B0C;
    case 0x80103B10u: goto label_80103B10;
    case 0x80103B14u: goto label_80103B14;
    case 0x80103B18u: goto label_80103B18;
    case 0x80103B1Cu: goto label_80103B1C;
    case 0x80103B20u: goto label_80103B20;
    case 0x80103B24u: goto label_80103B24;
    case 0x80103B28u: goto label_80103B28;
    case 0x80103B2Cu: goto label_80103B2C;
    case 0x80103B30u: goto label_80103B30;
    case 0x80103B34u: goto label_80103B34;
    case 0x80103B38u: goto label_80103B38;
    case 0x80103B3Cu: goto label_80103B3C;
    case 0x80103B40u: goto label_80103B40;
    case 0x80103B44u: goto label_80103B44;
    case 0x80103B48u: goto label_80103B48;
    case 0x80103B4Cu: goto label_80103B4C;
    case 0x80103B50u: goto label_80103B50;
    case 0x80103B54u: goto label_80103B54;
    case 0x80103B58u: goto label_80103B58;
    case 0x80103B5Cu: goto label_80103B5C;
    case 0x80103B60u: goto label_80103B60;
    case 0x80103B64u: goto label_80103B64;
    case 0x80103B68u: goto label_80103B68;
    case 0x80103B6Cu: goto label_80103B6C;
    case 0x80103B70u: goto label_80103B70;
    case 0x80103B74u: goto label_80103B74;
    case 0x80103B78u: goto label_80103B78;
    case 0x80103B7Cu: goto label_80103B7C;
    case 0x80103B80u: goto label_80103B80;
    case 0x80103B84u: goto label_80103B84;
    case 0x80103B88u: goto label_80103B88;
    case 0x80103B8Cu: goto label_80103B8C;
    case 0x80103B90u: goto label_80103B90;
    case 0x80103B94u: goto label_80103B94;
    case 0x80103B98u: goto label_80103B98;
    case 0x80103B9Cu: goto label_80103B9C;
    case 0x80103BA0u: goto label_80103BA0;
    case 0x80103BA4u: goto label_80103BA4;
    case 0x80103BA8u: goto label_80103BA8;
    case 0x80103BACu: goto label_80103BAC;
    case 0x80103BB0u: goto label_80103BB0;
    case 0x80103BB4u: goto label_80103BB4;
    case 0x80103BB8u: goto label_80103BB8;
    case 0x80103BBCu: goto label_80103BBC;
    case 0x80103BC0u: goto label_80103BC0;
    case 0x80103BC4u: goto label_80103BC4;
    case 0x80103BC8u: goto label_80103BC8;
    case 0x80103BCCu: goto label_80103BCC;
    case 0x80103BD0u: goto label_80103BD0;
    case 0x80103BD4u: goto label_80103BD4;
    case 0x80103BD8u: goto label_80103BD8;
    case 0x80103BDCu: goto label_80103BDC;
    case 0x80103BE0u: goto label_80103BE0;
    case 0x80103BE4u: goto label_80103BE4;
    case 0x80103BE8u: goto label_80103BE8;
    case 0x80103BECu: goto label_80103BEC;
    case 0x80103BF0u: goto label_80103BF0;
    case 0x80103BF4u: goto label_80103BF4;
    case 0x80103BF8u: goto label_80103BF8;
    case 0x80103BFCu: goto label_80103BFC;
    case 0x80103C00u: goto label_80103C00;
    case 0x80103C04u: goto label_80103C04;
    case 0x80103C08u: goto label_80103C08;
    case 0x80103C0Cu: goto label_80103C0C;
    case 0x80103C10u: goto label_80103C10;
    case 0x80103C14u: goto label_80103C14;
    case 0x80103C18u: goto label_80103C18;
    case 0x80103C1Cu: goto label_80103C1C;
    case 0x80103C20u: goto label_80103C20;
    case 0x80103C24u: goto label_80103C24;
    case 0x80103C28u: goto label_80103C28;
    case 0x80103C2Cu: goto label_80103C2C;
    case 0x80103C30u: goto label_80103C30;
    case 0x80103C34u: goto label_80103C34;
    case 0x80103C38u: goto label_80103C38;
    case 0x80103C3Cu: goto label_80103C3C;
    case 0x80103C40u: goto label_80103C40;
    case 0x80103C44u: goto label_80103C44;
    case 0x80103C48u: goto label_80103C48;
    case 0x80103C4Cu: goto label_80103C4C;
    case 0x80103C50u: goto label_80103C50;
    case 0x80103C54u: goto label_80103C54;
    case 0x80103C58u: goto label_80103C58;
    case 0x80103C5Cu: goto label_80103C5C;
    case 0x80103C60u: goto label_80103C60;
    case 0x80103C64u: goto label_80103C64;
    case 0x80103C68u: goto label_80103C68;
    case 0x80103C6Cu: goto label_80103C6C;
    case 0x80103C70u: goto label_80103C70;
    case 0x80103C74u: goto label_80103C74;
    case 0x80103C78u: goto label_80103C78;
    case 0x80103C7Cu: goto label_80103C7C;
    case 0x80103C80u: goto label_80103C80;
    case 0x80103C84u: goto label_80103C84;
    case 0x80103C88u: goto label_80103C88;
    case 0x80103C8Cu: goto label_80103C8C;
    case 0x80103C90u: goto label_80103C90;
    case 0x80103C94u: goto label_80103C94;
    case 0x80103C98u: goto label_80103C98;
    case 0x80103C9Cu: goto label_80103C9C;
    case 0x80103CA0u: goto label_80103CA0;
    case 0x80103CA4u: goto label_80103CA4;
    case 0x80103CA8u: goto label_80103CA8;
    case 0x80103CACu: goto label_80103CAC;
    case 0x80103CB0u: goto label_80103CB0;
    case 0x80103CB4u: goto label_80103CB4;
    case 0x80103CB8u: goto label_80103CB8;
    case 0x80103CBCu: goto label_80103CBC;
    case 0x80103CC0u: goto label_80103CC0;
    case 0x80103CC4u: goto label_80103CC4;
    case 0x80103CC8u: goto label_80103CC8;
    case 0x80103CCCu: goto label_80103CCC;
    case 0x80103CD0u: goto label_80103CD0;
    case 0x80103CD4u: goto label_80103CD4;
    case 0x80103CD8u: goto label_80103CD8;
    case 0x80103CDCu: goto label_80103CDC;
    case 0x80103CE0u: goto label_80103CE0;
    case 0x80103CE4u: goto label_80103CE4;
    case 0x80103CE8u: goto label_80103CE8;
    case 0x80103CECu: goto label_80103CEC;
    case 0x80103CF0u: goto label_80103CF0;
    case 0x80103CF4u: goto label_80103CF4;
    case 0x80103CF8u: goto label_80103CF8;
    case 0x80103CFCu: goto label_80103CFC;
    case 0x80103D00u: goto label_80103D00;
    case 0x80103D04u: goto label_80103D04;
    case 0x80103D08u: goto label_80103D08;
    case 0x80103D0Cu: goto label_80103D0C;
    case 0x80103D10u: goto label_80103D10;
    case 0x80103D14u: goto label_80103D14;
    case 0x80103D18u: goto label_80103D18;
    case 0x80103D1Cu: goto label_80103D1C;
    case 0x80103D20u: goto label_80103D20;
    case 0x80103D24u: goto label_80103D24;
    case 0x80103D28u: goto label_80103D28;
    case 0x80103D2Cu: goto label_80103D2C;
    case 0x80103D30u: goto label_80103D30;
    case 0x80103D34u: goto label_80103D34;
    case 0x80103D38u: goto label_80103D38;
    case 0x80103D3Cu: goto label_80103D3C;
    case 0x80103D40u: goto label_80103D40;
    case 0x80103D44u: goto label_80103D44;
    case 0x80103D48u: goto label_80103D48;
    case 0x80103D4Cu: goto label_80103D4C;
    case 0x80103D50u: goto label_80103D50;
    case 0x80103D54u: goto label_80103D54;
    case 0x80103D58u: goto label_80103D58;
    case 0x80103D5Cu: goto label_80103D5C;
    case 0x80103D60u: goto label_80103D60;
    case 0x80103D64u: goto label_80103D64;
    case 0x80103D68u: goto label_80103D68;
    case 0x80103D6Cu: goto label_80103D6C;
    case 0x80103D70u: goto label_80103D70;
    case 0x80103D74u: goto label_80103D74;
    case 0x80103D78u: goto label_80103D78;
    case 0x80103D7Cu: goto label_80103D7C;
    case 0x80103D80u: goto label_80103D80;
    case 0x80103D84u: goto label_80103D84;
    case 0x80103D88u: goto label_80103D88;
    case 0x80103D8Cu: goto label_80103D8C;
    case 0x80103D90u: goto label_80103D90;
    case 0x80103D94u: goto label_80103D94;
    case 0x80103D98u: goto label_80103D98;
    case 0x80103D9Cu: goto label_80103D9C;
    case 0x80103DA0u: goto label_80103DA0;
    case 0x80103DA4u: goto label_80103DA4;
    case 0x80103DA8u: goto label_80103DA8;
    case 0x80103DACu: goto label_80103DAC;
    case 0x80103DB0u: goto label_80103DB0;
    case 0x80103DB4u: goto label_80103DB4;
    case 0x80103DB8u: goto label_80103DB8;
    case 0x80103DBCu: goto label_80103DBC;
    case 0x80103DC0u: goto label_80103DC0;
    case 0x80103DC4u: goto label_80103DC4;
    case 0x80103DC8u: goto label_80103DC8;
    case 0x80103DCCu: goto label_80103DCC;
    case 0x80103DD0u: goto label_80103DD0;
    case 0x80103DD4u: goto label_80103DD4;
    case 0x80103DD8u: goto label_80103DD8;
    case 0x80103DDCu: goto label_80103DDC;
    case 0x80103DE0u: goto label_80103DE0;
    case 0x80103DE4u: goto label_80103DE4;
    case 0x80103DE8u: goto label_80103DE8;
    case 0x80103DECu: goto label_80103DEC;
    case 0x80103DF0u: goto label_80103DF0;
    case 0x80103DF4u: goto label_80103DF4;
    case 0x80103DF8u: goto label_80103DF8;
    case 0x80103DFCu: goto label_80103DFC;
    case 0x80103E00u: goto label_80103E00;
    case 0x80103E04u: goto label_80103E04;
    case 0x80103E08u: goto label_80103E08;
    case 0x80103E0Cu: goto label_80103E0C;
    case 0x80103E10u: goto label_80103E10;
    case 0x80103E14u: goto label_80103E14;
    case 0x80103E18u: goto label_80103E18;
    case 0x80103E1Cu: goto label_80103E1C;
    case 0x80103E20u: goto label_80103E20;
    case 0x80103E24u: goto label_80103E24;
    case 0x80103E28u: goto label_80103E28;
    case 0x80103E2Cu: goto label_80103E2C;
    case 0x80103E30u: goto label_80103E30;
    case 0x80103E34u: goto label_80103E34;
    case 0x80103E38u: goto label_80103E38;
    case 0x80103E3Cu: goto label_80103E3C;
    case 0x80103E40u: goto label_80103E40;
    case 0x80103E44u: goto label_80103E44;
    case 0x80103E48u: goto label_80103E48;
    case 0x80103E4Cu: goto label_80103E4C;
    case 0x80103E50u: goto label_80103E50;
    case 0x80103E54u: goto label_80103E54;
    case 0x80103E58u: goto label_80103E58;
    case 0x80103E5Cu: goto label_80103E5C;
    case 0x80103E60u: goto label_80103E60;
    case 0x80103E64u: goto label_80103E64;
    case 0x80103E68u: goto label_80103E68;
    case 0x80103E6Cu: goto label_80103E6C;
    case 0x80103E70u: goto label_80103E70;
    case 0x80103E74u: goto label_80103E74;
    case 0x80103E78u: goto label_80103E78;
    case 0x80103E7Cu: goto label_80103E7C;
    case 0x80103E80u: goto label_80103E80;
    case 0x80103E84u: goto label_80103E84;
    case 0x80103E88u: goto label_80103E88;
    case 0x80103E8Cu: goto label_80103E8C;
    case 0x80103E90u: goto label_80103E90;
    case 0x80103E94u: goto label_80103E94;
    case 0x80103E98u: goto label_80103E98;
    case 0x80103E9Cu: goto label_80103E9C;
    case 0x80103EA0u: goto label_80103EA0;
    case 0x80103EA4u: goto label_80103EA4;
    case 0x80103EA8u: goto label_80103EA8;
    case 0x80103EACu: goto label_80103EAC;
    case 0x80103EB0u: goto label_80103EB0;
    case 0x80103EB4u: goto label_80103EB4;
    case 0x80103EB8u: goto label_80103EB8;
    case 0x80103EBCu: goto label_80103EBC;
    case 0x80103EC0u: goto label_80103EC0;
    case 0x80103EC4u: goto label_80103EC4;
    case 0x80103EC8u: goto label_80103EC8;
    case 0x80103ECCu: goto label_80103ECC;
    case 0x80103ED0u: goto label_80103ED0;
    case 0x80103ED4u: goto label_80103ED4;
    case 0x80103ED8u: goto label_80103ED8;
    case 0x80103EDCu: goto label_80103EDC;
    case 0x80103EE0u: goto label_80103EE0;
    case 0x80103EE4u: goto label_80103EE4;
    case 0x80103EE8u: goto label_80103EE8;
    case 0x80103EECu: goto label_80103EEC;
    case 0x80103EF0u: goto label_80103EF0;
    case 0x80103EF4u: goto label_80103EF4;
    case 0x80103EF8u: goto label_80103EF8;
    case 0x80103EFCu: goto label_80103EFC;
    case 0x80103F00u: goto label_80103F00;
    case 0x80103F04u: goto label_80103F04;
    case 0x80103F08u: goto label_80103F08;
    case 0x80103F0Cu: goto label_80103F0C;
    case 0x80103F10u: goto label_80103F10;
    case 0x80103F14u: goto label_80103F14;
    case 0x80103F18u: goto label_80103F18;
    case 0x80103F1Cu: goto label_80103F1C;
    case 0x80103F20u: goto label_80103F20;
    case 0x80103F24u: goto label_80103F24;
    case 0x80103F28u: goto label_80103F28;
    case 0x80103F2Cu: goto label_80103F2C;
    case 0x80103F30u: goto label_80103F30;
    case 0x80103F34u: goto label_80103F34;
    case 0x80103F38u: goto label_80103F38;
    case 0x80103F3Cu: goto label_80103F3C;
    case 0x80103F40u: goto label_80103F40;
    case 0x80103F44u: goto label_80103F44;
    case 0x80103F48u: goto label_80103F48;
    case 0x80103F4Cu: goto label_80103F4C;
    case 0x80103F50u: goto label_80103F50;
    case 0x80103F54u: goto label_80103F54;
    case 0x80103F58u: goto label_80103F58;
    case 0x80103F5Cu: goto label_80103F5C;
    case 0x80103F60u: goto label_80103F60;
    case 0x80103F64u: goto label_80103F64;
    case 0x80103F68u: goto label_80103F68;
    case 0x80103F6Cu: goto label_80103F6C;
    case 0x80103F70u: goto label_80103F70;
    case 0x80103F74u: goto label_80103F74;
    case 0x80103F78u: goto label_80103F78;
    case 0x80103F7Cu: goto label_80103F7C;
    case 0x80103F80u: goto label_80103F80;
    case 0x80103F84u: goto label_80103F84;
    case 0x80103F88u: goto label_80103F88;
    case 0x80103F8Cu: goto label_80103F8C;
    case 0x80103F90u: goto label_80103F90;
    case 0x80103F94u: goto label_80103F94;
    case 0x80103F98u: goto label_80103F98;
    case 0x80103F9Cu: goto label_80103F9C;
    case 0x80103FA0u: goto label_80103FA0;
    case 0x80103FA4u: goto label_80103FA4;
    case 0x80103FA8u: goto label_80103FA8;
    case 0x80103FACu: goto label_80103FAC;
    case 0x80103FB0u: goto label_80103FB0;
    case 0x80103FB4u: goto label_80103FB4;
    case 0x80103FB8u: goto label_80103FB8;
    case 0x80103FBCu: goto label_80103FBC;
    case 0x80103FC0u: goto label_80103FC0;
    case 0x80103FC4u: goto label_80103FC4;
    case 0x80103FC8u: goto label_80103FC8;
    case 0x80103FCCu: goto label_80103FCC;
    case 0x80103FD0u: goto label_80103FD0;
    case 0x80103FD4u: goto label_80103FD4;
    case 0x80103FD8u: goto label_80103FD8;
    case 0x80103FDCu: goto label_80103FDC;
    case 0x80103FE0u: goto label_80103FE0;
    case 0x80103FE4u: goto label_80103FE4;
    case 0x80103FE8u: goto label_80103FE8;
    case 0x80103FECu: goto label_80103FEC;
    case 0x80103FF0u: goto label_80103FF0;
    case 0x80103FF4u: goto label_80103FF4;
    case 0x80103FF8u: goto label_80103FF8;
    case 0x80103FFCu: goto label_80103FFC;
    case 0x80104000u: goto label_80104000;
    case 0x80104004u: goto label_80104004;
    case 0x80104008u: goto label_80104008;
    case 0x8010400Cu: goto label_8010400C;
    case 0x80104010u: goto label_80104010;
    case 0x80104014u: goto label_80104014;
    case 0x80104018u: goto label_80104018;
    case 0x8010401Cu: goto label_8010401C;
    case 0x80104020u: goto label_80104020;
    case 0x80104024u: goto label_80104024;
    case 0x80104028u: goto label_80104028;
    case 0x8010402Cu: goto label_8010402C;
    case 0x80104030u: goto label_80104030;
    case 0x80104034u: goto label_80104034;
    case 0x80104038u: goto label_80104038;
    case 0x8010403Cu: goto label_8010403C;
    case 0x80104040u: goto label_80104040;
    case 0x80104044u: goto label_80104044;
    case 0x80104048u: goto label_80104048;
    case 0x8010404Cu: goto label_8010404C;
    case 0x80104050u: goto label_80104050;
    case 0x80104054u: goto label_80104054;
    case 0x80104058u: goto label_80104058;
    case 0x8010405Cu: goto label_8010405C;
    case 0x80104060u: goto label_80104060;
    case 0x80104064u: goto label_80104064;
    case 0x80104068u: goto label_80104068;
    case 0x8010406Cu: goto label_8010406C;
    case 0x80104070u: goto label_80104070;
    case 0x80104074u: goto label_80104074;
    case 0x80104078u: goto label_80104078;
    case 0x8010407Cu: goto label_8010407C;
    case 0x80104080u: goto label_80104080;
    case 0x80104084u: goto label_80104084;
    case 0x80104088u: goto label_80104088;
    case 0x8010408Cu: goto label_8010408C;
    case 0x80104090u: goto label_80104090;
    case 0x80104094u: goto label_80104094;
    case 0x80104098u: goto label_80104098;
    case 0x8010409Cu: goto label_8010409C;
    case 0x801040A0u: goto label_801040A0;
    case 0x801040A4u: goto label_801040A4;
    case 0x801040A8u: goto label_801040A8;
    case 0x801040ACu: goto label_801040AC;
    case 0x801040B0u: goto label_801040B0;
    case 0x801040B4u: goto label_801040B4;
    case 0x801040B8u: goto label_801040B8;
    case 0x801040BCu: goto label_801040BC;
    case 0x801040C0u: goto label_801040C0;
    case 0x801040C4u: goto label_801040C4;
    case 0x801040C8u: goto label_801040C8;
    case 0x801040CCu: goto label_801040CC;
    case 0x801040D0u: goto label_801040D0;
    case 0x801040D4u: goto label_801040D4;
    case 0x801040D8u: goto label_801040D8;
    case 0x801040DCu: goto label_801040DC;
    case 0x801040E0u: goto label_801040E0;
    case 0x801040E4u: goto label_801040E4;
    case 0x801040E8u: goto label_801040E8;
    case 0x801040ECu: goto label_801040EC;
    case 0x801040F0u: goto label_801040F0;
    case 0x801040F4u: goto label_801040F4;
    case 0x801040F8u: goto label_801040F8;
    case 0x801040FCu: goto label_801040FC;
    case 0x80104100u: goto label_80104100;
    case 0x80104104u: goto label_80104104;
    case 0x80104108u: goto label_80104108;
    case 0x8010410Cu: goto label_8010410C;
    case 0x80104110u: goto label_80104110;
    case 0x80104114u: goto label_80104114;
    case 0x80104118u: goto label_80104118;
    case 0x8010411Cu: goto label_8010411C;
    case 0x80104120u: goto label_80104120;
    case 0x80104124u: goto label_80104124;
    case 0x80104128u: goto label_80104128;
    case 0x8010412Cu: goto label_8010412C;
    case 0x80104130u: goto label_80104130;
    case 0x80104134u: goto label_80104134;
    case 0x80104138u: goto label_80104138;
    case 0x8010413Cu: goto label_8010413C;
    case 0x80104140u: goto label_80104140;
    case 0x80104144u: goto label_80104144;
    case 0x80104148u: goto label_80104148;
    case 0x8010414Cu: goto label_8010414C;
    case 0x80104150u: goto label_80104150;
    case 0x80104154u: goto label_80104154;
    case 0x80104158u: goto label_80104158;
    case 0x8010415Cu: goto label_8010415C;
    case 0x80104160u: goto label_80104160;
    case 0x80104164u: goto label_80104164;
    case 0x80104168u: goto label_80104168;
    case 0x8010416Cu: goto label_8010416C;
    case 0x80104170u: goto label_80104170;
    case 0x80104174u: goto label_80104174;
    case 0x80104178u: goto label_80104178;
    case 0x8010417Cu: goto label_8010417C;
    case 0x80104180u: goto label_80104180;
    case 0x80104184u: goto label_80104184;
    case 0x80104188u: goto label_80104188;
    case 0x8010418Cu: goto label_8010418C;
    case 0x80104190u: goto label_80104190;
    case 0x80104194u: goto label_80104194;
    case 0x80104198u: goto label_80104198;
    case 0x8010419Cu: goto label_8010419C;
    case 0x801041A0u: goto label_801041A0;
    case 0x801041A4u: goto label_801041A4;
    case 0x801041A8u: goto label_801041A8;
    case 0x801041ACu: goto label_801041AC;
    case 0x801041B0u: goto label_801041B0;
    case 0x801041B4u: goto label_801041B4;
    case 0x801041B8u: goto label_801041B8;
    case 0x801041BCu: goto label_801041BC;
    case 0x801041C0u: goto label_801041C0;
    case 0x801041C4u: goto label_801041C4;
    case 0x801041C8u: goto label_801041C8;
    case 0x801041CCu: goto label_801041CC;
    case 0x801041D0u: goto label_801041D0;
    case 0x801041D4u: goto label_801041D4;
    case 0x801041D8u: goto label_801041D8;
    case 0x801041DCu: goto label_801041DC;
    case 0x801041E0u: goto label_801041E0;
    case 0x801041E4u: goto label_801041E4;
    case 0x801041E8u: goto label_801041E8;
    case 0x801041ECu: goto label_801041EC;
    case 0x801041F0u: goto label_801041F0;
    case 0x801041F4u: goto label_801041F4;
    case 0x801041F8u: goto label_801041F8;
    case 0x801041FCu: goto label_801041FC;
    case 0x80104200u: goto label_80104200;
    case 0x80104204u: goto label_80104204;
    case 0x80104208u: goto label_80104208;
    case 0x8010420Cu: goto label_8010420C;
    case 0x80104210u: goto label_80104210;
    case 0x80104214u: goto label_80104214;
    case 0x80104218u: goto label_80104218;
    case 0x8010421Cu: goto label_8010421C;
    case 0x80104220u: goto label_80104220;
    case 0x80104224u: goto label_80104224;
    case 0x80104228u: goto label_80104228;
    case 0x8010422Cu: goto label_8010422C;
    case 0x80104230u: goto label_80104230;
    case 0x80104234u: goto label_80104234;
    case 0x80104238u: goto label_80104238;
    case 0x8010423Cu: goto label_8010423C;
    case 0x80104240u: goto label_80104240;
    case 0x80104244u: goto label_80104244;
    case 0x80104248u: goto label_80104248;
    case 0x8010424Cu: goto label_8010424C;
    case 0x80104250u: goto label_80104250;
    case 0x80104254u: goto label_80104254;
    case 0x80104258u: goto label_80104258;
    case 0x8010425Cu: goto label_8010425C;
    case 0x80104260u: goto label_80104260;
    case 0x80104264u: goto label_80104264;
    case 0x80104268u: goto label_80104268;
    case 0x8010426Cu: goto label_8010426C;
    case 0x80104270u: goto label_80104270;
    case 0x80104274u: goto label_80104274;
    case 0x80104278u: goto label_80104278;
    case 0x8010427Cu: goto label_8010427C;
    case 0x80104280u: goto label_80104280;
    case 0x80104284u: goto label_80104284;
    case 0x80104288u: goto label_80104288;
    case 0x8010428Cu: goto label_8010428C;
    case 0x80104290u: goto label_80104290;
    case 0x80104294u: goto label_80104294;
    case 0x80104298u: goto label_80104298;
    case 0x8010429Cu: goto label_8010429C;
    case 0x801042A0u: goto label_801042A0;
    case 0x801042A4u: goto label_801042A4;
    case 0x801042A8u: goto label_801042A8;
    case 0x801042ACu: goto label_801042AC;
    case 0x801042B0u: goto label_801042B0;
    case 0x801042B4u: goto label_801042B4;
    case 0x801042B8u: goto label_801042B8;
    case 0x801042BCu: goto label_801042BC;
    case 0x801042C0u: goto label_801042C0;
    case 0x801042C4u: goto label_801042C4;
    case 0x801042C8u: goto label_801042C8;
    case 0x801042CCu: goto label_801042CC;
    case 0x801042D0u: goto label_801042D0;
    case 0x801042D4u: goto label_801042D4;
    case 0x801042D8u: goto label_801042D8;
    case 0x801042DCu: goto label_801042DC;
    case 0x801042E0u: goto label_801042E0;
    case 0x801042E4u: goto label_801042E4;
    case 0x801042E8u: goto label_801042E8;
    case 0x801042ECu: goto label_801042EC;
    case 0x801042F0u: goto label_801042F0;
    case 0x801042F4u: goto label_801042F4;
    case 0x801042F8u: goto label_801042F8;
    case 0x801042FCu: goto label_801042FC;
    case 0x80104300u: goto label_80104300;
    case 0x80104304u: goto label_80104304;
    case 0x80104308u: goto label_80104308;
    case 0x8010430Cu: goto label_8010430C;
    case 0x80104310u: goto label_80104310;
    case 0x80104314u: goto label_80104314;
    case 0x80104318u: goto label_80104318;
    case 0x8010431Cu: goto label_8010431C;
    case 0x80104320u: goto label_80104320;
    case 0x80104324u: goto label_80104324;
    case 0x80104328u: goto label_80104328;
    case 0x8010432Cu: goto label_8010432C;
    case 0x80104330u: goto label_80104330;
    case 0x80104334u: goto label_80104334;
    case 0x80104338u: goto label_80104338;
    case 0x8010433Cu: goto label_8010433C;
    case 0x80104340u: goto label_80104340;
    case 0x80104344u: goto label_80104344;
    case 0x80104348u: goto label_80104348;
    case 0x8010434Cu: goto label_8010434C;
    case 0x80104350u: goto label_80104350;
    case 0x80104354u: goto label_80104354;
    case 0x80104358u: goto label_80104358;
    case 0x8010435Cu: goto label_8010435C;
    case 0x80104360u: goto label_80104360;
    case 0x80104364u: goto label_80104364;
    case 0x80104368u: goto label_80104368;
    case 0x8010436Cu: goto label_8010436C;
    case 0x80104370u: goto label_80104370;
    case 0x80104374u: goto label_80104374;
    case 0x80104378u: goto label_80104378;
    case 0x8010437Cu: goto label_8010437C;
    case 0x80104380u: goto label_80104380;
    case 0x80104384u: goto label_80104384;
    case 0x80104388u: goto label_80104388;
    case 0x8010438Cu: goto label_8010438C;
    case 0x80104390u: goto label_80104390;
    case 0x80104394u: goto label_80104394;
    case 0x80104398u: goto label_80104398;
    case 0x8010439Cu: goto label_8010439C;
    case 0x801043A0u: goto label_801043A0;
    case 0x801043A4u: goto label_801043A4;
    case 0x801043A8u: goto label_801043A8;
    case 0x801043ACu: goto label_801043AC;
    case 0x801043B0u: goto label_801043B0;
    case 0x801043B4u: goto label_801043B4;
    case 0x801043B8u: goto label_801043B8;
    case 0x801043BCu: goto label_801043BC;
    case 0x801043C0u: goto label_801043C0;
    case 0x801043C4u: goto label_801043C4;
    case 0x801043C8u: goto label_801043C8;
    case 0x801043CCu: goto label_801043CC;
    case 0x801043D0u: goto label_801043D0;
    case 0x801043D4u: goto label_801043D4;
    case 0x801043D8u: goto label_801043D8;
    case 0x801043DCu: goto label_801043DC;
    case 0x801043E0u: goto label_801043E0;
    case 0x801043E4u: goto label_801043E4;
    case 0x801043E8u: goto label_801043E8;
    case 0x801043ECu: goto label_801043EC;
    case 0x801043F0u: goto label_801043F0;
    case 0x801043F4u: goto label_801043F4;
    case 0x801043F8u: goto label_801043F8;
    case 0x801043FCu: goto label_801043FC;
    case 0x80104400u: goto label_80104400;
    case 0x80104404u: goto label_80104404;
    case 0x80104408u: goto label_80104408;
    case 0x8010440Cu: goto label_8010440C;
    case 0x80104410u: goto label_80104410;
    case 0x80104414u: goto label_80104414;
    case 0x80104418u: goto label_80104418;
    case 0x8010441Cu: goto label_8010441C;
    case 0x80104420u: goto label_80104420;
    case 0x80104424u: goto label_80104424;
    case 0x80104428u: goto label_80104428;
    case 0x8010442Cu: goto label_8010442C;
    case 0x80104430u: goto label_80104430;
    case 0x80104434u: goto label_80104434;
    case 0x80104438u: goto label_80104438;
    case 0x8010443Cu: goto label_8010443C;
    case 0x80104440u: goto label_80104440;
    case 0x80104444u: goto label_80104444;
    case 0x80104448u: goto label_80104448;
    case 0x8010444Cu: goto label_8010444C;
    case 0x80104450u: goto label_80104450;
    case 0x80104454u: goto label_80104454;
    case 0x80104458u: goto label_80104458;
    case 0x8010445Cu: goto label_8010445C;
    case 0x80104460u: goto label_80104460;
    case 0x80104464u: goto label_80104464;
    case 0x80104468u: goto label_80104468;
    case 0x8010446Cu: goto label_8010446C;
    case 0x80104470u: goto label_80104470;
    case 0x80104474u: goto label_80104474;
    case 0x80104478u: goto label_80104478;
    case 0x8010447Cu: goto label_8010447C;
    case 0x80104480u: goto label_80104480;
    case 0x80104484u: goto label_80104484;
    case 0x80104488u: goto label_80104488;
    case 0x8010448Cu: goto label_8010448C;
    case 0x80104490u: goto label_80104490;
    case 0x80104494u: goto label_80104494;
    case 0x80104498u: goto label_80104498;
    case 0x8010449Cu: goto label_8010449C;
    case 0x801044A0u: goto label_801044A0;
    case 0x801044A4u: goto label_801044A4;
    case 0x801044A8u: goto label_801044A8;
    case 0x801044ACu: goto label_801044AC;
    case 0x801044B0u: goto label_801044B0;
    case 0x801044B4u: goto label_801044B4;
    case 0x801044B8u: goto label_801044B8;
    case 0x801044BCu: goto label_801044BC;
    case 0x801044C0u: goto label_801044C0;
    case 0x801044C4u: goto label_801044C4;
    case 0x801044C8u: goto label_801044C8;
    case 0x801044CCu: goto label_801044CC;
    case 0x801044D0u: goto label_801044D0;
    case 0x801044D4u: goto label_801044D4;
    case 0x801044D8u: goto label_801044D8;
    case 0x801044DCu: goto label_801044DC;
    case 0x801044E0u: goto label_801044E0;
    case 0x801044E4u: goto label_801044E4;
    case 0x801044E8u: goto label_801044E8;
    case 0x801044ECu: goto label_801044EC;
    case 0x801044F0u: goto label_801044F0;
    case 0x801044F4u: goto label_801044F4;
    case 0x801044F8u: goto label_801044F8;
    case 0x801044FCu: goto label_801044FC;
    case 0x80104500u: goto label_80104500;
    case 0x80104504u: goto label_80104504;
    case 0x80104508u: goto label_80104508;
    case 0x8010450Cu: goto label_8010450C;
    case 0x80104510u: goto label_80104510;
    case 0x80104514u: goto label_80104514;
    case 0x80104518u: goto label_80104518;
    case 0x8010451Cu: goto label_8010451C;
    case 0x80104520u: goto label_80104520;
    case 0x80104524u: goto label_80104524;
    case 0x80104528u: goto label_80104528;
    case 0x8010452Cu: goto label_8010452C;
    case 0x80104530u: goto label_80104530;
    case 0x80104534u: goto label_80104534;
    case 0x80104538u: goto label_80104538;
    case 0x8010453Cu: goto label_8010453C;
    case 0x80104540u: goto label_80104540;
    case 0x80104544u: goto label_80104544;
    case 0x80104548u: goto label_80104548;
    case 0x8010454Cu: goto label_8010454C;
    case 0x80104550u: goto label_80104550;
    case 0x80104554u: goto label_80104554;
    case 0x80104558u: goto label_80104558;
    case 0x8010455Cu: goto label_8010455C;
    case 0x80104560u: goto label_80104560;
    case 0x80104564u: goto label_80104564;
    case 0x80104568u: goto label_80104568;
    case 0x8010456Cu: goto label_8010456C;
    case 0x80104570u: goto label_80104570;
    case 0x80104574u: goto label_80104574;
    case 0x80104578u: goto label_80104578;
    case 0x8010457Cu: goto label_8010457C;
    case 0x80104580u: goto label_80104580;
    case 0x80104584u: goto label_80104584;
    case 0x80104588u: goto label_80104588;
    case 0x8010458Cu: goto label_8010458C;
    case 0x80104590u: goto label_80104590;
    case 0x80104594u: goto label_80104594;
    case 0x80104598u: goto label_80104598;
    case 0x8010459Cu: goto label_8010459C;
    case 0x801045A0u: goto label_801045A0;
    case 0x801045A4u: goto label_801045A4;
    case 0x801045A8u: goto label_801045A8;
    case 0x801045ACu: goto label_801045AC;
    case 0x801045B0u: goto label_801045B0;
    case 0x801045B4u: goto label_801045B4;
    case 0x801045B8u: goto label_801045B8;
    case 0x801045BCu: goto label_801045BC;
    case 0x801045C0u: goto label_801045C0;
    case 0x801045C4u: goto label_801045C4;
    case 0x801045C8u: goto label_801045C8;
    case 0x801045CCu: goto label_801045CC;
    case 0x801045D0u: goto label_801045D0;
    case 0x801045D4u: goto label_801045D4;
    case 0x801045D8u: goto label_801045D8;
    case 0x801045DCu: goto label_801045DC;
    case 0x801045E0u: goto label_801045E0;
    case 0x801045E4u: goto label_801045E4;
    case 0x801045E8u: goto label_801045E8;
    case 0x801045ECu: goto label_801045EC;
    case 0x801045F0u: goto label_801045F0;
    case 0x801045F4u: goto label_801045F4;
    case 0x801045F8u: goto label_801045F8;
    case 0x801045FCu: goto label_801045FC;
    case 0x80104600u: goto label_80104600;
    case 0x80104604u: goto label_80104604;
    case 0x80104608u: goto label_80104608;
    case 0x8010460Cu: goto label_8010460C;
    case 0x80104610u: goto label_80104610;
    case 0x80104614u: goto label_80104614;
    case 0x80104618u: goto label_80104618;
    case 0x8010461Cu: goto label_8010461C;
    case 0x80104620u: goto label_80104620;
    case 0x80104624u: goto label_80104624;
    case 0x80104628u: goto label_80104628;
    case 0x8010462Cu: goto label_8010462C;
    case 0x80104630u: goto label_80104630;
    case 0x80104634u: goto label_80104634;
    case 0x80104638u: goto label_80104638;
    case 0x8010463Cu: goto label_8010463C;
    case 0x80104640u: goto label_80104640;
    case 0x80104644u: goto label_80104644;
    case 0x80104648u: goto label_80104648;
    case 0x8010464Cu: goto label_8010464C;
    case 0x80104650u: goto label_80104650;
    case 0x80104654u: goto label_80104654;
    case 0x80104658u: goto label_80104658;
    case 0x8010465Cu: goto label_8010465C;
    case 0x80104660u: goto label_80104660;
    case 0x80104664u: goto label_80104664;
    case 0x80104668u: goto label_80104668;
    case 0x8010466Cu: goto label_8010466C;
    case 0x80104670u: goto label_80104670;
    case 0x80104674u: goto label_80104674;
    case 0x80104678u: goto label_80104678;
    case 0x8010467Cu: goto label_8010467C;
    case 0x80104680u: goto label_80104680;
    case 0x80104684u: goto label_80104684;
    case 0x80104688u: goto label_80104688;
    case 0x8010468Cu: goto label_8010468C;
    case 0x80104690u: goto label_80104690;
    case 0x80104694u: goto label_80104694;
    case 0x80104698u: goto label_80104698;
    case 0x8010469Cu: goto label_8010469C;
    case 0x801046A0u: goto label_801046A0;
    case 0x801046A4u: goto label_801046A4;
    case 0x801046A8u: goto label_801046A8;
    case 0x801046ACu: goto label_801046AC;
    case 0x801046B0u: goto label_801046B0;
    case 0x801046B4u: goto label_801046B4;
    case 0x801046B8u: goto label_801046B8;
    case 0x801046BCu: goto label_801046BC;
    case 0x801046C0u: goto label_801046C0;
    case 0x801046C4u: goto label_801046C4;
    case 0x801046C8u: goto label_801046C8;
    case 0x801046CCu: goto label_801046CC;
    case 0x801046D0u: goto label_801046D0;
    case 0x801046D4u: goto label_801046D4;
    case 0x801046D8u: goto label_801046D8;
    case 0x801046DCu: goto label_801046DC;
    case 0x801046E0u: goto label_801046E0;
    case 0x801046E4u: goto label_801046E4;
    case 0x801046E8u: goto label_801046E8;
    case 0x801046ECu: goto label_801046EC;
    case 0x801046F0u: goto label_801046F0;
    case 0x801046F4u: goto label_801046F4;
    case 0x801046F8u: goto label_801046F8;
    case 0x801046FCu: goto label_801046FC;
    case 0x80104700u: goto label_80104700;
    case 0x80104704u: goto label_80104704;
    case 0x80104708u: goto label_80104708;
    case 0x8010470Cu: goto label_8010470C;
    case 0x80104710u: goto label_80104710;
    case 0x80104714u: goto label_80104714;
    case 0x80104718u: goto label_80104718;
    case 0x8010471Cu: goto label_8010471C;
    case 0x80104720u: goto label_80104720;
    case 0x80104724u: goto label_80104724;
    case 0x80104728u: goto label_80104728;
    case 0x8010472Cu: goto label_8010472C;
    case 0x80104730u: goto label_80104730;
    case 0x80104734u: goto label_80104734;
    case 0x80104738u: goto label_80104738;
    case 0x8010473Cu: goto label_8010473C;
    case 0x80104740u: goto label_80104740;
    case 0x80104744u: goto label_80104744;
    case 0x80104748u: goto label_80104748;
    case 0x8010474Cu: goto label_8010474C;
    case 0x80104750u: goto label_80104750;
    case 0x80104754u: goto label_80104754;
    case 0x80104758u: goto label_80104758;
    case 0x8010475Cu: goto label_8010475C;
    case 0x80104760u: goto label_80104760;
    case 0x80104764u: goto label_80104764;
    case 0x80104768u: goto label_80104768;
    case 0x8010476Cu: goto label_8010476C;
    case 0x80104770u: goto label_80104770;
    case 0x80104774u: goto label_80104774;
    case 0x80104778u: goto label_80104778;
    case 0x8010477Cu: goto label_8010477C;
    case 0x80104780u: goto label_80104780;
    case 0x80104784u: goto label_80104784;
    case 0x80104788u: goto label_80104788;
    case 0x8010478Cu: goto label_8010478C;
    case 0x80104790u: goto label_80104790;
    case 0x80104794u: goto label_80104794;
    case 0x80104798u: goto label_80104798;
    case 0x8010479Cu: goto label_8010479C;
    case 0x801047A0u: goto label_801047A0;
    case 0x801047A4u: goto label_801047A4;
    case 0x801047A8u: goto label_801047A8;
    case 0x801047ACu: goto label_801047AC;
    case 0x801047B0u: goto label_801047B0;
    case 0x801047B4u: goto label_801047B4;
    case 0x801047B8u: goto label_801047B8;
    case 0x801047BCu: goto label_801047BC;
    case 0x801047C0u: goto label_801047C0;
    case 0x801047C4u: goto label_801047C4;
    case 0x801047C8u: goto label_801047C8;
    case 0x801047CCu: goto label_801047CC;
    case 0x801047D0u: goto label_801047D0;
    case 0x801047D4u: goto label_801047D4;
    case 0x801047D8u: goto label_801047D8;
    case 0x801047DCu: goto label_801047DC;
    case 0x801047E0u: goto label_801047E0;
    case 0x801047E4u: goto label_801047E4;
    case 0x801047E8u: goto label_801047E8;
    case 0x801047ECu: goto label_801047EC;
    case 0x801047F0u: goto label_801047F0;
    case 0x801047F4u: goto label_801047F4;
    case 0x801047F8u: goto label_801047F8;
    case 0x801047FCu: goto label_801047FC;
    case 0x80104800u: goto label_80104800;
    case 0x80104804u: goto label_80104804;
    case 0x80104808u: goto label_80104808;
    case 0x8010480Cu: goto label_8010480C;
    case 0x80104810u: goto label_80104810;
    case 0x80104814u: goto label_80104814;
    case 0x80104818u: goto label_80104818;
    case 0x8010481Cu: goto label_8010481C;
    case 0x80104820u: goto label_80104820;
    case 0x80104824u: goto label_80104824;
    case 0x80104828u: goto label_80104828;
    case 0x8010482Cu: goto label_8010482C;
    case 0x80104830u: goto label_80104830;
    case 0x80104834u: goto label_80104834;
    case 0x80104838u: goto label_80104838;
    case 0x8010483Cu: goto label_8010483C;
    case 0x80104840u: goto label_80104840;
    case 0x80104844u: goto label_80104844;
    case 0x80104848u: goto label_80104848;
    case 0x8010484Cu: goto label_8010484C;
    case 0x80104850u: goto label_80104850;
    case 0x80104854u: goto label_80104854;
    case 0x80104858u: goto label_80104858;
    case 0x8010485Cu: goto label_8010485C;
    case 0x80104860u: goto label_80104860;
    case 0x80104864u: goto label_80104864;
    case 0x80104868u: goto label_80104868;
    case 0x8010486Cu: goto label_8010486C;
    case 0x80104870u: goto label_80104870;
    case 0x80104874u: goto label_80104874;
    case 0x80104878u: goto label_80104878;
    case 0x8010487Cu: goto label_8010487C;
    case 0x80104880u: goto label_80104880;
    case 0x80104884u: goto label_80104884;
    case 0x80104888u: goto label_80104888;
    case 0x8010488Cu: goto label_8010488C;
    case 0x80104890u: goto label_80104890;
    case 0x80104894u: goto label_80104894;
    case 0x80104898u: goto label_80104898;
    case 0x8010489Cu: goto label_8010489C;
    case 0x801048A0u: goto label_801048A0;
    case 0x801048A4u: goto label_801048A4;
    case 0x801048A8u: goto label_801048A8;
    case 0x801048ACu: goto label_801048AC;
    case 0x801048B0u: goto label_801048B0;
    case 0x801048B4u: goto label_801048B4;
    case 0x801048B8u: goto label_801048B8;
    case 0x801048BCu: goto label_801048BC;
    case 0x801048C0u: goto label_801048C0;
    case 0x801048C4u: goto label_801048C4;
    case 0x801048C8u: goto label_801048C8;
    case 0x801048CCu: goto label_801048CC;
    case 0x801048D0u: goto label_801048D0;
    case 0x801048D4u: goto label_801048D4;
    case 0x801048D8u: goto label_801048D8;
    case 0x801048DCu: goto label_801048DC;
    case 0x801048E0u: goto label_801048E0;
    case 0x801048E4u: goto label_801048E4;
    case 0x801048E8u: goto label_801048E8;
    case 0x801048ECu: goto label_801048EC;
    case 0x801048F0u: goto label_801048F0;
    case 0x801048F4u: goto label_801048F4;
    case 0x801048F8u: goto label_801048F8;
    case 0x801048FCu: goto label_801048FC;
    case 0x80104900u: goto label_80104900;
    case 0x80104904u: goto label_80104904;
    case 0x80104908u: goto label_80104908;
    case 0x8010490Cu: goto label_8010490C;
    case 0x80104910u: goto label_80104910;
    case 0x80104914u: goto label_80104914;
    case 0x80104918u: goto label_80104918;
    case 0x8010491Cu: goto label_8010491C;
    case 0x80104920u: goto label_80104920;
    case 0x80104924u: goto label_80104924;
    case 0x80104928u: goto label_80104928;
    case 0x8010492Cu: goto label_8010492C;
    case 0x80104930u: goto label_80104930;
    case 0x80104934u: goto label_80104934;
    case 0x80104938u: goto label_80104938;
    case 0x8010493Cu: goto label_8010493C;
    case 0x80104940u: goto label_80104940;
    case 0x80104944u: goto label_80104944;
    case 0x80104948u: goto label_80104948;
    case 0x8010494Cu: goto label_8010494C;
    case 0x80104950u: goto label_80104950;
    case 0x80104954u: goto label_80104954;
    case 0x80104958u: goto label_80104958;
    case 0x8010495Cu: goto label_8010495C;
    case 0x80104960u: goto label_80104960;
    case 0x80104964u: goto label_80104964;
    case 0x80104968u: goto label_80104968;
    case 0x8010496Cu: goto label_8010496C;
    case 0x80104970u: goto label_80104970;
    case 0x80104974u: goto label_80104974;
    case 0x80104978u: goto label_80104978;
    case 0x8010497Cu: goto label_8010497C;
    case 0x80104980u: goto label_80104980;
    case 0x80104984u: goto label_80104984;
    case 0x80104988u: goto label_80104988;
    case 0x8010498Cu: goto label_8010498C;
    case 0x80104990u: goto label_80104990;
    case 0x80104994u: goto label_80104994;
    case 0x80104998u: goto label_80104998;
    case 0x8010499Cu: goto label_8010499C;
    case 0x801049A0u: goto label_801049A0;
    case 0x801049A4u: goto label_801049A4;
    case 0x801049A8u: goto label_801049A8;
    case 0x801049ACu: goto label_801049AC;
    case 0x801049B0u: goto label_801049B0;
    case 0x801049B4u: goto label_801049B4;
    case 0x801049B8u: goto label_801049B8;
    case 0x801049BCu: goto label_801049BC;
    case 0x801049C0u: goto label_801049C0;
    case 0x801049C4u: goto label_801049C4;
    case 0x801049C8u: goto label_801049C8;
    case 0x801049CCu: goto label_801049CC;
    case 0x801049D0u: goto label_801049D0;
    case 0x801049D4u: goto label_801049D4;
    case 0x801049D8u: goto label_801049D8;
    case 0x801049DCu: goto label_801049DC;
    case 0x801049E0u: goto label_801049E0;
    case 0x801049E4u: goto label_801049E4;
    case 0x801049E8u: goto label_801049E8;
    case 0x801049ECu: goto label_801049EC;
    case 0x801049F0u: goto label_801049F0;
    case 0x801049F4u: goto label_801049F4;
    case 0x801049F8u: goto label_801049F8;
    case 0x801049FCu: goto label_801049FC;
    case 0x80104A00u: goto label_80104A00;
    case 0x80104A04u: goto label_80104A04;
    case 0x80104A08u: goto label_80104A08;
    case 0x80104A0Cu: goto label_80104A0C;
    case 0x80104A10u: goto label_80104A10;
    case 0x80104A14u: goto label_80104A14;
    case 0x80104A18u: goto label_80104A18;
    case 0x80104A1Cu: goto label_80104A1C;
    case 0x80104A20u: goto label_80104A20;
    case 0x80104A24u: goto label_80104A24;
    case 0x80104A28u: goto label_80104A28;
    case 0x80104A2Cu: goto label_80104A2C;
    case 0x80104A30u: goto label_80104A30;
    case 0x80104A34u: goto label_80104A34;
    case 0x80104A38u: goto label_80104A38;
    case 0x80104A3Cu: goto label_80104A3C;
    case 0x80104A40u: goto label_80104A40;
    case 0x80104A44u: goto label_80104A44;
    case 0x80104A48u: goto label_80104A48;
    case 0x80104A4Cu: goto label_80104A4C;
    case 0x80104A50u: goto label_80104A50;
    case 0x80104A54u: goto label_80104A54;
    case 0x80104A58u: goto label_80104A58;
    case 0x80104A5Cu: goto label_80104A5C;
    case 0x80104A60u: goto label_80104A60;
    case 0x80104A64u: goto label_80104A64;
    case 0x80104A68u: goto label_80104A68;
    case 0x80104A6Cu: goto label_80104A6C;
    case 0x80104A70u: goto label_80104A70;
    case 0x80104A74u: goto label_80104A74;
    case 0x80104A78u: goto label_80104A78;
    case 0x80104A7Cu: goto label_80104A7C;
    case 0x80104A80u: goto label_80104A80;
    case 0x80104A84u: goto label_80104A84;
    case 0x80104A88u: goto label_80104A88;
    case 0x80104A8Cu: goto label_80104A8C;
    case 0x80104A90u: goto label_80104A90;
    case 0x80104A94u: goto label_80104A94;
    case 0x80104A98u: goto label_80104A98;
    case 0x80104A9Cu: goto label_80104A9C;
    case 0x80104AA0u: goto label_80104AA0;
    case 0x80104AA4u: goto label_80104AA4;
    case 0x80104AA8u: goto label_80104AA8;
    case 0x80104AACu: goto label_80104AAC;
    case 0x80104AB0u: goto label_80104AB0;
    case 0x80104AB4u: goto label_80104AB4;
    case 0x80104AB8u: goto label_80104AB8;
    case 0x80104ABCu: goto label_80104ABC;
    case 0x80104AC0u: goto label_80104AC0;
    case 0x80104AC4u: goto label_80104AC4;
    case 0x80104AC8u: goto label_80104AC8;
    case 0x80104ACCu: goto label_80104ACC;
    case 0x80104AD0u: goto label_80104AD0;
    case 0x80104AD4u: goto label_80104AD4;
    case 0x80104AD8u: goto label_80104AD8;
    case 0x80104ADCu: goto label_80104ADC;
    case 0x80104AE0u: goto label_80104AE0;
    case 0x80104AE4u: goto label_80104AE4;
    case 0x80104AE8u: goto label_80104AE8;
    case 0x80104AECu: goto label_80104AEC;
    case 0x80104AF0u: goto label_80104AF0;
    case 0x80104AF4u: goto label_80104AF4;
    case 0x80104AF8u: goto label_80104AF8;
    case 0x80104AFCu: goto label_80104AFC;
    case 0x80104B00u: goto label_80104B00;
    case 0x80104B04u: goto label_80104B04;
    case 0x80104B08u: goto label_80104B08;
    case 0x80104B0Cu: goto label_80104B0C;
    case 0x80104B10u: goto label_80104B10;
    case 0x80104B14u: goto label_80104B14;
    case 0x80104B18u: goto label_80104B18;
    case 0x80104B1Cu: goto label_80104B1C;
    case 0x80104B20u: goto label_80104B20;
    case 0x80104B24u: goto label_80104B24;
    case 0x80104B28u: goto label_80104B28;
    case 0x80104B2Cu: goto label_80104B2C;
    case 0x80104B30u: goto label_80104B30;
    case 0x80104B34u: goto label_80104B34;
    case 0x80104B38u: goto label_80104B38;
    case 0x80104B3Cu: goto label_80104B3C;
    case 0x80104B40u: goto label_80104B40;
    case 0x80104B44u: goto label_80104B44;
    case 0x80104B48u: goto label_80104B48;
    case 0x80104B4Cu: goto label_80104B4C;
    case 0x80104B50u: goto label_80104B50;
    case 0x80104B54u: goto label_80104B54;
    case 0x80104B58u: goto label_80104B58;
    case 0x80104B5Cu: goto label_80104B5C;
    case 0x80104B60u: goto label_80104B60;
    case 0x80104B64u: goto label_80104B64;
    case 0x80104B68u: goto label_80104B68;
    case 0x80104B6Cu: goto label_80104B6C;
    case 0x80104B70u: goto label_80104B70;
    case 0x80104B74u: goto label_80104B74;
    case 0x80104B78u: goto label_80104B78;
    case 0x80104B7Cu: goto label_80104B7C;
    case 0x80104B80u: goto label_80104B80;
    case 0x80104B84u: goto label_80104B84;
    case 0x80104B88u: goto label_80104B88;
    case 0x80104B8Cu: goto label_80104B8C;
    case 0x80104B90u: goto label_80104B90;
    case 0x80104B94u: goto label_80104B94;
    case 0x80104B98u: goto label_80104B98;
    case 0x80104B9Cu: goto label_80104B9C;
    case 0x80104BA0u: goto label_80104BA0;
    case 0x80104BA4u: goto label_80104BA4;
    case 0x80104BA8u: goto label_80104BA8;
    case 0x80104BACu: goto label_80104BAC;
    case 0x80104BB0u: goto label_80104BB0;
    case 0x80104BB4u: goto label_80104BB4;
    case 0x80104BB8u: goto label_80104BB8;
    case 0x80104BBCu: goto label_80104BBC;
    case 0x80104BC0u: goto label_80104BC0;
    case 0x80104BC4u: goto label_80104BC4;
    case 0x80104BC8u: goto label_80104BC8;
    case 0x80104BCCu: goto label_80104BCC;
    case 0x80104BD0u: goto label_80104BD0;
    case 0x80104BD4u: goto label_80104BD4;
    case 0x80104BD8u: goto label_80104BD8;
    case 0x80104BDCu: goto label_80104BDC;
    case 0x80104BE0u: goto label_80104BE0;
    case 0x80104BE4u: goto label_80104BE4;
    case 0x80104BE8u: goto label_80104BE8;
    case 0x80104BECu: goto label_80104BEC;
    case 0x80104BF0u: goto label_80104BF0;
    case 0x80104BF4u: goto label_80104BF4;
    case 0x80104BF8u: goto label_80104BF8;
    case 0x80104BFCu: goto label_80104BFC;
    case 0x80104C00u: goto label_80104C00;
    case 0x80104C04u: goto label_80104C04;
    case 0x80104C08u: goto label_80104C08;
    case 0x80104C0Cu: goto label_80104C0C;
    case 0x80104C10u: goto label_80104C10;
    case 0x80104C14u: goto label_80104C14;
    case 0x80104C18u: goto label_80104C18;
    case 0x80104C1Cu: goto label_80104C1C;
    case 0x80104C20u: goto label_80104C20;
    case 0x80104C24u: goto label_80104C24;
    case 0x80104C28u: goto label_80104C28;
    case 0x80104C2Cu: goto label_80104C2C;
    case 0x80104C30u: goto label_80104C30;
    case 0x80104C34u: goto label_80104C34;
    case 0x80104C38u: goto label_80104C38;
    case 0x80104C3Cu: goto label_80104C3C;
    case 0x80104C40u: goto label_80104C40;
    case 0x80104C44u: goto label_80104C44;
    case 0x80104C48u: goto label_80104C48;
    case 0x80104C4Cu: goto label_80104C4C;
    case 0x80104C50u: goto label_80104C50;
    case 0x80104C54u: goto label_80104C54;
    case 0x80104C58u: goto label_80104C58;
    case 0x80104C5Cu: goto label_80104C5C;
    case 0x80104C60u: goto label_80104C60;
    case 0x80104C64u: goto label_80104C64;
    case 0x80104C68u: goto label_80104C68;
    case 0x80104C6Cu: goto label_80104C6C;
    case 0x80104C70u: goto label_80104C70;
    case 0x80104C74u: goto label_80104C74;
    case 0x80104C78u: goto label_80104C78;
    case 0x80104C7Cu: goto label_80104C7C;
    case 0x80104C80u: goto label_80104C80;
    case 0x80104C84u: goto label_80104C84;
    case 0x80104C88u: goto label_80104C88;
    case 0x80104C8Cu: goto label_80104C8C;
    case 0x80104C90u: goto label_80104C90;
    case 0x80104C94u: goto label_80104C94;
    case 0x80104C98u: goto label_80104C98;
    case 0x80104C9Cu: goto label_80104C9C;
    case 0x80104CA0u: goto label_80104CA0;
    case 0x80104CA4u: goto label_80104CA4;
    case 0x80104CA8u: goto label_80104CA8;
    case 0x80104CACu: goto label_80104CAC;
    case 0x80104CB0u: goto label_80104CB0;
    case 0x80104CB4u: goto label_80104CB4;
    case 0x80104CB8u: goto label_80104CB8;
    case 0x80104CBCu: goto label_80104CBC;
    case 0x80104CC0u: goto label_80104CC0;
    case 0x80104CC4u: goto label_80104CC4;
    case 0x80104CC8u: goto label_80104CC8;
    case 0x80104CCCu: goto label_80104CCC;
    case 0x80104CD0u: goto label_80104CD0;
    case 0x80104CD4u: goto label_80104CD4;
    case 0x80104CD8u: goto label_80104CD8;
    case 0x80104CDCu: goto label_80104CDC;
    case 0x80104CE0u: goto label_80104CE0;
    case 0x80104CE4u: goto label_80104CE4;
    case 0x80104CE8u: goto label_80104CE8;
    case 0x80104CECu: goto label_80104CEC;
    case 0x80104CF0u: goto label_80104CF0;
    case 0x80104CF4u: goto label_80104CF4;
    case 0x80104CF8u: goto label_80104CF8;
    case 0x80104CFCu: goto label_80104CFC;
    case 0x80104D00u: goto label_80104D00;
    case 0x80104D04u: goto label_80104D04;
    case 0x80104D08u: goto label_80104D08;
    case 0x80104D0Cu: goto label_80104D0C;
    case 0x80104D10u: goto label_80104D10;
    case 0x80104D14u: goto label_80104D14;
    case 0x80104D18u: goto label_80104D18;
    case 0x80104D1Cu: goto label_80104D1C;
    case 0x80104D20u: goto label_80104D20;
    case 0x80104D24u: goto label_80104D24;
    case 0x80104D28u: goto label_80104D28;
    case 0x80104D2Cu: goto label_80104D2C;
    case 0x80104D30u: goto label_80104D30;
    case 0x80104D34u: goto label_80104D34;
    case 0x80104D38u: goto label_80104D38;
    case 0x80104D3Cu: goto label_80104D3C;
    case 0x80104D40u: goto label_80104D40;
    case 0x80104D44u: goto label_80104D44;
    case 0x80104D48u: goto label_80104D48;
    case 0x80104D4Cu: goto label_80104D4C;
    case 0x80104D50u: goto label_80104D50;
    case 0x80104D54u: goto label_80104D54;
    case 0x80104D58u: goto label_80104D58;
    case 0x80104D5Cu: goto label_80104D5C;
    case 0x80104D60u: goto label_80104D60;
    case 0x80104D64u: goto label_80104D64;
    case 0x80104D68u: goto label_80104D68;
    case 0x80104D6Cu: goto label_80104D6C;
    case 0x80104D70u: goto label_80104D70;
    case 0x80104D74u: goto label_80104D74;
    case 0x80104D78u: goto label_80104D78;
    case 0x80104D7Cu: goto label_80104D7C;
    case 0x80104D80u: goto label_80104D80;
    case 0x80104D84u: goto label_80104D84;
    case 0x80104D88u: goto label_80104D88;
    case 0x80104D8Cu: goto label_80104D8C;
    case 0x80104D90u: goto label_80104D90;
    case 0x80104D94u: goto label_80104D94;
    case 0x80104D98u: goto label_80104D98;
    case 0x80104D9Cu: goto label_80104D9C;
    case 0x80104DA0u: goto label_80104DA0;
    case 0x80104DA4u: goto label_80104DA4;
    case 0x80104DA8u: goto label_80104DA8;
    case 0x80104DACu: goto label_80104DAC;
    case 0x80104DB0u: goto label_80104DB0;
    case 0x80104DB4u: goto label_80104DB4;
    case 0x80104DB8u: goto label_80104DB8;
    case 0x80104DBCu: goto label_80104DBC;
    case 0x80104DC0u: goto label_80104DC0;
    case 0x80104DC4u: goto label_80104DC4;
    case 0x80104DC8u: goto label_80104DC8;
    case 0x80104DCCu: goto label_80104DCC;
    case 0x80104DD0u: goto label_80104DD0;
    case 0x80104DD4u: goto label_80104DD4;
    case 0x80104DD8u: goto label_80104DD8;
    case 0x80104DDCu: goto label_80104DDC;
    case 0x80104DE0u: goto label_80104DE0;
    case 0x80104DE4u: goto label_80104DE4;
    case 0x80104DE8u: goto label_80104DE8;
    case 0x80104DECu: goto label_80104DEC;
    case 0x80104DF0u: goto label_80104DF0;
    case 0x80104DF4u: goto label_80104DF4;
    case 0x80104DF8u: goto label_80104DF8;
    case 0x80104DFCu: goto label_80104DFC;
    case 0x80104E00u: goto label_80104E00;
    case 0x80104E04u: goto label_80104E04;
    case 0x80104E08u: goto label_80104E08;
    case 0x80104E0Cu: goto label_80104E0C;
    case 0x80104E10u: goto label_80104E10;
    case 0x80104E14u: goto label_80104E14;
    case 0x80104E18u: goto label_80104E18;
    case 0x80104E1Cu: goto label_80104E1C;
    case 0x80104E20u: goto label_80104E20;
    case 0x80104E24u: goto label_80104E24;
    case 0x80104E28u: goto label_80104E28;
    case 0x80104E2Cu: goto label_80104E2C;
    case 0x80104E30u: goto label_80104E30;
    case 0x80104E34u: goto label_80104E34;
    case 0x80104E38u: goto label_80104E38;
    case 0x80104E3Cu: goto label_80104E3C;
    case 0x80104E40u: goto label_80104E40;
    case 0x80104E44u: goto label_80104E44;
    case 0x80104E48u: goto label_80104E48;
    case 0x80104E4Cu: goto label_80104E4C;
    case 0x80104E50u: goto label_80104E50;
    case 0x80104E54u: goto label_80104E54;
    case 0x80104E58u: goto label_80104E58;
    case 0x80104E5Cu: goto label_80104E5C;
    case 0x80104E60u: goto label_80104E60;
    case 0x80104E64u: goto label_80104E64;
    case 0x80104E68u: goto label_80104E68;
    case 0x80104E6Cu: goto label_80104E6C;
    case 0x80104E70u: goto label_80104E70;
    case 0x80104E74u: goto label_80104E74;
    case 0x80104E78u: goto label_80104E78;
    case 0x80104E7Cu: goto label_80104E7C;
    case 0x80104E80u: goto label_80104E80;
    case 0x80104E84u: goto label_80104E84;
    case 0x80104E88u: goto label_80104E88;
    case 0x80104E8Cu: goto label_80104E8C;
    case 0x80104E90u: goto label_80104E90;
    case 0x80104E94u: goto label_80104E94;
    case 0x80104E98u: goto label_80104E98;
    case 0x80104E9Cu: goto label_80104E9C;
    case 0x80104EA0u: goto label_80104EA0;
    case 0x80104EA4u: goto label_80104EA4;
    case 0x80104EA8u: goto label_80104EA8;
    case 0x80104EACu: goto label_80104EAC;
    case 0x80104EB0u: goto label_80104EB0;
    case 0x80104EB4u: goto label_80104EB4;
    case 0x80104EB8u: goto label_80104EB8;
    case 0x80104EBCu: goto label_80104EBC;
    case 0x80104EC0u: goto label_80104EC0;
    case 0x80104EC4u: goto label_80104EC4;
    case 0x80104EC8u: goto label_80104EC8;
    case 0x80104ECCu: goto label_80104ECC;
    case 0x80104ED0u: goto label_80104ED0;
    case 0x80104ED4u: goto label_80104ED4;
    case 0x80104ED8u: goto label_80104ED8;
    case 0x80104EDCu: goto label_80104EDC;
    case 0x80104EE0u: goto label_80104EE0;
    case 0x80104EE4u: goto label_80104EE4;
    case 0x80104EE8u: goto label_80104EE8;
    case 0x80104EECu: goto label_80104EEC;
    case 0x80104EF0u: goto label_80104EF0;
    case 0x80104EF4u: goto label_80104EF4;
    case 0x80104EF8u: goto label_80104EF8;
    case 0x80104EFCu: goto label_80104EFC;
    case 0x80104F00u: goto label_80104F00;
    case 0x80104F04u: goto label_80104F04;
    case 0x80104F08u: goto label_80104F08;
    case 0x80104F0Cu: goto label_80104F0C;
    case 0x80104F10u: goto label_80104F10;
    case 0x80104F14u: goto label_80104F14;
    case 0x80104F18u: goto label_80104F18;
    case 0x80104F1Cu: goto label_80104F1C;
    case 0x80104F20u: goto label_80104F20;
    case 0x80104F24u: goto label_80104F24;
    case 0x80104F28u: goto label_80104F28;
    case 0x80104F2Cu: goto label_80104F2C;
    case 0x80104F30u: goto label_80104F30;
    case 0x80104F34u: goto label_80104F34;
    case 0x80104F38u: goto label_80104F38;
    case 0x80104F3Cu: goto label_80104F3C;
    case 0x80104F40u: goto label_80104F40;
    case 0x80104F44u: goto label_80104F44;
    case 0x80104F48u: goto label_80104F48;
    case 0x80104F4Cu: goto label_80104F4C;
    case 0x80104F50u: goto label_80104F50;
    case 0x80104F54u: goto label_80104F54;
    case 0x80104F58u: goto label_80104F58;
    case 0x80104F5Cu: goto label_80104F5C;
    case 0x80104F60u: goto label_80104F60;
    case 0x80104F64u: goto label_80104F64;
    case 0x80104F68u: goto label_80104F68;
    case 0x80104F6Cu: goto label_80104F6C;
    case 0x80104F70u: goto label_80104F70;
    case 0x80104F74u: goto label_80104F74;
    case 0x80104F78u: goto label_80104F78;
    case 0x80104F7Cu: goto label_80104F7C;
    case 0x80104F80u: goto label_80104F80;
    case 0x80104F84u: goto label_80104F84;
    case 0x80104F88u: goto label_80104F88;
    case 0x80104F8Cu: goto label_80104F8C;
    case 0x80104F90u: goto label_80104F90;
    case 0x80104F94u: goto label_80104F94;
    case 0x80104F98u: goto label_80104F98;
    case 0x80104F9Cu: goto label_80104F9C;
    case 0x80104FA0u: goto label_80104FA0;
    case 0x80104FA4u: goto label_80104FA4;
    case 0x80104FA8u: goto label_80104FA8;
    case 0x80104FACu: goto label_80104FAC;
    case 0x80104FB0u: goto label_80104FB0;
    case 0x80104FB4u: goto label_80104FB4;
    case 0x80104FB8u: goto label_80104FB8;
    case 0x80104FBCu: goto label_80104FBC;
    case 0x80104FC0u: goto label_80104FC0;
    case 0x80104FC4u: goto label_80104FC4;
    case 0x80104FC8u: goto label_80104FC8;
    case 0x80104FCCu: goto label_80104FCC;
    case 0x80104FD0u: goto label_80104FD0;
    case 0x80104FD4u: goto label_80104FD4;
    case 0x80104FD8u: goto label_80104FD8;
    case 0x80104FDCu: goto label_80104FDC;
    case 0x80104FE0u: goto label_80104FE0;
    case 0x80104FE4u: goto label_80104FE4;
    case 0x80104FE8u: goto label_80104FE8;
    case 0x80104FECu: goto label_80104FEC;
    case 0x80104FF0u: goto label_80104FF0;
    case 0x80104FF4u: goto label_80104FF4;
    case 0x80104FF8u: goto label_80104FF8;
    case 0x80104FFCu: goto label_80104FFC;
    case 0x80105000u: goto label_80105000;
    case 0x80105004u: goto label_80105004;
    case 0x80105008u: goto label_80105008;
    case 0x8010500Cu: goto label_8010500C;
    case 0x80105010u: goto label_80105010;
    case 0x80105014u: goto label_80105014;
    case 0x80105018u: goto label_80105018;
    case 0x8010501Cu: goto label_8010501C;
    case 0x80105020u: goto label_80105020;
    case 0x80105024u: goto label_80105024;
    case 0x80105028u: goto label_80105028;
    case 0x8010502Cu: goto label_8010502C;
    case 0x80105030u: goto label_80105030;
    case 0x80105034u: goto label_80105034;
    case 0x80105038u: goto label_80105038;
    case 0x8010503Cu: goto label_8010503C;
    case 0x80105040u: goto label_80105040;
    case 0x80105044u: goto label_80105044;
    case 0x80105048u: goto label_80105048;
    case 0x8010504Cu: goto label_8010504C;
    case 0x80105050u: goto label_80105050;
    case 0x80105054u: goto label_80105054;
    case 0x80105058u: goto label_80105058;
    case 0x8010505Cu: goto label_8010505C;
    case 0x80105060u: goto label_80105060;
    case 0x80105064u: goto label_80105064;
    case 0x80105068u: goto label_80105068;
    case 0x8010506Cu: goto label_8010506C;
    case 0x80105070u: goto label_80105070;
    case 0x80105074u: goto label_80105074;
    case 0x80105078u: goto label_80105078;
    case 0x8010507Cu: goto label_8010507C;
    case 0x80105080u: goto label_80105080;
    case 0x80105084u: goto label_80105084;
    case 0x80105088u: goto label_80105088;
    case 0x8010508Cu: goto label_8010508C;
    case 0x80105090u: goto label_80105090;
    case 0x80105094u: goto label_80105094;
    case 0x80105098u: goto label_80105098;
    case 0x8010509Cu: goto label_8010509C;
    case 0x801050A0u: goto label_801050A0;
    case 0x801050A4u: goto label_801050A4;
    case 0x801050A8u: goto label_801050A8;
    case 0x801050ACu: goto label_801050AC;
    case 0x801050B0u: goto label_801050B0;
    case 0x801050B4u: goto label_801050B4;
    case 0x801050B8u: goto label_801050B8;
    case 0x801050BCu: goto label_801050BC;
    case 0x801050C0u: goto label_801050C0;
    case 0x801050C4u: goto label_801050C4;
    case 0x801050C8u: goto label_801050C8;
    case 0x801050CCu: goto label_801050CC;
    case 0x801050D0u: goto label_801050D0;
    case 0x801050D4u: goto label_801050D4;
    case 0x801050D8u: goto label_801050D8;
    case 0x801050DCu: goto label_801050DC;
    case 0x801050E0u: goto label_801050E0;
    case 0x801050E4u: goto label_801050E4;
    case 0x801050E8u: goto label_801050E8;
    case 0x801050ECu: goto label_801050EC;
    case 0x801050F0u: goto label_801050F0;
    case 0x801050F4u: goto label_801050F4;
    case 0x801050F8u: goto label_801050F8;
    case 0x801050FCu: goto label_801050FC;
    case 0x80105100u: goto label_80105100;
    case 0x80105104u: goto label_80105104;
    case 0x80105108u: goto label_80105108;
    case 0x8010510Cu: goto label_8010510C;
    case 0x80105110u: goto label_80105110;
    case 0x80105114u: goto label_80105114;
    case 0x80105118u: goto label_80105118;
    case 0x8010511Cu: goto label_8010511C;
    case 0x80105120u: goto label_80105120;
    case 0x80105124u: goto label_80105124;
    case 0x80105128u: goto label_80105128;
    case 0x8010512Cu: goto label_8010512C;
    case 0x80105130u: goto label_80105130;
    case 0x80105134u: goto label_80105134;
    case 0x80105138u: goto label_80105138;
    case 0x8010513Cu: goto label_8010513C;
    case 0x80105140u: goto label_80105140;
    case 0x80105144u: goto label_80105144;
    case 0x80105148u: goto label_80105148;
    case 0x8010514Cu: goto label_8010514C;
    case 0x80105150u: goto label_80105150;
    case 0x80105154u: goto label_80105154;
    case 0x80105158u: goto label_80105158;
    case 0x8010515Cu: goto label_8010515C;
    case 0x80105160u: goto label_80105160;
    case 0x80105164u: goto label_80105164;
    case 0x80105168u: goto label_80105168;
    case 0x8010516Cu: goto label_8010516C;
    case 0x80105170u: goto label_80105170;
    case 0x80105174u: goto label_80105174;
    case 0x80105178u: goto label_80105178;
    case 0x8010517Cu: goto label_8010517C;
    case 0x80105180u: goto label_80105180;
    case 0x80105184u: goto label_80105184;
    case 0x80105188u: goto label_80105188;
    case 0x8010518Cu: goto label_8010518C;
    case 0x80105190u: goto label_80105190;
    case 0x80105194u: goto label_80105194;
    case 0x80105198u: goto label_80105198;
    case 0x8010519Cu: goto label_8010519C;
    case 0x801051A0u: goto label_801051A0;
    case 0x801051A4u: goto label_801051A4;
    case 0x801051A8u: goto label_801051A8;
    case 0x801051ACu: goto label_801051AC;
    case 0x801051B0u: goto label_801051B0;
    case 0x801051B4u: goto label_801051B4;
    case 0x801051B8u: goto label_801051B8;
    case 0x801051BCu: goto label_801051BC;
    case 0x801051C0u: goto label_801051C0;
    case 0x801051C4u: goto label_801051C4;
    case 0x801051C8u: goto label_801051C8;
    case 0x801051CCu: goto label_801051CC;
    case 0x801051D0u: goto label_801051D0;
    case 0x801051D4u: goto label_801051D4;
    case 0x801051D8u: goto label_801051D8;
    case 0x801051DCu: goto label_801051DC;
    case 0x801051E0u: goto label_801051E0;
    case 0x801051E4u: goto label_801051E4;
    case 0x801051E8u: goto label_801051E8;
    case 0x801051ECu: goto label_801051EC;
    case 0x801051F0u: goto label_801051F0;
    case 0x801051F4u: goto label_801051F4;
    case 0x801051F8u: goto label_801051F8;
    case 0x801051FCu: goto label_801051FC;
    case 0x80105200u: goto label_80105200;
    case 0x80105204u: goto label_80105204;
    case 0x80105208u: goto label_80105208;
    case 0x8010520Cu: goto label_8010520C;
    case 0x80105210u: goto label_80105210;
    case 0x80105214u: goto label_80105214;
    case 0x80105218u: goto label_80105218;
    case 0x8010521Cu: goto label_8010521C;
    case 0x80105220u: goto label_80105220;
    case 0x80105224u: goto label_80105224;
    case 0x80105228u: goto label_80105228;
    case 0x8010522Cu: goto label_8010522C;
    case 0x80105230u: goto label_80105230;
    case 0x80105234u: goto label_80105234;
    case 0x80105238u: goto label_80105238;
    case 0x8010523Cu: goto label_8010523C;
    case 0x80105240u: goto label_80105240;
    case 0x80105244u: goto label_80105244;
    case 0x80105248u: goto label_80105248;
    case 0x8010524Cu: goto label_8010524C;
    case 0x80105250u: goto label_80105250;
    case 0x80105254u: goto label_80105254;
    case 0x80105258u: goto label_80105258;
    case 0x8010525Cu: goto label_8010525C;
    case 0x80105260u: goto label_80105260;
    case 0x80105264u: goto label_80105264;
    case 0x80105268u: goto label_80105268;
    case 0x8010526Cu: goto label_8010526C;
    case 0x80105270u: goto label_80105270;
    case 0x80105274u: goto label_80105274;
    case 0x80105278u: goto label_80105278;
    case 0x8010527Cu: goto label_8010527C;
    case 0x80105280u: goto label_80105280;
    case 0x80105284u: goto label_80105284;
    case 0x80105288u: goto label_80105288;
    case 0x8010528Cu: goto label_8010528C;
    case 0x80105290u: goto label_80105290;
    case 0x80105294u: goto label_80105294;
    case 0x80105298u: goto label_80105298;
    case 0x8010529Cu: goto label_8010529C;
    case 0x801052A0u: goto label_801052A0;
    case 0x801052A4u: goto label_801052A4;
    case 0x801052A8u: goto label_801052A8;
    case 0x801052ACu: goto label_801052AC;
    case 0x801052B0u: goto label_801052B0;
    case 0x801052B4u: goto label_801052B4;
    case 0x801052B8u: goto label_801052B8;
    case 0x801052BCu: goto label_801052BC;
    case 0x801052C0u: goto label_801052C0;
    case 0x801052C4u: goto label_801052C4;
    case 0x801052C8u: goto label_801052C8;
    case 0x801052CCu: goto label_801052CC;
    case 0x801052D0u: goto label_801052D0;
    case 0x801052D4u: goto label_801052D4;
    case 0x801052D8u: goto label_801052D8;
    case 0x801052DCu: goto label_801052DC;
    case 0x801052E0u: goto label_801052E0;
    case 0x801052E4u: goto label_801052E4;
    case 0x801052E8u: goto label_801052E8;
    case 0x801052ECu: goto label_801052EC;
    case 0x801052F0u: goto label_801052F0;
    case 0x801052F4u: goto label_801052F4;
    case 0x801052F8u: goto label_801052F8;
    case 0x801052FCu: goto label_801052FC;
    case 0x80105300u: goto label_80105300;
    case 0x80105304u: goto label_80105304;
    case 0x80105308u: goto label_80105308;
    case 0x8010530Cu: goto label_8010530C;
    case 0x80105310u: goto label_80105310;
    case 0x80105314u: goto label_80105314;
    case 0x80105318u: goto label_80105318;
    case 0x8010531Cu: goto label_8010531C;
    case 0x80105320u: goto label_80105320;
    case 0x80105324u: goto label_80105324;
    case 0x80105328u: goto label_80105328;
    case 0x8010532Cu: goto label_8010532C;
    case 0x80105330u: goto label_80105330;
    case 0x80105334u: goto label_80105334;
    case 0x80105338u: goto label_80105338;
    case 0x8010533Cu: goto label_8010533C;
    case 0x80105340u: goto label_80105340;
    case 0x80105344u: goto label_80105344;
    case 0x80105348u: goto label_80105348;
    case 0x8010534Cu: goto label_8010534C;
    case 0x80105350u: goto label_80105350;
    case 0x80105354u: goto label_80105354;
    case 0x80105358u: goto label_80105358;
    case 0x8010535Cu: goto label_8010535C;
    case 0x80105360u: goto label_80105360;
    case 0x80105364u: goto label_80105364;
    case 0x80105368u: goto label_80105368;
    case 0x8010536Cu: goto label_8010536C;
    case 0x80105370u: goto label_80105370;
    case 0x80105374u: goto label_80105374;
    case 0x80105378u: goto label_80105378;
    case 0x8010537Cu: goto label_8010537C;
    case 0x80105380u: goto label_80105380;
    case 0x80105384u: goto label_80105384;
    case 0x80105388u: goto label_80105388;
    case 0x8010538Cu: goto label_8010538C;
    case 0x80105390u: goto label_80105390;
    case 0x80105394u: goto label_80105394;
    case 0x80105398u: goto label_80105398;
    case 0x8010539Cu: goto label_8010539C;
    case 0x801053A0u: goto label_801053A0;
    case 0x801053A4u: goto label_801053A4;
    case 0x801053A8u: goto label_801053A8;
    case 0x801053ACu: goto label_801053AC;
    case 0x801053B0u: goto label_801053B0;
    case 0x801053B4u: goto label_801053B4;
    case 0x801053B8u: goto label_801053B8;
    case 0x801053BCu: goto label_801053BC;
    case 0x801053C0u: goto label_801053C0;
    case 0x801053C4u: goto label_801053C4;
    case 0x801053C8u: goto label_801053C8;
    case 0x801053CCu: goto label_801053CC;
    case 0x801053D0u: goto label_801053D0;
    case 0x801053D4u: goto label_801053D4;
    case 0x801053D8u: goto label_801053D8;
    case 0x801053DCu: goto label_801053DC;
    case 0x801053E0u: goto label_801053E0;
    case 0x801053E4u: goto label_801053E4;
    case 0x801053E8u: goto label_801053E8;
    case 0x801053ECu: goto label_801053EC;
    case 0x801053F0u: goto label_801053F0;
    case 0x801053F4u: goto label_801053F4;
    case 0x801053F8u: goto label_801053F8;
    case 0x801053FCu: goto label_801053FC;
    case 0x80105400u: goto label_80105400;
    case 0x80105404u: goto label_80105404;
    case 0x80105408u: goto label_80105408;
    case 0x8010540Cu: goto label_8010540C;
    case 0x80105410u: goto label_80105410;
    case 0x80105414u: goto label_80105414;
    case 0x80105418u: goto label_80105418;
    case 0x8010541Cu: goto label_8010541C;
    case 0x80105420u: goto label_80105420;
    case 0x80105424u: goto label_80105424;
    case 0x80105428u: goto label_80105428;
    case 0x8010542Cu: goto label_8010542C;
    case 0x80105430u: goto label_80105430;
    case 0x80105434u: goto label_80105434;
    case 0x80105438u: goto label_80105438;
    case 0x8010543Cu: goto label_8010543C;
    case 0x80105440u: goto label_80105440;
    case 0x80105444u: goto label_80105444;
    case 0x80105448u: goto label_80105448;
    case 0x8010544Cu: goto label_8010544C;
    case 0x80105450u: goto label_80105450;
    case 0x80105454u: goto label_80105454;
    case 0x80105458u: goto label_80105458;
    case 0x8010545Cu: goto label_8010545C;
    case 0x80105460u: goto label_80105460;
    case 0x80105464u: goto label_80105464;
    case 0x80105468u: goto label_80105468;
    case 0x8010546Cu: goto label_8010546C;
    case 0x80105470u: goto label_80105470;
    case 0x80105474u: goto label_80105474;
    case 0x80105478u: goto label_80105478;
    case 0x8010547Cu: goto label_8010547C;
    case 0x80105480u: goto label_80105480;
    case 0x80105484u: goto label_80105484;
    case 0x80105488u: goto label_80105488;
    case 0x8010548Cu: goto label_8010548C;
    case 0x80105490u: goto label_80105490;
    case 0x80105494u: goto label_80105494;
    case 0x80105498u: goto label_80105498;
    case 0x8010549Cu: goto label_8010549C;
    case 0x801054A0u: goto label_801054A0;
    case 0x801054A4u: goto label_801054A4;
    case 0x801054A8u: goto label_801054A8;
    case 0x801054ACu: goto label_801054AC;
    case 0x801054B0u: goto label_801054B0;
    case 0x801054B4u: goto label_801054B4;
    case 0x801054B8u: goto label_801054B8;
    case 0x801054BCu: goto label_801054BC;
    case 0x801054C0u: goto label_801054C0;
    case 0x801054C4u: goto label_801054C4;
    case 0x801054C8u: goto label_801054C8;
    case 0x801054CCu: goto label_801054CC;
    case 0x801054D0u: goto label_801054D0;
    case 0x801054D4u: goto label_801054D4;
    case 0x801054D8u: goto label_801054D8;
    case 0x801054DCu: goto label_801054DC;
    case 0x801054E0u: goto label_801054E0;
    case 0x801054E4u: goto label_801054E4;
    case 0x801054E8u: goto label_801054E8;
    case 0x801054ECu: goto label_801054EC;
    case 0x801054F0u: goto label_801054F0;
    case 0x801054F4u: goto label_801054F4;
    case 0x801054F8u: goto label_801054F8;
    case 0x801054FCu: goto label_801054FC;
    case 0x80105500u: goto label_80105500;
    case 0x80105504u: goto label_80105504;
    case 0x80105508u: goto label_80105508;
    case 0x8010550Cu: goto label_8010550C;
    case 0x80105510u: goto label_80105510;
    case 0x80105514u: goto label_80105514;
    case 0x80105518u: goto label_80105518;
    case 0x8010551Cu: goto label_8010551C;
    case 0x80105520u: goto label_80105520;
    case 0x80105524u: goto label_80105524;
    case 0x80105528u: goto label_80105528;
    case 0x8010552Cu: goto label_8010552C;
    case 0x80105530u: goto label_80105530;
    case 0x80105534u: goto label_80105534;
    case 0x80105538u: goto label_80105538;
    case 0x8010553Cu: goto label_8010553C;
    case 0x80105540u: goto label_80105540;
    case 0x80105544u: goto label_80105544;
    case 0x80105548u: goto label_80105548;
    case 0x8010554Cu: goto label_8010554C;
    case 0x80105550u: goto label_80105550;
    case 0x80105554u: goto label_80105554;
    case 0x80105558u: goto label_80105558;
    case 0x8010555Cu: goto label_8010555C;
    case 0x80105560u: goto label_80105560;
    case 0x80105564u: goto label_80105564;
    case 0x80105568u: goto label_80105568;
    case 0x8010556Cu: goto label_8010556C;
    case 0x80105570u: goto label_80105570;
    case 0x80105574u: goto label_80105574;
    case 0x80105578u: goto label_80105578;
    case 0x8010557Cu: goto label_8010557C;
    case 0x80105580u: goto label_80105580;
    case 0x80105584u: goto label_80105584;
    case 0x80105588u: goto label_80105588;
    case 0x8010558Cu: goto label_8010558C;
    case 0x80105590u: goto label_80105590;
    case 0x80105594u: goto label_80105594;
    case 0x80105598u: goto label_80105598;
    case 0x8010559Cu: goto label_8010559C;
    case 0x801055A0u: goto label_801055A0;
    case 0x801055A4u: goto label_801055A4;
    case 0x801055A8u: goto label_801055A8;
    case 0x801055ACu: goto label_801055AC;
    case 0x801055B0u: goto label_801055B0;
    case 0x801055B4u: goto label_801055B4;
    case 0x801055B8u: goto label_801055B8;
    case 0x801055BCu: goto label_801055BC;
    case 0x801055C0u: goto label_801055C0;
    case 0x801055C4u: goto label_801055C4;
    case 0x801055C8u: goto label_801055C8;
    case 0x801055CCu: goto label_801055CC;
    case 0x801055D0u: goto label_801055D0;
    case 0x801055D4u: goto label_801055D4;
    case 0x801055D8u: goto label_801055D8;
    case 0x801055DCu: goto label_801055DC;
    case 0x801055E0u: goto label_801055E0;
    case 0x801055E4u: goto label_801055E4;
    case 0x801055E8u: goto label_801055E8;
    case 0x801055ECu: goto label_801055EC;
    case 0x801055F0u: goto label_801055F0;
    case 0x801055F4u: goto label_801055F4;
    case 0x801055F8u: goto label_801055F8;
    case 0x801055FCu: goto label_801055FC;
    case 0x80105600u: goto label_80105600;
    case 0x80105604u: goto label_80105604;
    case 0x80105608u: goto label_80105608;
    case 0x8010560Cu: goto label_8010560C;
    case 0x80105610u: goto label_80105610;
    case 0x80105614u: goto label_80105614;
    case 0x80105618u: goto label_80105618;
    case 0x8010561Cu: goto label_8010561C;
    case 0x80105620u: goto label_80105620;
    case 0x80105624u: goto label_80105624;
    case 0x80105628u: goto label_80105628;
    case 0x8010562Cu: goto label_8010562C;
    case 0x80105630u: goto label_80105630;
    case 0x80105634u: goto label_80105634;
    case 0x80105638u: goto label_80105638;
    case 0x8010563Cu: goto label_8010563C;
    case 0x80105640u: goto label_80105640;
    case 0x80105644u: goto label_80105644;
    case 0x80105648u: goto label_80105648;
    case 0x8010564Cu: goto label_8010564C;
    case 0x80105650u: goto label_80105650;
    case 0x80105654u: goto label_80105654;
    case 0x80105658u: goto label_80105658;
    case 0x8010565Cu: goto label_8010565C;
    case 0x80105660u: goto label_80105660;
    case 0x80105664u: goto label_80105664;
    case 0x80105668u: goto label_80105668;
    case 0x8010566Cu: goto label_8010566C;
    case 0x80105670u: goto label_80105670;
    case 0x80105674u: goto label_80105674;
    case 0x80105678u: goto label_80105678;
    case 0x8010567Cu: goto label_8010567C;
    case 0x80105680u: goto label_80105680;
    case 0x80105684u: goto label_80105684;
    case 0x80105688u: goto label_80105688;
    case 0x8010568Cu: goto label_8010568C;
    case 0x80105690u: goto label_80105690;
    case 0x80105694u: goto label_80105694;
    case 0x80105698u: goto label_80105698;
    case 0x8010569Cu: goto label_8010569C;
    case 0x801056A0u: goto label_801056A0;
    case 0x801056A4u: goto label_801056A4;
    case 0x801056A8u: goto label_801056A8;
    case 0x801056ACu: goto label_801056AC;
    case 0x801056B0u: goto label_801056B0;
    case 0x801056B4u: goto label_801056B4;
    case 0x801056B8u: goto label_801056B8;
    case 0x801056BCu: goto label_801056BC;
    case 0x801056C0u: goto label_801056C0;
    case 0x801056C4u: goto label_801056C4;
    case 0x801056C8u: goto label_801056C8;
    case 0x801056CCu: goto label_801056CC;
    case 0x801056D0u: goto label_801056D0;
    case 0x801056D4u: goto label_801056D4;
    case 0x801056D8u: goto label_801056D8;
    case 0x801056DCu: goto label_801056DC;
    case 0x801056E0u: goto label_801056E0;
    case 0x801056E4u: goto label_801056E4;
    case 0x801056E8u: goto label_801056E8;
    case 0x801056ECu: goto label_801056EC;
    case 0x801056F0u: goto label_801056F0;
    case 0x801056F4u: goto label_801056F4;
    case 0x801056F8u: goto label_801056F8;
    case 0x801056FCu: goto label_801056FC;
    case 0x80105700u: goto label_80105700;
    case 0x80105704u: goto label_80105704;
    case 0x80105708u: goto label_80105708;
    case 0x8010570Cu: goto label_8010570C;
    case 0x80105710u: goto label_80105710;
    case 0x80105714u: goto label_80105714;
    case 0x80105718u: goto label_80105718;
    case 0x8010571Cu: goto label_8010571C;
    case 0x80105720u: goto label_80105720;
    case 0x80105724u: goto label_80105724;
    case 0x80105728u: goto label_80105728;
    case 0x8010572Cu: goto label_8010572C;
    case 0x80105730u: goto label_80105730;
    case 0x80105734u: goto label_80105734;
    case 0x80105738u: goto label_80105738;
    case 0x8010573Cu: goto label_8010573C;
    case 0x80105740u: goto label_80105740;
    case 0x80105744u: goto label_80105744;
    case 0x80105748u: goto label_80105748;
    case 0x8010574Cu: goto label_8010574C;
    case 0x80105750u: goto label_80105750;
    case 0x80105754u: goto label_80105754;
    case 0x80105758u: goto label_80105758;
    case 0x8010575Cu: goto label_8010575C;
    case 0x80105760u: goto label_80105760;
    case 0x80105764u: goto label_80105764;
    case 0x80105768u: goto label_80105768;
    case 0x8010576Cu: goto label_8010576C;
    case 0x80105770u: goto label_80105770;
    case 0x80105774u: goto label_80105774;
    case 0x80105778u: goto label_80105778;
    case 0x8010577Cu: goto label_8010577C;
    case 0x80105780u: goto label_80105780;
    case 0x80105784u: goto label_80105784;
    case 0x80105788u: goto label_80105788;
    case 0x8010578Cu: goto label_8010578C;
    case 0x80105790u: goto label_80105790;
    case 0x80105794u: goto label_80105794;
    case 0x80105798u: goto label_80105798;
    case 0x8010579Cu: goto label_8010579C;
    case 0x801057A0u: goto label_801057A0;
    case 0x801057A4u: goto label_801057A4;
    case 0x801057A8u: goto label_801057A8;
    case 0x801057ACu: goto label_801057AC;
    case 0x801057B0u: goto label_801057B0;
    case 0x801057B4u: goto label_801057B4;
    case 0x801057B8u: goto label_801057B8;
    case 0x801057BCu: goto label_801057BC;
    case 0x801057C0u: goto label_801057C0;
    case 0x801057C4u: goto label_801057C4;
    case 0x801057C8u: goto label_801057C8;
    case 0x801057CCu: goto label_801057CC;
    case 0x801057D0u: goto label_801057D0;
    case 0x801057D4u: goto label_801057D4;
    case 0x801057D8u: goto label_801057D8;
    case 0x801057DCu: goto label_801057DC;
    case 0x801057E0u: goto label_801057E0;
    case 0x801057E4u: goto label_801057E4;
    case 0x801057E8u: goto label_801057E8;
    case 0x801057ECu: goto label_801057EC;
    case 0x801057F0u: goto label_801057F0;
    case 0x801057F4u: goto label_801057F4;
    case 0x801057F8u: goto label_801057F8;
    case 0x801057FCu: goto label_801057FC;
    case 0x80105800u: goto label_80105800;
    case 0x80105804u: goto label_80105804;
    case 0x80105808u: goto label_80105808;
    case 0x8010580Cu: goto label_8010580C;
    case 0x80105810u: goto label_80105810;
    case 0x80105814u: goto label_80105814;
    case 0x80105818u: goto label_80105818;
    case 0x8010581Cu: goto label_8010581C;
    case 0x80105820u: goto label_80105820;
    case 0x80105824u: goto label_80105824;
    case 0x80105828u: goto label_80105828;
    case 0x8010582Cu: goto label_8010582C;
    case 0x80105830u: goto label_80105830;
    case 0x80105834u: goto label_80105834;
    case 0x80105838u: goto label_80105838;
    case 0x8010583Cu: goto label_8010583C;
    case 0x80105840u: goto label_80105840;
    case 0x80105844u: goto label_80105844;
    case 0x80105848u: goto label_80105848;
    case 0x8010584Cu: goto label_8010584C;
    case 0x80105850u: goto label_80105850;
    case 0x80105854u: goto label_80105854;
    case 0x80105858u: goto label_80105858;
    case 0x8010585Cu: goto label_8010585C;
    case 0x80105860u: goto label_80105860;
    case 0x80105864u: goto label_80105864;
    case 0x80105868u: goto label_80105868;
    case 0x8010586Cu: goto label_8010586C;
    case 0x80105870u: goto label_80105870;
    case 0x80105874u: goto label_80105874;
    case 0x80105878u: goto label_80105878;
    case 0x8010587Cu: goto label_8010587C;
    case 0x80105880u: goto label_80105880;
    case 0x80105884u: goto label_80105884;
    case 0x80105888u: goto label_80105888;
    case 0x8010588Cu: goto label_8010588C;
    case 0x80105890u: goto label_80105890;
    case 0x80105894u: goto label_80105894;
    case 0x80105898u: goto label_80105898;
    case 0x8010589Cu: goto label_8010589C;
    case 0x801058A0u: goto label_801058A0;
    case 0x801058A4u: goto label_801058A4;
    case 0x801058A8u: goto label_801058A8;
    case 0x801058ACu: goto label_801058AC;
    case 0x801058B0u: goto label_801058B0;
    case 0x801058B4u: goto label_801058B4;
    case 0x801058B8u: goto label_801058B8;
    case 0x801058BCu: goto label_801058BC;
    case 0x801058C0u: goto label_801058C0;
    case 0x801058C4u: goto label_801058C4;
    case 0x801058C8u: goto label_801058C8;
    case 0x801058CCu: goto label_801058CC;
    case 0x801058D0u: goto label_801058D0;
    case 0x801058D4u: goto label_801058D4;
    case 0x801058D8u: goto label_801058D8;
    case 0x801058DCu: goto label_801058DC;
    case 0x801058E0u: goto label_801058E0;
    case 0x801058E4u: goto label_801058E4;
    case 0x801058E8u: goto label_801058E8;
    case 0x801058ECu: goto label_801058EC;
    case 0x801058F0u: goto label_801058F0;
    case 0x801058F4u: goto label_801058F4;
    case 0x801058F8u: goto label_801058F8;
    case 0x801058FCu: goto label_801058FC;
    case 0x80105900u: goto label_80105900;
    case 0x80105904u: goto label_80105904;
    case 0x80105908u: goto label_80105908;
    case 0x8010590Cu: goto label_8010590C;
    case 0x80105910u: goto label_80105910;
    case 0x80105914u: goto label_80105914;
    case 0x80105918u: goto label_80105918;
    case 0x8010591Cu: goto label_8010591C;
    case 0x80105920u: goto label_80105920;
    case 0x80105924u: goto label_80105924;
    case 0x80105928u: goto label_80105928;
    case 0x8010592Cu: goto label_8010592C;
    case 0x80105930u: goto label_80105930;
    case 0x80105934u: goto label_80105934;
    case 0x80105938u: goto label_80105938;
    case 0x8010593Cu: goto label_8010593C;
    case 0x80105940u: goto label_80105940;
    case 0x80105944u: goto label_80105944;
    case 0x80105948u: goto label_80105948;
    case 0x8010594Cu: goto label_8010594C;
    case 0x80105950u: goto label_80105950;
    case 0x80105954u: goto label_80105954;
    case 0x80105958u: goto label_80105958;
    case 0x8010595Cu: goto label_8010595C;
    case 0x80105960u: goto label_80105960;
    case 0x80105964u: goto label_80105964;
    case 0x80105968u: goto label_80105968;
    case 0x8010596Cu: goto label_8010596C;
    case 0x80105970u: goto label_80105970;
    case 0x80105974u: goto label_80105974;
    case 0x80105978u: goto label_80105978;
    case 0x8010597Cu: goto label_8010597C;
    case 0x80105980u: goto label_80105980;
    case 0x80105984u: goto label_80105984;
    case 0x80105988u: goto label_80105988;
    case 0x8010598Cu: goto label_8010598C;
    case 0x80105990u: goto label_80105990;
    case 0x80105994u: goto label_80105994;
    case 0x80105998u: goto label_80105998;
    case 0x8010599Cu: goto label_8010599C;
    case 0x801059A0u: goto label_801059A0;
    case 0x801059A4u: goto label_801059A4;
    case 0x801059A8u: goto label_801059A8;
    case 0x801059ACu: goto label_801059AC;
    case 0x801059B0u: goto label_801059B0;
    case 0x801059B4u: goto label_801059B4;
    case 0x801059B8u: goto label_801059B8;
    case 0x801059BCu: goto label_801059BC;
    case 0x801059C0u: goto label_801059C0;
    case 0x801059C4u: goto label_801059C4;
    case 0x801059C8u: goto label_801059C8;
    case 0x801059CCu: goto label_801059CC;
    case 0x801059D0u: goto label_801059D0;
    case 0x801059D4u: goto label_801059D4;
    case 0x801059D8u: goto label_801059D8;
    case 0x801059DCu: goto label_801059DC;
    case 0x801059E0u: goto label_801059E0;
    case 0x801059E4u: goto label_801059E4;
    case 0x801059E8u: goto label_801059E8;
    case 0x801059ECu: goto label_801059EC;
    case 0x801059F0u: goto label_801059F0;
    case 0x801059F4u: goto label_801059F4;
    case 0x801059F8u: goto label_801059F8;
    case 0x801059FCu: goto label_801059FC;
    case 0x80105A00u: goto label_80105A00;
    case 0x80105A04u: goto label_80105A04;
    case 0x80105A08u: goto label_80105A08;
    case 0x80105A0Cu: goto label_80105A0C;
    case 0x80105A10u: goto label_80105A10;
    case 0x80105A14u: goto label_80105A14;
    case 0x80105A18u: goto label_80105A18;
    case 0x80105A1Cu: goto label_80105A1C;
    case 0x80105A20u: goto label_80105A20;
    case 0x80105A24u: goto label_80105A24;
    case 0x80105A28u: goto label_80105A28;
    case 0x80105A2Cu: goto label_80105A2C;
    case 0x80105A30u: goto label_80105A30;
    case 0x80105A34u: goto label_80105A34;
    case 0x80105A38u: goto label_80105A38;
    case 0x80105A3Cu: goto label_80105A3C;
    case 0x80105A40u: goto label_80105A40;
    case 0x80105A44u: goto label_80105A44;
    case 0x80105A48u: goto label_80105A48;
    case 0x80105A4Cu: goto label_80105A4C;
    case 0x80105A50u: goto label_80105A50;
    case 0x80105A54u: goto label_80105A54;
    case 0x80105A58u: goto label_80105A58;
    case 0x80105A5Cu: goto label_80105A5C;
    case 0x80105A60u: goto label_80105A60;
    case 0x80105A64u: goto label_80105A64;
    case 0x80105A68u: goto label_80105A68;
    case 0x80105A6Cu: goto label_80105A6C;
    case 0x80105A70u: goto label_80105A70;
    case 0x80105A74u: goto label_80105A74;
    case 0x80105A78u: goto label_80105A78;
    case 0x80105A7Cu: goto label_80105A7C;
    case 0x80105A80u: goto label_80105A80;
    case 0x80105A84u: goto label_80105A84;
    case 0x80105A88u: goto label_80105A88;
    case 0x80105A8Cu: goto label_80105A8C;
    case 0x80105A90u: goto label_80105A90;
    case 0x80105A94u: goto label_80105A94;
    case 0x80105A98u: goto label_80105A98;
    case 0x80105A9Cu: goto label_80105A9C;
    case 0x80105AA0u: goto label_80105AA0;
    case 0x80105AA4u: goto label_80105AA4;
    case 0x80105AA8u: goto label_80105AA8;
    case 0x80105AACu: goto label_80105AAC;
    case 0x80105AB0u: goto label_80105AB0;
    case 0x80105AB4u: goto label_80105AB4;
    case 0x80105AB8u: goto label_80105AB8;
    case 0x80105ABCu: goto label_80105ABC;
    case 0x80105AC0u: goto label_80105AC0;
    case 0x80105AC4u: goto label_80105AC4;
    case 0x80105AC8u: goto label_80105AC8;
    case 0x80105ACCu: goto label_80105ACC;
    case 0x80105AD0u: goto label_80105AD0;
    case 0x80105AD4u: goto label_80105AD4;
    case 0x80105AD8u: goto label_80105AD8;
    case 0x80105ADCu: goto label_80105ADC;
    case 0x80105AE0u: goto label_80105AE0;
    case 0x80105AE4u: goto label_80105AE4;
    case 0x80105AE8u: goto label_80105AE8;
    case 0x80105AECu: goto label_80105AEC;
    case 0x80105AF0u: goto label_80105AF0;
    case 0x80105AF4u: goto label_80105AF4;
    case 0x80105AF8u: goto label_80105AF8;
    case 0x80105AFCu: goto label_80105AFC;
    case 0x80105B00u: goto label_80105B00;
    case 0x80105B04u: goto label_80105B04;
    case 0x80105B08u: goto label_80105B08;
    case 0x80105B0Cu: goto label_80105B0C;
    case 0x80105B10u: goto label_80105B10;
    case 0x80105B14u: goto label_80105B14;
    case 0x80105B18u: goto label_80105B18;
    case 0x80105B1Cu: goto label_80105B1C;
    case 0x80105B20u: goto label_80105B20;
    case 0x80105B24u: goto label_80105B24;
    case 0x80105B28u: goto label_80105B28;
    case 0x80105B2Cu: goto label_80105B2C;
    case 0x80105B30u: goto label_80105B30;
    case 0x80105B34u: goto label_80105B34;
    case 0x80105B38u: goto label_80105B38;
    case 0x80105B3Cu: goto label_80105B3C;
    case 0x80105B40u: goto label_80105B40;
    case 0x80105B44u: goto label_80105B44;
    case 0x80105B48u: goto label_80105B48;
    case 0x80105B4Cu: goto label_80105B4C;
    case 0x80105B50u: goto label_80105B50;
    case 0x80105B54u: goto label_80105B54;
    case 0x80105B58u: goto label_80105B58;
    case 0x80105B5Cu: goto label_80105B5C;
    case 0x80105B60u: goto label_80105B60;
    case 0x80105B64u: goto label_80105B64;
    case 0x80105B68u: goto label_80105B68;
    case 0x80105B6Cu: goto label_80105B6C;
    case 0x80105B70u: goto label_80105B70;
    case 0x80105B74u: goto label_80105B74;
    case 0x80105B78u: goto label_80105B78;
    case 0x80105B7Cu: goto label_80105B7C;
    case 0x80105B80u: goto label_80105B80;
    case 0x80105B84u: goto label_80105B84;
    case 0x80105B88u: goto label_80105B88;
    case 0x80105B8Cu: goto label_80105B8C;
    case 0x80105B90u: goto label_80105B90;
    case 0x80105B94u: goto label_80105B94;
    case 0x80105B98u: goto label_80105B98;
    case 0x80105B9Cu: goto label_80105B9C;
    case 0x80105BA0u: goto label_80105BA0;
    case 0x80105BA4u: goto label_80105BA4;
    case 0x80105BA8u: goto label_80105BA8;
    case 0x80105BACu: goto label_80105BAC;
    case 0x80105BB0u: goto label_80105BB0;
    case 0x80105BB4u: goto label_80105BB4;
    case 0x80105BB8u: goto label_80105BB8;
    case 0x80105BBCu: goto label_80105BBC;
    case 0x80105BC0u: goto label_80105BC0;
    case 0x80105BC4u: goto label_80105BC4;
    case 0x80105BC8u: goto label_80105BC8;
    case 0x80105BCCu: goto label_80105BCC;
    case 0x80105BD0u: goto label_80105BD0;
    case 0x80105BD4u: goto label_80105BD4;
    case 0x80105BD8u: goto label_80105BD8;
    case 0x80105BDCu: goto label_80105BDC;
    case 0x80105BE0u: goto label_80105BE0;
    case 0x80105BE4u: goto label_80105BE4;
    case 0x80105BE8u: goto label_80105BE8;
    case 0x80105BECu: goto label_80105BEC;
    case 0x80105BF0u: goto label_80105BF0;
    case 0x80105BF4u: goto label_80105BF4;
    case 0x80105BF8u: goto label_80105BF8;
    case 0x80105BFCu: goto label_80105BFC;
    case 0x80105C00u: goto label_80105C00;
    case 0x80105C04u: goto label_80105C04;
    case 0x80105C08u: goto label_80105C08;
    case 0x80105C0Cu: goto label_80105C0C;
    case 0x80105C10u: goto label_80105C10;
    case 0x80105C14u: goto label_80105C14;
    case 0x80105C18u: goto label_80105C18;
    case 0x80105C1Cu: goto label_80105C1C;
    case 0x80105C20u: goto label_80105C20;
    case 0x80105C24u: goto label_80105C24;
    case 0x80105C28u: goto label_80105C28;
    case 0x80105C2Cu: goto label_80105C2C;
    case 0x80105C30u: goto label_80105C30;
    case 0x80105C34u: goto label_80105C34;
    case 0x80105C38u: goto label_80105C38;
    case 0x80105C3Cu: goto label_80105C3C;
    case 0x80105C40u: goto label_80105C40;
    case 0x80105C44u: goto label_80105C44;
    case 0x80105C48u: goto label_80105C48;
    case 0x80105C4Cu: goto label_80105C4C;
    case 0x80105C50u: goto label_80105C50;
    case 0x80105C54u: goto label_80105C54;
    case 0x80105C58u: goto label_80105C58;
    case 0x80105C5Cu: goto label_80105C5C;
    case 0x80105C60u: goto label_80105C60;
    case 0x80105C64u: goto label_80105C64;
    case 0x80105C68u: goto label_80105C68;
    case 0x80105C6Cu: goto label_80105C6C;
    case 0x80105C70u: goto label_80105C70;
    case 0x80105C74u: goto label_80105C74;
    case 0x80105C78u: goto label_80105C78;
    case 0x80105C7Cu: goto label_80105C7C;
    case 0x80105C80u: goto label_80105C80;
    case 0x80105C84u: goto label_80105C84;
    case 0x80105C88u: goto label_80105C88;
    case 0x80105C8Cu: goto label_80105C8C;
    case 0x80105C90u: goto label_80105C90;
    case 0x80105C94u: goto label_80105C94;
    case 0x80105C98u: goto label_80105C98;
    case 0x80105C9Cu: goto label_80105C9C;
    case 0x80105CA0u: goto label_80105CA0;
    case 0x80105CA4u: goto label_80105CA4;
    case 0x80105CA8u: goto label_80105CA8;
    case 0x80105CACu: goto label_80105CAC;
    case 0x80105CB0u: goto label_80105CB0;
    case 0x80105CB4u: goto label_80105CB4;
    case 0x80105CB8u: goto label_80105CB8;
    case 0x80105CBCu: goto label_80105CBC;
    case 0x80105CC0u: goto label_80105CC0;
    case 0x80105CC4u: goto label_80105CC4;
    case 0x80105CC8u: goto label_80105CC8;
    case 0x80105CCCu: goto label_80105CCC;
    case 0x80105CD0u: goto label_80105CD0;
    case 0x80105CD4u: goto label_80105CD4;
    case 0x80105CD8u: goto label_80105CD8;
    case 0x80105CDCu: goto label_80105CDC;
    case 0x80105CE0u: goto label_80105CE0;
    case 0x80105CE4u: goto label_80105CE4;
    case 0x80105CE8u: goto label_80105CE8;
    case 0x80105CECu: goto label_80105CEC;
    case 0x80105CF0u: goto label_80105CF0;
    case 0x80105CF4u: goto label_80105CF4;
    case 0x80105CF8u: goto label_80105CF8;
    case 0x80105CFCu: goto label_80105CFC;
    case 0x80105D00u: goto label_80105D00;
    case 0x80105D04u: goto label_80105D04;
    case 0x80105D08u: goto label_80105D08;
    case 0x80105D0Cu: goto label_80105D0C;
    case 0x80105D10u: goto label_80105D10;
    case 0x80105D14u: goto label_80105D14;
    case 0x80105D18u: goto label_80105D18;
    case 0x80105D1Cu: goto label_80105D1C;
    case 0x80105D20u: goto label_80105D20;
    case 0x80105D24u: goto label_80105D24;
    case 0x80105D28u: goto label_80105D28;
    case 0x80105D2Cu: goto label_80105D2C;
    case 0x80105D30u: goto label_80105D30;
    case 0x80105D34u: goto label_80105D34;
    case 0x80105D38u: goto label_80105D38;
    case 0x80105D3Cu: goto label_80105D3C;
    case 0x80105D40u: goto label_80105D40;
    case 0x80105D44u: goto label_80105D44;
    case 0x80105D48u: goto label_80105D48;
    case 0x80105D4Cu: goto label_80105D4C;
    case 0x80105D50u: goto label_80105D50;
    case 0x80105D54u: goto label_80105D54;
    case 0x80105D58u: goto label_80105D58;
    case 0x80105D5Cu: goto label_80105D5C;
    case 0x80105D60u: goto label_80105D60;
    case 0x80105D64u: goto label_80105D64;
    case 0x80105D68u: goto label_80105D68;
    case 0x80105D6Cu: goto label_80105D6C;
    case 0x80105D70u: goto label_80105D70;
    case 0x80105D74u: goto label_80105D74;
    case 0x80105D78u: goto label_80105D78;
    case 0x80105D7Cu: goto label_80105D7C;
    case 0x80105D80u: goto label_80105D80;
    case 0x80105D84u: goto label_80105D84;
    case 0x80105D88u: goto label_80105D88;
    case 0x80105D8Cu: goto label_80105D8C;
    case 0x80105D90u: goto label_80105D90;
    case 0x80105D94u: goto label_80105D94;
    case 0x80105D98u: goto label_80105D98;
    case 0x80105D9Cu: goto label_80105D9C;
    case 0x80105DA0u: goto label_80105DA0;
    case 0x80105DA4u: goto label_80105DA4;
    case 0x80105DA8u: goto label_80105DA8;
    case 0x80105DACu: goto label_80105DAC;
    case 0x80105DB0u: goto label_80105DB0;
    case 0x80105DB4u: goto label_80105DB4;
    case 0x80105DB8u: goto label_80105DB8;
    case 0x80105DBCu: goto label_80105DBC;
    case 0x80105DC0u: goto label_80105DC0;
    case 0x80105DC4u: goto label_80105DC4;
    case 0x80105DC8u: goto label_80105DC8;
    case 0x80105DCCu: goto label_80105DCC;
    case 0x80105DD0u: goto label_80105DD0;
    case 0x80105DD4u: goto label_80105DD4;
    case 0x80105DD8u: goto label_80105DD8;
    case 0x80105DDCu: goto label_80105DDC;
    case 0x80105DE0u: goto label_80105DE0;
    case 0x80105DE4u: goto label_80105DE4;
    case 0x80105DE8u: goto label_80105DE8;
    case 0x80105DECu: goto label_80105DEC;
    case 0x80105DF0u: goto label_80105DF0;
    case 0x80105DF4u: goto label_80105DF4;
    case 0x80105DF8u: goto label_80105DF8;
    case 0x80105DFCu: goto label_80105DFC;
    case 0x80105E00u: goto label_80105E00;
    case 0x80105E04u: goto label_80105E04;
    case 0x80105E08u: goto label_80105E08;
    case 0x80105E0Cu: goto label_80105E0C;
    case 0x80105E10u: goto label_80105E10;
    case 0x80105E14u: goto label_80105E14;
    case 0x80105E18u: goto label_80105E18;
    case 0x80105E1Cu: goto label_80105E1C;
    case 0x80105E20u: goto label_80105E20;
    case 0x80105E24u: goto label_80105E24;
    case 0x80105E28u: goto label_80105E28;
    case 0x80105E2Cu: goto label_80105E2C;
    case 0x80105E30u: goto label_80105E30;
    case 0x80105E34u: goto label_80105E34;
    case 0x80105E38u: goto label_80105E38;
    case 0x80105E3Cu: goto label_80105E3C;
    case 0x80105E40u: goto label_80105E40;
    case 0x80105E44u: goto label_80105E44;
    case 0x80105E48u: goto label_80105E48;
    case 0x80105E4Cu: goto label_80105E4C;
    case 0x80105E50u: goto label_80105E50;
    case 0x80105E54u: goto label_80105E54;
    case 0x80105E58u: goto label_80105E58;
    case 0x80105E5Cu: goto label_80105E5C;
    case 0x80105E60u: goto label_80105E60;
    case 0x80105E64u: goto label_80105E64;
    case 0x80105E68u: goto label_80105E68;
    case 0x80105E6Cu: goto label_80105E6C;
    case 0x80105E70u: goto label_80105E70;
    case 0x80105E74u: goto label_80105E74;
    case 0x80105E78u: goto label_80105E78;
    case 0x80105E7Cu: goto label_80105E7C;
    case 0x80105E80u: goto label_80105E80;
    case 0x80105E84u: goto label_80105E84;
    case 0x80105E88u: goto label_80105E88;
    case 0x80105E8Cu: goto label_80105E8C;
    case 0x80105E90u: goto label_80105E90;
    case 0x80105E94u: goto label_80105E94;
    case 0x80105E98u: goto label_80105E98;
    case 0x80105E9Cu: goto label_80105E9C;
    case 0x80105EA0u: goto label_80105EA0;
    case 0x80105EA4u: goto label_80105EA4;
    case 0x80105EA8u: goto label_80105EA8;
    case 0x80105EACu: goto label_80105EAC;
    case 0x80105EB0u: goto label_80105EB0;
    case 0x80105EB4u: goto label_80105EB4;
    case 0x80105EB8u: goto label_80105EB8;
    case 0x80105EBCu: goto label_80105EBC;
    case 0x80105EC0u: goto label_80105EC0;
    case 0x80105EC4u: goto label_80105EC4;
    case 0x80105EC8u: goto label_80105EC8;
    case 0x80105ECCu: goto label_80105ECC;
    case 0x80105ED0u: goto label_80105ED0;
    case 0x80105ED4u: goto label_80105ED4;
    case 0x80105ED8u: goto label_80105ED8;
    case 0x80105EDCu: goto label_80105EDC;
    case 0x80105EE0u: goto label_80105EE0;
    case 0x80105EE4u: goto label_80105EE4;
    case 0x80105EE8u: goto label_80105EE8;
    case 0x80105EECu: goto label_80105EEC;
    case 0x80105EF0u: goto label_80105EF0;
    case 0x80105EF4u: goto label_80105EF4;
    case 0x80105EF8u: goto label_80105EF8;
    case 0x80105EFCu: goto label_80105EFC;
    case 0x80105F00u: goto label_80105F00;
    case 0x80105F04u: goto label_80105F04;
    case 0x80105F08u: goto label_80105F08;
    case 0x80105F0Cu: goto label_80105F0C;
    case 0x80105F10u: goto label_80105F10;
    case 0x80105F14u: goto label_80105F14;
    case 0x80105F18u: goto label_80105F18;
    case 0x80105F1Cu: goto label_80105F1C;
    case 0x80105F20u: goto label_80105F20;
    case 0x80105F24u: goto label_80105F24;
    case 0x80105F28u: goto label_80105F28;
    case 0x80105F2Cu: goto label_80105F2C;
    case 0x80105F30u: goto label_80105F30;
    case 0x80105F34u: goto label_80105F34;
    case 0x80105F38u: goto label_80105F38;
    case 0x80105F3Cu: goto label_80105F3C;
    case 0x80105F40u: goto label_80105F40;
    case 0x80105F44u: goto label_80105F44;
    case 0x80105F48u: goto label_80105F48;
    case 0x80105F4Cu: goto label_80105F4C;
    case 0x80105F50u: goto label_80105F50;
    case 0x80105F54u: goto label_80105F54;
    case 0x80105F58u: goto label_80105F58;
    case 0x80105F5Cu: goto label_80105F5C;
    case 0x80105F60u: goto label_80105F60;
    case 0x80105F64u: goto label_80105F64;
    case 0x80105F68u: goto label_80105F68;
    case 0x80105F6Cu: goto label_80105F6C;
    case 0x80105F70u: goto label_80105F70;
    case 0x80105F74u: goto label_80105F74;
    case 0x80105F78u: goto label_80105F78;
    case 0x80105F7Cu: goto label_80105F7C;
    case 0x80105F80u: goto label_80105F80;
    case 0x80105F84u: goto label_80105F84;
    case 0x80105F88u: goto label_80105F88;
    case 0x80105F8Cu: goto label_80105F8C;
    case 0x80105F90u: goto label_80105F90;
    case 0x80105F94u: goto label_80105F94;
    case 0x80105F98u: goto label_80105F98;
    case 0x80105F9Cu: goto label_80105F9C;
    case 0x80105FA0u: goto label_80105FA0;
    case 0x80105FA4u: goto label_80105FA4;
    case 0x80105FA8u: goto label_80105FA8;
    case 0x80105FACu: goto label_80105FAC;
    case 0x80105FB0u: goto label_80105FB0;
    case 0x80105FB4u: goto label_80105FB4;
    case 0x80105FB8u: goto label_80105FB8;
    case 0x80105FBCu: goto label_80105FBC;
    case 0x80105FC0u: goto label_80105FC0;
    case 0x80105FC4u: goto label_80105FC4;
    case 0x80105FC8u: goto label_80105FC8;
    case 0x80105FCCu: goto label_80105FCC;
    case 0x80105FD0u: goto label_80105FD0;
    case 0x80105FD4u: goto label_80105FD4;
    case 0x80105FD8u: goto label_80105FD8;
    case 0x80105FDCu: goto label_80105FDC;
    case 0x80105FE0u: goto label_80105FE0;
    case 0x80105FE4u: goto label_80105FE4;
    case 0x80105FE8u: goto label_80105FE8;
    case 0x80105FECu: goto label_80105FEC;
    case 0x80105FF0u: goto label_80105FF0;
    case 0x80105FF4u: goto label_80105FF4;
    case 0x80105FF8u: goto label_80105FF8;
    case 0x80105FFCu: goto label_80105FFC;
    case 0x80106000u: goto label_80106000;
    case 0x80106004u: goto label_80106004;
    case 0x80106008u: goto label_80106008;
    case 0x8010600Cu: goto label_8010600C;
    case 0x80106010u: goto label_80106010;
    case 0x80106014u: goto label_80106014;
    case 0x80106018u: goto label_80106018;
    case 0x8010601Cu: goto label_8010601C;
    case 0x80106020u: goto label_80106020;
    case 0x80106024u: goto label_80106024;
    case 0x80106028u: goto label_80106028;
    case 0x8010602Cu: goto label_8010602C;
    case 0x80106030u: goto label_80106030;
    case 0x80106034u: goto label_80106034;
    case 0x80106038u: goto label_80106038;
    case 0x8010603Cu: goto label_8010603C;
    case 0x80106040u: goto label_80106040;
    case 0x80106044u: goto label_80106044;
    case 0x80106048u: goto label_80106048;
    case 0x8010604Cu: goto label_8010604C;
    case 0x80106050u: goto label_80106050;
    case 0x80106054u: goto label_80106054;
    case 0x80106058u: goto label_80106058;
    case 0x8010605Cu: goto label_8010605C;
    case 0x80106060u: goto label_80106060;
    case 0x80106064u: goto label_80106064;
    case 0x80106068u: goto label_80106068;
    case 0x8010606Cu: goto label_8010606C;
    case 0x80106070u: goto label_80106070;
    case 0x80106074u: goto label_80106074;
    case 0x80106078u: goto label_80106078;
    case 0x8010607Cu: goto label_8010607C;
    case 0x80106080u: goto label_80106080;
    case 0x80106084u: goto label_80106084;
    case 0x80106088u: goto label_80106088;
    case 0x8010608Cu: goto label_8010608C;
    case 0x80106090u: goto label_80106090;
    case 0x80106094u: goto label_80106094;
    case 0x80106098u: goto label_80106098;
    case 0x8010609Cu: goto label_8010609C;
    case 0x801060A0u: goto label_801060A0;
    case 0x801060A4u: goto label_801060A4;
    case 0x801060A8u: goto label_801060A8;
    case 0x801060ACu: goto label_801060AC;
    case 0x801060B0u: goto label_801060B0;
    case 0x801060B4u: goto label_801060B4;
    case 0x801060B8u: goto label_801060B8;
    case 0x801060BCu: goto label_801060BC;
    case 0x801060C0u: goto label_801060C0;
    case 0x801060C4u: goto label_801060C4;
    case 0x801060C8u: goto label_801060C8;
    case 0x801060CCu: goto label_801060CC;
    case 0x801060D0u: goto label_801060D0;
    case 0x801060D4u: goto label_801060D4;
    case 0x801060D8u: goto label_801060D8;
    case 0x801060DCu: goto label_801060DC;
    case 0x801060E0u: goto label_801060E0;
    case 0x801060E4u: goto label_801060E4;
    case 0x801060E8u: goto label_801060E8;
    case 0x801060ECu: goto label_801060EC;
    case 0x801060F0u: goto label_801060F0;
    case 0x801060F4u: goto label_801060F4;
    case 0x801060F8u: goto label_801060F8;
    case 0x801060FCu: goto label_801060FC;
    case 0x80106100u: goto label_80106100;
    case 0x80106104u: goto label_80106104;
    case 0x80106108u: goto label_80106108;
    case 0x8010610Cu: goto label_8010610C;
    case 0x80106110u: goto label_80106110;
    case 0x80106114u: goto label_80106114;
    case 0x80106118u: goto label_80106118;
    case 0x8010611Cu: goto label_8010611C;
    case 0x80106120u: goto label_80106120;
    case 0x80106124u: goto label_80106124;
    case 0x80106128u: goto label_80106128;
    case 0x8010612Cu: goto label_8010612C;
    case 0x80106130u: goto label_80106130;
    case 0x80106134u: goto label_80106134;
    case 0x80106138u: goto label_80106138;
    case 0x8010613Cu: goto label_8010613C;
    case 0x80106140u: goto label_80106140;
    case 0x80106144u: goto label_80106144;
    case 0x80106148u: goto label_80106148;
    case 0x8010614Cu: goto label_8010614C;
    case 0x80106150u: goto label_80106150;
    case 0x80106154u: goto label_80106154;
    case 0x80106158u: goto label_80106158;
    case 0x8010615Cu: goto label_8010615C;
    case 0x80106160u: goto label_80106160;
    case 0x80106164u: goto label_80106164;
    case 0x80106168u: goto label_80106168;
    case 0x8010616Cu: goto label_8010616C;
    case 0x80106170u: goto label_80106170;
    case 0x80106174u: goto label_80106174;
    case 0x80106178u: goto label_80106178;
    case 0x8010617Cu: goto label_8010617C;
    case 0x80106180u: goto label_80106180;
    case 0x80106184u: goto label_80106184;
    case 0x80106188u: goto label_80106188;
    case 0x8010618Cu: goto label_8010618C;
    case 0x80106190u: goto label_80106190;
    case 0x80106194u: goto label_80106194;
    case 0x80106198u: goto label_80106198;
    case 0x8010619Cu: goto label_8010619C;
    case 0x801061A0u: goto label_801061A0;
    case 0x801061A4u: goto label_801061A4;
    case 0x801061A8u: goto label_801061A8;
    case 0x801061ACu: goto label_801061AC;
    case 0x801061B0u: goto label_801061B0;
    case 0x801061B4u: goto label_801061B4;
    case 0x801061B8u: goto label_801061B8;
    case 0x801061BCu: goto label_801061BC;
    case 0x801061C0u: goto label_801061C0;
    case 0x801061C4u: goto label_801061C4;
    case 0x801061C8u: goto label_801061C8;
    case 0x801061CCu: goto label_801061CC;
    case 0x801061D0u: goto label_801061D0;
    case 0x801061D4u: goto label_801061D4;
    case 0x801061D8u: goto label_801061D8;
    case 0x801061DCu: goto label_801061DC;
    case 0x801061E0u: goto label_801061E0;
    case 0x801061E4u: goto label_801061E4;
    case 0x801061E8u: goto label_801061E8;
    case 0x801061ECu: goto label_801061EC;
    case 0x801061F0u: goto label_801061F0;
    case 0x801061F4u: goto label_801061F4;
    case 0x801061F8u: goto label_801061F8;
    case 0x801061FCu: goto label_801061FC;
    case 0x80106200u: goto label_80106200;
    case 0x80106204u: goto label_80106204;
    case 0x80106208u: goto label_80106208;
    case 0x8010620Cu: goto label_8010620C;
    case 0x80106210u: goto label_80106210;
    case 0x80106214u: goto label_80106214;
    case 0x80106218u: goto label_80106218;
    case 0x8010621Cu: goto label_8010621C;
    case 0x80106220u: goto label_80106220;
    case 0x80106224u: goto label_80106224;
    case 0x80106228u: goto label_80106228;
    case 0x8010622Cu: goto label_8010622C;
    case 0x80106230u: goto label_80106230;
    case 0x80106234u: goto label_80106234;
    case 0x80106238u: goto label_80106238;
    case 0x8010623Cu: goto label_8010623C;
    case 0x80106240u: goto label_80106240;
    case 0x80106244u: goto label_80106244;
    case 0x80106248u: goto label_80106248;
    case 0x8010624Cu: goto label_8010624C;
    case 0x80106250u: goto label_80106250;
    case 0x80106254u: goto label_80106254;
    case 0x80106258u: goto label_80106258;
    case 0x8010625Cu: goto label_8010625C;
    case 0x80106260u: goto label_80106260;
    case 0x80106264u: goto label_80106264;
    case 0x80106268u: goto label_80106268;
    case 0x8010626Cu: goto label_8010626C;
    case 0x80106270u: goto label_80106270;
    case 0x80106274u: goto label_80106274;
    case 0x80106278u: goto label_80106278;
    case 0x8010627Cu: goto label_8010627C;
    case 0x80106280u: goto label_80106280;
    case 0x80106284u: goto label_80106284;
    case 0x80106288u: goto label_80106288;
    case 0x8010628Cu: goto label_8010628C;
    case 0x80106290u: goto label_80106290;
    case 0x80106294u: goto label_80106294;
    case 0x80106298u: goto label_80106298;
    case 0x8010629Cu: goto label_8010629C;
    case 0x801062A0u: goto label_801062A0;
    case 0x801062A4u: goto label_801062A4;
    case 0x801062A8u: goto label_801062A8;
    case 0x801062ACu: goto label_801062AC;
    case 0x801062B0u: goto label_801062B0;
    case 0x801062B4u: goto label_801062B4;
    case 0x801062B8u: goto label_801062B8;
    case 0x801062BCu: goto label_801062BC;
    case 0x801062C0u: goto label_801062C0;
    case 0x801062C4u: goto label_801062C4;
    case 0x801062C8u: goto label_801062C8;
    case 0x801062CCu: goto label_801062CC;
    case 0x801062D0u: goto label_801062D0;
    case 0x801062D4u: goto label_801062D4;
    case 0x801062D8u: goto label_801062D8;
    case 0x801062DCu: goto label_801062DC;
    case 0x801062E0u: goto label_801062E0;
    case 0x801062E4u: goto label_801062E4;
    case 0x801062E8u: goto label_801062E8;
    case 0x801062ECu: goto label_801062EC;
    case 0x801062F0u: goto label_801062F0;
    case 0x801062F4u: goto label_801062F4;
    case 0x801062F8u: goto label_801062F8;
    case 0x801062FCu: goto label_801062FC;
    case 0x80106300u: goto label_80106300;
    case 0x80106304u: goto label_80106304;
    case 0x80106308u: goto label_80106308;
    case 0x8010630Cu: goto label_8010630C;
    case 0x80106310u: goto label_80106310;
    case 0x80106314u: goto label_80106314;
    case 0x80106318u: goto label_80106318;
    case 0x8010631Cu: goto label_8010631C;
    case 0x80106320u: goto label_80106320;
    case 0x80106324u: goto label_80106324;
    case 0x80106328u: goto label_80106328;
    case 0x8010632Cu: goto label_8010632C;
    case 0x80106330u: goto label_80106330;
    case 0x80106334u: goto label_80106334;
    case 0x80106338u: goto label_80106338;
    case 0x8010633Cu: goto label_8010633C;
    case 0x80106340u: goto label_80106340;
    case 0x80106344u: goto label_80106344;
    case 0x80106348u: goto label_80106348;
    case 0x8010634Cu: goto label_8010634C;
    case 0x80106350u: goto label_80106350;
    case 0x80106354u: goto label_80106354;
    case 0x80106358u: goto label_80106358;
    case 0x8010635Cu: goto label_8010635C;
    case 0x80106360u: goto label_80106360;
    case 0x80106364u: goto label_80106364;
    case 0x80106368u: goto label_80106368;
    case 0x8010636Cu: goto label_8010636C;
    case 0x80106370u: goto label_80106370;
    case 0x80106374u: goto label_80106374;
    case 0x80106378u: goto label_80106378;
    case 0x8010637Cu: goto label_8010637C;
    case 0x80106380u: goto label_80106380;
    case 0x80106384u: goto label_80106384;
    case 0x80106388u: goto label_80106388;
    case 0x8010638Cu: goto label_8010638C;
    case 0x80106390u: goto label_80106390;
    case 0x80106394u: goto label_80106394;
    case 0x80106398u: goto label_80106398;
    case 0x8010639Cu: goto label_8010639C;
    case 0x801063A0u: goto label_801063A0;
    case 0x801063A4u: goto label_801063A4;
    case 0x801063A8u: goto label_801063A8;
    case 0x801063ACu: goto label_801063AC;
    case 0x801063B0u: goto label_801063B0;
    case 0x801063B4u: goto label_801063B4;
    case 0x801063B8u: goto label_801063B8;
    case 0x801063BCu: goto label_801063BC;
    case 0x801063C0u: goto label_801063C0;
    case 0x801063C4u: goto label_801063C4;
    case 0x801063C8u: goto label_801063C8;
    case 0x801063CCu: goto label_801063CC;
    case 0x801063D0u: goto label_801063D0;
    case 0x801063D4u: goto label_801063D4;
    case 0x801063D8u: goto label_801063D8;
    case 0x801063DCu: goto label_801063DC;
    case 0x801063E0u: goto label_801063E0;
    case 0x801063E4u: goto label_801063E4;
    case 0x801063E8u: goto label_801063E8;
    case 0x801063ECu: goto label_801063EC;
    case 0x801063F0u: goto label_801063F0;
    case 0x801063F4u: goto label_801063F4;
    case 0x801063F8u: goto label_801063F8;
    case 0x801063FCu: goto label_801063FC;
    case 0x80106400u: goto label_80106400;
    case 0x80106404u: goto label_80106404;
    case 0x80106408u: goto label_80106408;
    case 0x8010640Cu: goto label_8010640C;
    case 0x80106410u: goto label_80106410;
    case 0x80106414u: goto label_80106414;
    case 0x80106418u: goto label_80106418;
    case 0x8010641Cu: goto label_8010641C;
    case 0x80106420u: goto label_80106420;
    case 0x80106424u: goto label_80106424;
    case 0x80106428u: goto label_80106428;
    case 0x8010642Cu: goto label_8010642C;
    case 0x80106430u: goto label_80106430;
    case 0x80106434u: goto label_80106434;
    case 0x80106438u: goto label_80106438;
    case 0x8010643Cu: goto label_8010643C;
    case 0x80106440u: goto label_80106440;
    case 0x80106444u: goto label_80106444;
    case 0x80106448u: goto label_80106448;
    case 0x8010644Cu: goto label_8010644C;
    case 0x80106450u: goto label_80106450;
    case 0x80106454u: goto label_80106454;
    case 0x80106458u: goto label_80106458;
    case 0x8010645Cu: goto label_8010645C;
    case 0x80106460u: goto label_80106460;
    case 0x80106464u: goto label_80106464;
    case 0x80106468u: goto label_80106468;
    case 0x8010646Cu: goto label_8010646C;
    case 0x80106470u: goto label_80106470;
    case 0x80106474u: goto label_80106474;
    case 0x80106478u: goto label_80106478;
    case 0x8010647Cu: goto label_8010647C;
    case 0x80106480u: goto label_80106480;
    case 0x80106484u: goto label_80106484;
    case 0x80106488u: goto label_80106488;
    case 0x8010648Cu: goto label_8010648C;
    case 0x80106490u: goto label_80106490;
    case 0x80106494u: goto label_80106494;
    case 0x80106498u: goto label_80106498;
    case 0x8010649Cu: goto label_8010649C;
    case 0x801064A0u: goto label_801064A0;
    case 0x801064A4u: goto label_801064A4;
    case 0x801064A8u: goto label_801064A8;
    case 0x801064ACu: goto label_801064AC;
    case 0x801064B0u: goto label_801064B0;
    case 0x801064B4u: goto label_801064B4;
    case 0x801064B8u: goto label_801064B8;
    case 0x801064BCu: goto label_801064BC;
    case 0x801064C0u: goto label_801064C0;
    case 0x801064C4u: goto label_801064C4;
    case 0x801064C8u: goto label_801064C8;
    case 0x801064CCu: goto label_801064CC;
    case 0x801064D0u: goto label_801064D0;
    case 0x801064D4u: goto label_801064D4;
    case 0x801064D8u: goto label_801064D8;
    case 0x801064DCu: goto label_801064DC;
    case 0x801064E0u: goto label_801064E0;
    case 0x801064E4u: goto label_801064E4;
    case 0x801064E8u: goto label_801064E8;
    case 0x801064ECu: goto label_801064EC;
    case 0x801064F0u: goto label_801064F0;
    case 0x801064F4u: goto label_801064F4;
    case 0x801064F8u: goto label_801064F8;
    case 0x801064FCu: goto label_801064FC;
    case 0x80106500u: goto label_80106500;
    case 0x80106504u: goto label_80106504;
    case 0x80106508u: goto label_80106508;
    case 0x8010650Cu: goto label_8010650C;
    case 0x80106510u: goto label_80106510;
    case 0x80106514u: goto label_80106514;
    case 0x80106518u: goto label_80106518;
    case 0x8010651Cu: goto label_8010651C;
    case 0x80106520u: goto label_80106520;
    case 0x80106524u: goto label_80106524;
    case 0x80106528u: goto label_80106528;
    case 0x8010652Cu: goto label_8010652C;
    case 0x80106530u: goto label_80106530;
    case 0x80106534u: goto label_80106534;
    case 0x80106538u: goto label_80106538;
    case 0x8010653Cu: goto label_8010653C;
    case 0x80106540u: goto label_80106540;
    case 0x80106544u: goto label_80106544;
    case 0x80106548u: goto label_80106548;
    case 0x8010654Cu: goto label_8010654C;
    case 0x80106550u: goto label_80106550;
    case 0x80106554u: goto label_80106554;
    case 0x80106558u: goto label_80106558;
    case 0x8010655Cu: goto label_8010655C;
    case 0x80106560u: goto label_80106560;
    case 0x80106564u: goto label_80106564;
    case 0x80106568u: goto label_80106568;
    case 0x8010656Cu: goto label_8010656C;
    case 0x80106570u: goto label_80106570;
    case 0x80106574u: goto label_80106574;
    case 0x80106578u: goto label_80106578;
    case 0x8010657Cu: goto label_8010657C;
    case 0x80106580u: goto label_80106580;
    case 0x80106584u: goto label_80106584;
    case 0x80106588u: goto label_80106588;
    case 0x8010658Cu: goto label_8010658C;
    case 0x80106590u: goto label_80106590;
    case 0x80106594u: goto label_80106594;
    case 0x80106598u: goto label_80106598;
    case 0x8010659Cu: goto label_8010659C;
    case 0x801065A0u: goto label_801065A0;
    case 0x801065A4u: goto label_801065A4;
    case 0x801065A8u: goto label_801065A8;
    case 0x801065ACu: goto label_801065AC;
    case 0x801065B0u: goto label_801065B0;
    case 0x801065B4u: goto label_801065B4;
    case 0x801065B8u: goto label_801065B8;
    case 0x801065BCu: goto label_801065BC;
    case 0x801065C0u: goto label_801065C0;
    case 0x801065C4u: goto label_801065C4;
    case 0x801065C8u: goto label_801065C8;
    case 0x801065CCu: goto label_801065CC;
    case 0x801065D0u: goto label_801065D0;
    case 0x801065D4u: goto label_801065D4;
    case 0x801065D8u: goto label_801065D8;
    case 0x801065DCu: goto label_801065DC;
    case 0x801065E0u: goto label_801065E0;
    case 0x801065E4u: goto label_801065E4;
    case 0x801065E8u: goto label_801065E8;
    case 0x801065ECu: goto label_801065EC;
    case 0x801065F0u: goto label_801065F0;
    case 0x801065F4u: goto label_801065F4;
    case 0x801065F8u: goto label_801065F8;
    case 0x801065FCu: goto label_801065FC;
    case 0x80106600u: goto label_80106600;
    case 0x80106604u: goto label_80106604;
    case 0x80106608u: goto label_80106608;
    case 0x8010660Cu: goto label_8010660C;
    case 0x80106610u: goto label_80106610;
    case 0x80106614u: goto label_80106614;
    case 0x80106618u: goto label_80106618;
    case 0x8010661Cu: goto label_8010661C;
    case 0x80106620u: goto label_80106620;
    case 0x80106624u: goto label_80106624;
    case 0x80106628u: goto label_80106628;
    case 0x8010662Cu: goto label_8010662C;
    case 0x80106630u: goto label_80106630;
    case 0x80106634u: goto label_80106634;
    case 0x80106638u: goto label_80106638;
    case 0x8010663Cu: goto label_8010663C;
    case 0x80106640u: goto label_80106640;
    case 0x80106644u: goto label_80106644;
    case 0x80106648u: goto label_80106648;
    case 0x8010664Cu: goto label_8010664C;
    case 0x80106650u: goto label_80106650;
    case 0x80106654u: goto label_80106654;
    case 0x80106658u: goto label_80106658;
    case 0x8010665Cu: goto label_8010665C;
    case 0x80106660u: goto label_80106660;
    case 0x80106664u: goto label_80106664;
    case 0x80106668u: goto label_80106668;
    case 0x8010666Cu: goto label_8010666C;
    case 0x80106670u: goto label_80106670;
    case 0x80106674u: goto label_80106674;
    case 0x80106678u: goto label_80106678;
    case 0x8010667Cu: goto label_8010667C;
    case 0x80106680u: goto label_80106680;
    case 0x80106684u: goto label_80106684;
    case 0x80106688u: goto label_80106688;
    case 0x8010668Cu: goto label_8010668C;
    case 0x80106690u: goto label_80106690;
    case 0x80106694u: goto label_80106694;
    case 0x80106698u: goto label_80106698;
    case 0x8010669Cu: goto label_8010669C;
    case 0x801066A0u: goto label_801066A0;
    case 0x801066A4u: goto label_801066A4;
    case 0x801066A8u: goto label_801066A8;
    case 0x801066ACu: goto label_801066AC;
    case 0x801066B0u: goto label_801066B0;
    case 0x801066B4u: goto label_801066B4;
    case 0x801066B8u: goto label_801066B8;
    case 0x801066BCu: goto label_801066BC;
    case 0x801066C0u: goto label_801066C0;
    case 0x801066C4u: goto label_801066C4;
    case 0x801066C8u: goto label_801066C8;
    case 0x801066CCu: goto label_801066CC;
    case 0x801066D0u: goto label_801066D0;
    case 0x801066D4u: goto label_801066D4;
    case 0x801066D8u: goto label_801066D8;
    case 0x801066DCu: goto label_801066DC;
    case 0x801066E0u: goto label_801066E0;
    case 0x801066E4u: goto label_801066E4;
    case 0x801066E8u: goto label_801066E8;
    case 0x801066ECu: goto label_801066EC;
    case 0x801066F0u: goto label_801066F0;
    case 0x801066F4u: goto label_801066F4;
    case 0x801066F8u: goto label_801066F8;
    case 0x801066FCu: goto label_801066FC;
    case 0x80106700u: goto label_80106700;
    case 0x80106704u: goto label_80106704;
    case 0x80106708u: goto label_80106708;
    case 0x8010670Cu: goto label_8010670C;
    case 0x80106710u: goto label_80106710;
    case 0x80106714u: goto label_80106714;
    case 0x80106718u: goto label_80106718;
    case 0x8010671Cu: goto label_8010671C;
    case 0x80106720u: goto label_80106720;
    case 0x80106724u: goto label_80106724;
    case 0x80106728u: goto label_80106728;
    case 0x8010672Cu: goto label_8010672C;
    case 0x80106730u: goto label_80106730;
    case 0x80106734u: goto label_80106734;
    case 0x80106738u: goto label_80106738;
    case 0x8010673Cu: goto label_8010673C;
    case 0x80106740u: goto label_80106740;
    case 0x80106744u: goto label_80106744;
    case 0x80106748u: goto label_80106748;
    case 0x8010674Cu: goto label_8010674C;
    case 0x80106750u: goto label_80106750;
    case 0x80106754u: goto label_80106754;
    case 0x80106758u: goto label_80106758;
    case 0x8010675Cu: goto label_8010675C;
    case 0x80106760u: goto label_80106760;
    case 0x80106764u: goto label_80106764;
    case 0x80106768u: goto label_80106768;
    case 0x8010676Cu: goto label_8010676C;
    case 0x80106770u: goto label_80106770;
    case 0x80106774u: goto label_80106774;
    case 0x80106778u: goto label_80106778;
    case 0x8010677Cu: goto label_8010677C;
    case 0x80106780u: goto label_80106780;
    case 0x80106784u: goto label_80106784;
    case 0x80106788u: goto label_80106788;
    case 0x8010678Cu: goto label_8010678C;
    case 0x80106790u: goto label_80106790;
    case 0x80106794u: goto label_80106794;
    case 0x80106798u: goto label_80106798;
    case 0x8010679Cu: goto label_8010679C;
    case 0x801067A0u: goto label_801067A0;
    case 0x801067A4u: goto label_801067A4;
    case 0x801067A8u: goto label_801067A8;
    case 0x801067ACu: goto label_801067AC;
    case 0x801067B0u: goto label_801067B0;
    case 0x801067B4u: goto label_801067B4;
    case 0x801067B8u: goto label_801067B8;
    case 0x801067BCu: goto label_801067BC;
    case 0x801067C0u: goto label_801067C0;
    case 0x801067C4u: goto label_801067C4;
    case 0x801067C8u: goto label_801067C8;
    case 0x801067CCu: goto label_801067CC;
    case 0x801067D0u: goto label_801067D0;
    case 0x801067D4u: goto label_801067D4;
    case 0x801067D8u: goto label_801067D8;
    case 0x801067DCu: goto label_801067DC;
    case 0x801067E0u: goto label_801067E0;
    case 0x801067E4u: goto label_801067E4;
    case 0x801067E8u: goto label_801067E8;
    case 0x801067ECu: goto label_801067EC;
    case 0x801067F0u: goto label_801067F0;
    case 0x801067F4u: goto label_801067F4;
    case 0x801067F8u: goto label_801067F8;
    case 0x801067FCu: goto label_801067FC;
    case 0x80106800u: goto label_80106800;
    case 0x80106804u: goto label_80106804;
    case 0x80106808u: goto label_80106808;
    case 0x8010680Cu: goto label_8010680C;
    case 0x80106810u: goto label_80106810;
    case 0x80106814u: goto label_80106814;
    case 0x80106818u: goto label_80106818;
    case 0x8010681Cu: goto label_8010681C;
    case 0x80106820u: goto label_80106820;
    case 0x80106824u: goto label_80106824;
    case 0x80106828u: goto label_80106828;
    case 0x8010682Cu: goto label_8010682C;
    case 0x80106830u: goto label_80106830;
    case 0x80106834u: goto label_80106834;
    case 0x80106838u: goto label_80106838;
    case 0x8010683Cu: goto label_8010683C;
    case 0x80106840u: goto label_80106840;
    case 0x80106844u: goto label_80106844;
    case 0x80106848u: goto label_80106848;
    case 0x8010684Cu: goto label_8010684C;
    case 0x80106850u: goto label_80106850;
    case 0x80106854u: goto label_80106854;
    case 0x80106858u: goto label_80106858;
    case 0x8010685Cu: goto label_8010685C;
    case 0x80106860u: goto label_80106860;
    case 0x80106864u: goto label_80106864;
    case 0x80106868u: goto label_80106868;
    case 0x8010686Cu: goto label_8010686C;
    case 0x80106870u: goto label_80106870;
    case 0x80106874u: goto label_80106874;
    case 0x80106878u: goto label_80106878;
    case 0x8010687Cu: goto label_8010687C;
    case 0x80106880u: goto label_80106880;
    case 0x80106884u: goto label_80106884;
    case 0x80106888u: goto label_80106888;
    case 0x8010688Cu: goto label_8010688C;
    case 0x80106890u: goto label_80106890;
    case 0x80106894u: goto label_80106894;
    case 0x80106898u: goto label_80106898;
    case 0x8010689Cu: goto label_8010689C;
    case 0x801068A0u: goto label_801068A0;
    case 0x801068A4u: goto label_801068A4;
    case 0x801068A8u: goto label_801068A8;
    case 0x801068ACu: goto label_801068AC;
    case 0x801068B0u: goto label_801068B0;
    case 0x801068B4u: goto label_801068B4;
    case 0x801068B8u: goto label_801068B8;
    case 0x801068BCu: goto label_801068BC;
    case 0x801068C0u: goto label_801068C0;
    case 0x801068C4u: goto label_801068C4;
    case 0x801068C8u: goto label_801068C8;
    case 0x801068CCu: goto label_801068CC;
    case 0x801068D0u: goto label_801068D0;
    case 0x801068D4u: goto label_801068D4;
    case 0x801068D8u: goto label_801068D8;
    case 0x801068DCu: goto label_801068DC;
    case 0x801068E0u: goto label_801068E0;
    case 0x801068E4u: goto label_801068E4;
    case 0x801068E8u: goto label_801068E8;
    case 0x801068ECu: goto label_801068EC;
    case 0x801068F0u: goto label_801068F0;
    case 0x801068F4u: goto label_801068F4;
    case 0x801068F8u: goto label_801068F8;
    case 0x801068FCu: goto label_801068FC;
    case 0x80106900u: goto label_80106900;
    case 0x80106904u: goto label_80106904;
    case 0x80106908u: goto label_80106908;
    case 0x8010690Cu: goto label_8010690C;
    case 0x80106910u: goto label_80106910;
    case 0x80106914u: goto label_80106914;
    case 0x80106918u: goto label_80106918;
    case 0x8010691Cu: goto label_8010691C;
    case 0x80106920u: goto label_80106920;
    case 0x80106924u: goto label_80106924;
    case 0x80106928u: goto label_80106928;
    case 0x8010692Cu: goto label_8010692C;
    case 0x80106930u: goto label_80106930;
    case 0x80106934u: goto label_80106934;
    case 0x80106938u: goto label_80106938;
    case 0x8010693Cu: goto label_8010693C;
    case 0x80106940u: goto label_80106940;
    case 0x80106944u: goto label_80106944;
    case 0x80106948u: goto label_80106948;
    case 0x8010694Cu: goto label_8010694C;
    case 0x80106950u: goto label_80106950;
    case 0x80106954u: goto label_80106954;
    case 0x80106958u: goto label_80106958;
    case 0x8010695Cu: goto label_8010695C;
    case 0x80106960u: goto label_80106960;
    case 0x80106964u: goto label_80106964;
    case 0x80106968u: goto label_80106968;
    case 0x8010696Cu: goto label_8010696C;
    case 0x80106970u: goto label_80106970;
    case 0x80106974u: goto label_80106974;
    case 0x80106978u: goto label_80106978;
    case 0x8010697Cu: goto label_8010697C;
    case 0x80106980u: goto label_80106980;
    case 0x80106984u: goto label_80106984;
    case 0x80106988u: goto label_80106988;
    case 0x8010698Cu: goto label_8010698C;
    case 0x80106990u: goto label_80106990;
    case 0x80106994u: goto label_80106994;
    case 0x80106998u: goto label_80106998;
    case 0x8010699Cu: goto label_8010699C;
    case 0x801069A0u: goto label_801069A0;
    case 0x801069A4u: goto label_801069A4;
    case 0x801069A8u: goto label_801069A8;
    case 0x801069ACu: goto label_801069AC;
    case 0x801069B0u: goto label_801069B0;
    case 0x801069B4u: goto label_801069B4;
    case 0x801069B8u: goto label_801069B8;
    case 0x801069BCu: goto label_801069BC;
    case 0x801069C0u: goto label_801069C0;
    case 0x801069C4u: goto label_801069C4;
    case 0x801069C8u: goto label_801069C8;
    case 0x801069CCu: goto label_801069CC;
    case 0x801069D0u: goto label_801069D0;
    case 0x801069D4u: goto label_801069D4;
    case 0x801069D8u: goto label_801069D8;
    case 0x801069DCu: goto label_801069DC;
    case 0x801069E0u: goto label_801069E0;
    case 0x801069E4u: goto label_801069E4;
    case 0x801069E8u: goto label_801069E8;
    case 0x801069ECu: goto label_801069EC;
    case 0x801069F0u: goto label_801069F0;
    case 0x801069F4u: goto label_801069F4;
    case 0x801069F8u: goto label_801069F8;
    case 0x801069FCu: goto label_801069FC;
    case 0x80106A00u: goto label_80106A00;
    case 0x80106A04u: goto label_80106A04;
    case 0x80106A08u: goto label_80106A08;
    case 0x80106A0Cu: goto label_80106A0C;
    case 0x80106A10u: goto label_80106A10;
    case 0x80106A14u: goto label_80106A14;
    case 0x80106A18u: goto label_80106A18;
    case 0x80106A1Cu: goto label_80106A1C;
    case 0x80106A20u: goto label_80106A20;
    case 0x80106A24u: goto label_80106A24;
    case 0x80106A28u: goto label_80106A28;
    case 0x80106A2Cu: goto label_80106A2C;
    case 0x80106A30u: goto label_80106A30;
    case 0x80106A34u: goto label_80106A34;
    case 0x80106A38u: goto label_80106A38;
    case 0x80106A3Cu: goto label_80106A3C;
    case 0x80106A40u: goto label_80106A40;
    case 0x80106A44u: goto label_80106A44;
    case 0x80106A48u: goto label_80106A48;
    case 0x80106A4Cu: goto label_80106A4C;
    case 0x80106A50u: goto label_80106A50;
    case 0x80106A54u: goto label_80106A54;
    case 0x80106A58u: goto label_80106A58;
    case 0x80106A5Cu: goto label_80106A5C;
    case 0x80106A60u: goto label_80106A60;
    case 0x80106A64u: goto label_80106A64;
    case 0x80106A68u: goto label_80106A68;
    case 0x80106A6Cu: goto label_80106A6C;
    case 0x80106A70u: goto label_80106A70;
    case 0x80106A74u: goto label_80106A74;
    case 0x80106A78u: goto label_80106A78;
    case 0x80106A7Cu: goto label_80106A7C;
    case 0x80106A80u: goto label_80106A80;
    case 0x80106A84u: goto label_80106A84;
    case 0x80106A88u: goto label_80106A88;
    case 0x80106A8Cu: goto label_80106A8C;
    case 0x80106A90u: goto label_80106A90;
    case 0x80106A94u: goto label_80106A94;
    case 0x80106A98u: goto label_80106A98;
    case 0x80106A9Cu: goto label_80106A9C;
    case 0x80106AA0u: goto label_80106AA0;
    case 0x80106AA4u: goto label_80106AA4;
    case 0x80106AA8u: goto label_80106AA8;
    case 0x80106AACu: goto label_80106AAC;
    case 0x80106AB0u: goto label_80106AB0;
    case 0x80106AB4u: goto label_80106AB4;
    case 0x80106AB8u: goto label_80106AB8;
    case 0x80106ABCu: goto label_80106ABC;
    case 0x80106AC0u: goto label_80106AC0;
    case 0x80106AC4u: goto label_80106AC4;
    case 0x80106AC8u: goto label_80106AC8;
    case 0x80106ACCu: goto label_80106ACC;
    case 0x80106AD0u: goto label_80106AD0;
    case 0x80106AD4u: goto label_80106AD4;
    case 0x80106AD8u: goto label_80106AD8;
    case 0x80106ADCu: goto label_80106ADC;
    case 0x80106AE0u: goto label_80106AE0;
    case 0x80106AE4u: goto label_80106AE4;
    case 0x80106AE8u: goto label_80106AE8;
    case 0x80106AECu: goto label_80106AEC;
    case 0x80106AF0u: goto label_80106AF0;
    case 0x80106AF4u: goto label_80106AF4;
    case 0x80106AF8u: goto label_80106AF8;
    case 0x80106AFCu: goto label_80106AFC;
    case 0x80106B00u: goto label_80106B00;
    case 0x80106B04u: goto label_80106B04;
    case 0x80106B08u: goto label_80106B08;
    case 0x80106B0Cu: goto label_80106B0C;
    case 0x80106B10u: goto label_80106B10;
    case 0x80106B14u: goto label_80106B14;
    case 0x80106B18u: goto label_80106B18;
    case 0x80106B1Cu: goto label_80106B1C;
    case 0x80106B20u: goto label_80106B20;
    case 0x80106B24u: goto label_80106B24;
    case 0x80106B28u: goto label_80106B28;
    case 0x80106B2Cu: goto label_80106B2C;
    case 0x80106B30u: goto label_80106B30;
    case 0x80106B34u: goto label_80106B34;
    case 0x80106B38u: goto label_80106B38;
    case 0x80106B3Cu: goto label_80106B3C;
    case 0x80106B40u: goto label_80106B40;
    case 0x80106B44u: goto label_80106B44;
    case 0x80106B48u: goto label_80106B48;
    case 0x80106B4Cu: goto label_80106B4C;
    case 0x80106B50u: goto label_80106B50;
    case 0x80106B54u: goto label_80106B54;
    case 0x80106B58u: goto label_80106B58;
    case 0x80106B5Cu: goto label_80106B5C;
    case 0x80106B60u: goto label_80106B60;
    case 0x80106B64u: goto label_80106B64;
    case 0x80106B68u: goto label_80106B68;
    case 0x80106B6Cu: goto label_80106B6C;
    case 0x80106B70u: goto label_80106B70;
    case 0x80106B74u: goto label_80106B74;
    case 0x80106B78u: goto label_80106B78;
    case 0x80106B7Cu: goto label_80106B7C;
    case 0x80106B80u: goto label_80106B80;
    case 0x80106B84u: goto label_80106B84;
    case 0x80106B88u: goto label_80106B88;
    case 0x80106B8Cu: goto label_80106B8C;
    case 0x80106B90u: goto label_80106B90;
    case 0x80106B94u: goto label_80106B94;
    case 0x80106B98u: goto label_80106B98;
    case 0x80106B9Cu: goto label_80106B9C;
    case 0x80106BA0u: goto label_80106BA0;
    case 0x80106BA4u: goto label_80106BA4;
    case 0x80106BA8u: goto label_80106BA8;
    case 0x80106BACu: goto label_80106BAC;
    case 0x80106BB0u: goto label_80106BB0;
    case 0x80106BB4u: goto label_80106BB4;
    case 0x80106BB8u: goto label_80106BB8;
    case 0x80106BBCu: goto label_80106BBC;
    case 0x80106BC0u: goto label_80106BC0;
    case 0x80106BC4u: goto label_80106BC4;
    case 0x80106BC8u: goto label_80106BC8;
    case 0x80106BCCu: goto label_80106BCC;
    case 0x80106BD0u: goto label_80106BD0;
    case 0x80106BD4u: goto label_80106BD4;
    case 0x80106BD8u: goto label_80106BD8;
    case 0x80106BDCu: goto label_80106BDC;
    case 0x80106BE0u: goto label_80106BE0;
    case 0x80106BE4u: goto label_80106BE4;
    case 0x80106BE8u: goto label_80106BE8;
    case 0x80106BECu: goto label_80106BEC;
    case 0x80106BF0u: goto label_80106BF0;
    case 0x80106BF4u: goto label_80106BF4;
    case 0x80106BF8u: goto label_80106BF8;
    case 0x80106BFCu: goto label_80106BFC;
    case 0x80106C00u: goto label_80106C00;
    case 0x80106C04u: goto label_80106C04;
    case 0x80106C08u: goto label_80106C08;
    case 0x80106C0Cu: goto label_80106C0C;
    case 0x80106C10u: goto label_80106C10;
    case 0x80106C14u: goto label_80106C14;
    case 0x80106C18u: goto label_80106C18;
    case 0x80106C1Cu: goto label_80106C1C;
    case 0x80106C20u: goto label_80106C20;
    case 0x80106C24u: goto label_80106C24;
    case 0x80106C28u: goto label_80106C28;
    case 0x80106C2Cu: goto label_80106C2C;
    case 0x80106C30u: goto label_80106C30;
    case 0x80106C34u: goto label_80106C34;
    case 0x80106C38u: goto label_80106C38;
    case 0x80106C3Cu: goto label_80106C3C;
    case 0x80106C40u: goto label_80106C40;
    case 0x80106C44u: goto label_80106C44;
    case 0x80106C48u: goto label_80106C48;
    case 0x80106C4Cu: goto label_80106C4C;
    case 0x80106C50u: goto label_80106C50;
    case 0x80106C54u: goto label_80106C54;
    case 0x80106C58u: goto label_80106C58;
    case 0x80106C5Cu: goto label_80106C5C;
    case 0x80106C60u: goto label_80106C60;
    case 0x80106C64u: goto label_80106C64;
    case 0x80106C68u: goto label_80106C68;
    case 0x80106C6Cu: goto label_80106C6C;
    case 0x80106C70u: goto label_80106C70;
    case 0x80106C74u: goto label_80106C74;
    case 0x80106C78u: goto label_80106C78;
    case 0x80106C7Cu: goto label_80106C7C;
    case 0x80106C80u: goto label_80106C80;
    case 0x80106C84u: goto label_80106C84;
    case 0x80106C88u: goto label_80106C88;
    case 0x80106C8Cu: goto label_80106C8C;
    case 0x80106C90u: goto label_80106C90;
    case 0x80106C94u: goto label_80106C94;
    case 0x80106C98u: goto label_80106C98;
    case 0x80106C9Cu: goto label_80106C9C;
    case 0x80106CA0u: goto label_80106CA0;
    case 0x80106CA4u: goto label_80106CA4;
    case 0x80106CA8u: goto label_80106CA8;
    case 0x80106CACu: goto label_80106CAC;
    case 0x80106CB0u: goto label_80106CB0;
    case 0x80106CB4u: goto label_80106CB4;
    case 0x80106CB8u: goto label_80106CB8;
    case 0x80106CBCu: goto label_80106CBC;
    case 0x80106CC0u: goto label_80106CC0;
    case 0x80106CC4u: goto label_80106CC4;
    case 0x80106CC8u: goto label_80106CC8;
    case 0x80106CCCu: goto label_80106CCC;
    case 0x80106CD0u: goto label_80106CD0;
    case 0x80106CD4u: goto label_80106CD4;
    case 0x80106CD8u: goto label_80106CD8;
    case 0x80106CDCu: goto label_80106CDC;
    case 0x80106CE0u: goto label_80106CE0;
    case 0x80106CE4u: goto label_80106CE4;
    case 0x80106CE8u: goto label_80106CE8;
    case 0x80106CECu: goto label_80106CEC;
    case 0x80106CF0u: goto label_80106CF0;
    case 0x80106CF4u: goto label_80106CF4;
    case 0x80106CF8u: goto label_80106CF8;
    case 0x80106CFCu: goto label_80106CFC;
    case 0x80106D00u: goto label_80106D00;
    case 0x80106D04u: goto label_80106D04;
    case 0x80106D08u: goto label_80106D08;
    case 0x80106D0Cu: goto label_80106D0C;
    case 0x80106D10u: goto label_80106D10;
    case 0x80106D14u: goto label_80106D14;
    case 0x80106D18u: goto label_80106D18;
    case 0x80106D1Cu: goto label_80106D1C;
    case 0x80106D20u: goto label_80106D20;
    case 0x80106D24u: goto label_80106D24;
    case 0x80106D28u: goto label_80106D28;
    case 0x80106D2Cu: goto label_80106D2C;
    case 0x80106D30u: goto label_80106D30;
    case 0x80106D34u: goto label_80106D34;
    case 0x80106D38u: goto label_80106D38;
    case 0x80106D3Cu: goto label_80106D3C;
    case 0x80106D40u: goto label_80106D40;
    case 0x80106D44u: goto label_80106D44;
    case 0x80106D48u: goto label_80106D48;
    case 0x80106D4Cu: goto label_80106D4C;
    case 0x80106D50u: goto label_80106D50;
    case 0x80106D54u: goto label_80106D54;
    case 0x80106D58u: goto label_80106D58;
    case 0x80106D5Cu: goto label_80106D5C;
    case 0x80106D60u: goto label_80106D60;
    case 0x80106D64u: goto label_80106D64;
    case 0x80106D68u: goto label_80106D68;
    case 0x80106D6Cu: goto label_80106D6C;
    case 0x80106D70u: goto label_80106D70;
    case 0x80106D74u: goto label_80106D74;
    case 0x80106D78u: goto label_80106D78;
    case 0x80106D7Cu: goto label_80106D7C;
    case 0x80106D80u: goto label_80106D80;
    case 0x80106D84u: goto label_80106D84;
    case 0x80106D88u: goto label_80106D88;
    case 0x80106D8Cu: goto label_80106D8C;
    case 0x80106D90u: goto label_80106D90;
    case 0x80106D94u: goto label_80106D94;
    case 0x80106D98u: goto label_80106D98;
    case 0x80106D9Cu: goto label_80106D9C;
    case 0x80106DA0u: goto label_80106DA0;
    case 0x80106DA4u: goto label_80106DA4;
    case 0x80106DA8u: goto label_80106DA8;
    case 0x80106DACu: goto label_80106DAC;
    case 0x80106DB0u: goto label_80106DB0;
    case 0x80106DB4u: goto label_80106DB4;
    case 0x80106DB8u: goto label_80106DB8;
    case 0x80106DBCu: goto label_80106DBC;
    case 0x80106DC0u: goto label_80106DC0;
    case 0x80106DC4u: goto label_80106DC4;
    case 0x80106DC8u: goto label_80106DC8;
    case 0x80106DCCu: goto label_80106DCC;
    case 0x80106DD0u: goto label_80106DD0;
    case 0x80106DD4u: goto label_80106DD4;
    case 0x80106DD8u: goto label_80106DD8;
    case 0x80106DDCu: goto label_80106DDC;
    case 0x80106DE0u: goto label_80106DE0;
    case 0x80106DE4u: goto label_80106DE4;
    case 0x80106DE8u: goto label_80106DE8;
    case 0x80106DECu: goto label_80106DEC;
    case 0x80106DF0u: goto label_80106DF0;
    case 0x80106DF4u: goto label_80106DF4;
    case 0x80106DF8u: goto label_80106DF8;
    case 0x80106DFCu: goto label_80106DFC;
    case 0x80106E00u: goto label_80106E00;
    case 0x80106E04u: goto label_80106E04;
    case 0x80106E08u: goto label_80106E08;
    case 0x80106E0Cu: goto label_80106E0C;
    case 0x80106E10u: goto label_80106E10;
    case 0x80106E14u: goto label_80106E14;
    case 0x80106E18u: goto label_80106E18;
    case 0x80106E1Cu: goto label_80106E1C;
    case 0x80106E20u: goto label_80106E20;
    case 0x80106E24u: goto label_80106E24;
    case 0x80106E28u: goto label_80106E28;
    case 0x80106E2Cu: goto label_80106E2C;
    case 0x80106E30u: goto label_80106E30;
    case 0x80106E34u: goto label_80106E34;
    case 0x80106E38u: goto label_80106E38;
    case 0x80106E3Cu: goto label_80106E3C;
    case 0x80106E40u: goto label_80106E40;
    case 0x80106E44u: goto label_80106E44;
    case 0x80106E48u: goto label_80106E48;
    case 0x80106E4Cu: goto label_80106E4C;
    case 0x80106E50u: goto label_80106E50;
    case 0x80106E54u: goto label_80106E54;
    case 0x80106E58u: goto label_80106E58;
    case 0x80106E5Cu: goto label_80106E5C;
    case 0x80106E60u: goto label_80106E60;
    case 0x80106E64u: goto label_80106E64;
    case 0x80106E68u: goto label_80106E68;
    case 0x80106E6Cu: goto label_80106E6C;
    case 0x80106E70u: goto label_80106E70;
    case 0x80106E74u: goto label_80106E74;
    case 0x80106E78u: goto label_80106E78;
    case 0x80106E7Cu: goto label_80106E7C;
    case 0x80106E80u: goto label_80106E80;
    case 0x80106E84u: goto label_80106E84;
    case 0x80106E88u: goto label_80106E88;
    case 0x80106E8Cu: goto label_80106E8C;
    case 0x80106E90u: goto label_80106E90;
    case 0x80106E94u: goto label_80106E94;
    case 0x80106E98u: goto label_80106E98;
    case 0x80106E9Cu: goto label_80106E9C;
    case 0x80106EA0u: goto label_80106EA0;
    case 0x80106EA4u: goto label_80106EA4;
    case 0x80106EA8u: goto label_80106EA8;
    case 0x80106EACu: goto label_80106EAC;
    case 0x80106EB0u: goto label_80106EB0;
    case 0x80106EB4u: goto label_80106EB4;
    case 0x80106EB8u: goto label_80106EB8;
    case 0x80106EBCu: goto label_80106EBC;
    case 0x80106EC0u: goto label_80106EC0;
    case 0x80106EC4u: goto label_80106EC4;
    case 0x80106EC8u: goto label_80106EC8;
    case 0x80106ECCu: goto label_80106ECC;
    case 0x80106ED0u: goto label_80106ED0;
    case 0x80106ED4u: goto label_80106ED4;
    case 0x80106ED8u: goto label_80106ED8;
    case 0x80106EDCu: goto label_80106EDC;
    case 0x80106EE0u: goto label_80106EE0;
    case 0x80106EE4u: goto label_80106EE4;
    case 0x80106EE8u: goto label_80106EE8;
    case 0x80106EECu: goto label_80106EEC;
    case 0x80106EF0u: goto label_80106EF0;
    case 0x80106EF4u: goto label_80106EF4;
    case 0x80106EF8u: goto label_80106EF8;
    case 0x80106EFCu: goto label_80106EFC;
    case 0x80106F00u: goto label_80106F00;
    case 0x80106F04u: goto label_80106F04;
    case 0x80106F08u: goto label_80106F08;
    case 0x80106F0Cu: goto label_80106F0C;
    case 0x80106F10u: goto label_80106F10;
    case 0x80106F14u: goto label_80106F14;
    case 0x80106F18u: goto label_80106F18;
    case 0x80106F1Cu: goto label_80106F1C;
    case 0x80106F20u: goto label_80106F20;
    case 0x80106F24u: goto label_80106F24;
    case 0x80106F28u: goto label_80106F28;
    case 0x80106F2Cu: goto label_80106F2C;
    case 0x80106F30u: goto label_80106F30;
    case 0x80106F34u: goto label_80106F34;
    case 0x80106F38u: goto label_80106F38;
    case 0x80106F3Cu: goto label_80106F3C;
    case 0x80106F40u: goto label_80106F40;
    case 0x80106F44u: goto label_80106F44;
    case 0x80106F48u: goto label_80106F48;
    case 0x80106F4Cu: goto label_80106F4C;
    case 0x80106F50u: goto label_80106F50;
    case 0x80106F54u: goto label_80106F54;
    case 0x80106F58u: goto label_80106F58;
    case 0x80106F5Cu: goto label_80106F5C;
    case 0x80106F60u: goto label_80106F60;
    case 0x80106F64u: goto label_80106F64;
    case 0x80106F68u: goto label_80106F68;
    case 0x80106F6Cu: goto label_80106F6C;
    case 0x80106F70u: goto label_80106F70;
    case 0x80106F74u: goto label_80106F74;
    case 0x80106F78u: goto label_80106F78;
    case 0x80106F7Cu: goto label_80106F7C;
    case 0x80106F80u: goto label_80106F80;
    case 0x80106F84u: goto label_80106F84;
    case 0x80106F88u: goto label_80106F88;
    case 0x80106F8Cu: goto label_80106F8C;
    case 0x80106F90u: goto label_80106F90;
    case 0x80106F94u: goto label_80106F94;
    case 0x80106F98u: goto label_80106F98;
    case 0x80106F9Cu: goto label_80106F9C;
    case 0x80106FA0u: goto label_80106FA0;
    case 0x80106FA4u: goto label_80106FA4;
    case 0x80106FA8u: goto label_80106FA8;
    case 0x80106FACu: goto label_80106FAC;
    case 0x80106FB0u: goto label_80106FB0;
    case 0x80106FB4u: goto label_80106FB4;
    case 0x80106FB8u: goto label_80106FB8;
    case 0x80106FBCu: goto label_80106FBC;
    case 0x80106FC0u: goto label_80106FC0;
    case 0x80106FC4u: goto label_80106FC4;
    case 0x80106FC8u: goto label_80106FC8;
    case 0x80106FCCu: goto label_80106FCC;
    case 0x80106FD0u: goto label_80106FD0;
    case 0x80106FD4u: goto label_80106FD4;
    case 0x80106FD8u: goto label_80106FD8;
    case 0x80106FDCu: goto label_80106FDC;
    case 0x80106FE0u: goto label_80106FE0;
    case 0x80106FE4u: goto label_80106FE4;
    case 0x80106FE8u: goto label_80106FE8;
    case 0x80106FECu: goto label_80106FEC;
    case 0x80106FF0u: goto label_80106FF0;
    case 0x80106FF4u: goto label_80106FF4;
    case 0x80106FF8u: goto label_80106FF8;
    case 0x80106FFCu: goto label_80106FFC;
    case 0x80107000u: goto label_80107000;
    case 0x80107004u: goto label_80107004;
    case 0x80107008u: goto label_80107008;
    case 0x8010700Cu: goto label_8010700C;
    case 0x80107010u: goto label_80107010;
    case 0x80107014u: goto label_80107014;
    case 0x80107018u: goto label_80107018;
    case 0x8010701Cu: goto label_8010701C;
    case 0x80107020u: goto label_80107020;
    case 0x80107024u: goto label_80107024;
    case 0x80107028u: goto label_80107028;
    case 0x8010702Cu: goto label_8010702C;
    case 0x80107030u: goto label_80107030;
    case 0x80107034u: goto label_80107034;
    case 0x80107038u: goto label_80107038;
    case 0x8010703Cu: goto label_8010703C;
    case 0x80107040u: goto label_80107040;
    case 0x80107044u: goto label_80107044;
    case 0x80107048u: goto label_80107048;
    case 0x8010704Cu: goto label_8010704C;
    case 0x80107050u: goto label_80107050;
    case 0x80107054u: goto label_80107054;
    case 0x80107058u: goto label_80107058;
    case 0x8010705Cu: goto label_8010705C;
    case 0x80107060u: goto label_80107060;
    case 0x80107064u: goto label_80107064;
    case 0x80107068u: goto label_80107068;
    case 0x8010706Cu: goto label_8010706C;
    case 0x80107070u: goto label_80107070;
    case 0x80107074u: goto label_80107074;
    case 0x80107078u: goto label_80107078;
    case 0x8010707Cu: goto label_8010707C;
    case 0x80107080u: goto label_80107080;
    case 0x80107084u: goto label_80107084;
    case 0x80107088u: goto label_80107088;
    case 0x8010708Cu: goto label_8010708C;
    case 0x80107090u: goto label_80107090;
    case 0x80107094u: goto label_80107094;
    case 0x80107098u: goto label_80107098;
    case 0x8010709Cu: goto label_8010709C;
    case 0x801070A0u: goto label_801070A0;
    case 0x801070A4u: goto label_801070A4;
    case 0x801070A8u: goto label_801070A8;
    case 0x801070ACu: goto label_801070AC;
    case 0x801070B0u: goto label_801070B0;
    case 0x801070B4u: goto label_801070B4;
    case 0x801070B8u: goto label_801070B8;
    case 0x801070BCu: goto label_801070BC;
    case 0x801070C0u: goto label_801070C0;
    case 0x801070C4u: goto label_801070C4;
    case 0x801070C8u: goto label_801070C8;
    case 0x801070CCu: goto label_801070CC;
    case 0x801070D0u: goto label_801070D0;
    case 0x801070D4u: goto label_801070D4;
    case 0x801070D8u: goto label_801070D8;
    case 0x801070DCu: goto label_801070DC;
    case 0x801070E0u: goto label_801070E0;
    case 0x801070E4u: goto label_801070E4;
    case 0x801070E8u: goto label_801070E8;
    case 0x801070ECu: goto label_801070EC;
    case 0x801070F0u: goto label_801070F0;
    case 0x801070F4u: goto label_801070F4;
    case 0x801070F8u: goto label_801070F8;
    case 0x801070FCu: goto label_801070FC;
    case 0x80107100u: goto label_80107100;
    case 0x80107104u: goto label_80107104;
    case 0x80107108u: goto label_80107108;
    case 0x8010710Cu: goto label_8010710C;
    case 0x80107110u: goto label_80107110;
    case 0x80107114u: goto label_80107114;
    case 0x80107118u: goto label_80107118;
    case 0x8010711Cu: goto label_8010711C;
    case 0x80107120u: goto label_80107120;
    case 0x80107124u: goto label_80107124;
    case 0x80107128u: goto label_80107128;
    case 0x8010712Cu: goto label_8010712C;
    case 0x80107130u: goto label_80107130;
    case 0x80107134u: goto label_80107134;
    case 0x80107138u: goto label_80107138;
    case 0x8010713Cu: goto label_8010713C;
    case 0x80107140u: goto label_80107140;
    case 0x80107144u: goto label_80107144;
    case 0x80107148u: goto label_80107148;
    case 0x8010714Cu: goto label_8010714C;
    case 0x80107150u: goto label_80107150;
    case 0x80107154u: goto label_80107154;
    case 0x80107158u: goto label_80107158;
    case 0x8010715Cu: goto label_8010715C;
    case 0x80107160u: goto label_80107160;
    case 0x80107164u: goto label_80107164;
    case 0x80107168u: goto label_80107168;
    case 0x8010716Cu: goto label_8010716C;
    case 0x80107170u: goto label_80107170;
    case 0x80107174u: goto label_80107174;
    case 0x80107178u: goto label_80107178;
    case 0x8010717Cu: goto label_8010717C;
    case 0x80107180u: goto label_80107180;
    case 0x80107184u: goto label_80107184;
    case 0x80107188u: goto label_80107188;
    case 0x8010718Cu: goto label_8010718C;
    case 0x80107190u: goto label_80107190;
    case 0x80107194u: goto label_80107194;
    case 0x80107198u: goto label_80107198;
    case 0x8010719Cu: goto label_8010719C;
    case 0x801071A0u: goto label_801071A0;
    case 0x801071A4u: goto label_801071A4;
    case 0x801071A8u: goto label_801071A8;
    case 0x801071ACu: goto label_801071AC;
    case 0x801071B0u: goto label_801071B0;
    case 0x801071B4u: goto label_801071B4;
    case 0x801071B8u: goto label_801071B8;
    case 0x801071BCu: goto label_801071BC;
    default: return;
    }
label_801031C0:
    ctx->pc = 0x801031C0u;
    ctx->downcount -= 4;
    // 801031C0: stb     r6, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_801031C4:
    ctx->pc = 0x801031C4u;
    // 801031C4: stb     r5, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_801031C8:
    ctx->pc = 0x801031C8u;
    // 801031C8: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801031CC:
    ctx->pc = 0x801031CCu;
    // 801031CC: bl      0x80038830
    {
            ctx->lr = 0x801031D0u;
            ctx->pc = 0x80038830u;
            return;
    }

label_801031D0:
    ctx->pc = 0x801031D0u;
    ctx->downcount -= 5;
    // 801031D0: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801031D4:
    ctx->pc = 0x801031D4u;
    // 801031D4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_801031D8:
    ctx->pc = 0x801031D8u;
    // 801031D8: lwz     r4, -32228(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801031DC:
    ctx->pc = 0x801031DCu;
    // 801031DC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801031E0:
    ctx->pc = 0x801031E0u;
    // 801031E0: bl      0x80034900
    {
            ctx->lr = 0x801031E4u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801031E4:
    ctx->pc = 0x801031E4u;
    ctx->downcount -= 5;
    // 801031E4: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801031E8:
    ctx->pc = 0x801031E8u;
    // 801031E8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801031EC:
    ctx->pc = 0x801031ECu;
    // 801031EC: lwz     r4, -32224(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801031F0:
    ctx->pc = 0x801031F0u;
    // 801031F0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801031F4:
    ctx->pc = 0x801031F4u;
    // 801031F4: bl      0x80034900
    {
            ctx->lr = 0x801031F8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801031F8:
    ctx->pc = 0x801031F8u;
    ctx->downcount -= 4;
    // 801031F8: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801031FC:
    ctx->pc = 0x801031FCu;
    // 801031FC: lwz     r3, -32220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103200:
    ctx->pc = 0x80103200u;
    // 80103200: lhz     r4, -32200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32200);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103204:
    ctx->pc = 0x80103204u;
    // 80103204: bl      0x80039910
    {
            ctx->lr = 0x80103208u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80103208:
    ctx->pc = 0x80103208u;
    ctx->downcount -= 5;
    // 80103208: lwz     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8010320C:
    ctx->pc = 0x8010320Cu;
    // 8010320C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103210:
    ctx->pc = 0x80103210u;
    // 80103210: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80103214:
    ctx->pc = 0x80103214u;
    // 80103214: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80103218:
    ctx->pc = 0x80103218u;
    // 80103218: bl      0x80038AC0
    {
            ctx->lr = 0x8010321Cu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_8010321C:
    ctx->pc = 0x8010321Cu;
    ctx->downcount -= 7;
    // 8010321C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103220:
    ctx->pc = 0x80103220u;
    // 80103220: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80103224:
    ctx->pc = 0x80103224u;
    // 80103224: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103228:
    ctx->pc = 0x80103228u;
    // 80103228: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_8010322C:
    ctx->pc = 0x8010322Cu;
    // 8010322C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80103230:
    ctx->pc = 0x80103230u;
    // 80103230: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80103234:
    ctx->pc = 0x80103234u;
    // 80103234: bl      0x80034950
    {
            ctx->lr = 0x80103238u;
            ctx->pc = 0x80034950u;
            return;
    }

label_80103238:
    ctx->pc = 0x80103238u;
    ctx->downcount -= 3;
    // 80103238: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_8010323C:
    ctx->pc = 0x8010323Cu;
    // 8010323C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80103240:
    ctx->pc = 0x80103240u;
    // 80103240: bl      0x80033940
    {
            ctx->lr = 0x80103244u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80103244:
    ctx->pc = 0x80103244u;
    ctx->downcount -= 4;
    // 80103244: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_80103248:
    ctx->pc = 0x80103248u;
    // 80103248: lhz     r0, -32198(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32198);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8010324C:
    ctx->pc = 0x8010324Cu;
    // 8010324C: cmpwi   r0, 0
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

label_80103250:
    ctx->pc = 0x80103250u;
    // 80103250: bc    12, 2, 0x80103334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103334;
        }
    }

label_80103254:
    ctx->pc = 0x80103254u;
    ctx->downcount -= 6;
    // 80103254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103258:
    ctx->pc = 0x80103258u;
    // 80103258: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_8010325C:
    ctx->pc = 0x8010325Cu;
    // 8010325C: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_80103260:
    ctx->pc = 0x80103260u;
    // 80103260: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80103264:
    ctx->pc = 0x80103264u;
    // 80103264: li      r7, 14
    ctx->gpr[7] = (u32)(s32)(14);

label_80103268:
    ctx->pc = 0x80103268u;
    // 80103268: bl      0x80038620
    {
            ctx->lr = 0x8010326Cu;
            ctx->pc = 0x80038620u;
            return;
    }

label_8010326C:
    ctx->pc = 0x8010326Cu;
    ctx->downcount -= 7;
    // 8010326C: lwz     r8, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80103270:
    ctx->pc = 0x80103270u;
    // 80103270: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103274:
    ctx->pc = 0x80103274u;
    // 80103274: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80103278:
    ctx->pc = 0x80103278u;
    // 80103278: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8010327C:
    ctx->pc = 0x8010327Cu;
    // 8010327C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80103280:
    ctx->pc = 0x80103280u;
    // 80103280: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80103284:
    ctx->pc = 0x80103284u;
    // 80103284: bl      0x800386A0
    {
            ctx->lr = 0x80103288u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80103288:
    ctx->pc = 0x80103288u;
    ctx->downcount -= 16;
    // 80103288: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_8010328C:
    ctx->pc = 0x8010328Cu;
    // 8010328C: addi    r0, r31, 184
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(184);

label_80103290:
    ctx->pc = 0x80103290u;
    // 80103290: lbz     r5, -32182(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32182);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80103294:
    ctx->pc = 0x80103294u;
    // 80103294: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80103298:
    ctx->pc = 0x80103298u;
    // 80103298: lwz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010329C:
    ctx->pc = 0x8010329Cu;
    // 8010329C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_801032A0:
    ctx->pc = 0x801032A0u;
    // 801032A0: add   r8, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_801032A4:
    ctx->pc = 0x801032A4u;
    // 801032A4: lbzx    r7, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801032A8:
    ctx->pc = 0x801032A8u;
    // 801032A8: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801032AC:
    ctx->pc = 0x801032ACu;
    // 801032AC: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801032B0:
    ctx->pc = 0x801032B0u;
    // 801032B0: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801032B4:
    ctx->pc = 0x801032B4u;
    // 801032B4: stb     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_801032B8:
    ctx->pc = 0x801032B8u;
    // 801032B8: stb     r6, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_801032BC:
    ctx->pc = 0x801032BCu;
    // 801032BC: stb     r5, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_801032C0:
    ctx->pc = 0x801032C0u;
    // 801032C0: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801032C4:
    ctx->pc = 0x801032C4u;
    // 801032C4: bl      0x80038830
    {
            ctx->lr = 0x801032C8u;
            ctx->pc = 0x80038830u;
            return;
    }

label_801032C8:
    ctx->pc = 0x801032C8u;
    ctx->downcount -= 4;
    // 801032C8: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801032CC:
    ctx->pc = 0x801032CCu;
    // 801032CC: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801032D0:
    ctx->pc = 0x801032D0u;
    // 801032D0: addi    r3, r3, -32324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32324);

label_801032D4:
    ctx->pc = 0x801032D4u;
    // 801032D4: bl      0x80037780
    {
            ctx->lr = 0x801032D8u;
            ctx->pc = 0x80037780u;
            return;
    }

label_801032D8:
    ctx->pc = 0x801032D8u;
    ctx->downcount -= 4;
    // 801032D8: addi    r4, r30, 26516
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(26516);

label_801032DC:
    ctx->pc = 0x801032DCu;
    // 801032DC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_801032E0:
    ctx->pc = 0x801032E0u;
    // 801032E0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801032E4:
    ctx->pc = 0x801032E4u;
    // 801032E4: bl      0x80034900
    {
            ctx->lr = 0x801032E8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801032E8:
    ctx->pc = 0x801032E8u;
    ctx->downcount -= 4;
    // 801032E8: addi    r4, r30, 27554
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(27554);

label_801032EC:
    ctx->pc = 0x801032ECu;
    // 801032EC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801032F0:
    ctx->pc = 0x801032F0u;
    // 801032F0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801032F4:
    ctx->pc = 0x801032F4u;
    // 801032F4: bl      0x80034900
    {
            ctx->lr = 0x801032F8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801032F8:
    ctx->pc = 0x801032F8u;
    ctx->downcount -= 4;
    // 801032F8: addi    r4, r30, 29030
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(29030);

label_801032FC:
    ctx->pc = 0x801032FCu;
    // 801032FC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80103300:
    ctx->pc = 0x80103300u;
    // 80103300: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103304:
    ctx->pc = 0x80103304u;
    // 80103304: bl      0x80034900
    {
            ctx->lr = 0x80103308u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103308:
    ctx->pc = 0x80103308u;
    ctx->downcount -= 4;
    // 80103308: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_8010330C:
    ctx->pc = 0x8010330Cu;
    // 8010330C: addi    r3, r30, 192
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(192);

label_80103310:
    ctx->pc = 0x80103310u;
    // 80103310: lhz     r4, -32198(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32198);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103314:
    ctx->pc = 0x80103314u;
    // 80103314: bl      0x80039910
    {
            ctx->lr = 0x80103318u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80103318:
    ctx->pc = 0x80103318u;
    ctx->downcount -= 7;
    // 80103318: lwz     r8, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8010331C:
    ctx->pc = 0x8010331Cu;
    // 8010331C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103320:
    ctx->pc = 0x80103320u;
    // 80103320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80103324:
    ctx->pc = 0x80103324u;
    // 80103324: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80103328:
    ctx->pc = 0x80103328u;
    // 80103328: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8010332C:
    ctx->pc = 0x8010332Cu;
    // 8010332C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80103330:
    ctx->pc = 0x80103330u;
    // 80103330: bl      0x800386A0
    {
            ctx->lr = 0x80103334u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80103334:
    ctx->pc = 0x80103334u;
    ctx->downcount -= 6;
    // 80103334: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103338:
    ctx->pc = 0x80103338u;
    // 80103338: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_8010333C:
    ctx->pc = 0x8010333Cu;
    // 8010333C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80103340:
    ctx->pc = 0x80103340u;
    // 80103340: li      r6, 9
    ctx->gpr[6] = (u32)(s32)(9);

label_80103344:
    ctx->pc = 0x80103344u;
    // 80103344: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80103348:
    ctx->pc = 0x80103348u;
    // 80103348: bl      0x80038620
    {
            ctx->lr = 0x8010334Cu;
            ctx->pc = 0x80038620u;
            return;
    }

label_8010334C:
    ctx->pc = 0x8010334Cu;
    ctx->downcount -= 16;
    // 8010334C: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_80103350:
    ctx->pc = 0x80103350u;
    // 80103350: addi    r0, r31, 72
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(72);

label_80103354:
    ctx->pc = 0x80103354u;
    // 80103354: lbz     r5, -32186(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32186);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80103358:
    ctx->pc = 0x80103358u;
    // 80103358: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8010335C:
    ctx->pc = 0x8010335Cu;
    // 8010335C: lwz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103360:
    ctx->pc = 0x80103360u;
    // 80103360: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80103364:
    ctx->pc = 0x80103364u;
    // 80103364: add   r8, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80103368:
    ctx->pc = 0x80103368u;
    // 80103368: lbzx    r7, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010336C:
    ctx->pc = 0x8010336Cu;
    // 8010336C: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80103370:
    ctx->pc = 0x80103370u;
    // 80103370: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80103374:
    ctx->pc = 0x80103374u;
    // 80103374: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80103378:
    ctx->pc = 0x80103378u;
    // 80103378: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8010337C:
    ctx->pc = 0x8010337Cu;
    // 8010337C: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80103380:
    ctx->pc = 0x80103380u;
    // 80103380: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80103384:
    ctx->pc = 0x80103384u;
    // 80103384: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80103388:
    ctx->pc = 0x80103388u;
    // 80103388: bl      0x80038830
    {
            ctx->lr = 0x8010338Cu;
            ctx->pc = 0x80038830u;
            return;
    }

label_8010338C:
    ctx->pc = 0x8010338Cu;
    ctx->downcount -= 4;
    // 8010338C: lwz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103390:
    ctx->pc = 0x80103390u;
    // 80103390: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103394:
    ctx->pc = 0x80103394u;
    // 80103394: addi    r5, r4, 1
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(1);

label_80103398:
    ctx->pc = 0x80103398u;
    // 80103398: bl      0x80038930
    {
            ctx->lr = 0x8010339Cu;
            ctx->pc = 0x80038930u;
            return;
    }

label_8010339C:
    ctx->pc = 0x8010339Cu;
    ctx->downcount -= 4;
    // 8010339C: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801033A0:
    ctx->pc = 0x801033A0u;
    // 801033A0: lwz     r0, -32180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801033A4:
    ctx->pc = 0x801033A4u;
    // 801033A4: cmpwi   r0, 0
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

label_801033A8:
    ctx->pc = 0x801033A8u;
    // 801033A8: bc    12, 2, 0x801033C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801033C4;
        }
    }

label_801033AC:
    ctx->pc = 0x801033ACu;
    ctx->downcount -= 4;
    // 801033AC: lbz     r0, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801033B0:
    ctx->pc = 0x801033B0u;
    // 801033B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801033B4:
    ctx->pc = 0x801033B4u;
    // 801033B4: cmpwi   r0, 0
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

label_801033B8:
    ctx->pc = 0x801033B8u;
    // 801033B8: bc    12, 2, 0x801033C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801033C0;
        }
    }

label_801033BC:
    ctx->pc = 0x801033BCu;
    ctx->downcount -= 1;
    // 801033BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801033C0:
    ctx->pc = 0x801033C0u;
    ctx->downcount -= 1;
    // 801033C0: bl      0x80035AC0
    {
            ctx->lr = 0x801033C4u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_801033C4:
    ctx->pc = 0x801033C4u;
    ctx->downcount -= 4;
    // 801033C4: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_801033C8:
    ctx->pc = 0x801033C8u;
    // 801033C8: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801033CC:
    ctx->pc = 0x801033CCu;
    // 801033CC: addi    r3, r3, -32356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32356);

label_801033D0:
    ctx->pc = 0x801033D0u;
    // 801033D0: bl      0x80037780
    {
            ctx->lr = 0x801033D4u;
            ctx->pc = 0x80037780u;
            return;
    }

label_801033D4:
    ctx->pc = 0x801033D4u;
    ctx->downcount -= 4;
    // 801033D4: addi    r4, r30, 29410
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(29410);

label_801033D8:
    ctx->pc = 0x801033D8u;
    // 801033D8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_801033DC:
    ctx->pc = 0x801033DCu;
    // 801033DC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801033E0:
    ctx->pc = 0x801033E0u;
    // 801033E0: bl      0x80034900
    {
            ctx->lr = 0x801033E4u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801033E4:
    ctx->pc = 0x801033E4u;
    ctx->downcount -= 4;
    // 801033E4: addi    r4, r30, 29806
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(29806);

label_801033E8:
    ctx->pc = 0x801033E8u;
    // 801033E8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801033EC:
    ctx->pc = 0x801033ECu;
    // 801033EC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801033F0:
    ctx->pc = 0x801033F0u;
    // 801033F0: bl      0x80034900
    {
            ctx->lr = 0x801033F4u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801033F4:
    ctx->pc = 0x801033F4u;
    ctx->downcount -= 4;
    // 801033F4: addi    r4, r30, 30202
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(30202);

label_801033F8:
    ctx->pc = 0x801033F8u;
    // 801033F8: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_801033FC:
    ctx->pc = 0x801033FCu;
    // 801033FC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103400:
    ctx->pc = 0x80103400u;
    // 80103400: bl      0x80034900
    {
            ctx->lr = 0x80103404u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103404:
    ctx->pc = 0x80103404u;
    ctx->downcount -= 4;
    // 80103404: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_80103408:
    ctx->pc = 0x80103408u;
    // 80103408: addi    r3, r30, 1568
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1568);

label_8010340C:
    ctx->pc = 0x8010340Cu;
    // 8010340C: lhz     r4, -32202(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32202);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103410:
    ctx->pc = 0x80103410u;
    // 80103410: bl      0x80039910
    {
            ctx->lr = 0x80103414u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80103414:
    ctx->pc = 0x80103414u;
    ctx->downcount -= 9;
    // 80103414: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80103418:
    ctx->pc = 0x80103418u;
    // 80103418: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8010341C:
    ctx->pc = 0x8010341Cu;
    // 8010341C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80103420:
    ctx->pc = 0x80103420u;
    // 80103420: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80103424:
    ctx->pc = 0x80103424u;
    // 80103424: lwz     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80103428:
    ctx->pc = 0x80103428u;
    // 80103428: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8010342C:
    ctx->pc = 0x8010342Cu;
    // 8010342C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80103430:
    ctx->pc = 0x80103430u;
    // 80103430: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80103434:
    ctx->pc = 0x80103434u;
    ctx->downcount -= 14;
    // 80103434: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80103438:
    ctx->pc = 0x80103438u;
    // 80103438: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8010343C:
    ctx->pc = 0x8010343Cu;
    // 8010343C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80103440:
    ctx->pc = 0x80103440u;
    // 80103440: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103444:
    ctx->pc = 0x80103444u;
    // 80103444: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80103448:
    ctx->pc = 0x80103448u;
    // 80103448: lwz     r31, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8010344C:
    ctx->pc = 0x8010344Cu;
    // 8010344C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103450:
    ctx->pc = 0x80103450u;
    // 80103450: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80103454:
    ctx->pc = 0x80103454u;
    // 80103454: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103458:
    ctx->pc = 0x80103458u;
    // 80103458: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8010345C:
    ctx->pc = 0x8010345Cu;
    // 8010345C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80103460:
    ctx->pc = 0x80103460u;
    // 80103460: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80103464:
    ctx->pc = 0x80103464u;
    // 80103464: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103468:
    ctx->pc = 0x80103468u;
    // 80103468: bl      0x80038AC0
    {
            ctx->lr = 0x8010346Cu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_8010346C:
    ctx->pc = 0x8010346Cu;
    ctx->downcount -= 6;
    // 8010346C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103470:
    ctx->pc = 0x80103470u;
    // 80103470: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80103474:
    ctx->pc = 0x80103474u;
    // 80103474: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80103478:
    ctx->pc = 0x80103478u;
    // 80103478: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_8010347C:
    ctx->pc = 0x8010347Cu;
    // 8010347C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80103480:
    ctx->pc = 0x80103480u;
    // 80103480: bl      0x80038660
    {
            ctx->lr = 0x80103484u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80103484:
    ctx->pc = 0x80103484u;
    ctx->downcount -= 4;
    // 80103484: lwz     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103488:
    ctx->pc = 0x80103488u;
    // 80103488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010348C:
    ctx->pc = 0x8010348Cu;
    // 8010348C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80103490:
    ctx->pc = 0x80103490u;
    // 80103490: bl      0x80038930
    {
            ctx->lr = 0x80103494u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80103494:
    ctx->pc = 0x80103494u;
    ctx->downcount -= 3;
    // 80103494: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103498:
    ctx->pc = 0x80103498u;
    // 80103498: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8010349C:
    ctx->pc = 0x8010349Cu;
    // 8010349C: bl      0x80039AE0
    {
            ctx->lr = 0x801034A0u;
            ctx->pc = 0x80039AE0u;
            return;
    }

label_801034A0:
    ctx->pc = 0x801034A0u;
    ctx->downcount -= 3;
    // 801034A0: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801034A4:
    ctx->pc = 0x801034A4u;
    // 801034A4: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_801034A8:
    ctx->pc = 0x801034A8u;
    // 801034A8: bl      0x80039B60
    {
            ctx->lr = 0x801034ACu;
            ctx->pc = 0x80039B60u;
            return;
    }

label_801034AC:
    ctx->pc = 0x801034ACu;
    ctx->downcount -= 2;
    // 801034AC: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801034B0:
    ctx->pc = 0x801034B0u;
    // 801034B0: bl      0x80039C00
    {
            ctx->lr = 0x801034B4u;
            ctx->pc = 0x80039C00u;
            return;
    }

label_801034B4:
    ctx->pc = 0x801034B4u;
    ctx->downcount -= 7;
    // 801034B4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801034B8:
    ctx->pc = 0x801034B8u;
    // 801034B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_801034BC:
    ctx->pc = 0x801034BCu;
    // 801034BC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_801034C0:
    ctx->pc = 0x801034C0u;
    // 801034C0: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_801034C4:
    ctx->pc = 0x801034C4u;
    // 801034C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_801034C8:
    ctx->pc = 0x801034C8u;
    // 801034C8: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_801034CC:
    ctx->pc = 0x801034CCu;
    // 801034CC: bl      0x80034950
    {
            ctx->lr = 0x801034D0u;
            ctx->pc = 0x80034950u;
            return;
    }

label_801034D0:
    ctx->pc = 0x801034D0u;
    ctx->downcount -= 6;
    // 801034D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801034D4:
    ctx->pc = 0x801034D4u;
    // 801034D4: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_801034D8:
    ctx->pc = 0x801034D8u;
    // 801034D8: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_801034DC:
    ctx->pc = 0x801034DCu;
    // 801034DC: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_801034E0:
    ctx->pc = 0x801034E0u;
    // 801034E0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_801034E4:
    ctx->pc = 0x801034E4u;
    // 801034E4: bl      0x80038620
    {
            ctx->lr = 0x801034E8u;
            ctx->pc = 0x80038620u;
            return;
    }

label_801034E8:
    ctx->pc = 0x801034E8u;
    ctx->downcount -= 4;
    // 801034E8: lbz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801034EC:
    ctx->pc = 0x801034ECu;
    // 801034EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801034F0:
    ctx->pc = 0x801034F0u;
    // 801034F0: cmpwi   r0, 0
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

label_801034F4:
    ctx->pc = 0x801034F4u;
    // 801034F4: bc    12, 2, 0x801034FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801034FC;
        }
    }

label_801034F8:
    ctx->pc = 0x801034F8u;
    ctx->downcount -= 1;
    // 801034F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801034FC:
    ctx->pc = 0x801034FCu;
    ctx->downcount -= 1;
    // 801034FC: bl      0x80035AC0
    {
            ctx->lr = 0x80103500u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_80103500:
    ctx->pc = 0x80103500u;
    ctx->downcount -= 6;
    // 80103500: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80103504:
    ctx->pc = 0x80103504u;
    // 80103504: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103508:
    ctx->pc = 0x80103508u;
    // 80103508: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8010350C:
    ctx->pc = 0x8010350Cu;
    // 8010350C: add   r3, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80103510:
    ctx->pc = 0x80103510u;
    // 80103510: lwz     r3, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103514:
    ctx->pc = 0x80103514u;
    // 80103514: bl      0x80037780
    {
            ctx->lr = 0x80103518u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80103518:
    ctx->pc = 0x80103518u;
    ctx->downcount -= 4;
    // 80103518: addi    r4, r31, 31386
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(31386);

label_8010351C:
    ctx->pc = 0x8010351Cu;
    // 8010351C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80103520:
    ctx->pc = 0x80103520u;
    // 80103520: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80103524:
    ctx->pc = 0x80103524u;
    // 80103524: bl      0x80034900
    {
            ctx->lr = 0x80103528u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103528:
    ctx->pc = 0x80103528u;
    ctx->downcount -= 4;
    // 80103528: addi    r4, r31, 31914
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(31914);

label_8010352C:
    ctx->pc = 0x8010352Cu;
    // 8010352C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80103530:
    ctx->pc = 0x80103530u;
    // 80103530: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80103534:
    ctx->pc = 0x80103534u;
    // 80103534: bl      0x80034900
    {
            ctx->lr = 0x80103538u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103538:
    ctx->pc = 0x80103538u;
    ctx->downcount -= 4;
    // 80103538: addi    r4, r31, 32430
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32430);

label_8010353C:
    ctx->pc = 0x8010353Cu;
    // 8010353C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80103540:
    ctx->pc = 0x80103540u;
    // 80103540: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103544:
    ctx->pc = 0x80103544u;
    // 80103544: bl      0x80034900
    {
            ctx->lr = 0x80103548u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103548:
    ctx->pc = 0x80103548u;
    ctx->downcount -= 4;
    // 80103548: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010354C:
    ctx->pc = 0x8010354Cu;
    // 8010354C: addi    r3, r31, 2752
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2752);

label_80103550:
    ctx->pc = 0x80103550u;
    // 80103550: lhz     r4, -32190(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32190);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103554:
    ctx->pc = 0x80103554u;
    // 80103554: bl      0x80039910
    {
            ctx->lr = 0x80103558u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80103558:
    ctx->pc = 0x80103558u;
    ctx->downcount -= 4;
    // 80103558: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010355C:
    ctx->pc = 0x8010355Cu;
    // 8010355C: lhz     r0, -32192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32192);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103560:
    ctx->pc = 0x80103560u;
    // 80103560: cmpwi   r0, 0
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

label_80103564:
    ctx->pc = 0x80103564u;
    // 80103564: bc    12, 2, 0x801035D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801035D0;
        }
    }

label_80103568:
    ctx->pc = 0x80103568u;
    ctx->downcount -= 6;
    // 80103568: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010356C:
    ctx->pc = 0x8010356Cu;
    // 8010356C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80103570:
    ctx->pc = 0x80103570u;
    // 80103570: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80103574:
    ctx->pc = 0x80103574u;
    // 80103574: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80103578:
    ctx->pc = 0x80103578u;
    // 80103578: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_8010357C:
    ctx->pc = 0x8010357Cu;
    // 8010357C: bl      0x80038620
    {
            ctx->lr = 0x80103580u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80103580:
    ctx->pc = 0x80103580u;
    ctx->downcount -= 4;
    // 80103580: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80103584:
    ctx->pc = 0x80103584u;
    // 80103584: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103588:
    ctx->pc = 0x80103588u;
    // 80103588: addi    r3, r3, -32292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32292);

label_8010358C:
    ctx->pc = 0x8010358Cu;
    // 8010358C: bl      0x80037780
    {
            ctx->lr = 0x80103590u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80103590:
    ctx->pc = 0x80103590u;
    ctx->downcount -= 4;
    // 80103590: addi    r4, r31, 31310
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(31310);

label_80103594:
    ctx->pc = 0x80103594u;
    // 80103594: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80103598:
    ctx->pc = 0x80103598u;
    // 80103598: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8010359C:
    ctx->pc = 0x8010359Cu;
    // 8010359C: bl      0x80034900
    {
            ctx->lr = 0x801035A0u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801035A0:
    ctx->pc = 0x801035A0u;
    ctx->downcount -= 4;
    // 801035A0: addi    r4, r31, 31346
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(31346);

label_801035A4:
    ctx->pc = 0x801035A4u;
    // 801035A4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801035A8:
    ctx->pc = 0x801035A8u;
    // 801035A8: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801035AC:
    ctx->pc = 0x801035ACu;
    // 801035AC: bl      0x80034900
    {
            ctx->lr = 0x801035B0u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801035B0:
    ctx->pc = 0x801035B0u;
    ctx->downcount -= 4;
    // 801035B0: addi    r4, r31, 31358
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(31358);

label_801035B4:
    ctx->pc = 0x801035B4u;
    // 801035B4: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_801035B8:
    ctx->pc = 0x801035B8u;
    // 801035B8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_801035BC:
    ctx->pc = 0x801035BCu;
    // 801035BC: bl      0x80034900
    {
            ctx->lr = 0x801035C0u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801035C0:
    ctx->pc = 0x801035C0u;
    ctx->downcount -= 4;
    // 801035C0: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801035C4:
    ctx->pc = 0x801035C4u;
    // 801035C4: addi    r3, r31, 2656
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2656);

label_801035C8:
    ctx->pc = 0x801035C8u;
    // 801035C8: lhz     r4, -32192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32192);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_801035CC:
    ctx->pc = 0x801035CCu;
    // 801035CC: bl      0x80039910
    {
            ctx->lr = 0x801035D0u;
            ctx->pc = 0x80039910u;
            return;
    }

label_801035D0:
    ctx->pc = 0x801035D0u;
    ctx->downcount -= 4;
    // 801035D0: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801035D4:
    ctx->pc = 0x801035D4u;
    // 801035D4: lhz     r0, -32188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32188);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801035D8:
    ctx->pc = 0x801035D8u;
    // 801035D8: cmpwi   r0, 0
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

label_801035DC:
    ctx->pc = 0x801035DCu;
    // 801035DC: bc    12, 2, 0x8010369C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010369C;
        }
    }

label_801035E0:
    ctx->pc = 0x801035E0u;
    ctx->downcount -= 16;
    // 801035E0: lbz     r0, -32183(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32183);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801035E4:
    ctx->pc = 0x801035E4u;
    // 801035E4: lis     r5, -32666
    ctx->gpr[5] = ((u32)(s32)(-32666) << 16);

label_801035E8:
    ctx->pc = 0x801035E8u;
    // 801035E8: addi    r5, r5, -18144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18144);

label_801035EC:
    ctx->pc = 0x801035ECu;
    // 801035EC: lwz     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801035F0:
    ctx->pc = 0x801035F0u;
    // 801035F0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_801035F4:
    ctx->pc = 0x801035F4u;
    // 801035F4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_801035F8:
    ctx->pc = 0x801035F8u;
    // 801035F8: add   r8, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_801035FC:
    ctx->pc = 0x801035FCu;
    // 801035FC: lbzx    r7, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80103600:
    ctx->pc = 0x80103600u;
    // 80103600: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80103604:
    ctx->pc = 0x80103604u;
    // 80103604: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80103608:
    ctx->pc = 0x80103608u;
    // 80103608: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8010360C:
    ctx->pc = 0x8010360Cu;
    // 8010360C: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80103610:
    ctx->pc = 0x80103610u;
    // 80103610: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80103614:
    ctx->pc = 0x80103614u;
    // 80103614: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80103618:
    ctx->pc = 0x80103618u;
    // 80103618: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8010361C:
    ctx->pc = 0x8010361Cu;
    // 8010361C: bl      0x80038830
    {
            ctx->lr = 0x80103620u;
            ctx->pc = 0x80038830u;
            return;
    }

label_80103620:
    ctx->pc = 0x80103620u;
    ctx->downcount -= 2;
    // 80103620: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80103624:
    ctx->pc = 0x80103624u;
    // 80103624: bl      0x80035AC0
    {
            ctx->lr = 0x80103628u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_80103628:
    ctx->pc = 0x80103628u;
    ctx->downcount -= 6;
    // 80103628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010362C:
    ctx->pc = 0x8010362Cu;
    // 8010362C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80103630:
    ctx->pc = 0x80103630u;
    // 80103630: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_80103634:
    ctx->pc = 0x80103634u;
    // 80103634: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80103638:
    ctx->pc = 0x80103638u;
    // 80103638: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_8010363C:
    ctx->pc = 0x8010363Cu;
    // 8010363C: bl      0x80038620
    {
            ctx->lr = 0x80103640u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80103640:
    ctx->pc = 0x80103640u;
    ctx->downcount -= 4;
    // 80103640: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80103644:
    ctx->pc = 0x80103644u;
    // 80103644: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103648:
    ctx->pc = 0x80103648u;
    // 80103648: addi    r3, r3, -32260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32260);

label_8010364C:
    ctx->pc = 0x8010364Cu;
    // 8010364C: bl      0x80037780
    {
            ctx->lr = 0x80103650u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80103650:
    ctx->pc = 0x80103650u;
    ctx->downcount -= 5;
    // 80103650: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80103654:
    ctx->pc = 0x80103654u;
    // 80103654: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80103658:
    ctx->pc = 0x80103658u;
    // 80103658: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8010365C:
    ctx->pc = 0x8010365Cu;
    // 8010365C: addi    r4, r4, -32402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32402);

label_80103660:
    ctx->pc = 0x80103660u;
    // 80103660: bl      0x80034900
    {
            ctx->lr = 0x80103664u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103664:
    ctx->pc = 0x80103664u;
    ctx->downcount -= 5;
    // 80103664: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80103668:
    ctx->pc = 0x80103668u;
    // 80103668: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8010366C:
    ctx->pc = 0x8010366Cu;
    // 8010366C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80103670:
    ctx->pc = 0x80103670u;
    // 80103670: addi    r4, r4, -32378
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32378);

label_80103674:
    ctx->pc = 0x80103674u;
    // 80103674: bl      0x80034900
    {
            ctx->lr = 0x80103678u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80103678:
    ctx->pc = 0x80103678u;
    ctx->downcount -= 5;
    // 80103678: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010367C:
    ctx->pc = 0x8010367Cu;
    // 8010367C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80103680:
    ctx->pc = 0x80103680u;
    // 80103680: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103684:
    ctx->pc = 0x80103684u;
    // 80103684: addi    r4, r4, -32372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32372);

label_80103688:
    ctx->pc = 0x80103688u;
    // 80103688: bl      0x80034900
    {
            ctx->lr = 0x8010368Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010368C:
    ctx->pc = 0x8010368Cu;
    ctx->downcount -= 4;
    // 8010368C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80103690:
    ctx->pc = 0x80103690u;
    // 80103690: addi    r3, r31, 3648
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3648);

label_80103694:
    ctx->pc = 0x80103694u;
    // 80103694: lhz     r4, -32188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32188);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103698:
    ctx->pc = 0x80103698u;
    // 80103698: bl      0x80039910
    {
            ctx->lr = 0x8010369Cu;
            ctx->pc = 0x80039910u;
            return;
    }

label_8010369C:
    ctx->pc = 0x8010369Cu;
    ctx->downcount -= 8;
    // 8010369C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801036A0:
    ctx->pc = 0x801036A0u;
    // 801036A0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_801036A4:
    ctx->pc = 0x801036A4u;
    // 801036A4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_801036A8:
    ctx->pc = 0x801036A8u;
    // 801036A8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_801036AC:
    ctx->pc = 0x801036ACu;
    // 801036AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_801036B0:
    ctx->pc = 0x801036B0u;
    // 801036B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_801036B4:
    ctx->pc = 0x801036B4u;
    // 801036B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801036B8:
    ctx->pc = 0x801036B8u;
    ctx->downcount -= 7;
    // 801036B8: stwu     r1, -752(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-752);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_801036BC:
    ctx->pc = 0x801036BCu;
    // 801036BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_801036C0:
    ctx->pc = 0x801036C0u;
    // 801036C0: stw     r0, 756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801036C4:
    ctx->pc = 0x801036C4u;
    // 801036C4: stfd     f31, 736(r1)
    if (!ppc_fp_available_inline(ctx, 0x801036C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(736);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_801036C8:
    ctx->pc = 0x801036C8u;
    // 801036C8: psq_st   f31, 744(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801036C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(744);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x801036C8u);
        if (ctx->exception) return;
    }

label_801036CC:
    ctx->pc = 0x801036CCu;
    // 801036CC: addi    r11, r1, 736
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(736);

label_801036D0:
    ctx->pc = 0x801036D0u;
    // 801036D0: bl      0x80007854
    {
            ctx->lr = 0x801036D4u;
            ctx->pc = 0x80007854u;
            return;
    }

label_801036D4:
    ctx->pc = 0x801036D4u;
    ctx->downcount -= 8;
    // 801036D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_801036D8:
    ctx->pc = 0x801036D8u;
    // 801036D8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_801036DC:
    ctx->pc = 0x801036DCu;
    // 801036DC: stw     r0, 696(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801036E0:
    ctx->pc = 0x801036E0u;
    // 801036E0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_801036E4:
    ctx->pc = 0x801036E4u;
    // 801036E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801036E8:
    ctx->pc = 0x801036E8u;
    // 801036E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801036EC:
    ctx->pc = 0x801036ECu;
    // 801036EC: stw     r0, 704(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801036F0:
    ctx->pc = 0x801036F0u;
    // 801036F0: bl      0x80034BD0
    {
            ctx->lr = 0x801036F4u;
            ctx->pc = 0x80034BD0u;
            return;
    }

label_801036F4:
    ctx->pc = 0x801036F4u;
    ctx->downcount -= 3;
    // 801036F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801036F8:
    ctx->pc = 0x801036F8u;
    // 801036F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_801036FC:
    ctx->pc = 0x801036FCu;
    // 801036FC: bl      0x80034BD0
    {
            ctx->lr = 0x80103700u;
            ctx->pc = 0x80034BD0u;
            return;
    }

label_80103700:
    ctx->pc = 0x80103700u;
    ctx->downcount -= 31;
    // 80103700: lhz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80103704:
    ctx->pc = 0x80103704u;
    // 80103704: li      r8, 66
    ctx->gpr[8] = (u32)(s32)(66);

label_80103708:
    ctx->pc = 0x80103708u;
    // 80103708: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8010370C:
    ctx->pc = 0x8010370Cu;
    // 8010370C: addi    r12, r27, 29410
    ctx->gpr[12] = ctx->gpr[27] + (u32)(s32)(29410);

label_80103710:
    ctx->pc = 0x80103710u;
    // 80103710: rlwinm r26, r3, 19, 29, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 19u) & 0x00000007u;
    }

label_80103714:
    ctx->pc = 0x80103714u;
    // 80103714: addi    r11, r27, 29806
    ctx->gpr[11] = ctx->gpr[27] + (u32)(s32)(29806);

label_80103718:
    ctx->pc = 0x80103718u;
    // 80103718: addi    r10, r27, 30202
    ctx->gpr[10] = ctx->gpr[27] + (u32)(s32)(30202);

label_8010371C:
    ctx->pc = 0x8010371Cu;
    // 8010371C: addi    r9, r27, 1568
    ctx->gpr[9] = ctx->gpr[27] + (u32)(s32)(1568);

label_80103720:
    ctx->pc = 0x80103720u;
    // 80103720: addi    r5, r1, 68
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(68);

label_80103724:
    ctx->pc = 0x80103724u;
    // 80103724: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80103728:
    ctx->pc = 0x80103728u;
    // 80103728: addi    r30, r1, 44
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(44);

label_8010372C:
    ctx->pc = 0x8010372Cu;
    // 8010372C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80103730:
    ctx->pc = 0x80103730u;
    // 80103730: li      r7, 115
    ctx->gpr[7] = (u32)(s32)(115);

label_80103734:
    ctx->pc = 0x80103734u;
    // 80103734: li      r6, 736
    ctx->gpr[6] = (u32)(s32)(736);

label_80103738:
    ctx->pc = 0x80103738u;
    // 80103738: stw     r3, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8010373C:
    ctx->pc = 0x8010373Cu;
    // 8010373C: addi    r3, r1, 624
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(624);

label_80103740:
    ctx->pc = 0x80103740u;
    // 80103740: sth     r26, 628(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(628);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_80103744:
    ctx->pc = 0x80103744u;
    // 80103744: stw     r12, 640(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80103748:
    ctx->pc = 0x80103748u;
    // 80103748: stw     r11, 644(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8010374C:
    ctx->pc = 0x8010374Cu;
    // 8010374C: stw     r10, 648(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(648);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80103750:
    ctx->pc = 0x80103750u;
    // 80103750: stw     r9, 652(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(652);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80103754:
    ctx->pc = 0x80103754u;
    // 80103754: sth     r8, 656(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(656);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80103758:
    ctx->pc = 0x80103758u;
    // 80103758: sth     r8, 658(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(658);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_8010375C:
    ctx->pc = 0x8010375Cu;
    // 8010375C: sth     r7, 660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(660);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80103760:
    ctx->pc = 0x80103760u;
    // 80103760: sth     r6, 662(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(662);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80103764:
    ctx->pc = 0x80103764u;
    // 80103764: stw     r5, 680(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103768:
    ctx->pc = 0x80103768u;
    // 80103768: stw     r4, 684(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8010376C:
    ctx->pc = 0x8010376Cu;
    // 8010376C: stw     r30, 688(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(688);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103770:
    ctx->pc = 0x80103770u;
    // 80103770: stw     r0, 636(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103774:
    ctx->pc = 0x80103774u;
    // 80103774: stw     r0, 632(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103778:
    ctx->pc = 0x80103778u;
    // 80103778: bl      0x80103E48
    {
            ctx->lr = 0x8010377Cu;
            goto label_80103E48;
    }

label_8010377C:
    ctx->pc = 0x8010377Cu;
    ctx->downcount -= 33;
    // 8010377C: lhz     r4, 670(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(670);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103780:
    ctx->pc = 0x80103780u;
    // 80103780: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103784:
    ctx->pc = 0x80103784u;
    // 80103784: lhz     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103788:
    ctx->pc = 0x80103788u;
    // 80103788: addi    r11, r27, 26516
    ctx->gpr[11] = ctx->gpr[27] + (u32)(s32)(26516);

label_8010378C:
    ctx->pc = 0x8010378Cu;
    // 8010378C: sth     r4, -32202(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32202);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103790:
    ctx->pc = 0x80103790u;
    // 80103790: addi    r10, r27, 27554
    ctx->gpr[10] = ctx->gpr[27] + (u32)(s32)(27554);

label_80103794:
    ctx->pc = 0x80103794u;
    // 80103794: rlwinm r12, r0, 23, 25, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x0000007Fu;
    }

label_80103798:
    ctx->pc = 0x80103798u;
    // 80103798: lfs     f0, -29776(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103798u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8010379C:
    ctx->pc = 0x8010379Cu;
    // 8010379C: addi    r9, r27, 29030
    ctx->gpr[9] = ctx->gpr[27] + (u32)(s32)(29030);

label_801037A0:
    ctx->pc = 0x801037A0u;
    // 801037A0: addi    r8, r27, 192
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(192);

label_801037A4:
    ctx->pc = 0x801037A4u;
    // 801037A4: rlwinm r0, r0, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x00000001u;
    }

label_801037A8:
    ctx->pc = 0x801037A8u;
    // 801037A8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_801037AC:
    ctx->pc = 0x801037ACu;
    // 801037AC: li      r7, 173
    ctx->gpr[7] = (u32)(s32)(173);

label_801037B0:
    ctx->pc = 0x801037B0u;
    // 801037B0: li      r6, 246
    ctx->gpr[6] = (u32)(s32)(246);

label_801037B4:
    ctx->pc = 0x801037B4u;
    // 801037B4: li      r5, 95
    ctx->gpr[5] = (u32)(s32)(95);

label_801037B8:
    ctx->pc = 0x801037B8u;
    // 801037B8: li      r4, 1376
    ctx->gpr[4] = (u32)(s32)(1376);

label_801037BC:
    ctx->pc = 0x801037BCu;
    // 801037BC: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_801037C0:
    ctx->pc = 0x801037C0u;
    // 801037C0: stw     r3, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801037C4:
    ctx->pc = 0x801037C4u;
    // 801037C4: addi    r3, r1, 556
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(556);

label_801037C8:
    ctx->pc = 0x801037C8u;
    // 801037C8: sth     r12, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_801037CC:
    ctx->pc = 0x801037CCu;
    // 801037CC: stw     r11, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_801037D0:
    ctx->pc = 0x801037D0u;
    // 801037D0: stw     r10, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_801037D4:
    ctx->pc = 0x801037D4u;
    // 801037D4: stw     r9, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_801037D8:
    ctx->pc = 0x801037D8u;
    // 801037D8: stw     r8, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_801037DC:
    ctx->pc = 0x801037DCu;
    // 801037DC: sth     r7, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_801037E0:
    ctx->pc = 0x801037E0u;
    // 801037E0: sth     r6, 590(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(590);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_801037E4:
    ctx->pc = 0x801037E4u;
    // 801037E4: sth     r5, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_801037E8:
    ctx->pc = 0x801037E8u;
    // 801037E8: sth     r4, 594(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(594);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_801037EC:
    ctx->pc = 0x801037ECu;
    // 801037EC: stw     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801037F0:
    ctx->pc = 0x801037F0u;
    // 801037F0: stw     r29, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_801037F4:
    ctx->pc = 0x801037F4u;
    // 801037F4: stfs     f0, 604(r1)
    if (!ppc_fp_available_inline(ctx, 0x801037F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_801037F8:
    ctx->pc = 0x801037F8u;
    // 801037F8: stw     r30, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_801037FC:
    ctx->pc = 0x801037FCu;
    // 801037FC: bl      0x80103E48
    {
            ctx->lr = 0x80103800u;
            goto label_80103E48;
    }

label_80103800:
    ctx->pc = 0x80103800u;
    ctx->downcount -= 72;
    // 80103800: lhz     r5, 602(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(602);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80103804:
    ctx->pc = 0x80103804u;
    // 80103804: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103808:
    ctx->pc = 0x80103808u;
    // 80103808: lis     r4, -21845
    ctx->gpr[4] = ((u32)(s32)(-21845) << 16);

label_8010380C:
    ctx->pc = 0x8010380Cu;
    // 8010380C: lhz     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103810:
    ctx->pc = 0x80103810u;
    // 80103810: sth     r5, -32198(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32198);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103814:
    ctx->pc = 0x80103814u;
    // 80103814: addi    r8, r4, -21845
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-21845);

label_80103818:
    ctx->pc = 0x80103818u;
    // 80103818: rlwinm r5, r0, 23, 25, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x0000007Fu;
    }

label_8010381C:
    ctx->pc = 0x8010381Cu;
    // 8010381C: li      r9, 3
    ctx->gpr[9] = (u32)(s32)(3);

label_80103820:
    ctx->pc = 0x80103820u;
    // 80103820: lhz     r11, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[11] = mem_read16(ctx, ea);
    }

label_80103824:
    ctx->pc = 0x80103824u;
    // 80103824: cmplwi  r5, 0x002A
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x002Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80103828:
    ctx->pc = 0x80103828u;
    // 80103828: addi    r7, r27, 26516
    ctx->gpr[7] = ctx->gpr[27] + (u32)(s32)(26516);

label_8010382C:
    ctx->pc = 0x8010382Cu;
    // 8010382C: addi    r6, r27, 27554
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(27554);

label_80103830:
    ctx->pc = 0x80103830u;
    // 80103830: rlwinm r10, r11, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[11], 2u) & 0xFFFFFFFCu;
    }

label_80103834:
    ctx->pc = 0x80103834u;
    // 80103834: addi    r4, r27, 192
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(192);

label_80103838:
    ctx->pc = 0x80103838u;
    // 80103838: subf   r10, r11, r10
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[10] = res;
    }

label_8010383C:
    ctx->pc = 0x8010383Cu;
    // 8010383C: lfs     f0, -29776(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010383Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103840:
    ctx->pc = 0x80103840u;
    // 80103840: rlwinm r10, r10, 1, 0, 30
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[10], 1u) & 0xFFFFFFFEu;
    }

label_80103844:
    ctx->pc = 0x80103844u;
    // 80103844: rlwinm r0, r0, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x00000001u;
    }

label_80103848:
    ctx->pc = 0x80103848u;
    // 80103848: add   r10, r27, r10
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_8010384C:
    ctx->pc = 0x8010384Cu;
    // 8010384C: addi    r10, r10, 26516
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(26516);

label_80103850:
    ctx->pc = 0x80103850u;
    // 80103850: stw     r10, -32228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32228);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80103854:
    ctx->pc = 0x80103854u;
    // 80103854: lhz     r11, 598(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(598);
        ctx->gpr[11] = mem_read16(ctx, ea);
    }

label_80103858:
    ctx->pc = 0x80103858u;
    // 80103858: rlwinm r10, r11, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[11], 2u) & 0xFFFFFFFCu;
    }

label_8010385C:
    ctx->pc = 0x8010385Cu;
    // 8010385C: subf   r10, r11, r10
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[10] = res;
    }

label_80103860:
    ctx->pc = 0x80103860u;
    // 80103860: rlwinm r10, r10, 1, 0, 30
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[10], 1u) & 0xFFFFFFFEu;
    }

label_80103864:
    ctx->pc = 0x80103864u;
    // 80103864: add   r10, r27, r10
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_80103868:
    ctx->pc = 0x80103868u;
    // 80103868: addi    r10, r10, 27554
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(27554);

label_8010386C:
    ctx->pc = 0x8010386Cu;
    // 8010386C: stw     r10, -32224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32224);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80103870:
    ctx->pc = 0x80103870u;
    // 80103870: lhz     r10, 602(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(602);
        ctx->gpr[10] = mem_read16(ctx, ea);
    }

label_80103874:
    ctx->pc = 0x80103874u;
    // 80103874: addi    r10, r10, 31
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(31);

label_80103878:
    ctx->pc = 0x80103878u;
    // 80103878: rlwinm r10, r10, 0, 0, 26
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[10], 0u) & 0xFFFFFFE0u;
    }

label_8010387C:
    ctx->pc = 0x8010387Cu;
    // 8010387C: add   r10, r27, r10
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_80103880:
    ctx->pc = 0x80103880u;
    // 80103880: addi    r10, r10, 192
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(192);

label_80103884:
    ctx->pc = 0x80103884u;
    // 80103884: stw     r10, -32220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32220);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80103888:
    ctx->pc = 0x80103888u;
    // 80103888: stw     r9, 488(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8010388C:
    ctx->pc = 0x8010388Cu;
    // 8010388C: sth     r5, 492(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(492);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103890:
    ctx->pc = 0x80103890u;
    // 80103890: lwz     r5, -32228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80103894:
    ctx->pc = 0x80103894u;
    // 80103894: stw     r5, 504(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103898:
    ctx->pc = 0x80103898u;
    // 80103898: lwz     r5, -32224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8010389C:
    ctx->pc = 0x8010389Cu;
    // 8010389C: stw     r5, 508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801038A0:
    ctx->pc = 0x801038A0u;
    // 801038A0: lwz     r5, -32220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32220);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801038A4:
    ctx->pc = 0x801038A4u;
    // 801038A4: stw     r5, 516(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801038A8:
    ctx->pc = 0x801038A8u;
    // 801038A8: lwz     r5, -32228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801038AC:
    ctx->pc = 0x801038ACu;
    // 801038AC: subf   r5, r7, r5
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_801038B0:
    ctx->pc = 0x801038B0u;
    // 801038B0: rlwinm r5, r5, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFFFu;
    }

label_801038B4:
    ctx->pc = 0x801038B4u;
    // 801038B4: mulhwu   r5, r8, r5
    {
        u64 product = (u64)ctx->gpr[8] * (u64)ctx->gpr[5];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_801038B8:
    ctx->pc = 0x801038B8u;
    // 801038B8: rlwinm r5, r5, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFFFu;
    }

label_801038BC:
    ctx->pc = 0x801038BCu;
    // 801038BC: subfic  r5, r5, 173
    {
        u64 res = (u64)(u32)(s32)(173) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_801038C0:
    ctx->pc = 0x801038C0u;
    // 801038C0: sth     r5, 520(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(520);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_801038C4:
    ctx->pc = 0x801038C4u;
    // 801038C4: lwz     r5, -32224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801038C8:
    ctx->pc = 0x801038C8u;
    // 801038C8: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_801038CC:
    ctx->pc = 0x801038CCu;
    // 801038CC: rlwinm r5, r5, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFFFu;
    }

label_801038D0:
    ctx->pc = 0x801038D0u;
    // 801038D0: mulhwu   r5, r8, r5
    {
        u64 product = (u64)ctx->gpr[8] * (u64)ctx->gpr[5];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_801038D4:
    ctx->pc = 0x801038D4u;
    // 801038D4: rlwinm r5, r5, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFFFu;
    }

label_801038D8:
    ctx->pc = 0x801038D8u;
    // 801038D8: subfic  r5, r5, 246
    {
        u64 res = (u64)(u32)(s32)(246) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_801038DC:
    ctx->pc = 0x801038DCu;
    // 801038DC: sth     r5, 522(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(522);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_801038E0:
    ctx->pc = 0x801038E0u;
    // 801038E0: lwz     r3, -32220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801038E4:
    ctx->pc = 0x801038E4u;
    // 801038E4: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_801038E8:
    ctx->pc = 0x801038E8u;
    // 801038E8: stw     r0, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801038EC:
    ctx->pc = 0x801038ECu;
    // 801038EC: subfic  r0, r3, 1376
    {
        u64 res = (u64)(u32)(s32)(1376) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_801038F0:
    ctx->pc = 0x801038F0u;
    // 801038F0: sth     r0, 526(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(526);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_801038F4:
    ctx->pc = 0x801038F4u;
    // 801038F4: stw     r29, 496(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_801038F8:
    ctx->pc = 0x801038F8u;
    // 801038F8: stfs     f0, 536(r1)
    if (!ppc_fp_available_inline(ctx, 0x801038F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_801038FC:
    ctx->pc = 0x801038FCu;
    // 801038FC: bc    4, 2, 0x80103934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80103934;
        }
    }

label_80103900:
    ctx->pc = 0x80103900u;
    ctx->downcount -= 13;
    // 80103900: lfs     f3, -29764(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103900u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80103904:
    ctx->pc = 0x80103904u;
    // 80103904: addi    r0, r1, 32
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(32);

label_80103908:
    ctx->pc = 0x80103908u;
    // 80103908: lfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8010390C:
    ctx->pc = 0x8010390Cu;
    // 8010390C: lfs     f1, -29760(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010390Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103910:
    ctx->pc = 0x80103910u;
    // 80103910: fadds   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80103910u)) return;
    ppc_fadds(ctx, 2, 3, 2);

label_80103914:
    ctx->pc = 0x80103914u;
    // 80103914: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103918:
    ctx->pc = 0x80103918u;
    // 80103918: lfs     f3, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_8010391C:
    ctx->pc = 0x8010391Cu;
    // 8010391C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8010391Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80103920:
    ctx->pc = 0x80103920u;
    // 80103920: stw     r0, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103924:
    ctx->pc = 0x80103924u;
    // 80103924: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_80103928:
    ctx->pc = 0x80103928u;
    // 80103928: stfs     f2, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103928u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8010392C:
    ctx->pc = 0x8010392Cu;
    // 8010392C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010392Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80103930:
    ctx->pc = 0x80103930u;
    // 80103930: b       0x80103938
    {
            goto label_80103938;
    }

label_80103934:
    ctx->pc = 0x80103934u;
    ctx->downcount -= 1;
    // 80103934: stw     r30, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103938:
    ctx->pc = 0x80103938u;
    ctx->downcount -= 2;
    // 80103938: addi    r3, r1, 488
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(488);

label_8010393C:
    ctx->pc = 0x8010393Cu;
    // 8010393C: bl      0x80103E48
    {
            ctx->lr = 0x80103940u;
            goto label_80103E48;
    }

label_80103940:
    ctx->pc = 0x80103940u;
    ctx->downcount -= 75;
    // 80103940: lhz     r0, 534(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(534);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103944:
    ctx->pc = 0x80103944u;
    // 80103944: addis   r4, r27, 1
    ctx->gpr[4] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103948:
    ctx->pc = 0x80103948u;
    // 80103948: lhz     r5, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8010394C:
    ctx->pc = 0x8010394Cu;
    // 8010394C: lis     r3, -21845
    ctx->gpr[3] = ((u32)(s32)(-21845) << 16);

label_80103950:
    ctx->pc = 0x80103950u;
    // 80103950: sth     r0, -32200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32200);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103954:
    ctx->pc = 0x80103954u;
    // 80103954: addi    r10, r3, -21845
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(-21845);

label_80103958:
    ctx->pc = 0x80103958u;
    // 80103958: rlwinm r0, r5, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x00000001u;
    }

label_8010395C:
    ctx->pc = 0x8010395Cu;
    // 8010395C: rlwinm r7, r5, 23, 25, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 23u) & 0x0000007Fu;
    }

label_80103960:
    ctx->pc = 0x80103960u;
    // 80103960: lhz     r6, 528(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(528);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80103964:
    ctx->pc = 0x80103964u;
    // 80103964: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_80103968:
    ctx->pc = 0x80103968u;
    // 80103968: lwz     r11, -32228(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32228);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8010396C:
    ctx->pc = 0x8010396Cu;
    // 8010396C: addi    r9, r27, 26516
    ctx->gpr[9] = ctx->gpr[27] + (u32)(s32)(26516);

label_80103970:
    ctx->pc = 0x80103970u;
    // 80103970: rlwinm r5, r6, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_80103974:
    ctx->pc = 0x80103974u;
    // 80103974: lwz     r30, -32224(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32224);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80103978:
    ctx->pc = 0x80103978u;
    // 80103978: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8010397C:
    ctx->pc = 0x8010397Cu;
    // 8010397C: lwz     r12, -32220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32220);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80103980:
    ctx->pc = 0x80103980u;
    // 80103980: rlwinm r3, r5, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_80103984:
    ctx->pc = 0x80103984u;
    // 80103984: addi    r8, r27, 27554
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(27554);

label_80103988:
    ctx->pc = 0x80103988u;
    // 80103988: add   r3, r11, r3
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8010398C:
    ctx->pc = 0x8010398Cu;
    // 8010398C: addi    r6, r27, 192
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(192);

label_80103990:
    ctx->pc = 0x80103990u;
    // 80103990: stw     r3, -32216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80103994:
    ctx->pc = 0x80103994u;
    // 80103994: addi    r5, r1, 44
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(44);

label_80103998:
    ctx->pc = 0x80103998u;
    // 80103998: lfs     f0, -29776(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103998u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8010399C:
    ctx->pc = 0x8010399Cu;
    // 8010399C: addi    r3, r1, 420
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(420);

label_801039A0:
    ctx->pc = 0x801039A0u;
    // 801039A0: lhz     r26, 530(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(530);
        ctx->gpr[26] = mem_read16(ctx, ea);
    }

label_801039A4:
    ctx->pc = 0x801039A4u;
    // 801039A4: rlwinm r11, r26, 2, 0, 29
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_801039A8:
    ctx->pc = 0x801039A8u;
    // 801039A8: subf   r11, r26, r11
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[11];
        u32 res = a + b + 1u;
        ctx->gpr[11] = res;
    }

label_801039AC:
    ctx->pc = 0x801039ACu;
    // 801039AC: rlwinm r11, r11, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0xFFFFFFFEu;
    }

label_801039B0:
    ctx->pc = 0x801039B0u;
    // 801039B0: add   r11, r30, r11
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_801039B4:
    ctx->pc = 0x801039B4u;
    // 801039B4: stw     r11, -32212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32212);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_801039B8:
    ctx->pc = 0x801039B8u;
    // 801039B8: lhz     r11, 534(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(534);
        ctx->gpr[11] = mem_read16(ctx, ea);
    }

label_801039BC:
    ctx->pc = 0x801039BCu;
    // 801039BC: addi    r11, r11, 31
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(31);

label_801039C0:
    ctx->pc = 0x801039C0u;
    // 801039C0: stw     r0, -32180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801039C4:
    ctx->pc = 0x801039C4u;
    // 801039C4: rlwinm r11, r11, 0, 0, 26
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFFFFE0u;
    }

label_801039C8:
    ctx->pc = 0x801039C8u;
    // 801039C8: add   r11, r12, r11
    {
        u32 a = ctx->gpr[12];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_801039CC:
    ctx->pc = 0x801039CCu;
    // 801039CC: stw     r11, -32208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32208);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_801039D0:
    ctx->pc = 0x801039D0u;
    // 801039D0: stw     r29, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_801039D4:
    ctx->pc = 0x801039D4u;
    // 801039D4: sth     r7, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_801039D8:
    ctx->pc = 0x801039D8u;
    // 801039D8: lwz     r7, -32216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32216);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_801039DC:
    ctx->pc = 0x801039DCu;
    // 801039DC: stw     r7, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_801039E0:
    ctx->pc = 0x801039E0u;
    // 801039E0: lwz     r7, -32212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32212);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_801039E4:
    ctx->pc = 0x801039E4u;
    // 801039E4: stw     r7, 440(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_801039E8:
    ctx->pc = 0x801039E8u;
    // 801039E8: lwz     r7, -32208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32208);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_801039EC:
    ctx->pc = 0x801039ECu;
    // 801039EC: stw     r7, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_801039F0:
    ctx->pc = 0x801039F0u;
    // 801039F0: lwz     r7, -32216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32216);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_801039F4:
    ctx->pc = 0x801039F4u;
    // 801039F4: subf   r7, r9, r7
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_801039F8:
    ctx->pc = 0x801039F8u;
    // 801039F8: rlwinm r7, r7, 31, 1, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x7FFFFFFFu;
    }

label_801039FC:
    ctx->pc = 0x801039FCu;
    // 801039FC: mulhwu   r7, r10, r7
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[7];
        ctx->gpr[7] = (u32)(product >> 32);
    }

label_80103A00:
    ctx->pc = 0x80103A00u;
    // 80103A00: rlwinm r7, r7, 31, 1, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x7FFFFFFFu;
    }

label_80103A04:
    ctx->pc = 0x80103A04u;
    // 80103A04: subfic  r7, r7, 173
    {
        u64 res = (u64)(u32)(s32)(173) + (u64)(~ctx->gpr[7]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80103A08:
    ctx->pc = 0x80103A08u;
    // 80103A08: sth     r7, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80103A0C:
    ctx->pc = 0x80103A0Cu;
    // 80103A0C: lwz     r7, -32212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32212);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80103A10:
    ctx->pc = 0x80103A10u;
    // 80103A10: subf   r7, r8, r7
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_80103A14:
    ctx->pc = 0x80103A14u;
    // 80103A14: rlwinm r7, r7, 31, 1, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x7FFFFFFFu;
    }

label_80103A18:
    ctx->pc = 0x80103A18u;
    // 80103A18: mulhwu   r7, r10, r7
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[7];
        ctx->gpr[7] = (u32)(product >> 32);
    }

label_80103A1C:
    ctx->pc = 0x80103A1Cu;
    // 80103A1C: rlwinm r7, r7, 31, 1, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x7FFFFFFFu;
    }

label_80103A20:
    ctx->pc = 0x80103A20u;
    // 80103A20: subfic  r7, r7, 246
    {
        u64 res = (u64)(u32)(s32)(246) + (u64)(~ctx->gpr[7]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80103A24:
    ctx->pc = 0x80103A24u;
    // 80103A24: sth     r7, 454(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(454);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80103A28:
    ctx->pc = 0x80103A28u;
    // 80103A28: lwz     r4, -32208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103A2C:
    ctx->pc = 0x80103A2Cu;
    // 80103A2C: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80103A30:
    ctx->pc = 0x80103A30u;
    // 80103A30: stw     r0, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103A34:
    ctx->pc = 0x80103A34u;
    // 80103A34: subfic  r0, r4, 1376
    {
        u64 res = (u64)(u32)(s32)(1376) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80103A38:
    ctx->pc = 0x80103A38u;
    // 80103A38: sth     r0, 458(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(458);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103A3C:
    ctx->pc = 0x80103A3Cu;
    // 80103A3C: stw     r29, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80103A40:
    ctx->pc = 0x80103A40u;
    // 80103A40: stfs     f0, 468(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80103A44:
    ctx->pc = 0x80103A44u;
    // 80103A44: stw     r5, 472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103A48:
    ctx->pc = 0x80103A48u;
    // 80103A48: bl      0x80103E48
    {
            ctx->lr = 0x80103A4Cu;
            goto label_80103E48;
    }

label_80103A4C:
    ctx->pc = 0x80103A4Cu;
    ctx->downcount -= 29;
    // 80103A4C: lhz     r4, 466(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(466);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103A50:
    ctx->pc = 0x80103A50u;
    // 80103A50: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103A54:
    ctx->pc = 0x80103A54u;
    // 80103A54: lhz     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103A58:
    ctx->pc = 0x80103A58u;
    // 80103A58: addi    r9, r27, 30662
    ctx->gpr[9] = ctx->gpr[27] + (u32)(s32)(30662);

label_80103A5C:
    ctx->pc = 0x80103A5Cu;
    // 80103A5C: sth     r4, -32196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32196);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103A60:
    ctx->pc = 0x80103A60u;
    // 80103A60: addi    r8, r27, 30902
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(30902);

label_80103A64:
    ctx->pc = 0x80103A64u;
    // 80103A64: rlwinm r10, r0, 20, 30, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x00000003u;
    }

label_80103A68:
    ctx->pc = 0x80103A68u;
    // 80103A68: lfs     f0, -29776(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103A68u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103A6C:
    ctx->pc = 0x80103A6Cu;
    // 80103A6C: addi    r7, r27, 2304
    ctx->gpr[7] = ctx->gpr[27] + (u32)(s32)(2304);

label_80103A70:
    ctx->pc = 0x80103A70u;
    // 80103A70: addi    r0, r1, 56
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(56);

label_80103A74:
    ctx->pc = 0x80103A74u;
    // 80103A74: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80103A78:
    ctx->pc = 0x80103A78u;
    // 80103A78: li      r6, 40
    ctx->gpr[6] = (u32)(s32)(40);

label_80103A7C:
    ctx->pc = 0x80103A7Cu;
    // 80103A7C: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_80103A80:
    ctx->pc = 0x80103A80u;
    // 80103A80: li      r4, 352
    ctx->gpr[4] = (u32)(s32)(352);

label_80103A84:
    ctx->pc = 0x80103A84u;
    // 80103A84: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80103A88:
    ctx->pc = 0x80103A88u;
    // 80103A88: stw     r3, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80103A8C:
    ctx->pc = 0x80103A8Cu;
    // 80103A8C: addi    r3, r1, 352
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(352);

label_80103A90:
    ctx->pc = 0x80103A90u;
    // 80103A90: sth     r10, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_80103A94:
    ctx->pc = 0x80103A94u;
    // 80103A94: stw     r9, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80103A98:
    ctx->pc = 0x80103A98u;
    // 80103A98: stw     r8, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80103A9C:
    ctx->pc = 0x80103A9Cu;
    // 80103A9C: stw     r7, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80103AA0:
    ctx->pc = 0x80103AA0u;
    // 80103AA0: sth     r6, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80103AA4:
    ctx->pc = 0x80103AA4u;
    // 80103AA4: sth     r5, 386(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(386);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103AA8:
    ctx->pc = 0x80103AA8u;
    // 80103AA8: sth     r4, 390(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(390);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103AAC:
    ctx->pc = 0x80103AACu;
    // 80103AAC: stw     r30, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103AB0:
    ctx->pc = 0x80103AB0u;
    // 80103AB0: stw     r29, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80103AB4:
    ctx->pc = 0x80103AB4u;
    // 80103AB4: stfs     f0, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80103AB8:
    ctx->pc = 0x80103AB8u;
    // 80103AB8: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103ABC:
    ctx->pc = 0x80103ABCu;
    // 80103ABC: bl      0x80103E48
    {
            ctx->lr = 0x80103AC0u;
            goto label_80103E48;
    }

label_80103AC0:
    ctx->pc = 0x80103AC0u;
    ctx->downcount -= 49;
    // 80103AC0: lhz     r7, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_80103AC4:
    ctx->pc = 0x80103AC4u;
    // 80103AC4: addis   r4, r27, 1
    ctx->gpr[4] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103AC8:
    ctx->pc = 0x80103AC8u;
    // 80103AC8: lhz     r8, 398(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(398);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_80103ACC:
    ctx->pc = 0x80103ACCu;
    // 80103ACC: addi    r6, r27, 26240
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(26240);

label_80103AD0:
    ctx->pc = 0x80103AD0u;
    // 80103AD0: rlwinm r3, r7, 29, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 29u) & 0x0000001Fu;
    }

label_80103AD4:
    ctx->pc = 0x80103AD4u;
    // 80103AD4: rlwinm r5, r7, 24, 28, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0x0000000Fu;
    }

label_80103AD8:
    ctx->pc = 0x80103AD8u;
    // 80103AD8: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_80103ADC:
    ctx->pc = 0x80103ADCu;
    // 80103ADC: sth     r8, -32194(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32194);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80103AE0:
    ctx->pc = 0x80103AE0u;
    // 80103AE0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80103AE4:
    ctx->pc = 0x80103AE4u;
    // 80103AE4: li      r4, 23
    ctx->gpr[4] = (u32)(s32)(23);

label_80103AE8:
    ctx->pc = 0x80103AE8u;
    // 80103AE8: stw     r5, 700(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(700);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103AEC:
    ctx->pc = 0x80103AECu;
    // 80103AEC: rlwinm r7, r7, 20, 28, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 20u) & 0x0000000Fu;
    }

label_80103AF0:
    ctx->pc = 0x80103AF0u;
    // 80103AF0: lfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103AF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80103AF4:
    ctx->pc = 0x80103AF4u;
    // 80103AF4: addi    r5, r27, 26378
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(26378);

label_80103AF8:
    ctx->pc = 0x80103AF8u;
    // 80103AF8: stw     r0, 708(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103AFC:
    ctx->pc = 0x80103AFCu;
    // 80103AFC: addi    r26, r1, 20
    ctx->gpr[26] = ctx->gpr[1] + (u32)(s32)(20);

label_80103B00:
    ctx->pc = 0x80103B00u;
    // 80103B00: lfd     f4, -29736(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103B00u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29736);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103B04:
    ctx->pc = 0x80103B04u;
    // 80103B04: li      r0, 192
    ctx->gpr[0] = (u32)(s32)(192);

label_80103B08:
    ctx->pc = 0x80103B08u;
    // 80103B08: lfd     f2, 696(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(696);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103B0C:
    ctx->pc = 0x80103B0Cu;
    // 80103B0C: addi    r3, r1, 284
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(284);

label_80103B10:
    ctx->pc = 0x80103B10u;
    // 80103B10: lfd     f1, -29728(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103B10u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29728);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103B14:
    ctx->pc = 0x80103B14u;
    // 80103B14: fsubs   f5, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80103B14u)) return;
    ppc_fsubs(ctx, 5, 2, 4);

label_80103B18:
    ctx->pc = 0x80103B18u;
    // 80103B18: lfd     f0, 704(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(704);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103B1C:
    ctx->pc = 0x80103B1Cu;
    // 80103B1C: lfs     f4, -29752(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103B1Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80103B20:
    ctx->pc = 0x80103B20u;
    // 80103B20: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80103B20u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_80103B24:
    ctx->pc = 0x80103B24u;
    // 80103B24: lfs     f1, -29748(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103B24u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29748);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103B28:
    ctx->pc = 0x80103B28u;
    // 80103B28: fmuls   f5, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x80103B28u)) return;
    ppc_fmuls(ctx, 5, 4, 5);

label_80103B2C:
    ctx->pc = 0x80103B2Cu;
    // 80103B2C: lfs     f4, -29756(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103B2Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29756);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80103B30:
    ctx->pc = 0x80103B30u;
    // 80103B30: fmuls   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80103B30u)) return;
    ppc_fmuls(ctx, 2, 1, 2);

label_80103B34:
    ctx->pc = 0x80103B34u;
    // 80103B34: lfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103B38:
    ctx->pc = 0x80103B38u;
    // 80103B38: fadds   f31, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x80103B38u)) return;
    ppc_fadds(ctx, 31, 4, 5);

label_80103B3C:
    ctx->pc = 0x80103B3Cu;
    // 80103B3C: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103B40:
    ctx->pc = 0x80103B40u;
    // 80103B40: stfs     f3, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_80103B44:
    ctx->pc = 0x80103B44u;
    // 80103B44: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80103B44u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_80103B48:
    ctx->pc = 0x80103B48u;
    // 80103B48: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80103B4C:
    ctx->pc = 0x80103B4Cu;
    // 80103B4C: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80103B50:
    ctx->pc = 0x80103B50u;
    // 80103B50: stw     r30, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103B54:
    ctx->pc = 0x80103B54u;
    // 80103B54: sth     r7, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80103B58:
    ctx->pc = 0x80103B58u;
    // 80103B58: stw     r6, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80103B5C:
    ctx->pc = 0x80103B5Cu;
    // 80103B5C: stw     r5, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103B60:
    ctx->pc = 0x80103B60u;
    // 80103B60: stw     r27, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_80103B64:
    ctx->pc = 0x80103B64u;
    // 80103B64: sth     r4, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103B68:
    ctx->pc = 0x80103B68u;
    // 80103B68: sth     r4, 318(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(318);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103B6C:
    ctx->pc = 0x80103B6Cu;
    // 80103B6C: sth     r0, 322(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(322);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103B70:
    ctx->pc = 0x80103B70u;
    // 80103B70: stw     r30, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103B74:
    ctx->pc = 0x80103B74u;
    // 80103B74: stw     r29, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80103B78:
    ctx->pc = 0x80103B78u;
    // 80103B78: stfs     f31, 332(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103B78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80103B7C:
    ctx->pc = 0x80103B7Cu;
    // 80103B7C: stw     r26, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_80103B80:
    ctx->pc = 0x80103B80u;
    // 80103B80: bl      0x80103E48
    {
            ctx->lr = 0x80103B84u;
            goto label_80103E48;
    }

label_80103B84:
    ctx->pc = 0x80103B84u;
    ctx->downcount -= 29;
    // 80103B84: lhz     r4, 330(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(330);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103B88:
    ctx->pc = 0x80103B88u;
    // 80103B88: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103B8C:
    ctx->pc = 0x80103B8Cu;
    // 80103B8C: lhz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103B90:
    ctx->pc = 0x80103B90u;
    // 80103B90: addi    r8, r27, 31310
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(31310);

label_80103B94:
    ctx->pc = 0x80103B94u;
    // 80103B94: sth     r4, -32204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32204);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103B98:
    ctx->pc = 0x80103B98u;
    // 80103B98: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_80103B9C:
    ctx->pc = 0x80103B9Cu;
    // 80103B9C: rlwinm r3, r0, 20, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x0000000Fu;
    }

label_80103BA0:
    ctx->pc = 0x80103BA0u;
    // 80103BA0: addi    r7, r27, 31346
    ctx->gpr[7] = ctx->gpr[27] + (u32)(s32)(31346);

label_80103BA4:
    ctx->pc = 0x80103BA4u;
    // 80103BA4: addi    r6, r27, 31358
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(31358);

label_80103BA8:
    ctx->pc = 0x80103BA8u;
    // 80103BA8: addi    r5, r27, 2656
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(2656);

label_80103BAC:
    ctx->pc = 0x80103BACu;
    // 80103BAC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80103BB0:
    ctx->pc = 0x80103BB0u;
    // 80103BB0: li      r31, 7
    ctx->gpr[31] = (u32)(s32)(7);

label_80103BB4:
    ctx->pc = 0x80103BB4u;
    // 80103BB4: li      r0, 96
    ctx->gpr[0] = (u32)(s32)(96);

label_80103BB8:
    ctx->pc = 0x80103BB8u;
    // 80103BB8: sth     r3, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80103BBC:
    ctx->pc = 0x80103BBCu;
    // 80103BBC: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_80103BC0:
    ctx->pc = 0x80103BC0u;
    // 80103BC0: stw     r9, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80103BC4:
    ctx->pc = 0x80103BC4u;
    // 80103BC4: stw     r8, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80103BC8:
    ctx->pc = 0x80103BC8u;
    // 80103BC8: stw     r7, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80103BCC:
    ctx->pc = 0x80103BCCu;
    // 80103BCC: stw     r6, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80103BD0:
    ctx->pc = 0x80103BD0u;
    // 80103BD0: stw     r5, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80103BD4:
    ctx->pc = 0x80103BD4u;
    // 80103BD4: sth     r9, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_80103BD8:
    ctx->pc = 0x80103BD8u;
    // 80103BD8: sth     r4, 250(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(250);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103BDC:
    ctx->pc = 0x80103BDCu;
    // 80103BDC: sth     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80103BE0:
    ctx->pc = 0x80103BE0u;
    // 80103BE0: sth     r0, 254(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(254);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103BE4:
    ctx->pc = 0x80103BE4u;
    // 80103BE4: stw     r30, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103BE8:
    ctx->pc = 0x80103BE8u;
    // 80103BE8: stw     r29, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80103BEC:
    ctx->pc = 0x80103BECu;
    // 80103BEC: stfs     f31, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103BECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80103BF0:
    ctx->pc = 0x80103BF0u;
    // 80103BF0: stw     r26, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_80103BF4:
    ctx->pc = 0x80103BF4u;
    // 80103BF4: bl      0x80103E48
    {
            ctx->lr = 0x80103BF8u;
            goto label_80103E48;
    }

label_80103BF8:
    ctx->pc = 0x80103BF8u;
    ctx->downcount -= 27;
    // 80103BF8: lhz     r4, 262(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(262);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103BFC:
    ctx->pc = 0x80103BFCu;
    // 80103BFC: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103C00:
    ctx->pc = 0x80103C00u;
    // 80103C00: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103C04:
    ctx->pc = 0x80103C04u;
    // 80103C04: addi    r10, r27, 31386
    ctx->gpr[10] = ctx->gpr[27] + (u32)(s32)(31386);

label_80103C08:
    ctx->pc = 0x80103C08u;
    // 80103C08: sth     r4, -32192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32192);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103C0C:
    ctx->pc = 0x80103C0Cu;
    // 80103C0C: addi    r9, r27, 31914
    ctx->gpr[9] = ctx->gpr[27] + (u32)(s32)(31914);

label_80103C10:
    ctx->pc = 0x80103C10u;
    // 80103C10: rlwinm r3, r0, 19, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 19u) & 0x00000007u;
    }

label_80103C14:
    ctx->pc = 0x80103C14u;
    // 80103C14: addi    r8, r27, 32430
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(32430);

label_80103C18:
    ctx->pc = 0x80103C18u;
    // 80103C18: addi    r7, r27, 2752
    ctx->gpr[7] = ctx->gpr[27] + (u32)(s32)(2752);

label_80103C1C:
    ctx->pc = 0x80103C1Cu;
    // 80103C1C: li      r6, 88
    ctx->gpr[6] = (u32)(s32)(88);

label_80103C20:
    ctx->pc = 0x80103C20u;
    // 80103C20: li      r5, 86
    ctx->gpr[5] = (u32)(s32)(86);

label_80103C24:
    ctx->pc = 0x80103C24u;
    // 80103C24: li      r4, 176
    ctx->gpr[4] = (u32)(s32)(176);

label_80103C28:
    ctx->pc = 0x80103C28u;
    // 80103C28: li      r0, 896
    ctx->gpr[0] = (u32)(s32)(896);

label_80103C2C:
    ctx->pc = 0x80103C2Cu;
    // 80103C2C: sth     r3, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80103C30:
    ctx->pc = 0x80103C30u;
    // 80103C30: addi    r3, r1, 148
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(148);

label_80103C34:
    ctx->pc = 0x80103C34u;
    // 80103C34: stw     r31, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80103C38:
    ctx->pc = 0x80103C38u;
    // 80103C38: stw     r10, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80103C3C:
    ctx->pc = 0x80103C3Cu;
    // 80103C3C: stw     r9, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80103C40:
    ctx->pc = 0x80103C40u;
    // 80103C40: stw     r8, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80103C44:
    ctx->pc = 0x80103C44u;
    // 80103C44: stw     r7, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80103C48:
    ctx->pc = 0x80103C48u;
    // 80103C48: sth     r6, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80103C4C:
    ctx->pc = 0x80103C4Cu;
    // 80103C4C: sth     r5, 182(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(182);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103C50:
    ctx->pc = 0x80103C50u;
    // 80103C50: sth     r4, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103C54:
    ctx->pc = 0x80103C54u;
    // 80103C54: sth     r0, 186(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(186);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103C58:
    ctx->pc = 0x80103C58u;
    // 80103C58: stw     r30, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103C5C:
    ctx->pc = 0x80103C5Cu;
    // 80103C5C: stw     r30, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103C60:
    ctx->pc = 0x80103C60u;
    // 80103C60: bl      0x80103E48
    {
            ctx->lr = 0x80103C64u;
            goto label_80103E48;
    }

label_80103C64:
    ctx->pc = 0x80103C64u;
    ctx->downcount -= 57;
    // 80103C64: lhz     r0, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103C68:
    ctx->pc = 0x80103C68u;
    // 80103C68: addis   r6, r27, 1
    ctx->gpr[6] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103C6C:
    ctx->pc = 0x80103C6Cu;
    // 80103C6C: lhz     r5, 194(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(194);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80103C70:
    ctx->pc = 0x80103C70u;
    // 80103C70: addi    r9, r6, -32402
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(-32402);

label_80103C74:
    ctx->pc = 0x80103C74u;
    // 80103C74: rlwinm r3, r0, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80103C78:
    ctx->pc = 0x80103C78u;
    // 80103C78: rlwinm r4, r0, 27, 28, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x0000000Fu;
    }

label_80103C7C:
    ctx->pc = 0x80103C7Cu;
    // 80103C7C: addi    r0, r3, -11
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11);

label_80103C80:
    ctx->pc = 0x80103C80u;
    // 80103C80: sth     r5, -32190(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32190);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103C84:
    ctx->pc = 0x80103C84u;
    // 80103C84: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80103C88:
    ctx->pc = 0x80103C88u;
    // 80103C88: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80103C8C:
    ctx->pc = 0x80103C8Cu;
    // 80103C8C: stw     r4, 700(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(700);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80103C90:
    ctx->pc = 0x80103C90u;
    // 80103C90: addi    r8, r6, -32378
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-32378);

label_80103C94:
    ctx->pc = 0x80103C94u;
    // 80103C94: addi    r7, r6, -32372
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-32372);

label_80103C98:
    ctx->pc = 0x80103C98u;
    // 80103C98: lfs     f4, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103C98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80103C9C:
    ctx->pc = 0x80103C9Cu;
    // 80103C9C: stw     r0, 708(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103CA0:
    ctx->pc = 0x80103CA0u;
    // 80103CA0: addi    r6, r27, 3648
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(3648);

label_80103CA4:
    ctx->pc = 0x80103CA4u;
    // 80103CA4: lfd     f3, -29736(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CA4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29736);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103CA8:
    ctx->pc = 0x80103CA8u;
    // 80103CA8: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_80103CAC:
    ctx->pc = 0x80103CACu;
    // 80103CAC: lfd     f2, 696(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(696);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103CB0:
    ctx->pc = 0x80103CB0u;
    // 80103CB0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80103CB4:
    ctx->pc = 0x80103CB4u;
    // 80103CB4: lfd     f1, -29728(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CB4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29728);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103CB8:
    ctx->pc = 0x80103CB8u;
    // 80103CB8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80103CBC:
    ctx->pc = 0x80103CBCu;
    // 80103CBC: fsubs   f6, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80103CBCu)) return;
    ppc_fsubs(ctx, 6, 2, 3);

label_80103CC0:
    ctx->pc = 0x80103CC0u;
    // 80103CC0: lfd     f0, 704(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(704);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103CC4:
    ctx->pc = 0x80103CC4u;
    // 80103CC4: lfs     f5, -29744(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CC4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80103CC8:
    ctx->pc = 0x80103CC8u;
    // 80103CC8: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80103CC8u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_80103CCC:
    ctx->pc = 0x80103CCCu;
    // 80103CCC: lfs     f0, -29748(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CCCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29748);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103CD0:
    ctx->pc = 0x80103CD0u;
    // 80103CD0: fmuls   f6, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80103CD0u)) return;
    ppc_fmuls(ctx, 6, 5, 6);

label_80103CD4:
    ctx->pc = 0x80103CD4u;
    // 80103CD4: lfs     f5, -29756(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CD4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29756);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80103CD8:
    ctx->pc = 0x80103CD8u;
    // 80103CD8: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80103CD8u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80103CDC:
    ctx->pc = 0x80103CDCu;
    // 80103CDC: lfs     f3, -29740(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CDCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80103CE0:
    ctx->pc = 0x80103CE0u;
    // 80103CE0: lfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103CE4:
    ctx->pc = 0x80103CE4u;
    // 80103CE4: fadds   f5, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80103CE4u)) return;
    ppc_fadds(ctx, 5, 5, 6);

label_80103CE8:
    ctx->pc = 0x80103CE8u;
    // 80103CE8: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80103CEC:
    ctx->pc = 0x80103CECu;
    // 80103CEC: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80103CF0:
    ctx->pc = 0x80103CF0u;
    // 80103CF0: fadds   f3, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80103CF0u)) return;
    ppc_fadds(ctx, 3, 3, 1);

label_80103CF4:
    ctx->pc = 0x80103CF4u;
    // 80103CF4: lfs     f1, -29772(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103CF4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29772);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103CF8:
    ctx->pc = 0x80103CF8u;
    // 80103CF8: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103CF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103CFC:
    ctx->pc = 0x80103CFCu;
    // 80103CFC: stfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103CFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_80103D00:
    ctx->pc = 0x80103D00u;
    // 80103D00: fadds   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80103D00u)) return;
    ppc_fadds(ctx, 2, 3, 2);

label_80103D04:
    ctx->pc = 0x80103D04u;
    // 80103D04: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80103D04u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80103D08:
    ctx->pc = 0x80103D08u;
    // 80103D08: sth     r30, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_80103D0C:
    ctx->pc = 0x80103D0Cu;
    // 80103D0C: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103D0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80103D10:
    ctx->pc = 0x80103D10u;
    // 80103D10: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103D10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80103D14:
    ctx->pc = 0x80103D14u;
    // 80103D14: stw     r9, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80103D18:
    ctx->pc = 0x80103D18u;
    // 80103D18: stw     r8, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80103D1C:
    ctx->pc = 0x80103D1Cu;
    // 80103D1C: stw     r7, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80103D20:
    ctx->pc = 0x80103D20u;
    // 80103D20: stw     r6, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80103D24:
    ctx->pc = 0x80103D24u;
    // 80103D24: sth     r5, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103D28:
    ctx->pc = 0x80103D28u;
    // 80103D28: sth     r29, 114(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(114);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_80103D2C:
    ctx->pc = 0x80103D2Cu;
    // 80103D2C: sth     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80103D30:
    ctx->pc = 0x80103D30u;
    // 80103D30: sth     r4, 118(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103D34:
    ctx->pc = 0x80103D34u;
    // 80103D34: stw     r30, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80103D38:
    ctx->pc = 0x80103D38u;
    // 80103D38: stw     r29, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80103D3C:
    ctx->pc = 0x80103D3Cu;
    // 80103D3C: stfs     f5, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_80103D40:
    ctx->pc = 0x80103D40u;
    // 80103D40: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103D44:
    ctx->pc = 0x80103D44u;
    // 80103D44: bl      0x80103E48
    {
            ctx->lr = 0x80103D48u;
            goto label_80103E48;
    }

label_80103D48:
    ctx->pc = 0x80103D48u;
    ctx->downcount -= 9;
    // 80103D48: lhz     r4, 126(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(126);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103D4C:
    ctx->pc = 0x80103D4Cu;
    // 80103D4C: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103D50:
    ctx->pc = 0x80103D50u;
    // 80103D50: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103D54:
    ctx->pc = 0x80103D54u;
    // 80103D54: addi    r6, r27, 3712
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(3712);

label_80103D58:
    ctx->pc = 0x80103D58u;
    // 80103D58: sth     r4, -32188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32188);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103D5C:
    ctx->pc = 0x80103D5Cu;
    // 80103D5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80103D60:
    ctx->pc = 0x80103D60u;
    // 80103D60: rlwinm r5, r0, 26, 28, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 26u) & 0x0000000Fu;
    }

label_80103D64:
    ctx->pc = 0x80103D64u;
    // 80103D64: addi    r3, r3, -32356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32356);

label_80103D68:
    ctx->pc = 0x80103D68u;
    // 80103D68: bl      0x80104430
    {
            ctx->lr = 0x80103D6Cu;
            goto label_80104430;
    }

label_80103D6C:
    ctx->pc = 0x80103D6Cu;
    ctx->downcount -= 4;
    // 80103D6C: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103D70:
    ctx->pc = 0x80103D70u;
    // 80103D70: lhz     r0, -32198(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32198);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103D74:
    ctx->pc = 0x80103D74u;
    // 80103D74: cmpwi   r0, 0
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

label_80103D78:
    ctx->pc = 0x80103D78u;
    // 80103D78: bc    12, 2, 0x80103D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103D94;
        }
    }

label_80103D7C:
    ctx->pc = 0x80103D7Cu;
    ctx->downcount -= 6;
    // 80103D7C: lhz     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103D80:
    ctx->pc = 0x80103D80u;
    // 80103D80: addi    r6, r27, 20096
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(20096);

label_80103D84:
    ctx->pc = 0x80103D84u;
    // 80103D84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80103D88:
    ctx->pc = 0x80103D88u;
    // 80103D88: addi    r3, r3, -32324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32324);

label_80103D8C:
    ctx->pc = 0x80103D8Cu;
    // 80103D8C: rlwinm r5, r0, 23, 25, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x0000007Fu;
    }

label_80103D90:
    ctx->pc = 0x80103D90u;
    // 80103D90: bl      0x80104430
    {
            ctx->lr = 0x80103D94u;
            goto label_80104430;
    }

label_80103D94:
    ctx->pc = 0x80103D94u;
    ctx->downcount -= 4;
    // 80103D94: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103D98:
    ctx->pc = 0x80103D98u;
    // 80103D98: lhz     r0, -32192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32192);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103D9C:
    ctx->pc = 0x80103D9Cu;
    // 80103D9C: cmpwi   r0, 0
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

label_80103DA0:
    ctx->pc = 0x80103DA0u;
    // 80103DA0: bc    12, 2, 0x80103DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103DBC;
        }
    }

label_80103DA4:
    ctx->pc = 0x80103DA4u;
    ctx->downcount -= 6;
    // 80103DA4: lhz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103DA8:
    ctx->pc = 0x80103DA8u;
    // 80103DA8: addi    r6, r27, 21120
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(21120);

label_80103DAC:
    ctx->pc = 0x80103DACu;
    // 80103DAC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80103DB0:
    ctx->pc = 0x80103DB0u;
    // 80103DB0: addi    r3, r3, -32292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32292);

label_80103DB4:
    ctx->pc = 0x80103DB4u;
    // 80103DB4: rlwinm r5, r0, 20, 28, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x0000000Fu;
    }

label_80103DB8:
    ctx->pc = 0x80103DB8u;
    // 80103DB8: bl      0x80104430
    {
            ctx->lr = 0x80103DBCu;
            goto label_80104430;
    }

label_80103DBC:
    ctx->pc = 0x80103DBCu;
    ctx->downcount -= 7;
    // 80103DBC: lhz     r0, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103DC0:
    ctx->pc = 0x80103DC0u;
    // 80103DC0: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103DC4:
    ctx->pc = 0x80103DC4u;
    // 80103DC4: addi    r6, r27, 22144
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(22144);

label_80103DC8:
    ctx->pc = 0x80103DC8u;
    // 80103DC8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80103DCC:
    ctx->pc = 0x80103DCCu;
    // 80103DCC: rlwinm r5, r0, 20, 28, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x0000000Fu;
    }

label_80103DD0:
    ctx->pc = 0x80103DD0u;
    // 80103DD0: addi    r3, r3, -32260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32260);

label_80103DD4:
    ctx->pc = 0x80103DD4u;
    // 80103DD4: bl      0x80104430
    {
            ctx->lr = 0x80103DD8u;
            goto label_80104430;
    }

label_80103DD8:
    ctx->pc = 0x80103DD8u;
    ctx->downcount -= 20;
    // 80103DD8: lhz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80103DDC:
    ctx->pc = 0x80103DDCu;
    // 80103DDC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80103DE0:
    ctx->pc = 0x80103DE0u;
    // 80103DE0: lhz     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103DE4:
    ctx->pc = 0x80103DE4u;
    // 80103DE4: addis   r8, r27, 1
    ctx->gpr[8] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_80103DE8:
    ctx->pc = 0x80103DE8u;
    // 80103DE8: rlwinm r9, r3, 22, 29, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[3], 22u) & 0x00000007u;
    }

label_80103DEC:
    ctx->pc = 0x80103DECu;
    // 80103DEC: lhz     r5, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80103DF0:
    ctx->pc = 0x80103DF0u;
    // 80103DF0: rlwinm r7, r0, 26, 29, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 26u) & 0x00000007u;
    }

label_80103DF4:
    ctx->pc = 0x80103DF4u;
    // 80103DF4: lhz     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80103DF8:
    ctx->pc = 0x80103DF8u;
    // 80103DF8: rlwinm r6, r5, 23, 29, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 23u) & 0x00000007u;
    }

label_80103DFC:
    ctx->pc = 0x80103DFCu;
    // 80103DFC: lhz     r3, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80103E00:
    ctx->pc = 0x80103E00u;
    // 80103E00: rlwinm r0, r0, 30, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x0000000Fu;
    }

label_80103E04:
    ctx->pc = 0x80103E04u;
    // 80103E04: stb     r9, -32186(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32186);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80103E08:
    ctx->pc = 0x80103E08u;
    // 80103E08: rlwinm r5, r3, 23, 29, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 23u) & 0x00000007u;
    }

label_80103E0C:
    ctx->pc = 0x80103E0Cu;
    // 80103E0C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80103E10:
    ctx->pc = 0x80103E10u;
    // 80103E10: stb     r7, -32185(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32185);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80103E14:
    ctx->pc = 0x80103E14u;
    // 80103E14: addi    r4, r4, -32160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32160);

label_80103E18:
    ctx->pc = 0x80103E18u;
    // 80103E18: stb     r6, -32184(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32184);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80103E1C:
    ctx->pc = 0x80103E1Cu;
    // 80103E1C: stb     r5, -32183(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32183);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80103E20:
    ctx->pc = 0x80103E20u;
    // 80103E20: stb     r0, -32182(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32182);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80103E24:
    ctx->pc = 0x80103E24u;
    // 80103E24: bl      0x800460E0
    {
            ctx->lr = 0x80103E28u;
            ctx->pc = 0x800460E0u;
            return;
    }

label_80103E28:
    ctx->pc = 0x80103E28u;
    ctx->downcount -= 4;
    // 80103E28: psq_l   f31, 744(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80103E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(744);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80103E28u);
        if (ctx->exception) return;
    }

label_80103E2C:
    ctx->pc = 0x80103E2Cu;
    // 80103E2C: addi    r11, r1, 736
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(736);

label_80103E30:
    ctx->pc = 0x80103E30u;
    // 80103E30: lfd     f31, 736(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(736);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80103E34:
    ctx->pc = 0x80103E34u;
    // 80103E34: bl      0x800078A0
    {
            ctx->lr = 0x80103E38u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_80103E38:
    ctx->pc = 0x80103E38u;
    ctx->downcount -= 5;
    // 80103E38: lwz     r0, 756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80103E3C:
    ctx->pc = 0x80103E3Cu;
    // 80103E3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80103E40:
    ctx->pc = 0x80103E40u;
    // 80103E40: addi    r1, r1, 752
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(752);

label_80103E44:
    ctx->pc = 0x80103E44u;
    // 80103E44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80103E48:
    ctx->pc = 0x80103E48u;
    ctx->downcount -= 5;
    // 80103E48: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80103E4C:
    ctx->pc = 0x80103E4Cu;
    // 80103E4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80103E50:
    ctx->pc = 0x80103E50u;
    // 80103E50: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80103E54:
    ctx->pc = 0x80103E54u;
    // 80103E54: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80103E58:
    ctx->pc = 0x80103E58u;
    // 80103E58: bl      0x8000784C
    {
            ctx->lr = 0x80103E5Cu;
            ctx->pc = 0x8000784Cu;
            return;
    }

label_80103E5C:
    ctx->pc = 0x80103E5Cu;
    ctx->downcount -= 5;
    // 80103E5C: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80103E60:
    ctx->pc = 0x80103E60u;
    // 80103E60: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80103E64:
    ctx->pc = 0x80103E64u;
    // 80103E64: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80103E68:
    ctx->pc = 0x80103E68u;
    // 80103E68: cmplwi  r4, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80103E6C:
    ctx->pc = 0x80103E6Cu;
    // 80103E6C: bc    12, 1, 0x80103E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103E84;
        }
    }

label_80103E70:
    ctx->pc = 0x80103E70u;
    ctx->downcount -= 4;
    // 80103E70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80103E74:
    ctx->pc = 0x80103E74u;
    // 80103E74: slw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80103E78:
    ctx->pc = 0x80103E78u;
    // 80103E78: andi.   r0, r0, 0x002B
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x002Bu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80103E7C:
    ctx->pc = 0x80103E7Cu;
    // 80103E7C: bc    12, 2, 0x80103E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103E84;
        }
    }

label_80103E80:
    ctx->pc = 0x80103E80u;
    ctx->downcount -= 1;
    // 80103E80: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80103E84:
    ctx->pc = 0x80103E84u;
    ctx->downcount -= 3;
    // 80103E84: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103E88:
    ctx->pc = 0x80103E88u;
    // 80103E88: lhz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103E8C:
    ctx->pc = 0x80103E8Cu;
    // 80103E8C: bl      0x8010048C
    {
            ctx->lr = 0x80103E90u;
            ctx->pc = 0x8010048Cu;
            return;
    }

label_80103E90:
    ctx->pc = 0x80103E90u;
    ctx->downcount -= 1;
    // 80103E90: bl      0x800FF4EC
    {
            ctx->lr = 0x80103E94u;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80103E94:
    ctx->pc = 0x80103E94u;
    ctx->downcount -= 5;
    // 80103E94: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80103E98:
    ctx->pc = 0x80103E98u;
    // 80103E98: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103E9C:
    ctx->pc = 0x80103E9Cu;
    // 80103E9C: lhz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103EA0:
    ctx->pc = 0x80103EA0u;
    // 80103EA0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80103EA4:
    ctx->pc = 0x80103EA4u;
    // 80103EA4: bl      0x801005F8
    {
            ctx->lr = 0x80103EA8u;
            ctx->pc = 0x801005F8u;
            return;
    }

label_80103EA8:
    ctx->pc = 0x80103EA8u;
    ctx->downcount -= 4;
    // 80103EA8: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80103EAC:
    ctx->pc = 0x80103EACu;
    // 80103EAC: addi    r29, r30, 4
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(4);

label_80103EB0:
    ctx->pc = 0x80103EB0u;
    // 80103EB0: cmpwi   r0, 2
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

label_80103EB4:
    ctx->pc = 0x80103EB4u;
    // 80103EB4: bc    4, 2, 0x80103EEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80103EEC;
        }
    }

label_80103EB8:
    ctx->pc = 0x80103EB8u;
    ctx->downcount -= 4;
    // 80103EB8: lwz     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103EBC:
    ctx->pc = 0x80103EBCu;
    // 80103EBC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80103EC0:
    ctx->pc = 0x80103EC0u;
    // 80103EC0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80103EC4:
    ctx->pc = 0x80103EC4u;
    // 80103EC4: bl      0x80004000
    {
            ctx->lr = 0x80103EC8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80103EC8:
    ctx->pc = 0x80103EC8u;
    ctx->downcount -= 4;
    // 80103EC8: lwz     r3, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103ECC:
    ctx->pc = 0x80103ECCu;
    // 80103ECC: addi    r4, r29, 12
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(12);

label_80103ED0:
    ctx->pc = 0x80103ED0u;
    // 80103ED0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80103ED4:
    ctx->pc = 0x80103ED4u;
    // 80103ED4: bl      0x80004000
    {
            ctx->lr = 0x80103ED8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80103ED8:
    ctx->pc = 0x80103ED8u;
    ctx->downcount -= 4;
    // 80103ED8: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103EDC:
    ctx->pc = 0x80103EDCu;
    // 80103EDC: addi    r4, r29, 24
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(24);

label_80103EE0:
    ctx->pc = 0x80103EE0u;
    // 80103EE0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80103EE4:
    ctx->pc = 0x80103EE4u;
    // 80103EE4: bl      0x80004000
    {
            ctx->lr = 0x80103EE8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80103EE8:
    ctx->pc = 0x80103EE8u;
    ctx->downcount -= 1;
    // 80103EE8: addi    r29, r29, 36
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(36);

label_80103EEC:
    ctx->pc = 0x80103EECu;
    ctx->downcount -= 3;
    // 80103EEC: lhz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80103EF0:
    ctx->pc = 0x80103EF0u;
    // 80103EF0: cmpwi   r4, 0
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

label_80103EF4:
    ctx->pc = 0x80103EF4u;
    // 80103EF4: bc    4, 2, 0x80103F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80103F18;
        }
    }

label_80103EF8:
    ctx->pc = 0x80103EF8u;
    ctx->downcount -= 7;
    // 80103EF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80103EFC:
    ctx->pc = 0x80103EFCu;
    // 80103EFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80103F00:
    ctx->pc = 0x80103F00u;
    // 80103F00: sth     r0, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103F04:
    ctx->pc = 0x80103F04u;
    // 80103F04: sth     r0, 42(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103F08:
    ctx->pc = 0x80103F08u;
    // 80103F08: sth     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103F0C:
    ctx->pc = 0x80103F0Cu;
    // 80103F0C: sth     r0, 46(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80103F10:
    ctx->pc = 0x80103F10u;
    // 80103F10: bl      0x800FF500
    {
            ctx->lr = 0x80103F14u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80103F14:
    ctx->pc = 0x80103F14u;
    ctx->downcount -= 1;
    // 80103F14: b       0x80104418
    {
            goto label_80104418;
    }

label_80103F18:
    ctx->pc = 0x80103F18u;
    ctx->downcount -= 9;
    // 80103F18: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103F1C:
    ctx->pc = 0x80103F1Cu;
    // 80103F1C: mulli   r0, r4, 6
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)6);

label_80103F20:
    ctx->pc = 0x80103F20u;
    // 80103F20: sth     r4, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_80103F24:
    ctx->pc = 0x80103F24u;
    // 80103F24: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_80103F28:
    ctx->pc = 0x80103F28u;
    // 80103F28: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80103F2C:
    ctx->pc = 0x80103F2Cu;
    // 80103F2C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80103F30:
    ctx->pc = 0x80103F30u;
    // 80103F30: bc    12, 2, 0x8010407C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010407C;
        }
    }

label_80103F34:
    ctx->pc = 0x80103F34u;
    ctx->downcount -= 27;
    // 80103F34: lwz     r3, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103F38:
    ctx->pc = 0x80103F38u;
    // 80103F38: lis     r26, -32661
    ctx->gpr[26] = ((u32)(s32)(-32661) << 16);

label_80103F3C:
    ctx->pc = 0x80103F3Cu;
    // 80103F3C: lfs     f4, -29720(r2)
    if (!ppc_fp_available_inline(ctx, 0x80103F3Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80103F40:
    ctx->pc = 0x80103F40u;
    // 80103F40: addi    r12, r26, 3192
    ctx->gpr[12] = ctx->gpr[26] + (u32)(s32)(3192);

label_80103F44:
    ctx->pc = 0x80103F44u;
    // 80103F44: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x80103F44u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103F48:
    ctx->pc = 0x80103F48u;
    // 80103F48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80103F4C:
    ctx->pc = 0x80103F4Cu;
    // 80103F4C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80103F4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80103F50:
    ctx->pc = 0x80103F50u;
    // 80103F50: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80103F54:
    ctx->pc = 0x80103F54u;
    // 80103F54: fmuls   f3, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80103F54u)) return;
    ppc_fmuls(ctx, 3, 4, 0);

label_80103F58:
    ctx->pc = 0x80103F58u;
    // 80103F58: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80103F58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80103F5C:
    ctx->pc = 0x80103F5Cu;
    // 80103F5C: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80103F5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80103F60:
    ctx->pc = 0x80103F60u;
    // 80103F60: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80103F60u)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_80103F64:
    ctx->pc = 0x80103F64u;
    // 80103F64: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80103F64u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_80103F68:
    ctx->pc = 0x80103F68u;
    // 80103F68: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80103F68u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_80103F6C:
    ctx->pc = 0x80103F6Cu;
    // 80103F6C: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x80103F6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_80103F70:
    ctx->pc = 0x80103F70u;
    // 80103F70: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80103F70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_80103F74:
    ctx->pc = 0x80103F74u;
    // 80103F74: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80103F74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_80103F78:
    ctx->pc = 0x80103F78u;
    // 80103F78: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80103F78u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80103F7C:
    ctx->pc = 0x80103F7Cu;
    // 80103F7C: stfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_80103F80:
    ctx->pc = 0x80103F80u;
    // 80103F80: stfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103F80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_80103F84:
    ctx->pc = 0x80103F84u;
    // 80103F84: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80103F88:
    ctx->pc = 0x80103F88u;
    // 80103F88: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103F88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_80103F8C:
    ctx->pc = 0x80103F8Cu;
    // 80103F8C: lwz     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80103F90:
    ctx->pc = 0x80103F90u;
    // 80103F90: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80103F90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80103F94:
    ctx->pc = 0x80103F94u;
    // 80103F94: lwz     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80103F98:
    ctx->pc = 0x80103F98u;
    // 80103F98: lwz     r9, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80103F9C:
    ctx->pc = 0x80103F9Cu;
    // 80103F9C: b       0x8010406C
    {
            goto label_8010406C;
    }

label_80103FA0:
    ctx->pc = 0x80103FA0u;
    ctx->downcount -= 3;
    // 80103FA0: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103FA4:
    // 80103FA4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80103FA8:
    // 80103FA8: bc    12, 2, 0x80103FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80103FC8;
        }
    }

label_80103FAC:
    ctx->pc = 0x80103FACu;
    ctx->downcount -= 11;
    // 80103FAC: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80103FB0:
    // 80103FB0: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80103FB4:
    // 80103FB4: mullw   r3, r3, r6
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[3] = (u32)product;
    }

label_80103FB8:
    // 80103FB8: srawi r3, r3, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[3];
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

label_80103FBC:
    // 80103FBC: add   r3, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80103FC0:
    // 80103FC0: extsh r24, r3
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80103FC4:
    // 80103FC4: b       0x80103FDC
    {
            goto label_80103FDC;
    }

label_80103FC8:
    ctx->pc = 0x80103FC8u;
    ctx->downcount -= 9;
    // 80103FC8: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80103FCC:
    // 80103FCC: mullw   r3, r3, r6
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[3] = (u32)product;
    }

label_80103FD0:
    // 80103FD0: srawi r3, r3, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[3];
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

label_80103FD4:
    // 80103FD4: add   r3, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80103FD8:
    // 80103FD8: extsh r24, r3
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80103FDC:
    ctx->pc = 0x80103FDCu;
    ctx->downcount -= 23;
    // 80103FDC: lha     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80103FE0:
    ctx->pc = 0x80103FE0u;
    // 80103FE0: lha     r27, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[27] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80103FE4:
    // 80103FE4: mullw   r25, r3, r6
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[25] = (u32)product;
    }

label_80103FE8:
    ctx->pc = 0x80103FE8u;
    // 80103FE8: lwz     r3, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80103FEC:
    ctx->pc = 0x80103FECu;
    // 80103FEC: lwz     r11, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80103FF0:
    // 80103FF0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80103FF4:
    // 80103FF4: add   r3, r11, r10
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80103FF8:
    // 80103FF8: mullw   r11, r27, r6
    {
        s64 product = (s64)(s32)ctx->gpr[27] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[11] = (u32)product;
    }

label_80103FFC:
    // 80103FFC: srawi r25, r25, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80104000:
    // 80104000: add   r27, r8, r25
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80104004:
    // 80104004: srawi r11, r11, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[11];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[11] = value;
        } else if (sh > 31) {
            ctx->gpr[11] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[11] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80104008:
    // 80104008: extsh r25, r27
    {
        ctx->gpr[25] = (u32)(s32)(s16)ctx->gpr[27];
    }

label_8010400C:
    // 8010400C: add   r11, r9, r11
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_80104010:
    // 80104010: extsh r27, r11
    {
        ctx->gpr[27] = (u32)(s32)(s16)ctx->gpr[11];
    }

label_80104014:
    // 80104014: bc    12, 2, 0x8010401C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010401C;
        }
    }

label_80104018:
    ctx->downcount -= 1;
    // 80104018: neg  r24, r24
    {
        u32 a = ctx->gpr[24];
        ctx->gpr[24] = (~a) + 1u;
    }

label_8010401C:
    ctx->pc = 0x8010401Cu;
    ctx->downcount -= 6;
    // 8010401C: lbz     r11, 2(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(2);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_80104020:
    // 80104020: rlwinm r11, r11, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0xFFFFFFFEu;
    }

label_80104024:
    ctx->pc = 0x80104024u;
    // 80104024: sthx    r24, r3, r11
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[11];
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_80104028:
    ctx->pc = 0x80104028u;
    // 80104028: lwz     r11, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8010402C:
    // 8010402C: cmpwi   r11, 0
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

label_80104030:
    // 80104030: bc    12, 2, 0x80104038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104038;
        }
    }

label_80104034:
    ctx->downcount -= 1;
    // 80104034: neg  r25, r25
    {
        u32 a = ctx->gpr[25];
        ctx->gpr[25] = (~a) + 1u;
    }

label_80104038:
    ctx->pc = 0x80104038u;
    ctx->downcount -= 6;
    // 80104038: lbz     r11, 3192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3192);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_8010403C:
    // 8010403C: rlwinm r11, r11, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0xFFFFFFFEu;
    }

label_80104040:
    ctx->pc = 0x80104040u;
    // 80104040: sthx    r25, r3, r11
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[11];
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_80104044:
    ctx->pc = 0x80104044u;
    // 80104044: lwz     r11, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80104048:
    // 80104048: cmpwi   r11, 0
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

label_8010404C:
    // 8010404C: bc    12, 2, 0x80104054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104054;
        }
    }

label_80104050:
    ctx->downcount -= 1;
    // 80104050: neg  r27, r27
    {
        u32 a = ctx->gpr[27];
        ctx->gpr[27] = (~a) + 1u;
    }

label_80104054:
    ctx->pc = 0x80104054u;
    ctx->downcount -= 6;
    // 80104054: lbz     r11, 1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(1);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_80104058:
    // 80104058: addi    r4, r4, 6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6);

label_8010405C:
    // 8010405C: addi    r10, r10, 6
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(6);

label_80104060:
    // 80104060: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80104064:
    // 80104064: rlwinm r11, r11, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0xFFFFFFFEu;
    }

label_80104068:
    ctx->pc = 0x80104068u;
    // 80104068: sthx    r27, r3, r11
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[11];
        mem_write16(ctx, ea, (u16)ctx->gpr[27]);
    }

label_8010406C:
    ctx->pc = 0x8010406Cu;
    ctx->downcount -= 3;
    // 8010406C: lhz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80104070:
    // 80104070: cmpw    r5, r3
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104074:
    // 80104074: bc    12, 0, 0x80103FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80103FA0u;
                return;
            }
            goto label_80103FA0;
        }
    }

label_80104078:
    ctx->pc = 0x80104078u;
    ctx->downcount -= 1;
    // 80104078: b       0x801041D4
    {
            goto label_801041D4;
    }

label_8010407C:
    ctx->pc = 0x8010407Cu;
    ctx->downcount -= 3;
    // 8010407C: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104080:
    ctx->pc = 0x80104080u;
    // 80104080: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104084:
    ctx->pc = 0x80104084u;
    // 80104084: bc    12, 2, 0x80104128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104128;
        }
    }

label_80104088:
    ctx->pc = 0x80104088u;
    ctx->downcount -= 5;
    // 80104088: lis     r7, -32661
    ctx->gpr[7] = ((u32)(s32)(-32661) << 16);

label_8010408C:
    ctx->pc = 0x8010408Cu;
    // 8010408C: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80104090:
    ctx->pc = 0x80104090u;
    // 80104090: addi    r6, r7, 3192
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(3192);

label_80104094:
    ctx->pc = 0x80104094u;
    // 80104094: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80104098:
    ctx->pc = 0x80104098u;
    // 80104098: b       0x80104118
    {
            goto label_80104118;
    }

label_8010409C:
    ctx->pc = 0x8010409Cu;
    ctx->downcount -= 10;
    // 8010409C: lha     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801040A0:
    ctx->pc = 0x801040A0u;
    // 801040A0: lwz     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801040A4:
    // 801040A4: neg  r9, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[9] = (~a) + 1u;
    }

label_801040A8:
    ctx->pc = 0x801040A8u;
    // 801040A8: lwz     r8, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_801040AC:
    // 801040AC: cmpwi   r5, 0
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

label_801040B0:
    ctx->pc = 0x801040B0u;
    // 801040B0: lha     r10, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801040B4:
    ctx->pc = 0x801040B4u;
    // 801040B4: lha     r11, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[11] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801040B8:
    // 801040B8: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_801040BC:
    // 801040BC: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_801040C0:
    // 801040C0: bc    12, 2, 0x801040C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801040C8;
        }
    }

label_801040C4:
    ctx->downcount -= 1;
    // 801040C4: neg  r9, r9
    {
        u32 a = ctx->gpr[9];
        ctx->gpr[9] = (~a) + 1u;
    }

label_801040C8:
    ctx->pc = 0x801040C8u;
    ctx->downcount -= 6;
    // 801040C8: lbz     r5, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801040CC:
    // 801040CC: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_801040D0:
    ctx->pc = 0x801040D0u;
    // 801040D0: sthx    r9, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_801040D4:
    ctx->pc = 0x801040D4u;
    // 801040D4: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801040D8:
    // 801040D8: cmpwi   r5, 0
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

label_801040DC:
    // 801040DC: bc    12, 2, 0x801040E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801040E4;
        }
    }

label_801040E0:
    ctx->downcount -= 1;
    // 801040E0: neg  r10, r10
    {
        u32 a = ctx->gpr[10];
        ctx->gpr[10] = (~a) + 1u;
    }

label_801040E4:
    ctx->pc = 0x801040E4u;
    ctx->downcount -= 6;
    // 801040E4: lbz     r5, 3192(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3192);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801040E8:
    // 801040E8: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_801040EC:
    ctx->pc = 0x801040ECu;
    // 801040EC: sthx    r10, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_801040F0:
    ctx->pc = 0x801040F0u;
    // 801040F0: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801040F4:
    // 801040F4: cmpwi   r5, 0
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

label_801040F8:
    // 801040F8: bc    12, 2, 0x80104100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104100;
        }
    }

label_801040FC:
    ctx->downcount -= 1;
    // 801040FC: neg  r11, r11
    {
        u32 a = ctx->gpr[11];
        ctx->gpr[11] = (~a) + 1u;
    }

label_80104100:
    ctx->pc = 0x80104100u;
    ctx->downcount -= 6;
    // 80104100: lbz     r5, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104104:
    // 80104104: addi    r4, r4, 6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6);

label_80104108:
    // 80104108: addi    r3, r3, 6
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6);

label_8010410C:
    // 8010410C: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_80104110:
    // 80104110: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_80104114:
    ctx->pc = 0x80104114u;
    // 80104114: sthx    r11, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_80104118:
    ctx->pc = 0x80104118u;
    ctx->downcount -= 3;
    // 80104118: lhz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8010411C:
    // 8010411C: cmpw    r12, r5
    {
        s32 val_a = (s32)(ctx->gpr[12]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104120:
    // 80104120: bc    12, 0, 0x8010409C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8010409Cu;
                return;
            }
            goto label_8010409C;
        }
    }

label_80104124:
    ctx->pc = 0x80104124u;
    ctx->downcount -= 1;
    // 80104124: b       0x801041D4
    {
            goto label_801041D4;
    }

label_80104128:
    ctx->pc = 0x80104128u;
    ctx->downcount -= 5;
    // 80104128: lis     r9, -32661
    ctx->gpr[9] = ((u32)(s32)(-32661) << 16);

label_8010412C:
    ctx->pc = 0x8010412Cu;
    // 8010412C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80104130:
    ctx->pc = 0x80104130u;
    // 80104130: addi    r8, r9, 3192
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(3192);

label_80104134:
    ctx->pc = 0x80104134u;
    // 80104134: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80104138:
    ctx->pc = 0x80104138u;
    // 80104138: b       0x801041C8
    {
            goto label_801041C8;
    }

label_8010413C:
    ctx->pc = 0x8010413Cu;
    ctx->downcount -= 5;
    // 8010413C: lwz     r6, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104140:
    ctx->pc = 0x80104140u;
    // 80104140: lwz     r7, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80104144:
    // 80104144: cmpwi   r6, 0
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

label_80104148:
    // 80104148: add   r10, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_8010414C:
    // 8010414C: bc    12, 2, 0x8010415C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010415C;
        }
    }

label_80104150:
    ctx->pc = 0x80104150u;
    ctx->downcount -= 3;
    // 80104150: lha     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104154:
    // 80104154: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_80104158:
    // 80104158: b       0x80104160
    {
            goto label_80104160;
    }

label_8010415C:
    ctx->pc = 0x8010415Cu;
    ctx->downcount -= 1;
    // 8010415C: lha     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104160:
    ctx->pc = 0x80104160u;
    ctx->downcount -= 6;
    // 80104160: lbz     r6, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80104164:
    // 80104164: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80104168:
    ctx->pc = 0x80104168u;
    // 80104168: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_8010416C:
    ctx->pc = 0x8010416Cu;
    // 8010416C: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104170:
    // 80104170: cmpwi   r6, 0
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

label_80104174:
    // 80104174: bc    12, 2, 0x80104184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104184;
        }
    }

label_80104178:
    ctx->pc = 0x80104178u;
    ctx->downcount -= 3;
    // 80104178: lha     r6, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8010417C:
    // 8010417C: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_80104180:
    // 80104180: b       0x80104188
    {
            goto label_80104188;
    }

label_80104184:
    ctx->pc = 0x80104184u;
    ctx->downcount -= 1;
    // 80104184: lha     r7, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104188:
    ctx->pc = 0x80104188u;
    ctx->downcount -= 6;
    // 80104188: lbz     r6, 3192(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3192);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8010418C:
    // 8010418C: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80104190:
    ctx->pc = 0x80104190u;
    // 80104190: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80104194:
    ctx->pc = 0x80104194u;
    // 80104194: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104198:
    // 80104198: cmpwi   r6, 0
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

label_8010419C:
    // 8010419C: bc    12, 2, 0x801041AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801041AC;
        }
    }

label_801041A0:
    ctx->pc = 0x801041A0u;
    ctx->downcount -= 3;
    // 801041A0: lha     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801041A4:
    // 801041A4: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_801041A8:
    // 801041A8: b       0x801041B0
    {
            goto label_801041B0;
    }

label_801041AC:
    ctx->pc = 0x801041ACu;
    ctx->downcount -= 1;
    // 801041AC: lha     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801041B0:
    ctx->pc = 0x801041B0u;
    ctx->downcount -= 6;
    // 801041B0: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801041B4:
    // 801041B4: addi    r4, r4, 6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6);

label_801041B8:
    // 801041B8: addi    r5, r5, 6
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6);

label_801041BC:
    // 801041BC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_801041C0:
    // 801041C0: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_801041C4:
    ctx->pc = 0x801041C4u;
    // 801041C4: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_801041C8:
    ctx->pc = 0x801041C8u;
    ctx->downcount -= 3;
    // 801041C8: lhz     r6, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_801041CC:
    // 801041CC: cmpw    r3, r6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801041D0:
    // 801041D0: bc    12, 0, 0x8010413C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8010413Cu;
                return;
            }
            goto label_8010413C;
        }
    }

label_801041D4:
    ctx->pc = 0x801041D4u;
    ctx->downcount -= 11;
    // 801041D4: add   r29, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_801041D8:
    ctx->pc = 0x801041D8u;
    // 801041D8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801041DC:
    ctx->pc = 0x801041DCu;
    // 801041DC: lhz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_801041E0:
    ctx->pc = 0x801041E0u;
    // 801041E0: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_801041E4:
    ctx->pc = 0x801041E4u;
    // 801041E4: cmpwi   r0, 0
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

label_801041E8:
    ctx->pc = 0x801041E8u;
    // 801041E8: mulli   r0, r3, 6
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)6);

label_801041EC:
    ctx->pc = 0x801041ECu;
    // 801041EC: sth     r3, 42(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_801041F0:
    ctx->pc = 0x801041F0u;
    // 801041F0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_801041F4:
    ctx->pc = 0x801041F4u;
    // 801041F4: bc    12, 2, 0x80104298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104298;
        }
    }

label_801041F8:
    ctx->pc = 0x801041F8u;
    ctx->downcount -= 5;
    // 801041F8: lis     r7, -32661
    ctx->gpr[7] = ((u32)(s32)(-32661) << 16);

label_801041FC:
    ctx->pc = 0x801041FCu;
    // 801041FC: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80104200:
    ctx->pc = 0x80104200u;
    // 80104200: addi    r6, r7, 3192
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(3192);

label_80104204:
    ctx->pc = 0x80104204u;
    // 80104204: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80104208:
    ctx->pc = 0x80104208u;
    // 80104208: b       0x80104288
    {
            goto label_80104288;
    }

label_8010420C:
    ctx->pc = 0x8010420Cu;
    ctx->downcount -= 10;
    // 8010420C: lha     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104210:
    ctx->pc = 0x80104210u;
    // 80104210: lwz     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80104214:
    // 80104214: neg  r9, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[9] = (~a) + 1u;
    }

label_80104218:
    ctx->pc = 0x80104218u;
    // 80104218: lwz     r8, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8010421C:
    // 8010421C: cmpwi   r5, 0
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

label_80104220:
    ctx->pc = 0x80104220u;
    // 80104220: lha     r10, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104224:
    ctx->pc = 0x80104224u;
    // 80104224: lha     r11, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[11] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104228:
    // 80104228: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8010422C:
    // 8010422C: add   r8, r8, r4
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80104230:
    // 80104230: bc    12, 2, 0x80104238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104238;
        }
    }

label_80104234:
    ctx->downcount -= 1;
    // 80104234: neg  r9, r9
    {
        u32 a = ctx->gpr[9];
        ctx->gpr[9] = (~a) + 1u;
    }

label_80104238:
    ctx->pc = 0x80104238u;
    ctx->downcount -= 6;
    // 80104238: lbz     r5, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8010423C:
    // 8010423C: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_80104240:
    ctx->pc = 0x80104240u;
    // 80104240: sthx    r9, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_80104244:
    ctx->pc = 0x80104244u;
    // 80104244: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80104248:
    // 80104248: cmpwi   r5, 0
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

label_8010424C:
    // 8010424C: bc    12, 2, 0x80104254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104254;
        }
    }

label_80104250:
    ctx->downcount -= 1;
    // 80104250: neg  r10, r10
    {
        u32 a = ctx->gpr[10];
        ctx->gpr[10] = (~a) + 1u;
    }

label_80104254:
    ctx->pc = 0x80104254u;
    ctx->downcount -= 6;
    // 80104254: lbz     r5, 3192(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3192);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104258:
    // 80104258: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_8010425C:
    ctx->pc = 0x8010425Cu;
    // 8010425C: sthx    r10, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_80104260:
    ctx->pc = 0x80104260u;
    // 80104260: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80104264:
    // 80104264: cmpwi   r5, 0
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

label_80104268:
    // 80104268: bc    12, 2, 0x80104270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104270;
        }
    }

label_8010426C:
    ctx->downcount -= 1;
    // 8010426C: neg  r11, r11
    {
        u32 a = ctx->gpr[11];
        ctx->gpr[11] = (~a) + 1u;
    }

label_80104270:
    ctx->pc = 0x80104270u;
    ctx->downcount -= 6;
    // 80104270: lbz     r5, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104274:
    // 80104274: addi    r3, r3, 6
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6);

label_80104278:
    // 80104278: addi    r4, r4, 6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6);

label_8010427C:
    // 8010427C: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_80104280:
    // 80104280: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_80104284:
    ctx->pc = 0x80104284u;
    // 80104284: sthx    r11, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_80104288:
    ctx->pc = 0x80104288u;
    ctx->downcount -= 3;
    // 80104288: lhz     r5, 42(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(42);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8010428C:
    // 8010428C: cmpw    r12, r5
    {
        s32 val_a = (s32)(ctx->gpr[12]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104290:
    // 80104290: bc    12, 0, 0x8010420C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8010420Cu;
                return;
            }
            goto label_8010420C;
        }
    }

label_80104294:
    ctx->pc = 0x80104294u;
    ctx->downcount -= 1;
    // 80104294: b       0x80104344
    {
            goto label_80104344;
    }

label_80104298:
    ctx->pc = 0x80104298u;
    ctx->downcount -= 5;
    // 80104298: lis     r9, -32661
    ctx->gpr[9] = ((u32)(s32)(-32661) << 16);

label_8010429C:
    ctx->pc = 0x8010429Cu;
    // 8010429C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801042A0:
    ctx->pc = 0x801042A0u;
    // 801042A0: addi    r8, r9, 3192
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(3192);

label_801042A4:
    ctx->pc = 0x801042A4u;
    // 801042A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801042A8:
    ctx->pc = 0x801042A8u;
    // 801042A8: b       0x80104338
    {
            goto label_80104338;
    }

label_801042AC:
    ctx->pc = 0x801042ACu;
    ctx->downcount -= 5;
    // 801042AC: lwz     r6, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_801042B0:
    ctx->pc = 0x801042B0u;
    // 801042B0: lwz     r7, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_801042B4:
    // 801042B4: cmpwi   r6, 0
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

label_801042B8:
    // 801042B8: add   r10, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_801042BC:
    // 801042BC: bc    12, 2, 0x801042CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801042CC;
        }
    }

label_801042C0:
    ctx->pc = 0x801042C0u;
    ctx->downcount -= 3;
    // 801042C0: lha     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801042C4:
    // 801042C4: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_801042C8:
    // 801042C8: b       0x801042D0
    {
            goto label_801042D0;
    }

label_801042CC:
    ctx->pc = 0x801042CCu;
    ctx->downcount -= 1;
    // 801042CC: lha     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801042D0:
    ctx->pc = 0x801042D0u;
    ctx->downcount -= 6;
    // 801042D0: lbz     r6, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801042D4:
    // 801042D4: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_801042D8:
    ctx->pc = 0x801042D8u;
    // 801042D8: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_801042DC:
    ctx->pc = 0x801042DCu;
    // 801042DC: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_801042E0:
    // 801042E0: cmpwi   r6, 0
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

label_801042E4:
    // 801042E4: bc    12, 2, 0x801042F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801042F4;
        }
    }

label_801042E8:
    ctx->pc = 0x801042E8u;
    ctx->downcount -= 3;
    // 801042E8: lha     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801042EC:
    // 801042EC: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_801042F0:
    // 801042F0: b       0x801042F8
    {
            goto label_801042F8;
    }

label_801042F4:
    ctx->pc = 0x801042F4u;
    ctx->downcount -= 1;
    // 801042F4: lha     r7, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801042F8:
    ctx->pc = 0x801042F8u;
    ctx->downcount -= 6;
    // 801042F8: lbz     r6, 3192(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3192);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801042FC:
    // 801042FC: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80104300:
    ctx->pc = 0x80104300u;
    // 80104300: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80104304:
    ctx->pc = 0x80104304u;
    // 80104304: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104308:
    // 80104308: cmpwi   r6, 0
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

label_8010430C:
    // 8010430C: bc    12, 2, 0x8010431C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010431C;
        }
    }

label_80104310:
    ctx->pc = 0x80104310u;
    ctx->downcount -= 3;
    // 80104310: lha     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104314:
    // 80104314: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_80104318:
    // 80104318: b       0x80104320
    {
            goto label_80104320;
    }

label_8010431C:
    ctx->pc = 0x8010431Cu;
    ctx->downcount -= 1;
    // 8010431C: lha     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80104320:
    ctx->pc = 0x80104320u;
    ctx->downcount -= 6;
    // 80104320: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80104324:
    // 80104324: addi    r3, r3, 6
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6);

label_80104328:
    // 80104328: addi    r5, r5, 6
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6);

label_8010432C:
    // 8010432C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80104330:
    // 80104330: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80104334:
    ctx->pc = 0x80104334u;
    // 80104334: sthx    r7, r10, r6
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[6];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80104338:
    ctx->pc = 0x80104338u;
    ctx->downcount -= 3;
    // 80104338: lhz     r6, 42(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(42);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8010433C:
    // 8010433C: cmpw    r4, r6
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104340:
    // 80104340: bc    12, 0, 0x801042AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x801042ACu;
                return;
            }
            goto label_801042AC;
        }
    }

label_80104344:
    ctx->pc = 0x80104344u;
    ctx->downcount -= 3;
    // 80104344: cmpwi   r31, 0
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

label_80104348:
    ctx->pc = 0x80104348u;
    // 80104348: add   r29, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8010434C:
    ctx->pc = 0x8010434Cu;
    // 8010434C: bc    12, 2, 0x8010435C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010435C;
        }
    }

label_80104350:
    ctx->pc = 0x80104350u;
    ctx->downcount -= 3;
    // 80104350: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80104354:
    ctx->pc = 0x80104354u;
    // 80104354: sth     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80104358:
    ctx->pc = 0x80104358u;
    // 80104358: b       0x80104380
    {
            goto label_80104380;
    }

label_8010435C:
    ctx->pc = 0x8010435Cu;
    ctx->downcount -= 8;
    // 8010435C: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104360:
    ctx->pc = 0x80104360u;
    // 80104360: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_80104364:
    ctx->pc = 0x80104364u;
    // 80104364: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104368:
    ctx->pc = 0x80104368u;
    // 80104368: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8010436C:
    ctx->pc = 0x8010436Cu;
    // 8010436C: rlwinm r24, r0, 2, 0, 29
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80104370:
    ctx->pc = 0x80104370u;
    // 80104370: sth     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80104374:
    ctx->pc = 0x80104374u;
    // 80104374: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80104378:
    ctx->pc = 0x80104378u;
    // 80104378: bl      0x80004000
    {
            ctx->lr = 0x8010437Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8010437C:
    ctx->pc = 0x8010437Cu;
    ctx->downcount -= 1;
    // 8010437C: add   r29, r29, r24
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80104380:
    ctx->pc = 0x80104380u;
    ctx->downcount -= 5;
    // 80104380: lbz     r26, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read8(ctx, ea);
    }

label_80104384:
    ctx->pc = 0x80104384u;
    // 80104384: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80104388:
    ctx->pc = 0x80104388u;
    // 80104388: lwz     r3, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010438C:
    ctx->pc = 0x8010438Cu;
    // 8010438C: lhz     r4, 38(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(38);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104390:
    ctx->pc = 0x80104390u;
    // 80104390: bl      0x800460B0
    {
            ctx->lr = 0x80104394u;
            ctx->pc = 0x800460B0u;
            return;
    }

label_80104394:
    ctx->pc = 0x80104394u;
    ctx->downcount -= 3;
    // 80104394: lwz     r3, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104398:
    ctx->pc = 0x80104398u;
    // 80104398: lhz     r4, 38(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(38);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8010439C:
    ctx->pc = 0x8010439Cu;
    // 8010439C: bl      0x800397A0
    {
            ctx->lr = 0x801043A0u;
            ctx->pc = 0x800397A0u;
            return;
    }

label_801043A0:
    ctx->pc = 0x801043A0u;
    ctx->downcount -= 3;
    // 801043A0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_801043A4:
    ctx->pc = 0x801043A4u;
    // 801043A4: lis     r27, -13311
    ctx->gpr[27] = ((u32)(s32)(-13311) << 16);

label_801043A8:
    ctx->pc = 0x801043A8u;
    // 801043A8: b       0x80104400
    {
            goto label_80104400;
    }

label_801043AC:
    ctx->pc = 0x801043ACu;
    ctx->downcount -= 6;
    // 801043AC: lbz     r25, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[25] = mem_read8(ctx, ea);
    }

label_801043B0:
    // 801043B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801043B4:
    ctx->pc = 0x801043B4u;
    // 801043B4: lbz     r3, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_801043B8:
    // 801043B8: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_801043BC:
    // 801043BC: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_801043C0:
    // 801043C0: bl      0x800357D0
    {
            ctx->lr = 0x801043C4u;
            ctx->pc = 0x800357D0u;
            return;
    }

label_801043C4:
    ctx->pc = 0x801043C4u;
    ctx->downcount -= 4;
    // 801043C4: mtctr    r25
    ctx->ctr = ctx->gpr[25];

label_801043C8:
    // 801043C8: cmpwi   r25, 0
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

label_801043CC:
    // 801043CC: bc    4, 1, 0x801043FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801043FC;
        }
    }

label_801043D0:
    ctx->pc = 0x801043D0u;
    ctx->downcount -= 7;
    // 801043D0: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801043D4:
    // 801043D4: cmpwi   r31, 0
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

label_801043D8:
    ctx->pc = 0x801043D8u;
    // 801043D8: stb     r0, -32768(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801043DC:
    ctx->pc = 0x801043DCu;
    // 801043DC: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801043E0:
    // 801043E0: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_801043E4:
    ctx->pc = 0x801043E4u;
    // 801043E4: stb     r0, -32768(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801043E8:
    // 801043E8: bc    4, 2, 0x801043F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801043F8;
        }
    }

label_801043EC:
    ctx->pc = 0x801043ECu;
    ctx->downcount -= 3;
    // 801043EC: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801043F0:
    // 801043F0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_801043F4:
    ctx->pc = 0x801043F4u;
    // 801043F4: stb     r0, -32768(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801043F8:
    ctx->downcount -= 1;
    // 801043F8: bc    16, 0, 0x801043D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x801043D0u;
                return;
            }
            goto label_801043D0;
        }
    }

label_801043FC:
    ctx->downcount -= 1;
    // 801043FC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80104400:
    ctx->downcount -= 2;
    // 80104400: cmpw    r24, r26
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104404:
    // 80104404: bc    12, 0, 0x801043AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x801043ACu;
                return;
            }
            goto label_801043AC;
        }
    }

label_80104408:
    ctx->pc = 0x80104408u;
    ctx->downcount -= 1;
    // 80104408: bl      0x80039860
    {
            ctx->lr = 0x8010440Cu;
            ctx->pc = 0x80039860u;
            return;
    }

label_8010440C:
    ctx->pc = 0x8010440Cu;
    ctx->downcount -= 3;
    // 8010440C: sth     r3, 46(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80104410:
    ctx->pc = 0x80104410u;
    // 80104410: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80104414:
    ctx->pc = 0x80104414u;
    // 80104414: bl      0x800FF500
    {
            ctx->lr = 0x80104418u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80104418:
    ctx->pc = 0x80104418u;
    ctx->downcount -= 2;
    // 80104418: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_8010441C:
    ctx->pc = 0x8010441Cu;
    // 8010441C: bl      0x80007898
    {
            ctx->lr = 0x80104420u;
            ctx->pc = 0x80007898u;
            return;
    }

label_80104420:
    ctx->pc = 0x80104420u;
    ctx->downcount -= 5;
    // 80104420: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104424:
    ctx->pc = 0x80104424u;
    // 80104424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80104428:
    ctx->pc = 0x80104428u;
    // 80104428: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8010442C:
    ctx->pc = 0x8010442Cu;
    // 8010442C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80104430:
    ctx->pc = 0x80104430u;
    ctx->downcount -= 5;
    // 80104430: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80104434:
    ctx->pc = 0x80104434u;
    // 80104434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80104438:
    ctx->pc = 0x80104438u;
    // 80104438: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010443C:
    ctx->pc = 0x8010443Cu;
    // 8010443C: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80104440:
    ctx->pc = 0x80104440u;
    // 80104440: bl      0x80007858
    {
            ctx->lr = 0x80104444u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80104444:
    ctx->pc = 0x80104444u;
    ctx->downcount -= 7;
    // 80104444: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80104448:
    ctx->pc = 0x80104448u;
    // 80104448: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8010444C:
    ctx->pc = 0x8010444Cu;
    // 8010444C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104450:
    ctx->pc = 0x80104450u;
    // 80104450: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80104454:
    ctx->pc = 0x80104454u;
    // 80104454: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80104458:
    ctx->pc = 0x80104458u;
    // 80104458: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8010445C:
    ctx->pc = 0x8010445Cu;
    // 8010445C: bl      0x801001FC
    {
            ctx->lr = 0x80104460u;
            ctx->pc = 0x801001FCu;
            return;
    }

label_80104460:
    ctx->pc = 0x80104460u;
    ctx->downcount -= 1;
    // 80104460: bl      0x800FF4EC
    {
            ctx->lr = 0x80104464u;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104464:
    ctx->pc = 0x80104464u;
    ctx->downcount -= 5;
    // 80104464: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104468:
    ctx->pc = 0x80104468u;
    // 80104468: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8010446C:
    ctx->pc = 0x8010446Cu;
    // 8010446C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80104470:
    ctx->pc = 0x80104470u;
    // 80104470: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80104474:
    ctx->pc = 0x80104474u;
    // 80104474: bl      0x80100368
    {
            ctx->lr = 0x80104478u;
            ctx->pc = 0x80100368u;
            return;
    }

label_80104478:
    ctx->pc = 0x80104478u;
    ctx->downcount -= 2;
    // 80104478: cmpwi   r28, 3
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

label_8010447C:
    ctx->pc = 0x8010447Cu;
    // 8010447C: bc    12, 2, 0x801044C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801044C4;
        }
    }

label_80104480:
    ctx->pc = 0x80104480u;
    ctx->downcount -= 1;
    // 80104480: bc    4, 0, 0x801044D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801044D0;
        }
    }

label_80104484:
    ctx->pc = 0x80104484u;
    ctx->downcount -= 2;
    // 80104484: cmpwi   r28, 0
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

label_80104488:
    ctx->pc = 0x80104488u;
    // 80104488: bc    12, 2, 0x80104494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104494;
        }
    }

label_8010448C:
    ctx->pc = 0x8010448Cu;
    ctx->downcount -= 1;
    // 8010448C: bc    4, 0, 0x801044A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801044A8;
        }
    }

label_80104490:
    ctx->pc = 0x80104490u;
    ctx->downcount -= 1;
    // 80104490: b       0x801044D0
    {
            goto label_801044D0;
    }

label_80104494:
    ctx->pc = 0x80104494u;
    ctx->downcount -= 9;
    // 80104494: lhz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80104498:
    ctx->pc = 0x80104498u;
    // 80104498: lhz     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8010449C:
    ctx->pc = 0x8010449Cu;
    // 8010449C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_801044A0:
    ctx->pc = 0x801044A0u;
    // 801044A0: rlwinm r5, r0, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_801044A4:
    ctx->pc = 0x801044A4u;
    // 801044A4: b       0x801044D0
    {
            goto label_801044D0;
    }

label_801044A8:
    ctx->pc = 0x801044A8u;
    ctx->downcount -= 11;
    // 801044A8: lhz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_801044AC:
    ctx->pc = 0x801044ACu;
    // 801044AC: lhz     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801044B0:
    ctx->pc = 0x801044B0u;
    // 801044B0: mullw   r3, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_801044B4:
    ctx->pc = 0x801044B4u;
    // 801044B4: rlwinm r0, r3, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_801044B8:
    ctx->pc = 0x801044B8u;
    // 801044B8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_801044BC:
    ctx->pc = 0x801044BCu;
    // 801044BC: srawi r5, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_801044C0:
    ctx->pc = 0x801044C0u;
    // 801044C0: b       0x801044D0
    {
            goto label_801044D0;
    }

label_801044C4:
    ctx->pc = 0x801044C4u;
    ctx->downcount -= 7;
    // 801044C4: lhz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_801044C8:
    ctx->pc = 0x801044C8u;
    // 801044C8: lhz     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801044CC:
    ctx->pc = 0x801044CCu;
    // 801044CC: mullw   r5, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[5] = (u32)product;
    }

label_801044D0:
    ctx->pc = 0x801044D0u;
    ctx->downcount -= 4;
    // 801044D0: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801044D4:
    ctx->pc = 0x801044D4u;
    // 801044D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_801044D8:
    ctx->pc = 0x801044D8u;
    // 801044D8: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_801044DC:
    ctx->pc = 0x801044DCu;
    // 801044DC: bl      0x80004000
    {
            ctx->lr = 0x801044E0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_801044E0:
    ctx->pc = 0x801044E0u;
    ctx->downcount -= 9;
    // 801044E0: lhz     r5, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_801044E4:
    ctx->pc = 0x801044E4u;
    // 801044E4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_801044E8:
    ctx->pc = 0x801044E8u;
    // 801044E8: lhz     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_801044EC:
    ctx->pc = 0x801044ECu;
    // 801044EC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_801044F0:
    ctx->pc = 0x801044F0u;
    // 801044F0: lbz     r7, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801044F4:
    ctx->pc = 0x801044F4u;
    // 801044F4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_801044F8:
    ctx->pc = 0x801044F8u;
    // 801044F8: lbz     r8, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_801044FC:
    ctx->pc = 0x801044FCu;
    // 801044FC: lbz     r9, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80104500:
    ctx->pc = 0x80104500u;
    // 80104500: bl      0x80037030
    {
            ctx->lr = 0x80104504u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80104504:
    ctx->pc = 0x80104504u;
    ctx->downcount -= 10;
    // 80104504: lfs     f1, -29780(r2)
    if (!ppc_fp_available_inline(ctx, 0x80104504u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80104508:
    ctx->pc = 0x80104508u;
    // 80104508: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8010450C:
    ctx->pc = 0x8010450Cu;
    // 8010450C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80104510:
    ctx->pc = 0x80104510u;
    // 80104510: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80104514:
    ctx->pc = 0x80104514u;
    // 80104514: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80104514u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80104518:
    ctx->pc = 0x80104518u;
    // 80104518: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8010451C:
    ctx->pc = 0x8010451Cu;
    // 8010451C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8010451Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80104520:
    ctx->pc = 0x80104520u;
    // 80104520: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80104524:
    ctx->pc = 0x80104524u;
    // 80104524: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80104528:
    ctx->pc = 0x80104528u;
    // 80104528: bl      0x80037290
    {
            ctx->lr = 0x8010452Cu;
            ctx->pc = 0x80037290u;
            return;
    }

label_8010452C:
    ctx->pc = 0x8010452Cu;
    ctx->downcount -= 2;
    // 8010452C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80104530:
    ctx->pc = 0x80104530u;
    // 80104530: bl      0x800FF500
    {
            ctx->lr = 0x80104534u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80104534:
    ctx->pc = 0x80104534u;
    ctx->downcount -= 2;
    // 80104534: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80104538:
    ctx->pc = 0x80104538u;
    // 80104538: bl      0x800078A4
    {
            ctx->lr = 0x8010453Cu;
            ctx->pc = 0x800078A4u;
            return;
    }

label_8010453C:
    ctx->pc = 0x8010453Cu;
    ctx->downcount -= 5;
    // 8010453C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104540:
    ctx->pc = 0x80104540u;
    // 80104540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80104544:
    ctx->pc = 0x80104544u;
    // 80104544: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80104548:
    ctx->pc = 0x80104548u;
    // 80104548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_8010454C:
    ctx->pc = 0x8010454Cu;
    ctx->downcount -= 8;
    // 8010454C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80104550:
    ctx->pc = 0x80104550u;
    // 80104550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80104554:
    ctx->pc = 0x80104554u;
    // 80104554: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104558:
    ctx->pc = 0x80104558u;
    // 80104558: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8010455C:
    ctx->pc = 0x8010455Cu;
    // 8010455C: lwz     r31, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80104560:
    ctx->pc = 0x80104560u;
    // 80104560: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104564:
    ctx->pc = 0x80104564u;
    // 80104564: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104568:
    ctx->pc = 0x80104568u;
    // 80104568: bl      0x800341F0
    {
            ctx->lr = 0x8010456Cu;
            ctx->pc = 0x800341F0u;
            return;
    }

label_8010456C:
    ctx->pc = 0x8010456Cu;
    ctx->downcount -= 3;
    // 8010456C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80104570:
    ctx->pc = 0x80104570u;
    // 80104570: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80104574:
    ctx->pc = 0x80104574u;
    // 80104574: bl      0x80033940
    {
            ctx->lr = 0x80104578u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80104578:
    ctx->pc = 0x80104578u;
    ctx->downcount -= 3;
    // 80104578: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8010457C:
    ctx->pc = 0x8010457Cu;
    // 8010457C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80104580:
    ctx->pc = 0x80104580u;
    // 80104580: bl      0x80033940
    {
            ctx->lr = 0x80104584u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80104584:
    ctx->pc = 0x80104584u;
    ctx->downcount -= 6;
    // 80104584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80104588:
    ctx->pc = 0x80104588u;
    // 80104588: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_8010458C:
    ctx->pc = 0x8010458Cu;
    // 8010458C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80104590:
    ctx->pc = 0x80104590u;
    // 80104590: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80104594:
    ctx->pc = 0x80104594u;
    // 80104594: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80104598:
    ctx->pc = 0x80104598u;
    // 80104598: bl      0x80034230
    {
            ctx->lr = 0x8010459Cu;
            ctx->pc = 0x80034230u;
            return;
    }

label_8010459C:
    ctx->pc = 0x8010459Cu;
    ctx->downcount -= 6;
    // 8010459C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801045A0:
    ctx->pc = 0x801045A0u;
    // 801045A0: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_801045A4:
    ctx->pc = 0x801045A4u;
    // 801045A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801045A8:
    ctx->pc = 0x801045A8u;
    // 801045A8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_801045AC:
    ctx->pc = 0x801045ACu;
    // 801045AC: li      r7, 14
    ctx->gpr[7] = (u32)(s32)(14);

label_801045B0:
    ctx->pc = 0x801045B0u;
    // 801045B0: bl      0x80034230
    {
            ctx->lr = 0x801045B4u;
            ctx->pc = 0x80034230u;
            return;
    }

label_801045B4:
    ctx->pc = 0x801045B4u;
    ctx->downcount -= 6;
    // 801045B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801045B8:
    ctx->pc = 0x801045B8u;
    // 801045B8: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_801045BC:
    ctx->pc = 0x801045BCu;
    // 801045BC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_801045C0:
    ctx->pc = 0x801045C0u;
    // 801045C0: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_801045C4:
    ctx->pc = 0x801045C4u;
    // 801045C4: li      r7, 13
    ctx->gpr[7] = (u32)(s32)(13);

label_801045C8:
    ctx->pc = 0x801045C8u;
    // 801045C8: bl      0x80034230
    {
            ctx->lr = 0x801045CCu;
            ctx->pc = 0x80034230u;
            return;
    }

label_801045CC:
    ctx->pc = 0x801045CCu;
    ctx->downcount -= 3;
    // 801045CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_801045D0:
    ctx->pc = 0x801045D0u;
    // 801045D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801045D4:
    ctx->pc = 0x801045D4u;
    // 801045D4: bl      0x80039AE0
    {
            ctx->lr = 0x801045D8u;
            ctx->pc = 0x80039AE0u;
            return;
    }

label_801045D8:
    ctx->pc = 0x801045D8u;
    ctx->downcount -= 3;
    // 801045D8: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_801045DC:
    ctx->pc = 0x801045DCu;
    // 801045DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801045E0:
    ctx->pc = 0x801045E0u;
    // 801045E0: bl      0x80039B60
    {
            ctx->lr = 0x801045E4u;
            ctx->pc = 0x80039B60u;
            return;
    }

label_801045E4:
    ctx->pc = 0x801045E4u;
    ctx->downcount -= 2;
    // 801045E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801045E8:
    ctx->pc = 0x801045E8u;
    // 801045E8: bl      0x80039C00
    {
            ctx->lr = 0x801045ECu;
            ctx->pc = 0x80039C00u;
            return;
    }

label_801045EC:
    ctx->pc = 0x801045ECu;
    ctx->downcount -= 4;
    // 801045EC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801045F0:
    ctx->pc = 0x801045F0u;
    // 801045F0: lhz     r0, -32194(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32194);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801045F4:
    ctx->pc = 0x801045F4u;
    // 801045F4: cmpwi   r0, 0
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

label_801045F8:
    ctx->pc = 0x801045F8u;
    // 801045F8: bc    12, 2, 0x8010462C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010462C;
        }
    }

label_801045FC:
    ctx->pc = 0x801045FCu;
    ctx->downcount -= 4;
    // 801045FC: addi    r4, r31, 30662
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(30662);

label_80104600:
    ctx->pc = 0x80104600u;
    // 80104600: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80104604:
    ctx->pc = 0x80104604u;
    // 80104604: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104608:
    ctx->pc = 0x80104608u;
    // 80104608: bl      0x80034900
    {
            ctx->lr = 0x8010460Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010460C:
    ctx->pc = 0x8010460Cu;
    ctx->downcount -= 4;
    // 8010460C: addi    r4, r31, 30902
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(30902);

label_80104610:
    ctx->pc = 0x80104610u;
    // 80104610: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80104614:
    ctx->pc = 0x80104614u;
    // 80104614: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104618:
    ctx->pc = 0x80104618u;
    // 80104618: bl      0x80034900
    {
            ctx->lr = 0x8010461Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010461C:
    ctx->pc = 0x8010461Cu;
    ctx->downcount -= 4;
    // 8010461C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80104620:
    ctx->pc = 0x80104620u;
    // 80104620: addi    r3, r31, 2304
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2304);

label_80104624:
    ctx->pc = 0x80104624u;
    // 80104624: lhz     r4, -32194(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32194);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104628:
    ctx->pc = 0x80104628u;
    // 80104628: bl      0x80039910
    {
            ctx->lr = 0x8010462Cu;
            ctx->pc = 0x80039910u;
            return;
    }

label_8010462C:
    ctx->pc = 0x8010462Cu;
    ctx->downcount -= 4;
    // 8010462C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80104630:
    ctx->pc = 0x80104630u;
    // 80104630: lhz     r0, -32204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32204);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104634:
    ctx->pc = 0x80104634u;
    // 80104634: cmpwi   r0, 0
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

label_80104638:
    ctx->pc = 0x80104638u;
    // 80104638: bc    12, 2, 0x8010466C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010466C;
        }
    }

label_8010463C:
    ctx->pc = 0x8010463Cu;
    ctx->downcount -= 4;
    // 8010463C: addi    r4, r31, 26240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(26240);

label_80104640:
    ctx->pc = 0x80104640u;
    // 80104640: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80104644:
    ctx->pc = 0x80104644u;
    // 80104644: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104648:
    ctx->pc = 0x80104648u;
    // 80104648: bl      0x80034900
    {
            ctx->lr = 0x8010464Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010464C:
    ctx->pc = 0x8010464Cu;
    ctx->downcount -= 4;
    // 8010464C: addi    r4, r31, 26378
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(26378);

label_80104650:
    ctx->pc = 0x80104650u;
    // 80104650: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80104654:
    ctx->pc = 0x80104654u;
    // 80104654: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104658:
    ctx->pc = 0x80104658u;
    // 80104658: bl      0x80034900
    {
            ctx->lr = 0x8010465Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010465C:
    ctx->pc = 0x8010465Cu;
    ctx->downcount -= 4;
    // 8010465C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80104660:
    ctx->pc = 0x80104660u;
    // 80104660: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80104664:
    ctx->pc = 0x80104664u;
    // 80104664: lhz     r4, -32204(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32204);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104668:
    ctx->pc = 0x80104668u;
    // 80104668: bl      0x80039910
    {
            ctx->lr = 0x8010466Cu;
            ctx->pc = 0x80039910u;
            return;
    }

label_8010466C:
    ctx->pc = 0x8010466Cu;
    ctx->downcount -= 4;
    // 8010466C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80104670:
    ctx->pc = 0x80104670u;
    // 80104670: lwz     r0, -32180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104674:
    ctx->pc = 0x80104674u;
    // 80104674: cmpwi   r0, 0
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

label_80104678:
    ctx->pc = 0x80104678u;
    // 80104678: bc    12, 2, 0x801046B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801046B4;
        }
    }

label_8010467C:
    ctx->pc = 0x8010467Cu;
    ctx->downcount -= 2;
    // 8010467C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80104680:
    ctx->pc = 0x80104680u;
    // 80104680: bl      0x80035AF0
    {
            ctx->lr = 0x80104684u;
            ctx->pc = 0x80035AF0u;
            return;
    }

label_80104684:
    ctx->pc = 0x80104684u;
    ctx->downcount -= 3;
    // 80104684: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104688:
    ctx->pc = 0x80104688u;
    // 80104688: cmpwi   r0, 2
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

label_8010468C:
    ctx->pc = 0x8010468Cu;
    // 8010468C: bc    12, 2, 0x801046A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801046A0;
        }
    }

label_80104690:
    ctx->pc = 0x80104690u;
    ctx->downcount -= 1;
    // 80104690: bc    4, 0, 0x801046B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801046B4;
        }
    }

label_80104694:
    ctx->pc = 0x80104694u;
    ctx->downcount -= 2;
    // 80104694: cmpwi   r0, 1
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

label_80104698:
    ctx->pc = 0x80104698u;
    // 80104698: bc    4, 0, 0x801046AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801046AC;
        }
    }

label_8010469C:
    ctx->pc = 0x8010469Cu;
    ctx->downcount -= 1;
    // 8010469C: b       0x801046B4
    {
            goto label_801046B4;
    }

label_801046A0:
    ctx->pc = 0x801046A0u;
    ctx->downcount -= 2;
    // 801046A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801046A4:
    ctx->pc = 0x801046A4u;
    // 801046A4: bl      0x80035AC0
    {
            ctx->lr = 0x801046A8u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_801046A8:
    ctx->pc = 0x801046A8u;
    ctx->downcount -= 1;
    // 801046A8: b       0x801046B4
    {
            goto label_801046B4;
    }

label_801046AC:
    ctx->pc = 0x801046ACu;
    ctx->downcount -= 2;
    // 801046AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801046B0:
    ctx->pc = 0x801046B0u;
    // 801046B0: bl      0x80035AC0
    {
            ctx->lr = 0x801046B4u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_801046B4:
    ctx->pc = 0x801046B4u;
    ctx->downcount -= 4;
    // 801046B4: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801046B8:
    ctx->pc = 0x801046B8u;
    // 801046B8: lhz     r0, -32196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32196);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801046BC:
    ctx->pc = 0x801046BCu;
    // 801046BC: cmpwi   r0, 0
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

label_801046C0:
    ctx->pc = 0x801046C0u;
    // 801046C0: bc    12, 2, 0x801046F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801046F8;
        }
    }

label_801046C4:
    ctx->pc = 0x801046C4u;
    ctx->downcount -= 4;
    // 801046C4: lwz     r4, -32216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801046C8:
    ctx->pc = 0x801046C8u;
    // 801046C8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_801046CC:
    ctx->pc = 0x801046CCu;
    // 801046CC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801046D0:
    ctx->pc = 0x801046D0u;
    // 801046D0: bl      0x80034900
    {
            ctx->lr = 0x801046D4u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801046D4:
    ctx->pc = 0x801046D4u;
    ctx->downcount -= 5;
    // 801046D4: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801046D8:
    ctx->pc = 0x801046D8u;
    // 801046D8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801046DC:
    ctx->pc = 0x801046DCu;
    // 801046DC: lwz     r4, -32212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801046E0:
    ctx->pc = 0x801046E0u;
    // 801046E0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801046E4:
    ctx->pc = 0x801046E4u;
    // 801046E4: bl      0x80034900
    {
            ctx->lr = 0x801046E8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801046E8:
    ctx->pc = 0x801046E8u;
    ctx->downcount -= 4;
    // 801046E8: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801046EC:
    ctx->pc = 0x801046ECu;
    // 801046EC: lwz     r3, -32208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801046F0:
    ctx->pc = 0x801046F0u;
    // 801046F0: lhz     r4, -32196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32196);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_801046F4:
    ctx->pc = 0x801046F4u;
    // 801046F4: bl      0x80039910
    {
            ctx->lr = 0x801046F8u;
            ctx->pc = 0x80039910u;
            return;
    }

label_801046F8:
    ctx->pc = 0x801046F8u;
    ctx->downcount -= 4;
    // 801046F8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_801046FC:
    ctx->pc = 0x801046FCu;
    // 801046FC: lhz     r0, -32200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32200);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104700:
    ctx->pc = 0x80104700u;
    // 80104700: cmpwi   r0, 0
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

label_80104704:
    ctx->pc = 0x80104704u;
    // 80104704: bc    12, 2, 0x8010473C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010473C;
        }
    }

label_80104708:
    ctx->pc = 0x80104708u;
    ctx->downcount -= 4;
    // 80104708: lwz     r4, -32228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8010470C:
    ctx->pc = 0x8010470Cu;
    // 8010470C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80104710:
    ctx->pc = 0x80104710u;
    // 80104710: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104714:
    ctx->pc = 0x80104714u;
    // 80104714: bl      0x80034900
    {
            ctx->lr = 0x80104718u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80104718:
    ctx->pc = 0x80104718u;
    ctx->downcount -= 5;
    // 80104718: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010471C:
    ctx->pc = 0x8010471Cu;
    // 8010471C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80104720:
    ctx->pc = 0x80104720u;
    // 80104720: lwz     r4, -32224(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104724:
    ctx->pc = 0x80104724u;
    // 80104724: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104728:
    ctx->pc = 0x80104728u;
    // 80104728: bl      0x80034900
    {
            ctx->lr = 0x8010472Cu;
            ctx->pc = 0x80034900u;
            return;
    }

label_8010472C:
    ctx->pc = 0x8010472Cu;
    ctx->downcount -= 4;
    // 8010472C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_80104730:
    ctx->pc = 0x80104730u;
    // 80104730: lwz     r3, -32220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104734:
    ctx->pc = 0x80104734u;
    // 80104734: lhz     r4, -32200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32200);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104738:
    ctx->pc = 0x80104738u;
    // 80104738: bl      0x80039910
    {
            ctx->lr = 0x8010473Cu;
            ctx->pc = 0x80039910u;
            return;
    }

label_8010473C:
    ctx->pc = 0x8010473Cu;
    ctx->downcount -= 3;
    // 8010473C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80104740:
    ctx->pc = 0x80104740u;
    // 80104740: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80104744:
    ctx->pc = 0x80104744u;
    // 80104744: bl      0x80033940
    {
            ctx->lr = 0x80104748u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80104748:
    ctx->pc = 0x80104748u;
    ctx->downcount -= 4;
    // 80104748: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010474C:
    ctx->pc = 0x8010474Cu;
    // 8010474C: lhz     r0, -32198(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32198);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104750:
    ctx->pc = 0x80104750u;
    // 80104750: cmpwi   r0, 0
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

label_80104754:
    ctx->pc = 0x80104754u;
    // 80104754: bc    12, 2, 0x80104798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104798;
        }
    }

label_80104758:
    ctx->pc = 0x80104758u;
    ctx->downcount -= 4;
    // 80104758: addi    r4, r31, 26516
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(26516);

label_8010475C:
    ctx->pc = 0x8010475Cu;
    // 8010475C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80104760:
    ctx->pc = 0x80104760u;
    // 80104760: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104764:
    ctx->pc = 0x80104764u;
    // 80104764: bl      0x80034900
    {
            ctx->lr = 0x80104768u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80104768:
    ctx->pc = 0x80104768u;
    ctx->downcount -= 4;
    // 80104768: addi    r4, r31, 27554
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(27554);

label_8010476C:
    ctx->pc = 0x8010476Cu;
    // 8010476C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80104770:
    ctx->pc = 0x80104770u;
    // 80104770: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80104774:
    ctx->pc = 0x80104774u;
    // 80104774: bl      0x80034900
    {
            ctx->lr = 0x80104778u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80104778:
    ctx->pc = 0x80104778u;
    ctx->downcount -= 4;
    // 80104778: addi    r4, r31, 29030
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(29030);

label_8010477C:
    ctx->pc = 0x8010477Cu;
    // 8010477C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80104780:
    ctx->pc = 0x80104780u;
    // 80104780: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80104784:
    ctx->pc = 0x80104784u;
    // 80104784: bl      0x80034900
    {
            ctx->lr = 0x80104788u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80104788:
    ctx->pc = 0x80104788u;
    ctx->downcount -= 4;
    // 80104788: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010478C:
    ctx->pc = 0x8010478Cu;
    // 8010478C: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80104790:
    ctx->pc = 0x80104790u;
    // 80104790: lhz     r4, -32198(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32198);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104794:
    ctx->pc = 0x80104794u;
    // 80104794: bl      0x80039910
    {
            ctx->lr = 0x80104798u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80104798:
    ctx->pc = 0x80104798u;
    ctx->downcount -= 4;
    // 80104798: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010479C:
    ctx->pc = 0x8010479Cu;
    // 8010479C: lwz     r0, -32180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801047A0:
    ctx->pc = 0x801047A0u;
    // 801047A0: cmpwi   r0, 0
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

label_801047A4:
    ctx->pc = 0x801047A4u;
    // 801047A4: bc    12, 2, 0x801047D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801047D8;
        }
    }

label_801047A8:
    ctx->pc = 0x801047A8u;
    ctx->downcount -= 3;
    // 801047A8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801047AC:
    ctx->pc = 0x801047ACu;
    // 801047AC: cmpwi   r0, 2
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

label_801047B0:
    ctx->pc = 0x801047B0u;
    // 801047B0: bc    12, 2, 0x801047C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801047C4;
        }
    }

label_801047B4:
    ctx->pc = 0x801047B4u;
    ctx->downcount -= 1;
    // 801047B4: bc    4, 0, 0x801047D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801047D8;
        }
    }

label_801047B8:
    ctx->pc = 0x801047B8u;
    ctx->downcount -= 2;
    // 801047B8: cmpwi   r0, 1
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

label_801047BC:
    ctx->pc = 0x801047BCu;
    // 801047BC: bc    4, 0, 0x801047D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801047D0;
        }
    }

label_801047C0:
    ctx->pc = 0x801047C0u;
    ctx->downcount -= 1;
    // 801047C0: b       0x801047D8
    {
            goto label_801047D8;
    }

label_801047C4:
    ctx->pc = 0x801047C4u;
    ctx->downcount -= 2;
    // 801047C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801047C8:
    ctx->pc = 0x801047C8u;
    // 801047C8: bl      0x80035AC0
    {
            ctx->lr = 0x801047CCu;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_801047CC:
    ctx->pc = 0x801047CCu;
    ctx->downcount -= 1;
    // 801047CC: b       0x801047D8
    {
            goto label_801047D8;
    }

label_801047D0:
    ctx->pc = 0x801047D0u;
    ctx->downcount -= 2;
    // 801047D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801047D4:
    ctx->pc = 0x801047D4u;
    // 801047D4: bl      0x80035AC0
    {
            ctx->lr = 0x801047D8u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_801047D8:
    ctx->pc = 0x801047D8u;
    ctx->downcount -= 4;
    // 801047D8: addi    r4, r31, 29410
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(29410);

label_801047DC:
    ctx->pc = 0x801047DCu;
    // 801047DC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_801047E0:
    ctx->pc = 0x801047E0u;
    // 801047E0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801047E4:
    ctx->pc = 0x801047E4u;
    // 801047E4: bl      0x80034900
    {
            ctx->lr = 0x801047E8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801047E8:
    ctx->pc = 0x801047E8u;
    ctx->downcount -= 4;
    // 801047E8: addi    r4, r31, 29806
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(29806);

label_801047EC:
    ctx->pc = 0x801047ECu;
    // 801047EC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_801047F0:
    ctx->pc = 0x801047F0u;
    // 801047F0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_801047F4:
    ctx->pc = 0x801047F4u;
    // 801047F4: bl      0x80034900
    {
            ctx->lr = 0x801047F8u;
            ctx->pc = 0x80034900u;
            return;
    }

label_801047F8:
    ctx->pc = 0x801047F8u;
    ctx->downcount -= 4;
    // 801047F8: addi    r4, r31, 30202
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(30202);

label_801047FC:
    ctx->pc = 0x801047FCu;
    // 801047FC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80104800:
    ctx->pc = 0x80104800u;
    // 80104800: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80104804:
    ctx->pc = 0x80104804u;
    // 80104804: bl      0x80034900
    {
            ctx->lr = 0x80104808u;
            ctx->pc = 0x80034900u;
            return;
    }

label_80104808:
    ctx->pc = 0x80104808u;
    ctx->downcount -= 4;
    // 80104808: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_8010480C:
    ctx->pc = 0x8010480Cu;
    // 8010480C: addi    r3, r31, 1568
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1568);

label_80104810:
    ctx->pc = 0x80104810u;
    // 80104810: lhz     r4, -32202(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32202);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80104814:
    ctx->pc = 0x80104814u;
    // 80104814: bl      0x80039910
    {
            ctx->lr = 0x80104818u;
            ctx->pc = 0x80039910u;
            return;
    }

label_80104818:
    ctx->pc = 0x80104818u;
    ctx->downcount -= 7;
    // 80104818: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8010481C:
    ctx->pc = 0x8010481Cu;
    // 8010481C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80104820:
    ctx->pc = 0x80104820u;
    // 80104820: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80104824:
    ctx->pc = 0x80104824u;
    // 80104824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80104828:
    ctx->pc = 0x80104828u;
    // 80104828: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8010482C:
    ctx->pc = 0x8010482Cu;
    // 8010482C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80104830:
    ctx->pc = 0x80104830u;
    ctx->downcount -= 6;
    // 80104830: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80104834:
    ctx->pc = 0x80104834u;
    // 80104834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80104838:
    ctx->pc = 0x80104838u;
    // 80104838: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010483C:
    ctx->pc = 0x8010483Cu;
    // 8010483C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80104840:
    ctx->pc = 0x80104840u;
    // 80104840: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104844:
    ctx->pc = 0x80104844u;
    // 80104844: bl      0x800FF58C
    {
            ctx->lr = 0x80104848u;
            ctx->pc = 0x800FF58Cu;
            return;
    }

label_80104848:
    ctx->pc = 0x80104848u;
    ctx->downcount -= 7;
    // 80104848: stw     r31, 7944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7944);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8010484C:
    ctx->pc = 0x8010484Cu;
    // 8010484C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80104850:
    ctx->pc = 0x80104850u;
    // 80104850: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104854:
    ctx->pc = 0x80104854u;
    // 80104854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80104858:
    ctx->pc = 0x80104858u;
    // 80104858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8010485C:
    ctx->pc = 0x8010485Cu;
    // 8010485C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80104860:
    ctx->pc = 0x80104860u;
    ctx->downcount -= 5;
    // 80104860: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80104864:
    ctx->pc = 0x80104864u;
    // 80104864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80104868:
    ctx->pc = 0x80104868u;
    // 80104868: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010486C:
    ctx->pc = 0x8010486Cu;
    // 8010486C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80104870:
    ctx->pc = 0x80104870u;
    // 80104870: bl      0x80007858
    {
            ctx->lr = 0x80104874u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80104874:
    ctx->pc = 0x80104874u;
    ctx->downcount -= 14;
    // 80104874: lfs     f1, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80104874u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80104878:
    ctx->pc = 0x80104878u;
    // 80104878: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8010487C:
    ctx->pc = 0x8010487Cu;
    // 8010487C: lfs     f3, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010487Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80104880:
    ctx->pc = 0x80104880u;
    // 80104880: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104884:
    ctx->pc = 0x80104884u;
    // 80104884: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80104884u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80104888:
    ctx->pc = 0x80104888u;
    // 80104888: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8010488C:
    ctx->pc = 0x8010488Cu;
    // 8010488C: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8010488Cu)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80104890:
    ctx->pc = 0x80104890u;
    // 80104890: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104894:
    ctx->pc = 0x80104894u;
    // 80104894: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80104898:
    ctx->pc = 0x80104898u;
    // 80104898: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8010489C:
    ctx->pc = 0x8010489Cu;
    // 8010489C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_801048A0:
    ctx->pc = 0x801048A0u;
    // 801048A0: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_801048A4:
    ctx->pc = 0x801048A4u;
    // 801048A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801048A8:
    ctx->pc = 0x801048A8u;
    // 801048A8: bl      0x80038C50
    {
            ctx->lr = 0x801048ACu;
            ctx->pc = 0x80038C50u;
            return;
    }

label_801048AC:
    ctx->pc = 0x801048ACu;
    ctx->downcount -= 2;
    // 801048AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801048B0:
    ctx->pc = 0x801048B0u;
    // 801048B0: bl      0x80039140
    {
            ctx->lr = 0x801048B4u;
            ctx->pc = 0x80039140u;
            return;
    }

label_801048B4:
    ctx->pc = 0x801048B4u;
    ctx->downcount -= 2;
    // 801048B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801048B8:
    ctx->pc = 0x801048B8u;
    // 801048B8: bl      0x80039170
    {
            ctx->lr = 0x801048BCu;
            ctx->pc = 0x80039170u;
            return;
    }

label_801048BC:
    ctx->pc = 0x801048BCu;
    ctx->downcount -= 3;
    // 801048BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801048C0:
    ctx->pc = 0x801048C0u;
    // 801048C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801048C4:
    ctx->pc = 0x801048C4u;
    // 801048C4: bl      0x800392F0
    {
            ctx->lr = 0x801048C8u;
            ctx->pc = 0x800392F0u;
            return;
    }

label_801048C8:
    ctx->pc = 0x801048C8u;
    ctx->downcount -= 4;
    // 801048C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801048CC:
    ctx->pc = 0x801048CCu;
    // 801048CC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_801048D0:
    ctx->pc = 0x801048D0u;
    // 801048D0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_801048D4:
    ctx->pc = 0x801048D4u;
    // 801048D4: bl      0x800391A0
    {
            ctx->lr = 0x801048D8u;
            ctx->pc = 0x800391A0u;
            return;
    }

label_801048D8:
    ctx->pc = 0x801048D8u;
    ctx->downcount -= 3;
    // 801048D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801048DC:
    ctx->pc = 0x801048DCu;
    // 801048DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801048E0:
    ctx->pc = 0x801048E0u;
    // 801048E0: bl      0x80039210
    {
            ctx->lr = 0x801048E4u;
            ctx->pc = 0x80039210u;
            return;
    }

label_801048E4:
    ctx->pc = 0x801048E4u;
    ctx->downcount -= 5;
    // 801048E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801048E8:
    ctx->pc = 0x801048E8u;
    // 801048E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801048EC:
    ctx->pc = 0x801048ECu;
    // 801048EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801048F0:
    ctx->pc = 0x801048F0u;
    // 801048F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801048F4:
    ctx->pc = 0x801048F4u;
    // 801048F4: bl      0x800361A0
    {
            ctx->lr = 0x801048F8u;
            ctx->pc = 0x800361A0u;
            return;
    }

label_801048F8:
    ctx->pc = 0x801048F8u;
    ctx->downcount -= 2;
    // 801048F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_801048FC:
    ctx->pc = 0x801048FCu;
    // 801048FC: bl      0x80035D60
    {
            ctx->lr = 0x80104900u;
            ctx->pc = 0x80035D60u;
            return;
    }

label_80104900:
    ctx->pc = 0x80104900u;
    ctx->downcount -= 5;
    // 80104900: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80104904:
    ctx->pc = 0x80104904u;
    // 80104904: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80104908:
    ctx->pc = 0x80104908u;
    // 80104908: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010490C:
    ctx->pc = 0x8010490Cu;
    // 8010490C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80104910:
    ctx->pc = 0x80104910u;
    // 80104910: bl      0x80035BC0
    {
            ctx->lr = 0x80104914u;
            ctx->pc = 0x80035BC0u;
            return;
    }

label_80104914:
    ctx->pc = 0x80104914u;
    ctx->downcount -= 5;
    // 80104914: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80104918:
    ctx->pc = 0x80104918u;
    // 80104918: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8010491C:
    ctx->pc = 0x8010491Cu;
    // 8010491C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80104920:
    ctx->pc = 0x80104920u;
    // 80104920: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80104924:
    ctx->pc = 0x80104924u;
    // 80104924: bl      0x80035C30
    {
            ctx->lr = 0x80104928u;
            ctx->pc = 0x80035C30u;
            return;
    }

label_80104928:
    ctx->pc = 0x80104928u;
    ctx->downcount -= 12;
    // 80104928: lbz     r7, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010492C:
    ctx->pc = 0x8010492Cu;
    // 8010492C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_80104930:
    ctx->pc = 0x80104930u;
    // 80104930: lbz     r6, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80104934:
    ctx->pc = 0x80104934u;
    // 80104934: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80104938:
    ctx->pc = 0x80104938u;
    // 80104938: lbz     r5, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8010493C:
    ctx->pc = 0x8010493Cu;
    // 8010493C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80104940:
    ctx->pc = 0x80104940u;
    // 80104940: lbz     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80104944:
    ctx->pc = 0x80104944u;
    // 80104944: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80104948:
    ctx->pc = 0x80104948u;
    // 80104948: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8010494C:
    ctx->pc = 0x8010494Cu;
    // 8010494C: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80104950:
    ctx->pc = 0x80104950u;
    // 80104950: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80104954:
    ctx->pc = 0x80104954u;
    // 80104954: bl      0x80036120
    {
            ctx->lr = 0x80104958u;
            ctx->pc = 0x80036120u;
            return;
    }

label_80104958:
    ctx->pc = 0x80104958u;
    ctx->downcount -= 8;
    // 80104958: rlwinm r0, r28, 1, 15, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0x0001FFFEu;
    }

label_8010495C:
    ctx->pc = 0x8010495Cu;
    // 8010495C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80104960:
    ctx->pc = 0x80104960u;
    // 80104960: mullw   r4, r29, r0
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_80104964:
    ctx->pc = 0x80104964u;
    // 80104964: bl      0x800460B0
    {
            ctx->lr = 0x80104968u;
            ctx->pc = 0x800460B0u;
            return;
    }

label_80104968:
    ctx->pc = 0x80104968u;
    ctx->downcount -= 3;
    // 80104968: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8010496C:
    ctx->pc = 0x8010496Cu;
    // 8010496C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80104970:
    ctx->pc = 0x80104970u;
    // 80104970: bl      0x800364F0
    {
            ctx->lr = 0x80104974u;
            ctx->pc = 0x800364F0u;
            return;
    }

label_80104974:
    ctx->pc = 0x80104974u;
    ctx->downcount -= 1;
    // 80104974: bl      0x800351B0
    {
            ctx->lr = 0x80104978u;
            ctx->pc = 0x800351B0u;
            return;
    }

label_80104978:
    ctx->pc = 0x80104978u;
    ctx->downcount -= 2;
    // 80104978: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_8010497C:
    ctx->pc = 0x8010497Cu;
    // 8010497C: bl      0x800078A4
    {
            ctx->lr = 0x80104980u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_80104980:
    ctx->pc = 0x80104980u;
    ctx->downcount -= 5;
    // 80104980: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104984:
    ctx->pc = 0x80104984u;
    // 80104984: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80104988:
    ctx->pc = 0x80104988u;
    // 80104988: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8010498C:
    ctx->pc = 0x8010498Cu;
    // 8010498C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80104990:
    ctx->pc = 0x80104990u;
    ctx->downcount -= 8;
    // 80104990: stwu     r1, -4480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-4480);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80104994:
    ctx->pc = 0x80104994u;
    // 80104994: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80104998:
    ctx->pc = 0x80104998u;
    // 80104998: stw     r0, 4484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010499C:
    ctx->pc = 0x8010499Cu;
    // 8010499C: li      r0, 4472
    ctx->gpr[0] = (u32)(s32)(4472);

label_801049A0:
    ctx->pc = 0x801049A0u;
    // 801049A0: stfd     f31, 4464(r1)
    if (!ppc_fp_available_inline(ctx, 0x801049A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4464);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_801049A4:
    ctx->pc = 0x801049A4u;
    // 801049A4: psq_stx   f31, r1, r0, 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801049A4u)) return;
    {
        u32 ea = ctx->gpr[1] + ctx->gpr[0];
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, true, 0x801049A4u);
        if (ctx->exception) return;
    }

label_801049A8:
    ctx->pc = 0x801049A8u;
    // 801049A8: addi    r11, r1, 4464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(4464);

label_801049AC:
    ctx->pc = 0x801049ACu;
    // 801049AC: bl      0x80007824
    {
            ctx->lr = 0x801049B0u;
            ctx->pc = 0x80007824u;
            return;
    }

label_801049B0:
    ctx->pc = 0x801049B0u;
    ctx->downcount -= 9;
    // 801049B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_801049B4:
    ctx->pc = 0x801049B4u;
    // 801049B4: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_801049B8:
    ctx->pc = 0x801049B8u;
    // 801049B8: stw     r0, 4360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801049BC:
    ctx->pc = 0x801049BCu;
    // 801049BC: or   r16, r4, r4
    {
        ctx->gpr[16] = ctx->gpr[4] | ctx->gpr[4];
    }

label_801049C0:
    ctx->pc = 0x801049C0u;
    // 801049C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801049C4:
    ctx->pc = 0x801049C4u;
    // 801049C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801049C8:
    ctx->pc = 0x801049C8u;
    // 801049C8: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801049CC:
    ctx->pc = 0x801049CCu;
    // 801049CC: stw     r0, 4368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801049D0:
    ctx->pc = 0x801049D0u;
    // 801049D0: bl      0x800FFF6C
    {
            ctx->lr = 0x801049D4u;
            ctx->pc = 0x800FFF6Cu;
            return;
    }

label_801049D4:
    ctx->pc = 0x801049D4u;
    ctx->downcount -= 4;
    // 801049D4: stw     r3, 4384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4384);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801049D8:
    ctx->pc = 0x801049D8u;
    // 801049D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801049DC:
    ctx->pc = 0x801049DCu;
    // 801049DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801049E0:
    ctx->pc = 0x801049E0u;
    // 801049E0: bl      0x800FFF6C
    {
            ctx->lr = 0x801049E4u;
            ctx->pc = 0x800FFF6Cu;
            return;
    }

label_801049E4:
    ctx->pc = 0x801049E4u;
    ctx->downcount -= 4;
    // 801049E4: stw     r3, 4380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801049E8:
    ctx->pc = 0x801049E8u;
    // 801049E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801049EC:
    ctx->pc = 0x801049ECu;
    // 801049EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801049F0:
    ctx->pc = 0x801049F0u;
    // 801049F0: bl      0x800FFF6C
    {
            ctx->lr = 0x801049F4u;
            ctx->pc = 0x800FFF6Cu;
            return;
    }

label_801049F4:
    ctx->pc = 0x801049F4u;
    ctx->downcount -= 4;
    // 801049F4: stw     r3, 4376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801049F8:
    ctx->pc = 0x801049F8u;
    // 801049F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_801049FC:
    ctx->pc = 0x801049FCu;
    // 801049FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80104A00:
    ctx->pc = 0x80104A00u;
    // 80104A00: bl      0x800FFF6C
    {
            ctx->lr = 0x80104A04u;
            ctx->pc = 0x800FFF6Cu;
            return;
    }

label_80104A04:
    ctx->pc = 0x80104A04u;
    ctx->downcount -= 4;
    // 80104A04: or   r14, r3, r3
    {
        ctx->gpr[14] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104A08:
    ctx->pc = 0x80104A08u;
    // 80104A08: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80104A0C:
    ctx->pc = 0x80104A0Cu;
    // 80104A0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80104A10:
    ctx->pc = 0x80104A10u;
    // 80104A10: bl      0x800FFF6C
    {
            ctx->lr = 0x80104A14u;
            ctx->pc = 0x800FFF6Cu;
            return;
    }

label_80104A14:
    ctx->pc = 0x80104A14u;
    ctx->downcount -= 75;
    // 80104A14: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80104A18:
    ctx->pc = 0x80104A18u;
    // 80104A18: addi    r24, r1, 96
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(96);

label_80104A1C:
    ctx->pc = 0x80104A1Cu;
    // 80104A1C: stw     r30, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A20:
    ctx->pc = 0x80104A20u;
    // 80104A20: addi    r4, r1, 60
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(60);

label_80104A24:
    ctx->pc = 0x80104A24u;
    // 80104A24: addi    r29, r1, 100
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(100);

label_80104A28:
    ctx->pc = 0x80104A28u;
    // 80104A28: addi    r9, r1, 64
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(64);

label_80104A2C:
    ctx->pc = 0x80104A2Cu;
    // 80104A2C: stw     r30, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A30:
    ctx->pc = 0x80104A30u;
    // 80104A30: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104A34:
    ctx->pc = 0x80104A34u;
    // 80104A34: addi    r0, r1, 52
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(52);

label_80104A38:
    ctx->pc = 0x80104A38u;
    // 80104A38: addi    r28, r1, 92
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(92);

label_80104A3C:
    ctx->pc = 0x80104A3Cu;
    // 80104A3C: addi    r27, r1, 84
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(84);

label_80104A40:
    ctx->pc = 0x80104A40u;
    // 80104A40: addi    r26, r1, 76
    ctx->gpr[26] = ctx->gpr[1] + (u32)(s32)(76);

label_80104A44:
    ctx->pc = 0x80104A44u;
    // 80104A44: addi    r25, r1, 72
    ctx->gpr[25] = ctx->gpr[1] + (u32)(s32)(72);

label_80104A48:
    ctx->pc = 0x80104A48u;
    // 80104A48: addi    r12, r1, 88
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(88);

label_80104A4C:
    ctx->pc = 0x80104A4Cu;
    // 80104A4C: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80104A50:
    ctx->pc = 0x80104A50u;
    // 80104A50: addi    r10, r1, 68
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(68);

label_80104A54:
    ctx->pc = 0x80104A54u;
    // 80104A54: addi    r8, r1, 56
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(56);

label_80104A58:
    ctx->pc = 0x80104A58u;
    // 80104A58: addi    r7, r1, 48
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(48);

label_80104A5C:
    ctx->pc = 0x80104A5Cu;
    // 80104A5C: addi    r6, r1, 40
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(40);

label_80104A60:
    ctx->pc = 0x80104A60u;
    // 80104A60: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_80104A64:
    ctx->pc = 0x80104A64u;
    // 80104A64: addi    r31, r1, 44
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(44);

label_80104A68:
    ctx->pc = 0x80104A68u;
    // 80104A68: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104A6C:
    ctx->pc = 0x80104A6Cu;
    // 80104A6C: addi    r0, r1, 32
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(32);

label_80104A70:
    ctx->pc = 0x80104A70u;
    // 80104A70: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_80104A74:
    ctx->pc = 0x80104A74u;
    // 80104A74: stw     r30, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A78:
    ctx->pc = 0x80104A78u;
    // 80104A78: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_80104A7C:
    ctx->pc = 0x80104A7Cu;
    // 80104A7C: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_80104A80:
    ctx->pc = 0x80104A80u;
    // 80104A80: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_80104A84:
    ctx->pc = 0x80104A84u;
    // 80104A84: stw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A88:
    ctx->pc = 0x80104A88u;
    // 80104A88: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_80104A8C:
    ctx->pc = 0x80104A8Cu;
    // 80104A8C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_80104A90:
    ctx->pc = 0x80104A90u;
    // 80104A90: stw     r30, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A94:
    ctx->pc = 0x80104A94u;
    // 80104A94: stw     r30, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A98:
    ctx->pc = 0x80104A98u;
    // 80104A98: stw     r30, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104A9C:
    ctx->pc = 0x80104A9Cu;
    // 80104A9C: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AA0:
    ctx->pc = 0x80104AA0u;
    // 80104AA0: stw     r30, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AA4:
    ctx->pc = 0x80104AA4u;
    // 80104AA4: stw     r30, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AA8:
    ctx->pc = 0x80104AA8u;
    // 80104AA8: stw     r30, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AAC:
    ctx->pc = 0x80104AACu;
    // 80104AAC: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AB0:
    ctx->pc = 0x80104AB0u;
    // 80104AB0: stw     r30, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AB4:
    ctx->pc = 0x80104AB4u;
    // 80104AB4: stw     r30, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AB8:
    ctx->pc = 0x80104AB8u;
    // 80104AB8: stw     r30, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104ABC:
    ctx->pc = 0x80104ABCu;
    // 80104ABC: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AC0:
    ctx->pc = 0x80104AC0u;
    // 80104AC0: stw     r30, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AC4:
    ctx->pc = 0x80104AC4u;
    // 80104AC4: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80104AC8:
    ctx->pc = 0x80104AC8u;
    // 80104AC8: lwz     r3, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104ACC:
    ctx->pc = 0x80104ACCu;
    // 80104ACC: stw     r29, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80104AD0:
    ctx->pc = 0x80104AD0u;
    // 80104AD0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104AD4:
    ctx->pc = 0x80104AD4u;
    // 80104AD4: stw     r28, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80104AD8:
    ctx->pc = 0x80104AD8u;
    // 80104AD8: stw     r29, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80104ADC:
    ctx->pc = 0x80104ADCu;
    // 80104ADC: stw     r27, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_80104AE0:
    ctx->pc = 0x80104AE0u;
    // 80104AE0: stw     r26, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_80104AE4:
    ctx->pc = 0x80104AE4u;
    // 80104AE4: stw     r25, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_80104AE8:
    ctx->pc = 0x80104AE8u;
    // 80104AE8: stw     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80104AEC:
    ctx->pc = 0x80104AECu;
    // 80104AEC: stw     r24, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_80104AF0:
    ctx->pc = 0x80104AF0u;
    // 80104AF0: stw     r24, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_80104AF4:
    ctx->pc = 0x80104AF4u;
    // 80104AF4: stw     r12, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80104AF8:
    ctx->pc = 0x80104AF8u;
    // 80104AF8: stw     r11, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80104AFC:
    ctx->pc = 0x80104AFCu;
    // 80104AFC: stw     r24, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_80104B00:
    ctx->pc = 0x80104B00u;
    // 80104B00: stw     r24, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_80104B04:
    ctx->pc = 0x80104B04u;
    // 80104B04: stw     r10, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80104B08:
    ctx->pc = 0x80104B08u;
    // 80104B08: stw     r9, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80104B0C:
    ctx->pc = 0x80104B0Cu;
    // 80104B0C: stw     r8, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80104B10:
    ctx->pc = 0x80104B10u;
    // 80104B10: stw     r9, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80104B14:
    ctx->pc = 0x80104B14u;
    // 80104B14: stw     r7, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80104B18:
    ctx->pc = 0x80104B18u;
    // 80104B18: stw     r6, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104B1C:
    ctx->pc = 0x80104B1Cu;
    // 80104B1C: stw     r5, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80104B20:
    ctx->pc = 0x80104B20u;
    // 80104B20: stw     r9, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80104B24:
    ctx->pc = 0x80104B24u;
    // 80104B24: stw     r4, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104B28:
    ctx->pc = 0x80104B28u;
    // 80104B28: stw     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104B2C:
    ctx->pc = 0x80104B2Cu;
    // 80104B2C: stw     r31, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80104B30:
    ctx->pc = 0x80104B30u;
    // 80104B30: stw     r4, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104B34:
    ctx->pc = 0x80104B34u;
    // 80104B34: stw     r4, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104B38:
    ctx->pc = 0x80104B38u;
    // 80104B38: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104B3C:
    ctx->pc = 0x80104B3Cu;
    // 80104B3C: bc    12, 2, 0x80104B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104B64;
        }
    }

label_80104B40:
    ctx->pc = 0x80104B40u;
    ctx->downcount -= 5;
    // 80104B40: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104B44:
    ctx->pc = 0x80104B44u;
    // 80104B44: addi    r5, r1, 3796
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(3796);

label_80104B48:
    ctx->pc = 0x80104B48u;
    // 80104B48: addi    r4, r15, -4
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104B4C:
    ctx->pc = 0x80104B4Cu;
    // 80104B4C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104B50:
    loop_80104B50(ctx);
    if (ctx->pc == 0x80104B64u) goto label_80104B64;
    return;
label_80104B54:
    ctx->pc = 0x80104B54u;
    // 80104B54: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80104B58:
    ctx->pc = 0x80104B58u;
    // 80104B58: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104B5C:
    ctx->pc = 0x80104B5Cu;
    // 80104B5C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80104B60:
    // 80104B60: bc    16, 0, 0x80104B50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104B50u;
                return;
            }
            goto label_80104B50;
        }
    }

label_80104B64:
    ctx->pc = 0x80104B64u;
    ctx->downcount -= 3;
    // 80104B64: lwz     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104B68:
    ctx->pc = 0x80104B68u;
    // 80104B68: cmpwi   r0, 0
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

label_80104B6C:
    ctx->pc = 0x80104B6Cu;
    // 80104B6C: bc    12, 2, 0x80104C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104C0C;
        }
    }

label_80104B70:
    ctx->pc = 0x80104B70u;
    ctx->downcount -= 11;
    // 80104B70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80104B74:
    ctx->pc = 0x80104B74u;
    // 80104B74: addi    r3, r1, 3800
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104B78:
    ctx->pc = 0x80104B78u;
    // 80104B78: mulli   r4, r0, 80
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104B7C:
    ctx->pc = 0x80104B7Cu;
    // 80104B7C: addi    r5, r15, -4
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104B80:
    ctx->pc = 0x80104B80u;
    // 80104B80: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104B84:
    ctx->pc = 0x80104B84u;
    // 80104B84: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80104B88:
    ctx->pc = 0x80104B88u;
    // 80104B88: addi    r6, r3, -4
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-4);

label_80104B8C:
    ctx->pc = 0x80104B8Cu;
    // 80104B8C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104B90:
    loop_80104B90(ctx);
    if (ctx->pc == 0x80104BA4u) goto label_80104BA4;
    return;
label_80104B94:
    ctx->pc = 0x80104B94u;
    // 80104B94: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_80104B98:
    ctx->pc = 0x80104B98u;
    // 80104B98: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104B9C:
    ctx->pc = 0x80104B9Cu;
    // 80104B9C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80104BA0:
    // 80104BA0: bc    16, 0, 0x80104B90
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104B90u;
                return;
            }
            goto label_80104B90;
        }
    }

label_80104BA4:
    ctx->pc = 0x80104BA4u;
    ctx->downcount -= 15;
    // 80104BA4: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104BA8:
    ctx->pc = 0x80104BA8u;
    // 80104BA8: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_80104BAC:
    ctx->pc = 0x80104BACu;
    // 80104BAC: rlwimi r6, r0, 26, 0, 5
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 26u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0xFC000000u) | (rot & 0xFC000000u);
    }

label_80104BB0:
    ctx->pc = 0x80104BB0u;
    // 80104BB0: lis     r4, -32666
    ctx->gpr[4] = ((u32)(s32)(-32666) << 16);

label_80104BB4:
    ctx->pc = 0x80104BB4u;
    // 80104BB4: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104BB8:
    ctx->pc = 0x80104BB8u;
    // 80104BB8: rlwinm r5, r6, 6, 26, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0x0000003Fu;
    }

label_80104BBC:
    ctx->pc = 0x80104BBCu;
    // 80104BBC: addi    r4, r4, -18032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18032);

label_80104BC0:
    ctx->pc = 0x80104BC0u;
    // 80104BC0: lwz     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104BC4:
    ctx->pc = 0x80104BC4u;
    // 80104BC4: lbzx    r5, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104BC8:
    ctx->pc = 0x80104BC8u;
    // 80104BC8: rlwinm r0, r0, 6, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80104BCC:
    ctx->pc = 0x80104BCCu;
    // 80104BCC: lbzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80104BD0:
    ctx->pc = 0x80104BD0u;
    // 80104BD0: rlwinm r0, r6, 18, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0x0000001Fu;
    }

label_80104BD4:
    ctx->pc = 0x80104BD4u;
    // 80104BD4: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80104BD8:
    ctx->pc = 0x80104BD8u;
    // 80104BD8: add.   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80104BDC:
    ctx->pc = 0x80104BDCu;
    // 80104BDC: bc    4, 0, 0x80104BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104BEC;
        }
    }

label_80104BE0:
    ctx->pc = 0x80104BE0u;
    ctx->downcount -= 3;
    // 80104BE0: rlwinm r0, r6, 0, 18, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFF83FFFu;
    }

label_80104BE4:
    ctx->pc = 0x80104BE4u;
    // 80104BE4: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104BE8:
    ctx->pc = 0x80104BE8u;
    // 80104BE8: b       0x80104C0C
    {
            goto label_80104C0C;
    }

label_80104BEC:
    ctx->pc = 0x80104BECu;
    ctx->downcount -= 2;
    // 80104BEC: cmpwi   r0, 7
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

label_80104BF0:
    ctx->pc = 0x80104BF0u;
    // 80104BF0: bc    4, 1, 0x80104C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104C04;
        }
    }

label_80104BF4:
    ctx->pc = 0x80104BF4u;
    ctx->downcount -= 4;
    // 80104BF4: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80104BF8:
    ctx->pc = 0x80104BF8u;
    // 80104BF8: rlwimi r6, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104BFC:
    ctx->pc = 0x80104BFCu;
    // 80104BFC: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104C00:
    ctx->pc = 0x80104C00u;
    // 80104C00: b       0x80104C0C
    {
            goto label_80104C0C;
    }

label_80104C04:
    ctx->pc = 0x80104C04u;
    ctx->downcount -= 2;
    // 80104C04: rlwimi r6, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104C08:
    ctx->pc = 0x80104C08u;
    // 80104C08: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104C0C:
    ctx->pc = 0x80104C0Cu;
    ctx->downcount -= 3;
    // 80104C0C: lwz     r0, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104C10:
    ctx->pc = 0x80104C10u;
    // 80104C10: cmpwi   r0, 0
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

label_80104C14:
    ctx->pc = 0x80104C14u;
    // 80104C14: bc    12, 2, 0x80104CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104CD4;
        }
    }

label_80104C18:
    ctx->pc = 0x80104C18u;
    ctx->downcount -= 11;
    // 80104C18: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80104C1C:
    ctx->pc = 0x80104C1Cu;
    // 80104C1C: addi    r6, r1, 3800
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104C20:
    ctx->pc = 0x80104C20u;
    // 80104C20: mulli   r3, r0, 80
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104C24:
    ctx->pc = 0x80104C24u;
    // 80104C24: addi    r4, r15, -4
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104C28:
    ctx->pc = 0x80104C28u;
    // 80104C28: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104C2C:
    ctx->pc = 0x80104C2Cu;
    // 80104C2C: add   r6, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80104C30:
    ctx->pc = 0x80104C30u;
    // 80104C30: addi    r5, r6, -4
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4);

label_80104C34:
    ctx->pc = 0x80104C34u;
    // 80104C34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104C38:
    loop_80104C38(ctx);
    if (ctx->pc == 0x80104C4Cu) goto label_80104C4C;
    return;
label_80104C3C:
    ctx->pc = 0x80104C3Cu;
    // 80104C3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80104C40:
    ctx->pc = 0x80104C40u;
    // 80104C40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104C44:
    ctx->pc = 0x80104C44u;
    // 80104C44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80104C48:
    // 80104C48: bc    16, 0, 0x80104C38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104C38u;
                return;
            }
            goto label_80104C38;
        }
    }

label_80104C4C:
    ctx->pc = 0x80104C4Cu;
    ctx->downcount -= 4;
    // 80104C4C: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104C50:
    ctx->pc = 0x80104C50u;
    // 80104C50: rlwinm r3, r4, 17, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 17u) & 0x0000001Fu;
    }

label_80104C54:
    ctx->pc = 0x80104C54u;
    // 80104C54: addic.  r0, r3, 2
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(2);
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

label_80104C58:
    ctx->pc = 0x80104C58u;
    // 80104C58: bc    4, 0, 0x80104C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104C68;
        }
    }

label_80104C5C:
    ctx->pc = 0x80104C5Cu;
    ctx->downcount -= 3;
    // 80104C5C: rlwinm r0, r4, 0, 17, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFF07FFFu;
    }

label_80104C60:
    ctx->pc = 0x80104C60u;
    // 80104C60: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104C64:
    ctx->pc = 0x80104C64u;
    // 80104C64: b       0x80104C88
    {
            goto label_80104C88;
    }

label_80104C68:
    ctx->pc = 0x80104C68u;
    ctx->downcount -= 2;
    // 80104C68: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104C6C:
    ctx->pc = 0x80104C6Cu;
    // 80104C6C: bc    4, 1, 0x80104C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104C80;
        }
    }

label_80104C70:
    ctx->pc = 0x80104C70u;
    ctx->downcount -= 4;
    // 80104C70: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_80104C74:
    ctx->pc = 0x80104C74u;
    // 80104C74: rlwimi r4, r0, 15, 12, 16
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 15u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x000F8000u) | (rot & 0x000F8000u);
    }

label_80104C78:
    ctx->pc = 0x80104C78u;
    // 80104C78: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104C7C:
    ctx->pc = 0x80104C7Cu;
    // 80104C7C: b       0x80104C88
    {
            goto label_80104C88;
    }

label_80104C80:
    ctx->pc = 0x80104C80u;
    ctx->downcount -= 2;
    // 80104C80: rlwimi r4, r0, 15, 12, 16
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 15u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x000F8000u) | (rot & 0x000F8000u);
    }

label_80104C84:
    ctx->pc = 0x80104C84u;
    // 80104C84: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104C88:
    ctx->pc = 0x80104C88u;
    ctx->downcount -= 4;
    // 80104C88: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104C8C:
    ctx->pc = 0x80104C8Cu;
    // 80104C8C: rlwinm r3, r4, 18, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x0000001Fu;
    }

label_80104C90:
    ctx->pc = 0x80104C90u;
    // 80104C90: addic.  r0, r3, 2
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(2);
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

label_80104C94:
    ctx->pc = 0x80104C94u;
    // 80104C94: bc    4, 0, 0x80104CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104CA4;
        }
    }

label_80104C98:
    ctx->pc = 0x80104C98u;
    ctx->downcount -= 3;
    // 80104C98: rlwinm r0, r4, 0, 18, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFF83FFFu;
    }

label_80104C9C:
    ctx->pc = 0x80104C9Cu;
    // 80104C9C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104CA0:
    ctx->pc = 0x80104CA0u;
    // 80104CA0: b       0x80104CC4
    {
            goto label_80104CC4;
    }

label_80104CA4:
    ctx->pc = 0x80104CA4u;
    ctx->downcount -= 2;
    // 80104CA4: cmpwi   r0, 7
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

label_80104CA8:
    ctx->pc = 0x80104CA8u;
    // 80104CA8: bc    4, 1, 0x80104CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104CBC;
        }
    }

label_80104CAC:
    ctx->pc = 0x80104CACu;
    ctx->downcount -= 4;
    // 80104CAC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80104CB0:
    ctx->pc = 0x80104CB0u;
    // 80104CB0: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104CB4:
    ctx->pc = 0x80104CB4u;
    // 80104CB4: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104CB8:
    ctx->pc = 0x80104CB8u;
    // 80104CB8: b       0x80104CC4
    {
            goto label_80104CC4;
    }

label_80104CBC:
    ctx->pc = 0x80104CBCu;
    ctx->downcount -= 2;
    // 80104CBC: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104CC0:
    ctx->pc = 0x80104CC0u;
    // 80104CC0: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104CC4:
    ctx->pc = 0x80104CC4u;
    ctx->downcount -= 4;
    // 80104CC4: lhz     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104CC8:
    ctx->pc = 0x80104CC8u;
    // 80104CC8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80104CCC:
    ctx->pc = 0x80104CCCu;
    // 80104CCC: rlwimi r0, r3, 11, 16, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 11u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000F800u) | (rot & 0x0000F800u);
    }

label_80104CD0:
    ctx->pc = 0x80104CD0u;
    // 80104CD0: sth     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80104CD4:
    ctx->pc = 0x80104CD4u;
    ctx->downcount -= 3;
    // 80104CD4: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104CD8:
    ctx->pc = 0x80104CD8u;
    // 80104CD8: cmpwi   r0, 0
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

label_80104CDC:
    ctx->pc = 0x80104CDCu;
    // 80104CDC: bc    12, 2, 0x80104D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104D9C;
        }
    }

label_80104CE0:
    ctx->pc = 0x80104CE0u;
    ctx->downcount -= 11;
    // 80104CE0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80104CE4:
    ctx->pc = 0x80104CE4u;
    // 80104CE4: addi    r6, r1, 3800
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104CE8:
    ctx->pc = 0x80104CE8u;
    // 80104CE8: mulli   r3, r0, 80
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104CEC:
    ctx->pc = 0x80104CECu;
    // 80104CEC: addi    r4, r15, -4
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104CF0:
    ctx->pc = 0x80104CF0u;
    // 80104CF0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104CF4:
    ctx->pc = 0x80104CF4u;
    // 80104CF4: add   r6, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80104CF8:
    ctx->pc = 0x80104CF8u;
    // 80104CF8: addi    r5, r6, -4
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4);

label_80104CFC:
    ctx->pc = 0x80104CFCu;
    // 80104CFC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104D00:
    loop_80104D00(ctx);
    if (ctx->pc == 0x80104D14u) goto label_80104D14;
    return;
label_80104D04:
    ctx->pc = 0x80104D04u;
    // 80104D04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80104D08:
    ctx->pc = 0x80104D08u;
    // 80104D08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104D0C:
    ctx->pc = 0x80104D0Cu;
    // 80104D0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80104D10:
    // 80104D10: bc    16, 0, 0x80104D00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104D00u;
                return;
            }
            goto label_80104D00;
        }
    }

label_80104D14:
    ctx->pc = 0x80104D14u;
    ctx->downcount -= 4;
    // 80104D14: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104D18:
    ctx->pc = 0x80104D18u;
    // 80104D18: rlwinm r3, r4, 17, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 17u) & 0x0000001Fu;
    }

label_80104D1C:
    ctx->pc = 0x80104D1Cu;
    // 80104D1C: addic.  r0, r3, -2
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-2);
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

label_80104D20:
    ctx->pc = 0x80104D20u;
    // 80104D20: bc    4, 0, 0x80104D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104D30;
        }
    }

label_80104D24:
    ctx->pc = 0x80104D24u;
    ctx->downcount -= 3;
    // 80104D24: rlwinm r0, r4, 0, 17, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFF07FFFu;
    }

label_80104D28:
    ctx->pc = 0x80104D28u;
    // 80104D28: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104D2C:
    ctx->pc = 0x80104D2Cu;
    // 80104D2C: b       0x80104D50
    {
            goto label_80104D50;
    }

label_80104D30:
    ctx->pc = 0x80104D30u;
    ctx->downcount -= 2;
    // 80104D30: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104D34:
    ctx->pc = 0x80104D34u;
    // 80104D34: bc    4, 1, 0x80104D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104D48;
        }
    }

label_80104D38:
    ctx->pc = 0x80104D38u;
    ctx->downcount -= 4;
    // 80104D38: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_80104D3C:
    ctx->pc = 0x80104D3Cu;
    // 80104D3C: rlwimi r4, r0, 15, 12, 16
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 15u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x000F8000u) | (rot & 0x000F8000u);
    }

label_80104D40:
    ctx->pc = 0x80104D40u;
    // 80104D40: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104D44:
    ctx->pc = 0x80104D44u;
    // 80104D44: b       0x80104D50
    {
            goto label_80104D50;
    }

label_80104D48:
    ctx->pc = 0x80104D48u;
    ctx->downcount -= 2;
    // 80104D48: rlwimi r4, r0, 15, 12, 16
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 15u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x000F8000u) | (rot & 0x000F8000u);
    }

label_80104D4C:
    ctx->pc = 0x80104D4Cu;
    // 80104D4C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104D50:
    ctx->pc = 0x80104D50u;
    ctx->downcount -= 4;
    // 80104D50: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104D54:
    ctx->pc = 0x80104D54u;
    // 80104D54: rlwinm r3, r4, 18, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x0000001Fu;
    }

label_80104D58:
    ctx->pc = 0x80104D58u;
    // 80104D58: addic.  r0, r3, -2
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-2);
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

label_80104D5C:
    ctx->pc = 0x80104D5Cu;
    // 80104D5C: bc    4, 0, 0x80104D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104D6C;
        }
    }

label_80104D60:
    ctx->pc = 0x80104D60u;
    ctx->downcount -= 3;
    // 80104D60: rlwinm r0, r4, 0, 18, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFF83FFFu;
    }

label_80104D64:
    ctx->pc = 0x80104D64u;
    // 80104D64: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104D68:
    ctx->pc = 0x80104D68u;
    // 80104D68: b       0x80104D8C
    {
            goto label_80104D8C;
    }

label_80104D6C:
    ctx->pc = 0x80104D6Cu;
    ctx->downcount -= 2;
    // 80104D6C: cmpwi   r0, 7
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

label_80104D70:
    ctx->pc = 0x80104D70u;
    // 80104D70: bc    4, 1, 0x80104D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104D84;
        }
    }

label_80104D74:
    ctx->pc = 0x80104D74u;
    ctx->downcount -= 4;
    // 80104D74: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80104D78:
    ctx->pc = 0x80104D78u;
    // 80104D78: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104D7C:
    ctx->pc = 0x80104D7Cu;
    // 80104D7C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104D80:
    ctx->pc = 0x80104D80u;
    // 80104D80: b       0x80104D8C
    {
            goto label_80104D8C;
    }

label_80104D84:
    ctx->pc = 0x80104D84u;
    ctx->downcount -= 2;
    // 80104D84: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104D88:
    ctx->pc = 0x80104D88u;
    // 80104D88: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104D8C:
    ctx->pc = 0x80104D8Cu;
    ctx->downcount -= 4;
    // 80104D8C: lhz     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104D90:
    ctx->pc = 0x80104D90u;
    // 80104D90: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80104D94:
    ctx->pc = 0x80104D94u;
    // 80104D94: rlwimi r0, r3, 11, 16, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 11u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000F800u) | (rot & 0x0000F800u);
    }

label_80104D98:
    ctx->pc = 0x80104D98u;
    // 80104D98: sth     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80104D9C:
    ctx->pc = 0x80104D9Cu;
    ctx->downcount -= 3;
    // 80104D9C: lwz     r0, 16(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104DA0:
    ctx->pc = 0x80104DA0u;
    // 80104DA0: cmpwi   r0, 0
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

label_80104DA4:
    ctx->pc = 0x80104DA4u;
    // 80104DA4: bc    12, 2, 0x80104E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104E5C;
        }
    }

label_80104DA8:
    ctx->pc = 0x80104DA8u;
    ctx->downcount -= 11;
    // 80104DA8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80104DAC:
    ctx->pc = 0x80104DACu;
    // 80104DAC: addi    r3, r1, 3800
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104DB0:
    ctx->pc = 0x80104DB0u;
    // 80104DB0: mulli   r4, r0, 80
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104DB4:
    ctx->pc = 0x80104DB4u;
    // 80104DB4: addi    r5, r15, -4
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104DB8:
    ctx->pc = 0x80104DB8u;
    // 80104DB8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104DBC:
    ctx->pc = 0x80104DBCu;
    // 80104DBC: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80104DC0:
    ctx->pc = 0x80104DC0u;
    // 80104DC0: addi    r6, r3, -4
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-4);

label_80104DC4:
    ctx->pc = 0x80104DC4u;
    // 80104DC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104DC8:
    loop_80104DC8(ctx);
    if (ctx->pc == 0x80104DDCu) goto label_80104DDC;
    return;
label_80104DCC:
    ctx->pc = 0x80104DCCu;
    // 80104DCC: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_80104DD0:
    ctx->pc = 0x80104DD0u;
    // 80104DD0: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104DD4:
    ctx->pc = 0x80104DD4u;
    // 80104DD4: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80104DD8:
    // 80104DD8: bc    16, 0, 0x80104DC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104DC8u;
                return;
            }
            goto label_80104DC8;
        }
    }

label_80104DDC:
    ctx->pc = 0x80104DDCu;
    ctx->downcount -= 21;
    // 80104DDC: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80104DE0:
    ctx->pc = 0x80104DE0u;
    // 80104DE0: lis     r5, -32666
    ctx->gpr[5] = ((u32)(s32)(-32666) << 16);

label_80104DE4:
    ctx->pc = 0x80104DE4u;
    // 80104DE4: li      r4, 49
    ctx->gpr[4] = (u32)(s32)(49);

label_80104DE8:
    ctx->pc = 0x80104DE8u;
    // 80104DE8: rlwinm r6, r7, 26, 27, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 26u) & 0x0000001Fu;
    }

label_80104DEC:
    ctx->pc = 0x80104DECu;
    // 80104DEC: addi    r5, r5, -18032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18032);

label_80104DF0:
    ctx->pc = 0x80104DF0u;
    // 80104DF0: addi    r0, r6, -2
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-2);

label_80104DF4:
    ctx->pc = 0x80104DF4u;
    // 80104DF4: rlwimi r7, r0, 6, 21, 25
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 6u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000007C0u) | (rot & 0x000007C0u);
    }

label_80104DF8:
    ctx->pc = 0x80104DF8u;
    // 80104DF8: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80104DFC:
    ctx->pc = 0x80104DFCu;
    // 80104DFC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104E00:
    ctx->pc = 0x80104E00u;
    // 80104E00: rlwimi r0, r4, 26, 0, 5
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 26u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFC000000u) | (rot & 0xFC000000u);
    }

label_80104E04:
    ctx->pc = 0x80104E04u;
    // 80104E04: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104E08:
    ctx->pc = 0x80104E08u;
    // 80104E08: rlwinm r0, r0, 6, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80104E0C:
    ctx->pc = 0x80104E0Cu;
    // 80104E0C: lbzx    r6, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80104E10:
    ctx->pc = 0x80104E10u;
    // 80104E10: lwz     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104E14:
    ctx->pc = 0x80104E14u;
    // 80104E14: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104E18:
    ctx->pc = 0x80104E18u;
    // 80104E18: rlwinm r0, r0, 6, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80104E1C:
    ctx->pc = 0x80104E1Cu;
    // 80104E1C: lbzx    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104E20:
    ctx->pc = 0x80104E20u;
    // 80104E20: rlwinm r0, r4, 18, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x0000001Fu;
    }

label_80104E24:
    ctx->pc = 0x80104E24u;
    // 80104E24: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80104E28:
    ctx->pc = 0x80104E28u;
    // 80104E28: add.   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80104E2C:
    ctx->pc = 0x80104E2Cu;
    // 80104E2C: bc    4, 0, 0x80104E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104E3C;
        }
    }

label_80104E30:
    ctx->pc = 0x80104E30u;
    ctx->downcount -= 3;
    // 80104E30: rlwinm r0, r4, 0, 18, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFF83FFFu;
    }

label_80104E34:
    ctx->pc = 0x80104E34u;
    // 80104E34: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104E38:
    ctx->pc = 0x80104E38u;
    // 80104E38: b       0x80104E5C
    {
            goto label_80104E5C;
    }

label_80104E3C:
    ctx->pc = 0x80104E3Cu;
    ctx->downcount -= 2;
    // 80104E3C: cmpwi   r0, 7
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

label_80104E40:
    ctx->pc = 0x80104E40u;
    // 80104E40: bc    4, 1, 0x80104E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104E54;
        }
    }

label_80104E44:
    ctx->pc = 0x80104E44u;
    ctx->downcount -= 4;
    // 80104E44: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80104E48:
    ctx->pc = 0x80104E48u;
    // 80104E48: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104E4C:
    ctx->pc = 0x80104E4Cu;
    // 80104E4C: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104E50:
    ctx->pc = 0x80104E50u;
    // 80104E50: b       0x80104E5C
    {
            goto label_80104E5C;
    }

label_80104E54:
    ctx->pc = 0x80104E54u;
    ctx->downcount -= 2;
    // 80104E54: rlwimi r4, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104E58:
    ctx->pc = 0x80104E58u;
    // 80104E58: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104E5C:
    ctx->pc = 0x80104E5Cu;
    ctx->downcount -= 3;
    // 80104E5C: lwz     r0, 20(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104E60:
    ctx->pc = 0x80104E60u;
    // 80104E60: cmpwi   r0, 0
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

label_80104E64:
    ctx->pc = 0x80104E64u;
    // 80104E64: bc    12, 2, 0x80104F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104F04;
        }
    }

label_80104E68:
    ctx->pc = 0x80104E68u;
    ctx->downcount -= 11;
    // 80104E68: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80104E6C:
    ctx->pc = 0x80104E6Cu;
    // 80104E6C: addi    r3, r1, 3800
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104E70:
    ctx->pc = 0x80104E70u;
    // 80104E70: mulli   r4, r0, 80
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104E74:
    ctx->pc = 0x80104E74u;
    // 80104E74: addi    r5, r15, -4
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104E78:
    ctx->pc = 0x80104E78u;
    // 80104E78: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104E7C:
    ctx->pc = 0x80104E7Cu;
    // 80104E7C: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80104E80:
    ctx->pc = 0x80104E80u;
    // 80104E80: addi    r6, r3, -4
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-4);

label_80104E84:
    ctx->pc = 0x80104E84u;
    // 80104E84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104E88:
    loop_80104E88(ctx);
    if (ctx->pc == 0x80104E9Cu) goto label_80104E9C;
    return;
label_80104E8C:
    ctx->pc = 0x80104E8Cu;
    // 80104E8C: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_80104E90:
    ctx->pc = 0x80104E90u;
    // 80104E90: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80104E94:
    ctx->pc = 0x80104E94u;
    // 80104E94: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80104E98:
    // 80104E98: bc    16, 0, 0x80104E88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104E88u;
                return;
            }
            goto label_80104E88;
        }
    }

label_80104E9C:
    ctx->pc = 0x80104E9Cu;
    ctx->downcount -= 15;
    // 80104E9C: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80104EA0:
    ctx->pc = 0x80104EA0u;
    // 80104EA0: li      r0, 26
    ctx->gpr[0] = (u32)(s32)(26);

label_80104EA4:
    ctx->pc = 0x80104EA4u;
    // 80104EA4: rlwimi r6, r0, 26, 0, 5
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 26u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0xFC000000u) | (rot & 0xFC000000u);
    }

label_80104EA8:
    ctx->pc = 0x80104EA8u;
    // 80104EA8: lis     r4, -32666
    ctx->gpr[4] = ((u32)(s32)(-32666) << 16);

label_80104EAC:
    ctx->pc = 0x80104EACu;
    // 80104EAC: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104EB0:
    ctx->pc = 0x80104EB0u;
    // 80104EB0: rlwinm r5, r6, 6, 26, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0x0000003Fu;
    }

label_80104EB4:
    ctx->pc = 0x80104EB4u;
    // 80104EB4: addi    r4, r4, -18032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18032);

label_80104EB8:
    ctx->pc = 0x80104EB8u;
    // 80104EB8: lwz     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104EBC:
    ctx->pc = 0x80104EBCu;
    // 80104EBC: lbzx    r5, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80104EC0:
    ctx->pc = 0x80104EC0u;
    // 80104EC0: rlwinm r0, r0, 6, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80104EC4:
    ctx->pc = 0x80104EC4u;
    // 80104EC4: lbzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80104EC8:
    ctx->pc = 0x80104EC8u;
    // 80104EC8: rlwinm r0, r6, 18, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0x0000001Fu;
    }

label_80104ECC:
    ctx->pc = 0x80104ECCu;
    // 80104ECC: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80104ED0:
    ctx->pc = 0x80104ED0u;
    // 80104ED0: add.   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80104ED4:
    ctx->pc = 0x80104ED4u;
    // 80104ED4: bc    4, 0, 0x80104EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104EE4;
        }
    }

label_80104ED8:
    ctx->pc = 0x80104ED8u;
    ctx->downcount -= 3;
    // 80104ED8: rlwinm r0, r6, 0, 18, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFF83FFFu;
    }

label_80104EDC:
    ctx->pc = 0x80104EDCu;
    // 80104EDC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80104EE0:
    ctx->pc = 0x80104EE0u;
    // 80104EE0: b       0x80104F04
    {
            goto label_80104F04;
    }

label_80104EE4:
    ctx->pc = 0x80104EE4u;
    ctx->downcount -= 2;
    // 80104EE4: cmpwi   r0, 7
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

label_80104EE8:
    ctx->pc = 0x80104EE8u;
    // 80104EE8: bc    4, 1, 0x80104EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104EFC;
        }
    }

label_80104EEC:
    ctx->pc = 0x80104EECu;
    ctx->downcount -= 4;
    // 80104EEC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80104EF0:
    ctx->pc = 0x80104EF0u;
    // 80104EF0: rlwimi r6, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104EF4:
    ctx->pc = 0x80104EF4u;
    // 80104EF4: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104EF8:
    ctx->pc = 0x80104EF8u;
    // 80104EF8: b       0x80104F04
    {
            goto label_80104F04;
    }

label_80104EFC:
    ctx->pc = 0x80104EFCu;
    ctx->downcount -= 2;
    // 80104EFC: rlwimi r6, r0, 14, 13, 17
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 14u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x0007C000u) | (rot & 0x0007C000u);
    }

label_80104F00:
    ctx->pc = 0x80104F00u;
    // 80104F00: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80104F04:
    ctx->pc = 0x80104F04u;
    ctx->downcount -= 3;
    // 80104F04: lwz     r0, 24(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104F08:
    ctx->pc = 0x80104F08u;
    // 80104F08: cmpwi   r0, 0
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

label_80104F0C:
    ctx->pc = 0x80104F0Cu;
    // 80104F0C: bc    12, 2, 0x80104F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80104F54;
        }
    }

label_80104F10:
    ctx->pc = 0x80104F10u;
    ctx->downcount -= 11;
    // 80104F10: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80104F14:
    ctx->pc = 0x80104F14u;
    // 80104F14: addi    r6, r1, 3800
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104F18:
    ctx->pc = 0x80104F18u;
    // 80104F18: mulli   r3, r0, 80
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_80104F1C:
    ctx->pc = 0x80104F1Cu;
    // 80104F1C: addi    r4, r15, -4
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(-4);

label_80104F20:
    ctx->pc = 0x80104F20u;
    // 80104F20: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80104F24:
    ctx->pc = 0x80104F24u;
    // 80104F24: add   r6, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80104F28:
    ctx->pc = 0x80104F28u;
    // 80104F28: addi    r5, r6, -4
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4);

label_80104F2C:
    ctx->pc = 0x80104F2Cu;
    // 80104F2C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80104F30:
    loop_80104F30(ctx);
    if (ctx->pc == 0x80104F44u) goto label_80104F44;
    return;
label_80104F34:
    ctx->pc = 0x80104F34u;
    // 80104F34: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80104F38:
    ctx->pc = 0x80104F38u;
    // 80104F38: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104F3C:
    ctx->pc = 0x80104F3Cu;
    // 80104F3C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80104F40:
    // 80104F40: bc    16, 0, 0x80104F30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104F30u;
                return;
            }
            goto label_80104F30;
        }
    }

label_80104F44:
    ctx->pc = 0x80104F44u;
    ctx->downcount -= 4;
    // 80104F44: lhz     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80104F48:
    ctx->pc = 0x80104F48u;
    // 80104F48: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_80104F4C:
    ctx->pc = 0x80104F4Cu;
    // 80104F4C: rlwimi r0, r3, 11, 16, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 11u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000F800u) | (rot & 0x0000F800u);
    }

label_80104F50:
    ctx->pc = 0x80104F50u;
    // 80104F50: sth     r0, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80104F54:
    ctx->pc = 0x80104F54u;
    ctx->downcount -= 9;
    // 80104F54: lfd     f31, -29696(r2)
    if (!ppc_fp_available_inline(ctx, 0x80104F54u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29696);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80104F58:
    ctx->pc = 0x80104F58u;
    // 80104F58: or   r31, r16, r16
    {
        ctx->gpr[31] = ctx->gpr[16] | ctx->gpr[16];
    }

label_80104F5C:
    ctx->pc = 0x80104F5Cu;
    // 80104F5C: addi    r30, r1, 188
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(188);

label_80104F60:
    ctx->pc = 0x80104F60u;
    // 80104F60: addi    r29, r1, 160
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(160);

label_80104F64:
    ctx->pc = 0x80104F64u;
    // 80104F64: addi    r28, r1, 132
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(132);

label_80104F68:
    ctx->pc = 0x80104F68u;
    // 80104F68: addi    r27, r1, 3800
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(3800);

label_80104F6C:
    ctx->pc = 0x80104F6Cu;
    // 80104F6C: addi    r26, r1, 104
    ctx->gpr[26] = ctx->gpr[1] + (u32)(s32)(104);

label_80104F70:
    ctx->pc = 0x80104F70u;
    // 80104F70: addi    r25, r1, 216
    ctx->gpr[25] = ctx->gpr[1] + (u32)(s32)(216);

label_80104F74:
    ctx->pc = 0x80104F74u;
    // 80104F74: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80104F78:
    ctx->pc = 0x80104F78u;
    ctx->downcount -= 3;
    // 80104F78: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104F7C:
    // 80104F7C: cmpwi   r0, 0
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

label_80104F80:
    // 80104F80: bc    12, 2, 0x80105594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105594;
        }
    }

label_80104F84:
    ctx->pc = 0x80104F84u;
    ctx->downcount -= 4;
    // 80104F84: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104F88:
    ctx->pc = 0x80104F88u;
    // 80104F88: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104F8C:
    // 80104F8C: cmpwi   r0, 0
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

label_80104F90:
    // 80104F90: bc    4, 2, 0x80104FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104FA4;
        }
    }

label_80104F94:
    ctx->pc = 0x80104F94u;
    ctx->downcount -= 2;
    // 80104F94: lwz     r3, 4384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104F98:
    // 80104F98: bl      0x800FF4EC
    {
            ctx->lr = 0x80104F9Cu;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104F9C:
    ctx->pc = 0x80104F9Cu;
    ctx->downcount -= 2;
    // 80104F9C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104FA0:
    ctx->pc = 0x80104FA0u;
    // 80104FA0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104FA4:
    ctx->pc = 0x80104FA4u;
    ctx->downcount -= 4;
    // 80104FA4: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104FA8:
    ctx->pc = 0x80104FA8u;
    // 80104FA8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80104FAC:
    // 80104FAC: cmpwi   r0, 0
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

label_80104FB0:
    // 80104FB0: bc    4, 2, 0x80104FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104FC4;
        }
    }

label_80104FB4:
    ctx->pc = 0x80104FB4u;
    ctx->downcount -= 2;
    // 80104FB4: lwz     r3, 4376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104FB8:
    // 80104FB8: bl      0x800FF4EC
    {
            ctx->lr = 0x80104FBCu;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104FBC:
    ctx->pc = 0x80104FBCu;
    ctx->downcount -= 2;
    // 80104FBC: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80104FC0:
    ctx->pc = 0x80104FC0u;
    // 80104FC0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80104FC4:
    ctx->downcount -= 2;
    // 80104FC4: cmpwi   r22, 0
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

label_80104FC8:
    // 80104FC8: bc    4, 2, 0x80104FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104FD8;
        }
    }

label_80104FCC:
    ctx->pc = 0x80104FCCu;
    ctx->downcount -= 2;
    // 80104FCC: lwz     r3, 4380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80104FD0:
    // 80104FD0: bl      0x800FF4EC
    {
            ctx->lr = 0x80104FD4u;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104FD4:
    ctx->downcount -= 1;
    // 80104FD4: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104FD8:
    ctx->downcount -= 2;
    // 80104FD8: cmpwi   r21, 0
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

label_80104FDC:
    // 80104FDC: bc    4, 2, 0x80104FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80104FEC;
        }
    }

label_80104FE0:
    ctx->downcount -= 2;
    // 80104FE0: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80104FE4:
    // 80104FE4: bl      0x800FF4EC
    {
            ctx->lr = 0x80104FE8u;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104FE8:
    ctx->downcount -= 1;
    // 80104FE8: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80104FEC:
    ctx->downcount -= 2;
    // 80104FEC: cmpwi   r20, 0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80104FF0:
    // 80104FF0: bc    4, 2, 0x80105000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105000;
        }
    }

label_80104FF4:
    ctx->downcount -= 2;
    // 80104FF4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80104FF8:
    // 80104FF8: bl      0x800FF4EC
    {
            ctx->lr = 0x80104FFCu;
            ctx->pc = 0x800FF4ECu;
            return;
    }

label_80104FFC:
    ctx->downcount -= 1;
    // 80104FFC: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80105000:
    ctx->pc = 0x80105000u;
    ctx->downcount -= 4;
    // 80105000: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105004:
    ctx->pc = 0x80105004u;
    // 80105004: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105008:
    // 80105008: cmpwi   r0, 0
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

label_8010500C:
    // 8010500C: bc    4, 2, 0x80105040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105040;
        }
    }

label_80105010:
    ctx->pc = 0x80105010u;
    ctx->downcount -= 6;
    // 80105010: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80105014:
    // 80105014: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105018:
    ctx->pc = 0x80105018u;
    // 80105018: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8010501C:
    ctx->pc = 0x8010501Cu;
    // 8010501C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80105020:
    // 80105020: rlwinm r4, r0, 6, 26, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80105024:
    // 80105024: bl      0x801000D8
    {
            ctx->lr = 0x80105028u;
            ctx->pc = 0x801000D8u;
            return;
    }

label_80105028:
    ctx->pc = 0x80105028u;
    ctx->downcount -= 6;
    // 80105028: lwz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8010502C:
    ctx->pc = 0x8010502Cu;
    // 8010502C: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80105030:
    ctx->pc = 0x80105030u;
    // 80105030: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80105034:
    ctx->pc = 0x80105034u;
    // 80105034: lwz     r4, 4384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80105038:
    ctx->pc = 0x80105038u;
    // 80105038: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010503C:
    // 8010503C: bl      0x80046110
    {
            ctx->lr = 0x80105040u;
            ctx->pc = 0x80046110u;
            return;
    }

label_80105040:
    ctx->pc = 0x80105040u;
    ctx->downcount -= 4;
    // 80105040: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105044:
    ctx->pc = 0x80105044u;
    // 80105044: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105048:
    // 80105048: cmpwi   r0, 0
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

label_8010504C:
    // 8010504C: bc    4, 2, 0x80105080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105080;
        }
    }

label_80105050:
    ctx->pc = 0x80105050u;
    ctx->downcount -= 6;
    // 80105050: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80105054:
    // 80105054: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105058:
    ctx->pc = 0x80105058u;
    // 80105058: lhz     r0, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8010505C:
    ctx->pc = 0x8010505Cu;
    // 8010505C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80105060:
    // 80105060: rlwinm r4, r0, 21, 27, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 21u) & 0x0000001Fu;
    }

label_80105064:
    // 80105064: bl      0x801000D8
    {
            ctx->lr = 0x80105068u;
            ctx->pc = 0x801000D8u;
            return;
    }

label_80105068:
    ctx->pc = 0x80105068u;
    ctx->downcount -= 6;
    // 80105068: lwz     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8010506C:
    ctx->pc = 0x8010506Cu;
    // 8010506C: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80105070:
    ctx->pc = 0x80105070u;
    // 80105070: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80105074:
    ctx->pc = 0x80105074u;
    // 80105074: lwz     r4, 4376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80105078:
    ctx->pc = 0x80105078u;
    // 80105078: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010507C:
    // 8010507C: bl      0x80046110
    {
            ctx->lr = 0x80105080u;
            ctx->pc = 0x80046110u;
            return;
    }

label_80105080:
    ctx->downcount -= 2;
    // 80105080: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105084:
    // 80105084: bc    4, 2, 0x801050AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801050AC;
        }
    }

label_80105088:
    ctx->pc = 0x80105088u;
    ctx->downcount -= 5;
    // 80105088: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8010508C:
    // 8010508C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80105090:
    // 80105090: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105094:
    // 80105094: rlwinm r4, r0, 5, 27, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0x0000001Fu;
    }

label_80105098:
    // 80105098: bl      0x801000D8
    {
            ctx->lr = 0x8010509Cu;
            ctx->pc = 0x801000D8u;
            return;
    }

label_8010509C:
    ctx->pc = 0x8010509Cu;
    ctx->downcount -= 4;
    // 8010509C: lwz     r4, 4380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801050A0:
    // 801050A0: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_801050A4:
    // 801050A4: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_801050A8:
    // 801050A8: bl      0x80046110
    {
            ctx->lr = 0x801050ACu;
            ctx->pc = 0x80046110u;
            return;
    }

label_801050AC:
    ctx->downcount -= 2;
    // 801050AC: cmpwi   r18, 0
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

label_801050B0:
    // 801050B0: bc    4, 2, 0x801050D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801050D8;
        }
    }

label_801050B4:
    ctx->pc = 0x801050B4u;
    ctx->downcount -= 5;
    // 801050B4: lhz     r0, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801050B8:
    // 801050B8: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_801050BC:
    // 801050BC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_801050C0:
    // 801050C0: rlwinm r4, r0, 18, 30, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 18u) & 0x00000003u;
    }

label_801050C4:
    // 801050C4: bl      0x801000D8
    {
            ctx->lr = 0x801050C8u;
            ctx->pc = 0x801000D8u;
            return;
    }

label_801050C8:
    ctx->downcount -= 4;
    // 801050C8: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_801050CC:
    // 801050CC: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_801050D0:
    // 801050D0: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_801050D4:
    // 801050D4: bl      0x80046110
    {
            ctx->lr = 0x801050D8u;
            ctx->pc = 0x80046110u;
            return;
    }

label_801050D8:
    ctx->downcount -= 2;
    // 801050D8: cmpwi   r17, 0
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801050DC:
    // 801050DC: bc    4, 2, 0x80105104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105104;
        }
    }

label_801050E0:
    ctx->pc = 0x801050E0u;
    ctx->downcount -= 5;
    // 801050E0: lhz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801050E4:
    // 801050E4: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_801050E8:
    // 801050E8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_801050EC:
    // 801050EC: rlwinm r4, r0, 17, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 17u) & 0x00000001u;
    }

label_801050F0:
    // 801050F0: bl      0x801000D8
    {
            ctx->lr = 0x801050F4u;
            ctx->pc = 0x801000D8u;
            return;
    }

label_801050F4:
    ctx->downcount -= 4;
    // 801050F4: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_801050F8:
    // 801050F8: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_801050FC:
    // 801050FC: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80105100:
    // 80105100: bl      0x80046110
    {
            ctx->lr = 0x80105104u;
            ctx->pc = 0x80046110u;
            return;
    }

label_80105104:
    ctx->pc = 0x80105104u;
    ctx->downcount -= 23;
    // 80105104: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80105108:
    // 80105108: addi    r3, r25, 32
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(32);

label_8010510C:
    ctx->pc = 0x8010510Cu;
    // 8010510C: lwz     r4, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80105110:
    // 80105110: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105114:
    ctx->pc = 0x80105114u;
    // 80105114: lwz     r15, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_80105118:
    // 80105118: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8010511C:
    // 8010511C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80105120:
    ctx->pc = 0x80105120u;
    // 80105120: stw     r15, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_80105124:
    ctx->pc = 0x80105124u;
    // 80105124: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105128:
    ctx->pc = 0x80105128u;
    // 80105128: stw     r0, 88(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010512C:
    ctx->pc = 0x8010512Cu;
    // 8010512C: stw     r19, 152(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_80105130:
    ctx->pc = 0x80105130u;
    // 80105130: stw     r19, 216(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_80105134:
    ctx->pc = 0x80105134u;
    // 80105134: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105138:
    ctx->pc = 0x80105138u;
    // 80105138: stw     r0, 280(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010513C:
    ctx->pc = 0x8010513Cu;
    // 8010513C: stw     r18, 344(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_80105140:
    ctx->pc = 0x80105140u;
    // 80105140: stw     r18, 408(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_80105144:
    ctx->pc = 0x80105144u;
    // 80105144: stw     r17, 472(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_80105148:
    ctx->pc = 0x80105148u;
    // 80105148: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8010514C:
    ctx->pc = 0x8010514Cu;
    // 8010514C: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80105150:
    ctx->pc = 0x80105150u;
    // 80105150: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80105154:
    // 80105154: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80105158:
    ctx->pc = 0x80105158u;
    // 80105158: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010515C:
    // 8010515C: bl      0x80037030
    {
            ctx->lr = 0x80105160u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80105160:
    ctx->pc = 0x80105160u;
    ctx->downcount -= 24;
    // 80105160: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105164:
    // 80105164: addi    r3, r25, 32
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(32);

label_80105168:
    ctx->pc = 0x80105168u;
    // 80105168: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8010516C:
    // 8010516C: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80105170:
    ctx->pc = 0x80105170u;
    // 80105170: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80105174:
    // 80105174: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_80105178:
    // 80105178: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_8010517C:
    ctx->pc = 0x8010517Cu;
    // 8010517C: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105180:
    // 80105180: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_80105184:
    // 80105184: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80105188:
    ctx->pc = 0x80105188u;
    // 80105188: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8010518C:
    ctx->pc = 0x8010518Cu;
    // 8010518C: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010518Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105190:
    ctx->pc = 0x80105190u;
    // 80105190: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105194:
    ctx->pc = 0x80105194u;
    // 80105194: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105194u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_80105198:
    ctx->pc = 0x80105198u;
    // 80105198: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8010519C:
    ctx->pc = 0x8010519Cu;
    // 8010519C: stw     r0, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801051A0:
    ctx->pc = 0x801051A0u;
    // 801051A0: lfd     f2, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x801051A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801051A4:
    ctx->pc = 0x801051A4u;
    // 801051A4: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801051A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801051A8:
    ctx->pc = 0x801051A8u;
    // 801051A8: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x801051A8u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_801051AC:
    ctx->pc = 0x801051ACu;
    // 801051AC: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801051B0:
    ctx->pc = 0x801051B0u;
    // 801051B0: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801051B0u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_801051B4:
    ctx->pc = 0x801051B4u;
    // 801051B4: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801051B8:
    ctx->pc = 0x801051B8u;
    // 801051B8: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_801051BC:
    // 801051BC: bl      0x80037290
    {
            ctx->lr = 0x801051C0u;
            ctx->pc = 0x80037290u;
            return;
    }

label_801051C0:
    ctx->pc = 0x801051C0u;
    ctx->downcount -= 11;
    // 801051C0: lwz     r15, 88(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(88);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_801051C4:
    // 801051C4: addi    r3, r25, 96
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(96);

label_801051C8:
    // 801051C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801051CC:
    // 801051CC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_801051D0:
    ctx->pc = 0x801051D0u;
    // 801051D0: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801051D4:
    // 801051D4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_801051D8:
    ctx->pc = 0x801051D8u;
    // 801051D8: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_801051DC:
    ctx->pc = 0x801051DCu;
    // 801051DC: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_801051E0:
    // 801051E0: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_801051E4:
    ctx->pc = 0x801051E4u;
    // 801051E4: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801051E8:
    // 801051E8: bl      0x80037030
    {
            ctx->lr = 0x801051ECu;
            ctx->pc = 0x80037030u;
            return;
    }

label_801051EC:
    ctx->pc = 0x801051ECu;
    ctx->downcount -= 24;
    // 801051EC: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801051F0:
    // 801051F0: addi    r3, r25, 96
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(96);

label_801051F4:
    ctx->pc = 0x801051F4u;
    // 801051F4: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_801051F8:
    // 801051F8: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_801051FC:
    ctx->pc = 0x801051FCu;
    // 801051FC: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80105200:
    // 80105200: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_80105204:
    // 80105204: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80105208:
    ctx->pc = 0x80105208u;
    // 80105208: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8010520C:
    // 8010520C: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_80105210:
    // 80105210: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80105214:
    ctx->pc = 0x80105214u;
    // 80105214: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105218:
    ctx->pc = 0x80105218u;
    // 80105218: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010521C:
    ctx->pc = 0x8010521Cu;
    // 8010521C: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105220:
    ctx->pc = 0x80105220u;
    // 80105220: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105220u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_80105224:
    ctx->pc = 0x80105224u;
    // 80105224: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105228:
    ctx->pc = 0x80105228u;
    // 80105228: stw     r0, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010522C:
    ctx->pc = 0x8010522Cu;
    // 8010522C: lfd     f2, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010522Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105230:
    ctx->pc = 0x80105230u;
    // 80105230: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105234:
    ctx->pc = 0x80105234u;
    // 80105234: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80105234u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_80105238:
    ctx->pc = 0x80105238u;
    // 80105238: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8010523C:
    ctx->pc = 0x8010523Cu;
    // 8010523C: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8010523Cu)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_80105240:
    ctx->pc = 0x80105240u;
    // 80105240: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105244:
    ctx->pc = 0x80105244u;
    // 80105244: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80105248:
    // 80105248: bl      0x80037290
    {
            ctx->lr = 0x8010524Cu;
            ctx->pc = 0x80037290u;
            return;
    }

label_8010524C:
    ctx->pc = 0x8010524Cu;
    ctx->downcount -= 11;
    // 8010524C: lwz     r15, 152(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(152);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_80105250:
    // 80105250: addi    r3, r25, 160
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(160);

label_80105254:
    // 80105254: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105258:
    // 80105258: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8010525C:
    ctx->pc = 0x8010525Cu;
    // 8010525C: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105260:
    // 80105260: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80105264:
    ctx->pc = 0x80105264u;
    // 80105264: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80105268:
    ctx->pc = 0x80105268u;
    // 80105268: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8010526C:
    // 8010526C: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80105270:
    ctx->pc = 0x80105270u;
    // 80105270: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105274:
    // 80105274: bl      0x80037030
    {
            ctx->lr = 0x80105278u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80105278:
    ctx->pc = 0x80105278u;
    ctx->downcount -= 24;
    // 80105278: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8010527C:
    // 8010527C: addi    r3, r25, 160
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(160);

label_80105280:
    ctx->pc = 0x80105280u;
    // 80105280: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105284:
    // 80105284: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80105288:
    ctx->pc = 0x80105288u;
    // 80105288: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8010528C:
    // 8010528C: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_80105290:
    // 80105290: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80105294:
    ctx->pc = 0x80105294u;
    // 80105294: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105298:
    // 80105298: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_8010529C:
    // 8010529C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_801052A0:
    ctx->pc = 0x801052A0u;
    // 801052A0: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_801052A4:
    ctx->pc = 0x801052A4u;
    // 801052A4: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801052A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801052A8:
    ctx->pc = 0x801052A8u;
    // 801052A8: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801052AC:
    ctx->pc = 0x801052ACu;
    // 801052AC: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801052ACu)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_801052B0:
    ctx->pc = 0x801052B0u;
    // 801052B0: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801052B4:
    ctx->pc = 0x801052B4u;
    // 801052B4: stw     r0, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801052B8:
    ctx->pc = 0x801052B8u;
    // 801052B8: lfd     f2, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x801052B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801052BC:
    ctx->pc = 0x801052BCu;
    // 801052BC: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801052BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801052C0:
    ctx->pc = 0x801052C0u;
    // 801052C0: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x801052C0u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_801052C4:
    ctx->pc = 0x801052C4u;
    // 801052C4: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801052C8:
    ctx->pc = 0x801052C8u;
    // 801052C8: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801052C8u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_801052CC:
    ctx->pc = 0x801052CCu;
    // 801052CC: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801052D0:
    ctx->pc = 0x801052D0u;
    // 801052D0: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_801052D4:
    // 801052D4: bl      0x80037290
    {
            ctx->lr = 0x801052D8u;
            ctx->pc = 0x80037290u;
            return;
    }

label_801052D8:
    ctx->pc = 0x801052D8u;
    ctx->downcount -= 11;
    // 801052D8: lwz     r15, 216(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(216);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_801052DC:
    // 801052DC: addi    r3, r25, 224
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(224);

label_801052E0:
    // 801052E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801052E4:
    // 801052E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_801052E8:
    ctx->pc = 0x801052E8u;
    // 801052E8: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801052EC:
    // 801052EC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_801052F0:
    ctx->pc = 0x801052F0u;
    // 801052F0: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_801052F4:
    ctx->pc = 0x801052F4u;
    // 801052F4: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_801052F8:
    // 801052F8: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_801052FC:
    ctx->pc = 0x801052FCu;
    // 801052FC: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105300:
    // 80105300: bl      0x80037030
    {
            ctx->lr = 0x80105304u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80105304:
    ctx->pc = 0x80105304u;
    ctx->downcount -= 24;
    // 80105304: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105308:
    // 80105308: addi    r3, r25, 224
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(224);

label_8010530C:
    ctx->pc = 0x8010530Cu;
    // 8010530C: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105310:
    // 80105310: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80105314:
    ctx->pc = 0x80105314u;
    // 80105314: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80105318:
    // 80105318: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_8010531C:
    // 8010531C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80105320:
    ctx->pc = 0x80105320u;
    // 80105320: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105324:
    // 80105324: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_80105328:
    // 80105328: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_8010532C:
    ctx->pc = 0x8010532Cu;
    // 8010532C: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105330:
    ctx->pc = 0x80105330u;
    // 80105330: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105330u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105334:
    ctx->pc = 0x80105334u;
    // 80105334: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105338:
    ctx->pc = 0x80105338u;
    // 80105338: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105338u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_8010533C:
    ctx->pc = 0x8010533Cu;
    // 8010533C: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105340:
    ctx->pc = 0x80105340u;
    // 80105340: stw     r0, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80105344:
    ctx->pc = 0x80105344u;
    // 80105344: lfd     f2, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105348:
    ctx->pc = 0x80105348u;
    // 80105348: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105348u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010534C:
    ctx->pc = 0x8010534Cu;
    // 8010534C: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8010534Cu)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_80105350:
    ctx->pc = 0x80105350u;
    // 80105350: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80105354:
    ctx->pc = 0x80105354u;
    // 80105354: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105354u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_80105358:
    ctx->pc = 0x80105358u;
    // 80105358: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010535C:
    ctx->pc = 0x8010535Cu;
    // 8010535C: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80105360:
    // 80105360: bl      0x80037290
    {
            ctx->lr = 0x80105364u;
            ctx->pc = 0x80037290u;
            return;
    }

label_80105364:
    ctx->pc = 0x80105364u;
    ctx->downcount -= 11;
    // 80105364: lwz     r15, 280(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(280);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_80105368:
    // 80105368: addi    r3, r25, 288
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(288);

label_8010536C:
    // 8010536C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105370:
    // 80105370: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80105374:
    ctx->pc = 0x80105374u;
    // 80105374: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105378:
    // 80105378: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8010537C:
    ctx->pc = 0x8010537Cu;
    // 8010537C: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80105380:
    ctx->pc = 0x80105380u;
    // 80105380: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80105384:
    // 80105384: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80105388:
    ctx->pc = 0x80105388u;
    // 80105388: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010538C:
    // 8010538C: bl      0x80037030
    {
            ctx->lr = 0x80105390u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80105390:
    ctx->pc = 0x80105390u;
    ctx->downcount -= 24;
    // 80105390: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105394:
    // 80105394: addi    r3, r25, 288
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(288);

label_80105398:
    ctx->pc = 0x80105398u;
    // 80105398: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8010539C:
    // 8010539C: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_801053A0:
    ctx->pc = 0x801053A0u;
    // 801053A0: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801053A4:
    // 801053A4: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_801053A8:
    // 801053A8: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_801053AC:
    ctx->pc = 0x801053ACu;
    // 801053AC: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801053B0:
    // 801053B0: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_801053B4:
    // 801053B4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_801053B8:
    ctx->pc = 0x801053B8u;
    // 801053B8: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_801053BC:
    ctx->pc = 0x801053BCu;
    // 801053BC: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801053BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801053C0:
    ctx->pc = 0x801053C0u;
    // 801053C0: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801053C4:
    ctx->pc = 0x801053C4u;
    // 801053C4: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801053C4u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_801053C8:
    ctx->pc = 0x801053C8u;
    // 801053C8: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801053CC:
    ctx->pc = 0x801053CCu;
    // 801053CC: stw     r0, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801053D0:
    ctx->pc = 0x801053D0u;
    // 801053D0: lfd     f2, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x801053D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801053D4:
    ctx->pc = 0x801053D4u;
    // 801053D4: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801053D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801053D8:
    ctx->pc = 0x801053D8u;
    // 801053D8: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x801053D8u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_801053DC:
    ctx->pc = 0x801053DCu;
    // 801053DC: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801053E0:
    ctx->pc = 0x801053E0u;
    // 801053E0: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801053E0u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_801053E4:
    ctx->pc = 0x801053E4u;
    // 801053E4: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801053E8:
    ctx->pc = 0x801053E8u;
    // 801053E8: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_801053EC:
    // 801053EC: bl      0x80037290
    {
            ctx->lr = 0x801053F0u;
            ctx->pc = 0x80037290u;
            return;
    }

label_801053F0:
    ctx->pc = 0x801053F0u;
    ctx->downcount -= 11;
    // 801053F0: lwz     r15, 344(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(344);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_801053F4:
    // 801053F4: addi    r3, r25, 352
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(352);

label_801053F8:
    // 801053F8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801053FC:
    // 801053FC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80105400:
    ctx->pc = 0x80105400u;
    // 80105400: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105404:
    // 80105404: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80105408:
    ctx->pc = 0x80105408u;
    // 80105408: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8010540C:
    ctx->pc = 0x8010540Cu;
    // 8010540C: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80105410:
    // 80105410: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80105414:
    ctx->pc = 0x80105414u;
    // 80105414: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105418:
    // 80105418: bl      0x80037030
    {
            ctx->lr = 0x8010541Cu;
            ctx->pc = 0x80037030u;
            return;
    }

label_8010541C:
    ctx->pc = 0x8010541Cu;
    ctx->downcount -= 24;
    // 8010541C: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105420:
    // 80105420: addi    r3, r25, 352
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(352);

label_80105424:
    ctx->pc = 0x80105424u;
    // 80105424: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105428:
    // 80105428: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8010542C:
    ctx->pc = 0x8010542Cu;
    // 8010542C: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80105430:
    // 80105430: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_80105434:
    // 80105434: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80105438:
    ctx->pc = 0x80105438u;
    // 80105438: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8010543C:
    // 8010543C: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_80105440:
    // 80105440: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80105444:
    ctx->pc = 0x80105444u;
    // 80105444: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105448:
    ctx->pc = 0x80105448u;
    // 80105448: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105448u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010544C:
    ctx->pc = 0x8010544Cu;
    // 8010544C: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105450:
    ctx->pc = 0x80105450u;
    // 80105450: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105450u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_80105454:
    ctx->pc = 0x80105454u;
    // 80105454: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105458:
    ctx->pc = 0x80105458u;
    // 80105458: stw     r0, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010545C:
    ctx->pc = 0x8010545Cu;
    // 8010545C: lfd     f2, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010545Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105460:
    ctx->pc = 0x80105460u;
    // 80105460: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105460u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105464:
    ctx->pc = 0x80105464u;
    // 80105464: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80105464u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_80105468:
    ctx->pc = 0x80105468u;
    // 80105468: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8010546C:
    ctx->pc = 0x8010546Cu;
    // 8010546C: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8010546Cu)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_80105470:
    ctx->pc = 0x80105470u;
    // 80105470: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105474:
    ctx->pc = 0x80105474u;
    // 80105474: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80105478:
    // 80105478: bl      0x80037290
    {
            ctx->lr = 0x8010547Cu;
            ctx->pc = 0x80037290u;
            return;
    }

label_8010547C:
    ctx->pc = 0x8010547Cu;
    ctx->downcount -= 11;
    // 8010547C: lwz     r15, 408(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(408);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_80105480:
    // 80105480: addi    r3, r25, 416
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(416);

label_80105484:
    // 80105484: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105488:
    // 80105488: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8010548C:
    ctx->pc = 0x8010548Cu;
    // 8010548C: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105490:
    // 80105490: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80105494:
    ctx->pc = 0x80105494u;
    // 80105494: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80105498:
    ctx->pc = 0x80105498u;
    // 80105498: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8010549C:
    // 8010549C: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_801054A0:
    ctx->pc = 0x801054A0u;
    // 801054A0: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801054A4:
    // 801054A4: bl      0x80037030
    {
            ctx->lr = 0x801054A8u;
            ctx->pc = 0x80037030u;
            return;
    }

label_801054A8:
    ctx->pc = 0x801054A8u;
    ctx->downcount -= 24;
    // 801054A8: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801054AC:
    // 801054AC: addi    r3, r25, 416
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(416);

label_801054B0:
    ctx->pc = 0x801054B0u;
    // 801054B0: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_801054B4:
    // 801054B4: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_801054B8:
    ctx->pc = 0x801054B8u;
    // 801054B8: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_801054BC:
    // 801054BC: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_801054C0:
    // 801054C0: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_801054C4:
    ctx->pc = 0x801054C4u;
    // 801054C4: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801054C8:
    // 801054C8: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_801054CC:
    // 801054CC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_801054D0:
    ctx->pc = 0x801054D0u;
    // 801054D0: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_801054D4:
    ctx->pc = 0x801054D4u;
    // 801054D4: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801054D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801054D8:
    ctx->pc = 0x801054D8u;
    // 801054D8: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_801054DC:
    ctx->pc = 0x801054DCu;
    // 801054DC: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801054DCu)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_801054E0:
    ctx->pc = 0x801054E0u;
    // 801054E0: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801054E4:
    ctx->pc = 0x801054E4u;
    // 801054E4: stw     r0, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801054E8:
    ctx->pc = 0x801054E8u;
    // 801054E8: lfd     f2, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x801054E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801054EC:
    ctx->pc = 0x801054ECu;
    // 801054EC: lfd     f0, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x801054ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801054F0:
    ctx->pc = 0x801054F0u;
    // 801054F0: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x801054F0u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_801054F4:
    ctx->pc = 0x801054F4u;
    // 801054F4: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801054F8:
    ctx->pc = 0x801054F8u;
    // 801054F8: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x801054F8u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_801054FC:
    ctx->pc = 0x801054FCu;
    // 801054FC: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105500:
    ctx->pc = 0x80105500u;
    // 80105500: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80105504:
    // 80105504: bl      0x80037290
    {
            ctx->lr = 0x80105508u;
            ctx->pc = 0x80037290u;
            return;
    }

label_80105508:
    ctx->pc = 0x80105508u;
    ctx->downcount -= 11;
    // 80105508: lwz     r15, 472(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(472);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_8010550C:
    // 8010550C: addi    r3, r25, 480
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(480);

label_80105510:
    // 80105510: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105514:
    // 80105514: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80105518:
    ctx->pc = 0x80105518u;
    // 80105518: lwz     r0, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8010551C:
    // 8010551C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80105520:
    ctx->pc = 0x80105520u;
    // 80105520: lhz     r5, 2(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80105524:
    ctx->pc = 0x80105524u;
    // 80105524: lhz     r6, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80105528:
    // 80105528: add   r4, r15, r0
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8010552C:
    ctx->pc = 0x8010552Cu;
    // 8010552C: lbz     r7, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105530:
    // 80105530: bl      0x80037030
    {
            ctx->lr = 0x80105534u;
            ctx->pc = 0x80037030u;
            return;
    }

label_80105534:
    ctx->pc = 0x80105534u;
    ctx->downcount -= 24;
    // 80105534: lbz     r0, 22(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105538:
    // 80105538: addi    r3, r25, 480
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(480);

label_8010553C:
    ctx->pc = 0x8010553Cu;
    // 8010553C: lbz     r4, 23(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105540:
    // 80105540: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80105544:
    ctx->pc = 0x80105544u;
    // 80105544: lha     r0, 26(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80105548:
    // 80105548: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_8010554C:
    // 8010554C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80105550:
    ctx->pc = 0x80105550u;
    // 80105550: stw     r5, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105554:
    // 80105554: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_80105558:
    // 80105558: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_8010555C:
    ctx->pc = 0x8010555Cu;
    // 8010555C: lbz     r4, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80105560:
    ctx->pc = 0x80105560u;
    // 80105560: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105560u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105564:
    ctx->pc = 0x80105564u;
    // 80105564: stw     r5, 4364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80105568:
    ctx->pc = 0x80105568u;
    // 80105568: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105568u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_8010556C:
    ctx->pc = 0x8010556Cu;
    // 8010556C: lbz     r5, 21(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(21);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105570:
    ctx->pc = 0x80105570u;
    // 80105570: stw     r0, 4372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80105574:
    ctx->pc = 0x80105574u;
    // 80105574: lfd     f2, 4360(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4360);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105578:
    ctx->pc = 0x80105578u;
    // 80105578: lfd     f0, 4368(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010557C:
    ctx->pc = 0x8010557Cu;
    // 8010557C: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8010557Cu)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_80105580:
    ctx->pc = 0x80105580u;
    // 80105580: lbz     r6, 18(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(18);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80105584:
    ctx->pc = 0x80105584u;
    // 80105584: fsubs   f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80105584u)) return;
    ppc_fsubs(ctx, 3, 0, 31);

label_80105588:
    ctx->pc = 0x80105588u;
    // 80105588: lbz     r7, 17(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010558C:
    ctx->pc = 0x8010558Cu;
    // 8010558C: lbz     r8, 19(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(19);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80105590:
    // 80105590: bl      0x80037290
    {
            ctx->lr = 0x80105594u;
            ctx->pc = 0x80037290u;
            return;
    }

label_80105594:
    ctx->downcount -= 10;
    // 80105594: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80105598:
    // 80105598: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8010559C:
    // 8010559C: cmpwi   r24, 7
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055A0:
    // 801055A0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_801055A4:
    // 801055A4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_801055A8:
    // 801055A8: addi    r27, r27, 80
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(80);

label_801055AC:
    // 801055AC: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_801055B0:
    // 801055B0: addi    r25, r25, 512
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(512);

label_801055B4:
    // 801055B4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_801055B8:
    // 801055B8: bc    12, 0, 0x80104F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104F78u;
                return;
            }
            goto label_80104F78;
        }
    }

label_801055BC:
    ctx->pc = 0x801055BCu;
    ctx->downcount -= 3;
    // 801055BC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801055C0:
    ctx->pc = 0x801055C0u;
    // 801055C0: cmpwi   r0, 224
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(224);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055C4:
    ctx->pc = 0x801055C4u;
    // 801055C4: bc    12, 2, 0x80105610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105610;
        }
    }

label_801055C8:
    ctx->pc = 0x801055C8u;
    ctx->downcount -= 1;
    // 801055C8: bc    4, 0, 0x801055F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801055F0;
        }
    }

label_801055CC:
    ctx->pc = 0x801055CCu;
    ctx->downcount -= 2;
    // 801055CC: cmpwi   r0, 96
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055D0:
    ctx->pc = 0x801055D0u;
    // 801055D0: bc    12, 2, 0x80105608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105608;
        }
    }

label_801055D4:
    ctx->pc = 0x801055D4u;
    ctx->downcount -= 1;
    // 801055D4: bc    4, 0, 0x801055E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801055E4;
        }
    }

label_801055D8:
    ctx->pc = 0x801055D8u;
    ctx->downcount -= 2;
    // 801055D8: cmpwi   r0, 64
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055DC:
    ctx->pc = 0x801055DCu;
    // 801055DC: bc    12, 2, 0x80105608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105608;
        }
    }

label_801055E0:
    ctx->pc = 0x801055E0u;
    ctx->downcount -= 1;
    // 801055E0: b       0x80105620
    {
            goto label_80105620;
    }

label_801055E4:
    ctx->pc = 0x801055E4u;
    ctx->downcount -= 2;
    // 801055E4: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055E8:
    ctx->pc = 0x801055E8u;
    // 801055E8: bc    12, 2, 0x80105610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105610;
        }
    }

label_801055EC:
    ctx->pc = 0x801055ECu;
    ctx->downcount -= 1;
    // 801055EC: b       0x80105620
    {
            goto label_80105620;
    }

label_801055F0:
    ctx->pc = 0x801055F0u;
    ctx->downcount -= 2;
    // 801055F0: cmpwi   r0, 480
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(480);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801055F4:
    ctx->pc = 0x801055F4u;
    // 801055F4: bc    12, 2, 0x80105618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105618;
        }
    }

label_801055F8:
    ctx->pc = 0x801055F8u;
    ctx->downcount -= 1;
    // 801055F8: bc    4, 0, 0x80105620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105620;
        }
    }

label_801055FC:
    ctx->pc = 0x801055FCu;
    ctx->downcount -= 2;
    // 801055FC: cmpwi   r0, 256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105600:
    ctx->pc = 0x80105600u;
    // 80105600: bc    12, 2, 0x80105618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105618;
        }
    }

label_80105604:
    ctx->pc = 0x80105604u;
    ctx->downcount -= 1;
    // 80105604: b       0x80105620
    {
            goto label_80105620;
    }

label_80105608:
    ctx->pc = 0x80105608u;
    ctx->downcount -= 2;
    // 80105608: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_8010560C:
    ctx->pc = 0x8010560Cu;
    // 8010560C: b       0x80105624
    {
            goto label_80105624;
    }

label_80105610:
    ctx->pc = 0x80105610u;
    ctx->downcount -= 2;
    // 80105610: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80105614:
    ctx->pc = 0x80105614u;
    // 80105614: b       0x80105624
    {
            goto label_80105624;
    }

label_80105618:
    ctx->pc = 0x80105618u;
    ctx->downcount -= 2;
    // 80105618: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8010561C:
    ctx->pc = 0x8010561Cu;
    // 8010561C: b       0x80105624
    {
            goto label_80105624;
    }

label_80105620:
    ctx->pc = 0x80105620u;
    ctx->downcount -= 1;
    // 80105620: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80105624:
    ctx->pc = 0x80105624u;
    ctx->downcount -= 4;
    // 80105624: lwz     r0, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105628:
    ctx->pc = 0x80105628u;
    // 80105628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010562C:
    ctx->pc = 0x8010562Cu;
    // 8010562C: cmpwi   r0, 0
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

label_80105630:
    ctx->pc = 0x80105630u;
    // 80105630: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105634:
    ctx->pc = 0x80105634u;
    ctx->downcount -= 4;
    // 80105634: lwz     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105638:
    ctx->pc = 0x80105638u;
    // 80105638: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8010563C:
    ctx->pc = 0x8010563Cu;
    // 8010563C: cmpwi   r0, 0
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

label_80105640:
    ctx->pc = 0x80105640u;
    // 80105640: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105644:
    ctx->pc = 0x80105644u;
    ctx->downcount -= 4;
    // 80105644: lwz     r0, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105648:
    ctx->pc = 0x80105648u;
    // 80105648: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8010564C:
    ctx->pc = 0x8010564Cu;
    // 8010564C: cmpwi   r0, 0
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

label_80105650:
    ctx->pc = 0x80105650u;
    // 80105650: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105654:
    ctx->pc = 0x80105654u;
    ctx->downcount -= 4;
    // 80105654: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105658:
    ctx->pc = 0x80105658u;
    // 80105658: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8010565C:
    ctx->pc = 0x8010565Cu;
    // 8010565C: cmpwi   r0, 0
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

label_80105660:
    ctx->pc = 0x80105660u;
    // 80105660: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105664:
    ctx->pc = 0x80105664u;
    ctx->downcount -= 4;
    // 80105664: lwz     r0, 16(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105668:
    ctx->pc = 0x80105668u;
    // 80105668: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8010566C:
    ctx->pc = 0x8010566Cu;
    // 8010566C: cmpwi   r0, 0
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

label_80105670:
    ctx->pc = 0x80105670u;
    // 80105670: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105674:
    ctx->pc = 0x80105674u;
    ctx->downcount -= 4;
    // 80105674: lwz     r0, 20(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105678:
    ctx->pc = 0x80105678u;
    // 80105678: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8010567C:
    ctx->pc = 0x8010567Cu;
    // 8010567C: cmpwi   r0, 0
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

label_80105680:
    ctx->pc = 0x80105680u;
    // 80105680: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105684:
    ctx->pc = 0x80105684u;
    ctx->downcount -= 4;
    // 80105684: lwz     r0, 24(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105688:
    ctx->pc = 0x80105688u;
    // 80105688: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8010568C:
    ctx->pc = 0x8010568Cu;
    // 8010568C: cmpwi   r0, 0
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

label_80105690:
    ctx->pc = 0x80105690u;
    // 80105690: bc    4, 2, 0x80105698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80105698;
        }
    }

label_80105694:
    ctx->pc = 0x80105694u;
    ctx->downcount -= 1;
    // 80105694: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80105698:
    ctx->pc = 0x80105698u;
    ctx->downcount -= 8;
    // 80105698: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8010569C:
    ctx->pc = 0x8010569Cu;
    // 8010569C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_801056A0:
    ctx->pc = 0x801056A0u;
    // 801056A0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801056A4:
    ctx->pc = 0x801056A4u;
    // 801056A4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_801056A8:
    ctx->pc = 0x801056A8u;
    // 801056A8: addi    r7, r1, 12
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(12);

label_801056AC:
    ctx->pc = 0x801056ACu;
    // 801056AC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_801056B0:
    ctx->pc = 0x801056B0u;
    // 801056B0: lwzx    r6, r16, r0
    {
        u32 ea = ctx->gpr[16] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_801056B4:
    ctx->pc = 0x801056B4u;
    // 801056B4: bl      0x80104860
    {
            ctx->lr = 0x801056B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80104860u;
                return;
            }
            goto label_80104860;
    }

label_801056B8:
    ctx->pc = 0x801056B8u;
    ctx->downcount -= 4;
    // 801056B8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801056BC:
    ctx->pc = 0x801056BCu;
    // 801056BC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_801056C0:
    ctx->pc = 0x801056C0u;
    // 801056C0: rlwinm. r23, r0, 0, 26, 26
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801056C4:
    ctx->pc = 0x801056C4u;
    // 801056C4: bc    12, 2, 0x801056CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801056CC;
        }
    }

label_801056C8:
    ctx->pc = 0x801056C8u;
    ctx->downcount -= 1;
    // 801056C8: li      r24, 2048
    ctx->gpr[24] = (u32)(s32)(2048);

label_801056CC:
    ctx->pc = 0x801056CCu;
    ctx->downcount -= 3;
    // 801056CC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801056D0:
    ctx->pc = 0x801056D0u;
    // 801056D0: rlwinm. r19, r0, 0, 25, 25
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[19];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801056D4:
    ctx->pc = 0x801056D4u;
    // 801056D4: bc    12, 2, 0x801056DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801056DC;
        }
    }

label_801056D8:
    ctx->pc = 0x801056D8u;
    ctx->downcount -= 1;
    // 801056D8: addi    r24, r24, 8192
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(8192);

label_801056DC:
    ctx->pc = 0x801056DCu;
    ctx->downcount -= 3;
    // 801056DC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801056E0:
    ctx->pc = 0x801056E0u;
    // 801056E0: rlwinm. r18, r0, 0, 24, 24
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[18];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801056E4:
    ctx->pc = 0x801056E4u;
    // 801056E4: bc    12, 2, 0x801056F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801056F0;
        }
    }

label_801056E8:
    ctx->pc = 0x801056E8u;
    ctx->downcount -= 2;
    // 801056E8: addis   r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + ((u32)(s32)(1) << 16);

label_801056EC:
    ctx->pc = 0x801056ECu;
    // 801056EC: addi    r24, r24, -32768
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-32768);

label_801056F0:
    ctx->pc = 0x801056F0u;
    ctx->downcount -= 3;
    // 801056F0: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801056F4:
    ctx->pc = 0x801056F4u;
    // 801056F4: rlwinm. r17, r0, 0, 23, 23
    {
        ctx->gpr[17] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[17];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801056F8:
    ctx->pc = 0x801056F8u;
    // 801056F8: bc    12, 2, 0x80105700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105700;
        }
    }

label_801056FC:
    ctx->pc = 0x801056FCu;
    ctx->downcount -= 1;
    // 801056FC: addis   r24, r24, 2
    ctx->gpr[24] = ctx->gpr[24] + ((u32)(s32)(2) << 16);

label_80105700:
    ctx->pc = 0x80105700u;
    ctx->downcount -= 2;
    // 80105700: or   r14, r16, r16
    {
        ctx->gpr[14] = ctx->gpr[16] | ctx->gpr[16];
    }

label_80105704:
    ctx->pc = 0x80105704u;
    // 80105704: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_80105708:
    ctx->pc = 0x80105708u;
    ctx->downcount -= 3;
    // 80105708: lwz     r3, 0(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010570C:
    // 8010570C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105710:
    // 80105710: bc    12, 2, 0x8010571C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010571C;
        }
    }

label_80105714:
    ctx->downcount -= 2;
    // 80105714: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80105718:
    // 80105718: bl      0x800460B0
    {
            ctx->lr = 0x8010571Cu;
            ctx->pc = 0x800460B0u;
            return;
    }

label_8010571C:
    ctx->downcount -= 4;
    // 8010571C: addi    r15, r15, 1
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(1);

label_80105720:
    // 80105720: addi    r14, r14, 4
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(4);

label_80105724:
    // 80105724: cmpwi   r15, 7
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105728:
    // 80105728: bc    12, 0, 0x80105708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105708u;
                return;
            }
            goto label_80105708;
        }
    }

label_8010572C:
    ctx->pc = 0x8010572Cu;
    ctx->downcount -= 5;
    // 8010572C: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80105730:
    ctx->pc = 0x80105730u;
    // 80105730: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80105734:
    ctx->pc = 0x80105734u;
    // 80105734: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80105738:
    ctx->pc = 0x80105738u;
    // 80105738: addi    r6, r1, 16
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(16);

label_8010573C:
    ctx->pc = 0x8010573Cu;
    // 8010573C: bl      0x80039EA0
    {
            ctx->lr = 0x80105740u;
            ctx->pc = 0x80039EA0u;
            return;
    }

label_80105740:
    ctx->pc = 0x80105740u;
    ctx->downcount -= 3;
    // 80105740: addi    r14, r1, 216
    ctx->gpr[14] = ctx->gpr[1] + (u32)(s32)(216);

label_80105744:
    ctx->pc = 0x80105744u;
    // 80105744: addi    r15, r1, 3800
    ctx->gpr[15] = ctx->gpr[1] + (u32)(s32)(3800);

label_80105748:
    ctx->pc = 0x80105748u;
    // 80105748: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8010574C:
    ctx->pc = 0x8010574Cu;
    ctx->downcount -= 3;
    // 8010574C: lwz     r25, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_80105750:
    // 80105750: cmpwi   r25, 0
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

label_80105754:
    // 80105754: bc    12, 2, 0x80105908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105908;
        }
    }

label_80105758:
    ctx->downcount -= 2;
    // 80105758: cmpwi   r17, 0
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8010575C:
    // 8010575C: bc    12, 2, 0x801057C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801057C4;
        }
    }

label_80105760:
    ctx->downcount -= 5;
    // 80105760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105764:
    // 80105764: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105768:
    // 80105768: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_8010576C:
    // 8010576C: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_80105770:
    // 80105770: bl      0x80035BC0
    {
            ctx->lr = 0x80105774u;
            ctx->pc = 0x80035BC0u;
            return;
    }

label_80105774:
    ctx->downcount -= 5;
    // 80105774: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_80105778:
    // 80105778: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8010577C:
    // 8010577C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80105780:
    // 80105780: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105784:
    // 80105784: bl      0x80035C30
    {
            ctx->lr = 0x80105788u;
            ctx->pc = 0x80035C30u;
            return;
    }

label_80105788:
    ctx->downcount -= 5;
    // 80105788: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010578C:
    // 8010578C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105790:
    // 80105790: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80105794:
    // 80105794: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_80105798:
    // 80105798: bl      0x80039E30
    {
            ctx->lr = 0x8010579Cu;
            ctx->pc = 0x80039E30u;
            return;
    }

label_8010579C:
    ctx->downcount -= 4;
    // 8010579C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_801057A0:
    // 801057A0: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_801057A4:
    // 801057A4: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_801057A8:
    // 801057A8: bl      0x801060E8
    {
            ctx->lr = 0x801057ACu;
            goto label_801060E8;
    }

label_801057AC:
    ctx->downcount -= 5;
    // 801057AC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_801057B0:
    // 801057B0: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_801057B4:
    // 801057B4: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_801057B8:
    // 801057B8: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_801057BC:
    // 801057BC: bl      0x801065F0
    {
            ctx->lr = 0x801057C0u;
            goto label_801065F0;
    }

label_801057C0:
    ctx->downcount -= 1;
    // 801057C0: addis   r25, r25, 2
    ctx->gpr[25] = ctx->gpr[25] + ((u32)(s32)(2) << 16);

label_801057C4:
    ctx->downcount -= 2;
    // 801057C4: cmpwi   r18, 0
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

label_801057C8:
    // 801057C8: bc    12, 2, 0x80105834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105834;
        }
    }

label_801057CC:
    ctx->downcount -= 5;
    // 801057CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801057D0:
    // 801057D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801057D4:
    // 801057D4: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_801057D8:
    // 801057D8: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_801057DC:
    // 801057DC: bl      0x80035BC0
    {
            ctx->lr = 0x801057E0u;
            ctx->pc = 0x80035BC0u;
            return;
    }

label_801057E0:
    ctx->downcount -= 5;
    // 801057E0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_801057E4:
    // 801057E4: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_801057E8:
    // 801057E8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_801057EC:
    // 801057EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801057F0:
    // 801057F0: bl      0x80035C30
    {
            ctx->lr = 0x801057F4u;
            ctx->pc = 0x80035C30u;
            return;
    }

label_801057F4:
    ctx->downcount -= 5;
    // 801057F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801057F8:
    // 801057F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801057FC:
    // 801057FC: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_80105800:
    // 80105800: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_80105804:
    // 80105804: bl      0x80039E30
    {
            ctx->lr = 0x80105808u;
            ctx->pc = 0x80039E30u;
            return;
    }

label_80105808:
    ctx->downcount -= 4;
    // 80105808: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_8010580C:
    // 8010580C: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80105810:
    // 80105810: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_80105814:
    // 80105814: bl      0x801060E8
    {
            ctx->lr = 0x80105818u;
            goto label_801060E8;
    }

label_80105818:
    ctx->downcount -= 5;
    // 80105818: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8010581C:
    // 8010581C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_80105820:
    // 80105820: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80105824:
    // 80105824: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_80105828:
    // 80105828: bl      0x801065F0
    {
            ctx->lr = 0x8010582Cu;
            goto label_801065F0;
    }

label_8010582C:
    ctx->downcount -= 2;
    // 8010582C: addis   r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + ((u32)(s32)(1) << 16);

label_80105830:
    // 80105830: addi    r25, r25, -32768
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(-32768);

label_80105834:
    ctx->downcount -= 2;
    // 80105834: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105838:
    // 80105838: bc    12, 2, 0x801058A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801058A0;
        }
    }

label_8010583C:
    ctx->downcount -= 5;
    // 8010583C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105840:
    // 80105840: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105844:
    // 80105844: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80105848:
    // 80105848: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_8010584C:
    // 8010584C: bl      0x80035BC0
    {
            ctx->lr = 0x80105850u;
            ctx->pc = 0x80035BC0u;
            return;
    }

label_80105850:
    ctx->downcount -= 5;
    // 80105850: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_80105854:
    // 80105854: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80105858:
    // 80105858: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_8010585C:
    // 8010585C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105860:
    // 80105860: bl      0x80035C30
    {
            ctx->lr = 0x80105864u;
            ctx->pc = 0x80035C30u;
            return;
    }

label_80105864:
    ctx->downcount -= 5;
    // 80105864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105868:
    // 80105868: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8010586C:
    // 8010586C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80105870:
    // 80105870: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_80105874:
    // 80105874: bl      0x80039E30
    {
            ctx->lr = 0x80105878u;
            ctx->pc = 0x80039E30u;
            return;
    }

label_80105878:
    ctx->downcount -= 4;
    // 80105878: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_8010587C:
    // 8010587C: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80105880:
    // 80105880: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80105884:
    // 80105884: bl      0x801060E8
    {
            ctx->lr = 0x80105888u;
            goto label_801060E8;
    }

label_80105888:
    ctx->downcount -= 5;
    // 80105888: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8010588C:
    // 8010588C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_80105890:
    // 80105890: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80105894:
    // 80105894: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_80105898:
    // 80105898: bl      0x801065F0
    {
            ctx->lr = 0x8010589Cu;
            goto label_801065F0;
    }

label_8010589C:
    ctx->downcount -= 1;
    // 8010589C: addi    r25, r25, 8192
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(8192);

label_801058A0:
    ctx->downcount -= 2;
    // 801058A0: cmpwi   r23, 0
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

label_801058A4:
    // 801058A4: bc    12, 2, 0x80105908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105908;
        }
    }

label_801058A8:
    ctx->downcount -= 5;
    // 801058A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801058AC:
    // 801058AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801058B0:
    // 801058B0: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_801058B4:
    // 801058B4: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_801058B8:
    // 801058B8: bl      0x80035BC0
    {
            ctx->lr = 0x801058BCu;
            ctx->pc = 0x80035BC0u;
            return;
    }

label_801058BC:
    ctx->downcount -= 5;
    // 801058BC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_801058C0:
    // 801058C0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_801058C4:
    // 801058C4: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_801058C8:
    // 801058C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801058CC:
    // 801058CC: bl      0x80035C30
    {
            ctx->lr = 0x801058D0u;
            ctx->pc = 0x80035C30u;
            return;
    }

label_801058D0:
    ctx->downcount -= 5;
    // 801058D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801058D4:
    // 801058D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801058D8:
    // 801058D8: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_801058DC:
    // 801058DC: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_801058E0:
    // 801058E0: bl      0x80039E30
    {
            ctx->lr = 0x801058E4u;
            ctx->pc = 0x80039E30u;
            return;
    }

label_801058E4:
    ctx->downcount -= 4;
    // 801058E4: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_801058E8:
    // 801058E8: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_801058EC:
    // 801058EC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_801058F0:
    // 801058F0: bl      0x801060E8
    {
            ctx->lr = 0x801058F4u;
            goto label_801060E8;
    }

label_801058F4:
    ctx->downcount -= 5;
    // 801058F4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_801058F8:
    // 801058F8: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_801058FC:
    // 801058FC: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80105900:
    // 80105900: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_80105904:
    // 80105904: bl      0x801065F0
    {
            ctx->lr = 0x80105908u;
            goto label_801065F0;
    }

label_80105908:
    ctx->downcount -= 6;
    // 80105908: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8010590C:
    // 8010590C: addi    r14, r14, 512
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(512);

label_80105910:
    // 80105910: cmpwi   r24, 7
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105914:
    // 80105914: addi    r15, r15, 80
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(80);

label_80105918:
    // 80105918: addi    r16, r16, 4
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(4);

label_8010591C:
    // 8010591C: bc    12, 0, 0x8010574C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8010574Cu;
                return;
            }
            goto label_8010574C;
        }
    }

label_80105920:
    ctx->pc = 0x80105920u;
    ctx->downcount -= 3;
    // 80105920: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105924:
    ctx->pc = 0x80105924u;
    // 80105924: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105928:
    ctx->pc = 0x80105928u;
    // 80105928: bc    12, 2, 0x80105930
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105930;
        }
    }

label_8010592C:
    ctx->pc = 0x8010592Cu;
    ctx->downcount -= 1;
    // 8010592C: bl      0x800FF500
    {
            ctx->lr = 0x80105930u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105930:
    ctx->pc = 0x80105930u;
    ctx->downcount -= 2;
    // 80105930: cmpwi   r22, 0
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

label_80105934:
    ctx->pc = 0x80105934u;
    // 80105934: bc    12, 2, 0x80105940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105940;
        }
    }

label_80105938:
    ctx->pc = 0x80105938u;
    ctx->downcount -= 2;
    // 80105938: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8010593C:
    ctx->pc = 0x8010593Cu;
    // 8010593C: bl      0x800FF500
    {
            ctx->lr = 0x80105940u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105940:
    ctx->pc = 0x80105940u;
    ctx->downcount -= 3;
    // 80105940: lwz     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105944:
    ctx->pc = 0x80105944u;
    // 80105944: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105948:
    ctx->pc = 0x80105948u;
    // 80105948: bc    12, 2, 0x80105950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105950;
        }
    }

label_8010594C:
    ctx->pc = 0x8010594Cu;
    ctx->downcount -= 1;
    // 8010594C: bl      0x800FF500
    {
            ctx->lr = 0x80105950u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105950:
    ctx->pc = 0x80105950u;
    ctx->downcount -= 2;
    // 80105950: cmpwi   r21, 0
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

label_80105954:
    ctx->pc = 0x80105954u;
    // 80105954: bc    12, 2, 0x80105960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105960;
        }
    }

label_80105958:
    ctx->pc = 0x80105958u;
    ctx->downcount -= 2;
    // 80105958: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8010595C:
    ctx->pc = 0x8010595Cu;
    // 8010595C: bl      0x800FF500
    {
            ctx->lr = 0x80105960u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105960:
    ctx->pc = 0x80105960u;
    ctx->downcount -= 2;
    // 80105960: cmpwi   r20, 0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105964:
    ctx->pc = 0x80105964u;
    // 80105964: bc    12, 2, 0x80105970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105970;
        }
    }

label_80105968:
    ctx->pc = 0x80105968u;
    ctx->downcount -= 2;
    // 80105968: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8010596C:
    ctx->pc = 0x8010596Cu;
    // 8010596C: bl      0x800FF500
    {
            ctx->lr = 0x80105970u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105970:
    ctx->pc = 0x80105970u;
    ctx->downcount -= 3;
    // 80105970: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105974:
    ctx->pc = 0x80105974u;
    // 80105974: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105978:
    ctx->pc = 0x80105978u;
    // 80105978: bc    12, 2, 0x80105980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105980;
        }
    }

label_8010597C:
    ctx->pc = 0x8010597Cu;
    ctx->downcount -= 1;
    // 8010597C: bl      0x800FF500
    {
            ctx->lr = 0x80105980u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105980:
    ctx->pc = 0x80105980u;
    ctx->downcount -= 3;
    // 80105980: lwz     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105984:
    ctx->pc = 0x80105984u;
    // 80105984: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105988:
    ctx->pc = 0x80105988u;
    // 80105988: bc    12, 2, 0x80105990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80105990;
        }
    }

label_8010598C:
    ctx->pc = 0x8010598Cu;
    ctx->downcount -= 1;
    // 8010598C: bl      0x800FF500
    {
            ctx->lr = 0x80105990u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_80105990:
    ctx->pc = 0x80105990u;
    ctx->downcount -= 3;
    // 80105990: lwz     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80105994:
    ctx->pc = 0x80105994u;
    // 80105994: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80105998:
    ctx->pc = 0x80105998u;
    // 80105998: bc    12, 2, 0x801059A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801059A0;
        }
    }

label_8010599C:
    ctx->pc = 0x8010599Cu;
    ctx->downcount -= 1;
    // 8010599C: bl      0x800FF500
    {
            ctx->lr = 0x801059A0u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_801059A0:
    ctx->pc = 0x801059A0u;
    ctx->downcount -= 3;
    // 801059A0: lwz     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801059A4:
    ctx->pc = 0x801059A4u;
    // 801059A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801059A8:
    ctx->pc = 0x801059A8u;
    // 801059A8: bc    12, 2, 0x801059B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801059B0;
        }
    }

label_801059AC:
    ctx->pc = 0x801059ACu;
    ctx->downcount -= 1;
    // 801059AC: bl      0x800FF500
    {
            ctx->lr = 0x801059B0u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_801059B0:
    ctx->pc = 0x801059B0u;
    ctx->downcount -= 3;
    // 801059B0: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801059B4:
    ctx->pc = 0x801059B4u;
    // 801059B4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801059B8:
    ctx->pc = 0x801059B8u;
    // 801059B8: bc    12, 2, 0x801059C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801059C0;
        }
    }

label_801059BC:
    ctx->pc = 0x801059BCu;
    ctx->downcount -= 1;
    // 801059BC: bl      0x800FF500
    {
            ctx->lr = 0x801059C0u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_801059C0:
    ctx->pc = 0x801059C0u;
    ctx->downcount -= 3;
    // 801059C0: lwz     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801059C4:
    ctx->pc = 0x801059C4u;
    // 801059C4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801059C8:
    ctx->pc = 0x801059C8u;
    // 801059C8: bc    12, 2, 0x801059D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801059D0;
        }
    }

label_801059CC:
    ctx->pc = 0x801059CCu;
    ctx->downcount -= 1;
    // 801059CC: bl      0x800FF500
    {
            ctx->lr = 0x801059D0u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_801059D0:
    ctx->pc = 0x801059D0u;
    ctx->downcount -= 3;
    // 801059D0: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801059D4:
    ctx->pc = 0x801059D4u;
    // 801059D4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801059D8:
    ctx->pc = 0x801059D8u;
    // 801059D8: bc    12, 2, 0x801059E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801059E0;
        }
    }

label_801059DC:
    ctx->pc = 0x801059DCu;
    ctx->downcount -= 1;
    // 801059DC: bl      0x800FF500
    {
            ctx->lr = 0x801059E0u;
            ctx->pc = 0x800FF500u;
            return;
    }

label_801059E0:
    ctx->pc = 0x801059E0u;
    ctx->downcount -= 5;
    // 801059E0: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801059E4:
    ctx->pc = 0x801059E4u;
    // 801059E4: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_801059E8:
    ctx->pc = 0x801059E8u;
    // 801059E8: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_801059EC:
    ctx->pc = 0x801059ECu;
    // 801059EC: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_801059F0:
    ctx->pc = 0x801059F0u;
    // 801059F0: bl      0x80039E30
    {
            ctx->lr = 0x801059F4u;
            ctx->pc = 0x80039E30u;
            return;
    }

label_801059F4:
    ctx->pc = 0x801059F4u;
    ctx->downcount -= 5;
    // 801059F4: li      r0, 4472
    ctx->gpr[0] = (u32)(s32)(4472);

label_801059F8:
    ctx->pc = 0x801059F8u;
    // 801059F8: psq_lx   f31, r1, r0, 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801059F8u)) return;
    {
        u32 ea = ctx->gpr[1] + ctx->gpr[0];
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, true, 0x801059F8u);
        if (ctx->exception) return;
    }

label_801059FC:
    ctx->pc = 0x801059FCu;
    // 801059FC: addi    r11, r1, 4464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(4464);

label_80105A00:
    ctx->pc = 0x80105A00u;
    // 80105A00: lfd     f31, 4464(r1)
    if (!ppc_fp_available_inline(ctx, 0x80105A00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4464);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80105A04:
    ctx->pc = 0x80105A04u;
    // 80105A04: bl      0x80007870
    {
            ctx->lr = 0x80105A08u;
            ctx->pc = 0x80007870u;
            return;
    }

label_80105A08:
    ctx->pc = 0x80105A08u;
    ctx->downcount -= 5;
    // 80105A08: lwz     r0, 4484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105A0C:
    ctx->pc = 0x80105A0Cu;
    // 80105A0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80105A10:
    ctx->pc = 0x80105A10u;
    // 80105A10: addi    r1, r1, 4480
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(4480);

label_80105A14:
    ctx->pc = 0x80105A14u;
    // 80105A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80105A18:
    ctx->pc = 0x80105A18u;
    ctx->downcount -= 11;
    // 80105A18: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80105A1C:
    ctx->pc = 0x80105A1Cu;
    // 80105A1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80105A20:
    ctx->pc = 0x80105A20u;
    // 80105A20: lfs     f1, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A20u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80105A24:
    ctx->pc = 0x80105A24u;
    // 80105A24: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80105A28:
    ctx->pc = 0x80105A28u;
    // 80105A28: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80105A2C:
    ctx->pc = 0x80105A2Cu;
    // 80105A2C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80105A2Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80105A30:
    ctx->pc = 0x80105A30u;
    // 80105A30: lfs     f2, -29688(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A30u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80105A34:
    ctx->pc = 0x80105A34u;
    // 80105A34: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80105A34u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80105A38:
    ctx->pc = 0x80105A38u;
    // 80105A38: lfs     f4, -29684(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A38u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80105A3C:
    ctx->pc = 0x80105A3Cu;
    // 80105A3C: lfs     f6, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A3Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80105A40:
    ctx->pc = 0x80105A40u;
    // 80105A40: bl      0x8003F690
    {
            ctx->lr = 0x80105A44u;
            ctx->pc = 0x8003F690u;
            return;
    }

label_80105A44:
    ctx->pc = 0x80105A44u;
    ctx->downcount -= 3;
    // 80105A44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80105A48:
    ctx->pc = 0x80105A48u;
    // 80105A48: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105A4C:
    ctx->pc = 0x80105A4Cu;
    // 80105A4C: bl      0x800399E0
    {
            ctx->lr = 0x80105A50u;
            ctx->pc = 0x800399E0u;
            return;
    }

label_80105A50:
    ctx->pc = 0x80105A50u;
    ctx->downcount -= 7;
    // 80105A50: lfs     f1, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A50u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80105A54:
    ctx->pc = 0x80105A54u;
    // 80105A54: lfs     f3, -29684(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A54u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80105A58:
    ctx->pc = 0x80105A58u;
    // 80105A58: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80105A58u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80105A5C:
    ctx->pc = 0x80105A5Cu;
    // 80105A5C: lfs     f4, -29688(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A5Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80105A60:
    ctx->pc = 0x80105A60u;
    // 80105A60: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80105A60u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80105A64:
    ctx->pc = 0x80105A64u;
    // 80105A64: lfs     f6, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A64u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80105A68:
    ctx->pc = 0x80105A68u;
    // 80105A68: bl      0x80039DB0
    {
            ctx->lr = 0x80105A6Cu;
            ctx->pc = 0x80039DB0u;
            return;
    }

label_80105A6C:
    ctx->pc = 0x80105A6Cu;
    ctx->downcount -= 3;
    // 80105A6C: lfs     f1, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A6Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80105A70:
    ctx->pc = 0x80105A70u;
    // 80105A70: lfs     f2, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80105A70u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80105A74:
    ctx->pc = 0x80105A74u;
    // 80105A74: bl      0x80039E00
    {
            ctx->lr = 0x80105A78u;
            ctx->pc = 0x80039E00u;
            return;
    }

label_80105A78:
    ctx->pc = 0x80105A78u;
    ctx->downcount -= 2;
    // 80105A78: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105A7C:
    ctx->pc = 0x80105A7Cu;
    // 80105A7C: bl      0x80035AC0
    {
            ctx->lr = 0x80105A80u;
            ctx->pc = 0x80035AC0u;
            return;
    }

label_80105A80:
    ctx->pc = 0x80105A80u;
    ctx->downcount -= 4;
    // 80105A80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105A84:
    ctx->pc = 0x80105A84u;
    // 80105A84: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80105A88:
    ctx->pc = 0x80105A88u;
    // 80105A88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105A8C:
    ctx->pc = 0x80105A8Cu;
    // 80105A8C: bl      0x800391A0
    {
            ctx->lr = 0x80105A90u;
            ctx->pc = 0x800391A0u;
            return;
    }

label_80105A90:
    ctx->pc = 0x80105A90u;
    ctx->downcount -= 2;
    // 80105A90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105A94:
    ctx->pc = 0x80105A94u;
    // 80105A94: bl      0x800391E0
    {
            ctx->lr = 0x80105A98u;
            ctx->pc = 0x800391E0u;
            return;
    }

label_80105A98:
    ctx->pc = 0x80105A98u;
    ctx->downcount -= 6;
    // 80105A98: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80105A9C:
    ctx->pc = 0x80105A9Cu;
    // 80105A9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105AA0:
    ctx->pc = 0x80105AA0u;
    // 80105AA0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105AA4:
    ctx->pc = 0x80105AA4u;
    // 80105AA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105AA8:
    ctx->pc = 0x80105AA8u;
    // 80105AA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105AAC:
    ctx->pc = 0x80105AACu;
    // 80105AAC: bl      0x800389F0
    {
            ctx->lr = 0x80105AB0u;
            ctx->pc = 0x800389F0u;
            return;
    }

label_80105AB0:
    ctx->pc = 0x80105AB0u;
    ctx->downcount -= 2;
    // 80105AB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105AB4:
    ctx->pc = 0x80105AB4u;
    // 80105AB4: bl      0x80039170
    {
            ctx->lr = 0x80105AB8u;
            ctx->pc = 0x80039170u;
            return;
    }

label_80105AB8:
    ctx->pc = 0x80105AB8u;
    ctx->downcount -= 2;
    // 80105AB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105ABC:
    ctx->pc = 0x80105ABCu;
    // 80105ABC: bl      0x800392C0
    {
            ctx->lr = 0x80105AC0u;
            ctx->pc = 0x800392C0u;
            return;
    }

label_80105AC0:
    ctx->pc = 0x80105AC0u;
    ctx->downcount -= 1;
    // 80105AC0: bl      0x800341F0
    {
            ctx->lr = 0x80105AC4u;
            ctx->pc = 0x800341F0u;
            return;
    }

label_80105AC4:
    ctx->pc = 0x80105AC4u;
    ctx->downcount -= 1;
    // 80105AC4: bl      0x80034940
    {
            ctx->lr = 0x80105AC8u;
            ctx->pc = 0x80034940u;
            return;
    }

label_80105AC8:
    ctx->pc = 0x80105AC8u;
    ctx->downcount -= 3;
    // 80105AC8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80105ACC:
    ctx->pc = 0x80105ACCu;
    // 80105ACC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105AD0:
    ctx->pc = 0x80105AD0u;
    // 80105AD0: bl      0x80033940
    {
            ctx->lr = 0x80105AD4u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80105AD4:
    ctx->pc = 0x80105AD4u;
    ctx->downcount -= 3;
    // 80105AD4: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_80105AD8:
    ctx->pc = 0x80105AD8u;
    // 80105AD8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105ADC:
    ctx->pc = 0x80105ADCu;
    // 80105ADC: bl      0x80033940
    {
            ctx->lr = 0x80105AE0u;
            ctx->pc = 0x80033940u;
            return;
    }

label_80105AE0:
    ctx->pc = 0x80105AE0u;
    ctx->downcount -= 3;
    // 80105AE0: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80105AE4:
    ctx->pc = 0x80105AE4u;
    // 80105AE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105AE8:
    ctx->pc = 0x80105AE8u;
    // 80105AE8: bl      0x80033940
    {
            ctx->lr = 0x80105AECu;
            ctx->pc = 0x80033940u;
            return;
    }

label_80105AEC:
    ctx->pc = 0x80105AECu;
    ctx->downcount -= 6;
    // 80105AEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105AF0:
    ctx->pc = 0x80105AF0u;
    // 80105AF0: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80105AF4:
    ctx->pc = 0x80105AF4u;
    // 80105AF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105AF8:
    ctx->pc = 0x80105AF8u;
    // 80105AF8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105AFC:
    ctx->pc = 0x80105AFCu;
    // 80105AFC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105B00:
    ctx->pc = 0x80105B00u;
    // 80105B00: bl      0x80034230
    {
            ctx->lr = 0x80105B04u;
            ctx->pc = 0x80034230u;
            return;
    }

label_80105B04:
    ctx->pc = 0x80105B04u;
    ctx->downcount -= 6;
    // 80105B04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105B08:
    ctx->pc = 0x80105B08u;
    // 80105B08: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80105B0C:
    ctx->pc = 0x80105B0Cu;
    // 80105B0C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105B10:
    ctx->pc = 0x80105B10u;
    // 80105B10: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80105B14:
    ctx->pc = 0x80105B14u;
    // 80105B14: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105B18:
    ctx->pc = 0x80105B18u;
    // 80105B18: bl      0x80034230
    {
            ctx->lr = 0x80105B1Cu;
            ctx->pc = 0x80034230u;
            return;
    }

label_80105B1C:
    ctx->pc = 0x80105B1Cu;
    ctx->downcount -= 6;
    // 80105B1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105B20:
    ctx->pc = 0x80105B20u;
    // 80105B20: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80105B24:
    ctx->pc = 0x80105B24u;
    // 80105B24: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105B28:
    ctx->pc = 0x80105B28u;
    // 80105B28: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80105B2C:
    ctx->pc = 0x80105B2Cu;
    // 80105B2C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80105B30:
    ctx->pc = 0x80105B30u;
    // 80105B30: bl      0x80034230
    {
            ctx->lr = 0x80105B34u;
            ctx->pc = 0x80034230u;
            return;
    }

label_80105B34:
    ctx->pc = 0x80105B34u;
    ctx->downcount -= 2;
    // 80105B34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105B38:
    ctx->pc = 0x80105B38u;
    // 80105B38: bl      0x80036D60
    {
            ctx->lr = 0x80105B3Cu;
            ctx->pc = 0x80036D60u;
            return;
    }

label_80105B3C:
    ctx->pc = 0x80105B3Cu;
    ctx->downcount -= 8;
    // 80105B3C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80105B40:
    ctx->pc = 0x80105B40u;
    // 80105B40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105B44:
    ctx->pc = 0x80105B44u;
    // 80105B44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105B48:
    ctx->pc = 0x80105B48u;
    // 80105B48: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80105B4C:
    ctx->pc = 0x80105B4Cu;
    // 80105B4C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105B50:
    ctx->pc = 0x80105B50u;
    // 80105B50: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105B54:
    ctx->pc = 0x80105B54u;
    // 80105B54: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_80105B58:
    ctx->pc = 0x80105B58u;
    // 80105B58: bl      0x80036D90
    {
            ctx->lr = 0x80105B5Cu;
            ctx->pc = 0x80036D90u;
            return;
    }

label_80105B5C:
    ctx->pc = 0x80105B5Cu;
    ctx->downcount -= 2;
    // 80105B5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105B60:
    ctx->pc = 0x80105B60u;
    // 80105B60: bl      0x80034BA0
    {
            ctx->lr = 0x80105B64u;
            ctx->pc = 0x80034BA0u;
            return;
    }

label_80105B64:
    ctx->pc = 0x80105B64u;
    ctx->downcount -= 7;
    // 80105B64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105B68:
    ctx->pc = 0x80105B68u;
    // 80105B68: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105B6C:
    ctx->pc = 0x80105B6Cu;
    // 80105B6C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80105B70:
    ctx->pc = 0x80105B70u;
    // 80105B70: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80105B74:
    ctx->pc = 0x80105B74u;
    // 80105B74: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105B78:
    ctx->pc = 0x80105B78u;
    // 80105B78: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80105B7C:
    ctx->pc = 0x80105B7Cu;
    // 80105B7C: bl      0x80034950
    {
            ctx->lr = 0x80105B80u;
            ctx->pc = 0x80034950u;
            return;
    }

label_80105B80:
    ctx->pc = 0x80105B80u;
    ctx->downcount -= 6;
    // 80105B80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105B84:
    ctx->pc = 0x80105B84u;
    // 80105B84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105B88:
    ctx->pc = 0x80105B88u;
    // 80105B88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105B8C:
    ctx->pc = 0x80105B8Cu;
    // 80105B8C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80105B90:
    ctx->pc = 0x80105B90u;
    // 80105B90: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80105B94:
    ctx->pc = 0x80105B94u;
    // 80105B94: bl      0x80038970
    {
            ctx->lr = 0x80105B98u;
            ctx->pc = 0x80038970u;
            return;
    }

label_80105B98:
    ctx->pc = 0x80105B98u;
    ctx->downcount -= 6;
    // 80105B98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105B9C:
    ctx->pc = 0x80105B9Cu;
    // 80105B9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105BA0:
    ctx->pc = 0x80105BA0u;
    // 80105BA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105BA4:
    ctx->pc = 0x80105BA4u;
    // 80105BA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105BA8:
    ctx->pc = 0x80105BA8u;
    // 80105BA8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80105BAC:
    ctx->pc = 0x80105BACu;
    // 80105BAC: bl      0x80038970
    {
            ctx->lr = 0x80105BB0u;
            ctx->pc = 0x80038970u;
            return;
    }

label_80105BB0:
    ctx->pc = 0x80105BB0u;
    ctx->downcount -= 6;
    // 80105BB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105BB4:
    ctx->pc = 0x80105BB4u;
    // 80105BB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105BB8:
    ctx->pc = 0x80105BB8u;
    // 80105BB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105BBC:
    ctx->pc = 0x80105BBCu;
    // 80105BBC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80105BC0:
    ctx->pc = 0x80105BC0u;
    // 80105BC0: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80105BC4:
    ctx->pc = 0x80105BC4u;
    // 80105BC4: bl      0x80038970
    {
            ctx->lr = 0x80105BC8u;
            ctx->pc = 0x80038970u;
            return;
    }

label_80105BC8:
    ctx->pc = 0x80105BC8u;
    ctx->downcount -= 6;
    // 80105BC8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80105BCC:
    ctx->pc = 0x80105BCCu;
    // 80105BCC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80105BD0:
    ctx->pc = 0x80105BD0u;
    // 80105BD0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80105BD4:
    ctx->pc = 0x80105BD4u;
    // 80105BD4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80105BD8:
    ctx->pc = 0x80105BD8u;
    // 80105BD8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80105BDC:
    ctx->pc = 0x80105BDCu;
    // 80105BDC: bl      0x80038970
    {
            ctx->lr = 0x80105BE0u;
            ctx->pc = 0x80038970u;
            return;
    }

label_80105BE0:
    ctx->pc = 0x80105BE0u;
    ctx->downcount -= 5;
    // 80105BE0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105BE4:
    ctx->pc = 0x80105BE4u;
    // 80105BE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80105BE8:
    ctx->pc = 0x80105BE8u;
    // 80105BE8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80105BEC:
    ctx->pc = 0x80105BECu;
    // 80105BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80105BF0:
    ctx->pc = 0x80105BF0u;
    ctx->downcount -= 7;
    // 80105BF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80105BF4:
    ctx->pc = 0x80105BF4u;
    // 80105BF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80105BF8:
    ctx->pc = 0x80105BF8u;
    // 80105BF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80105BFC:
    ctx->pc = 0x80105BFCu;
    // 80105BFC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80105C00:
    ctx->pc = 0x80105C00u;
    // 80105C00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80105C04:
    ctx->pc = 0x80105C04u;
    // 80105C04: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80105C08:
    ctx->pc = 0x80105C08u;
    // 80105C08: bl      0x80038C20
    {
            ctx->lr = 0x80105C0Cu;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80105C0C:
    ctx->pc = 0x80105C0Cu;
    ctx->downcount -= 4;
    // 80105C0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C10:
    ctx->pc = 0x80105C10u;
    // 80105C10: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105C14:
    ctx->pc = 0x80105C14u;
    // 80105C14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105C18:
    ctx->pc = 0x80105C18u;
    // 80105C18: bl      0x80038930
    {
            ctx->lr = 0x80105C1Cu;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105C1C:
    ctx->pc = 0x80105C1Cu;
    ctx->downcount -= 5;
    // 80105C1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C20:
    ctx->pc = 0x80105C20u;
    // 80105C20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105C24:
    ctx->pc = 0x80105C24u;
    // 80105C24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105C28:
    ctx->pc = 0x80105C28u;
    // 80105C28: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105C2C:
    ctx->pc = 0x80105C2Cu;
    // 80105C2C: bl      0x80038AC0
    {
            ctx->lr = 0x80105C30u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105C30:
    ctx->pc = 0x80105C30u;
    ctx->downcount -= 6;
    // 80105C30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C34:
    ctx->pc = 0x80105C34u;
    // 80105C34: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105C38:
    ctx->pc = 0x80105C38u;
    // 80105C38: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80105C3C:
    ctx->pc = 0x80105C3Cu;
    // 80105C3C: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105C40:
    ctx->pc = 0x80105C40u;
    // 80105C40: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80105C44:
    ctx->pc = 0x80105C44u;
    // 80105C44: bl      0x80038620
    {
            ctx->lr = 0x80105C48u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105C48:
    ctx->pc = 0x80105C48u;
    ctx->downcount -= 6;
    // 80105C48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C4C:
    ctx->pc = 0x80105C4Cu;
    // 80105C4C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105C50:
    ctx->pc = 0x80105C50u;
    // 80105C50: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105C54:
    ctx->pc = 0x80105C54u;
    // 80105C54: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105C58:
    ctx->pc = 0x80105C58u;
    // 80105C58: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80105C5C:
    ctx->pc = 0x80105C5Cu;
    // 80105C5C: bl      0x80038660
    {
            ctx->lr = 0x80105C60u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105C60:
    ctx->pc = 0x80105C60u;
    ctx->downcount -= 7;
    // 80105C60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C64:
    ctx->pc = 0x80105C64u;
    // 80105C64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105C68:
    ctx->pc = 0x80105C68u;
    // 80105C68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105C6C:
    ctx->pc = 0x80105C6Cu;
    // 80105C6C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105C70:
    ctx->pc = 0x80105C70u;
    // 80105C70: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105C74:
    ctx->pc = 0x80105C74u;
    // 80105C74: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105C78:
    ctx->pc = 0x80105C78u;
    // 80105C78: bl      0x800386A0
    {
            ctx->lr = 0x80105C7Cu;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105C7C:
    ctx->pc = 0x80105C7Cu;
    ctx->downcount -= 7;
    // 80105C7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105C80:
    ctx->pc = 0x80105C80u;
    // 80105C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105C84:
    ctx->pc = 0x80105C84u;
    // 80105C84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105C88:
    ctx->pc = 0x80105C88u;
    // 80105C88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105C8C:
    ctx->pc = 0x80105C8Cu;
    // 80105C8C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105C90:
    ctx->pc = 0x80105C90u;
    // 80105C90: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105C94:
    ctx->pc = 0x80105C94u;
    // 80105C94: bl      0x80038700
    {
            ctx->lr = 0x80105C98u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80105C98:
    ctx->pc = 0x80105C98u;
    ctx->downcount -= 4;
    // 80105C98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105C9C:
    ctx->pc = 0x80105C9Cu;
    // 80105C9C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80105CA0:
    ctx->pc = 0x80105CA0u;
    // 80105CA0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80105CA4:
    ctx->pc = 0x80105CA4u;
    // 80105CA4: bl      0x80038930
    {
            ctx->lr = 0x80105CA8u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105CA8:
    ctx->pc = 0x80105CA8u;
    ctx->downcount -= 5;
    // 80105CA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105CAC:
    ctx->pc = 0x80105CACu;
    // 80105CAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105CB0:
    ctx->pc = 0x80105CB0u;
    // 80105CB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105CB4:
    ctx->pc = 0x80105CB4u;
    // 80105CB4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105CB8:
    ctx->pc = 0x80105CB8u;
    // 80105CB8: bl      0x80038AC0
    {
            ctx->lr = 0x80105CBCu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105CBC:
    ctx->pc = 0x80105CBCu;
    ctx->downcount -= 6;
    // 80105CBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105CC0:
    ctx->pc = 0x80105CC0u;
    // 80105CC0: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105CC4:
    ctx->pc = 0x80105CC4u;
    // 80105CC4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80105CC8:
    ctx->pc = 0x80105CC8u;
    // 80105CC8: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105CCC:
    ctx->pc = 0x80105CCCu;
    // 80105CCC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105CD0:
    ctx->pc = 0x80105CD0u;
    // 80105CD0: bl      0x80038620
    {
            ctx->lr = 0x80105CD4u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105CD4:
    ctx->pc = 0x80105CD4u;
    ctx->downcount -= 6;
    // 80105CD4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105CD8:
    ctx->pc = 0x80105CD8u;
    // 80105CD8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105CDC:
    ctx->pc = 0x80105CDCu;
    // 80105CDC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105CE0:
    ctx->pc = 0x80105CE0u;
    // 80105CE0: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105CE4:
    ctx->pc = 0x80105CE4u;
    // 80105CE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105CE8:
    ctx->pc = 0x80105CE8u;
    // 80105CE8: bl      0x80038660
    {
            ctx->lr = 0x80105CECu;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105CEC:
    ctx->pc = 0x80105CECu;
    ctx->downcount -= 7;
    // 80105CEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105CF0:
    ctx->pc = 0x80105CF0u;
    // 80105CF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105CF4:
    ctx->pc = 0x80105CF4u;
    // 80105CF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105CF8:
    ctx->pc = 0x80105CF8u;
    // 80105CF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105CFC:
    ctx->pc = 0x80105CFCu;
    // 80105CFC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105D00:
    ctx->pc = 0x80105D00u;
    // 80105D00: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105D04:
    ctx->pc = 0x80105D04u;
    // 80105D04: bl      0x800386A0
    {
            ctx->lr = 0x80105D08u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105D08:
    ctx->pc = 0x80105D08u;
    ctx->downcount -= 7;
    // 80105D08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105D0C:
    ctx->pc = 0x80105D0Cu;
    // 80105D0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105D10:
    ctx->pc = 0x80105D10u;
    // 80105D10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105D14:
    ctx->pc = 0x80105D14u;
    // 80105D14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105D18:
    ctx->pc = 0x80105D18u;
    // 80105D18: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105D1C:
    ctx->pc = 0x80105D1Cu;
    // 80105D1C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105D20:
    ctx->pc = 0x80105D20u;
    // 80105D20: bl      0x80038700
    {
            ctx->lr = 0x80105D24u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80105D24:
    ctx->pc = 0x80105D24u;
    ctx->downcount -= 4;
    // 80105D24: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D28:
    ctx->pc = 0x80105D28u;
    // 80105D28: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80105D2C:
    ctx->pc = 0x80105D2Cu;
    // 80105D2C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80105D30:
    ctx->pc = 0x80105D30u;
    // 80105D30: bl      0x80038930
    {
            ctx->lr = 0x80105D34u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105D34:
    ctx->pc = 0x80105D34u;
    ctx->downcount -= 5;
    // 80105D34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D38:
    ctx->pc = 0x80105D38u;
    // 80105D38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105D3C:
    ctx->pc = 0x80105D3Cu;
    // 80105D3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105D40:
    ctx->pc = 0x80105D40u;
    // 80105D40: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105D44:
    ctx->pc = 0x80105D44u;
    // 80105D44: bl      0x80038AC0
    {
            ctx->lr = 0x80105D48u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105D48:
    ctx->pc = 0x80105D48u;
    ctx->downcount -= 6;
    // 80105D48: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D4C:
    ctx->pc = 0x80105D4Cu;
    // 80105D4C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105D50:
    ctx->pc = 0x80105D50u;
    // 80105D50: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80105D54:
    ctx->pc = 0x80105D54u;
    // 80105D54: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105D58:
    ctx->pc = 0x80105D58u;
    // 80105D58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105D5C:
    ctx->pc = 0x80105D5Cu;
    // 80105D5C: bl      0x80038620
    {
            ctx->lr = 0x80105D60u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105D60:
    ctx->pc = 0x80105D60u;
    ctx->downcount -= 6;
    // 80105D60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D64:
    ctx->pc = 0x80105D64u;
    // 80105D64: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105D68:
    ctx->pc = 0x80105D68u;
    // 80105D68: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105D6C:
    ctx->pc = 0x80105D6Cu;
    // 80105D6C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105D70:
    ctx->pc = 0x80105D70u;
    // 80105D70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105D74:
    ctx->pc = 0x80105D74u;
    // 80105D74: bl      0x80038660
    {
            ctx->lr = 0x80105D78u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105D78:
    ctx->pc = 0x80105D78u;
    ctx->downcount -= 7;
    // 80105D78: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D7C:
    ctx->pc = 0x80105D7Cu;
    // 80105D7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105D80:
    ctx->pc = 0x80105D80u;
    // 80105D80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105D84:
    ctx->pc = 0x80105D84u;
    // 80105D84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105D88:
    ctx->pc = 0x80105D88u;
    // 80105D88: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105D8C:
    ctx->pc = 0x80105D8Cu;
    // 80105D8C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105D90:
    ctx->pc = 0x80105D90u;
    // 80105D90: bl      0x800386A0
    {
            ctx->lr = 0x80105D94u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105D94:
    ctx->pc = 0x80105D94u;
    ctx->downcount -= 7;
    // 80105D94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105D98:
    ctx->pc = 0x80105D98u;
    // 80105D98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105D9C:
    ctx->pc = 0x80105D9Cu;
    // 80105D9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105DA0:
    ctx->pc = 0x80105DA0u;
    // 80105DA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105DA4:
    ctx->pc = 0x80105DA4u;
    // 80105DA4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105DA8:
    ctx->pc = 0x80105DA8u;
    // 80105DA8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105DAC:
    ctx->pc = 0x80105DACu;
    // 80105DAC: bl      0x80038700
    {
            ctx->lr = 0x80105DB0u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80105DB0:
    ctx->pc = 0x80105DB0u;
    ctx->downcount -= 15;
    // 80105DB0: lis     r3, -32666
    ctx->gpr[3] = ((u32)(s32)(-32666) << 16);

label_80105DB4:
    ctx->pc = 0x80105DB4u;
    // 80105DB4: rlwinm r31, r31, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80105DB8:
    ctx->pc = 0x80105DB8u;
    // 80105DB8: addi    r3, r3, -17896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17896);

label_80105DBC:
    ctx->pc = 0x80105DBCu;
    // 80105DBC: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80105DC0:
    ctx->pc = 0x80105DC0u;
    // 80105DC0: add   r8, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80105DC4:
    ctx->pc = 0x80105DC4u;
    // 80105DC4: lbz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105DC8:
    ctx->pc = 0x80105DC8u;
    // 80105DC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105DCC:
    ctx->pc = 0x80105DCCu;
    // 80105DCC: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80105DD0:
    ctx->pc = 0x80105DD0u;
    // 80105DD0: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105DD4:
    ctx->pc = 0x80105DD4u;
    // 80105DD4: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105DD8:
    ctx->pc = 0x80105DD8u;
    // 80105DD8: stb     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80105DDC:
    ctx->pc = 0x80105DDCu;
    // 80105DDC: stb     r6, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80105DE0:
    ctx->pc = 0x80105DE0u;
    // 80105DE0: stb     r5, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80105DE4:
    ctx->pc = 0x80105DE4u;
    // 80105DE4: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80105DE8:
    ctx->pc = 0x80105DE8u;
    // 80105DE8: bl      0x80038760
    {
            ctx->lr = 0x80105DECu;
            ctx->pc = 0x80038760u;
            return;
    }

label_80105DEC:
    ctx->pc = 0x80105DECu;
    ctx->downcount -= 14;
    // 80105DEC: lis     r5, -32666
    ctx->gpr[5] = ((u32)(s32)(-32666) << 16);

label_80105DF0:
    ctx->pc = 0x80105DF0u;
    // 80105DF0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80105DF4:
    ctx->pc = 0x80105DF4u;
    // 80105DF4: addi    r5, r5, -17884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17884);

label_80105DF8:
    ctx->pc = 0x80105DF8u;
    // 80105DF8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105DFC:
    ctx->pc = 0x80105DFCu;
    // 80105DFC: add   r8, r5, r31
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80105E00:
    ctx->pc = 0x80105E00u;
    // 80105E00: lbzx    r7, r5, r31
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[31];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80105E04:
    ctx->pc = 0x80105E04u;
    // 80105E04: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80105E08:
    ctx->pc = 0x80105E08u;
    // 80105E08: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80105E0C:
    ctx->pc = 0x80105E0Cu;
    // 80105E0C: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80105E10:
    ctx->pc = 0x80105E10u;
    // 80105E10: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80105E14:
    ctx->pc = 0x80105E14u;
    // 80105E14: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80105E18:
    ctx->pc = 0x80105E18u;
    // 80105E18: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80105E1C:
    ctx->pc = 0x80105E1Cu;
    // 80105E1C: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80105E20:
    ctx->pc = 0x80105E20u;
    // 80105E20: bl      0x80038760
    {
            ctx->lr = 0x80105E24u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80105E24:
    ctx->pc = 0x80105E24u;
    ctx->downcount -= 6;
    // 80105E24: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80105E28:
    ctx->pc = 0x80105E28u;
    // 80105E28: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80105E2C:
    ctx->pc = 0x80105E2Cu;
    // 80105E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80105E30:
    ctx->pc = 0x80105E30u;
    // 80105E30: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80105E34:
    ctx->pc = 0x80105E34u;
    // 80105E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80105E38:
    ctx->pc = 0x80105E38u;
    ctx->downcount -= 9;
    // 80105E38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80105E3C:
    ctx->pc = 0x80105E3Cu;
    // 80105E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80105E40:
    ctx->pc = 0x80105E40u;
    // 80105E40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80105E44:
    ctx->pc = 0x80105E44u;
    // 80105E44: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80105E48:
    ctx->pc = 0x80105E48u;
    // 80105E48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80105E4C:
    ctx->pc = 0x80105E4Cu;
    // 80105E4C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80105E50:
    ctx->pc = 0x80105E50u;
    // 80105E50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80105E54:
    ctx->pc = 0x80105E54u;
    // 80105E54: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80105E58:
    ctx->pc = 0x80105E58u;
    // 80105E58: bl      0x80038C20
    {
            ctx->lr = 0x80105E5Cu;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80105E5C:
    ctx->pc = 0x80105E5Cu;
    ctx->downcount -= 4;
    // 80105E5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105E60:
    ctx->pc = 0x80105E60u;
    // 80105E60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80105E64:
    ctx->pc = 0x80105E64u;
    // 80105E64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80105E68:
    ctx->pc = 0x80105E68u;
    // 80105E68: bl      0x80038930
    {
            ctx->lr = 0x80105E6Cu;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105E6C:
    ctx->pc = 0x80105E6Cu;
    ctx->downcount -= 5;
    // 80105E6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105E70:
    ctx->pc = 0x80105E70u;
    // 80105E70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105E74:
    ctx->pc = 0x80105E74u;
    // 80105E74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105E78:
    ctx->pc = 0x80105E78u;
    // 80105E78: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105E7C:
    ctx->pc = 0x80105E7Cu;
    // 80105E7C: bl      0x80038AC0
    {
            ctx->lr = 0x80105E80u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105E80:
    ctx->pc = 0x80105E80u;
    ctx->downcount -= 6;
    // 80105E80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105E84:
    ctx->pc = 0x80105E84u;
    // 80105E84: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105E88:
    ctx->pc = 0x80105E88u;
    // 80105E88: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80105E8C:
    ctx->pc = 0x80105E8Cu;
    // 80105E8C: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105E90:
    ctx->pc = 0x80105E90u;
    // 80105E90: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80105E94:
    ctx->pc = 0x80105E94u;
    // 80105E94: bl      0x80038620
    {
            ctx->lr = 0x80105E98u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105E98:
    ctx->pc = 0x80105E98u;
    ctx->downcount -= 6;
    // 80105E98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105E9C:
    ctx->pc = 0x80105E9Cu;
    // 80105E9C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105EA0:
    ctx->pc = 0x80105EA0u;
    // 80105EA0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105EA4:
    ctx->pc = 0x80105EA4u;
    // 80105EA4: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105EA8:
    ctx->pc = 0x80105EA8u;
    // 80105EA8: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80105EAC:
    ctx->pc = 0x80105EACu;
    // 80105EAC: bl      0x80038660
    {
            ctx->lr = 0x80105EB0u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105EB0:
    ctx->pc = 0x80105EB0u;
    ctx->downcount -= 7;
    // 80105EB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105EB4:
    ctx->pc = 0x80105EB4u;
    // 80105EB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105EB8:
    ctx->pc = 0x80105EB8u;
    // 80105EB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105EBC:
    ctx->pc = 0x80105EBCu;
    // 80105EBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105EC0:
    ctx->pc = 0x80105EC0u;
    // 80105EC0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105EC4:
    ctx->pc = 0x80105EC4u;
    // 80105EC4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105EC8:
    ctx->pc = 0x80105EC8u;
    // 80105EC8: bl      0x800386A0
    {
            ctx->lr = 0x80105ECCu;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105ECC:
    ctx->pc = 0x80105ECCu;
    ctx->downcount -= 7;
    // 80105ECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80105ED0:
    ctx->pc = 0x80105ED0u;
    // 80105ED0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105ED4:
    ctx->pc = 0x80105ED4u;
    // 80105ED4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105ED8:
    ctx->pc = 0x80105ED8u;
    // 80105ED8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105EDC:
    ctx->pc = 0x80105EDCu;
    // 80105EDC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105EE0:
    ctx->pc = 0x80105EE0u;
    // 80105EE0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105EE4:
    ctx->pc = 0x80105EE4u;
    // 80105EE4: bl      0x80038700
    {
            ctx->lr = 0x80105EE8u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80105EE8:
    ctx->pc = 0x80105EE8u;
    ctx->downcount -= 4;
    // 80105EE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105EEC:
    ctx->pc = 0x80105EECu;
    // 80105EEC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80105EF0:
    ctx->pc = 0x80105EF0u;
    // 80105EF0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80105EF4:
    ctx->pc = 0x80105EF4u;
    // 80105EF4: bl      0x80038930
    {
            ctx->lr = 0x80105EF8u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105EF8:
    ctx->pc = 0x80105EF8u;
    ctx->downcount -= 5;
    // 80105EF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105EFC:
    ctx->pc = 0x80105EFCu;
    // 80105EFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105F00:
    ctx->pc = 0x80105F00u;
    // 80105F00: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105F04:
    ctx->pc = 0x80105F04u;
    // 80105F04: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105F08:
    ctx->pc = 0x80105F08u;
    // 80105F08: bl      0x80038AC0
    {
            ctx->lr = 0x80105F0Cu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105F0C:
    ctx->pc = 0x80105F0Cu;
    ctx->downcount -= 6;
    // 80105F0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105F10:
    ctx->pc = 0x80105F10u;
    // 80105F10: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105F14:
    ctx->pc = 0x80105F14u;
    // 80105F14: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80105F18:
    ctx->pc = 0x80105F18u;
    // 80105F18: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105F1C:
    ctx->pc = 0x80105F1Cu;
    // 80105F1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105F20:
    ctx->pc = 0x80105F20u;
    // 80105F20: bl      0x80038620
    {
            ctx->lr = 0x80105F24u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105F24:
    ctx->pc = 0x80105F24u;
    ctx->downcount -= 6;
    // 80105F24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105F28:
    ctx->pc = 0x80105F28u;
    // 80105F28: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105F2C:
    ctx->pc = 0x80105F2Cu;
    // 80105F2C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105F30:
    ctx->pc = 0x80105F30u;
    // 80105F30: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105F34:
    ctx->pc = 0x80105F34u;
    // 80105F34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105F38:
    ctx->pc = 0x80105F38u;
    // 80105F38: bl      0x80038660
    {
            ctx->lr = 0x80105F3Cu;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105F3C:
    ctx->pc = 0x80105F3Cu;
    ctx->downcount -= 7;
    // 80105F3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105F40:
    ctx->pc = 0x80105F40u;
    // 80105F40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105F44:
    ctx->pc = 0x80105F44u;
    // 80105F44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105F48:
    ctx->pc = 0x80105F48u;
    // 80105F48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105F4C:
    ctx->pc = 0x80105F4Cu;
    // 80105F4C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105F50:
    ctx->pc = 0x80105F50u;
    // 80105F50: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105F54:
    ctx->pc = 0x80105F54u;
    // 80105F54: bl      0x800386A0
    {
            ctx->lr = 0x80105F58u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105F58:
    ctx->pc = 0x80105F58u;
    ctx->downcount -= 7;
    // 80105F58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80105F5C:
    ctx->pc = 0x80105F5Cu;
    // 80105F5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105F60:
    ctx->pc = 0x80105F60u;
    // 80105F60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105F64:
    ctx->pc = 0x80105F64u;
    // 80105F64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105F68:
    ctx->pc = 0x80105F68u;
    // 80105F68: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105F6C:
    ctx->pc = 0x80105F6Cu;
    // 80105F6C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105F70:
    ctx->pc = 0x80105F70u;
    // 80105F70: bl      0x80038700
    {
            ctx->lr = 0x80105F74u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80105F74:
    ctx->pc = 0x80105F74u;
    ctx->downcount -= 4;
    // 80105F74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105F78:
    ctx->pc = 0x80105F78u;
    // 80105F78: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80105F7C:
    ctx->pc = 0x80105F7Cu;
    // 80105F7C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80105F80:
    ctx->pc = 0x80105F80u;
    // 80105F80: bl      0x80038930
    {
            ctx->lr = 0x80105F84u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80105F84:
    ctx->pc = 0x80105F84u;
    ctx->downcount -= 5;
    // 80105F84: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105F88:
    ctx->pc = 0x80105F88u;
    // 80105F88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105F8C:
    ctx->pc = 0x80105F8Cu;
    // 80105F8C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105F90:
    ctx->pc = 0x80105F90u;
    // 80105F90: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80105F94:
    ctx->pc = 0x80105F94u;
    // 80105F94: bl      0x80038AC0
    {
            ctx->lr = 0x80105F98u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80105F98:
    ctx->pc = 0x80105F98u;
    ctx->downcount -= 6;
    // 80105F98: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105F9C:
    ctx->pc = 0x80105F9Cu;
    // 80105F9C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80105FA0:
    ctx->pc = 0x80105FA0u;
    // 80105FA0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80105FA4:
    ctx->pc = 0x80105FA4u;
    // 80105FA4: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80105FA8:
    ctx->pc = 0x80105FA8u;
    // 80105FA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105FAC:
    ctx->pc = 0x80105FACu;
    // 80105FAC: bl      0x80038620
    {
            ctx->lr = 0x80105FB0u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80105FB0:
    ctx->pc = 0x80105FB0u;
    ctx->downcount -= 6;
    // 80105FB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105FB4:
    ctx->pc = 0x80105FB4u;
    // 80105FB4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80105FB8:
    ctx->pc = 0x80105FB8u;
    // 80105FB8: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80105FBC:
    ctx->pc = 0x80105FBCu;
    // 80105FBC: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80105FC0:
    ctx->pc = 0x80105FC0u;
    // 80105FC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80105FC4:
    ctx->pc = 0x80105FC4u;
    // 80105FC4: bl      0x80038660
    {
            ctx->lr = 0x80105FC8u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80105FC8:
    ctx->pc = 0x80105FC8u;
    ctx->downcount -= 7;
    // 80105FC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105FCC:
    ctx->pc = 0x80105FCCu;
    // 80105FCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105FD0:
    ctx->pc = 0x80105FD0u;
    // 80105FD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105FD4:
    ctx->pc = 0x80105FD4u;
    // 80105FD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105FD8:
    ctx->pc = 0x80105FD8u;
    // 80105FD8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105FDC:
    ctx->pc = 0x80105FDCu;
    // 80105FDC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105FE0:
    ctx->pc = 0x80105FE0u;
    // 80105FE0: bl      0x800386A0
    {
            ctx->lr = 0x80105FE4u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80105FE4:
    ctx->pc = 0x80105FE4u;
    ctx->downcount -= 7;
    // 80105FE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80105FE8:
    ctx->pc = 0x80105FE8u;
    // 80105FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80105FEC:
    ctx->pc = 0x80105FECu;
    // 80105FEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80105FF0:
    ctx->pc = 0x80105FF0u;
    // 80105FF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80105FF4:
    ctx->pc = 0x80105FF4u;
    // 80105FF4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80105FF8:
    ctx->pc = 0x80105FF8u;
    // 80105FF8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80105FFC:
    ctx->pc = 0x80105FFCu;
    // 80105FFC: bl      0x80038700
    {
            ctx->lr = 0x80106000u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80106000:
    ctx->pc = 0x80106000u;
    ctx->downcount -= 2;
    // 80106000: cmpwi   r31, 20
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80106004:
    ctx->pc = 0x80106004u;
    // 80106004: bc    12, 2, 0x8010603C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010603C;
        }
    }

label_80106008:
    ctx->pc = 0x80106008u;
    ctx->downcount -= 1;
    // 80106008: bc    4, 0, 0x80106060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80106060;
        }
    }

label_8010600C:
    ctx->pc = 0x8010600Cu;
    ctx->downcount -= 2;
    // 8010600C: cmpwi   r31, 9
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

label_80106010:
    ctx->pc = 0x80106010u;
    // 80106010: bc    12, 2, 0x80106018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80106018;
        }
    }

label_80106014:
    ctx->pc = 0x80106014u;
    ctx->downcount -= 1;
    // 80106014: b       0x80106060
    {
            goto label_80106060;
    }

label_80106018:
    ctx->pc = 0x80106018u;
    ctx->downcount -= 9;
    // 80106018: lbz     r5, -29680(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29680);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8010601C:
    ctx->pc = 0x8010601Cu;
    // 8010601C: lbz     r4, -29679(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29679);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80106020:
    ctx->pc = 0x80106020u;
    // 80106020: lbz     r3, -29678(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29678);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80106024:
    ctx->pc = 0x80106024u;
    // 80106024: lbz     r0, -29677(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29677);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80106028:
    ctx->pc = 0x80106028u;
    // 80106028: stb     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8010602C:
    ctx->pc = 0x8010602Cu;
    // 8010602C: stb     r4, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80106030:
    ctx->pc = 0x80106030u;
    // 80106030: stb     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80106034:
    ctx->pc = 0x80106034u;
    // 80106034: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80106038:
    ctx->pc = 0x80106038u;
    // 80106038: b       0x80106080
    {
            goto label_80106080;
    }

label_8010603C:
    ctx->pc = 0x8010603Cu;
    ctx->downcount -= 9;
    // 8010603C: lbz     r5, -29676(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29676);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106040:
    ctx->pc = 0x80106040u;
    // 80106040: lbz     r4, -29675(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29675);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80106044:
    ctx->pc = 0x80106044u;
    // 80106044: lbz     r3, -29674(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29674);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80106048:
    ctx->pc = 0x80106048u;
    // 80106048: lbz     r0, -29673(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29673);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8010604C:
    ctx->pc = 0x8010604Cu;
    // 8010604C: stb     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106050:
    ctx->pc = 0x80106050u;
    // 80106050: stb     r4, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80106054:
    ctx->pc = 0x80106054u;
    // 80106054: stb     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80106058:
    ctx->pc = 0x80106058u;
    // 80106058: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8010605C:
    ctx->pc = 0x8010605Cu;
    // 8010605C: b       0x80106080
    {
            goto label_80106080;
    }

label_80106060:
    ctx->pc = 0x80106060u;
    ctx->downcount -= 8;
    // 80106060: lbz     r5, -29672(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29672);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106064:
    ctx->pc = 0x80106064u;
    // 80106064: lbz     r4, -29671(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29671);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80106068:
    ctx->pc = 0x80106068u;
    // 80106068: lbz     r3, -29670(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29670);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8010606C:
    ctx->pc = 0x8010606Cu;
    // 8010606C: lbz     r0, -29669(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29669);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80106070:
    ctx->pc = 0x80106070u;
    // 80106070: stb     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106074:
    ctx->pc = 0x80106074u;
    // 80106074: stb     r4, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80106078:
    ctx->pc = 0x80106078u;
    // 80106078: stb     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8010607C:
    ctx->pc = 0x8010607Cu;
    // 8010607C: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80106080:
    ctx->pc = 0x80106080u;
    ctx->downcount -= 5;
    // 80106080: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106084:
    ctx->pc = 0x80106084u;
    // 80106084: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80106088:
    ctx->pc = 0x80106088u;
    // 80106088: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8010608C:
    ctx->pc = 0x8010608Cu;
    // 8010608C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106090:
    ctx->pc = 0x80106090u;
    // 80106090: bl      0x80038760
    {
            ctx->lr = 0x80106094u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106094:
    ctx->pc = 0x80106094u;
    ctx->downcount -= 15;
    // 80106094: lis     r3, -32666
    ctx->gpr[3] = ((u32)(s32)(-32666) << 16);

label_80106098:
    ctx->pc = 0x80106098u;
    // 80106098: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_8010609C:
    ctx->pc = 0x8010609Cu;
    // 8010609C: addi    r3, r3, -17952
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17952);

label_801060A0:
    ctx->pc = 0x801060A0u;
    // 801060A0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_801060A4:
    ctx->pc = 0x801060A4u;
    // 801060A4: add   r8, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_801060A8:
    ctx->pc = 0x801060A8u;
    // 801060A8: lbz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801060AC:
    ctx->pc = 0x801060ACu;
    // 801060AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_801060B0:
    ctx->pc = 0x801060B0u;
    // 801060B0: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801060B4:
    ctx->pc = 0x801060B4u;
    // 801060B4: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801060B8:
    ctx->pc = 0x801060B8u;
    // 801060B8: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801060BC:
    ctx->pc = 0x801060BCu;
    // 801060BC: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_801060C0:
    ctx->pc = 0x801060C0u;
    // 801060C0: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_801060C4:
    ctx->pc = 0x801060C4u;
    // 801060C4: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_801060C8:
    ctx->pc = 0x801060C8u;
    // 801060C8: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801060CC:
    ctx->pc = 0x801060CCu;
    // 801060CC: bl      0x80038760
    {
            ctx->lr = 0x801060D0u;
            ctx->pc = 0x80038760u;
            return;
    }

label_801060D0:
    ctx->pc = 0x801060D0u;
    ctx->downcount -= 7;
    // 801060D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801060D4:
    ctx->pc = 0x801060D4u;
    // 801060D4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_801060D8:
    ctx->pc = 0x801060D8u;
    // 801060D8: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_801060DC:
    ctx->pc = 0x801060DCu;
    // 801060DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_801060E0:
    ctx->pc = 0x801060E0u;
    // 801060E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_801060E4:
    ctx->pc = 0x801060E4u;
    // 801060E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801060E8:
    ctx->pc = 0x801060E8u;
    ctx->downcount -= 322;
    // 801060E8: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_801060EC:
    ctx->pc = 0x801060ECu;
    // 801060EC: stfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x801060ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_801060F0:
    ctx->pc = 0x801060F0u;
    // 801060F0: psq_st   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801060F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x801060F0u);
        if (ctx->exception) return;
    }

label_801060F4:
    ctx->pc = 0x801060F4u;
    // 801060F4: stfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x801060F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_801060F8:
    ctx->pc = 0x801060F8u;
    // 801060F8: psq_st   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801060F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x801060F8u);
        if (ctx->exception) return;
    }

label_801060FC:
    ctx->pc = 0x801060FCu;
    // 801060FC: stfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x801060FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_80106100:
    ctx->pc = 0x80106100u;
    // 80106100: psq_st   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80106100u);
        if (ctx->exception) return;
    }

label_80106104:
    ctx->pc = 0x80106104u;
    // 80106104: stfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_80106108:
    ctx->pc = 0x80106108u;
    // 80106108: psq_st   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80106108u);
        if (ctx->exception) return;
    }

label_8010610C:
    ctx->pc = 0x8010610Cu;
    // 8010610C: stfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010610Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_80106110:
    ctx->pc = 0x80106110u;
    // 80106110: psq_st   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80106110u);
        if (ctx->exception) return;
    }

label_80106114:
    ctx->pc = 0x80106114u;
    // 80106114: stfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_80106118:
    ctx->pc = 0x80106118u;
    // 80106118: psq_st   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80106118u);
        if (ctx->exception) return;
    }

label_8010611C:
    ctx->pc = 0x8010611Cu;
    // 8010611C: stfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010611Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_80106120:
    ctx->pc = 0x80106120u;
    // 80106120: psq_st   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x80106120u);
        if (ctx->exception) return;
    }

label_80106124:
    ctx->pc = 0x80106124u;
    // 80106124: stfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_80106128:
    ctx->pc = 0x80106128u;
    // 80106128: psq_st   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106128u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x80106128u);
        if (ctx->exception) return;
    }

label_8010612C:
    ctx->pc = 0x8010612Cu;
    // 8010612C: stfd     f23, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010612Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

label_80106130:
    ctx->pc = 0x80106130u;
    // 80106130: psq_st   f23, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x80106130u);
        if (ctx->exception) return;
    }

label_80106134:
    ctx->pc = 0x80106134u;
    // 80106134: stfd     f22, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[22]));
    }

label_80106138:
    ctx->pc = 0x80106138u;
    // 80106138: psq_st   f22, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 22u, ea, false, 0u, false, 0x80106138u);
        if (ctx->exception) return;
    }

label_8010613C:
    ctx->pc = 0x8010613Cu;
    // 8010613C: stfd     f21, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010613Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[21]));
    }

label_80106140:
    ctx->pc = 0x80106140u;
    // 80106140: psq_st   f21, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 21u, ea, false, 0u, false, 0x80106140u);
        if (ctx->exception) return;
    }

label_80106144:
    ctx->pc = 0x80106144u;
    // 80106144: stfd     f20, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[20]));
    }

label_80106148:
    ctx->pc = 0x80106148u;
    // 80106148: psq_st   f20, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 20u, ea, false, 0u, false, 0x80106148u);
        if (ctx->exception) return;
    }

label_8010614C:
    ctx->pc = 0x8010614Cu;
    // 8010614C: stfd     f19, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010614Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[19]));
    }

label_80106150:
    ctx->pc = 0x80106150u;
    // 80106150: psq_st   f19, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 19u, ea, false, 0u, false, 0x80106150u);
        if (ctx->exception) return;
    }

label_80106154:
    ctx->pc = 0x80106154u;
    // 80106154: stfd     f18, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[18]));
    }

label_80106158:
    ctx->pc = 0x80106158u;
    // 80106158: psq_st   f18, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 18u, ea, false, 0u, false, 0x80106158u);
        if (ctx->exception) return;
    }

label_8010615C:
    ctx->pc = 0x8010615Cu;
    // 8010615C: stfd     f17, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010615Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[17]));
    }

label_80106160:
    ctx->pc = 0x80106160u;
    // 80106160: psq_st   f17, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 17u, ea, false, 0u, false, 0x80106160u);
        if (ctx->exception) return;
    }

label_80106164:
    ctx->pc = 0x80106164u;
    // 80106164: stfd     f16, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[16]));
    }

label_80106168:
    ctx->pc = 0x80106168u;
    // 80106168: psq_st   f16, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 16u, ea, false, 0u, false, 0x80106168u);
        if (ctx->exception) return;
    }

label_8010616C:
    ctx->pc = 0x8010616Cu;
    // 8010616C: lwz     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80106170:
    ctx->pc = 0x80106170u;
    // 80106170: lis     r11, 17200
    ctx->gpr[11] = ((u32)(s32)(17200) << 16);

label_80106174:
    ctx->pc = 0x80106174u;
    // 80106174: lis     r6, -32666
    ctx->gpr[6] = ((u32)(s32)(-32666) << 16);

label_80106178:
    ctx->pc = 0x80106178u;
    // 80106178: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8010617C:
    ctx->pc = 0x8010617Cu;
    // 8010617C: rlwinm r7, r8, 22, 28, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 22u) & 0x0000000Fu;
    }

label_80106180:
    ctx->pc = 0x80106180u;
    // 80106180: rlwinm r9, r8, 27, 27, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[8], 27u) & 0x0000001Fu;
    }

label_80106184:
    ctx->pc = 0x80106184u;
    // 80106184: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80106188:
    ctx->pc = 0x80106188u;
    // 80106188: rlwinm r12, r8, 13, 28, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[8], 13u) & 0x0000000Fu;
    }

label_8010618C:
    ctx->pc = 0x8010618Cu;
    // 8010618C: rlwinm r0, r8, 6, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 6u) & 0x0000003Fu;
    }

label_80106190:
    ctx->pc = 0x80106190u;
    // 80106190: addi    r6, r6, -18032
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18032);

label_80106194:
    ctx->pc = 0x80106194u;
    // 80106194: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106198:
    ctx->pc = 0x80106198u;
    // 80106198: rlwinm r8, r8, 18, 27, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 18u) & 0x0000001Fu;
    }

label_8010619C:
    ctx->pc = 0x8010619Cu;
    // 8010619C: lfd     f6, -29552(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010619Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29552);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801061A0:
    ctx->pc = 0x801061A0u;
    // 801061A0: lbzx    r7, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801061A4:
    ctx->pc = 0x801061A4u;
    // 801061A4: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_801061A8:
    ctx->pc = 0x801061A8u;
    // 801061A8: fsubs   f2, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x801061A8u)) return;
    ppc_fsubs(ctx, 2, 0, 6);

label_801061AC:
    ctx->pc = 0x801061ACu;
    // 801061AC: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_801061B0:
    ctx->pc = 0x801061B0u;
    // 801061B0: lfs     f1, -29668(r2)
    if (!ppc_fp_available_inline(ctx, 0x801061B0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_801061B4:
    ctx->pc = 0x801061B4u;
    // 801061B4: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_801061B8:
    ctx->pc = 0x801061B8u;
    // 801061B8: rlwinm r7, r7, 0, 27, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x0000001Fu;
    }

label_801061BC:
    ctx->pc = 0x801061BCu;
    // 801061BC: fmuls   f7, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x801061BCu)) return;
    ppc_fmuls(ctx, 7, 1, 2);

label_801061C0:
    ctx->pc = 0x801061C0u;
    // 801061C0: lwz     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_801061C4:
    ctx->pc = 0x801061C4u;
    // 801061C4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x801061C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801061C8:
    ctx->pc = 0x801061C8u;
    // 801061C8: stw     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_801061CC:
    ctx->pc = 0x801061CCu;
    // 801061CC: rlwinm r6, r10, 21, 28, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 21u) & 0x0000000Fu;
    }

label_801061D0:
    ctx->pc = 0x801061D0u;
    // 801061D0: fsubs   f8, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x801061D0u)) return;
    ppc_fsubs(ctx, 8, 0, 6);

label_801061D4:
    ctx->pc = 0x801061D4u;
    // 801061D4: lfs     f3, -29660(r2)
    if (!ppc_fp_available_inline(ctx, 0x801061D4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_801061D8:
    ctx->pc = 0x801061D8u;
    // 801061D8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x801061D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801061DC:
    ctx->pc = 0x801061DCu;
    // 801061DC: rlwinm r0, r10, 26, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 26u) & 0x0000001Fu;
    }

label_801061E0:
    ctx->pc = 0x801061E0u;
    // 801061E0: stw     r12, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_801061E4:
    ctx->pc = 0x801061E4u;
    // 801061E4: rlwinm r8, r10, 12, 28, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 12u) & 0x0000000Fu;
    }

label_801061E8:
    ctx->pc = 0x801061E8u;
    // 801061E8: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x801061E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801061EC:
    ctx->pc = 0x801061ECu;
    // 801061EC: fsubs   f4, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x801061ECu)) return;
    ppc_fsubs(ctx, 4, 0, 6);

label_801061F0:
    ctx->pc = 0x801061F0u;
    // 801061F0: lfs     f5, -29640(r2)
    if (!ppc_fp_available_inline(ctx, 0x801061F0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_801061F4:
    ctx->pc = 0x801061F4u;
    // 801061F4: fmuls   f0, f3, f8
    if (!ppc_fp_available_inline(ctx, 0x801061F4u)) return;
    ppc_fmuls(ctx, 0, 3, 8);

label_801061F8:
    ctx->pc = 0x801061F8u;
    // 801061F8: fsubs   f8, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x801061F8u)) return;
    ppc_fsubs(ctx, 8, 2, 6);

label_801061FC:
    ctx->pc = 0x801061FCu;
    // 801061FC: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80106200:
    ctx->pc = 0x80106200u;
    // 80106200: fmuls   f9, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80106200u)) return;
    ppc_fmuls(ctx, 9, 5, 4);

label_80106204:
    ctx->pc = 0x80106204u;
    // 80106204: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106208:
    ctx->pc = 0x80106208u;
    // 80106208: lfd     f4, -29648(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106208u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29648);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010620C:
    ctx->pc = 0x8010620Cu;
    // 8010620C: fmuls   f10, f5, f8
    if (!ppc_fp_available_inline(ctx, 0x8010620Cu)) return;
    ppc_fmuls(ctx, 10, 5, 8);

label_80106210:
    ctx->pc = 0x80106210u;
    // 80106210: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80106214:
    ctx->pc = 0x80106214u;
    // 80106214: fsubs   f20, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x80106214u)) return;
    ppc_fsubs(ctx, 20, 2, 6);

label_80106218:
    ctx->pc = 0x80106218u;
    // 80106218: fadd   f11, f4, f9
    if (!ppc_fp_available_inline(ctx, 0x80106218u)) return;
    ppc_fadd(ctx, 11, 4, 9);

label_8010621C:
    ctx->pc = 0x8010621Cu;
    // 8010621C: lfd     f9, -29656(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010621Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29656);
        ctx->fpr[9] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106220:
    ctx->pc = 0x80106220u;
    // 80106220: lfd     f8, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[8] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106224:
    ctx->pc = 0x80106224u;
    // 80106224: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106228:
    ctx->pc = 0x80106228u;
    // 80106228: fadd   f12, f4, f10
    if (!ppc_fp_available_inline(ctx, 0x80106228u)) return;
    ppc_fadd(ctx, 12, 4, 10);

label_8010622C:
    ctx->pc = 0x8010622Cu;
    // 8010622C: fmul   f9, f9, f11
    if (!ppc_fp_available_inline(ctx, 0x8010622Cu)) return;
    ppc_fmul(ctx, 9, 9, 11);

label_80106230:
    ctx->pc = 0x80106230u;
    // 80106230: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106234:
    ctx->pc = 0x80106234u;
    // 80106234: stw     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80106238:
    ctx->pc = 0x80106238u;
    // 80106238: fsubs   f19, f8, f6
    if (!ppc_fp_available_inline(ctx, 0x80106238u)) return;
    ppc_fsubs(ctx, 19, 8, 6);

label_8010623C:
    ctx->pc = 0x8010623Cu;
    // 8010623C: fsubs   f11, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x8010623Cu)) return;
    ppc_fsubs(ctx, 11, 2, 6);

label_80106240:
    ctx->pc = 0x80106240u;
    // 80106240: lfs     f21, -29664(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106240u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[21] = value;
        ctx->ps1[21] = value;
    }

label_80106244:
    ctx->pc = 0x80106244u;
    // 80106244: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80106248:
    ctx->pc = 0x80106248u;
    // 80106248: frsp    f9, f9
    if (!ppc_fp_available_inline(ctx, 0x80106248u)) return;
    ppc_frsp(ctx, 9, 9);

label_8010624C:
    ctx->pc = 0x8010624Cu;
    // 8010624C: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010624Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106250:
    ctx->pc = 0x80106250u;
    // 80106250: fmuls   f18, f3, f11
    if (!ppc_fp_available_inline(ctx, 0x80106250u)) return;
    ppc_fmuls(ctx, 18, 3, 11);

label_80106254:
    ctx->pc = 0x80106254u;
    // 80106254: lfd     f8, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[8] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106258:
    ctx->pc = 0x80106258u;
    // 80106258: fsubs   f10, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x80106258u)) return;
    ppc_fsubs(ctx, 10, 2, 6);

label_8010625C:
    ctx->pc = 0x8010625Cu;
    // 8010625C: lfd     f2, -29632(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010625Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29632);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106260:
    ctx->pc = 0x80106260u;
    // 80106260: fsubs   f8, f8, f6
    if (!ppc_fp_available_inline(ctx, 0x80106260u)) return;
    ppc_fsubs(ctx, 8, 8, 6);

label_80106264:
    ctx->pc = 0x80106264u;
    // 80106264: lfs     f17, -29624(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106264u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[17] = value;
        ctx->ps1[17] = value;
    }

label_80106268:
    ctx->pc = 0x80106268u;
    // 80106268: lfs     f16, -29620(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106268u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[16] = value;
        ctx->ps1[16] = value;
    }

label_8010626C:
    ctx->pc = 0x8010626Cu;
    // 8010626C: fmuls   f13, f5, f10
    if (!ppc_fp_available_inline(ctx, 0x8010626Cu)) return;
    ppc_fmuls(ctx, 13, 5, 10);

label_80106270:
    ctx->pc = 0x80106270u;
    // 80106270: fmul   f10, f2, f12
    if (!ppc_fp_available_inline(ctx, 0x80106270u)) return;
    ppc_fmul(ctx, 10, 2, 12);

label_80106274:
    ctx->pc = 0x80106274u;
    // 80106274: lfd     f12, -29616(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106274u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29616);
        ctx->fpr[12] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106278:
    ctx->pc = 0x80106278u;
    // 80106278: fmuls   f11, f5, f8
    if (!ppc_fp_available_inline(ctx, 0x80106278u)) return;
    ppc_fmuls(ctx, 11, 5, 8);

label_8010627C:
    ctx->pc = 0x8010627Cu;
    // 8010627C: fadd   f13, f4, f13
    if (!ppc_fp_available_inline(ctx, 0x8010627Cu)) return;
    ppc_fadd(ctx, 13, 4, 13);

label_80106280:
    ctx->pc = 0x80106280u;
    // 80106280: fadds   f8, f21, f0
    if (!ppc_fp_available_inline(ctx, 0x80106280u)) return;
    ppc_fadds(ctx, 8, 21, 0);

label_80106284:
    ctx->pc = 0x80106284u;
    // 80106284: fadd   f0, f4, f11
    if (!ppc_fp_available_inline(ctx, 0x80106284u)) return;
    ppc_fadd(ctx, 0, 4, 11);

label_80106288:
    ctx->pc = 0x80106288u;
    // 80106288: fmul   f31, f12, f13
    if (!ppc_fp_available_inline(ctx, 0x80106288u)) return;
    ppc_fmul(ctx, 31, 12, 13);

label_8010628C:
    ctx->pc = 0x8010628Cu;
    // 8010628C: fmul   f30, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8010628Cu)) return;
    ppc_fmul(ctx, 30, 2, 0);

label_80106290:
    ctx->pc = 0x80106290u;
    // 80106290: frsp    f10, f10
    if (!ppc_fp_available_inline(ctx, 0x80106290u)) return;
    ppc_frsp(ctx, 10, 10);

label_80106294:
    ctx->pc = 0x80106294u;
    // 80106294: fmuls   f11, f17, f20
    if (!ppc_fp_available_inline(ctx, 0x80106294u)) return;
    ppc_fmuls(ctx, 11, 17, 20);

label_80106298:
    ctx->pc = 0x80106298u;
    // 80106298: fmuls   f12, f1, f19
    if (!ppc_fp_available_inline(ctx, 0x80106298u)) return;
    ppc_fmuls(ctx, 12, 1, 19);

label_8010629C:
    ctx->pc = 0x8010629Cu;
    // 8010629C: fadds   f13, f16, f18
    if (!ppc_fp_available_inline(ctx, 0x8010629Cu)) return;
    ppc_fadds(ctx, 13, 16, 18);

label_801062A0:
    ctx->pc = 0x801062A0u;
    // 801062A0: frsp    f31, f31
    if (!ppc_fp_available_inline(ctx, 0x801062A0u)) return;
    ppc_frsp(ctx, 31, 31);

label_801062A4:
    ctx->pc = 0x801062A4u;
    // 801062A4: frsp    f30, f30
    if (!ppc_fp_available_inline(ctx, 0x801062A4u)) return;
    ppc_frsp(ctx, 30, 30);

label_801062A8:
    ctx->pc = 0x801062A8u;
    // 801062A8: lis     r8, -32666
    ctx->gpr[8] = ((u32)(s32)(-32666) << 16);

label_801062AC:
    ctx->pc = 0x801062ACu;
    // 801062AC: rlwinm r9, r10, 5, 27, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[10], 5u) & 0x0000001Fu;
    }

label_801062B0:
    ctx->pc = 0x801062B0u;
    // 801062B0: addi    r8, r8, -17976
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-17976);

label_801062B4:
    ctx->pc = 0x801062B4u;
    // 801062B4: lhz     r7, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_801062B8:
    ctx->pc = 0x801062B8u;
    // 801062B8: lbzx    r8, r8, r9
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[9];
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_801062BC:
    ctx->pc = 0x801062BCu;
    // 801062BC: rlwinm r10, r10, 17, 27, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[10], 17u) & 0x0000001Fu;
    }

label_801062C0:
    ctx->pc = 0x801062C0u;
    // 801062C0: lhz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_801062C4:
    ctx->pc = 0x801062C4u;
    // 801062C4: rlwinm r9, r7, 27, 28, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 27u) & 0x0000000Fu;
    }

label_801062C8:
    ctx->pc = 0x801062C8u;
    // 801062C8: lhz     r6, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_801062CC:
    ctx->pc = 0x801062CCu;
    // 801062CC: rlwinm r3, r7, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x0000001Fu;
    }

label_801062D0:
    ctx->pc = 0x801062D0u;
    // 801062D0: add   r7, r10, r8
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_801062D4:
    ctx->pc = 0x801062D4u;
    // 801062D4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801062D8:
    ctx->pc = 0x801062D8u;
    // 801062D8: rlwinm r3, r7, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x0000001Fu;
    }

label_801062DC:
    ctx->pc = 0x801062DCu;
    // 801062DC: rlwinm r8, r0, 0, 27, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_801062E0:
    ctx->pc = 0x801062E0u;
    // 801062E0: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801062E4:
    ctx->pc = 0x801062E4u;
    // 801062E4: rlwinm r7, r0, 27, 28, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x0000000Fu;
    }

label_801062E8:
    ctx->pc = 0x801062E8u;
    // 801062E8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x801062E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801062EC:
    ctx->pc = 0x801062ECu;
    // 801062EC: rlwinm r3, r6, 26, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 26u) & 0x0000001Fu;
    }

label_801062F0:
    ctx->pc = 0x801062F0u;
    // 801062F0: lfd     f16, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x801062F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[16] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801062F4:
    ctx->pc = 0x801062F4u;
    // 801062F4: rlwinm r0, r6, 31, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 31u) & 0x0000001Fu;
    }

label_801062F8:
    ctx->pc = 0x801062F8u;
    // 801062F8: fsubs   f1, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x801062F8u)) return;
    ppc_fsubs(ctx, 1, 0, 6);

label_801062FC:
    ctx->pc = 0x801062FCu;
    // 801062FC: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80106300:
    ctx->pc = 0x80106300u;
    // 80106300: fsubs   f21, f16, f6
    if (!ppc_fp_available_inline(ctx, 0x80106300u)) return;
    ppc_fsubs(ctx, 21, 16, 6);

label_80106304:
    ctx->pc = 0x80106304u;
    // 80106304: lfd     f16, -29600(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106304u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29600);
        ctx->fpr[16] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106308:
    ctx->pc = 0x80106308u;
    // 80106308: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8010630C:
    ctx->pc = 0x8010630Cu;
    // 8010630C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010630Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106310:
    ctx->pc = 0x80106310u;
    // 80106310: lfd     f18, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106310u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[18] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106314:
    ctx->pc = 0x80106314u;
    // 80106314: fmuls   f29, f17, f21
    if (!ppc_fp_available_inline(ctx, 0x80106314u)) return;
    ppc_fmuls(ctx, 29, 17, 21);

label_80106318:
    ctx->pc = 0x80106318u;
    // 80106318: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8010631C:
    ctx->pc = 0x8010631Cu;
    // 8010631C: fsubs   f19, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x8010631Cu)) return;
    ppc_fsubs(ctx, 19, 0, 6);

label_80106320:
    ctx->pc = 0x80106320u;
    // 80106320: fsubs   f20, f18, f6
    if (!ppc_fp_available_inline(ctx, 0x80106320u)) return;
    ppc_fsubs(ctx, 20, 18, 6);

label_80106324:
    ctx->pc = 0x80106324u;
    // 80106324: lfd     f21, -29584(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106324u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29584);
        ctx->fpr[21] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106328:
    ctx->pc = 0x80106328u;
    // 80106328: lfd     f17, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[17] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010632C:
    ctx->pc = 0x8010632Cu;
    // 8010632C: stw     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80106330:
    ctx->pc = 0x80106330u;
    // 80106330: fmuls   f23, f5, f19
    if (!ppc_fp_available_inline(ctx, 0x80106330u)) return;
    ppc_fmuls(ctx, 23, 5, 19);

label_80106334:
    ctx->pc = 0x80106334u;
    // 80106334: fsubs   f18, f17, f6
    if (!ppc_fp_available_inline(ctx, 0x80106334u)) return;
    ppc_fsubs(ctx, 18, 17, 6);

label_80106338:
    ctx->pc = 0x80106338u;
    // 80106338: lfd     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010633C:
    ctx->pc = 0x8010633Cu;
    // 8010633C: fmuls   f24, f5, f20
    if (!ppc_fp_available_inline(ctx, 0x8010633Cu)) return;
    ppc_fmuls(ctx, 24, 5, 20);

label_80106340:
    ctx->pc = 0x80106340u;
    // 80106340: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80106344:
    ctx->pc = 0x80106344u;
    // 80106344: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80106344u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_80106348:
    ctx->pc = 0x80106348u;
    // 80106348: fmuls   f22, f5, f18
    if (!ppc_fp_available_inline(ctx, 0x80106348u)) return;
    ppc_fmuls(ctx, 22, 5, 18);

label_8010634C:
    ctx->pc = 0x8010634Cu;
    // 8010634C: stw     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80106350:
    ctx->pc = 0x80106350u;
    // 80106350: fadd   f18, f4, f24
    if (!ppc_fp_available_inline(ctx, 0x80106350u)) return;
    ppc_fadd(ctx, 18, 4, 24);

label_80106354:
    ctx->pc = 0x80106354u;
    // 80106354: fadd   f24, f4, f23
    if (!ppc_fp_available_inline(ctx, 0x80106354u)) return;
    ppc_fadd(ctx, 24, 4, 23);

label_80106358:
    ctx->pc = 0x80106358u;
    // 80106358: lfd     f20, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[20] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010635C:
    ctx->pc = 0x8010635Cu;
    // 8010635C: lfd     f17, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010635Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[17] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106360:
    ctx->pc = 0x80106360u;
    // 80106360: fadd   f23, f4, f22
    if (!ppc_fp_available_inline(ctx, 0x80106360u)) return;
    ppc_fadd(ctx, 23, 4, 22);

label_80106364:
    ctx->pc = 0x80106364u;
    // 80106364: lfs     f0, -29608(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106364u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80106368:
    ctx->pc = 0x80106368u;
    // 80106368: fsubs   f19, f17, f6
    if (!ppc_fp_available_inline(ctx, 0x80106368u)) return;
    ppc_fsubs(ctx, 19, 17, 6);

label_8010636C:
    ctx->pc = 0x8010636Cu;
    // 8010636C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106370:
    ctx->pc = 0x80106370u;
    // 80106370: fmul   f27, f16, f18
    if (!ppc_fp_available_inline(ctx, 0x80106370u)) return;
    ppc_fmul(ctx, 27, 16, 18);

label_80106374:
    ctx->pc = 0x80106374u;
    // 80106374: lfs     f18, -29576(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106374u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[18] = value;
        ctx->ps1[18] = value;
    }

label_80106378:
    ctx->pc = 0x80106378u;
    // 80106378: fmuls   f22, f5, f19
    if (!ppc_fp_available_inline(ctx, 0x80106378u)) return;
    ppc_fmuls(ctx, 22, 5, 19);

label_8010637C:
    ctx->pc = 0x8010637Cu;
    // 8010637C: lfd     f17, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010637Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[17] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106380:
    ctx->pc = 0x80106380u;
    // 80106380: fmul   f26, f2, f24
    if (!ppc_fp_available_inline(ctx, 0x80106380u)) return;
    ppc_fmul(ctx, 26, 2, 24);

label_80106384:
    ctx->pc = 0x80106384u;
    // 80106384: lfs     f19, -29572(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106384u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[19] = value;
        ctx->ps1[19] = value;
    }

label_80106388:
    ctx->pc = 0x80106388u;
    // 80106388: fsubs   f28, f25, f6
    if (!ppc_fp_available_inline(ctx, 0x80106388u)) return;
    ppc_fsubs(ctx, 28, 25, 6);

label_8010638C:
    ctx->pc = 0x8010638Cu;
    // 8010638C: lfs     f25, -29592(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010638Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_80106390:
    ctx->pc = 0x80106390u;
    // 80106390: fsubs   f20, f20, f6
    if (!ppc_fp_available_inline(ctx, 0x80106390u)) return;
    ppc_fsubs(ctx, 20, 20, 6);

label_80106394:
    ctx->pc = 0x80106394u;
    // 80106394: lfs     f16, -29568(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106394u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[16] = value;
        ctx->ps1[16] = value;
    }

label_80106398:
    ctx->pc = 0x80106398u;
    // 80106398: fmul   f24, f2, f23
    if (!ppc_fp_available_inline(ctx, 0x80106398u)) return;
    ppc_fmul(ctx, 24, 2, 23);

label_8010639C:
    ctx->pc = 0x8010639Cu;
    // 8010639C: fadd   f22, f4, f22
    if (!ppc_fp_available_inline(ctx, 0x8010639Cu)) return;
    ppc_fadd(ctx, 22, 4, 22);

label_801063A0:
    ctx->pc = 0x801063A0u;
    // 801063A0: fsubs   f17, f17, f6
    if (!ppc_fp_available_inline(ctx, 0x801063A0u)) return;
    ppc_fsubs(ctx, 17, 17, 6);

label_801063A4:
    ctx->pc = 0x801063A4u;
    // 801063A4: fmuls   f19, f19, f20
    if (!ppc_fp_available_inline(ctx, 0x801063A4u)) return;
    ppc_fmuls(ctx, 19, 19, 20);

label_801063A8:
    ctx->pc = 0x801063A8u;
    // 801063A8: fmul   f23, f21, f22
    if (!ppc_fp_available_inline(ctx, 0x801063A8u)) return;
    ppc_fmul(ctx, 23, 21, 22);

label_801063AC:
    ctx->pc = 0x801063ACu;
    // 801063AC: fmuls   f21, f3, f28
    if (!ppc_fp_available_inline(ctx, 0x801063ACu)) return;
    ppc_fmuls(ctx, 21, 3, 28);

label_801063B0:
    ctx->pc = 0x801063B0u;
    // 801063B0: fmuls   f2, f3, f17
    if (!ppc_fp_available_inline(ctx, 0x801063B0u)) return;
    ppc_fmuls(ctx, 2, 3, 17);

label_801063B4:
    ctx->pc = 0x801063B4u;
    // 801063B4: fadds   f28, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x801063B4u)) return;
    ppc_fadds(ctx, 28, 0, 1);

label_801063B8:
    ctx->pc = 0x801063B8u;
    // 801063B8: fadds   f25, f25, f21
    if (!ppc_fp_available_inline(ctx, 0x801063B8u)) return;
    ppc_fadds(ctx, 25, 25, 21);

label_801063BC:
    ctx->pc = 0x801063BCu;
    // 801063BC: frsp    f27, f27
    if (!ppc_fp_available_inline(ctx, 0x801063BCu)) return;
    ppc_frsp(ctx, 27, 27);

label_801063C0:
    ctx->pc = 0x801063C0u;
    // 801063C0: frsp    f26, f26
    if (!ppc_fp_available_inline(ctx, 0x801063C0u)) return;
    ppc_frsp(ctx, 26, 26);

label_801063C4:
    ctx->pc = 0x801063C4u;
    // 801063C4: frsp    f24, f24
    if (!ppc_fp_available_inline(ctx, 0x801063C4u)) return;
    ppc_frsp(ctx, 24, 24);

label_801063C8:
    ctx->pc = 0x801063C8u;
    // 801063C8: frsp    f23, f23
    if (!ppc_fp_available_inline(ctx, 0x801063C8u)) return;
    ppc_frsp(ctx, 23, 23);

label_801063CC:
    ctx->pc = 0x801063CCu;
    // 801063CC: fadds   f22, f18, f19
    if (!ppc_fp_available_inline(ctx, 0x801063CCu)) return;
    ppc_fadds(ctx, 22, 18, 19);

label_801063D0:
    ctx->pc = 0x801063D0u;
    // 801063D0: fadds   f21, f16, f2
    if (!ppc_fp_available_inline(ctx, 0x801063D0u)) return;
    ppc_fadds(ctx, 21, 16, 2);

label_801063D4:
    ctx->pc = 0x801063D4u;
    // 801063D4: rlwinm r7, r6, 21, 28, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[6], 21u) & 0x0000000Fu;
    }

label_801063D8:
    ctx->pc = 0x801063D8u;
    // 801063D8: lfs     f0, -29556(r2)
    if (!ppc_fp_available_inline(ctx, 0x801063D8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_801063DC:
    ctx->pc = 0x801063DCu;
    // 801063DC: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_801063E0:
    ctx->pc = 0x801063E0u;
    // 801063E0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_801063E4:
    ctx->pc = 0x801063E4u;
    // 801063E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801063E8:
    ctx->pc = 0x801063E8u;
    // 801063E8: fsubs   f17, f0, f11
    if (!ppc_fp_available_inline(ctx, 0x801063E8u)) return;
    ppc_fsubs(ctx, 17, 0, 11);

label_801063EC:
    ctx->pc = 0x801063ECu;
    // 801063EC: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x801063ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801063F0:
    ctx->pc = 0x801063F0u;
    // 801063F0: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_801063F4:
    ctx->pc = 0x801063F4u;
    // 801063F4: stw     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_801063F8:
    ctx->pc = 0x801063F8u;
    // 801063F8: fsubs   f19, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x801063F8u)) return;
    ppc_fsubs(ctx, 19, 0, 29);

label_801063FC:
    ctx->pc = 0x801063FCu;
    // 801063FC: fsubs   f16, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x801063FCu)) return;
    ppc_fsubs(ctx, 16, 2, 6);

label_80106400:
    ctx->pc = 0x80106400u;
    // 80106400: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106404:
    ctx->pc = 0x80106404u;
    // 80106404: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80106408:
    ctx->pc = 0x80106408u;
    // 80106408: lfd     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8010640C:
    ctx->pc = 0x8010640Cu;
    // 8010640C: lfd     f2, -29696(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010640Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29696);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106410:
    ctx->pc = 0x80106410u;
    // 80106410: fsubs   f18, f3, f6
    if (!ppc_fp_available_inline(ctx, 0x80106410u)) return;
    ppc_fsubs(ctx, 18, 3, 6);

label_80106414:
    ctx->pc = 0x80106414u;
    // 80106414: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106418:
    ctx->pc = 0x80106418u;
    // 80106418: fmuls   f3, f5, f16
    if (!ppc_fp_available_inline(ctx, 0x80106418u)) return;
    ppc_fmuls(ctx, 3, 5, 16);

label_8010641C:
    ctx->pc = 0x8010641Cu;
    // 8010641C: lfs     f1, -29560(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010641Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106420:
    ctx->pc = 0x80106420u;
    // 80106420: fsubs   f16, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80106420u)) return;
    ppc_fsubs(ctx, 16, 0, 2);

label_80106424:
    ctx->pc = 0x80106424u;
    // 80106424: lfs     f6, -29564(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106424u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80106428:
    ctx->pc = 0x80106428u;
    // 80106428: fmuls   f2, f5, f18
    if (!ppc_fp_available_inline(ctx, 0x80106428u)) return;
    ppc_fmuls(ctx, 2, 5, 18);

label_8010642C:
    ctx->pc = 0x8010642Cu;
    // 8010642C: stfs     f11, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010642Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

label_80106430:
    ctx->pc = 0x80106430u;
    // 80106430: fmuls   f5, f16, f6
    if (!ppc_fp_available_inline(ctx, 0x80106430u)) return;
    ppc_fmuls(ctx, 5, 16, 6);

label_80106434:
    ctx->pc = 0x80106434u;
    // 80106434: lfs     f20, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106434u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[20] = value;
        ctx->ps1[20] = value;
    }

label_80106438:
    ctx->pc = 0x80106438u;
    // 80106438: fsubs   f0, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x80106438u)) return;
    ppc_fsubs(ctx, 0, 1, 7);

label_8010643C:
    ctx->pc = 0x8010643Cu;
    // 8010643C: stfs     f17, 80(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010643Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[17]));
    }

label_80106440:
    ctx->pc = 0x80106440u;
    // 80106440: fmuls   f16, f8, f5
    if (!ppc_fp_available_inline(ctx, 0x80106440u)) return;
    ppc_fmuls(ctx, 16, 8, 5);

label_80106444:
    ctx->pc = 0x80106444u;
    // 80106444: stw     r6, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80106448:
    ctx->pc = 0x80106448u;
    // 80106448: fmuls   f17, f9, f5
    if (!ppc_fp_available_inline(ctx, 0x80106448u)) return;
    ppc_fmuls(ctx, 17, 9, 5);

label_8010644C:
    ctx->pc = 0x8010644Cu;
    // 8010644C: fmuls   f6, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x8010644Cu)) return;
    ppc_fmuls(ctx, 6, 1, 5);

label_80106450:
    ctx->pc = 0x80106450u;
    // 80106450: stw     r3, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80106454:
    ctx->pc = 0x80106454u;
    // 80106454: fmuls   f10, f10, f5
    if (!ppc_fp_available_inline(ctx, 0x80106454u)) return;
    ppc_fmuls(ctx, 10, 10, 5);

label_80106458:
    ctx->pc = 0x80106458u;
    // 80106458: fmuls   f9, f13, f5
    if (!ppc_fp_available_inline(ctx, 0x80106458u)) return;
    ppc_fmuls(ctx, 9, 13, 5);

label_8010645C:
    ctx->pc = 0x8010645Cu;
    // 8010645C: stfs     f16, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010645Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[16]));
    }

label_80106460:
    ctx->pc = 0x80106460u;
    // 80106460: fsubs   f11, f1, f12
    if (!ppc_fp_available_inline(ctx, 0x80106460u)) return;
    ppc_fsubs(ctx, 11, 1, 12);

label_80106464:
    ctx->pc = 0x80106464u;
    // 80106464: fmuls   f8, f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80106464u)) return;
    ppc_fmuls(ctx, 8, 31, 5);

label_80106468:
    ctx->pc = 0x80106468u;
    // 80106468: stfs     f16, 68(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106468u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[16]));
    }

label_8010646C:
    ctx->pc = 0x8010646Cu;
    // 8010646C: fadds   f18, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x8010646Cu)) return;
    ppc_fadds(ctx, 18, 1, 7);

label_80106470:
    ctx->pc = 0x80106470u;
    // 80106470: fmuls   f7, f30, f5
    if (!ppc_fp_available_inline(ctx, 0x80106470u)) return;
    ppc_fmuls(ctx, 7, 30, 5);

label_80106474:
    ctx->pc = 0x80106474u;
    // 80106474: stfs     f17, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106474u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[17]));
    }

label_80106478:
    ctx->pc = 0x80106478u;
    // 80106478: fadds   f12, f1, f12
    if (!ppc_fp_available_inline(ctx, 0x80106478u)) return;
    ppc_fadds(ctx, 12, 1, 12);

label_8010647C:
    ctx->pc = 0x8010647Cu;
    // 8010647C: fadd   f1, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8010647Cu)) return;
    ppc_fadd(ctx, 1, 4, 3);

label_80106480:
    ctx->pc = 0x80106480u;
    // 80106480: stfs     f10, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106480u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

label_80106484:
    ctx->pc = 0x80106484u;
    // 80106484: fadd   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80106484u)) return;
    ppc_fadd(ctx, 2, 4, 2);

label_80106488:
    ctx->pc = 0x80106488u;
    // 80106488: fmuls   f13, f5, f11
    if (!ppc_fp_available_inline(ctx, 0x80106488u)) return;
    ppc_fmuls(ctx, 13, 5, 11);

label_8010648C:
    ctx->pc = 0x8010648Cu;
    // 8010648C: stfs     f17, 72(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010648Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[17]));
    }

label_80106490:
    ctx->pc = 0x80106490u;
    // 80106490: fmuls   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80106490u)) return;
    ppc_fmuls(ctx, 0, 5, 0);

label_80106494:
    ctx->pc = 0x80106494u;
    // 80106494: fmuls   f16, f5, f18
    if (!ppc_fp_available_inline(ctx, 0x80106494u)) return;
    ppc_fmuls(ctx, 16, 5, 18);

label_80106498:
    ctx->pc = 0x80106498u;
    // 80106498: stfs     f10, 76(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106498u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

label_8010649C:
    ctx->pc = 0x8010649Cu;
    // 8010649C: fmuls   f11, f5, f12
    if (!ppc_fp_available_inline(ctx, 0x8010649Cu)) return;
    ppc_fmuls(ctx, 11, 5, 12);

label_801064A0:
    ctx->pc = 0x801064A0u;
    // 801064A0: fmuls   f4, f28, f5
    if (!ppc_fp_available_inline(ctx, 0x801064A0u)) return;
    ppc_fmuls(ctx, 4, 28, 5);

label_801064A4:
    ctx->pc = 0x801064A4u;
    // 801064A4: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_801064A8:
    ctx->pc = 0x801064A8u;
    // 801064A8: fmuls   f3, f27, f5
    if (!ppc_fp_available_inline(ctx, 0x801064A8u)) return;
    ppc_fmuls(ctx, 3, 27, 5);

label_801064AC:
    ctx->pc = 0x801064ACu;
    // 801064AC: fmuls   f0, f26, f5
    if (!ppc_fp_available_inline(ctx, 0x801064ACu)) return;
    ppc_fmuls(ctx, 0, 26, 5);

label_801064B0:
    ctx->pc = 0x801064B0u;
    // 801064B0: stfs     f16, 64(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[16]));
    }

label_801064B4:
    ctx->pc = 0x801064B4u;
    // 801064B4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x801064B4u)) return;
    ppc_frsp(ctx, 1, 1);

label_801064B8:
    ctx->pc = 0x801064B8u;
    // 801064B8: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x801064B8u)) return;
    ppc_frsp(ctx, 2, 2);

label_801064BC:
    ctx->pc = 0x801064BCu;
    // 801064BC: stfs     f13, 128(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

label_801064C0:
    ctx->pc = 0x801064C0u;
    // 801064C0: stfs     f9, 132(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_801064C4:
    ctx->pc = 0x801064C4u;
    // 801064C4: stfs     f8, 136(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_801064C8:
    ctx->pc = 0x801064C8u;
    // 801064C8: stfs     f7, 140(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_801064CC:
    ctx->pc = 0x801064CCu;
    // 801064CC: stfs     f29, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_801064D0:
    ctx->pc = 0x801064D0u;
    // 801064D0: stw     r6, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_801064D4:
    ctx->pc = 0x801064D4u;
    // 801064D4: stfs     f11, 192(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

label_801064D8:
    ctx->pc = 0x801064D8u;
    // 801064D8: stfs     f9, 196(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_801064DC:
    ctx->pc = 0x801064DCu;
    // 801064DC: stfs     f8, 200(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_801064E0:
    ctx->pc = 0x801064E0u;
    // 801064E0: stfs     f7, 204(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_801064E4:
    ctx->pc = 0x801064E4u;
    // 801064E4: stfs     f19, 208(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[19]));
    }

label_801064E8:
    ctx->pc = 0x801064E8u;
    // 801064E8: stw     r3, 212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_801064EC:
    ctx->pc = 0x801064ECu;
    // 801064EC: stfs     f6, 256(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(256);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_801064F0:
    ctx->pc = 0x801064F0u;
    // 801064F0: stfs     f4, 260(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_801064F4:
    ctx->pc = 0x801064F4u;
    // 801064F4: stfs     f3, 264(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_801064F8:
    ctx->pc = 0x801064F8u;
    // 801064F8: stfs     f0, 268(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_801064FC:
    ctx->pc = 0x801064FCu;
    // 801064FC: stfs     f20, 272(r4)
    if (!ppc_fp_available_inline(ctx, 0x801064FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[20]));
    }

label_80106500:
    ctx->pc = 0x80106500u;
    // 80106500: stw     r0, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106504:
    ctx->pc = 0x80106504u;
    // 80106504: stfs     f6, 320(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106504u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(320);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_80106508:
    ctx->pc = 0x80106508u;
    // 80106508: fmuls   f9, f25, f5
    if (!ppc_fp_available_inline(ctx, 0x80106508u)) return;
    ppc_fmuls(ctx, 9, 25, 5);

label_8010650C:
    ctx->pc = 0x8010650Cu;
    // 8010650C: stfs     f20, 336(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010650Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[20]));
    }

label_80106510:
    ctx->pc = 0x80106510u;
    // 80106510: fmuls   f8, f24, f5
    if (!ppc_fp_available_inline(ctx, 0x80106510u)) return;
    ppc_fmuls(ctx, 8, 24, 5);

label_80106514:
    ctx->pc = 0x80106514u;
    // 80106514: fmuls   f7, f23, f5
    if (!ppc_fp_available_inline(ctx, 0x80106514u)) return;
    ppc_fmuls(ctx, 7, 23, 5);

label_80106518:
    ctx->pc = 0x80106518u;
    // 80106518: stw     r6, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8010651C:
    ctx->pc = 0x8010651Cu;
    // 8010651C: fmuls   f4, f22, f5
    if (!ppc_fp_available_inline(ctx, 0x8010651Cu)) return;
    ppc_fmuls(ctx, 4, 22, 5);

label_80106520:
    ctx->pc = 0x80106520u;
    // 80106520: fmuls   f3, f21, f5
    if (!ppc_fp_available_inline(ctx, 0x80106520u)) return;
    ppc_fmuls(ctx, 3, 21, 5);

label_80106524:
    ctx->pc = 0x80106524u;
    // 80106524: stfs     f9, 324(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106524u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(324);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_80106528:
    ctx->pc = 0x80106528u;
    // 80106528: fmuls   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80106528u)) return;
    ppc_fmuls(ctx, 1, 1, 5);

label_8010652C:
    ctx->pc = 0x8010652Cu;
    // 8010652C: fmuls   f0, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x8010652Cu)) return;
    ppc_fmuls(ctx, 0, 2, 5);

label_80106530:
    ctx->pc = 0x80106530u;
    // 80106530: stfs     f8, 328(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106530u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(328);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_80106534:
    ctx->pc = 0x80106534u;
    // 80106534: stfs     f7, 332(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106534u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_80106538:
    ctx->pc = 0x80106538u;
    // 80106538: stfs     f6, 384(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106538u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(384);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_8010653C:
    ctx->pc = 0x8010653Cu;
    // 8010653C: stfs     f9, 388(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010653Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(388);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_80106540:
    ctx->pc = 0x80106540u;
    // 80106540: stfs     f8, 392(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106540u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(392);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_80106544:
    ctx->pc = 0x80106544u;
    // 80106544: stfs     f7, 396(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106544u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(396);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_80106548:
    ctx->pc = 0x80106548u;
    // 80106548: stfs     f20, 400(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106548u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[20]));
    }

label_8010654C:
    ctx->pc = 0x8010654Cu;
    // 8010654C: stw     r3, 404(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80106550:
    ctx->pc = 0x80106550u;
    // 80106550: stfs     f4, 448(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106550u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(448);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_80106554:
    ctx->pc = 0x80106554u;
    // 80106554: stfs     f3, 452(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106554u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(452);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_80106558:
    ctx->pc = 0x80106558u;
    // 80106558: stfs     f1, 456(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106558u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(456);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8010655C:
    ctx->pc = 0x8010655Cu;
    // 8010655C: stfs     f0, 460(r4)
    if (!ppc_fp_available_inline(ctx, 0x8010655Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(460);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80106560:
    ctx->pc = 0x80106560u;
    // 80106560: stfs     f20, 464(r4)
    if (!ppc_fp_available_inline(ctx, 0x80106560u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(464);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[20]));
    }

label_80106564:
    ctx->pc = 0x80106564u;
    // 80106564: stw     r0, 468(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106568:
    ctx->pc = 0x80106568u;
    // 80106568: psq_l   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80106568u);
        if (ctx->exception) return;
    }

label_8010656C:
    ctx->pc = 0x8010656Cu;
    // 8010656C: lfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010656Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106570:
    ctx->pc = 0x80106570u;
    // 80106570: psq_l   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106570u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80106570u);
        if (ctx->exception) return;
    }

label_80106574:
    ctx->pc = 0x80106574u;
    // 80106574: lfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106578:
    ctx->pc = 0x80106578u;
    // 80106578: psq_l   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80106578u);
        if (ctx->exception) return;
    }

label_8010657C:
    ctx->pc = 0x8010657Cu;
    // 8010657C: lfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010657Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106580:
    ctx->pc = 0x80106580u;
    // 80106580: psq_l   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106580u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80106580u);
        if (ctx->exception) return;
    }

label_80106584:
    ctx->pc = 0x80106584u;
    // 80106584: lfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106588:
    ctx->pc = 0x80106588u;
    // 80106588: psq_l   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106588u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80106588u);
        if (ctx->exception) return;
    }

label_8010658C:
    ctx->pc = 0x8010658Cu;
    // 8010658C: lfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010658Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106590:
    ctx->pc = 0x80106590u;
    // 80106590: psq_l   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80106590u);
        if (ctx->exception) return;
    }

label_80106594:
    ctx->pc = 0x80106594u;
    // 80106594: lfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106598:
    ctx->pc = 0x80106598u;
    // 80106598: psq_l   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x80106598u);
        if (ctx->exception) return;
    }

label_8010659C:
    ctx->pc = 0x8010659Cu;
    // 8010659C: lfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010659Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065A0:
    ctx->pc = 0x801065A0u;
    // 801065A0: psq_l   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x801065A0u);
        if (ctx->exception) return;
    }

label_801065A4:
    ctx->pc = 0x801065A4u;
    // 801065A4: lfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065A8:
    ctx->pc = 0x801065A8u;
    // 801065A8: psq_l   f23, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x801065A8u);
        if (ctx->exception) return;
    }

label_801065AC:
    ctx->pc = 0x801065ACu;
    // 801065AC: lfd     f23, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065B0:
    ctx->pc = 0x801065B0u;
    // 801065B0: psq_l   f22, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x801065B0u);
        if (ctx->exception) return;
    }

label_801065B4:
    ctx->pc = 0x801065B4u;
    // 801065B4: lfd     f22, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065B8:
    ctx->pc = 0x801065B8u;
    // 801065B8: psq_l   f21, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 21u, ea, false, 0u, false, 0x801065B8u);
        if (ctx->exception) return;
    }

label_801065BC:
    ctx->pc = 0x801065BCu;
    // 801065BC: lfd     f21, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[21] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065C0:
    ctx->pc = 0x801065C0u;
    // 801065C0: psq_l   f20, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 20u, ea, false, 0u, false, 0x801065C0u);
        if (ctx->exception) return;
    }

label_801065C4:
    ctx->pc = 0x801065C4u;
    // 801065C4: lfd     f20, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[20] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065C8:
    ctx->pc = 0x801065C8u;
    // 801065C8: psq_l   f19, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 19u, ea, false, 0u, false, 0x801065C8u);
        if (ctx->exception) return;
    }

label_801065CC:
    ctx->pc = 0x801065CCu;
    // 801065CC: lfd     f19, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[19] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065D0:
    ctx->pc = 0x801065D0u;
    // 801065D0: psq_l   f18, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 18u, ea, false, 0u, false, 0x801065D0u);
        if (ctx->exception) return;
    }

label_801065D4:
    ctx->pc = 0x801065D4u;
    // 801065D4: lfd     f18, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[18] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065D8:
    ctx->pc = 0x801065D8u;
    // 801065D8: psq_l   f17, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 17u, ea, false, 0u, false, 0x801065D8u);
        if (ctx->exception) return;
    }

label_801065DC:
    ctx->pc = 0x801065DCu;
    // 801065DC: lfd     f17, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[17] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065E0:
    ctx->pc = 0x801065E0u;
    // 801065E0: psq_l   f16, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x801065E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 16u, ea, false, 0u, false, 0x801065E0u);
        if (ctx->exception) return;
    }

label_801065E4:
    ctx->pc = 0x801065E4u;
    // 801065E4: lfd     f16, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x801065E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[16] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_801065E8:
    ctx->pc = 0x801065E8u;
    // 801065E8: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_801065EC:
    ctx->pc = 0x801065ECu;
    // 801065EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801065F0:
    ctx->pc = 0x801065F0u;
    ctx->downcount -= 5;
    // 801065F0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_801065F4:
    ctx->pc = 0x801065F4u;
    // 801065F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_801065F8:
    ctx->pc = 0x801065F8u;
    // 801065F8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_801065FC:
    ctx->pc = 0x801065FCu;
    // 801065FC: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80106600:
    ctx->pc = 0x80106600u;
    // 80106600: bl      0x80007850
    {
            ctx->lr = 0x80106604u;
            ctx->pc = 0x80007850u;
            return;
    }

label_80106604:
    ctx->pc = 0x80106604u;
    ctx->downcount -= 5;
    // 80106604: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80106608:
    ctx->pc = 0x80106608u;
    // 80106608: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8010660C:
    ctx->pc = 0x8010660Cu;
    // 8010660C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80106610:
    ctx->pc = 0x80106610u;
    // 80106610: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80106614:
    ctx->pc = 0x80106614u;
    // 80106614: bl      0x80037980
    {
            ctx->lr = 0x80106618u;
            ctx->pc = 0x80037980u;
            return;
    }

label_80106618:
    ctx->pc = 0x80106618u;
    ctx->downcount -= 2;
    // 80106618: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_8010661C:
    ctx->pc = 0x8010661Cu;
    // 8010661C: bl      0x80039DE0
    {
            ctx->lr = 0x80106620u;
            ctx->pc = 0x80039DE0u;
            return;
    }

label_80106620:
    ctx->pc = 0x80106620u;
    ctx->downcount -= 1;
    // 80106620: bl      0x80105A18
    {
            ctx->lr = 0x80106624u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105A18u;
                return;
            }
            goto label_80105A18;
    }

label_80106624:
    ctx->pc = 0x80106624u;
    ctx->downcount -= 2;
    // 80106624: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106628:
    ctx->pc = 0x80106628u;
    // 80106628: bl      0x80038460
    {
            ctx->lr = 0x8010662Cu;
            ctx->pc = 0x80038460u;
            return;
    }

label_8010662C:
    ctx->pc = 0x8010662Cu;
    ctx->downcount -= 2;
    // 8010662C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106630:
    ctx->pc = 0x80106630u;
    // 80106630: bl      0x80038460
    {
            ctx->lr = 0x80106634u;
            ctx->pc = 0x80038460u;
            return;
    }

label_80106634:
    ctx->pc = 0x80106634u;
    ctx->downcount -= 2;
    // 80106634: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80106638:
    ctx->pc = 0x80106638u;
    // 80106638: bl      0x80038460
    {
            ctx->lr = 0x8010663Cu;
            ctx->pc = 0x80038460u;
            return;
    }

label_8010663C:
    ctx->pc = 0x8010663Cu;
    ctx->downcount -= 5;
    // 8010663C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106640:
    ctx->pc = 0x80106640u;
    // 80106640: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106644:
    ctx->pc = 0x80106644u;
    // 80106644: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80106648:
    ctx->pc = 0x80106648u;
    // 80106648: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_8010664C:
    ctx->pc = 0x8010664Cu;
    // 8010664C: bl      0x800390F0
    {
            ctx->lr = 0x80106650u;
            ctx->pc = 0x800390F0u;
            return;
    }

label_80106650:
    ctx->pc = 0x80106650u;
    ctx->downcount -= 2;
    // 80106650: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106654:
    ctx->pc = 0x80106654u;
    // 80106654: bl      0x80039140
    {
            ctx->lr = 0x80106658u;
            ctx->pc = 0x80039140u;
            return;
    }

label_80106658:
    ctx->pc = 0x80106658u;
    ctx->downcount -= 4;
    // 80106658: lhz     r0, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8010665C:
    ctx->pc = 0x8010665Cu;
    // 8010665C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106660:
    ctx->pc = 0x80106660u;
    // 80106660: rlwinm r31, r0, 23, 29, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x00000007u;
    }

label_80106664:
    ctx->pc = 0x80106664u;
    // 80106664: bl      0x80038C20
    {
            ctx->lr = 0x80106668u;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80106668:
    ctx->pc = 0x80106668u;
    ctx->downcount -= 4;
    // 80106668: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010666C:
    ctx->pc = 0x8010666Cu;
    // 8010666C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106670:
    ctx->pc = 0x80106670u;
    // 80106670: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106674:
    ctx->pc = 0x80106674u;
    // 80106674: bl      0x80038930
    {
            ctx->lr = 0x80106678u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80106678:
    ctx->pc = 0x80106678u;
    ctx->downcount -= 5;
    // 80106678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010667C:
    ctx->pc = 0x8010667Cu;
    // 8010667C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106680:
    ctx->pc = 0x80106680u;
    // 80106680: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106684:
    ctx->pc = 0x80106684u;
    // 80106684: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80106688:
    ctx->pc = 0x80106688u;
    // 80106688: bl      0x80038AC0
    {
            ctx->lr = 0x8010668Cu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_8010668C:
    ctx->pc = 0x8010668Cu;
    ctx->downcount -= 6;
    // 8010668C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106690:
    ctx->pc = 0x80106690u;
    // 80106690: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80106694:
    ctx->pc = 0x80106694u;
    // 80106694: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80106698:
    ctx->pc = 0x80106698u;
    // 80106698: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_8010669C:
    ctx->pc = 0x8010669Cu;
    // 8010669C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_801066A0:
    ctx->pc = 0x801066A0u;
    // 801066A0: bl      0x80038620
    {
            ctx->lr = 0x801066A4u;
            ctx->pc = 0x80038620u;
            return;
    }

label_801066A4:
    ctx->pc = 0x801066A4u;
    ctx->downcount -= 6;
    // 801066A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801066A8:
    ctx->pc = 0x801066A8u;
    // 801066A8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_801066AC:
    ctx->pc = 0x801066ACu;
    // 801066AC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_801066B0:
    ctx->pc = 0x801066B0u;
    // 801066B0: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_801066B4:
    ctx->pc = 0x801066B4u;
    // 801066B4: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_801066B8:
    ctx->pc = 0x801066B8u;
    // 801066B8: bl      0x80038660
    {
            ctx->lr = 0x801066BCu;
            ctx->pc = 0x80038660u;
            return;
    }

label_801066BC:
    ctx->pc = 0x801066BCu;
    ctx->downcount -= 7;
    // 801066BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801066C0:
    ctx->pc = 0x801066C0u;
    // 801066C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801066C4:
    ctx->pc = 0x801066C4u;
    // 801066C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801066C8:
    ctx->pc = 0x801066C8u;
    // 801066C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801066CC:
    ctx->pc = 0x801066CCu;
    // 801066CC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_801066D0:
    ctx->pc = 0x801066D0u;
    // 801066D0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801066D4:
    ctx->pc = 0x801066D4u;
    // 801066D4: bl      0x800386A0
    {
            ctx->lr = 0x801066D8u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_801066D8:
    ctx->pc = 0x801066D8u;
    ctx->downcount -= 7;
    // 801066D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801066DC:
    ctx->pc = 0x801066DCu;
    // 801066DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801066E0:
    ctx->pc = 0x801066E0u;
    // 801066E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801066E4:
    ctx->pc = 0x801066E4u;
    // 801066E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801066E8:
    ctx->pc = 0x801066E8u;
    // 801066E8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_801066EC:
    ctx->pc = 0x801066ECu;
    // 801066EC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801066F0:
    ctx->pc = 0x801066F0u;
    // 801066F0: bl      0x80038700
    {
            ctx->lr = 0x801066F4u;
            ctx->pc = 0x80038700u;
            return;
    }

label_801066F4:
    ctx->pc = 0x801066F4u;
    ctx->downcount -= 15;
    // 801066F4: lis     r30, -32666
    ctx->gpr[30] = ((u32)(s32)(-32666) << 16);

label_801066F8:
    ctx->pc = 0x801066F8u;
    // 801066F8: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_801066FC:
    ctx->pc = 0x801066FCu;
    // 801066FC: addi    r30, r30, -17872
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-17872);

label_80106700:
    ctx->pc = 0x80106700u;
    // 80106700: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80106704:
    ctx->pc = 0x80106704u;
    // 80106704: add   r8, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80106708:
    ctx->pc = 0x80106708u;
    // 80106708: lbzx    r7, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8010670C:
    ctx->pc = 0x8010670Cu;
    // 8010670C: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80106710:
    ctx->pc = 0x80106710u;
    // 80106710: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106714:
    ctx->pc = 0x80106714u;
    // 80106714: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106718:
    ctx->pc = 0x80106718u;
    // 80106718: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8010671C:
    ctx->pc = 0x8010671Cu;
    // 8010671C: stb     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80106720:
    ctx->pc = 0x80106720u;
    // 80106720: stb     r6, 33(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80106724:
    ctx->pc = 0x80106724u;
    // 80106724: stb     r5, 34(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(34);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106728:
    ctx->pc = 0x80106728u;
    // 80106728: stb     r0, 35(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(35);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8010672C:
    ctx->pc = 0x8010672Cu;
    // 8010672C: bl      0x80038760
    {
            ctx->lr = 0x80106730u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106730:
    ctx->pc = 0x80106730u;
    ctx->downcount -= 3;
    // 80106730: addi    r3, r28, 352
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(352);

label_80106734:
    ctx->pc = 0x80106734u;
    // 80106734: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106738:
    ctx->pc = 0x80106738u;
    // 80106738: bl      0x80037780
    {
            ctx->lr = 0x8010673Cu;
            ctx->pc = 0x80037780u;
            return;
    }

label_8010673C:
    ctx->pc = 0x8010673Cu;
    ctx->downcount -= 7;
    // 8010673C: lfs     f1, 320(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010673Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106740:
    ctx->pc = 0x80106740u;
    // 80106740: lfs     f2, 324(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106740u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106744:
    ctx->pc = 0x80106744u;
    // 80106744: lfs     f3, 328(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106744u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106748:
    ctx->pc = 0x80106748u;
    // 80106748: lfs     f4, 332(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106748u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_8010674C:
    ctx->pc = 0x8010674Cu;
    // 8010674C: lfs     f5, 336(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010674Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106750:
    ctx->pc = 0x80106750u;
    // 80106750: lwz     r3, 340(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106754:
    ctx->pc = 0x80106754u;
    // 80106754: bl      0x80106E80
    {
            ctx->lr = 0x80106758u;
            goto label_80106E80;
    }

label_80106758:
    ctx->pc = 0x80106758u;
    ctx->downcount -= 3;
    // 80106758: addi    r3, r28, 416
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(416);

label_8010675C:
    ctx->pc = 0x8010675Cu;
    // 8010675C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106760:
    ctx->pc = 0x80106760u;
    // 80106760: bl      0x80037780
    {
            ctx->lr = 0x80106764u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106764:
    ctx->pc = 0x80106764u;
    ctx->downcount -= 7;
    // 80106764: lfs     f1, 384(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106764u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106768:
    ctx->pc = 0x80106768u;
    // 80106768: lfs     f2, 388(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106768u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8010676C:
    ctx->pc = 0x8010676Cu;
    // 8010676C: lfs     f3, 392(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010676Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106770:
    ctx->pc = 0x80106770u;
    // 80106770: lfs     f4, 396(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106770u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106774:
    ctx->pc = 0x80106774u;
    // 80106774: lfs     f5, 400(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106774u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106778:
    ctx->pc = 0x80106778u;
    // 80106778: lwz     r3, 404(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8010677C:
    ctx->pc = 0x8010677Cu;
    // 8010677C: bl      0x80106E80
    {
            ctx->lr = 0x80106780u;
            goto label_80106E80;
    }

label_80106780:
    ctx->pc = 0x80106780u;
    ctx->downcount -= 3;
    // 80106780: lhz     r0, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80106784:
    ctx->pc = 0x80106784u;
    // 80106784: rlwinm r3, r0, 23, 30, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x00000003u;
    }

label_80106788:
    ctx->pc = 0x80106788u;
    // 80106788: bl      0x80105BF0
    {
            ctx->lr = 0x8010678Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105BF0u;
                return;
            }
            goto label_80105BF0;
    }

label_8010678C:
    ctx->pc = 0x8010678Cu;
    ctx->downcount -= 3;
    // 8010678C: addi    r3, r28, 288
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(288);

label_80106790:
    ctx->pc = 0x80106790u;
    // 80106790: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106794:
    ctx->pc = 0x80106794u;
    // 80106794: bl      0x80037780
    {
            ctx->lr = 0x80106798u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106798:
    ctx->pc = 0x80106798u;
    ctx->downcount -= 7;
    // 80106798: lfs     f1, 256(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106798u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8010679C:
    ctx->pc = 0x8010679Cu;
    // 8010679C: lfs     f2, 260(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010679Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_801067A0:
    ctx->pc = 0x801067A0u;
    // 801067A0: lfs     f3, 264(r28)
    if (!ppc_fp_available_inline(ctx, 0x801067A0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_801067A4:
    ctx->pc = 0x801067A4u;
    // 801067A4: lfs     f4, 268(r28)
    if (!ppc_fp_available_inline(ctx, 0x801067A4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_801067A8:
    ctx->pc = 0x801067A8u;
    // 801067A8: lfs     f5, 272(r28)
    if (!ppc_fp_available_inline(ctx, 0x801067A8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_801067AC:
    ctx->pc = 0x801067ACu;
    // 801067AC: lwz     r3, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801067B0:
    ctx->pc = 0x801067B0u;
    // 801067B0: bl      0x80106E80
    {
            ctx->lr = 0x801067B4u;
            goto label_80106E80;
    }

label_801067B4:
    ctx->pc = 0x801067B4u;
    ctx->downcount -= 4;
    // 801067B4: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801067B8:
    ctx->pc = 0x801067B8u;
    // 801067B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801067BC:
    ctx->pc = 0x801067BCu;
    // 801067BC: rlwinm r25, r0, 8, 29, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x00000007u;
    }

label_801067C0:
    ctx->pc = 0x801067C0u;
    // 801067C0: bl      0x80038C20
    {
            ctx->lr = 0x801067C4u;
            ctx->pc = 0x80038C20u;
            return;
    }

label_801067C4:
    ctx->pc = 0x801067C4u;
    ctx->downcount -= 4;
    // 801067C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801067C8:
    ctx->pc = 0x801067C8u;
    // 801067C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801067CC:
    ctx->pc = 0x801067CCu;
    // 801067CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801067D0:
    ctx->pc = 0x801067D0u;
    // 801067D0: bl      0x80038930
    {
            ctx->lr = 0x801067D4u;
            ctx->pc = 0x80038930u;
            return;
    }

label_801067D4:
    ctx->pc = 0x801067D4u;
    ctx->downcount -= 5;
    // 801067D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801067D8:
    ctx->pc = 0x801067D8u;
    // 801067D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801067DC:
    ctx->pc = 0x801067DCu;
    // 801067DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801067E0:
    ctx->pc = 0x801067E0u;
    // 801067E0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_801067E4:
    ctx->pc = 0x801067E4u;
    // 801067E4: bl      0x80038AC0
    {
            ctx->lr = 0x801067E8u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_801067E8:
    ctx->pc = 0x801067E8u;
    ctx->downcount -= 6;
    // 801067E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801067EC:
    ctx->pc = 0x801067ECu;
    // 801067EC: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_801067F0:
    ctx->pc = 0x801067F0u;
    // 801067F0: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_801067F4:
    ctx->pc = 0x801067F4u;
    // 801067F4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_801067F8:
    ctx->pc = 0x801067F8u;
    // 801067F8: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_801067FC:
    ctx->pc = 0x801067FCu;
    // 801067FC: bl      0x80038620
    {
            ctx->lr = 0x80106800u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80106800:
    ctx->pc = 0x80106800u;
    ctx->downcount -= 6;
    // 80106800: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106804:
    ctx->pc = 0x80106804u;
    // 80106804: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106808:
    ctx->pc = 0x80106808u;
    // 80106808: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8010680C:
    ctx->pc = 0x8010680Cu;
    // 8010680C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80106810:
    ctx->pc = 0x80106810u;
    // 80106810: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80106814:
    ctx->pc = 0x80106814u;
    // 80106814: bl      0x80038660
    {
            ctx->lr = 0x80106818u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80106818:
    ctx->pc = 0x80106818u;
    ctx->downcount -= 7;
    // 80106818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010681C:
    ctx->pc = 0x8010681Cu;
    // 8010681C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106820:
    ctx->pc = 0x80106820u;
    // 80106820: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106824:
    ctx->pc = 0x80106824u;
    // 80106824: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106828:
    ctx->pc = 0x80106828u;
    // 80106828: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8010682C:
    ctx->pc = 0x8010682Cu;
    // 8010682C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106830:
    ctx->pc = 0x80106830u;
    // 80106830: bl      0x800386A0
    {
            ctx->lr = 0x80106834u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80106834:
    ctx->pc = 0x80106834u;
    ctx->downcount -= 7;
    // 80106834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106838:
    ctx->pc = 0x80106838u;
    // 80106838: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8010683C:
    ctx->pc = 0x8010683Cu;
    // 8010683C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106840:
    ctx->pc = 0x80106840u;
    // 80106840: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106844:
    ctx->pc = 0x80106844u;
    // 80106844: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106848:
    ctx->pc = 0x80106848u;
    // 80106848: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8010684C:
    ctx->pc = 0x8010684Cu;
    // 8010684C: bl      0x80038700
    {
            ctx->lr = 0x80106850u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80106850:
    ctx->pc = 0x80106850u;
    ctx->downcount -= 15;
    // 80106850: lis     r31, -32666
    ctx->gpr[31] = ((u32)(s32)(-32666) << 16);

label_80106854:
    ctx->pc = 0x80106854u;
    // 80106854: rlwinm r0, r25, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_80106858:
    ctx->pc = 0x80106858u;
    // 80106858: addi    r31, r31, -17928
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-17928);

label_8010685C:
    ctx->pc = 0x8010685Cu;
    // 8010685C: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80106860:
    ctx->pc = 0x80106860u;
    // 80106860: add   r8, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80106864:
    ctx->pc = 0x80106864u;
    // 80106864: lbzx    r7, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80106868:
    ctx->pc = 0x80106868u;
    // 80106868: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8010686C:
    ctx->pc = 0x8010686Cu;
    // 8010686C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106870:
    ctx->pc = 0x80106870u;
    // 80106870: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106874:
    ctx->pc = 0x80106874u;
    // 80106874: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80106878:
    ctx->pc = 0x80106878u;
    // 80106878: stb     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8010687C:
    ctx->pc = 0x8010687Cu;
    // 8010687C: stb     r6, 29(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(29);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80106880:
    ctx->pc = 0x80106880u;
    // 80106880: stb     r5, 30(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106884:
    ctx->pc = 0x80106884u;
    // 80106884: stb     r0, 31(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(31);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80106888:
    ctx->pc = 0x80106888u;
    // 80106888: bl      0x80038760
    {
            ctx->lr = 0x8010688Cu;
            ctx->pc = 0x80038760u;
            return;
    }

label_8010688C:
    ctx->pc = 0x8010688Cu;
    ctx->downcount -= 3;
    // 8010688C: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_80106890:
    ctx->pc = 0x80106890u;
    // 80106890: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106894:
    ctx->pc = 0x80106894u;
    // 80106894: bl      0x80037780
    {
            ctx->lr = 0x80106898u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106898:
    ctx->pc = 0x80106898u;
    ctx->downcount -= 7;
    // 80106898: lfs     f1, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106898u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8010689C:
    ctx->pc = 0x8010689Cu;
    // 8010689C: lfs     f2, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010689Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_801068A0:
    ctx->pc = 0x801068A0u;
    // 801068A0: lfs     f3, 136(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068A0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_801068A4:
    ctx->pc = 0x801068A4u;
    // 801068A4: lfs     f4, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068A4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_801068A8:
    ctx->pc = 0x801068A8u;
    // 801068A8: lfs     f5, 144(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068A8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_801068AC:
    ctx->pc = 0x801068ACu;
    // 801068AC: lwz     r3, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801068B0:
    ctx->pc = 0x801068B0u;
    // 801068B0: bl      0x80106E80
    {
            ctx->lr = 0x801068B4u;
            goto label_80106E80;
    }

label_801068B4:
    ctx->pc = 0x801068B4u;
    ctx->downcount -= 3;
    // 801068B4: addi    r3, r28, 224
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(224);

label_801068B8:
    ctx->pc = 0x801068B8u;
    // 801068B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801068BC:
    ctx->pc = 0x801068BCu;
    // 801068BC: bl      0x80037780
    {
            ctx->lr = 0x801068C0u;
            ctx->pc = 0x80037780u;
            return;
    }

label_801068C0:
    ctx->pc = 0x801068C0u;
    ctx->downcount -= 7;
    // 801068C0: lfs     f1, 192(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068C0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_801068C4:
    ctx->pc = 0x801068C4u;
    // 801068C4: lfs     f2, 196(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068C4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_801068C8:
    ctx->pc = 0x801068C8u;
    // 801068C8: lfs     f3, 200(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068C8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_801068CC:
    ctx->pc = 0x801068CCu;
    // 801068CC: lfs     f4, 204(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068CCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_801068D0:
    ctx->pc = 0x801068D0u;
    // 801068D0: lfs     f5, 208(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068D0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_801068D4:
    ctx->pc = 0x801068D4u;
    // 801068D4: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801068D8:
    ctx->pc = 0x801068D8u;
    // 801068D8: bl      0x80106E80
    {
            ctx->lr = 0x801068DCu;
            goto label_80106E80;
    }

label_801068DC:
    ctx->pc = 0x801068DCu;
    ctx->downcount -= 4;
    // 801068DC: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801068E0:
    ctx->pc = 0x801068E0u;
    // 801068E0: rlwinm r3, r0, 9, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0x00000007u;
    }

label_801068E4:
    ctx->pc = 0x801068E4u;
    // 801068E4: rlwinm r4, r0, 6, 26, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_801068E8:
    ctx->pc = 0x801068E8u;
    // 801068E8: bl      0x80105E38
    {
            ctx->lr = 0x801068ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105E38u;
                return;
            }
            goto label_80105E38;
    }

label_801068EC:
    ctx->pc = 0x801068ECu;
    ctx->downcount -= 3;
    // 801068EC: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_801068F0:
    ctx->pc = 0x801068F0u;
    // 801068F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801068F4:
    ctx->pc = 0x801068F4u;
    // 801068F4: bl      0x80037780
    {
            ctx->lr = 0x801068F8u;
            ctx->pc = 0x80037780u;
            return;
    }

label_801068F8:
    ctx->pc = 0x801068F8u;
    ctx->downcount -= 7;
    // 801068F8: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068F8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_801068FC:
    ctx->pc = 0x801068FCu;
    // 801068FC: lfs     f2, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x801068FCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106900:
    ctx->pc = 0x80106900u;
    // 80106900: lfs     f3, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106900u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106904:
    ctx->pc = 0x80106904u;
    // 80106904: lfs     f4, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106904u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106908:
    ctx->pc = 0x80106908u;
    // 80106908: lfs     f5, 16(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106908u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_8010690C:
    ctx->pc = 0x8010690Cu;
    // 8010690C: lwz     r3, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106910:
    ctx->pc = 0x80106910u;
    // 80106910: bl      0x80106E80
    {
            ctx->lr = 0x80106914u;
            goto label_80106E80;
    }

label_80106914:
    ctx->pc = 0x80106914u;
    ctx->downcount -= 3;
    // 80106914: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_80106918:
    ctx->pc = 0x80106918u;
    // 80106918: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8010691C:
    ctx->pc = 0x8010691Cu;
    // 8010691C: bl      0x80037780
    {
            ctx->lr = 0x80106920u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106920:
    ctx->pc = 0x80106920u;
    ctx->downcount -= 7;
    // 80106920: lfs     f1, 64(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106920u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106924:
    ctx->pc = 0x80106924u;
    // 80106924: lfs     f2, 68(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106924u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106928:
    ctx->pc = 0x80106928u;
    // 80106928: lfs     f3, 72(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106928u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_8010692C:
    ctx->pc = 0x8010692Cu;
    // 8010692C: lfs     f4, 76(r28)
    if (!ppc_fp_available_inline(ctx, 0x8010692Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106930:
    ctx->pc = 0x80106930u;
    // 80106930: lfs     f5, 80(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106930u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106934:
    ctx->pc = 0x80106934u;
    // 80106934: lwz     r3, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106938:
    ctx->pc = 0x80106938u;
    // 80106938: bl      0x80106E80
    {
            ctx->lr = 0x8010693Cu;
            goto label_80106E80;
    }

label_8010693C:
    ctx->pc = 0x8010693Cu;
    ctx->downcount -= 2;
    // 8010693C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106940:
    ctx->pc = 0x80106940u;
    // 80106940: bl      0x80038C20
    {
            ctx->lr = 0x80106944u;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80106944:
    ctx->pc = 0x80106944u;
    ctx->downcount -= 4;
    // 80106944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106948:
    ctx->pc = 0x80106948u;
    // 80106948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8010694C:
    ctx->pc = 0x8010694Cu;
    // 8010694C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106950:
    ctx->pc = 0x80106950u;
    // 80106950: bl      0x80038930
    {
            ctx->lr = 0x80106954u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80106954:
    ctx->pc = 0x80106954u;
    ctx->downcount -= 5;
    // 80106954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106958:
    ctx->pc = 0x80106958u;
    // 80106958: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8010695C:
    ctx->pc = 0x8010695Cu;
    // 8010695C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106960:
    ctx->pc = 0x80106960u;
    // 80106960: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80106964:
    ctx->pc = 0x80106964u;
    // 80106964: bl      0x80038AC0
    {
            ctx->lr = 0x80106968u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80106968:
    ctx->pc = 0x80106968u;
    ctx->downcount -= 6;
    // 80106968: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010696C:
    ctx->pc = 0x8010696Cu;
    // 8010696C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80106970:
    ctx->pc = 0x80106970u;
    // 80106970: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80106974:
    ctx->pc = 0x80106974u;
    // 80106974: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80106978:
    ctx->pc = 0x80106978u;
    // 80106978: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8010697C:
    ctx->pc = 0x8010697Cu;
    // 8010697C: bl      0x80038620
    {
            ctx->lr = 0x80106980u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80106980:
    ctx->pc = 0x80106980u;
    ctx->downcount -= 6;
    // 80106980: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106984:
    ctx->pc = 0x80106984u;
    // 80106984: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106988:
    ctx->pc = 0x80106988u;
    // 80106988: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8010698C:
    ctx->pc = 0x8010698Cu;
    // 8010698C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80106990:
    ctx->pc = 0x80106990u;
    // 80106990: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80106994:
    ctx->pc = 0x80106994u;
    // 80106994: bl      0x80038660
    {
            ctx->lr = 0x80106998u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80106998:
    ctx->pc = 0x80106998u;
    ctx->downcount -= 7;
    // 80106998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8010699C:
    ctx->pc = 0x8010699Cu;
    // 8010699C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801069A0:
    ctx->pc = 0x801069A0u;
    // 801069A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801069A4:
    ctx->pc = 0x801069A4u;
    // 801069A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801069A8:
    ctx->pc = 0x801069A8u;
    // 801069A8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_801069AC:
    ctx->pc = 0x801069ACu;
    // 801069AC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801069B0:
    ctx->pc = 0x801069B0u;
    // 801069B0: bl      0x800386A0
    {
            ctx->lr = 0x801069B4u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_801069B4:
    ctx->pc = 0x801069B4u;
    ctx->downcount -= 7;
    // 801069B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_801069B8:
    ctx->pc = 0x801069B8u;
    // 801069B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801069BC:
    ctx->pc = 0x801069BCu;
    // 801069BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_801069C0:
    ctx->pc = 0x801069C0u;
    // 801069C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_801069C4:
    ctx->pc = 0x801069C4u;
    // 801069C4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_801069C8:
    ctx->pc = 0x801069C8u;
    // 801069C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_801069CC:
    ctx->pc = 0x801069CCu;
    // 801069CC: bl      0x80038700
    {
            ctx->lr = 0x801069D0u;
            ctx->pc = 0x80038700u;
            return;
    }

label_801069D0:
    ctx->pc = 0x801069D0u;
    ctx->downcount -= 13;
    // 801069D0: lbz     r7, -29712(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29712);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_801069D4:
    ctx->pc = 0x801069D4u;
    // 801069D4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_801069D8:
    ctx->pc = 0x801069D8u;
    // 801069D8: lbz     r6, -29711(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29711);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_801069DC:
    ctx->pc = 0x801069DCu;
    // 801069DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_801069E0:
    ctx->pc = 0x801069E0u;
    // 801069E0: lbz     r5, -29710(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29710);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_801069E4:
    ctx->pc = 0x801069E4u;
    // 801069E4: lbz     r0, -29709(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29709);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_801069E8:
    ctx->pc = 0x801069E8u;
    // 801069E8: stb     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_801069EC:
    ctx->pc = 0x801069ECu;
    // 801069EC: stb     r6, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_801069F0:
    ctx->pc = 0x801069F0u;
    // 801069F0: stb     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_801069F4:
    ctx->pc = 0x801069F4u;
    // 801069F4: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_801069F8:
    ctx->pc = 0x801069F8u;
    // 801069F8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801069FC:
    ctx->pc = 0x801069FCu;
    // 801069FC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106A00:
    ctx->pc = 0x80106A00u;
    // 80106A00: bl      0x80038760
    {
            ctx->lr = 0x80106A04u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106A04:
    ctx->pc = 0x80106A04u;
    ctx->downcount -= 3;
    // 80106A04: addi    r3, r28, 480
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(480);

label_80106A08:
    ctx->pc = 0x80106A08u;
    // 80106A08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106A0C:
    ctx->pc = 0x80106A0Cu;
    // 80106A0C: bl      0x80037780
    {
            ctx->lr = 0x80106A10u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106A10:
    ctx->pc = 0x80106A10u;
    ctx->downcount -= 7;
    // 80106A10: lfs     f1, 448(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106A10u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106A14:
    ctx->pc = 0x80106A14u;
    // 80106A14: lfs     f2, 452(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106A14u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106A18:
    ctx->pc = 0x80106A18u;
    // 80106A18: lfs     f3, 456(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106A18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106A1C:
    ctx->pc = 0x80106A1Cu;
    // 80106A1C: lfs     f4, 460(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106A1Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106A20:
    ctx->pc = 0x80106A20u;
    // 80106A20: lfs     f5, 464(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106A20u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106A24:
    ctx->pc = 0x80106A24u;
    // 80106A24: lwz     r3, 468(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106A28:
    ctx->pc = 0x80106A28u;
    // 80106A28: bl      0x80106E80
    {
            ctx->lr = 0x80106A2Cu;
            goto label_80106E80;
    }

label_80106A2C:
    ctx->pc = 0x80106A2Cu;
    ctx->downcount -= 2;
    // 80106A2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106A30:
    ctx->pc = 0x80106A30u;
    // 80106A30: bl      0x80039140
    {
            ctx->lr = 0x80106A34u;
            ctx->pc = 0x80039140u;
            return;
    }

label_80106A34:
    ctx->pc = 0x80106A34u;
    ctx->downcount -= 3;
    // 80106A34: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80106A38:
    ctx->pc = 0x80106A38u;
    // 80106A38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80106A3C:
    ctx->pc = 0x80106A3Cu;
    // 80106A3C: bl      0x800364F0
    {
            ctx->lr = 0x80106A40u;
            ctx->pc = 0x800364F0u;
            return;
    }

label_80106A40:
    ctx->pc = 0x80106A40u;
    ctx->downcount -= 1;
    // 80106A40: bl      0x800351B0
    {
            ctx->lr = 0x80106A44u;
            ctx->pc = 0x800351B0u;
            return;
    }

label_80106A44:
    ctx->pc = 0x80106A44u;
    ctx->downcount -= 5;
    // 80106A44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106A48:
    ctx->pc = 0x80106A48u;
    // 80106A48: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106A4C:
    ctx->pc = 0x80106A4Cu;
    // 80106A4C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80106A50:
    ctx->pc = 0x80106A50u;
    // 80106A50: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80106A54:
    ctx->pc = 0x80106A54u;
    // 80106A54: bl      0x800390F0
    {
            ctx->lr = 0x80106A58u;
            ctx->pc = 0x800390F0u;
            return;
    }

label_80106A58:
    ctx->pc = 0x80106A58u;
    ctx->downcount -= 4;
    // 80106A58: lhz     r0, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80106A5C:
    ctx->pc = 0x80106A5Cu;
    // 80106A5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106A60:
    ctx->pc = 0x80106A60u;
    // 80106A60: rlwinm r25, r0, 23, 29, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x00000007u;
    }

label_80106A64:
    ctx->pc = 0x80106A64u;
    // 80106A64: bl      0x80038C20
    {
            ctx->lr = 0x80106A68u;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80106A68:
    ctx->pc = 0x80106A68u;
    ctx->downcount -= 4;
    // 80106A68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106A6C:
    ctx->pc = 0x80106A6Cu;
    // 80106A6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106A70:
    ctx->pc = 0x80106A70u;
    // 80106A70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106A74:
    ctx->pc = 0x80106A74u;
    // 80106A74: bl      0x80038930
    {
            ctx->lr = 0x80106A78u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80106A78:
    ctx->pc = 0x80106A78u;
    ctx->downcount -= 5;
    // 80106A78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106A7C:
    ctx->pc = 0x80106A7Cu;
    // 80106A7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106A80:
    ctx->pc = 0x80106A80u;
    // 80106A80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106A84:
    ctx->pc = 0x80106A84u;
    // 80106A84: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80106A88:
    ctx->pc = 0x80106A88u;
    // 80106A88: bl      0x80038AC0
    {
            ctx->lr = 0x80106A8Cu;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80106A8C:
    ctx->pc = 0x80106A8Cu;
    ctx->downcount -= 6;
    // 80106A8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106A90:
    ctx->pc = 0x80106A90u;
    // 80106A90: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80106A94:
    ctx->pc = 0x80106A94u;
    // 80106A94: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80106A98:
    ctx->pc = 0x80106A98u;
    // 80106A98: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80106A9C:
    ctx->pc = 0x80106A9Cu;
    // 80106A9C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80106AA0:
    ctx->pc = 0x80106AA0u;
    // 80106AA0: bl      0x80038620
    {
            ctx->lr = 0x80106AA4u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80106AA4:
    ctx->pc = 0x80106AA4u;
    ctx->downcount -= 6;
    // 80106AA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106AA8:
    ctx->pc = 0x80106AA8u;
    // 80106AA8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106AAC:
    ctx->pc = 0x80106AACu;
    // 80106AAC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80106AB0:
    ctx->pc = 0x80106AB0u;
    // 80106AB0: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80106AB4:
    ctx->pc = 0x80106AB4u;
    // 80106AB4: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80106AB8:
    ctx->pc = 0x80106AB8u;
    // 80106AB8: bl      0x80038660
    {
            ctx->lr = 0x80106ABCu;
            ctx->pc = 0x80038660u;
            return;
    }

label_80106ABC:
    ctx->pc = 0x80106ABCu;
    ctx->downcount -= 7;
    // 80106ABC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106AC0:
    ctx->pc = 0x80106AC0u;
    // 80106AC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106AC4:
    ctx->pc = 0x80106AC4u;
    // 80106AC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106AC8:
    ctx->pc = 0x80106AC8u;
    // 80106AC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106ACC:
    ctx->pc = 0x80106ACCu;
    // 80106ACC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106AD0:
    ctx->pc = 0x80106AD0u;
    // 80106AD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106AD4:
    ctx->pc = 0x80106AD4u;
    // 80106AD4: bl      0x800386A0
    {
            ctx->lr = 0x80106AD8u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80106AD8:
    ctx->pc = 0x80106AD8u;
    ctx->downcount -= 7;
    // 80106AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106ADC:
    ctx->pc = 0x80106ADCu;
    // 80106ADC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106AE0:
    ctx->pc = 0x80106AE0u;
    // 80106AE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106AE4:
    ctx->pc = 0x80106AE4u;
    // 80106AE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106AE8:
    ctx->pc = 0x80106AE8u;
    // 80106AE8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106AEC:
    ctx->pc = 0x80106AECu;
    // 80106AEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106AF0:
    ctx->pc = 0x80106AF0u;
    // 80106AF0: bl      0x80038700
    {
            ctx->lr = 0x80106AF4u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80106AF4:
    ctx->pc = 0x80106AF4u;
    ctx->downcount -= 13;
    // 80106AF4: rlwinm r0, r25, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_80106AF8:
    ctx->pc = 0x80106AF8u;
    // 80106AF8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80106AFC:
    ctx->pc = 0x80106AFCu;
    // 80106AFC: add   r8, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80106B00:
    ctx->pc = 0x80106B00u;
    // 80106B00: lbzx    r7, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80106B04:
    ctx->pc = 0x80106B04u;
    // 80106B04: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80106B08:
    ctx->pc = 0x80106B08u;
    // 80106B08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106B0C:
    ctx->pc = 0x80106B0Cu;
    // 80106B0C: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106B10:
    ctx->pc = 0x80106B10u;
    // 80106B10: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80106B14:
    ctx->pc = 0x80106B14u;
    // 80106B14: stb     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80106B18:
    ctx->pc = 0x80106B18u;
    // 80106B18: stb     r6, 21(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(21);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80106B1C:
    ctx->pc = 0x80106B1Cu;
    // 80106B1C: stb     r5, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106B20:
    ctx->pc = 0x80106B20u;
    // 80106B20: stb     r0, 23(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(23);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80106B24:
    ctx->pc = 0x80106B24u;
    // 80106B24: bl      0x80038760
    {
            ctx->lr = 0x80106B28u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106B28:
    ctx->pc = 0x80106B28u;
    ctx->downcount -= 3;
    // 80106B28: addi    r3, r28, 352
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(352);

label_80106B2C:
    ctx->pc = 0x80106B2Cu;
    // 80106B2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106B30:
    ctx->pc = 0x80106B30u;
    // 80106B30: bl      0x80037780
    {
            ctx->lr = 0x80106B34u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106B34:
    ctx->pc = 0x80106B34u;
    ctx->downcount -= 7;
    // 80106B34: lfs     f1, 320(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B34u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106B38:
    ctx->pc = 0x80106B38u;
    // 80106B38: lfs     f2, 324(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B38u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106B3C:
    ctx->pc = 0x80106B3Cu;
    // 80106B3C: lfs     f3, 328(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B3Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106B40:
    ctx->pc = 0x80106B40u;
    // 80106B40: lfs     f4, 332(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B40u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106B44:
    ctx->pc = 0x80106B44u;
    // 80106B44: lfs     f5, 336(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B44u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106B48:
    ctx->pc = 0x80106B48u;
    // 80106B48: lwz     r3, 340(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106B4C:
    ctx->pc = 0x80106B4Cu;
    // 80106B4C: bl      0x80106E80
    {
            ctx->lr = 0x80106B50u;
            goto label_80106E80;
    }

label_80106B50:
    ctx->pc = 0x80106B50u;
    ctx->downcount -= 3;
    // 80106B50: addi    r3, r28, 416
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(416);

label_80106B54:
    ctx->pc = 0x80106B54u;
    // 80106B54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106B58:
    ctx->pc = 0x80106B58u;
    // 80106B58: bl      0x80037780
    {
            ctx->lr = 0x80106B5Cu;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106B5C:
    ctx->pc = 0x80106B5Cu;
    ctx->downcount -= 7;
    // 80106B5C: lfs     f1, 384(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B5Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106B60:
    ctx->pc = 0x80106B60u;
    // 80106B60: lfs     f2, 388(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B60u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106B64:
    ctx->pc = 0x80106B64u;
    // 80106B64: lfs     f3, 392(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B64u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106B68:
    ctx->pc = 0x80106B68u;
    // 80106B68: lfs     f4, 396(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B68u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106B6C:
    ctx->pc = 0x80106B6Cu;
    // 80106B6C: lfs     f5, 400(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B6Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106B70:
    ctx->pc = 0x80106B70u;
    // 80106B70: lwz     r3, 404(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106B74:
    ctx->pc = 0x80106B74u;
    // 80106B74: bl      0x80106E80
    {
            ctx->lr = 0x80106B78u;
            goto label_80106E80;
    }

label_80106B78:
    ctx->pc = 0x80106B78u;
    ctx->downcount -= 3;
    // 80106B78: lhz     r0, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80106B7C:
    ctx->pc = 0x80106B7Cu;
    // 80106B7C: rlwinm r3, r0, 23, 30, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0x00000003u;
    }

label_80106B80:
    ctx->pc = 0x80106B80u;
    // 80106B80: bl      0x80105BF0
    {
            ctx->lr = 0x80106B84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105BF0u;
                return;
            }
            goto label_80105BF0;
    }

label_80106B84:
    ctx->pc = 0x80106B84u;
    ctx->downcount -= 3;
    // 80106B84: addi    r3, r28, 288
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(288);

label_80106B88:
    ctx->pc = 0x80106B88u;
    // 80106B88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106B8C:
    ctx->pc = 0x80106B8Cu;
    // 80106B8C: bl      0x80037780
    {
            ctx->lr = 0x80106B90u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106B90:
    ctx->pc = 0x80106B90u;
    ctx->downcount -= 7;
    // 80106B90: lfs     f1, 256(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B90u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106B94:
    ctx->pc = 0x80106B94u;
    // 80106B94: lfs     f2, 260(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B94u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106B98:
    ctx->pc = 0x80106B98u;
    // 80106B98: lfs     f3, 264(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B98u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106B9C:
    ctx->pc = 0x80106B9Cu;
    // 80106B9C: lfs     f4, 268(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106B9Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106BA0:
    ctx->pc = 0x80106BA0u;
    // 80106BA0: lfs     f5, 272(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106BA0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106BA4:
    ctx->pc = 0x80106BA4u;
    // 80106BA4: lwz     r3, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106BA8:
    ctx->pc = 0x80106BA8u;
    // 80106BA8: bl      0x80106E80
    {
            ctx->lr = 0x80106BACu;
            goto label_80106E80;
    }

label_80106BAC:
    ctx->pc = 0x80106BACu;
    ctx->downcount -= 4;
    // 80106BAC: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106BB0:
    ctx->pc = 0x80106BB0u;
    // 80106BB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106BB4:
    ctx->pc = 0x80106BB4u;
    // 80106BB4: rlwinm r25, r0, 8, 29, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x00000007u;
    }

label_80106BB8:
    ctx->pc = 0x80106BB8u;
    // 80106BB8: bl      0x80038C20
    {
            ctx->lr = 0x80106BBCu;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80106BBC:
    ctx->pc = 0x80106BBCu;
    ctx->downcount -= 4;
    // 80106BBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106BC0:
    ctx->pc = 0x80106BC0u;
    // 80106BC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106BC4:
    ctx->pc = 0x80106BC4u;
    // 80106BC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106BC8:
    ctx->pc = 0x80106BC8u;
    // 80106BC8: bl      0x80038930
    {
            ctx->lr = 0x80106BCCu;
            ctx->pc = 0x80038930u;
            return;
    }

label_80106BCC:
    ctx->pc = 0x80106BCCu;
    ctx->downcount -= 5;
    // 80106BCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106BD0:
    ctx->pc = 0x80106BD0u;
    // 80106BD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106BD4:
    ctx->pc = 0x80106BD4u;
    // 80106BD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106BD8:
    ctx->pc = 0x80106BD8u;
    // 80106BD8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80106BDC:
    ctx->pc = 0x80106BDCu;
    // 80106BDC: bl      0x80038AC0
    {
            ctx->lr = 0x80106BE0u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80106BE0:
    ctx->pc = 0x80106BE0u;
    ctx->downcount -= 6;
    // 80106BE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106BE4:
    ctx->pc = 0x80106BE4u;
    // 80106BE4: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80106BE8:
    ctx->pc = 0x80106BE8u;
    // 80106BE8: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80106BEC:
    ctx->pc = 0x80106BECu;
    // 80106BEC: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80106BF0:
    ctx->pc = 0x80106BF0u;
    // 80106BF0: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80106BF4:
    ctx->pc = 0x80106BF4u;
    // 80106BF4: bl      0x80038620
    {
            ctx->lr = 0x80106BF8u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80106BF8:
    ctx->pc = 0x80106BF8u;
    ctx->downcount -= 6;
    // 80106BF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106BFC:
    ctx->pc = 0x80106BFCu;
    // 80106BFC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106C00:
    ctx->pc = 0x80106C00u;
    // 80106C00: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80106C04:
    ctx->pc = 0x80106C04u;
    // 80106C04: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80106C08:
    ctx->pc = 0x80106C08u;
    // 80106C08: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80106C0C:
    ctx->pc = 0x80106C0Cu;
    // 80106C0C: bl      0x80038660
    {
            ctx->lr = 0x80106C10u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80106C10:
    ctx->pc = 0x80106C10u;
    ctx->downcount -= 7;
    // 80106C10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106C14:
    ctx->pc = 0x80106C14u;
    // 80106C14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106C18:
    ctx->pc = 0x80106C18u;
    // 80106C18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106C1C:
    ctx->pc = 0x80106C1Cu;
    // 80106C1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106C20:
    ctx->pc = 0x80106C20u;
    // 80106C20: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106C24:
    ctx->pc = 0x80106C24u;
    // 80106C24: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106C28:
    ctx->pc = 0x80106C28u;
    // 80106C28: bl      0x800386A0
    {
            ctx->lr = 0x80106C2Cu;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80106C2C:
    ctx->pc = 0x80106C2Cu;
    ctx->downcount -= 7;
    // 80106C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106C30:
    ctx->pc = 0x80106C30u;
    // 80106C30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106C34:
    ctx->pc = 0x80106C34u;
    // 80106C34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106C38:
    ctx->pc = 0x80106C38u;
    // 80106C38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106C3C:
    ctx->pc = 0x80106C3Cu;
    // 80106C3C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106C40:
    ctx->pc = 0x80106C40u;
    // 80106C40: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106C44:
    ctx->pc = 0x80106C44u;
    // 80106C44: bl      0x80038700
    {
            ctx->lr = 0x80106C48u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80106C48:
    ctx->pc = 0x80106C48u;
    ctx->downcount -= 13;
    // 80106C48: rlwinm r0, r25, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_80106C4C:
    ctx->pc = 0x80106C4Cu;
    // 80106C4C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80106C50:
    ctx->pc = 0x80106C50u;
    // 80106C50: add   r8, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80106C54:
    ctx->pc = 0x80106C54u;
    // 80106C54: lbzx    r7, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80106C58:
    ctx->pc = 0x80106C58u;
    // 80106C58: lbz     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80106C5C:
    ctx->pc = 0x80106C5Cu;
    // 80106C5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106C60:
    ctx->pc = 0x80106C60u;
    // 80106C60: lbz     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80106C64:
    ctx->pc = 0x80106C64u;
    // 80106C64: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80106C68:
    ctx->pc = 0x80106C68u;
    // 80106C68: stb     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80106C6C:
    ctx->pc = 0x80106C6Cu;
    // 80106C6C: stb     r6, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80106C70:
    ctx->pc = 0x80106C70u;
    // 80106C70: stb     r5, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80106C74:
    ctx->pc = 0x80106C74u;
    // 80106C74: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80106C78:
    ctx->pc = 0x80106C78u;
    // 80106C78: bl      0x80038760
    {
            ctx->lr = 0x80106C7Cu;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106C7C:
    ctx->pc = 0x80106C7Cu;
    ctx->downcount -= 3;
    // 80106C7C: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_80106C80:
    ctx->pc = 0x80106C80u;
    // 80106C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106C84:
    ctx->pc = 0x80106C84u;
    // 80106C84: bl      0x80037780
    {
            ctx->lr = 0x80106C88u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106C88:
    ctx->pc = 0x80106C88u;
    ctx->downcount -= 7;
    // 80106C88: lfs     f1, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106C88u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106C8C:
    ctx->pc = 0x80106C8Cu;
    // 80106C8C: lfs     f2, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106C8Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106C90:
    ctx->pc = 0x80106C90u;
    // 80106C90: lfs     f3, 136(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106C90u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106C94:
    ctx->pc = 0x80106C94u;
    // 80106C94: lfs     f4, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106C94u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106C98:
    ctx->pc = 0x80106C98u;
    // 80106C98: lfs     f5, 144(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106C98u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106C9C:
    ctx->pc = 0x80106C9Cu;
    // 80106C9C: lwz     r3, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106CA0:
    ctx->pc = 0x80106CA0u;
    // 80106CA0: bl      0x80106E80
    {
            ctx->lr = 0x80106CA4u;
            goto label_80106E80;
    }

label_80106CA4:
    ctx->pc = 0x80106CA4u;
    ctx->downcount -= 3;
    // 80106CA4: addi    r3, r28, 224
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(224);

label_80106CA8:
    ctx->pc = 0x80106CA8u;
    // 80106CA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106CAC:
    ctx->pc = 0x80106CACu;
    // 80106CAC: bl      0x80037780
    {
            ctx->lr = 0x80106CB0u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106CB0:
    ctx->pc = 0x80106CB0u;
    ctx->downcount -= 7;
    // 80106CB0: lfs     f1, 192(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CB0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106CB4:
    ctx->pc = 0x80106CB4u;
    // 80106CB4: lfs     f2, 196(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CB4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106CB8:
    ctx->pc = 0x80106CB8u;
    // 80106CB8: lfs     f3, 200(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CB8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106CBC:
    ctx->pc = 0x80106CBCu;
    // 80106CBC: lfs     f4, 204(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CBCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106CC0:
    ctx->pc = 0x80106CC0u;
    // 80106CC0: lfs     f5, 208(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CC0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106CC4:
    ctx->pc = 0x80106CC4u;
    // 80106CC4: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106CC8:
    ctx->pc = 0x80106CC8u;
    // 80106CC8: bl      0x80106E80
    {
            ctx->lr = 0x80106CCCu;
            goto label_80106E80;
    }

label_80106CCC:
    ctx->pc = 0x80106CCCu;
    ctx->downcount -= 4;
    // 80106CCC: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106CD0:
    ctx->pc = 0x80106CD0u;
    // 80106CD0: rlwinm r3, r0, 9, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0x00000007u;
    }

label_80106CD4:
    ctx->pc = 0x80106CD4u;
    // 80106CD4: rlwinm r4, r0, 6, 26, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0x0000003Fu;
    }

label_80106CD8:
    ctx->pc = 0x80106CD8u;
    // 80106CD8: bl      0x80105E38
    {
            ctx->lr = 0x80106CDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80105E38u;
                return;
            }
            goto label_80105E38;
    }

label_80106CDC:
    ctx->pc = 0x80106CDCu;
    ctx->downcount -= 3;
    // 80106CDC: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_80106CE0:
    ctx->pc = 0x80106CE0u;
    // 80106CE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106CE4:
    ctx->pc = 0x80106CE4u;
    // 80106CE4: bl      0x80037780
    {
            ctx->lr = 0x80106CE8u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106CE8:
    ctx->pc = 0x80106CE8u;
    ctx->downcount -= 7;
    // 80106CE8: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CE8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106CEC:
    ctx->pc = 0x80106CECu;
    // 80106CEC: lfs     f2, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106CF0:
    ctx->pc = 0x80106CF0u;
    // 80106CF0: lfs     f3, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CF0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106CF4:
    ctx->pc = 0x80106CF4u;
    // 80106CF4: lfs     f4, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CF4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106CF8:
    ctx->pc = 0x80106CF8u;
    // 80106CF8: lfs     f5, 16(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106CF8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106CFC:
    ctx->pc = 0x80106CFCu;
    // 80106CFC: lwz     r3, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106D00:
    ctx->pc = 0x80106D00u;
    // 80106D00: bl      0x80106E80
    {
            ctx->lr = 0x80106D04u;
            goto label_80106E80;
    }

label_80106D04:
    ctx->pc = 0x80106D04u;
    ctx->downcount -= 3;
    // 80106D04: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_80106D08:
    ctx->pc = 0x80106D08u;
    // 80106D08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106D0C:
    ctx->pc = 0x80106D0Cu;
    // 80106D0C: bl      0x80037780
    {
            ctx->lr = 0x80106D10u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106D10:
    ctx->pc = 0x80106D10u;
    ctx->downcount -= 7;
    // 80106D10: lfs     f1, 64(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106D10u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106D14:
    ctx->pc = 0x80106D14u;
    // 80106D14: lfs     f2, 68(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106D14u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106D18:
    ctx->pc = 0x80106D18u;
    // 80106D18: lfs     f3, 72(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106D18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106D1C:
    ctx->pc = 0x80106D1Cu;
    // 80106D1C: lfs     f4, 76(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106D1Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106D20:
    ctx->pc = 0x80106D20u;
    // 80106D20: lfs     f5, 80(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106D20u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106D24:
    ctx->pc = 0x80106D24u;
    // 80106D24: lwz     r3, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106D28:
    ctx->pc = 0x80106D28u;
    // 80106D28: bl      0x80106E80
    {
            ctx->lr = 0x80106D2Cu;
            goto label_80106E80;
    }

label_80106D2C:
    ctx->pc = 0x80106D2Cu;
    ctx->downcount -= 2;
    // 80106D2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106D30:
    ctx->pc = 0x80106D30u;
    // 80106D30: bl      0x80038C20
    {
            ctx->lr = 0x80106D34u;
            ctx->pc = 0x80038C20u;
            return;
    }

label_80106D34:
    ctx->pc = 0x80106D34u;
    ctx->downcount -= 4;
    // 80106D34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106D38:
    ctx->pc = 0x80106D38u;
    // 80106D38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106D3C:
    ctx->pc = 0x80106D3Cu;
    // 80106D3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106D40:
    ctx->pc = 0x80106D40u;
    // 80106D40: bl      0x80038930
    {
            ctx->lr = 0x80106D44u;
            ctx->pc = 0x80038930u;
            return;
    }

label_80106D44:
    ctx->pc = 0x80106D44u;
    ctx->downcount -= 5;
    // 80106D44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106D48:
    ctx->pc = 0x80106D48u;
    // 80106D48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106D4C:
    ctx->pc = 0x80106D4Cu;
    // 80106D4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106D50:
    ctx->pc = 0x80106D50u;
    // 80106D50: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80106D54:
    ctx->pc = 0x80106D54u;
    // 80106D54: bl      0x80038AC0
    {
            ctx->lr = 0x80106D58u;
            ctx->pc = 0x80038AC0u;
            return;
    }

label_80106D58:
    ctx->pc = 0x80106D58u;
    ctx->downcount -= 6;
    // 80106D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106D5C:
    ctx->pc = 0x80106D5Cu;
    // 80106D5C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80106D60:
    ctx->pc = 0x80106D60u;
    // 80106D60: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80106D64:
    ctx->pc = 0x80106D64u;
    // 80106D64: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80106D68:
    ctx->pc = 0x80106D68u;
    // 80106D68: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80106D6C:
    ctx->pc = 0x80106D6Cu;
    // 80106D6C: bl      0x80038620
    {
            ctx->lr = 0x80106D70u;
            ctx->pc = 0x80038620u;
            return;
    }

label_80106D70:
    ctx->pc = 0x80106D70u;
    ctx->downcount -= 6;
    // 80106D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106D74:
    ctx->pc = 0x80106D74u;
    // 80106D74: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80106D78:
    ctx->pc = 0x80106D78u;
    // 80106D78: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80106D7C:
    ctx->pc = 0x80106D7Cu;
    // 80106D7C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80106D80:
    ctx->pc = 0x80106D80u;
    // 80106D80: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80106D84:
    ctx->pc = 0x80106D84u;
    // 80106D84: bl      0x80038660
    {
            ctx->lr = 0x80106D88u;
            ctx->pc = 0x80038660u;
            return;
    }

label_80106D88:
    ctx->pc = 0x80106D88u;
    ctx->downcount -= 7;
    // 80106D88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106D8C:
    ctx->pc = 0x80106D8Cu;
    // 80106D8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106D90:
    ctx->pc = 0x80106D90u;
    // 80106D90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106D94:
    ctx->pc = 0x80106D94u;
    // 80106D94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106D98:
    ctx->pc = 0x80106D98u;
    // 80106D98: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106D9C:
    ctx->pc = 0x80106D9Cu;
    // 80106D9C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106DA0:
    ctx->pc = 0x80106DA0u;
    // 80106DA0: bl      0x800386A0
    {
            ctx->lr = 0x80106DA4u;
            ctx->pc = 0x800386A0u;
            return;
    }

label_80106DA4:
    ctx->pc = 0x80106DA4u;
    ctx->downcount -= 7;
    // 80106DA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106DA8:
    ctx->pc = 0x80106DA8u;
    // 80106DA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106DAC:
    ctx->pc = 0x80106DACu;
    // 80106DAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80106DB0:
    ctx->pc = 0x80106DB0u;
    // 80106DB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80106DB4:
    ctx->pc = 0x80106DB4u;
    // 80106DB4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80106DB8:
    ctx->pc = 0x80106DB8u;
    // 80106DB8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80106DBC:
    ctx->pc = 0x80106DBCu;
    // 80106DBC: bl      0x80038700
    {
            ctx->lr = 0x80106DC0u;
            ctx->pc = 0x80038700u;
            return;
    }

label_80106DC0:
    ctx->pc = 0x80106DC0u;
    ctx->downcount -= 5;
    // 80106DC0: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106DC4:
    ctx->pc = 0x80106DC4u;
    // 80106DC4: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80106DC8:
    ctx->pc = 0x80106DC8u;
    // 80106DC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106DCC:
    ctx->pc = 0x80106DCCu;
    // 80106DCC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106DD0:
    ctx->pc = 0x80106DD0u;
    // 80106DD0: bl      0x80038760
    {
            ctx->lr = 0x80106DD4u;
            ctx->pc = 0x80038760u;
            return;
    }

label_80106DD4:
    ctx->pc = 0x80106DD4u;
    ctx->downcount -= 3;
    // 80106DD4: addi    r3, r28, 480
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(480);

label_80106DD8:
    ctx->pc = 0x80106DD8u;
    // 80106DD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106DDC:
    ctx->pc = 0x80106DDCu;
    // 80106DDC: bl      0x80037780
    {
            ctx->lr = 0x80106DE0u;
            ctx->pc = 0x80037780u;
            return;
    }

label_80106DE0:
    ctx->pc = 0x80106DE0u;
    ctx->downcount -= 7;
    // 80106DE0: lfs     f1, 448(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106DE0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106DE4:
    ctx->pc = 0x80106DE4u;
    // 80106DE4: lfs     f2, 452(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106DE4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106DE8:
    ctx->pc = 0x80106DE8u;
    // 80106DE8: lfs     f3, 456(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106DE8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106DEC:
    ctx->pc = 0x80106DECu;
    // 80106DEC: lfs     f4, 460(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106DECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106DF0:
    ctx->pc = 0x80106DF0u;
    // 80106DF0: lfs     f5, 464(r28)
    if (!ppc_fp_available_inline(ctx, 0x80106DF0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106DF4:
    ctx->pc = 0x80106DF4u;
    // 80106DF4: lwz     r3, 468(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80106DF8:
    ctx->pc = 0x80106DF8u;
    // 80106DF8: bl      0x80106E80
    {
            ctx->lr = 0x80106DFCu;
            goto label_80106E80;
    }

label_80106DFC:
    ctx->pc = 0x80106DFCu;
    ctx->downcount -= 2;
    // 80106DFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80106E00:
    ctx->pc = 0x80106E00u;
    // 80106E00: bl      0x80039140
    {
            ctx->lr = 0x80106E04u;
            ctx->pc = 0x80039140u;
            return;
    }

label_80106E04:
    ctx->pc = 0x80106E04u;
    ctx->downcount -= 1;
    // 80106E04: bl      0x800FF58C
    {
            ctx->lr = 0x80106E08u;
            ctx->pc = 0x800FF58Cu;
            return;
    }

label_80106E08:
    ctx->pc = 0x80106E08u;
    ctx->downcount -= 3;
    // 80106E08: lwz     r0, 7944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106E0C:
    ctx->pc = 0x80106E0Cu;
    // 80106E0C: cmpwi   r0, 0
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

label_80106E10:
    ctx->pc = 0x80106E10u;
    // 80106E10: bc    4, 2, 0x80106E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80106E1C;
        }
    }

label_80106E14:
    ctx->pc = 0x80106E14u;
    ctx->downcount -= 1;
    // 80106E14: bl      0x800350E0
    {
            ctx->lr = 0x80106E18u;
            ctx->pc = 0x800350E0u;
            return;
    }

label_80106E18:
    ctx->pc = 0x80106E18u;
    ctx->downcount -= 1;
    // 80106E18: b       0x80106E2C
    {
            goto label_80106E2C;
    }

label_80106E1C:
    ctx->pc = 0x80106E1Cu;
    ctx->downcount -= 1;
    // 80106E1C: bl      0x800FF58C
    {
            ctx->lr = 0x80106E20u;
            ctx->pc = 0x800FF58Cu;
            return;
    }

label_80106E20:
    ctx->pc = 0x80106E20u;
    ctx->downcount -= 4;
    // 80106E20: lwz     r12, 7944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7944);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80106E24:
    ctx->pc = 0x80106E24u;
    // 80106E24: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80106E28:
    ctx->pc = 0x80106E28u;
    // 80106E28: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80106E2Cu;
            ctx->pc = target;
            return;
        }
    }

label_80106E2C:
    ctx->pc = 0x80106E2Cu;
    ctx->downcount -= 8;
    // 80106E2C: mullw   r0, r29, r29
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[0] = (u32)product;
    }

label_80106E30:
    ctx->pc = 0x80106E30u;
    // 80106E30: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80106E34:
    ctx->pc = 0x80106E34u;
    // 80106E34: rlwinm r4, r0, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80106E38:
    ctx->pc = 0x80106E38u;
    // 80106E38: bl      0x800460B0
    {
            ctx->lr = 0x80106E3Cu;
            ctx->pc = 0x800460B0u;
            return;
    }

label_80106E3C:
    ctx->pc = 0x80106E3Cu;
    ctx->downcount -= 3;
    // 80106E3C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80106E40:
    ctx->pc = 0x80106E40u;
    // 80106E40: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80106E44:
    ctx->pc = 0x80106E44u;
    // 80106E44: bl      0x800364F0
    {
            ctx->lr = 0x80106E48u;
            ctx->pc = 0x800364F0u;
            return;
    }

label_80106E48:
    ctx->pc = 0x80106E48u;
    ctx->downcount -= 1;
    // 80106E48: bl      0x800351B0
    {
            ctx->lr = 0x80106E4Cu;
            ctx->pc = 0x800351B0u;
            return;
    }

label_80106E4C:
    ctx->pc = 0x80106E4Cu;
    ctx->downcount -= 7;
    // 80106E4C: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106E50:
    ctx->pc = 0x80106E50u;
    // 80106E50: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106E54:
    ctx->pc = 0x80106E54u;
    // 80106E54: lfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106E58:
    ctx->pc = 0x80106E58u;
    // 80106E58: lfs     f4, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80106E5C:
    ctx->pc = 0x80106E5Cu;
    // 80106E5C: lfs     f5, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_80106E60:
    ctx->pc = 0x80106E60u;
    // 80106E60: lfs     f6, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80106E64:
    ctx->pc = 0x80106E64u;
    // 80106E64: bl      0x80039DB0
    {
            ctx->lr = 0x80106E68u;
            ctx->pc = 0x80039DB0u;
            return;
    }

label_80106E68:
    ctx->pc = 0x80106E68u;
    ctx->downcount -= 2;
    // 80106E68: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80106E6C:
    ctx->pc = 0x80106E6Cu;
    // 80106E6C: bl      0x8000789C
    {
            ctx->lr = 0x80106E70u;
            ctx->pc = 0x8000789Cu;
            return;
    }

label_80106E70:
    ctx->pc = 0x80106E70u;
    ctx->downcount -= 5;
    // 80106E70: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80106E74:
    ctx->pc = 0x80106E74u;
    // 80106E74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80106E78:
    ctx->pc = 0x80106E78u;
    // 80106E78: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80106E7C:
    ctx->pc = 0x80106E7Cu;
    // 80106E7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80106E80:
    ctx->pc = 0x80106E80u;
    ctx->downcount -= 23;
    // 80106E80: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80106E84:
    ctx->pc = 0x80106E84u;
    // 80106E84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80106E88:
    ctx->pc = 0x80106E88u;
    // 80106E88: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80106E8C:
    ctx->pc = 0x80106E8Cu;
    // 80106E8C: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80106E90:
    ctx->pc = 0x80106E90u;
    // 80106E90: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106E90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80106E90u);
        if (ctx->exception) return;
    }

label_80106E94:
    ctx->pc = 0x80106E94u;
    // 80106E94: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_80106E98:
    ctx->pc = 0x80106E98u;
    // 80106E98: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80106E98u);
        if (ctx->exception) return;
    }

label_80106E9C:
    ctx->pc = 0x80106E9Cu;
    // 80106E9C: stfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_80106EA0:
    ctx->pc = 0x80106EA0u;
    // 80106EA0: psq_st   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106EA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80106EA0u);
        if (ctx->exception) return;
    }

label_80106EA4:
    ctx->pc = 0x80106EA4u;
    // 80106EA4: stfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106EA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_80106EA8:
    ctx->pc = 0x80106EA8u;
    // 80106EA8: psq_st   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106EA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80106EA8u);
        if (ctx->exception) return;
    }

label_80106EAC:
    ctx->pc = 0x80106EACu;
    // 80106EAC: stfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80106EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_80106EB0:
    ctx->pc = 0x80106EB0u;
    // 80106EB0: psq_st   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80106EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80106EB0u);
        if (ctx->exception) return;
    }

label_80106EB4:
    ctx->pc = 0x80106EB4u;
    // 80106EB4: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80106EB4u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80106EB8:
    ctx->pc = 0x80106EB8u;
    // 80106EB8: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80106EB8u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80106EBC:
    ctx->pc = 0x80106EBCu;
    // 80106EBC: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80106EC0:
    ctx->pc = 0x80106EC0u;
    // 80106EC0: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80106EC0u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80106EC4:
    ctx->pc = 0x80106EC4u;
    // 80106EC4: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80106EC4u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80106EC8:
    ctx->pc = 0x80106EC8u;
    // 80106EC8: stw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80106ECC:
    ctx->pc = 0x80106ECCu;
    // 80106ECC: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80106ECCu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80106ED0:
    ctx->pc = 0x80106ED0u;
    // 80106ED0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80106ED4:
    ctx->pc = 0x80106ED4u;
    // 80106ED4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80106ED8:
    ctx->pc = 0x80106ED8u;
    // 80106ED8: bl      0x8003E730
    {
            ctx->lr = 0x80106EDCu;
            ctx->pc = 0x8003E730u;
            return;
    }

label_80106EDC:
    ctx->pc = 0x80106EDCu;
    ctx->downcount -= 6;
    // 80106EDC: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x80106EDCu)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_80106EE0:
    ctx->pc = 0x80106EE0u;
    // 80106EE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80106EE4:
    ctx->pc = 0x80106EE4u;
    // 80106EE4: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80106EE4u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80106EE8:
    ctx->pc = 0x80106EE8u;
    // 80106EE8: lfs     f3, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106EE8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106EEC:
    ctx->pc = 0x80106EECu;
    // 80106EEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80106EF0:
    ctx->pc = 0x80106EF0u;
    // 80106EF0: bl      0x8003EF40
    {
            ctx->lr = 0x80106EF4u;
            ctx->pc = 0x8003EF40u;
            return;
    }

label_80106EF4:
    ctx->pc = 0x80106EF4u;
    ctx->downcount -= 5;
    // 80106EF4: lfs     f0, -29544(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106EF4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80106EF8:
    ctx->pc = 0x80106EF8u;
    // 80106EF8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80106EFC:
    ctx->pc = 0x80106EFCu;
    // 80106EFC: li      r4, 122
    ctx->gpr[4] = (u32)(s32)(122);

label_80106F00:
    ctx->pc = 0x80106F00u;
    // 80106F00: fmuls   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80106F00u)) return;
    ppc_fmuls(ctx, 1, 0, 31);

label_80106F04:
    ctx->pc = 0x80106F04u;
    // 80106F04: bl      0x8003EC20
    {
            ctx->lr = 0x80106F08u;
            ctx->pc = 0x8003EC20u;
            return;
    }

label_80106F08:
    ctx->pc = 0x80106F08u;
    ctx->downcount -= 4;
    // 80106F08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80106F0C:
    ctx->pc = 0x80106F0Cu;
    // 80106F0C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80106F10:
    ctx->pc = 0x80106F10u;
    // 80106F10: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80106F14:
    ctx->pc = 0x80106F14u;
    // 80106F14: bl      0x8003E7A0
    {
            ctx->lr = 0x80106F18u;
            ctx->pc = 0x8003E7A0u;
            return;
    }

label_80106F18:
    ctx->pc = 0x80106F18u;
    ctx->downcount -= 6;
    // 80106F18: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80106F1C:
    ctx->pc = 0x80106F1Cu;
    // 80106F1C: lfs     f1, -29668(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F1Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80106F20:
    ctx->pc = 0x80106F20u;
    // 80106F20: lfs     f2, -29540(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F20u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29540);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80106F24:
    ctx->pc = 0x80106F24u;
    // 80106F24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80106F28:
    ctx->pc = 0x80106F28u;
    // 80106F28: lfs     f3, -29708(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F28u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106F2C:
    ctx->pc = 0x80106F2Cu;
    // 80106F2C: bl      0x8003EF40
    {
            ctx->lr = 0x80106F30u;
            ctx->pc = 0x8003EF40u;
            return;
    }

label_80106F30:
    ctx->pc = 0x80106F30u;
    ctx->downcount -= 6;
    // 80106F30: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x80106F30u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_80106F34:
    ctx->pc = 0x80106F34u;
    // 80106F34: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80106F38:
    ctx->pc = 0x80106F38u;
    // 80106F38: fmr    f2, f28
    if (!ppc_fp_available_inline(ctx, 0x80106F38u)) return;
    ctx->fpr[2] = ctx->fpr[28];

label_80106F3C:
    ctx->pc = 0x80106F3Cu;
    // 80106F3C: lfs     f3, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F3Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80106F40:
    ctx->pc = 0x80106F40u;
    // 80106F40: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80106F44:
    ctx->pc = 0x80106F44u;
    // 80106F44: bl      0x8003EEC0
    {
            ctx->lr = 0x80106F48u;
            ctx->pc = 0x8003EEC0u;
            return;
    }

label_80106F48:
    ctx->pc = 0x80106F48u;
    ctx->downcount -= 3;
    // 80106F48: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80106F4C:
    ctx->pc = 0x80106F4Cu;
    // 80106F4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106F50:
    ctx->pc = 0x80106F50u;
    // 80106F50: bl      0x80039AE0
    {
            ctx->lr = 0x80106F54u;
            ctx->pc = 0x80039AE0u;
            return;
    }

label_80106F54:
    ctx->pc = 0x80106F54u;
    ctx->downcount -= 2;
    // 80106F54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106F58:
    ctx->pc = 0x80106F58u;
    // 80106F58: bl      0x80039C00
    {
            ctx->lr = 0x80106F5Cu;
            ctx->pc = 0x80039C00u;
            return;
    }

label_80106F5C:
    ctx->pc = 0x80106F5Cu;
    ctx->downcount -= 2;
    // 80106F5C: cmpwi   r30, 1
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

label_80106F60:
    ctx->pc = 0x80106F60u;
    // 80106F60: bc    12, 2, 0x80106FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80106FA0;
        }
    }

label_80106F64:
    ctx->pc = 0x80106F64u;
    ctx->downcount -= 1;
    // 80106F64: bc    4, 0, 0x80106F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80106F74;
        }
    }

label_80106F68:
    ctx->pc = 0x80106F68u;
    ctx->downcount -= 2;
    // 80106F68: cmpwi   r30, 0
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

label_80106F6C:
    ctx->pc = 0x80106F6Cu;
    // 80106F6C: bc    4, 0, 0x80106F80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80106F80;
        }
    }

label_80106F70:
    ctx->pc = 0x80106F70u;
    ctx->downcount -= 1;
    // 80106F70: b       0x80106FAC
    {
            goto label_80106FAC;
    }

label_80106F74:
    ctx->pc = 0x80106F74u;
    ctx->downcount -= 2;
    // 80106F74: cmpwi   r30, 3
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

label_80106F78:
    ctx->pc = 0x80106F78u;
    // 80106F78: bc    4, 0, 0x80106FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80106FAC;
        }
    }

label_80106F7C:
    ctx->pc = 0x80106F7Cu;
    ctx->downcount -= 1;
    // 80106F7C: b       0x80106F90
    {
            goto label_80106F90;
    }

label_80106F80:
    ctx->pc = 0x80106F80u;
    ctx->downcount -= 4;
    // 80106F80: lfs     f31, -29536(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F80u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80106F84:
    ctx->pc = 0x80106F84u;
    // 80106F84: li      r31, 256
    ctx->gpr[31] = (u32)(s32)(256);

label_80106F88:
    ctx->pc = 0x80106F88u;
    // 80106F88: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80106F8C:
    ctx->pc = 0x80106F8Cu;
    // 80106F8C: b       0x80106FAC
    {
            goto label_80106FAC;
    }

label_80106F90:
    ctx->pc = 0x80106F90u;
    ctx->downcount -= 4;
    // 80106F90: lfs     f31, -29532(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106F90u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80106F94:
    ctx->pc = 0x80106F94u;
    // 80106F94: li      r31, 256
    ctx->gpr[31] = (u32)(s32)(256);

label_80106F98:
    ctx->pc = 0x80106F98u;
    // 80106F98: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80106F9C:
    ctx->pc = 0x80106F9Cu;
    // 80106F9C: b       0x80106FAC
    {
            goto label_80106FAC;
    }

label_80106FA0:
    ctx->pc = 0x80106FA0u;
    ctx->downcount -= 3;
    // 80106FA0: lfs     f31, -29704(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106FA0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80106FA4:
    ctx->pc = 0x80106FA4u;
    // 80106FA4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80106FA8:
    ctx->pc = 0x80106FA8u;
    // 80106FA8: li      r30, 256
    ctx->gpr[30] = (u32)(s32)(256);

label_80106FAC:
    ctx->pc = 0x80106FACu;
    ctx->downcount -= 4;
    // 80106FAC: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80106FB0:
    ctx->pc = 0x80106FB0u;
    // 80106FB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80106FB4:
    ctx->pc = 0x80106FB4u;
    // 80106FB4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80106FB8:
    ctx->pc = 0x80106FB8u;
    // 80106FB8: bl      0x800357D0
    {
            ctx->lr = 0x80106FBCu;
            ctx->pc = 0x800357D0u;
            return;
    }

label_80106FBC:
    ctx->pc = 0x80106FBCu;
    ctx->downcount -= 48;
    // 80106FBC: lfd     f0, -29648(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106FBCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29648);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80106FC0:
    ctx->pc = 0x80106FC0u;
    // 80106FC0: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80106FC4:
    ctx->pc = 0x80106FC4u;
    // 80106FC4: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80106FC8:
    ctx->pc = 0x80106FC8u;
    // 80106FC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80106FCC:
    ctx->pc = 0x80106FCCu;
    // 80106FCC: fadd   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80106FCCu)) return;
    ppc_fadd(ctx, 0, 0, 31);

label_80106FD0:
    ctx->pc = 0x80106FD0u;
    // 80106FD0: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_80106FD4:
    ctx->pc = 0x80106FD4u;
    // 80106FD4: frsp    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80106FD4u)) return;
    ppc_frsp(ctx, 1, 0);

label_80106FD8:
    ctx->pc = 0x80106FD8u;
    // 80106FD8: stfs     f1, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80106FD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80106FDC:
    ctx->pc = 0x80106FDCu;
    // 80106FDC: lfs     f0, -29536(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106FDCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80106FE0:
    ctx->pc = 0x80106FE0u;
    // 80106FE0: stfs     f0, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80106FE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80106FE4:
    ctx->pc = 0x80106FE4u;
    // 80106FE4: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80106FE8:
    ctx->pc = 0x80106FE8u;
    // 80106FE8: sth     r31, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80106FEC:
    ctx->pc = 0x80106FECu;
    // 80106FEC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80106FF0:
    ctx->pc = 0x80106FF0u;
    // 80106FF0: stfs     f1, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80106FF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80106FF4:
    ctx->pc = 0x80106FF4u;
    // 80106FF4: lfs     f0, -29528(r2)
    if (!ppc_fp_available_inline(ctx, 0x80106FF4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80106FF8:
    ctx->pc = 0x80106FF8u;
    // 80106FF8: stfs     f0, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80106FF8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80106FFC:
    ctx->pc = 0x80106FFCu;
    // 80106FFC: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80107000:
    ctx->pc = 0x80107000u;
    // 80107000: sth     r31, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80107004:
    ctx->pc = 0x80107004u;
    // 80107004: sth     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80107008:
    ctx->pc = 0x80107008u;
    // 80107008: stfs     f31, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80107008u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_8010700C:
    ctx->pc = 0x8010700Cu;
    // 8010700C: lfs     f0, -29528(r2)
    if (!ppc_fp_available_inline(ctx, 0x8010700Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80107010:
    ctx->pc = 0x80107010u;
    // 80107010: stfs     f0, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80107010u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80107014:
    ctx->pc = 0x80107014u;
    // 80107014: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80107018:
    ctx->pc = 0x80107018u;
    // 80107018: sth     r30, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8010701C:
    ctx->pc = 0x8010701Cu;
    // 8010701C: sth     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80107020:
    ctx->pc = 0x80107020u;
    // 80107020: stfs     f31, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80107020u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80107024:
    ctx->pc = 0x80107024u;
    // 80107024: lfs     f0, -29536(r2)
    if (!ppc_fp_available_inline(ctx, 0x80107024u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-29536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80107028:
    ctx->pc = 0x80107028u;
    // 80107028: stfs     f0, -32768(r5)
    if (!ppc_fp_available_inline(ctx, 0x80107028u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8010702C:
    ctx->pc = 0x8010702Cu;
    // 8010702C: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80107030:
    ctx->pc = 0x80107030u;
    // 80107030: sth     r30, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_80107034:
    ctx->pc = 0x80107034u;
    // 80107034: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80107038:
    ctx->pc = 0x80107038u;
    // 80107038: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80107038u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80107038u);
        if (ctx->exception) return;
    }

label_8010703C:
    ctx->pc = 0x8010703Cu;
    // 8010703C: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010703Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80107040:
    ctx->pc = 0x80107040u;
    // 80107040: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80107040u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80107040u);
        if (ctx->exception) return;
    }

label_80107044:
    ctx->pc = 0x80107044u;
    // 80107044: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80107044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80107048:
    ctx->pc = 0x80107048u;
    // 80107048: psq_l   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80107048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80107048u);
        if (ctx->exception) return;
    }

label_8010704C:
    ctx->pc = 0x8010704Cu;
    // 8010704C: lfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010704Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80107050:
    ctx->pc = 0x80107050u;
    // 80107050: psq_l   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80107050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80107050u);
        if (ctx->exception) return;
    }

label_80107054:
    ctx->pc = 0x80107054u;
    // 80107054: lfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80107054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80107058:
    ctx->pc = 0x80107058u;
    // 80107058: psq_l   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80107058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80107058u);
        if (ctx->exception) return;
    }

label_8010705C:
    ctx->pc = 0x8010705Cu;
    // 8010705C: lfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8010705Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80107060:
    ctx->pc = 0x80107060u;
    // 80107060: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80107064:
    ctx->pc = 0x80107064u;
    // 80107064: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80107068:
    ctx->pc = 0x80107068u;
    // 80107068: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8010706C:
    ctx->pc = 0x8010706Cu;
    // 8010706C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80107070:
    ctx->pc = 0x80107070u;
    // 80107070: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_80107074:
    ctx->pc = 0x80107074u;
    // 80107074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80107078:
    ctx->pc = 0x80107078u;
    ctx->downcount -= 2;
    // 80107078: cmpwi   r3, 224
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(224);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8010707C:
    ctx->pc = 0x8010707Cu;
    // 8010707C: bc    12, 2, 0x801070C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070C8;
        }
    }

label_80107080:
    ctx->pc = 0x80107080u;
    ctx->downcount -= 1;
    // 80107080: bc    4, 0, 0x801070A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801070A8;
        }
    }

label_80107084:
    ctx->pc = 0x80107084u;
    ctx->downcount -= 2;
    // 80107084: cmpwi   r3, 96
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80107088:
    ctx->pc = 0x80107088u;
    // 80107088: bc    12, 2, 0x801070C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070C0;
        }
    }

label_8010708C:
    ctx->pc = 0x8010708Cu;
    ctx->downcount -= 1;
    // 8010708C: bc    4, 0, 0x8010709C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8010709C;
        }
    }

label_80107090:
    ctx->pc = 0x80107090u;
    ctx->downcount -= 2;
    // 80107090: cmpwi   r3, 64
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80107094:
    ctx->pc = 0x80107094u;
    // 80107094: bc    12, 2, 0x801070C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070C0;
        }
    }

label_80107098:
    ctx->pc = 0x80107098u;
    ctx->downcount -= 1;
    // 80107098: b       0x801070D8
    {
            goto label_801070D8;
    }

label_8010709C:
    ctx->pc = 0x8010709Cu;
    ctx->downcount -= 2;
    // 8010709C: cmpwi   r3, 128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801070A0:
    ctx->pc = 0x801070A0u;
    // 801070A0: bc    12, 2, 0x801070C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070C8;
        }
    }

label_801070A4:
    ctx->pc = 0x801070A4u;
    ctx->downcount -= 1;
    // 801070A4: b       0x801070D8
    {
            goto label_801070D8;
    }

label_801070A8:
    ctx->pc = 0x801070A8u;
    ctx->downcount -= 2;
    // 801070A8: cmpwi   r3, 480
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(480);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801070AC:
    ctx->pc = 0x801070ACu;
    // 801070AC: bc    12, 2, 0x801070D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070D0;
        }
    }

label_801070B0:
    ctx->pc = 0x801070B0u;
    ctx->downcount -= 1;
    // 801070B0: bc    4, 0, 0x801070D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_801070D8;
        }
    }

label_801070B4:
    ctx->pc = 0x801070B4u;
    ctx->downcount -= 2;
    // 801070B4: cmpwi   r3, 256
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_801070B8:
    ctx->pc = 0x801070B8u;
    // 801070B8: bc    12, 2, 0x801070D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070D0;
        }
    }

label_801070BC:
    ctx->pc = 0x801070BCu;
    ctx->downcount -= 1;
    // 801070BC: b       0x801070D8
    {
            goto label_801070D8;
    }

label_801070C0:
    ctx->pc = 0x801070C0u;
    ctx->downcount -= 2;
    // 801070C0: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_801070C4:
    ctx->pc = 0x801070C4u;
    // 801070C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801070C8:
    ctx->pc = 0x801070C8u;
    ctx->downcount -= 2;
    // 801070C8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_801070CC:
    ctx->pc = 0x801070CCu;
    // 801070CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801070D0:
    ctx->pc = 0x801070D0u;
    ctx->downcount -= 2;
    // 801070D0: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_801070D4:
    ctx->pc = 0x801070D4u;
    // 801070D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801070D8:
    ctx->pc = 0x801070D8u;
    ctx->downcount -= 2;
    // 801070D8: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_801070DC:
    ctx->pc = 0x801070DCu;
    // 801070DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801070E0:
    ctx->pc = 0x801070E0u;
    ctx->downcount -= 3;
    // 801070E0: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801070E4:
    ctx->pc = 0x801070E4u;
    // 801070E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_801070E8:
    ctx->pc = 0x801070E8u;
    // 801070E8: bc    12, 2, 0x801070F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070F0;
        }
    }

label_801070EC:
    ctx->pc = 0x801070ECu;
    ctx->downcount -= 1;
    // 801070EC: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_801070F0:
    ctx->pc = 0x801070F0u;
    ctx->downcount -= 2;
    // 801070F0: rlwinm. r0, r3, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_801070F4:
    ctx->pc = 0x801070F4u;
    // 801070F4: bc    12, 2, 0x801070FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801070FC;
        }
    }

label_801070F8:
    ctx->pc = 0x801070F8u;
    ctx->downcount -= 1;
    // 801070F8: addi    r4, r4, 8192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8192);

label_801070FC:
    ctx->pc = 0x801070FCu;
    ctx->downcount -= 2;
    // 801070FC: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80107100:
    ctx->pc = 0x80107100u;
    // 80107100: bc    12, 2, 0x8010710C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8010710C;
        }
    }

label_80107104:
    ctx->pc = 0x80107104u;
    ctx->downcount -= 2;
    // 80107104: addis   r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

label_80107108:
    ctx->pc = 0x80107108u;
    // 80107108: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_8010710C:
    ctx->pc = 0x8010710Cu;
    ctx->downcount -= 2;
    // 8010710C: rlwinm. r0, r3, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80107110:
    ctx->pc = 0x80107110u;
    // 80107110: bc    12, 2, 0x80107118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80107118;
        }
    }

label_80107114:
    ctx->pc = 0x80107114u;
    ctx->downcount -= 1;
    // 80107114: addis   r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(2) << 16);

label_80107118:
    ctx->pc = 0x80107118u;
    ctx->downcount -= 2;
    // 80107118: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8010711C:
    ctx->pc = 0x8010711Cu;
    // 8010711C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80107120:
    ctx->pc = 0x80107120u;
    ctx->downcount -= 6;
    // 80107120: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80107124:
    ctx->pc = 0x80107124u;
    // 80107124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80107128:
    ctx->pc = 0x80107128u;
    // 80107128: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010712C:
    ctx->pc = 0x8010712Cu;
    // 8010712C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80107130:
    ctx->pc = 0x80107130u;
    // 80107130: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80107134:
    ctx->pc = 0x80107134u;
    // 80107134: bl      0x800FF58C
    {
            ctx->lr = 0x80107138u;
            ctx->pc = 0x800FF58Cu;
            return;
    }

label_80107138:
    ctx->pc = 0x80107138u;
    ctx->downcount -= 7;
    // 80107138: stw     r31, 7940(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7940);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8010713C:
    ctx->pc = 0x8010713Cu;
    // 8010713C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80107140:
    ctx->pc = 0x80107140u;
    // 80107140: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80107144:
    ctx->pc = 0x80107144u;
    // 80107144: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80107148:
    ctx->pc = 0x80107148u;
    // 80107148: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8010714C:
    ctx->pc = 0x8010714Cu;
    // 8010714C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80107150:
    ctx->pc = 0x80107150u;
    ctx->downcount -= 4;
    // 80107150: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80107154:
    ctx->pc = 0x80107154u;
    // 80107154: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80107158:
    ctx->pc = 0x80107158u;
    // 80107158: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8010715C:
    ctx->pc = 0x8010715Cu;
    // 8010715C: bl      0x800FF52C
    {
            ctx->lr = 0x80107160u;
            ctx->pc = 0x800FF52Cu;
            return;
    }

label_80107160:
    ctx->pc = 0x80107160u;
    ctx->downcount -= 2;
    // 80107160: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80107164:
    ctx->pc = 0x80107164u;
    // 80107164: bc    12, 2, 0x80107174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80107174;
        }
    }

label_80107168:
    ctx->pc = 0x80107168u;
    ctx->downcount -= 3;
    // 80107168: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8010716C:
    ctx->pc = 0x8010716Cu;
    // 8010716C: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80107170:
    ctx->pc = 0x80107170u;
    // 80107170: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80107174:
    ctx->pc = 0x80107174u;
    ctx->downcount -= 5;
    // 80107174: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80107178:
    ctx->pc = 0x80107178u;
    // 80107178: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8010717C:
    ctx->pc = 0x8010717Cu;
    // 8010717C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80107180:
    ctx->pc = 0x80107180u;
    // 80107180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_80107184:
    ctx->pc = 0x80107184u;
    ctx->downcount -= 4;
    // 80107184: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80107188:
    ctx->pc = 0x80107188u;
    // 80107188: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8010718C:
    ctx->pc = 0x8010718Cu;
    // 8010718C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80107190:
    ctx->pc = 0x80107190u;
    // 80107190: bl      0x800FF52C
    {
            ctx->lr = 0x80107194u;
            ctx->pc = 0x800FF52Cu;
            return;
    }

label_80107194:
    ctx->pc = 0x80107194u;
    ctx->downcount -= 3;
    // 80107194: lwz     r12, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80107198:
    ctx->pc = 0x80107198u;
    // 80107198: cmpwi   r12, 0
    {
        s32 val_a = (s32)(ctx->gpr[12]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8010719C:
    ctx->pc = 0x8010719Cu;
    // 8010719C: bc    12, 2, 0x801071AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_801071AC;
        }
    }

label_801071A0:
    ctx->pc = 0x801071A0u;
    ctx->downcount -= 4;
    // 801071A0: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_801071A4:
    ctx->pc = 0x801071A4u;
    // 801071A4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_801071A8:
    ctx->pc = 0x801071A8u;
    // 801071A8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x801071ACu;
            ctx->pc = target;
            return;
        }
    }

label_801071AC:
    ctx->pc = 0x801071ACu;
    ctx->downcount -= 5;
    // 801071AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_801071B0:
    ctx->pc = 0x801071B0u;
    // 801071B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_801071B4:
    ctx->pc = 0x801071B4u;
    // 801071B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_801071B8:
    ctx->pc = 0x801071B8u;
    // 801071B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_801031C0;
        }
    }

label_801071BC:
    ctx->pc = 0x801071BCu;
    ctx->downcount -= 1;
    // 801071BC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    ctx->pc = 0x801071C0u;
    return;
return_dispatch_801031C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x801031D0u: goto label_801031D0;
    case 0x801031E4u: goto label_801031E4;
    case 0x801031F8u: goto label_801031F8;
    case 0x80103208u: goto label_80103208;
    case 0x8010321Cu: goto label_8010321C;
    case 0x80103238u: goto label_80103238;
    case 0x80103244u: goto label_80103244;
    case 0x8010326Cu: goto label_8010326C;
    case 0x80103288u: goto label_80103288;
    case 0x801032C8u: goto label_801032C8;
    case 0x801032D8u: goto label_801032D8;
    case 0x801032E8u: goto label_801032E8;
    case 0x801032F8u: goto label_801032F8;
    case 0x80103308u: goto label_80103308;
    case 0x80103318u: goto label_80103318;
    case 0x80103334u: goto label_80103334;
    case 0x8010334Cu: goto label_8010334C;
    case 0x8010338Cu: goto label_8010338C;
    case 0x8010339Cu: goto label_8010339C;
    case 0x801033C4u: goto label_801033C4;
    case 0x801033D4u: goto label_801033D4;
    case 0x801033E4u: goto label_801033E4;
    case 0x801033F4u: goto label_801033F4;
    case 0x80103404u: goto label_80103404;
    case 0x80103414u: goto label_80103414;
    case 0x8010346Cu: goto label_8010346C;
    case 0x80103484u: goto label_80103484;
    case 0x80103494u: goto label_80103494;
    case 0x801034A0u: goto label_801034A0;
    case 0x801034ACu: goto label_801034AC;
    case 0x801034B4u: goto label_801034B4;
    case 0x801034D0u: goto label_801034D0;
    case 0x801034E8u: goto label_801034E8;
    case 0x80103500u: goto label_80103500;
    case 0x80103518u: goto label_80103518;
    case 0x80103528u: goto label_80103528;
    case 0x80103538u: goto label_80103538;
    case 0x80103548u: goto label_80103548;
    case 0x80103558u: goto label_80103558;
    case 0x80103580u: goto label_80103580;
    case 0x80103590u: goto label_80103590;
    case 0x801035A0u: goto label_801035A0;
    case 0x801035B0u: goto label_801035B0;
    case 0x801035C0u: goto label_801035C0;
    case 0x801035D0u: goto label_801035D0;
    case 0x80103620u: goto label_80103620;
    case 0x80103628u: goto label_80103628;
    case 0x80103640u: goto label_80103640;
    case 0x80103650u: goto label_80103650;
    case 0x80103664u: goto label_80103664;
    case 0x80103678u: goto label_80103678;
    case 0x8010368Cu: goto label_8010368C;
    case 0x8010369Cu: goto label_8010369C;
    case 0x801036D4u: goto label_801036D4;
    case 0x801036F4u: goto label_801036F4;
    case 0x80103700u: goto label_80103700;
    case 0x8010377Cu: goto label_8010377C;
    case 0x80103800u: goto label_80103800;
    case 0x80103940u: goto label_80103940;
    case 0x80103A4Cu: goto label_80103A4C;
    case 0x80103AC0u: goto label_80103AC0;
    case 0x80103B84u: goto label_80103B84;
    case 0x80103BF8u: goto label_80103BF8;
    case 0x80103C64u: goto label_80103C64;
    case 0x80103D48u: goto label_80103D48;
    case 0x80103D6Cu: goto label_80103D6C;
    case 0x80103D94u: goto label_80103D94;
    case 0x80103DBCu: goto label_80103DBC;
    case 0x80103DD8u: goto label_80103DD8;
    case 0x80103E28u: goto label_80103E28;
    case 0x80103E38u: goto label_80103E38;
    case 0x80103E5Cu: goto label_80103E5C;
    case 0x80103E90u: goto label_80103E90;
    case 0x80103E94u: goto label_80103E94;
    case 0x80103EA8u: goto label_80103EA8;
    case 0x80103EC8u: goto label_80103EC8;
    case 0x80103ED8u: goto label_80103ED8;
    case 0x80103EE8u: goto label_80103EE8;
    case 0x80103F14u: goto label_80103F14;
    case 0x8010437Cu: goto label_8010437C;
    case 0x80104394u: goto label_80104394;
    case 0x801043A0u: goto label_801043A0;
    case 0x801043C4u: goto label_801043C4;
    case 0x8010440Cu: goto label_8010440C;
    case 0x80104418u: goto label_80104418;
    case 0x80104420u: goto label_80104420;
    case 0x80104444u: goto label_80104444;
    case 0x80104460u: goto label_80104460;
    case 0x80104464u: goto label_80104464;
    case 0x80104478u: goto label_80104478;
    case 0x801044E0u: goto label_801044E0;
    case 0x80104504u: goto label_80104504;
    case 0x8010452Cu: goto label_8010452C;
    case 0x80104534u: goto label_80104534;
    case 0x8010453Cu: goto label_8010453C;
    case 0x8010456Cu: goto label_8010456C;
    case 0x80104578u: goto label_80104578;
    case 0x80104584u: goto label_80104584;
    case 0x8010459Cu: goto label_8010459C;
    case 0x801045B4u: goto label_801045B4;
    case 0x801045CCu: goto label_801045CC;
    case 0x801045D8u: goto label_801045D8;
    case 0x801045E4u: goto label_801045E4;
    case 0x801045ECu: goto label_801045EC;
    case 0x8010460Cu: goto label_8010460C;
    case 0x8010461Cu: goto label_8010461C;
    case 0x8010462Cu: goto label_8010462C;
    case 0x8010464Cu: goto label_8010464C;
    case 0x8010465Cu: goto label_8010465C;
    case 0x8010466Cu: goto label_8010466C;
    case 0x80104684u: goto label_80104684;
    case 0x801046A8u: goto label_801046A8;
    case 0x801046B4u: goto label_801046B4;
    case 0x801046D4u: goto label_801046D4;
    case 0x801046E8u: goto label_801046E8;
    case 0x801046F8u: goto label_801046F8;
    case 0x80104718u: goto label_80104718;
    case 0x8010472Cu: goto label_8010472C;
    case 0x8010473Cu: goto label_8010473C;
    case 0x80104748u: goto label_80104748;
    case 0x80104768u: goto label_80104768;
    case 0x80104778u: goto label_80104778;
    case 0x80104788u: goto label_80104788;
    case 0x80104798u: goto label_80104798;
    case 0x801047CCu: goto label_801047CC;
    case 0x801047D8u: goto label_801047D8;
    case 0x801047E8u: goto label_801047E8;
    case 0x801047F8u: goto label_801047F8;
    case 0x80104808u: goto label_80104808;
    case 0x80104818u: goto label_80104818;
    case 0x80104848u: goto label_80104848;
    case 0x80104874u: goto label_80104874;
    case 0x801048ACu: goto label_801048AC;
    case 0x801048B4u: goto label_801048B4;
    case 0x801048BCu: goto label_801048BC;
    case 0x801048C8u: goto label_801048C8;
    case 0x801048D8u: goto label_801048D8;
    case 0x801048E4u: goto label_801048E4;
    case 0x801048F8u: goto label_801048F8;
    case 0x80104900u: goto label_80104900;
    case 0x80104914u: goto label_80104914;
    case 0x80104928u: goto label_80104928;
    case 0x80104958u: goto label_80104958;
    case 0x80104968u: goto label_80104968;
    case 0x80104974u: goto label_80104974;
    case 0x80104978u: goto label_80104978;
    case 0x80104980u: goto label_80104980;
    case 0x801049B0u: goto label_801049B0;
    case 0x801049D4u: goto label_801049D4;
    case 0x801049E4u: goto label_801049E4;
    case 0x801049F4u: goto label_801049F4;
    case 0x80104A04u: goto label_80104A04;
    case 0x80104A14u: goto label_80104A14;
    case 0x80104F9Cu: goto label_80104F9C;
    case 0x80104FBCu: goto label_80104FBC;
    case 0x80104FD4u: goto label_80104FD4;
    case 0x80104FE8u: goto label_80104FE8;
    case 0x80104FFCu: goto label_80104FFC;
    case 0x80105028u: goto label_80105028;
    case 0x80105040u: goto label_80105040;
    case 0x80105068u: goto label_80105068;
    case 0x80105080u: goto label_80105080;
    case 0x8010509Cu: goto label_8010509C;
    case 0x801050ACu: goto label_801050AC;
    case 0x801050C8u: goto label_801050C8;
    case 0x801050D8u: goto label_801050D8;
    case 0x801050F4u: goto label_801050F4;
    case 0x80105104u: goto label_80105104;
    case 0x80105160u: goto label_80105160;
    case 0x801051C0u: goto label_801051C0;
    case 0x801051ECu: goto label_801051EC;
    case 0x8010524Cu: goto label_8010524C;
    case 0x80105278u: goto label_80105278;
    case 0x801052D8u: goto label_801052D8;
    case 0x80105304u: goto label_80105304;
    case 0x80105364u: goto label_80105364;
    case 0x80105390u: goto label_80105390;
    case 0x801053F0u: goto label_801053F0;
    case 0x8010541Cu: goto label_8010541C;
    case 0x8010547Cu: goto label_8010547C;
    case 0x801054A8u: goto label_801054A8;
    case 0x80105508u: goto label_80105508;
    case 0x80105534u: goto label_80105534;
    case 0x80105594u: goto label_80105594;
    case 0x801056B8u: goto label_801056B8;
    case 0x8010571Cu: goto label_8010571C;
    case 0x80105740u: goto label_80105740;
    case 0x80105774u: goto label_80105774;
    case 0x80105788u: goto label_80105788;
    case 0x8010579Cu: goto label_8010579C;
    case 0x801057ACu: goto label_801057AC;
    case 0x801057C0u: goto label_801057C0;
    case 0x801057E0u: goto label_801057E0;
    case 0x801057F4u: goto label_801057F4;
    case 0x80105808u: goto label_80105808;
    case 0x80105818u: goto label_80105818;
    case 0x8010582Cu: goto label_8010582C;
    case 0x80105850u: goto label_80105850;
    case 0x80105864u: goto label_80105864;
    case 0x80105878u: goto label_80105878;
    case 0x80105888u: goto label_80105888;
    case 0x8010589Cu: goto label_8010589C;
    case 0x801058BCu: goto label_801058BC;
    case 0x801058D0u: goto label_801058D0;
    case 0x801058E4u: goto label_801058E4;
    case 0x801058F4u: goto label_801058F4;
    case 0x80105908u: goto label_80105908;
    case 0x80105930u: goto label_80105930;
    case 0x80105940u: goto label_80105940;
    case 0x80105950u: goto label_80105950;
    case 0x80105960u: goto label_80105960;
    case 0x80105970u: goto label_80105970;
    case 0x80105980u: goto label_80105980;
    case 0x80105990u: goto label_80105990;
    case 0x801059A0u: goto label_801059A0;
    case 0x801059B0u: goto label_801059B0;
    case 0x801059C0u: goto label_801059C0;
    case 0x801059D0u: goto label_801059D0;
    case 0x801059E0u: goto label_801059E0;
    case 0x801059F4u: goto label_801059F4;
    case 0x80105A08u: goto label_80105A08;
    case 0x80105A44u: goto label_80105A44;
    case 0x80105A50u: goto label_80105A50;
    case 0x80105A6Cu: goto label_80105A6C;
    case 0x80105A78u: goto label_80105A78;
    case 0x80105A80u: goto label_80105A80;
    case 0x80105A90u: goto label_80105A90;
    case 0x80105A98u: goto label_80105A98;
    case 0x80105AB0u: goto label_80105AB0;
    case 0x80105AB8u: goto label_80105AB8;
    case 0x80105AC0u: goto label_80105AC0;
    case 0x80105AC4u: goto label_80105AC4;
    case 0x80105AC8u: goto label_80105AC8;
    case 0x80105AD4u: goto label_80105AD4;
    case 0x80105AE0u: goto label_80105AE0;
    case 0x80105AECu: goto label_80105AEC;
    case 0x80105B04u: goto label_80105B04;
    case 0x80105B1Cu: goto label_80105B1C;
    case 0x80105B34u: goto label_80105B34;
    case 0x80105B3Cu: goto label_80105B3C;
    case 0x80105B5Cu: goto label_80105B5C;
    case 0x80105B64u: goto label_80105B64;
    case 0x80105B80u: goto label_80105B80;
    case 0x80105B98u: goto label_80105B98;
    case 0x80105BB0u: goto label_80105BB0;
    case 0x80105BC8u: goto label_80105BC8;
    case 0x80105BE0u: goto label_80105BE0;
    case 0x80105C0Cu: goto label_80105C0C;
    case 0x80105C1Cu: goto label_80105C1C;
    case 0x80105C30u: goto label_80105C30;
    case 0x80105C48u: goto label_80105C48;
    case 0x80105C60u: goto label_80105C60;
    case 0x80105C7Cu: goto label_80105C7C;
    case 0x80105C98u: goto label_80105C98;
    case 0x80105CA8u: goto label_80105CA8;
    case 0x80105CBCu: goto label_80105CBC;
    case 0x80105CD4u: goto label_80105CD4;
    case 0x80105CECu: goto label_80105CEC;
    case 0x80105D08u: goto label_80105D08;
    case 0x80105D24u: goto label_80105D24;
    case 0x80105D34u: goto label_80105D34;
    case 0x80105D48u: goto label_80105D48;
    case 0x80105D60u: goto label_80105D60;
    case 0x80105D78u: goto label_80105D78;
    case 0x80105D94u: goto label_80105D94;
    case 0x80105DB0u: goto label_80105DB0;
    case 0x80105DECu: goto label_80105DEC;
    case 0x80105E24u: goto label_80105E24;
    case 0x80105E5Cu: goto label_80105E5C;
    case 0x80105E6Cu: goto label_80105E6C;
    case 0x80105E80u: goto label_80105E80;
    case 0x80105E98u: goto label_80105E98;
    case 0x80105EB0u: goto label_80105EB0;
    case 0x80105ECCu: goto label_80105ECC;
    case 0x80105EE8u: goto label_80105EE8;
    case 0x80105EF8u: goto label_80105EF8;
    case 0x80105F0Cu: goto label_80105F0C;
    case 0x80105F24u: goto label_80105F24;
    case 0x80105F3Cu: goto label_80105F3C;
    case 0x80105F58u: goto label_80105F58;
    case 0x80105F74u: goto label_80105F74;
    case 0x80105F84u: goto label_80105F84;
    case 0x80105F98u: goto label_80105F98;
    case 0x80105FB0u: goto label_80105FB0;
    case 0x80105FC8u: goto label_80105FC8;
    case 0x80105FE4u: goto label_80105FE4;
    case 0x80106000u: goto label_80106000;
    case 0x80106094u: goto label_80106094;
    case 0x801060D0u: goto label_801060D0;
    case 0x80106604u: goto label_80106604;
    case 0x80106618u: goto label_80106618;
    case 0x80106620u: goto label_80106620;
    case 0x80106624u: goto label_80106624;
    case 0x8010662Cu: goto label_8010662C;
    case 0x80106634u: goto label_80106634;
    case 0x8010663Cu: goto label_8010663C;
    case 0x80106650u: goto label_80106650;
    case 0x80106658u: goto label_80106658;
    case 0x80106668u: goto label_80106668;
    case 0x80106678u: goto label_80106678;
    case 0x8010668Cu: goto label_8010668C;
    case 0x801066A4u: goto label_801066A4;
    case 0x801066BCu: goto label_801066BC;
    case 0x801066D8u: goto label_801066D8;
    case 0x801066F4u: goto label_801066F4;
    case 0x80106730u: goto label_80106730;
    case 0x8010673Cu: goto label_8010673C;
    case 0x80106758u: goto label_80106758;
    case 0x80106764u: goto label_80106764;
    case 0x80106780u: goto label_80106780;
    case 0x8010678Cu: goto label_8010678C;
    case 0x80106798u: goto label_80106798;
    case 0x801067B4u: goto label_801067B4;
    case 0x801067C4u: goto label_801067C4;
    case 0x801067D4u: goto label_801067D4;
    case 0x801067E8u: goto label_801067E8;
    case 0x80106800u: goto label_80106800;
    case 0x80106818u: goto label_80106818;
    case 0x80106834u: goto label_80106834;
    case 0x80106850u: goto label_80106850;
    case 0x8010688Cu: goto label_8010688C;
    case 0x80106898u: goto label_80106898;
    case 0x801068B4u: goto label_801068B4;
    case 0x801068C0u: goto label_801068C0;
    case 0x801068DCu: goto label_801068DC;
    case 0x801068ECu: goto label_801068EC;
    case 0x801068F8u: goto label_801068F8;
    case 0x80106914u: goto label_80106914;
    case 0x80106920u: goto label_80106920;
    case 0x8010693Cu: goto label_8010693C;
    case 0x80106944u: goto label_80106944;
    case 0x80106954u: goto label_80106954;
    case 0x80106968u: goto label_80106968;
    case 0x80106980u: goto label_80106980;
    case 0x80106998u: goto label_80106998;
    case 0x801069B4u: goto label_801069B4;
    case 0x801069D0u: goto label_801069D0;
    case 0x80106A04u: goto label_80106A04;
    case 0x80106A10u: goto label_80106A10;
    case 0x80106A2Cu: goto label_80106A2C;
    case 0x80106A34u: goto label_80106A34;
    case 0x80106A40u: goto label_80106A40;
    case 0x80106A44u: goto label_80106A44;
    case 0x80106A58u: goto label_80106A58;
    case 0x80106A68u: goto label_80106A68;
    case 0x80106A78u: goto label_80106A78;
    case 0x80106A8Cu: goto label_80106A8C;
    case 0x80106AA4u: goto label_80106AA4;
    case 0x80106ABCu: goto label_80106ABC;
    case 0x80106AD8u: goto label_80106AD8;
    case 0x80106AF4u: goto label_80106AF4;
    case 0x80106B28u: goto label_80106B28;
    case 0x80106B34u: goto label_80106B34;
    case 0x80106B50u: goto label_80106B50;
    case 0x80106B5Cu: goto label_80106B5C;
    case 0x80106B78u: goto label_80106B78;
    case 0x80106B84u: goto label_80106B84;
    case 0x80106B90u: goto label_80106B90;
    case 0x80106BACu: goto label_80106BAC;
    case 0x80106BBCu: goto label_80106BBC;
    case 0x80106BCCu: goto label_80106BCC;
    case 0x80106BE0u: goto label_80106BE0;
    case 0x80106BF8u: goto label_80106BF8;
    case 0x80106C10u: goto label_80106C10;
    case 0x80106C2Cu: goto label_80106C2C;
    case 0x80106C48u: goto label_80106C48;
    case 0x80106C7Cu: goto label_80106C7C;
    case 0x80106C88u: goto label_80106C88;
    case 0x80106CA4u: goto label_80106CA4;
    case 0x80106CB0u: goto label_80106CB0;
    case 0x80106CCCu: goto label_80106CCC;
    case 0x80106CDCu: goto label_80106CDC;
    case 0x80106CE8u: goto label_80106CE8;
    case 0x80106D04u: goto label_80106D04;
    case 0x80106D10u: goto label_80106D10;
    case 0x80106D2Cu: goto label_80106D2C;
    case 0x80106D34u: goto label_80106D34;
    case 0x80106D44u: goto label_80106D44;
    case 0x80106D58u: goto label_80106D58;
    case 0x80106D70u: goto label_80106D70;
    case 0x80106D88u: goto label_80106D88;
    case 0x80106DA4u: goto label_80106DA4;
    case 0x80106DC0u: goto label_80106DC0;
    case 0x80106DD4u: goto label_80106DD4;
    case 0x80106DE0u: goto label_80106DE0;
    case 0x80106DFCu: goto label_80106DFC;
    case 0x80106E04u: goto label_80106E04;
    case 0x80106E08u: goto label_80106E08;
    case 0x80106E18u: goto label_80106E18;
    case 0x80106E20u: goto label_80106E20;
    case 0x80106E2Cu: goto label_80106E2C;
    case 0x80106E3Cu: goto label_80106E3C;
    case 0x80106E48u: goto label_80106E48;
    case 0x80106E4Cu: goto label_80106E4C;
    case 0x80106E68u: goto label_80106E68;
    case 0x80106E70u: goto label_80106E70;
    case 0x80106EDCu: goto label_80106EDC;
    case 0x80106EF4u: goto label_80106EF4;
    case 0x80106F08u: goto label_80106F08;
    case 0x80106F18u: goto label_80106F18;
    case 0x80106F30u: goto label_80106F30;
    case 0x80106F48u: goto label_80106F48;
    case 0x80106F54u: goto label_80106F54;
    case 0x80106F5Cu: goto label_80106F5C;
    case 0x80106FBCu: goto label_80106FBC;
    case 0x80107138u: goto label_80107138;
    case 0x80107160u: goto label_80107160;
    case 0x80107194u: goto label_80107194;
    case 0x801071ACu: goto label_801071AC;
    default: return;
    }
}

