// DolRecomp output
#include "../RZTE01.h"

static void loop_80653930(CPUState* ctx) {
label_80653930:
    ctx->downcount -= 5;
    ctx->pc = 0x80653930u;
    // 80653930: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80653934u;
    // 80653934: lwzu     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

    ctx->pc = 0x80653938u;
    // 80653938: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x8065393Cu;
    // 8065393C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80653940: bc    16, 0, 0x80653930
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653930u;
                return;
            }
            goto label_80653930;
        }
    }

    ctx->pc = 0x80653944u;
}

static void loop_80653994(CPUState* ctx) {
label_80653994:
    ctx->downcount -= 5;
    ctx->pc = 0x80653994u;
    // 80653994: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80653998u;
    // 80653998: lwzu     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

    ctx->pc = 0x8065399Cu;
    // 8065399C: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x806539A0u;
    // 806539A0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 806539A4: bc    16, 0, 0x80653994
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653994u;
                return;
            }
            goto label_80653994;
        }
    }

    ctx->pc = 0x806539A8u;
}

void func_806531C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x806531C0u: goto label_806531C0;
    case 0x806531C4u: goto label_806531C4;
    case 0x806531C8u: goto label_806531C8;
    case 0x806531CCu: goto label_806531CC;
    case 0x806531D0u: goto label_806531D0;
    case 0x806531D4u: goto label_806531D4;
    case 0x806531D8u: goto label_806531D8;
    case 0x806531DCu: goto label_806531DC;
    case 0x806531E0u: goto label_806531E0;
    case 0x806531E4u: goto label_806531E4;
    case 0x806531E8u: goto label_806531E8;
    case 0x806531ECu: goto label_806531EC;
    case 0x806531F0u: goto label_806531F0;
    case 0x806531F4u: goto label_806531F4;
    case 0x806531F8u: goto label_806531F8;
    case 0x806531FCu: goto label_806531FC;
    case 0x80653200u: goto label_80653200;
    case 0x80653204u: goto label_80653204;
    case 0x80653208u: goto label_80653208;
    case 0x8065320Cu: goto label_8065320C;
    case 0x80653210u: goto label_80653210;
    case 0x80653214u: goto label_80653214;
    case 0x80653218u: goto label_80653218;
    case 0x8065321Cu: goto label_8065321C;
    case 0x80653220u: goto label_80653220;
    case 0x80653224u: goto label_80653224;
    case 0x80653228u: goto label_80653228;
    case 0x8065322Cu: goto label_8065322C;
    case 0x80653230u: goto label_80653230;
    case 0x80653234u: goto label_80653234;
    case 0x80653238u: goto label_80653238;
    case 0x8065323Cu: goto label_8065323C;
    case 0x80653240u: goto label_80653240;
    case 0x80653244u: goto label_80653244;
    case 0x80653248u: goto label_80653248;
    case 0x8065324Cu: goto label_8065324C;
    case 0x80653250u: goto label_80653250;
    case 0x80653254u: goto label_80653254;
    case 0x80653258u: goto label_80653258;
    case 0x8065325Cu: goto label_8065325C;
    case 0x80653260u: goto label_80653260;
    case 0x80653264u: goto label_80653264;
    case 0x80653268u: goto label_80653268;
    case 0x8065326Cu: goto label_8065326C;
    case 0x80653270u: goto label_80653270;
    case 0x80653274u: goto label_80653274;
    case 0x80653278u: goto label_80653278;
    case 0x8065327Cu: goto label_8065327C;
    case 0x80653280u: goto label_80653280;
    case 0x80653284u: goto label_80653284;
    case 0x80653288u: goto label_80653288;
    case 0x8065328Cu: goto label_8065328C;
    case 0x80653290u: goto label_80653290;
    case 0x80653294u: goto label_80653294;
    case 0x80653298u: goto label_80653298;
    case 0x8065329Cu: goto label_8065329C;
    case 0x806532A0u: goto label_806532A0;
    case 0x806532A4u: goto label_806532A4;
    case 0x806532A8u: goto label_806532A8;
    case 0x806532ACu: goto label_806532AC;
    case 0x806532B0u: goto label_806532B0;
    case 0x806532B4u: goto label_806532B4;
    case 0x806532B8u: goto label_806532B8;
    case 0x806532BCu: goto label_806532BC;
    case 0x806532C0u: goto label_806532C0;
    case 0x806532C4u: goto label_806532C4;
    case 0x806532C8u: goto label_806532C8;
    case 0x806532CCu: goto label_806532CC;
    case 0x806532D0u: goto label_806532D0;
    case 0x806532D4u: goto label_806532D4;
    case 0x806532D8u: goto label_806532D8;
    case 0x806532DCu: goto label_806532DC;
    case 0x806532E0u: goto label_806532E0;
    case 0x806532E4u: goto label_806532E4;
    case 0x806532E8u: goto label_806532E8;
    case 0x806532ECu: goto label_806532EC;
    case 0x806532F0u: goto label_806532F0;
    case 0x806532F4u: goto label_806532F4;
    case 0x806532F8u: goto label_806532F8;
    case 0x806532FCu: goto label_806532FC;
    case 0x80653300u: goto label_80653300;
    case 0x80653304u: goto label_80653304;
    case 0x80653308u: goto label_80653308;
    case 0x8065330Cu: goto label_8065330C;
    case 0x80653310u: goto label_80653310;
    case 0x80653314u: goto label_80653314;
    case 0x80653318u: goto label_80653318;
    case 0x8065331Cu: goto label_8065331C;
    case 0x80653320u: goto label_80653320;
    case 0x80653324u: goto label_80653324;
    case 0x80653328u: goto label_80653328;
    case 0x8065332Cu: goto label_8065332C;
    case 0x80653330u: goto label_80653330;
    case 0x80653334u: goto label_80653334;
    case 0x80653338u: goto label_80653338;
    case 0x8065333Cu: goto label_8065333C;
    case 0x80653340u: goto label_80653340;
    case 0x80653344u: goto label_80653344;
    case 0x80653348u: goto label_80653348;
    case 0x8065334Cu: goto label_8065334C;
    case 0x80653350u: goto label_80653350;
    case 0x80653354u: goto label_80653354;
    case 0x80653358u: goto label_80653358;
    case 0x8065335Cu: goto label_8065335C;
    case 0x80653360u: goto label_80653360;
    case 0x80653364u: goto label_80653364;
    case 0x80653368u: goto label_80653368;
    case 0x8065336Cu: goto label_8065336C;
    case 0x80653370u: goto label_80653370;
    case 0x80653374u: goto label_80653374;
    case 0x80653378u: goto label_80653378;
    case 0x8065337Cu: goto label_8065337C;
    case 0x80653380u: goto label_80653380;
    case 0x80653384u: goto label_80653384;
    case 0x80653388u: goto label_80653388;
    case 0x8065338Cu: goto label_8065338C;
    case 0x80653390u: goto label_80653390;
    case 0x80653394u: goto label_80653394;
    case 0x80653398u: goto label_80653398;
    case 0x8065339Cu: goto label_8065339C;
    case 0x806533A0u: goto label_806533A0;
    case 0x806533A4u: goto label_806533A4;
    case 0x806533A8u: goto label_806533A8;
    case 0x806533ACu: goto label_806533AC;
    case 0x806533B0u: goto label_806533B0;
    case 0x806533B4u: goto label_806533B4;
    case 0x806533B8u: goto label_806533B8;
    case 0x806533BCu: goto label_806533BC;
    case 0x806533C0u: goto label_806533C0;
    case 0x806533C4u: goto label_806533C4;
    case 0x806533C8u: goto label_806533C8;
    case 0x806533CCu: goto label_806533CC;
    case 0x806533D0u: goto label_806533D0;
    case 0x806533D4u: goto label_806533D4;
    case 0x806533D8u: goto label_806533D8;
    case 0x806533DCu: goto label_806533DC;
    case 0x806533E0u: goto label_806533E0;
    case 0x806533E4u: goto label_806533E4;
    case 0x806533E8u: goto label_806533E8;
    case 0x806533ECu: goto label_806533EC;
    case 0x806533F0u: goto label_806533F0;
    case 0x806533F4u: goto label_806533F4;
    case 0x806533F8u: goto label_806533F8;
    case 0x806533FCu: goto label_806533FC;
    case 0x80653400u: goto label_80653400;
    case 0x80653404u: goto label_80653404;
    case 0x80653408u: goto label_80653408;
    case 0x8065340Cu: goto label_8065340C;
    case 0x80653410u: goto label_80653410;
    case 0x80653414u: goto label_80653414;
    case 0x80653418u: goto label_80653418;
    case 0x8065341Cu: goto label_8065341C;
    case 0x80653420u: goto label_80653420;
    case 0x80653424u: goto label_80653424;
    case 0x80653428u: goto label_80653428;
    case 0x8065342Cu: goto label_8065342C;
    case 0x80653430u: goto label_80653430;
    case 0x80653434u: goto label_80653434;
    case 0x80653438u: goto label_80653438;
    case 0x8065343Cu: goto label_8065343C;
    case 0x80653440u: goto label_80653440;
    case 0x80653444u: goto label_80653444;
    case 0x80653448u: goto label_80653448;
    case 0x8065344Cu: goto label_8065344C;
    case 0x80653450u: goto label_80653450;
    case 0x80653454u: goto label_80653454;
    case 0x80653458u: goto label_80653458;
    case 0x8065345Cu: goto label_8065345C;
    case 0x80653460u: goto label_80653460;
    case 0x80653464u: goto label_80653464;
    case 0x80653468u: goto label_80653468;
    case 0x8065346Cu: goto label_8065346C;
    case 0x80653470u: goto label_80653470;
    case 0x80653474u: goto label_80653474;
    case 0x80653478u: goto label_80653478;
    case 0x8065347Cu: goto label_8065347C;
    case 0x80653480u: goto label_80653480;
    case 0x80653484u: goto label_80653484;
    case 0x80653488u: goto label_80653488;
    case 0x8065348Cu: goto label_8065348C;
    case 0x80653490u: goto label_80653490;
    case 0x80653494u: goto label_80653494;
    case 0x80653498u: goto label_80653498;
    case 0x8065349Cu: goto label_8065349C;
    case 0x806534A0u: goto label_806534A0;
    case 0x806534A4u: goto label_806534A4;
    case 0x806534A8u: goto label_806534A8;
    case 0x806534ACu: goto label_806534AC;
    case 0x806534B0u: goto label_806534B0;
    case 0x806534B4u: goto label_806534B4;
    case 0x806534B8u: goto label_806534B8;
    case 0x806534BCu: goto label_806534BC;
    case 0x806534C0u: goto label_806534C0;
    case 0x806534C4u: goto label_806534C4;
    case 0x806534C8u: goto label_806534C8;
    case 0x806534CCu: goto label_806534CC;
    case 0x806534D0u: goto label_806534D0;
    case 0x806534D4u: goto label_806534D4;
    case 0x806534D8u: goto label_806534D8;
    case 0x806534DCu: goto label_806534DC;
    case 0x806534E0u: goto label_806534E0;
    case 0x806534E4u: goto label_806534E4;
    case 0x806534E8u: goto label_806534E8;
    case 0x806534ECu: goto label_806534EC;
    case 0x806534F0u: goto label_806534F0;
    case 0x806534F4u: goto label_806534F4;
    case 0x806534F8u: goto label_806534F8;
    case 0x806534FCu: goto label_806534FC;
    case 0x80653500u: goto label_80653500;
    case 0x80653504u: goto label_80653504;
    case 0x80653508u: goto label_80653508;
    case 0x8065350Cu: goto label_8065350C;
    case 0x80653510u: goto label_80653510;
    case 0x80653514u: goto label_80653514;
    case 0x80653518u: goto label_80653518;
    case 0x8065351Cu: goto label_8065351C;
    case 0x80653520u: goto label_80653520;
    case 0x80653524u: goto label_80653524;
    case 0x80653528u: goto label_80653528;
    case 0x8065352Cu: goto label_8065352C;
    case 0x80653530u: goto label_80653530;
    case 0x80653534u: goto label_80653534;
    case 0x80653538u: goto label_80653538;
    case 0x8065353Cu: goto label_8065353C;
    case 0x80653540u: goto label_80653540;
    case 0x80653544u: goto label_80653544;
    case 0x80653548u: goto label_80653548;
    case 0x8065354Cu: goto label_8065354C;
    case 0x80653550u: goto label_80653550;
    case 0x80653554u: goto label_80653554;
    case 0x80653558u: goto label_80653558;
    case 0x8065355Cu: goto label_8065355C;
    case 0x80653560u: goto label_80653560;
    case 0x80653564u: goto label_80653564;
    case 0x80653568u: goto label_80653568;
    case 0x8065356Cu: goto label_8065356C;
    case 0x80653570u: goto label_80653570;
    case 0x80653574u: goto label_80653574;
    case 0x80653578u: goto label_80653578;
    case 0x8065357Cu: goto label_8065357C;
    case 0x80653580u: goto label_80653580;
    case 0x80653584u: goto label_80653584;
    case 0x80653588u: goto label_80653588;
    case 0x8065358Cu: goto label_8065358C;
    case 0x80653590u: goto label_80653590;
    case 0x80653594u: goto label_80653594;
    case 0x80653598u: goto label_80653598;
    case 0x8065359Cu: goto label_8065359C;
    case 0x806535A0u: goto label_806535A0;
    case 0x806535A4u: goto label_806535A4;
    case 0x806535A8u: goto label_806535A8;
    case 0x806535ACu: goto label_806535AC;
    case 0x806535B0u: goto label_806535B0;
    case 0x806535B4u: goto label_806535B4;
    case 0x806535B8u: goto label_806535B8;
    case 0x806535BCu: goto label_806535BC;
    case 0x806535C0u: goto label_806535C0;
    case 0x806535C4u: goto label_806535C4;
    case 0x806535C8u: goto label_806535C8;
    case 0x806535CCu: goto label_806535CC;
    case 0x806535D0u: goto label_806535D0;
    case 0x806535D4u: goto label_806535D4;
    case 0x806535D8u: goto label_806535D8;
    case 0x806535DCu: goto label_806535DC;
    case 0x806535E0u: goto label_806535E0;
    case 0x806535E4u: goto label_806535E4;
    case 0x806535E8u: goto label_806535E8;
    case 0x806535ECu: goto label_806535EC;
    case 0x806535F0u: goto label_806535F0;
    case 0x806535F4u: goto label_806535F4;
    case 0x806535F8u: goto label_806535F8;
    case 0x806535FCu: goto label_806535FC;
    case 0x80653600u: goto label_80653600;
    case 0x80653604u: goto label_80653604;
    case 0x80653608u: goto label_80653608;
    case 0x8065360Cu: goto label_8065360C;
    case 0x80653610u: goto label_80653610;
    case 0x80653614u: goto label_80653614;
    case 0x80653618u: goto label_80653618;
    case 0x8065361Cu: goto label_8065361C;
    case 0x80653620u: goto label_80653620;
    case 0x80653624u: goto label_80653624;
    case 0x80653628u: goto label_80653628;
    case 0x8065362Cu: goto label_8065362C;
    case 0x80653630u: goto label_80653630;
    case 0x80653634u: goto label_80653634;
    case 0x80653638u: goto label_80653638;
    case 0x8065363Cu: goto label_8065363C;
    case 0x80653640u: goto label_80653640;
    case 0x80653644u: goto label_80653644;
    case 0x80653648u: goto label_80653648;
    case 0x8065364Cu: goto label_8065364C;
    case 0x80653650u: goto label_80653650;
    case 0x80653654u: goto label_80653654;
    case 0x80653658u: goto label_80653658;
    case 0x8065365Cu: goto label_8065365C;
    case 0x80653660u: goto label_80653660;
    case 0x80653664u: goto label_80653664;
    case 0x80653668u: goto label_80653668;
    case 0x8065366Cu: goto label_8065366C;
    case 0x80653670u: goto label_80653670;
    case 0x80653674u: goto label_80653674;
    case 0x80653678u: goto label_80653678;
    case 0x8065367Cu: goto label_8065367C;
    case 0x80653680u: goto label_80653680;
    case 0x80653684u: goto label_80653684;
    case 0x80653688u: goto label_80653688;
    case 0x8065368Cu: goto label_8065368C;
    case 0x80653690u: goto label_80653690;
    case 0x80653694u: goto label_80653694;
    case 0x80653698u: goto label_80653698;
    case 0x8065369Cu: goto label_8065369C;
    case 0x806536A0u: goto label_806536A0;
    case 0x806536A4u: goto label_806536A4;
    case 0x806536A8u: goto label_806536A8;
    case 0x806536ACu: goto label_806536AC;
    case 0x806536B0u: goto label_806536B0;
    case 0x806536B4u: goto label_806536B4;
    case 0x806536B8u: goto label_806536B8;
    case 0x806536BCu: goto label_806536BC;
    case 0x806536C0u: goto label_806536C0;
    case 0x806536C4u: goto label_806536C4;
    case 0x806536C8u: goto label_806536C8;
    case 0x806536CCu: goto label_806536CC;
    case 0x806536D0u: goto label_806536D0;
    case 0x806536D4u: goto label_806536D4;
    case 0x806536D8u: goto label_806536D8;
    case 0x806536DCu: goto label_806536DC;
    case 0x806536E0u: goto label_806536E0;
    case 0x806536E4u: goto label_806536E4;
    case 0x806536E8u: goto label_806536E8;
    case 0x806536ECu: goto label_806536EC;
    case 0x806536F0u: goto label_806536F0;
    case 0x806536F4u: goto label_806536F4;
    case 0x806536F8u: goto label_806536F8;
    case 0x806536FCu: goto label_806536FC;
    case 0x80653700u: goto label_80653700;
    case 0x80653704u: goto label_80653704;
    case 0x80653708u: goto label_80653708;
    case 0x8065370Cu: goto label_8065370C;
    case 0x80653710u: goto label_80653710;
    case 0x80653714u: goto label_80653714;
    case 0x80653718u: goto label_80653718;
    case 0x8065371Cu: goto label_8065371C;
    case 0x80653720u: goto label_80653720;
    case 0x80653724u: goto label_80653724;
    case 0x80653728u: goto label_80653728;
    case 0x8065372Cu: goto label_8065372C;
    case 0x80653730u: goto label_80653730;
    case 0x80653734u: goto label_80653734;
    case 0x80653738u: goto label_80653738;
    case 0x8065373Cu: goto label_8065373C;
    case 0x80653740u: goto label_80653740;
    case 0x80653744u: goto label_80653744;
    case 0x80653748u: goto label_80653748;
    case 0x8065374Cu: goto label_8065374C;
    case 0x80653750u: goto label_80653750;
    case 0x80653754u: goto label_80653754;
    case 0x80653758u: goto label_80653758;
    case 0x8065375Cu: goto label_8065375C;
    case 0x80653760u: goto label_80653760;
    case 0x80653764u: goto label_80653764;
    case 0x80653768u: goto label_80653768;
    case 0x8065376Cu: goto label_8065376C;
    case 0x80653770u: goto label_80653770;
    case 0x80653774u: goto label_80653774;
    case 0x80653778u: goto label_80653778;
    case 0x8065377Cu: goto label_8065377C;
    case 0x80653780u: goto label_80653780;
    case 0x80653784u: goto label_80653784;
    case 0x80653788u: goto label_80653788;
    case 0x8065378Cu: goto label_8065378C;
    case 0x80653790u: goto label_80653790;
    case 0x80653794u: goto label_80653794;
    case 0x80653798u: goto label_80653798;
    case 0x8065379Cu: goto label_8065379C;
    case 0x806537A0u: goto label_806537A0;
    case 0x806537A4u: goto label_806537A4;
    case 0x806537A8u: goto label_806537A8;
    case 0x806537ACu: goto label_806537AC;
    case 0x806537B0u: goto label_806537B0;
    case 0x806537B4u: goto label_806537B4;
    case 0x806537B8u: goto label_806537B8;
    case 0x806537BCu: goto label_806537BC;
    case 0x806537C0u: goto label_806537C0;
    case 0x806537C4u: goto label_806537C4;
    case 0x806537C8u: goto label_806537C8;
    case 0x806537CCu: goto label_806537CC;
    case 0x806537D0u: goto label_806537D0;
    case 0x806537D4u: goto label_806537D4;
    case 0x806537D8u: goto label_806537D8;
    case 0x806537DCu: goto label_806537DC;
    case 0x806537E0u: goto label_806537E0;
    case 0x806537E4u: goto label_806537E4;
    case 0x806537E8u: goto label_806537E8;
    case 0x806537ECu: goto label_806537EC;
    case 0x806537F0u: goto label_806537F0;
    case 0x806537F4u: goto label_806537F4;
    case 0x806537F8u: goto label_806537F8;
    case 0x806537FCu: goto label_806537FC;
    case 0x80653800u: goto label_80653800;
    case 0x80653804u: goto label_80653804;
    case 0x80653808u: goto label_80653808;
    case 0x8065380Cu: goto label_8065380C;
    case 0x80653810u: goto label_80653810;
    case 0x80653814u: goto label_80653814;
    case 0x80653818u: goto label_80653818;
    case 0x8065381Cu: goto label_8065381C;
    case 0x80653820u: goto label_80653820;
    case 0x80653824u: goto label_80653824;
    case 0x80653828u: goto label_80653828;
    case 0x8065382Cu: goto label_8065382C;
    case 0x80653830u: goto label_80653830;
    case 0x80653834u: goto label_80653834;
    case 0x80653838u: goto label_80653838;
    case 0x8065383Cu: goto label_8065383C;
    case 0x80653840u: goto label_80653840;
    case 0x80653844u: goto label_80653844;
    case 0x80653848u: goto label_80653848;
    case 0x8065384Cu: goto label_8065384C;
    case 0x80653850u: goto label_80653850;
    case 0x80653854u: goto label_80653854;
    case 0x80653858u: goto label_80653858;
    case 0x8065385Cu: goto label_8065385C;
    case 0x80653860u: goto label_80653860;
    case 0x80653864u: goto label_80653864;
    case 0x80653868u: goto label_80653868;
    case 0x8065386Cu: goto label_8065386C;
    case 0x80653870u: goto label_80653870;
    case 0x80653874u: goto label_80653874;
    case 0x80653878u: goto label_80653878;
    case 0x8065387Cu: goto label_8065387C;
    case 0x80653880u: goto label_80653880;
    case 0x80653884u: goto label_80653884;
    case 0x80653888u: goto label_80653888;
    case 0x8065388Cu: goto label_8065388C;
    case 0x80653890u: goto label_80653890;
    case 0x80653894u: goto label_80653894;
    case 0x80653898u: goto label_80653898;
    case 0x8065389Cu: goto label_8065389C;
    case 0x806538A0u: goto label_806538A0;
    case 0x806538A4u: goto label_806538A4;
    case 0x806538A8u: goto label_806538A8;
    case 0x806538ACu: goto label_806538AC;
    case 0x806538B0u: goto label_806538B0;
    case 0x806538B4u: goto label_806538B4;
    case 0x806538B8u: goto label_806538B8;
    case 0x806538BCu: goto label_806538BC;
    case 0x806538C0u: goto label_806538C0;
    case 0x806538C4u: goto label_806538C4;
    case 0x806538C8u: goto label_806538C8;
    case 0x806538CCu: goto label_806538CC;
    case 0x806538D0u: goto label_806538D0;
    case 0x806538D4u: goto label_806538D4;
    case 0x806538D8u: goto label_806538D8;
    case 0x806538DCu: goto label_806538DC;
    case 0x806538E0u: goto label_806538E0;
    case 0x806538E4u: goto label_806538E4;
    case 0x806538E8u: goto label_806538E8;
    case 0x806538ECu: goto label_806538EC;
    case 0x806538F0u: goto label_806538F0;
    case 0x806538F4u: goto label_806538F4;
    case 0x806538F8u: goto label_806538F8;
    case 0x806538FCu: goto label_806538FC;
    case 0x80653900u: goto label_80653900;
    case 0x80653904u: goto label_80653904;
    case 0x80653908u: goto label_80653908;
    case 0x8065390Cu: goto label_8065390C;
    case 0x80653910u: goto label_80653910;
    case 0x80653914u: goto label_80653914;
    case 0x80653918u: goto label_80653918;
    case 0x8065391Cu: goto label_8065391C;
    case 0x80653920u: goto label_80653920;
    case 0x80653924u: goto label_80653924;
    case 0x80653928u: goto label_80653928;
    case 0x8065392Cu: goto label_8065392C;
    case 0x80653930u: goto label_80653930;
    case 0x80653934u: goto label_80653934;
    case 0x80653938u: goto label_80653938;
    case 0x8065393Cu: goto label_8065393C;
    case 0x80653940u: goto label_80653940;
    case 0x80653944u: goto label_80653944;
    case 0x80653948u: goto label_80653948;
    case 0x8065394Cu: goto label_8065394C;
    case 0x80653950u: goto label_80653950;
    case 0x80653954u: goto label_80653954;
    case 0x80653958u: goto label_80653958;
    case 0x8065395Cu: goto label_8065395C;
    case 0x80653960u: goto label_80653960;
    case 0x80653964u: goto label_80653964;
    case 0x80653968u: goto label_80653968;
    case 0x8065396Cu: goto label_8065396C;
    case 0x80653970u: goto label_80653970;
    case 0x80653974u: goto label_80653974;
    case 0x80653978u: goto label_80653978;
    case 0x8065397Cu: goto label_8065397C;
    case 0x80653980u: goto label_80653980;
    case 0x80653984u: goto label_80653984;
    case 0x80653988u: goto label_80653988;
    case 0x8065398Cu: goto label_8065398C;
    case 0x80653990u: goto label_80653990;
    case 0x80653994u: goto label_80653994;
    case 0x80653998u: goto label_80653998;
    case 0x8065399Cu: goto label_8065399C;
    case 0x806539A0u: goto label_806539A0;
    case 0x806539A4u: goto label_806539A4;
    case 0x806539A8u: goto label_806539A8;
    case 0x806539ACu: goto label_806539AC;
    case 0x806539B0u: goto label_806539B0;
    case 0x806539B4u: goto label_806539B4;
    case 0x806539B8u: goto label_806539B8;
    case 0x806539BCu: goto label_806539BC;
    case 0x806539C0u: goto label_806539C0;
    case 0x806539C4u: goto label_806539C4;
    case 0x806539C8u: goto label_806539C8;
    case 0x806539CCu: goto label_806539CC;
    case 0x806539D0u: goto label_806539D0;
    case 0x806539D4u: goto label_806539D4;
    case 0x806539D8u: goto label_806539D8;
    case 0x806539DCu: goto label_806539DC;
    case 0x806539E0u: goto label_806539E0;
    case 0x806539E4u: goto label_806539E4;
    case 0x806539E8u: goto label_806539E8;
    case 0x806539ECu: goto label_806539EC;
    case 0x806539F0u: goto label_806539F0;
    case 0x806539F4u: goto label_806539F4;
    case 0x806539F8u: goto label_806539F8;
    case 0x806539FCu: goto label_806539FC;
    case 0x80653A00u: goto label_80653A00;
    case 0x80653A04u: goto label_80653A04;
    case 0x80653A08u: goto label_80653A08;
    case 0x80653A0Cu: goto label_80653A0C;
    case 0x80653A10u: goto label_80653A10;
    case 0x80653A14u: goto label_80653A14;
    case 0x80653A18u: goto label_80653A18;
    case 0x80653A1Cu: goto label_80653A1C;
    case 0x80653A20u: goto label_80653A20;
    case 0x80653A24u: goto label_80653A24;
    case 0x80653A28u: goto label_80653A28;
    case 0x80653A2Cu: goto label_80653A2C;
    case 0x80653A30u: goto label_80653A30;
    case 0x80653A34u: goto label_80653A34;
    case 0x80653A38u: goto label_80653A38;
    case 0x80653A3Cu: goto label_80653A3C;
    case 0x80653A40u: goto label_80653A40;
    case 0x80653A44u: goto label_80653A44;
    case 0x80653A48u: goto label_80653A48;
    case 0x80653A4Cu: goto label_80653A4C;
    case 0x80653A50u: goto label_80653A50;
    case 0x80653A54u: goto label_80653A54;
    case 0x80653A58u: goto label_80653A58;
    case 0x80653A5Cu: goto label_80653A5C;
    case 0x80653A60u: goto label_80653A60;
    case 0x80653A64u: goto label_80653A64;
    case 0x80653A68u: goto label_80653A68;
    case 0x80653A6Cu: goto label_80653A6C;
    case 0x80653A70u: goto label_80653A70;
    case 0x80653A74u: goto label_80653A74;
    case 0x80653A78u: goto label_80653A78;
    case 0x80653A7Cu: goto label_80653A7C;
    case 0x80653A80u: goto label_80653A80;
    case 0x80653A84u: goto label_80653A84;
    case 0x80653A88u: goto label_80653A88;
    case 0x80653A8Cu: goto label_80653A8C;
    case 0x80653A90u: goto label_80653A90;
    case 0x80653A94u: goto label_80653A94;
    case 0x80653A98u: goto label_80653A98;
    case 0x80653A9Cu: goto label_80653A9C;
    case 0x80653AA0u: goto label_80653AA0;
    case 0x80653AA4u: goto label_80653AA4;
    case 0x80653AA8u: goto label_80653AA8;
    case 0x80653AACu: goto label_80653AAC;
    case 0x80653AB0u: goto label_80653AB0;
    case 0x80653AB4u: goto label_80653AB4;
    case 0x80653AB8u: goto label_80653AB8;
    case 0x80653ABCu: goto label_80653ABC;
    case 0x80653AC0u: goto label_80653AC0;
    case 0x80653AC4u: goto label_80653AC4;
    case 0x80653AC8u: goto label_80653AC8;
    case 0x80653ACCu: goto label_80653ACC;
    case 0x80653AD0u: goto label_80653AD0;
    case 0x80653AD4u: goto label_80653AD4;
    case 0x80653AD8u: goto label_80653AD8;
    case 0x80653ADCu: goto label_80653ADC;
    case 0x80653AE0u: goto label_80653AE0;
    case 0x80653AE4u: goto label_80653AE4;
    case 0x80653AE8u: goto label_80653AE8;
    case 0x80653AECu: goto label_80653AEC;
    case 0x80653AF0u: goto label_80653AF0;
    case 0x80653AF4u: goto label_80653AF4;
    case 0x80653AF8u: goto label_80653AF8;
    case 0x80653AFCu: goto label_80653AFC;
    case 0x80653B00u: goto label_80653B00;
    case 0x80653B04u: goto label_80653B04;
    case 0x80653B08u: goto label_80653B08;
    case 0x80653B0Cu: goto label_80653B0C;
    case 0x80653B10u: goto label_80653B10;
    case 0x80653B14u: goto label_80653B14;
    case 0x80653B18u: goto label_80653B18;
    case 0x80653B1Cu: goto label_80653B1C;
    case 0x80653B20u: goto label_80653B20;
    case 0x80653B24u: goto label_80653B24;
    case 0x80653B28u: goto label_80653B28;
    case 0x80653B2Cu: goto label_80653B2C;
    case 0x80653B30u: goto label_80653B30;
    case 0x80653B34u: goto label_80653B34;
    case 0x80653B38u: goto label_80653B38;
    case 0x80653B3Cu: goto label_80653B3C;
    case 0x80653B40u: goto label_80653B40;
    case 0x80653B44u: goto label_80653B44;
    case 0x80653B48u: goto label_80653B48;
    case 0x80653B4Cu: goto label_80653B4C;
    case 0x80653B50u: goto label_80653B50;
    case 0x80653B54u: goto label_80653B54;
    case 0x80653B58u: goto label_80653B58;
    case 0x80653B5Cu: goto label_80653B5C;
    case 0x80653B60u: goto label_80653B60;
    case 0x80653B64u: goto label_80653B64;
    case 0x80653B68u: goto label_80653B68;
    case 0x80653B6Cu: goto label_80653B6C;
    case 0x80653B70u: goto label_80653B70;
    case 0x80653B74u: goto label_80653B74;
    case 0x80653B78u: goto label_80653B78;
    case 0x80653B7Cu: goto label_80653B7C;
    case 0x80653B80u: goto label_80653B80;
    case 0x80653B84u: goto label_80653B84;
    case 0x80653B88u: goto label_80653B88;
    case 0x80653B8Cu: goto label_80653B8C;
    case 0x80653B90u: goto label_80653B90;
    case 0x80653B94u: goto label_80653B94;
    case 0x80653B98u: goto label_80653B98;
    case 0x80653B9Cu: goto label_80653B9C;
    case 0x80653BA0u: goto label_80653BA0;
    case 0x80653BA4u: goto label_80653BA4;
    case 0x80653BA8u: goto label_80653BA8;
    case 0x80653BACu: goto label_80653BAC;
    case 0x80653BB0u: goto label_80653BB0;
    case 0x80653BB4u: goto label_80653BB4;
    case 0x80653BB8u: goto label_80653BB8;
    case 0x80653BBCu: goto label_80653BBC;
    case 0x80653BC0u: goto label_80653BC0;
    case 0x80653BC4u: goto label_80653BC4;
    case 0x80653BC8u: goto label_80653BC8;
    case 0x80653BCCu: goto label_80653BCC;
    case 0x80653BD0u: goto label_80653BD0;
    case 0x80653BD4u: goto label_80653BD4;
    case 0x80653BD8u: goto label_80653BD8;
    case 0x80653BDCu: goto label_80653BDC;
    case 0x80653BE0u: goto label_80653BE0;
    case 0x80653BE4u: goto label_80653BE4;
    case 0x80653BE8u: goto label_80653BE8;
    case 0x80653BECu: goto label_80653BEC;
    case 0x80653BF0u: goto label_80653BF0;
    case 0x80653BF4u: goto label_80653BF4;
    case 0x80653BF8u: goto label_80653BF8;
    case 0x80653BFCu: goto label_80653BFC;
    case 0x80653C00u: goto label_80653C00;
    case 0x80653C04u: goto label_80653C04;
    case 0x80653C08u: goto label_80653C08;
    case 0x80653C0Cu: goto label_80653C0C;
    case 0x80653C10u: goto label_80653C10;
    case 0x80653C14u: goto label_80653C14;
    case 0x80653C18u: goto label_80653C18;
    case 0x80653C1Cu: goto label_80653C1C;
    case 0x80653C20u: goto label_80653C20;
    case 0x80653C24u: goto label_80653C24;
    case 0x80653C28u: goto label_80653C28;
    case 0x80653C2Cu: goto label_80653C2C;
    case 0x80653C30u: goto label_80653C30;
    case 0x80653C34u: goto label_80653C34;
    case 0x80653C38u: goto label_80653C38;
    case 0x80653C3Cu: goto label_80653C3C;
    case 0x80653C40u: goto label_80653C40;
    case 0x80653C44u: goto label_80653C44;
    case 0x80653C48u: goto label_80653C48;
    case 0x80653C4Cu: goto label_80653C4C;
    case 0x80653C50u: goto label_80653C50;
    case 0x80653C54u: goto label_80653C54;
    case 0x80653C58u: goto label_80653C58;
    case 0x80653C5Cu: goto label_80653C5C;
    case 0x80653C60u: goto label_80653C60;
    case 0x80653C64u: goto label_80653C64;
    case 0x80653C68u: goto label_80653C68;
    case 0x80653C6Cu: goto label_80653C6C;
    case 0x80653C70u: goto label_80653C70;
    case 0x80653C74u: goto label_80653C74;
    case 0x80653C78u: goto label_80653C78;
    case 0x80653C7Cu: goto label_80653C7C;
    case 0x80653C80u: goto label_80653C80;
    case 0x80653C84u: goto label_80653C84;
    case 0x80653C88u: goto label_80653C88;
    case 0x80653C8Cu: goto label_80653C8C;
    case 0x80653C90u: goto label_80653C90;
    case 0x80653C94u: goto label_80653C94;
    case 0x80653C98u: goto label_80653C98;
    case 0x80653C9Cu: goto label_80653C9C;
    case 0x80653CA0u: goto label_80653CA0;
    case 0x80653CA4u: goto label_80653CA4;
    case 0x80653CA8u: goto label_80653CA8;
    case 0x80653CACu: goto label_80653CAC;
    case 0x80653CB0u: goto label_80653CB0;
    case 0x80653CB4u: goto label_80653CB4;
    case 0x80653CB8u: goto label_80653CB8;
    case 0x80653CBCu: goto label_80653CBC;
    case 0x80653CC0u: goto label_80653CC0;
    case 0x80653CC4u: goto label_80653CC4;
    case 0x80653CC8u: goto label_80653CC8;
    case 0x80653CCCu: goto label_80653CCC;
    case 0x80653CD0u: goto label_80653CD0;
    case 0x80653CD4u: goto label_80653CD4;
    case 0x80653CD8u: goto label_80653CD8;
    case 0x80653CDCu: goto label_80653CDC;
    case 0x80653CE0u: goto label_80653CE0;
    case 0x80653CE4u: goto label_80653CE4;
    case 0x80653CE8u: goto label_80653CE8;
    case 0x80653CECu: goto label_80653CEC;
    case 0x80653CF0u: goto label_80653CF0;
    case 0x80653CF4u: goto label_80653CF4;
    case 0x80653CF8u: goto label_80653CF8;
    case 0x80653CFCu: goto label_80653CFC;
    case 0x80653D00u: goto label_80653D00;
    case 0x80653D04u: goto label_80653D04;
    case 0x80653D08u: goto label_80653D08;
    case 0x80653D0Cu: goto label_80653D0C;
    case 0x80653D10u: goto label_80653D10;
    case 0x80653D14u: goto label_80653D14;
    case 0x80653D18u: goto label_80653D18;
    case 0x80653D1Cu: goto label_80653D1C;
    case 0x80653D20u: goto label_80653D20;
    case 0x80653D24u: goto label_80653D24;
    case 0x80653D28u: goto label_80653D28;
    case 0x80653D2Cu: goto label_80653D2C;
    case 0x80653D30u: goto label_80653D30;
    case 0x80653D34u: goto label_80653D34;
    case 0x80653D38u: goto label_80653D38;
    case 0x80653D3Cu: goto label_80653D3C;
    case 0x80653D40u: goto label_80653D40;
    case 0x80653D44u: goto label_80653D44;
    case 0x80653D48u: goto label_80653D48;
    case 0x80653D4Cu: goto label_80653D4C;
    case 0x80653D50u: goto label_80653D50;
    case 0x80653D54u: goto label_80653D54;
    case 0x80653D58u: goto label_80653D58;
    case 0x80653D5Cu: goto label_80653D5C;
    case 0x80653D60u: goto label_80653D60;
    case 0x80653D64u: goto label_80653D64;
    case 0x80653D68u: goto label_80653D68;
    case 0x80653D6Cu: goto label_80653D6C;
    case 0x80653D70u: goto label_80653D70;
    case 0x80653D74u: goto label_80653D74;
    case 0x80653D78u: goto label_80653D78;
    case 0x80653D7Cu: goto label_80653D7C;
    case 0x80653D80u: goto label_80653D80;
    case 0x80653D84u: goto label_80653D84;
    case 0x80653D88u: goto label_80653D88;
    case 0x80653D8Cu: goto label_80653D8C;
    case 0x80653D90u: goto label_80653D90;
    case 0x80653D94u: goto label_80653D94;
    case 0x80653D98u: goto label_80653D98;
    case 0x80653D9Cu: goto label_80653D9C;
    case 0x80653DA0u: goto label_80653DA0;
    case 0x80653DA4u: goto label_80653DA4;
    case 0x80653DA8u: goto label_80653DA8;
    case 0x80653DACu: goto label_80653DAC;
    case 0x80653DB0u: goto label_80653DB0;
    case 0x80653DB4u: goto label_80653DB4;
    case 0x80653DB8u: goto label_80653DB8;
    case 0x80653DBCu: goto label_80653DBC;
    case 0x80653DC0u: goto label_80653DC0;
    case 0x80653DC4u: goto label_80653DC4;
    case 0x80653DC8u: goto label_80653DC8;
    case 0x80653DCCu: goto label_80653DCC;
    case 0x80653DD0u: goto label_80653DD0;
    case 0x80653DD4u: goto label_80653DD4;
    case 0x80653DD8u: goto label_80653DD8;
    case 0x80653DDCu: goto label_80653DDC;
    case 0x80653DE0u: goto label_80653DE0;
    case 0x80653DE4u: goto label_80653DE4;
    case 0x80653DE8u: goto label_80653DE8;
    case 0x80653DECu: goto label_80653DEC;
    case 0x80653DF0u: goto label_80653DF0;
    case 0x80653DF4u: goto label_80653DF4;
    case 0x80653DF8u: goto label_80653DF8;
    case 0x80653DFCu: goto label_80653DFC;
    case 0x80653E00u: goto label_80653E00;
    case 0x80653E04u: goto label_80653E04;
    case 0x80653E08u: goto label_80653E08;
    case 0x80653E0Cu: goto label_80653E0C;
    case 0x80653E10u: goto label_80653E10;
    case 0x80653E14u: goto label_80653E14;
    case 0x80653E18u: goto label_80653E18;
    case 0x80653E1Cu: goto label_80653E1C;
    case 0x80653E20u: goto label_80653E20;
    case 0x80653E24u: goto label_80653E24;
    case 0x80653E28u: goto label_80653E28;
    case 0x80653E2Cu: goto label_80653E2C;
    case 0x80653E30u: goto label_80653E30;
    case 0x80653E34u: goto label_80653E34;
    case 0x80653E38u: goto label_80653E38;
    case 0x80653E3Cu: goto label_80653E3C;
    case 0x80653E40u: goto label_80653E40;
    case 0x80653E44u: goto label_80653E44;
    case 0x80653E48u: goto label_80653E48;
    case 0x80653E4Cu: goto label_80653E4C;
    case 0x80653E50u: goto label_80653E50;
    case 0x80653E54u: goto label_80653E54;
    case 0x80653E58u: goto label_80653E58;
    case 0x80653E5Cu: goto label_80653E5C;
    case 0x80653E60u: goto label_80653E60;
    case 0x80653E64u: goto label_80653E64;
    case 0x80653E68u: goto label_80653E68;
    case 0x80653E6Cu: goto label_80653E6C;
    case 0x80653E70u: goto label_80653E70;
    case 0x80653E74u: goto label_80653E74;
    case 0x80653E78u: goto label_80653E78;
    case 0x80653E7Cu: goto label_80653E7C;
    case 0x80653E80u: goto label_80653E80;
    case 0x80653E84u: goto label_80653E84;
    case 0x80653E88u: goto label_80653E88;
    case 0x80653E8Cu: goto label_80653E8C;
    case 0x80653E90u: goto label_80653E90;
    case 0x80653E94u: goto label_80653E94;
    case 0x80653E98u: goto label_80653E98;
    case 0x80653E9Cu: goto label_80653E9C;
    case 0x80653EA0u: goto label_80653EA0;
    case 0x80653EA4u: goto label_80653EA4;
    case 0x80653EA8u: goto label_80653EA8;
    case 0x80653EACu: goto label_80653EAC;
    case 0x80653EB0u: goto label_80653EB0;
    case 0x80653EB4u: goto label_80653EB4;
    case 0x80653EB8u: goto label_80653EB8;
    case 0x80653EBCu: goto label_80653EBC;
    case 0x80653EC0u: goto label_80653EC0;
    case 0x80653EC4u: goto label_80653EC4;
    case 0x80653EC8u: goto label_80653EC8;
    case 0x80653ECCu: goto label_80653ECC;
    case 0x80653ED0u: goto label_80653ED0;
    case 0x80653ED4u: goto label_80653ED4;
    case 0x80653ED8u: goto label_80653ED8;
    case 0x80653EDCu: goto label_80653EDC;
    case 0x80653EE0u: goto label_80653EE0;
    case 0x80653EE4u: goto label_80653EE4;
    case 0x80653EE8u: goto label_80653EE8;
    case 0x80653EECu: goto label_80653EEC;
    case 0x80653EF0u: goto label_80653EF0;
    case 0x80653EF4u: goto label_80653EF4;
    case 0x80653EF8u: goto label_80653EF8;
    case 0x80653EFCu: goto label_80653EFC;
    case 0x80653F00u: goto label_80653F00;
    case 0x80653F04u: goto label_80653F04;
    case 0x80653F08u: goto label_80653F08;
    case 0x80653F0Cu: goto label_80653F0C;
    case 0x80653F10u: goto label_80653F10;
    case 0x80653F14u: goto label_80653F14;
    case 0x80653F18u: goto label_80653F18;
    case 0x80653F1Cu: goto label_80653F1C;
    case 0x80653F20u: goto label_80653F20;
    case 0x80653F24u: goto label_80653F24;
    case 0x80653F28u: goto label_80653F28;
    case 0x80653F2Cu: goto label_80653F2C;
    case 0x80653F30u: goto label_80653F30;
    case 0x80653F34u: goto label_80653F34;
    case 0x80653F38u: goto label_80653F38;
    case 0x80653F3Cu: goto label_80653F3C;
    case 0x80653F40u: goto label_80653F40;
    case 0x80653F44u: goto label_80653F44;
    case 0x80653F48u: goto label_80653F48;
    case 0x80653F4Cu: goto label_80653F4C;
    case 0x80653F50u: goto label_80653F50;
    case 0x80653F54u: goto label_80653F54;
    case 0x80653F58u: goto label_80653F58;
    case 0x80653F5Cu: goto label_80653F5C;
    case 0x80653F60u: goto label_80653F60;
    case 0x80653F64u: goto label_80653F64;
    case 0x80653F68u: goto label_80653F68;
    case 0x80653F6Cu: goto label_80653F6C;
    case 0x80653F70u: goto label_80653F70;
    case 0x80653F74u: goto label_80653F74;
    case 0x80653F78u: goto label_80653F78;
    case 0x80653F7Cu: goto label_80653F7C;
    case 0x80653F80u: goto label_80653F80;
    case 0x80653F84u: goto label_80653F84;
    case 0x80653F88u: goto label_80653F88;
    case 0x80653F8Cu: goto label_80653F8C;
    case 0x80653F90u: goto label_80653F90;
    case 0x80653F94u: goto label_80653F94;
    case 0x80653F98u: goto label_80653F98;
    case 0x80653F9Cu: goto label_80653F9C;
    default: return;
    }
label_806531C0:
    ctx->pc = 0x806531C0u;
    ctx->downcount -= 2;
    // 806531C0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806531C4:
    ctx->pc = 0x806531C4u;
    // 806531C4: bl      0x8026F6AC
    {
            ctx->lr = 0x806531C8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_806531C8:
    ctx->pc = 0x806531C8u;
    ctx->downcount -= 1;
    // 806531C8: bl      0x8025EC94
    {
            ctx->lr = 0x806531CCu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_806531CC:
    ctx->pc = 0x806531CCu;
    ctx->downcount -= 11;
    // 806531CC: add   r4, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_806531D0:
    ctx->pc = 0x806531D0u;
    // 806531D0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806531D4:
    ctx->pc = 0x806531D4u;
    // 806531D4: lwz     r5, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_806531D8:
    ctx->pc = 0x806531D8u;
    // 806531D8: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_806531DC:
    ctx->pc = 0x806531DCu;
    // 806531DC: lbz     r0, 187(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_806531E0:
    ctx->pc = 0x806531E0u;
    // 806531E0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_806531E4:
    ctx->pc = 0x806531E4u;
    // 806531E4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_806531E8:
    ctx->pc = 0x806531E8u;
    // 806531E8: stb     r0, 187(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_806531EC:
    ctx->pc = 0x806531ECu;
    // 806531EC: lbz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_806531F0:
    ctx->pc = 0x806531F0u;
    // 806531F0: stb     r0, 274(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(274);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_806531F4:
    ctx->pc = 0x806531F4u;
    // 806531F4: bl      0x8026FEDC
    {
            ctx->lr = 0x806531F8u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_806531F8:
    ctx->pc = 0x806531F8u;
    ctx->downcount -= 1;
    // 806531F8: b       0x806532BC
    {
            goto label_806532BC;
    }

label_806531FC:
    ctx->pc = 0x806531FCu;
    ctx->downcount -= 2;
    // 806531FC: cmplwi  r0, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653200:
    ctx->pc = 0x80653200u;
    // 80653200: bc    4, 2, 0x806532BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806532BC;
        }
    }

label_80653204:
    ctx->pc = 0x80653204u;
    ctx->downcount -= 4;
    // 80653204: addi    r0, r3, 255
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(255);

label_80653208:
    ctx->pc = 0x80653208u;
    // 80653208: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8065320C:
    ctx->pc = 0x8065320Cu;
    // 8065320C: cmplwi  r0, 0x0001
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

label_80653210:
    ctx->pc = 0x80653210u;
    // 80653210: bc    12, 1, 0x806532BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806532BC;
        }
    }

label_80653214:
    ctx->pc = 0x80653214u;
    ctx->downcount -= 5;
    // 80653214: addi    r25, r31, 2
    ctx->gpr[25] = ctx->gpr[31] + (u32)(s32)(2);

label_80653218:
    ctx->pc = 0x80653218u;
    // 80653218: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065321C:
    ctx->pc = 0x8065321Cu;
    // 8065321C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80653220:
    ctx->pc = 0x80653220u;
    // 80653220: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80653224:
    ctx->pc = 0x80653224u;
    // 80653224: bl      0x8026FEF0
    {
            ctx->lr = 0x80653228u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80653228:
    ctx->pc = 0x80653228u;
    ctx->downcount -= 3;
    // 80653228: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8065322C:
    ctx->pc = 0x8065322Cu;
    // 8065322C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653230:
    ctx->pc = 0x80653230u;
    // 80653230: bl      0x8026F6AC
    {
            ctx->lr = 0x80653234u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80653234:
    ctx->pc = 0x80653234u;
    ctx->downcount -= 1;
    // 80653234: bl      0x8025EC94
    {
            ctx->lr = 0x80653238u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80653238:
    ctx->pc = 0x80653238u;
    ctx->downcount -= 3;
    // 80653238: lbz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8065323C:
    ctx->pc = 0x8065323Cu;
    // 8065323C: stb     r0, 274(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(274);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653240:
    ctx->pc = 0x80653240u;
    // 80653240: b       0x806532BC
    {
            goto label_806532BC;
    }

label_80653244:
    ctx->pc = 0x80653244u;
    ctx->downcount -= 2;
    // 80653244: cmplwi  r3, 0x0001
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

label_80653248:
    ctx->pc = 0x80653248u;
    // 80653248: bc    4, 2, 0x80653294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653294;
        }
    }

label_8065324C:
    ctx->pc = 0x8065324Cu;
    ctx->downcount -= 3;
    // 8065324C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653250:
    ctx->pc = 0x80653250u;
    // 80653250: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653254:
    ctx->pc = 0x80653254u;
    // 80653254: bl      0x8026F6AC
    {
            ctx->lr = 0x80653258u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80653258:
    ctx->pc = 0x80653258u;
    ctx->downcount -= 1;
    // 80653258: bl      0x8025EAF8
    {
            ctx->lr = 0x8065325Cu;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_8065325C:
    ctx->pc = 0x8065325Cu;
    ctx->downcount -= 2;
    // 8065325C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653260:
    ctx->pc = 0x80653260u;
    // 80653260: bc    12, 2, 0x806532BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806532BC;
        }
    }

label_80653264:
    ctx->pc = 0x80653264u;
    ctx->downcount -= 5;
    // 80653264: addi    r25, r31, 4
    ctx->gpr[25] = ctx->gpr[31] + (u32)(s32)(4);

label_80653268:
    ctx->pc = 0x80653268u;
    // 80653268: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065326C:
    ctx->pc = 0x8065326Cu;
    // 8065326C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80653270:
    ctx->pc = 0x80653270u;
    // 80653270: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80653274:
    ctx->pc = 0x80653274u;
    // 80653274: bl      0x8026FEF0
    {
            ctx->lr = 0x80653278u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80653278:
    ctx->pc = 0x80653278u;
    ctx->downcount -= 3;
    // 80653278: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8065327C:
    ctx->pc = 0x8065327Cu;
    // 8065327C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653280:
    ctx->pc = 0x80653280u;
    // 80653280: bl      0x8026F6AC
    {
            ctx->lr = 0x80653284u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80653284:
    ctx->pc = 0x80653284u;
    ctx->downcount -= 1;
    // 80653284: bl      0x8025EC94
    {
            ctx->lr = 0x80653288u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80653288:
    ctx->pc = 0x80653288u;
    ctx->downcount -= 3;
    // 80653288: stb     r27, 274(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(274);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_8065328C:
    ctx->pc = 0x8065328Cu;
    // 8065328C: stb     r27, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_80653290:
    ctx->pc = 0x80653290u;
    // 80653290: b       0x806532BC
    {
            goto label_806532BC;
    }

label_80653294:
    ctx->pc = 0x80653294u;
    ctx->downcount -= 2;
    // 80653294: cmplwi  r3, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653298:
    ctx->pc = 0x80653298u;
    // 80653298: bc    4, 2, 0x806532BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806532BC;
        }
    }

label_8065329C:
    ctx->pc = 0x8065329Cu;
    ctx->downcount -= 3;
    // 8065329C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806532A0:
    ctx->pc = 0x806532A0u;
    // 806532A0: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_806532A4:
    ctx->pc = 0x806532A4u;
    // 806532A4: bl      0x8026F6AC
    {
            ctx->lr = 0x806532A8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_806532A8:
    ctx->pc = 0x806532A8u;
    ctx->downcount -= 1;
    // 806532A8: bl      0x8025EAF8
    {
            ctx->lr = 0x806532ACu;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_806532AC:
    ctx->pc = 0x806532ACu;
    ctx->downcount -= 2;
    // 806532AC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806532B0:
    ctx->pc = 0x806532B0u;
    // 806532B0: bc    12, 2, 0x806532BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806532BC;
        }
    }

label_806532B4:
    ctx->pc = 0x806532B4u;
    ctx->downcount -= 2;
    // 806532B4: stb     r28, 274(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(274);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_806532B8:
    ctx->pc = 0x806532B8u;
    // 806532B8: stb     r28, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_806532BC:
    ctx->pc = 0x806532BCu;
    ctx->downcount -= 5;
    // 806532BC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_806532C0:
    ctx->pc = 0x806532C0u;
    // 806532C0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_806532C4:
    ctx->pc = 0x806532C4u;
    // 806532C4: lbz     r0, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_806532C8:
    ctx->pc = 0x806532C8u;
    // 806532C8: cmpw    r31, r0
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

label_806532CC:
    ctx->pc = 0x806532CCu;
    // 806532CC: bc    12, 0, 0x80653180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80653180u;
            return;
        }
    }

label_806532D0:
    ctx->pc = 0x806532D0u;
    ctx->downcount -= 3;
    // 806532D0: lbz     r0, 274(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_806532D4:
    ctx->pc = 0x806532D4u;
    // 806532D4: cmpwi   r0, 0
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

label_806532D8:
    ctx->pc = 0x806532D8u;
    // 806532D8: bc    4, 2, 0x806532FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806532FC;
        }
    }

label_806532DC:
    ctx->pc = 0x806532DCu;
    ctx->downcount -= 3;
    // 806532DC: lbz     r0, 275(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(275);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_806532E0:
    ctx->pc = 0x806532E0u;
    // 806532E0: cmpwi   r0, 0
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

label_806532E4:
    ctx->pc = 0x806532E4u;
    // 806532E4: bc    4, 2, 0x806532FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806532FC;
        }
    }

label_806532E8:
    ctx->pc = 0x806532E8u;
    ctx->downcount -= 6;
    // 806532E8: lwz     r12, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_806532EC:
    ctx->pc = 0x806532ECu;
    // 806532EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_806532F0:
    ctx->pc = 0x806532F0u;
    // 806532F0: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_806532F4:
    ctx->pc = 0x806532F4u;
    // 806532F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_806532F8:
    ctx->pc = 0x806532F8u;
    // 806532F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x806532FCu;
            ctx->pc = target;
            return;
        }
    }

label_806532FC:
    ctx->pc = 0x806532FCu;
    ctx->downcount -= 16;
    // 806532FC: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80653300:
    ctx->pc = 0x80653300u;
    // 80653300: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653304:
    ctx->pc = 0x80653304u;
    // 80653304: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653308:
    ctx->pc = 0x80653308u;
    // 80653308: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8065330C:
    ctx->pc = 0x8065330Cu;
    // 8065330C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653310:
    ctx->pc = 0x80653310u;
    ctx->downcount -= 18;
    // 80653310: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80653314:
    ctx->pc = 0x80653314u;
    // 80653314: stb     r0, 273(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(273);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653318:
    ctx->pc = 0x80653318u;
    // 80653318: lwz     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8065331C:
    ctx->pc = 0x8065331Cu;
    // 8065331C: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653320:
    ctx->pc = 0x80653320u;
    // 80653320: stb     r0, 275(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(275);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653324:
    ctx->pc = 0x80653324u;
    // 80653324: stb     r0, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653328:
    ctx->pc = 0x80653328u;
    // 80653328: lbz     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8065332C:
    ctx->pc = 0x8065332Cu;
    // 8065332C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80653330:
    ctx->pc = 0x80653330u;
    // 80653330: stb     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653334:
    ctx->pc = 0x80653334u;
    // 80653334: lwz     r4, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653338:
    ctx->pc = 0x80653338u;
    // 80653338: lbz     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8065333C:
    ctx->pc = 0x8065333Cu;
    // 8065333C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80653340:
    ctx->pc = 0x80653340u;
    // 80653340: stb     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80653344:
    ctx->pc = 0x80653344u;
    // 80653344: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80653348:
    ctx->pc = 0x80653348u;
    // 80653348: lwz     r12, 284(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(284);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8065334C:
    ctx->pc = 0x8065334Cu;
    // 8065334C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80653350:
    ctx->pc = 0x80653350u;
    // 80653350: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80653354:
    ctx->pc = 0x80653354u;
    ctx->downcount -= 15;
    // 80653354: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653358:
    ctx->pc = 0x80653358u;
    // 80653358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8065335C:
    ctx->pc = 0x8065335Cu;
    // 8065335C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80653360:
    ctx->pc = 0x80653360u;
    // 80653360: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80653364:
    ctx->pc = 0x80653364u;
    // 80653364: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653368:
    ctx->pc = 0x80653368u;
    // 80653368: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8065336C:
    ctx->pc = 0x8065336Cu;
    // 8065336C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653370:
    ctx->pc = 0x80653370u;
    // 80653370: lis     r31, -32663
    ctx->gpr[31] = ((u32)(s32)(-32663) << 16);

label_80653374:
    ctx->pc = 0x80653374u;
    // 80653374: addi    r31, r31, -14272
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-14272);

label_80653378:
    ctx->pc = 0x80653378u;
    // 80653378: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8065337C:
    ctx->pc = 0x8065337Cu;
    // 8065337C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653380:
    ctx->pc = 0x80653380u;
    // 80653380: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80653384:
    ctx->pc = 0x80653384u;
    // 80653384: addi    r5, r31, 73
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(73);

label_80653388:
    ctx->pc = 0x80653388u;
    // 80653388: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8065338C:
    ctx->pc = 0x8065338Cu;
    // 8065338C: bl      0x802703A8
    {
            ctx->lr = 0x80653390u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80653390:
    ctx->pc = 0x80653390u;
    ctx->downcount -= 6;
    // 80653390: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653394:
    ctx->pc = 0x80653394u;
    // 80653394: addi    r5, r31, 99
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(99);

label_80653398:
    ctx->pc = 0x80653398u;
    // 80653398: addi    r6, r31, 102
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(102);

label_8065339C:
    ctx->pc = 0x8065339Cu;
    // 8065339C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_806533A0:
    ctx->pc = 0x806533A0u;
    // 806533A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_806533A4:
    ctx->pc = 0x806533A4u;
    // 806533A4: bl      0x8027035C
    {
            ctx->lr = 0x806533A8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_806533A8:
    ctx->pc = 0x806533A8u;
    ctx->downcount -= 6;
    // 806533A8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806533AC:
    ctx->pc = 0x806533ACu;
    // 806533AC: addi    r5, r31, 99
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(99);

label_806533B0:
    ctx->pc = 0x806533B0u;
    // 806533B0: addi    r6, r31, 113
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(113);

label_806533B4:
    ctx->pc = 0x806533B4u;
    // 806533B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_806533B8:
    ctx->pc = 0x806533B8u;
    // 806533B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_806533BC:
    ctx->pc = 0x806533BCu;
    // 806533BC: bl      0x8027035C
    {
            ctx->lr = 0x806533C0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_806533C0:
    ctx->pc = 0x806533C0u;
    ctx->downcount -= 6;
    // 806533C0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806533C4:
    ctx->pc = 0x806533C4u;
    // 806533C4: addi    r5, r31, 124
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(124);

label_806533C8:
    ctx->pc = 0x806533C8u;
    // 806533C8: addi    r6, r31, 102
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(102);

label_806533CC:
    ctx->pc = 0x806533CCu;
    // 806533CC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_806533D0:
    ctx->pc = 0x806533D0u;
    // 806533D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_806533D4:
    ctx->pc = 0x806533D4u;
    // 806533D4: bl      0x8027035C
    {
            ctx->lr = 0x806533D8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_806533D8:
    ctx->pc = 0x806533D8u;
    ctx->downcount -= 6;
    // 806533D8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806533DC:
    ctx->pc = 0x806533DCu;
    // 806533DC: addi    r5, r31, 124
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(124);

label_806533E0:
    ctx->pc = 0x806533E0u;
    // 806533E0: addi    r6, r31, 113
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(113);

label_806533E4:
    ctx->pc = 0x806533E4u;
    // 806533E4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_806533E8:
    ctx->pc = 0x806533E8u;
    // 806533E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_806533EC:
    ctx->pc = 0x806533ECu;
    // 806533EC: bl      0x8027035C
    {
            ctx->lr = 0x806533F0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_806533F0:
    ctx->pc = 0x806533F0u;
    ctx->downcount -= 6;
    // 806533F0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_806533F4:
    ctx->pc = 0x806533F4u;
    // 806533F4: addi    r5, r31, 128
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(128);

label_806533F8:
    ctx->pc = 0x806533F8u;
    // 806533F8: addi    r6, r31, 102
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(102);

label_806533FC:
    ctx->pc = 0x806533FCu;
    // 806533FC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80653400:
    ctx->pc = 0x80653400u;
    // 80653400: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80653404:
    ctx->pc = 0x80653404u;
    // 80653404: bl      0x8027035C
    {
            ctx->lr = 0x80653408u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80653408:
    ctx->pc = 0x80653408u;
    ctx->downcount -= 6;
    // 80653408: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065340C:
    ctx->pc = 0x8065340Cu;
    // 8065340C: addi    r5, r31, 128
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(128);

label_80653410:
    ctx->pc = 0x80653410u;
    // 80653410: addi    r6, r31, 113
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(113);

label_80653414:
    ctx->pc = 0x80653414u;
    // 80653414: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80653418:
    ctx->pc = 0x80653418u;
    // 80653418: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8065341C:
    ctx->pc = 0x8065341Cu;
    // 8065341C: bl      0x8027035C
    {
            ctx->lr = 0x80653420u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80653420:
    ctx->pc = 0x80653420u;
    ctx->downcount -= 4;
    // 80653420: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653424:
    ctx->pc = 0x80653424u;
    // 80653424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80653428:
    ctx->pc = 0x80653428u;
    // 80653428: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8065342C:
    ctx->pc = 0x8065342Cu;
    // 8065342C: bl      0x80270194
    {
            ctx->lr = 0x80653430u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80653430:
    ctx->pc = 0x80653430u;
    ctx->downcount -= 4;
    // 80653430: lis     r31, -32657
    ctx->gpr[31] = ((u32)(s32)(-32657) << 16);

label_80653434:
    ctx->pc = 0x80653434u;
    // 80653434: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653438:
    ctx->pc = 0x80653438u;
    // 80653438: lwz     r4, -488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8065343C:
    ctx->pc = 0x8065343Cu;
    // 8065343C: bl      0x8026F970
    {
            ctx->lr = 0x80653440u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80653440:
    ctx->pc = 0x80653440u;
    ctx->downcount -= 5;
    // 80653440: stw     r3, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653444:
    ctx->pc = 0x80653444u;
    // 80653444: addi    r31, r31, -488
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-488);

label_80653448:
    ctx->pc = 0x80653448u;
    // 80653448: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065344C:
    ctx->pc = 0x8065344Cu;
    // 8065344C: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653450:
    ctx->pc = 0x80653450u;
    // 80653450: bl      0x8026F970
    {
            ctx->lr = 0x80653454u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80653454:
    ctx->pc = 0x80653454u;
    ctx->downcount -= 4;
    // 80653454: stw     r3, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653458:
    ctx->pc = 0x80653458u;
    // 80653458: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065345C:
    ctx->pc = 0x8065345Cu;
    // 8065345C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653460:
    ctx->pc = 0x80653460u;
    // 80653460: bl      0x8026F970
    {
            ctx->lr = 0x80653464u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80653464:
    ctx->pc = 0x80653464u;
    ctx->downcount -= 4;
    // 80653464: stw     r3, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653468:
    ctx->pc = 0x80653468u;
    // 80653468: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8065346C:
    ctx->pc = 0x8065346Cu;
    // 8065346C: lwz     r4, -17240(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653470:
    ctx->pc = 0x80653470u;
    // 80653470: bl      0x8026F970
    {
            ctx->lr = 0x80653474u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80653474:
    ctx->pc = 0x80653474u;
    ctx->downcount -= 5;
    // 80653474: stw     r3, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653478:
    ctx->pc = 0x80653478u;
    // 80653478: addi    r4, r13, -17240
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-17240);

label_8065347C:
    ctx->pc = 0x8065347Cu;
    // 8065347C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80653480:
    ctx->pc = 0x80653480u;
    // 80653480: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653484:
    ctx->pc = 0x80653484u;
    // 80653484: bl      0x8026F970
    {
            ctx->lr = 0x80653488u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80653488:
    ctx->pc = 0x80653488u;
    ctx->downcount -= 18;
    // 80653488: stw     r3, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8065348C:
    ctx->pc = 0x8065348Cu;
    // 8065348C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80653490:
    ctx->pc = 0x80653490u;
    // 80653490: lwz     r4, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80653494:
    ctx->pc = 0x80653494u;
    // 80653494: lfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x80653494u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653498:
    ctx->pc = 0x80653498u;
    // 80653498: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80653498u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8065349C:
    ctx->pc = 0x8065349Cu;
    // 8065349C: lfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x8065349Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_806534A0:
    ctx->pc = 0x806534A0u;
    // 806534A0: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x806534A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_806534A4:
    ctx->pc = 0x806534A4u;
    // 806534A4: lfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x806534A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_806534A8:
    ctx->pc = 0x806534A8u;
    // 806534A8: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x806534A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_806534AC:
    ctx->pc = 0x806534ACu;
    // 806534AC: stb     r0, 273(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(273);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_806534B0:
    ctx->pc = 0x806534B0u;
    // 806534B0: stb     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_806534B4:
    ctx->pc = 0x806534B4u;
    // 806534B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_806534B8:
    ctx->pc = 0x806534B8u;
    // 806534B8: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_806534BC:
    ctx->pc = 0x806534BCu;
    // 806534BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_806534C0:
    ctx->pc = 0x806534C0u;
    // 806534C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_806534C4:
    ctx->pc = 0x806534C4u;
    // 806534C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_806534C8:
    ctx->pc = 0x806534C8u;
    // 806534C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806534CC:
    ctx->pc = 0x806534CCu;
    ctx->downcount -= 8;
    // 806534CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_806534D0:
    ctx->pc = 0x806534D0u;
    // 806534D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_806534D4:
    ctx->pc = 0x806534D4u;
    // 806534D4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_806534D8:
    ctx->pc = 0x806534D8u;
    // 806534D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_806534DC:
    ctx->pc = 0x806534DCu;
    // 806534DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806534E0:
    ctx->pc = 0x806534E0u;
    // 806534E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_806534E4:
    ctx->pc = 0x806534E4u;
    // 806534E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_806534E8:
    ctx->pc = 0x806534E8u;
    // 806534E8: bl      0x803715C0
    {
            ctx->lr = 0x806534ECu;
            ctx->pc = 0x803715C0u;
            return;
    }

label_806534EC:
    ctx->pc = 0x806534ECu;
    ctx->downcount -= 16;
    // 806534EC: lis     r6, -32657
    ctx->gpr[6] = ((u32)(s32)(-32657) << 16);

label_806534F0:
    ctx->pc = 0x806534F0u;
    // 806534F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_806534F4:
    ctx->pc = 0x806534F4u;
    // 806534F4: addi    r6, r6, -472
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-472);

label_806534F8:
    ctx->pc = 0x806534F8u;
    // 806534F8: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_806534FC:
    ctx->pc = 0x806534FCu;
    // 806534FC: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80653500:
    ctx->pc = 0x80653500u;
    // 80653500: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_80653504:
    ctx->pc = 0x80653504u;
    // 80653504: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80653508:
    ctx->pc = 0x80653508u;
    // 80653508: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8065350C:
    ctx->pc = 0x8065350Cu;
    // 8065350C: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80653510:
    ctx->pc = 0x80653510u;
    // 80653510: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653514:
    ctx->pc = 0x80653514u;
    // 80653514: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653518:
    ctx->pc = 0x80653518u;
    // 80653518: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8065351C:
    ctx->pc = 0x8065351Cu;
    // 8065351C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653520:
    ctx->pc = 0x80653520u;
    // 80653520: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653524:
    ctx->pc = 0x80653524u;
    // 80653524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653528:
    ctx->pc = 0x80653528u;
    ctx->downcount -= 18;
    // 80653528: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8065352C:
    ctx->pc = 0x8065352Cu;
    // 8065352C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653530:
    // 80653530: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653534:
    ctx->pc = 0x80653534u;
    // 80653534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653538:
    ctx->pc = 0x80653538u;
    // 80653538: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8065353C:
    // 8065353C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653540:
    // 80653540: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80653544:
    // 80653544: bc    12, 2, 0x80653578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653578;
        }
    }

label_80653548:
    ctx->downcount -= 1;
    // 80653548: bc    12, 2, 0x80653568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653568;
        }
    }

label_8065354C:
    ctx->downcount -= 1;
    // 8065354C: bc    12, 2, 0x80653568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653568;
        }
    }

label_80653550:
    ctx->downcount -= 3;
    // 80653550: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80653554:
    // 80653554: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80653558:
    // 80653558: bl      0x801F5C24
    {
            ctx->lr = 0x8065355Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8065355C:
    ctx->downcount -= 3;
    // 8065355C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653560:
    // 80653560: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80653564:
    // 80653564: bl      0x801F9C70
    {
            ctx->lr = 0x80653568u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80653568:
    ctx->downcount -= 2;
    // 80653568: cmpwi   r31, 0
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

label_8065356C:
    // 8065356C: bc    4, 1, 0x80653578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653578;
        }
    }

label_80653570:
    ctx->downcount -= 2;
    // 80653570: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653574:
    // 80653574: bl      0x801C1C90
    {
            ctx->lr = 0x80653578u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80653578:
    ctx->downcount -= 17;
    // 80653578: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8065357C:
    ctx->pc = 0x8065357Cu;
    // 8065357C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80653580:
    ctx->pc = 0x80653580u;
    // 80653580: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653584:
    ctx->pc = 0x80653584u;
    // 80653584: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653588:
    // 80653588: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8065358C:
    ctx->pc = 0x8065358Cu;
    // 8065358C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653590:
    ctx->downcount -= 2;
    // 80653590: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80653594:
    // 80653594: b       0x80653528
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653528u;
                return;
            }
            goto label_80653528;
    }

label_80653598:
    ctx->downcount -= 2;
    // 80653598: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8065359C:
    // 8065359C: b       0x80653528
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653528u;
                return;
            }
            goto label_80653528;
    }

label_806535A0:
    ctx->pc = 0x806535A0u;
    ctx->downcount -= 7;
    // 806535A0: lwz     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_806535A4:
    ctx->pc = 0x806535A4u;
    // 806535A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_806535A8:
    ctx->pc = 0x806535A8u;
    // 806535A8: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_806535AC:
    ctx->pc = 0x806535ACu;
    // 806535AC: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_806535B0:
    ctx->pc = 0x806535B0u;
    // 806535B0: stw     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_806535B4:
    ctx->pc = 0x806535B4u;
    // 806535B4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806535B8:
    ctx->pc = 0x806535B8u;
    // 806535B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806535BC:
    ctx->pc = 0x806535BCu;
    ctx->downcount -= 3;
    // 806535BC: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_806535C0:
    ctx->pc = 0x806535C0u;
    // 806535C0: cmpwi   r0, 0
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

label_806535C4:
    ctx->pc = 0x806535C4u;
    // 806535C4: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806535C8:
    ctx->pc = 0x806535C8u;
    ctx->downcount -= 6;
    // 806535C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_806535CC:
    ctx->pc = 0x806535CCu;
    // 806535CC: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806535D0:
    ctx->pc = 0x806535D0u;
    // 806535D0: lwz     r5, 144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_806535D4:
    ctx->pc = 0x806535D4u;
    // 806535D4: addi    r0, r5, -2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-2);

label_806535D8:
    ctx->pc = 0x806535D8u;
    // 806535D8: cmplwi  r0, 0x0001
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

label_806535DC:
    ctx->pc = 0x806535DCu;
    // 806535DC: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806535E0:
    ctx->pc = 0x806535E0u;
    ctx->downcount -= 89;
    // 806535E0: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_806535E4:
    ctx->pc = 0x806535E4u;
    // 806535E4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_806535E8:
    ctx->pc = 0x806535E8u;
    // 806535E8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_806535EC:
    ctx->pc = 0x806535ECu;
    // 806535EC: divw   r6, r5, r3
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_806535F0:
    ctx->pc = 0x806535F0u;
    // 806535F0: mulli   r3, r6, 60
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)60);

label_806535F4:
    ctx->pc = 0x806535F4u;
    // 806535F4: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_806535F8:
    ctx->pc = 0x806535F8u;
    // 806535F8: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_806535FC:
    ctx->pc = 0x806535FCu;
    // 806535FC: cmpw    r6, r0
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

label_80653600:
    ctx->pc = 0x80653600u;
    // 80653600: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653604:
    ctx->pc = 0x80653604u;
    ctx->downcount -= 4;
    // 80653604: lwz     r3, -8496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653608:
    ctx->pc = 0x80653608u;
    // 80653608: lwz     r4, 284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(284);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8065360C:
    ctx->pc = 0x8065360Cu;
    // 8065360C: lwz     r3, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653610:
    ctx->pc = 0x80653610u;
    // 80653610: b       0x8062C234
    {
            ctx->pc = 0x8062C234u;
            return;
    }

label_80653614:
    ctx->pc = 0x80653614u;
    ctx->downcount -= 1;
    // 80653614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653618:
    ctx->pc = 0x80653618u;
    ctx->downcount -= 5;
    // 80653618: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8065361C:
    ctx->pc = 0x8065361Cu;
    // 8065361C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653620:
    ctx->pc = 0x80653620u;
    // 80653620: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653624:
    ctx->pc = 0x80653624u;
    // 80653624: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80653628:
    ctx->pc = 0x80653628u;
    // 80653628: bl      0x80007854
    {
            ctx->lr = 0x8065362Cu;
            ctx->pc = 0x80007854u;
            return;
    }

label_8065362C:
    ctx->pc = 0x8065362Cu;
    ctx->downcount -= 7;
    // 8065362C: lwz     r31, 144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(144);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653630:
    ctx->pc = 0x80653630u;
    // 80653630: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653634:
    ctx->pc = 0x80653634u;
    // 80653634: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80653638:
    ctx->pc = 0x80653638u;
    // 80653638: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8065363C:
    ctx->pc = 0x8065363Cu;
    // 8065363C: addi    r0, r31, -2
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-2);

label_80653640:
    ctx->pc = 0x80653640u;
    // 80653640: cmplwi  r0, 0x0001
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

label_80653644:
    ctx->pc = 0x80653644u;
    // 80653644: bc    12, 1, 0x80653718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653718;
        }
    }

label_80653648:
    ctx->pc = 0x80653648u;
    ctx->downcount -= 4;
    // 80653648: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8065364C:
    ctx->pc = 0x8065364Cu;
    // 8065364C: lwz     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80653650:
    ctx->pc = 0x80653650u;
    // 80653650: cmpwi   r0, 0
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

label_80653654:
    ctx->pc = 0x80653654u;
    // 80653654: bc    4, 2, 0x80653668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653668;
        }
    }

label_80653658:
    ctx->pc = 0x80653658u;
    ctx->downcount -= 2;
    // 80653658: cmpwi   r6, 0
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

label_8065365C:
    ctx->pc = 0x8065365Cu;
    // 8065365C: bc    4, 1, 0x80653668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653668;
        }
    }

label_80653660:
    ctx->pc = 0x80653660u;
    ctx->downcount -= 2;
    // 80653660: addi    r0, r6, -1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1);

label_80653664:
    ctx->pc = 0x80653664u;
    // 80653664: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653668:
    ctx->pc = 0x80653668u;
    ctx->downcount -= 89;
    // 80653668: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8065366C:
    ctx->pc = 0x8065366Cu;
    // 8065366C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80653670:
    ctx->pc = 0x80653670u;
    // 80653670: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80653674:
    ctx->pc = 0x80653674u;
    // 80653674: cmpwi   r31, 2
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

label_80653678:
    ctx->pc = 0x80653678u;
    // 80653678: divw   r8, r7, r3
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8065367C:
    ctx->pc = 0x8065367Cu;
    // 8065367C: mulli   r3, r8, 60
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[8] * (s64)(s32)60);

label_80653680:
    ctx->pc = 0x80653680u;
    // 80653680: subf   r3, r3, r7
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_80653684:
    ctx->pc = 0x80653684u;
    // 80653684: divw   r30, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[30] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80653688:
    ctx->pc = 0x80653688u;
    // 80653688: bc    4, 2, 0x806536A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806536A4;
        }
    }

label_8065368C:
    ctx->pc = 0x8065368Cu;
    ctx->downcount -= 6;
    // 8065368C: lwz     r3, -8368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653690:
    ctx->pc = 0x80653690u;
    // 80653690: rlwinm r0, r30, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 5u) & 0xFFFFFFE0u;
    }

label_80653694:
    ctx->pc = 0x80653694u;
    // 80653694: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80653698:
    ctx->pc = 0x80653698u;
    // 80653698: addi    r0, r3, 320
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(320);

label_8065369C:
    ctx->pc = 0x8065369Cu;
    // 8065369C: stw     r0, 536(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806536A0:
    ctx->pc = 0x806536A0u;
    // 806536A0: b       0x806536B4
    {
            goto label_806536B4;
    }

label_806536A4:
    ctx->pc = 0x806536A4u;
    ctx->downcount -= 4;
    // 806536A4: lwz     r3, -8368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806536A8:
    ctx->pc = 0x806536A8u;
    // 806536A8: rlwinm r0, r8, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 5u) & 0xFFFFFFE0u;
    }

label_806536AC:
    ctx->pc = 0x806536ACu;
    // 806536AC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_806536B0:
    ctx->pc = 0x806536B0u;
    // 806536B0: stw     r0, 536(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806536B4:
    ctx->pc = 0x806536B4u;
    ctx->downcount -= 88;
    // 806536B4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_806536B8:
    ctx->pc = 0x806536B8u;
    // 806536B8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_806536BC:
    ctx->pc = 0x806536BCu;
    // 806536BC: divw   r5, r6, r3
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_806536C0:
    ctx->pc = 0x806536C0u;
    // 806536C0: mulli   r3, r5, 60
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)60);

label_806536C4:
    ctx->pc = 0x806536C4u;
    // 806536C4: cmpw    r8, r5
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806536C8:
    ctx->pc = 0x806536C8u;
    // 806536C8: subf   r3, r3, r6
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_806536CC:
    ctx->pc = 0x806536CCu;
    // 806536CC: divw   r26, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[26] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_806536D0:
    ctx->pc = 0x806536D0u;
    // 806536D0: bc    12, 2, 0x806536E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806536E0;
        }
    }

label_806536D4:
    ctx->pc = 0x806536D4u;
    ctx->downcount -= 3;
    // 806536D4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806536D8:
    ctx->pc = 0x806536D8u;
    // 806536D8: li      r4, 793
    ctx->gpr[4] = (u32)(s32)(793);

label_806536DC:
    ctx->pc = 0x806536DCu;
    // 806536DC: bl      0x802B72DC
    {
            ctx->lr = 0x806536E0u;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_806536E0:
    ctx->pc = 0x806536E0u;
    ctx->downcount -= 2;
    // 806536E0: cmpw    r30, r26
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

label_806536E4:
    ctx->pc = 0x806536E4u;
    // 806536E4: bc    12, 2, 0x80653718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653718;
        }
    }

label_806536E8:
    ctx->pc = 0x806536E8u;
    ctx->downcount -= 5;
    // 806536E8: rlwinm r3, r30, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 1u) & 0x00000001u;
    }

label_806536EC:
    ctx->pc = 0x806536ECu;
    // 806536EC: rlwinm r0, r30, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000001u;
    }

label_806536F0:
    ctx->pc = 0x806536F0u;
    // 806536F0: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_806536F4:
    ctx->pc = 0x806536F4u;
    // 806536F4: subf.   r0, r3, r0
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

label_806536F8:
    ctx->pc = 0x806536F8u;
    // 806536F8: bc    4, 2, 0x8065370C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8065370C;
        }
    }

label_806536FC:
    ctx->pc = 0x806536FCu;
    ctx->downcount -= 3;
    // 806536FC: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653700:
    ctx->pc = 0x80653700u;
    // 80653700: li      r4, 791
    ctx->gpr[4] = (u32)(s32)(791);

label_80653704:
    ctx->pc = 0x80653704u;
    // 80653704: bl      0x802B72DC
    {
            ctx->lr = 0x80653708u;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_80653708:
    ctx->pc = 0x80653708u;
    ctx->downcount -= 1;
    // 80653708: b       0x80653718
    {
            goto label_80653718;
    }

label_8065370C:
    ctx->pc = 0x8065370Cu;
    ctx->downcount -= 3;
    // 8065370C: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653710:
    ctx->pc = 0x80653710u;
    // 80653710: li      r4, 792
    ctx->gpr[4] = (u32)(s32)(792);

label_80653714:
    ctx->pc = 0x80653714u;
    // 80653714: bl      0x802B72DC
    {
            ctx->lr = 0x80653718u;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_80653718:
    ctx->pc = 0x80653718u;
    ctx->downcount -= 2;
    // 80653718: cmpwi   r31, 4
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

label_8065371C:
    ctx->pc = 0x8065371Cu;
    // 8065371C: bc    4, 2, 0x806537C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806537C0;
        }
    }

label_80653720:
    ctx->pc = 0x80653720u;
    ctx->downcount -= 3;
    // 80653720: lwz     r3, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653724:
    ctx->pc = 0x80653724u;
    // 80653724: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653728:
    ctx->pc = 0x80653728u;
    // 80653728: bc    4, 1, 0x806537C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806537C0;
        }
    }

label_8065372C:
    ctx->pc = 0x8065372Cu;
    ctx->downcount -= 3;
    // 8065372C: lwz     r0, -17216(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653730:
    ctx->pc = 0x80653730u;
    // 80653730: cmpw    r3, r0
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

label_80653734:
    ctx->pc = 0x80653734u;
    // 80653734: bc    12, 1, 0x806537C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806537C0;
        }
    }

label_80653738:
    ctx->pc = 0x80653738u;
    ctx->downcount -= 3;
    // 80653738: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8065373C:
    ctx->pc = 0x8065373Cu;
    // 8065373C: cmpwi   r0, 0
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

label_80653740:
    ctx->pc = 0x80653740u;
    // 80653740: bc    4, 2, 0x80653760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653760;
        }
    }

label_80653744:
    ctx->pc = 0x80653744u;
    ctx->downcount -= 2;
    // 80653744: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653748:
    ctx->pc = 0x80653748u;
    // 80653748: bl      0x8023E91C
    {
            ctx->lr = 0x8065374Cu;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_8065374C:
    ctx->pc = 0x8065374Cu;
    ctx->downcount -= 5;
    // 8065374C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80653750:
    ctx->pc = 0x80653750u;
    // 80653750: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653754:
    ctx->pc = 0x80653754u;
    // 80653754: li      r4, 789
    ctx->gpr[4] = (u32)(s32)(789);

label_80653758:
    ctx->pc = 0x80653758u;
    // 80653758: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8065375C:
    ctx->pc = 0x8065375Cu;
    // 8065375C: bl      0x802B72DC
    {
            ctx->lr = 0x80653760u;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_80653760:
    ctx->pc = 0x80653760u;
    ctx->downcount -= 4;
    // 80653760: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80653764:
    ctx->pc = 0x80653764u;
    // 80653764: addi    r4, r28, 8
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(8);

label_80653768:
    ctx->pc = 0x80653768u;
    // 80653768: addi    r5, r28, 32
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(32);

label_8065376C:
    ctx->pc = 0x8065376Cu;
    // 8065376C: bl      0x80327F60
    {
            ctx->lr = 0x80653770u;
            ctx->pc = 0x80327F60u;
            return;
    }

label_80653770:
    ctx->pc = 0x80653770u;
    ctx->downcount -= 3;
    // 80653770: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653774:
    ctx->pc = 0x80653774u;
    // 80653774: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80653778:
    ctx->pc = 0x80653778u;
    // 80653778: bl      0x8023E47C
    {
            ctx->lr = 0x8065377Cu;
            ctx->pc = 0x8023E47Cu;
            return;
    }

label_8065377C:
    ctx->pc = 0x8065377Cu;
    ctx->downcount -= 10;
    // 8065377C: lfs     f1, 264(r28)
    if (!ppc_fp_available_inline(ctx, 0x8065377Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80653780:
    ctx->pc = 0x80653780u;
    // 80653780: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80653784:
    ctx->pc = 0x80653784u;
    // 80653784: lfs     f0, 29536(r2)
    if (!ppc_fp_available_inline(ctx, 0x80653784u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(29536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653788:
    ctx->pc = 0x80653788u;
    // 80653788: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8065378C:
    ctx->pc = 0x8065378Cu;
    // 8065378C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8065378Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80653790:
    ctx->pc = 0x80653790u;
    // 80653790: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80653790u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80653794:
    ctx->pc = 0x80653794u;
    // 80653794: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80653798:
    ctx->pc = 0x80653798u;
    // 80653798: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8065379C:
    ctx->pc = 0x8065379Cu;
    // 8065379C: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_806537A0:
    ctx->pc = 0x806537A0u;
    // 806537A0: bl      0x8023E534
    {
            ctx->lr = 0x806537A4u;
            ctx->pc = 0x8023E534u;
            return;
    }

label_806537A4:
    ctx->pc = 0x806537A4u;
    ctx->downcount -= 5;
    // 806537A4: lfs     f1, 528(r29)
    if (!ppc_fp_available_inline(ctx, 0x806537A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_806537A8:
    ctx->pc = 0x806537A8u;
    // 806537A8: lfs     f0, -17220(r13)
    if (!ppc_fp_available_inline(ctx, 0x806537A8u)) return;
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_806537AC:
    ctx->pc = 0x806537ACu;
    // 806537AC: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806537B0:
    ctx->pc = 0x806537B0u;
    // 806537B0: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x806537B0u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_806537B4:
    ctx->pc = 0x806537B4u;
    // 806537B4: bl      0x8023E4E8
    {
            ctx->lr = 0x806537B8u;
            ctx->pc = 0x8023E4E8u;
            return;
    }

label_806537B8:
    ctx->pc = 0x806537B8u;
    ctx->downcount -= 2;
    // 806537B8: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806537BC:
    ctx->pc = 0x806537BCu;
    // 806537BC: bl      0x8023E28C
    {
            ctx->lr = 0x806537C0u;
            ctx->pc = 0x8023E28Cu;
            return;
    }

label_806537C0:
    ctx->pc = 0x806537C0u;
    ctx->downcount -= 2;
    // 806537C0: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_806537C4:
    ctx->pc = 0x806537C4u;
    // 806537C4: bl      0x800078A0
    {
            ctx->lr = 0x806537C8u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_806537C8:
    ctx->pc = 0x806537C8u;
    ctx->downcount -= 5;
    // 806537C8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_806537CC:
    ctx->pc = 0x806537CCu;
    // 806537CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_806537D0:
    ctx->pc = 0x806537D0u;
    // 806537D0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_806537D4:
    ctx->pc = 0x806537D4u;
    // 806537D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806537D8:
    ctx->pc = 0x806537D8u;
    ctx->downcount -= 2;
    // 806537D8: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806537DC:
    ctx->pc = 0x806537DCu;
    // 806537DC: b       0x8023E82C
    {
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_806537E0:
    ctx->pc = 0x806537E0u;
    ctx->downcount -= 5;
    // 806537E0: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_806537E4:
    ctx->pc = 0x806537E4u;
    // 806537E4: lwz     r12, 48(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_806537E8:
    ctx->pc = 0x806537E8u;
    // 806537E8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_806537EC:
    ctx->pc = 0x806537ECu;
    // 806537EC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_806537F0:
    ctx->pc = 0x806537F0u;
    ctx->downcount -= 21;
    // 806537F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_806537F4:
    ctx->pc = 0x806537F4u;
    // 806537F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_806537F8:
    ctx->pc = 0x806537F8u;
    // 806537F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806537FC:
    ctx->pc = 0x806537FCu;
    // 806537FC: li      r0, 599
    ctx->gpr[0] = (u32)(s32)(599);

label_80653800:
    ctx->pc = 0x80653800u;
    // 80653800: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80653804:
    ctx->pc = 0x80653804u;
    // 80653804: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80653808:
    ctx->pc = 0x80653808u;
    // 80653808: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8065380C:
    ctx->pc = 0x8065380Cu;
    // 8065380C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653810:
    ctx->pc = 0x80653810u;
    // 80653810: stw     r31, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653814:
    ctx->pc = 0x80653814u;
    // 80653814: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653818:
    ctx->pc = 0x80653818u;
    // 80653818: bl      0x8023E82C
    {
            ctx->lr = 0x8065381Cu;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_8065381C:
    ctx->pc = 0x8065381Cu;
    ctx->downcount -= 17;
    // 8065381C: stw     r31, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653820:
    ctx->pc = 0x80653820u;
    // 80653820: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80653824:
    ctx->pc = 0x80653824u;
    // 80653824: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653828:
    ctx->pc = 0x80653828u;
    // 80653828: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8065382C:
    ctx->pc = 0x8065382Cu;
    // 8065382C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653830:
    ctx->pc = 0x80653830u;
    // 80653830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653834:
    ctx->pc = 0x80653834u;
    ctx->downcount -= 7;
    // 80653834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653838:
    ctx->pc = 0x80653838u;
    // 80653838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8065383C:
    ctx->pc = 0x8065383Cu;
    // 8065383C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80653840:
    ctx->pc = 0x80653840u;
    // 80653840: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653844:
    ctx->pc = 0x80653844u;
    // 80653844: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653848:
    ctx->pc = 0x80653848u;
    // 80653848: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8065384C:
    ctx->pc = 0x8065384Cu;
    // 8065384C: bl      0x80653E5C
    {
            ctx->lr = 0x80653850u;
            goto label_80653E5C;
    }

label_80653850:
    ctx->pc = 0x80653850u;
    ctx->downcount -= 6;
    // 80653850: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_80653854:
    ctx->pc = 0x80653854u;
    // 80653854: lis     r3, -32663
    ctx->gpr[3] = ((u32)(s32)(-32663) << 16);

label_80653858:
    ctx->pc = 0x80653858u;
    // 80653858: addi    r4, r4, -172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-172);

label_8065385C:
    ctx->pc = 0x8065385Cu;
    // 8065385C: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80653860:
    ctx->pc = 0x80653860u;
    // 80653860: addi    r3, r3, -14136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14136);

label_80653864:
    ctx->pc = 0x80653864u;
    // 80653864: bl      0x80602F30
    {
            ctx->lr = 0x80653868u;
            ctx->pc = 0x80602F30u;
            return;
    }

label_80653868:
    ctx->pc = 0x80653868u;
    ctx->downcount -= 8;
    // 80653868: stw     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8065386C:
    ctx->pc = 0x8065386Cu;
    // 8065386C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653870:
    ctx->pc = 0x80653870u;
    // 80653870: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653874:
    ctx->pc = 0x80653874u;
    // 80653874: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653878:
    ctx->pc = 0x80653878u;
    // 80653878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8065387C:
    ctx->pc = 0x8065387Cu;
    // 8065387C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653880:
    ctx->pc = 0x80653880u;
    // 80653880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653884:
    ctx->pc = 0x80653884u;
    ctx->downcount -= 16;
    // 80653884: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653888:
    ctx->pc = 0x80653888u;
    // 80653888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8065388C:
    ctx->pc = 0x8065388Cu;
    // 8065388C: li      r3, 640
    ctx->gpr[3] = (u32)(s32)(640);

label_80653890:
    ctx->pc = 0x80653890u;
    // 80653890: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653894:
    ctx->pc = 0x80653894u;
    // 80653894: stmw     r27, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80653898:
    ctx->pc = 0x80653898u;
    // 80653898: bl      0x801C1C48
    {
            ctx->lr = 0x8065389Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8065389C:
    ctx->pc = 0x8065389Cu;
    ctx->downcount -= 7;
    // 8065389C: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_806538A0:
    ctx->pc = 0x806538A0u;
    // 806538A0: stw     r3, -8368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8368);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_806538A4:
    ctx->pc = 0x806538A4u;
    // 806538A4: addi    r28, r4, -14136
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-14136);

label_806538A8:
    ctx->pc = 0x806538A8u;
    // 806538A8: lwz     r3, -8496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806538AC:
    ctx->pc = 0x806538ACu;
    // 806538AC: addi    r4, r28, 18
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(18);

label_806538B0:
    ctx->pc = 0x806538B0u;
    // 806538B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_806538B4:
    ctx->pc = 0x806538B4u;
    // 806538B4: bl      0x80602F98
    {
            ctx->lr = 0x806538B8u;
            ctx->pc = 0x80602F98u;
            return;
    }

label_806538B8:
    ctx->pc = 0x806538B8u;
    ctx->downcount -= 6;
    // 806538B8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_806538BC:
    ctx->pc = 0x806538BCu;
    // 806538BC: lwz     r3, -13104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806538C0:
    ctx->pc = 0x806538C0u;
    // 806538C0: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_806538C4:
    ctx->pc = 0x806538C4u;
    // 806538C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_806538C8:
    ctx->pc = 0x806538C8u;
    // 806538C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_806538CC:
    ctx->pc = 0x806538CCu;
    // 806538CC: bl      0x80253844
    {
            ctx->lr = 0x806538D0u;
            ctx->pc = 0x80253844u;
            return;
    }

label_806538D0:
    ctx->pc = 0x806538D0u;
    ctx->downcount -= 4;
    // 806538D0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_806538D4:
    ctx->pc = 0x806538D4u;
    // 806538D4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_806538D8:
    ctx->pc = 0x806538D8u;
    // 806538D8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_806538DC:
    ctx->pc = 0x806538DCu;
    // 806538DC: li      r30, 4
    ctx->gpr[30] = (u32)(s32)(4);

label_806538E0:
    ctx->downcount -= 5;
    // 806538E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_806538E4:
    // 806538E4: addi    r4, r28, 27
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(27);

label_806538E8:
    // 806538E8: subfic  r5, r27, 10
    {
        u64 res = (u64)(u32)(s32)(10) + (u64)(~ctx->gpr[27]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_806538EC:
    // 806538EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_806538F0:
    // 806538F0: bl      0x8000D168
    {
            ctx->lr = 0x806538F4u;
            ctx->pc = 0x8000D168u;
            return;
    }

label_806538F4:
    ctx->downcount -= 2;
    // 806538F4: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_806538F8:
    // 806538F8: bl      0x801C1C48
    {
            ctx->lr = 0x806538FCu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_806538FC:
    ctx->downcount -= 2;
    // 806538FC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653900:
    // 80653900: bc    12, 2, 0x80653920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653920;
        }
    }

label_80653904:
    ctx->downcount -= 7;
    // 80653904: rlwinm r4, r29, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_80653908:
    // 80653908: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8065390C:
    // 8065390C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80653910:
    // 80653910: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80653914:
    // 80653914: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80653918:
    // 80653918: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8065391C:
    // 8065391C: bl      0x8025A190
    {
            ctx->lr = 0x80653920u;
            ctx->pc = 0x8025A190u;
            return;
    }

label_80653920:
    ctx->pc = 0x80653920u;
    ctx->downcount -= 5;
    // 80653920: lwz     r0, -8368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653924:
    // 80653924: add   r5, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80653928:
    ctx->pc = 0x80653928u;
    // 80653928: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_8065392C:
    // 8065392C: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_80653930:
    loop_80653930(ctx);
    if (ctx->pc == 0x80653944u) goto label_80653944;
    return;
label_80653934:
    ctx->pc = 0x80653934u;
    // 80653934: lwzu     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80653938:
    ctx->pc = 0x80653938u;
    // 80653938: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8065393C:
    ctx->pc = 0x8065393Cu;
    // 8065393C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80653940:
    // 80653940: bc    16, 0, 0x80653930
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653930u;
                return;
            }
            goto label_80653930;
        }
    }

label_80653944:
    ctx->downcount -= 5;
    // 80653944: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80653948:
    // 80653948: addi    r4, r28, 27
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(27);

label_8065394C:
    // 8065394C: subfic  r5, r27, 21
    {
        u64 res = (u64)(u32)(s32)(21) + (u64)(~ctx->gpr[27]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80653950:
    // 80653950: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80653954:
    // 80653954: bl      0x8000D168
    {
            ctx->lr = 0x80653958u;
            ctx->pc = 0x8000D168u;
            return;
    }

label_80653958:
    ctx->downcount -= 2;
    // 80653958: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_8065395C:
    // 8065395C: bl      0x801C1C48
    {
            ctx->lr = 0x80653960u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80653960:
    ctx->downcount -= 2;
    // 80653960: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653964:
    // 80653964: bc    12, 2, 0x80653984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653984;
        }
    }

label_80653968:
    ctx->downcount -= 7;
    // 80653968: rlwinm r4, r29, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_8065396C:
    // 8065396C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80653970:
    // 80653970: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80653974:
    // 80653974: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80653978:
    // 80653978: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8065397C:
    // 8065397C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80653980:
    // 80653980: bl      0x8025A190
    {
            ctx->lr = 0x80653984u;
            ctx->pc = 0x8025A190u;
            return;
    }

label_80653984:
    ctx->pc = 0x80653984u;
    ctx->downcount -= 5;
    // 80653984: lwz     r0, -8368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653988:
    // 80653988: add   r4, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8065398C:
    // 8065398C: addi    r5, r4, 316
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(316);

label_80653990:
    ctx->pc = 0x80653990u;
    // 80653990: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_80653994:
    loop_80653994(ctx);
    if (ctx->pc == 0x806539A8u) goto label_806539A8;
    return;
label_80653998:
    ctx->pc = 0x80653998u;
    // 80653998: lwzu     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_8065399C:
    ctx->pc = 0x8065399Cu;
    // 8065399C: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_806539A0:
    ctx->pc = 0x806539A0u;
    // 806539A0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_806539A4:
    // 806539A4: bc    16, 0, 0x80653994
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80653994u;
                return;
            }
            goto label_80653994;
        }
    }

label_806539A8:
    ctx->downcount -= 4;
    // 806539A8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_806539AC:
    // 806539AC: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_806539B0:
    // 806539B0: cmpwi   r27, 10
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

label_806539B4:
    // 806539B4: bc    12, 0, 0x806538E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806538E0u;
                return;
            }
            goto label_806538E0;
        }
    }

label_806539B8:
    ctx->pc = 0x806539B8u;
    ctx->downcount -= 16;
    // 806539B8: lmw     r27, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_806539BC:
    ctx->pc = 0x806539BCu;
    // 806539BC: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_806539C0:
    ctx->pc = 0x806539C0u;
    // 806539C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_806539C4:
    ctx->pc = 0x806539C4u;
    // 806539C4: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_806539C8:
    ctx->pc = 0x806539C8u;
    // 806539C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_806539CC:
    ctx->pc = 0x806539CCu;
    ctx->downcount -= 13;
    // 806539CC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_806539D0:
    ctx->pc = 0x806539D0u;
    // 806539D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_806539D4:
    ctx->pc = 0x806539D4u;
    // 806539D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_806539D8:
    ctx->pc = 0x806539D8u;
    // 806539D8: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x806539D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_806539DC:
    ctx->pc = 0x806539DCu;
    // 806539DC: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x806539DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x806539DCu);
        if (ctx->exception) return;
    }

label_806539E0:
    ctx->pc = 0x806539E0u;
    // 806539E0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_806539E4:
    ctx->pc = 0x806539E4u;
    // 806539E4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_806539E8:
    ctx->pc = 0x806539E8u;
    // 806539E8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_806539EC:
    ctx->pc = 0x806539ECu;
    // 806539EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_806539F0:
    ctx->pc = 0x806539F0u;
    // 806539F0: lwz     r3, 336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_806539F4:
    ctx->pc = 0x806539F4u;
    // 806539F4: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_806539F8:
    ctx->pc = 0x806539F8u;
    // 806539F8: cmpwi   r0, 1
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

label_806539FC:
    ctx->pc = 0x806539FCu;
    // 806539FC: bc    4, 1, 0x80653A90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653A90;
        }
    }

label_80653A00:
    ctx->pc = 0x80653A00u;
    ctx->downcount -= 3;
    // 80653A00: lwz     r0, 244(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653A04:
    ctx->pc = 0x80653A04u;
    // 80653A04: cmpwi   r0, 15
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653A08:
    ctx->pc = 0x80653A08u;
    // 80653A08: bc    4, 2, 0x80653A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653A14;
        }
    }

label_80653A0C:
    ctx->pc = 0x80653A0Cu;
    ctx->downcount -= 2;
    // 80653A0C: lfs     f31, -17224(r13)
    if (!ppc_fp_available_inline(ctx, 0x80653A0Cu)) return;
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80653A10:
    ctx->pc = 0x80653A10u;
    // 80653A10: b       0x80653A18
    {
            goto label_80653A18;
    }

label_80653A14:
    ctx->pc = 0x80653A14u;
    ctx->downcount -= 1;
    // 80653A14: lfs     f31, -17228(r13)
    if (!ppc_fp_available_inline(ctx, 0x80653A14u)) return;
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80653A18:
    ctx->pc = 0x80653A18u;
    ctx->downcount -= 12;
    // 80653A18: psq_l   f1, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x80653A18u);
        if (ctx->exception) return;
    }

label_80653A1C:
    ctx->pc = 0x80653A1Cu;
    // 80653A1C: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_80653A20:
    ctx->pc = 0x80653A20u;
    // 80653A20: psq_l   f0, 8(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 0u, ea, false, 0u, false, 0x80653A20u);
        if (ctx->exception) return;
    }

label_80653A24:
    ctx->pc = 0x80653A24u;
    // 80653A24: addi    r3, r4, 68
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(68);

label_80653A28:
    ctx->pc = 0x80653A28u;
    // 80653A28: ps_sub  f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80653A28u)) return;
    ppc_ps_sub_op(ctx, 0, 1, 0);

label_80653A2C:
    ctx->pc = 0x80653A2Cu;
    // 80653A2C: psq_l   f1, 8(r6), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A2Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 1u, ea, true, 0u, false, 0x80653A2Cu);
        if (ctx->exception) return;
    }

label_80653A30:
    ctx->pc = 0x80653A30u;
    // 80653A30: psq_st   f0, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x80653A30u);
        if (ctx->exception) return;
    }

label_80653A34:
    ctx->pc = 0x80653A34u;
    // 80653A34: psq_l   f0, 16(r4), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ppc_psq_load_inline(ctx, 0u, ea, true, 0u, false, 0x80653A34u);
        if (ctx->exception) return;
    }

label_80653A38:
    ctx->pc = 0x80653A38u;
    // 80653A38: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80653A3C:
    ctx->pc = 0x80653A3Cu;
    // 80653A3C: ps_sub  f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80653A3Cu)) return;
    ppc_ps_sub_op(ctx, 0, 1, 0);

label_80653A40:
    ctx->pc = 0x80653A40u;
    // 80653A40: psq_st   f0, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x80653A40u);
        if (ctx->exception) return;
    }

label_80653A44:
    ctx->pc = 0x80653A44u;
    // 80653A44: bl      0x8003F820
    {
            ctx->lr = 0x80653A48u;
            ctx->pc = 0x8003F820u;
            return;
    }

label_80653A48:
    ctx->pc = 0x80653A48u;
    ctx->downcount -= 10;
    // 80653A48: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653A48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80653A4C:
    ctx->pc = 0x80653A4Cu;
    // 80653A4C: fneg    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80653A4Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_80653A50:
    ctx->pc = 0x80653A50u;
    // 80653A50: lfs     f1, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80653A50u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80653A54:
    ctx->pc = 0x80653A54u;
    // 80653A54: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80653A54u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80653A58:
    ctx->pc = 0x80653A58u;
    // 80653A58: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80653A5C:
    ctx->pc = 0x80653A5Cu;
    // 80653A5C: lfs     f2, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x80653A5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80653A60:
    ctx->pc = 0x80653A60u;
    // 80653A60: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80653A60u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_80653A64:
    ctx->pc = 0x80653A64u;
    // 80653A64: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80653A64u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80653A68:
    ctx->pc = 0x80653A68u;
    // 80653A68: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80653A6C:
    ctx->pc = 0x80653A6Cu;
    // 80653A6C: bc    12, 2, 0x80653A90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653A90;
        }
    }

label_80653A70:
    ctx->pc = 0x80653A70u;
    ctx->downcount -= 8;
    // 80653A70: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653A74:
    ctx->pc = 0x80653A74u;
    // 80653A74: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653A78:
    ctx->pc = 0x80653A78u;
    // 80653A78: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653A7C:
    ctx->pc = 0x80653A7Cu;
    // 80653A7C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80653A80:
    ctx->pc = 0x80653A80u;
    // 80653A80: lwz     r3, -8496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653A84:
    ctx->pc = 0x80653A84u;
    // 80653A84: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80653A88:
    ctx->pc = 0x80653A88u;
    // 80653A88: lwz     r3, 416(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653A8C:
    ctx->pc = 0x80653A8Cu;
    // 80653A8C: bl      0x8062212C
    {
            ctx->lr = 0x80653A90u;
            ctx->pc = 0x8062212Cu;
            return;
    }

label_80653A90:
    ctx->pc = 0x80653A90u;
    ctx->downcount -= 9;
    // 80653A90: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653A94:
    ctx->pc = 0x80653A94u;
    // 80653A94: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80653A94u);
        if (ctx->exception) return;
    }

label_80653A98:
    ctx->pc = 0x80653A98u;
    // 80653A98: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653A98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80653A9C:
    ctx->pc = 0x80653A9Cu;
    // 80653A9C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653AA0:
    ctx->pc = 0x80653AA0u;
    // 80653AA0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80653AA4:
    ctx->pc = 0x80653AA4u;
    // 80653AA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653AA8:
    ctx->pc = 0x80653AA8u;
    // 80653AA8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80653AAC:
    ctx->pc = 0x80653AACu;
    // 80653AAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653AB0:
    ctx->pc = 0x80653AB0u;
    ctx->downcount -= 5;
    // 80653AB0: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653AB4:
    ctx->pc = 0x80653AB4u;
    // 80653AB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653AB8:
    ctx->pc = 0x80653AB8u;
    // 80653AB8: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653ABC:
    ctx->pc = 0x80653ABCu;
    // 80653ABC: addi    r11, r1, 176
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(176);

label_80653AC0:
    ctx->pc = 0x80653AC0u;
    // 80653AC0: bl      0x80007858
    {
            ctx->lr = 0x80653AC4u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80653AC4:
    ctx->pc = 0x80653AC4u;
    ctx->downcount -= 6;
    // 80653AC4: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653AC8:
    ctx->pc = 0x80653AC8u;
    // 80653AC8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653ACC:
    ctx->pc = 0x80653ACCu;
    // 80653ACC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80653AD0:
    ctx->pc = 0x80653AD0u;
    // 80653AD0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80653AD4:
    ctx->pc = 0x80653AD4u;
    // 80653AD4: cmpwi   r0, 1
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

label_80653AD8:
    ctx->pc = 0x80653AD8u;
    // 80653AD8: bc    4, 2, 0x80653B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653B8C;
        }
    }

label_80653ADC:
    ctx->pc = 0x80653ADCu;
    ctx->downcount -= 4;
    // 80653ADC: lis     r30, -32643
    ctx->gpr[30] = ((u32)(s32)(-32643) << 16);

label_80653AE0:
    ctx->pc = 0x80653AE0u;
    // 80653AE0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_80653AE4:
    ctx->pc = 0x80653AE4u;
    // 80653AE4: addi    r4, r30, 792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(792);

label_80653AE8:
    ctx->pc = 0x80653AE8u;
    // 80653AE8: bl      0x80204168
    {
            ctx->lr = 0x80653AECu;
            ctx->pc = 0x80204168u;
            return;
    }

label_80653AEC:
    ctx->pc = 0x80653AECu;
    ctx->downcount -= 4;
    // 80653AEC: lis     r31, -32643
    ctx->gpr[31] = ((u32)(s32)(-32643) << 16);

label_80653AF0:
    ctx->pc = 0x80653AF0u;
    // 80653AF0: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_80653AF4:
    ctx->pc = 0x80653AF4u;
    // 80653AF4: addi    r4, r31, 852
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(852);

label_80653AF8:
    ctx->pc = 0x80653AF8u;
    // 80653AF8: bl      0x8028788C
    {
            ctx->lr = 0x80653AFCu;
            ctx->pc = 0x8028788Cu;
            return;
    }

label_80653AFC:
    ctx->pc = 0x80653AFCu;
    ctx->downcount -= 3;
    // 80653AFC: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_80653B00:
    ctx->pc = 0x80653B00u;
    // 80653B00: addi    r4, r30, 792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(792);

label_80653B04:
    ctx->pc = 0x80653B04u;
    // 80653B04: bl      0x80204168
    {
            ctx->lr = 0x80653B08u;
            ctx->pc = 0x80204168u;
            return;
    }

label_80653B08:
    ctx->pc = 0x80653B08u;
    ctx->downcount -= 3;
    // 80653B08: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_80653B0C:
    ctx->pc = 0x80653B0Cu;
    // 80653B0C: addi    r4, r31, 852
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(852);

label_80653B10:
    ctx->pc = 0x80653B10u;
    // 80653B10: bl      0x8028788C
    {
            ctx->lr = 0x80653B14u;
            ctx->pc = 0x8028788Cu;
            return;
    }

label_80653B14:
    ctx->pc = 0x80653B14u;
    ctx->downcount -= 8;
    // 80653B14: lfs     f0, 29540(r2)
    if (!ppc_fp_available_inline(ctx, 0x80653B14u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(29540);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653B18:
    ctx->pc = 0x80653B18u;
    // 80653B18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80653B1C:
    ctx->pc = 0x80653B1Cu;
    // 80653B1C: stw     r0, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653B20:
    ctx->pc = 0x80653B20u;
    // 80653B20: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_80653B24:
    ctx->pc = 0x80653B24u;
    // 80653B24: addi    r4, r28, 48
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(48);

label_80653B28:
    ctx->pc = 0x80653B28u;
    // 80653B28: addi    r5, r28, 148
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(148);

label_80653B2C:
    ctx->pc = 0x80653B2Cu;
    // 80653B2C: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653B2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80653B30:
    ctx->pc = 0x80653B30u;
    // 80653B30: bl      0x80327114
    {
            ctx->lr = 0x80653B34u;
            ctx->pc = 0x80327114u;
            return;
    }

label_80653B34:
    ctx->pc = 0x80653B34u;
    ctx->downcount -= 14;
    // 80653B34: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_80653B38:
    ctx->pc = 0x80653B38u;
    // 80653B38: psq_l   f1, 36(r28), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B38u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x80653B38u);
        if (ctx->exception) return;
    }

label_80653B3C:
    ctx->pc = 0x80653B3Cu;
    // 80653B3C: psq_l   f2, 0(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x80653B3Cu);
        if (ctx->exception) return;
    }

label_80653B40:
    ctx->pc = 0x80653B40u;
    // 80653B40: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80653B44:
    ctx->pc = 0x80653B44u;
    // 80653B44: lfs     f0, -17232(r13)
    if (!ppc_fp_available_inline(ctx, 0x80653B44u)) return;
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-17232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653B48:
    ctx->pc = 0x80653B48u;
    // 80653B48: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80653B4C:
    ctx->pc = 0x80653B4Cu;
    // 80653B4C: ps_add  f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80653B4Cu)) return;
    ppc_ps_add_op(ctx, 1, 2, 1);

label_80653B50:
    ctx->pc = 0x80653B50u;
    // 80653B50: psq_l   f2, 8(r3), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 2u, ea, true, 0u, false, 0x80653B50u);
        if (ctx->exception) return;
    }

label_80653B54:
    ctx->pc = 0x80653B54u;
    // 80653B54: psq_st   f1, 0(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x80653B54u);
        if (ctx->exception) return;
    }

label_80653B58:
    ctx->pc = 0x80653B58u;
    // 80653B58: psq_l   f1, 44(r28), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B58u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ppc_psq_load_inline(ctx, 1u, ea, true, 0u, false, 0x80653B58u);
        if (ctx->exception) return;
    }

label_80653B5C:
    ctx->pc = 0x80653B5Cu;
    // 80653B5C: ps_add  f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80653B5Cu)) return;
    ppc_ps_add_op(ctx, 1, 2, 1);

label_80653B60:
    ctx->pc = 0x80653B60u;
    // 80653B60: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653B60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80653B64:
    ctx->pc = 0x80653B64u;
    // 80653B64: psq_st   f1, 8(r3), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653B64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x80653B64u);
        if (ctx->exception) return;
    }

label_80653B68:
    ctx->pc = 0x80653B68u;
    // 80653B68: bl      0x8032438C
    {
            ctx->lr = 0x80653B6Cu;
            ctx->pc = 0x8032438Cu;
            return;
    }

label_80653B6C:
    ctx->pc = 0x80653B6Cu;
    ctx->downcount -= 2;
    // 80653B6C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653B70:
    ctx->pc = 0x80653B70u;
    // 80653B70: bc    12, 2, 0x80653B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653B8C;
        }
    }

label_80653B74:
    ctx->pc = 0x80653B74u;
    ctx->downcount -= 4;
    // 80653B74: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80653B78:
    ctx->pc = 0x80653B78u;
    // 80653B78: stw     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653B7C:
    ctx->pc = 0x80653B7Cu;
    // 80653B7C: lwz     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653B80:
    ctx->pc = 0x80653B80u;
    // 80653B80: bl      0x8023E888
    {
            ctx->lr = 0x80653B84u;
            ctx->pc = 0x8023E888u;
            return;
    }

label_80653B84:
    ctx->pc = 0x80653B84u;
    ctx->downcount -= 2;
    // 80653B84: lwz     r3, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653B88:
    ctx->pc = 0x80653B88u;
    // 80653B88: bl      0x8023E91C
    {
            ctx->lr = 0x80653B8Cu;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_80653B8C:
    ctx->pc = 0x80653B8Cu;
    ctx->downcount -= 2;
    // 80653B8C: addi    r11, r1, 176
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(176);

label_80653B90:
    ctx->pc = 0x80653B90u;
    // 80653B90: bl      0x800078A4
    {
            ctx->lr = 0x80653B94u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_80653B94:
    ctx->pc = 0x80653B94u;
    ctx->downcount -= 5;
    // 80653B94: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653B98:
    ctx->pc = 0x80653B98u;
    // 80653B98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653B9C:
    ctx->pc = 0x80653B9Cu;
    // 80653B9C: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_80653BA0:
    ctx->pc = 0x80653BA0u;
    // 80653BA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653BA4:
    ctx->pc = 0x80653BA4u;
    ctx->downcount -= 5;
    // 80653BA4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653BA8:
    ctx->pc = 0x80653BA8u;
    // 80653BA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653BAC:
    ctx->pc = 0x80653BACu;
    // 80653BAC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653BB0:
    ctx->pc = 0x80653BB0u;
    // 80653BB0: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80653BB4:
    ctx->pc = 0x80653BB4u;
    // 80653BB4: bl      0x80007858
    {
            ctx->lr = 0x80653BB8u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80653BB8:
    ctx->pc = 0x80653BB8u;
    ctx->downcount -= 13;
    // 80653BB8: lwz     r6, 148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80653BBC:
    ctx->pc = 0x80653BBCu;
    // 80653BBC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653BC0:
    ctx->pc = 0x80653BC0u;
    // 80653BC0: lwz     r0, 152(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653BC4:
    ctx->pc = 0x80653BC4u;
    // 80653BC4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80653BC8:
    ctx->pc = 0x80653BC8u;
    // 80653BC8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653BCC:
    ctx->pc = 0x80653BCCu;
    // 80653BCC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80653BD0:
    ctx->pc = 0x80653BD0u;
    // 80653BD0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80653BD4:
    ctx->pc = 0x80653BD4u;
    // 80653BD4: addi    r4, r5, 48
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(48);

label_80653BD8:
    ctx->pc = 0x80653BD8u;
    // 80653BD8: stw     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80653BDC:
    ctx->pc = 0x80653BDCu;
    // 80653BDC: lwz     r0, 156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653BE0:
    ctx->pc = 0x80653BE0u;
    // 80653BE0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653BE4:
    ctx->pc = 0x80653BE4u;
    // 80653BE4: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653BE8:
    ctx->pc = 0x80653BE8u;
    // 80653BE8: bl      0x80327114
    {
            ctx->lr = 0x80653BECu;
            ctx->pc = 0x80327114u;
            return;
    }

label_80653BEC:
    ctx->pc = 0x80653BECu;
    ctx->downcount -= 2;
    // 80653BEC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80653BF0:
    ctx->pc = 0x80653BF0u;
    // 80653BF0: bl      0x8061F960
    {
            ctx->lr = 0x80653BF4u;
            ctx->pc = 0x8061F960u;
            return;
    }

label_80653BF4:
    ctx->pc = 0x80653BF4u;
    ctx->downcount -= 25;
    // 80653BF4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80653BF8:
    ctx->pc = 0x80653BF8u;
    // 80653BF8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80653BFC:
    ctx->pc = 0x80653BFCu;
    // 80653BFC: psq_l   f2, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653BFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x80653BFCu);
        if (ctx->exception) return;
    }

label_80653C00:
    ctx->pc = 0x80653C00u;
    // 80653C00: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80653C04:
    ctx->pc = 0x80653C04u;
    // 80653C04: psq_l   f3, 36(r29), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C04u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ppc_psq_load_inline(ctx, 3u, ea, false, 0u, false, 0x80653C04u);
        if (ctx->exception) return;
    }

label_80653C08:
    ctx->pc = 0x80653C08u;
    // 80653C08: ps_muls0  f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80653C08u)) return;
    ppc_ps_muls0(ctx, 0, 2, 1);

label_80653C0C:
    ctx->pc = 0x80653C0Cu;
    // 80653C0C: psq_l   f2, 8(r4), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 2u, ea, true, 0u, false, 0x80653C0Cu);
        if (ctx->exception) return;
    }

label_80653C10:
    ctx->pc = 0x80653C10u;
    // 80653C10: psq_st   f0, 0(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x80653C10u);
        if (ctx->exception) return;
    }

label_80653C14:
    ctx->pc = 0x80653C14u;
    // 80653C14: ps_muls0  f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80653C14u)) return;
    ppc_ps_muls0(ctx, 0, 2, 1);

label_80653C18:
    ctx->pc = 0x80653C18u;
    // 80653C18: psq_l   f1, 0(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x80653C18u);
        if (ctx->exception) return;
    }

label_80653C1C:
    ctx->pc = 0x80653C1Cu;
    // 80653C1C: psq_st   f0, 8(r3), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x80653C1Cu);
        if (ctx->exception) return;
    }

label_80653C20:
    ctx->pc = 0x80653C20u;
    // 80653C20: ps_add  f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80653C20u)) return;
    ppc_ps_add_op(ctx, 1, 3, 1);

label_80653C24:
    ctx->pc = 0x80653C24u;
    // 80653C24: psq_l   f3, 44(r29), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C24u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ppc_psq_load_inline(ctx, 3u, ea, true, 0u, false, 0x80653C24u);
        if (ctx->exception) return;
    }

label_80653C28:
    ctx->pc = 0x80653C28u;
    // 80653C28: psq_st   f1, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C28u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x80653C28u);
        if (ctx->exception) return;
    }

label_80653C2C:
    ctx->pc = 0x80653C2Cu;
    // 80653C2C: ps_add  f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80653C2Cu)) return;
    ppc_ps_add_op(ctx, 1, 3, 0);

label_80653C30:
    ctx->pc = 0x80653C30u;
    // 80653C30: psq_st   f1, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x80653C30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x80653C30u);
        if (ctx->exception) return;
    }

label_80653C34:
    ctx->pc = 0x80653C34u;
    // 80653C34: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80653C38:
    ctx->pc = 0x80653C38u;
    // 80653C38: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80653C3C:
    ctx->pc = 0x80653C3Cu;
    // 80653C3C: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653C40:
    ctx->pc = 0x80653C40u;
    // 80653C40: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80653C44:
    ctx->pc = 0x80653C44u;
    // 80653C44: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80653C48:
    ctx->pc = 0x80653C48u;
    // 80653C48: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80653C4C:
    ctx->pc = 0x80653C4Cu;
    // 80653C4C: lwz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653C50:
    ctx->pc = 0x80653C50u;
    // 80653C50: cmpwi   r0, 1
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

label_80653C54:
    ctx->pc = 0x80653C54u;
    // 80653C54: bc    4, 2, 0x80653C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653C70;
        }
    }

label_80653C58:
    ctx->pc = 0x80653C58u;
    ctx->downcount -= 5;
    // 80653C58: lwz     r31, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653C5C:
    ctx->pc = 0x80653C5Cu;
    // 80653C5C: li      r4, 779
    ctx->gpr[4] = (u32)(s32)(779);

label_80653C60:
    ctx->pc = 0x80653C60u;
    // 80653C60: lwz     r30, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80653C64:
    ctx->pc = 0x80653C64u;
    // 80653C64: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653C68:
    ctx->pc = 0x80653C68u;
    // 80653C68: bl      0x802B72C8
    {
            ctx->lr = 0x80653C6Cu;
            ctx->pc = 0x802B72C8u;
            return;
    }

label_80653C6C:
    ctx->pc = 0x80653C6Cu;
    ctx->downcount -= 1;
    // 80653C6C: b       0x80653C78
    {
            goto label_80653C78;
    }

label_80653C70:
    ctx->pc = 0x80653C70u;
    ctx->downcount -= 2;
    // 80653C70: lwz     r31, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653C74:
    ctx->pc = 0x80653C74u;
    // 80653C74: lwz     r30, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80653C78:
    ctx->pc = 0x80653C78u;
    ctx->downcount -= 4;
    // 80653C78: lwz     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653C7C:
    ctx->pc = 0x80653C7Cu;
    // 80653C7C: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653C80:
    ctx->pc = 0x80653C80u;
    // 80653C80: cmpw    r3, r0
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

label_80653C84:
    ctx->pc = 0x80653C84u;
    // 80653C84: bc    12, 2, 0x80653CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653CB4;
        }
    }

label_80653C88:
    ctx->pc = 0x80653C88u;
    ctx->downcount -= 2;
    // 80653C88: cmpwi   r3, 1
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

label_80653C8C:
    ctx->pc = 0x80653C8Cu;
    // 80653C8C: bc    4, 2, 0x80653CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653CA0;
        }
    }

label_80653C90:
    ctx->pc = 0x80653C90u;
    ctx->downcount -= 3;
    // 80653C90: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653C94:
    ctx->pc = 0x80653C94u;
    // 80653C94: li      r4, 777
    ctx->gpr[4] = (u32)(s32)(777);

label_80653C98:
    ctx->pc = 0x80653C98u;
    // 80653C98: bl      0x802B72DC
    {
            ctx->lr = 0x80653C9Cu;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_80653C9C:
    ctx->pc = 0x80653C9Cu;
    ctx->downcount -= 1;
    // 80653C9C: b       0x80653CB4
    {
            goto label_80653CB4;
    }

label_80653CA0:
    ctx->pc = 0x80653CA0u;
    ctx->downcount -= 2;
    // 80653CA0: cmpwi   r3, 2
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

label_80653CA4:
    ctx->pc = 0x80653CA4u;
    // 80653CA4: bc    4, 2, 0x80653CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653CB4;
        }
    }

label_80653CA8:
    ctx->pc = 0x80653CA8u;
    ctx->downcount -= 3;
    // 80653CA8: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653CAC:
    ctx->pc = 0x80653CACu;
    // 80653CAC: li      r4, 778
    ctx->gpr[4] = (u32)(s32)(778);

label_80653CB0:
    ctx->pc = 0x80653CB0u;
    // 80653CB0: bl      0x802B72DC
    {
            ctx->lr = 0x80653CB4u;
            ctx->pc = 0x802B72DCu;
            return;
    }

label_80653CB4:
    ctx->pc = 0x80653CB4u;
    ctx->downcount -= 11;
    // 80653CB4: lwz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653CB8:
    ctx->pc = 0x80653CB8u;
    // 80653CB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653CBC:
    ctx->pc = 0x80653CBCu;
    // 80653CBC: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653CC0:
    ctx->pc = 0x80653CC0u;
    // 80653CC0: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80653CC4:
    ctx->pc = 0x80653CC4u;
    // 80653CC4: lfs     f0, 29536(r2)
    if (!ppc_fp_available_inline(ctx, 0x80653CC4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(29536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80653CC8:
    ctx->pc = 0x80653CC8u;
    // 80653CC8: lfs     f1, 264(r28)
    if (!ppc_fp_available_inline(ctx, 0x80653CC8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80653CCC:
    ctx->pc = 0x80653CCCu;
    // 80653CCC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80653CCCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80653CD0:
    ctx->pc = 0x80653CD0u;
    // 80653CD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80653CD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80653CD4:
    ctx->pc = 0x80653CD4u;
    // 80653CD4: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80653CD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80653CD8:
    ctx->pc = 0x80653CD8u;
    // 80653CD8: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80653CDC:
    ctx->pc = 0x80653CDCu;
    // 80653CDC: bl      0x8023E498
    {
            ctx->lr = 0x80653CE0u;
            ctx->pc = 0x8023E498u;
            return;
    }

label_80653CE0:
    ctx->pc = 0x80653CE0u;
    ctx->downcount -= 4;
    // 80653CE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653CE4:
    ctx->pc = 0x80653CE4u;
    // 80653CE4: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80653CE8:
    ctx->pc = 0x80653CE8u;
    // 80653CE8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80653CEC:
    ctx->pc = 0x80653CECu;
    // 80653CEC: bl      0x8023E534
    {
            ctx->lr = 0x80653CF0u;
            ctx->pc = 0x8023E534u;
            return;
    }

label_80653CF0:
    ctx->pc = 0x80653CF0u;
    ctx->downcount -= 2;
    // 80653CF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653CF4:
    ctx->pc = 0x80653CF4u;
    // 80653CF4: bl      0x8023E28C
    {
            ctx->lr = 0x80653CF8u;
            ctx->pc = 0x8023E28Cu;
            return;
    }

label_80653CF8:
    ctx->pc = 0x80653CF8u;
    ctx->downcount -= 3;
    // 80653CF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653CFC:
    ctx->pc = 0x80653CFCu;
    // 80653CFC: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80653D00:
    ctx->pc = 0x80653D00u;
    // 80653D00: bl      0x8023E498
    {
            ctx->lr = 0x80653D04u;
            ctx->pc = 0x8023E498u;
            return;
    }

label_80653D04:
    ctx->pc = 0x80653D04u;
    ctx->downcount -= 4;
    // 80653D04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653D08:
    ctx->pc = 0x80653D08u;
    // 80653D08: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80653D0C:
    ctx->pc = 0x80653D0Cu;
    // 80653D0C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80653D10:
    ctx->pc = 0x80653D10u;
    // 80653D10: bl      0x8023E534
    {
            ctx->lr = 0x80653D14u;
            ctx->pc = 0x8023E534u;
            return;
    }

label_80653D14:
    ctx->pc = 0x80653D14u;
    ctx->downcount -= 2;
    // 80653D14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653D18:
    ctx->pc = 0x80653D18u;
    // 80653D18: bl      0x8023E28C
    {
            ctx->lr = 0x80653D1Cu;
            ctx->pc = 0x8023E28Cu;
            return;
    }

label_80653D1C:
    ctx->pc = 0x80653D1Cu;
    ctx->downcount -= 2;
    // 80653D1C: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80653D20:
    ctx->pc = 0x80653D20u;
    // 80653D20: bl      0x800078A4
    {
            ctx->lr = 0x80653D24u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_80653D24:
    ctx->pc = 0x80653D24u;
    ctx->downcount -= 5;
    // 80653D24: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653D28:
    ctx->pc = 0x80653D28u;
    // 80653D28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653D2C:
    ctx->pc = 0x80653D2Cu;
    // 80653D2C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80653D30:
    ctx->pc = 0x80653D30u;
    // 80653D30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653D34:
    ctx->pc = 0x80653D34u;
    ctx->downcount -= 7;
    // 80653D34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653D38:
    ctx->pc = 0x80653D38u;
    // 80653D38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653D3C:
    ctx->pc = 0x80653D3Cu;
    // 80653D3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653D40:
    ctx->pc = 0x80653D40u;
    // 80653D40: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653D44:
    ctx->pc = 0x80653D44u;
    // 80653D44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653D48:
    ctx->pc = 0x80653D48u;
    // 80653D48: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653D4C:
    ctx->pc = 0x80653D4Cu;
    // 80653D4C: bl      0x8023E82C
    {
            ctx->lr = 0x80653D50u;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_80653D50:
    ctx->pc = 0x80653D50u;
    ctx->downcount -= 2;
    // 80653D50: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653D54:
    ctx->pc = 0x80653D54u;
    // 80653D54: bl      0x8023E82C
    {
            ctx->lr = 0x80653D58u;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_80653D58:
    ctx->pc = 0x80653D58u;
    ctx->downcount -= 6;
    // 80653D58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653D5C:
    ctx->pc = 0x80653D5Cu;
    // 80653D5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653D60:
    ctx->pc = 0x80653D60u;
    // 80653D60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653D64:
    ctx->pc = 0x80653D64u;
    // 80653D64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653D68:
    ctx->pc = 0x80653D68u;
    // 80653D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653D6C:
    ctx->pc = 0x80653D6Cu;
    ctx->downcount -= 7;
    // 80653D6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653D70:
    ctx->pc = 0x80653D70u;
    // 80653D70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653D74:
    ctx->pc = 0x80653D74u;
    // 80653D74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653D78:
    ctx->pc = 0x80653D78u;
    // 80653D78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653D7C:
    ctx->pc = 0x80653D7Cu;
    // 80653D7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653D80:
    ctx->pc = 0x80653D80u;
    // 80653D80: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653D84:
    ctx->pc = 0x80653D84u;
    // 80653D84: bl      0x8023E91C
    {
            ctx->lr = 0x80653D88u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_80653D88:
    ctx->pc = 0x80653D88u;
    ctx->downcount -= 2;
    // 80653D88: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653D8C:
    ctx->pc = 0x80653D8Cu;
    // 80653D8C: bl      0x8023E82C
    {
            ctx->lr = 0x80653D90u;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_80653D90:
    ctx->pc = 0x80653D90u;
    ctx->downcount -= 8;
    // 80653D90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80653D94:
    ctx->pc = 0x80653D94u;
    // 80653D94: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653D98:
    ctx->pc = 0x80653D98u;
    // 80653D98: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653D9C:
    ctx->pc = 0x80653D9Cu;
    // 80653D9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653DA0:
    ctx->pc = 0x80653DA0u;
    // 80653DA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653DA4:
    ctx->pc = 0x80653DA4u;
    // 80653DA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653DA8:
    ctx->pc = 0x80653DA8u;
    // 80653DA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653DAC:
    ctx->pc = 0x80653DACu;
    ctx->downcount -= 7;
    // 80653DAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653DB0:
    ctx->pc = 0x80653DB0u;
    // 80653DB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653DB4:
    ctx->pc = 0x80653DB4u;
    // 80653DB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653DB8:
    ctx->pc = 0x80653DB8u;
    // 80653DB8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653DBC:
    ctx->pc = 0x80653DBCu;
    // 80653DBC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653DC0:
    ctx->pc = 0x80653DC0u;
    // 80653DC0: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653DC4:
    ctx->pc = 0x80653DC4u;
    // 80653DC4: bl      0x8023E82C
    {
            ctx->lr = 0x80653DC8u;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_80653DC8:
    ctx->pc = 0x80653DC8u;
    ctx->downcount -= 2;
    // 80653DC8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653DCC:
    ctx->pc = 0x80653DCCu;
    // 80653DCC: bl      0x8023E82C
    {
            ctx->lr = 0x80653DD0u;
            ctx->pc = 0x8023E82Cu;
            return;
    }

label_80653DD0:
    ctx->pc = 0x80653DD0u;
    ctx->downcount -= 9;
    // 80653DD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80653DD4:
    ctx->pc = 0x80653DD4u;
    // 80653DD4: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653DD8:
    ctx->pc = 0x80653DD8u;
    // 80653DD8: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653DDC:
    ctx->pc = 0x80653DDCu;
    // 80653DDC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653DE0:
    ctx->pc = 0x80653DE0u;
    // 80653DE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653DE4:
    ctx->pc = 0x80653DE4u;
    // 80653DE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653DE8:
    ctx->pc = 0x80653DE8u;
    // 80653DE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653DEC:
    ctx->pc = 0x80653DECu;
    // 80653DEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653DF0:
    ctx->pc = 0x80653DF0u;
    ctx->downcount -= 17;
    // 80653DF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653DF4:
    ctx->pc = 0x80653DF4u;
    // 80653DF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653DF8:
    ctx->pc = 0x80653DF8u;
    // 80653DF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80653DFC:
    ctx->pc = 0x80653DFCu;
    // 80653DFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653E00:
    ctx->pc = 0x80653E00u;
    // 80653E00: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80653E04:
    ctx->pc = 0x80653E04u;
    // 80653E04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653E08:
    ctx->pc = 0x80653E08u;
    // 80653E08: bl      0x80653E5C
    {
            ctx->lr = 0x80653E0Cu;
            goto label_80653E5C;
    }

label_80653E0C:
    ctx->pc = 0x80653E0Cu;
    ctx->downcount -= 7;
    // 80653E0C: lis     r3, -32657
    ctx->gpr[3] = ((u32)(s32)(-32657) << 16);

label_80653E10:
    ctx->pc = 0x80653E10u;
    // 80653E10: lis     r31, -32663
    ctx->gpr[31] = ((u32)(s32)(-32663) << 16);

label_80653E14:
    ctx->pc = 0x80653E14u;
    // 80653E14: addi    r3, r3, -68
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-68);

label_80653E18:
    ctx->pc = 0x80653E18u;
    // 80653E18: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653E1C:
    ctx->pc = 0x80653E1Cu;
    // 80653E1C: addi    r31, r31, -14136
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-14136);

label_80653E20:
    ctx->pc = 0x80653E20u;
    // 80653E20: addi    r3, r31, 51
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(51);

label_80653E24:
    ctx->pc = 0x80653E24u;
    // 80653E24: bl      0x80602F30
    {
            ctx->lr = 0x80653E28u;
            ctx->pc = 0x80602F30u;
            return;
    }

label_80653E28:
    ctx->pc = 0x80653E28u;
    ctx->downcount -= 3;
    // 80653E28: stw     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653E2C:
    ctx->pc = 0x80653E2Cu;
    // 80653E2C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_80653E30:
    ctx->pc = 0x80653E30u;
    // 80653E30: bl      0x80602F30
    {
            ctx->lr = 0x80653E34u;
            ctx->pc = 0x80602F30u;
            return;
    }

label_80653E34:
    ctx->pc = 0x80653E34u;
    ctx->downcount -= 21;
    // 80653E34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80653E38:
    ctx->pc = 0x80653E38u;
    // 80653E38: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80653E3C:
    ctx->pc = 0x80653E3Cu;
    // 80653E3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653E40:
    ctx->pc = 0x80653E40u;
    // 80653E40: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653E44:
    ctx->pc = 0x80653E44u;
    // 80653E44: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653E48:
    ctx->pc = 0x80653E48u;
    // 80653E48: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80653E4C:
    ctx->pc = 0x80653E4Cu;
    // 80653E4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653E50:
    ctx->pc = 0x80653E50u;
    // 80653E50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653E54:
    ctx->pc = 0x80653E54u;
    // 80653E54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653E58:
    ctx->pc = 0x80653E58u;
    // 80653E58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653E5C:
    ctx->pc = 0x80653E5Cu;
    ctx->downcount -= 17;
    // 80653E5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653E60:
    ctx->pc = 0x80653E60u;
    // 80653E60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653E64:
    ctx->pc = 0x80653E64u;
    // 80653E64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653E68:
    ctx->pc = 0x80653E68u;
    // 80653E68: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80653E6C:
    ctx->pc = 0x80653E6Cu;
    // 80653E6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653E70:
    ctx->pc = 0x80653E70u;
    // 80653E70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80653E74:
    ctx->pc = 0x80653E74u;
    // 80653E74: bl      0x8032349C
    {
            ctx->lr = 0x80653E78u;
            ctx->pc = 0x8032349Cu;
            return;
    }

label_80653E78:
    ctx->pc = 0x80653E78u;
    ctx->downcount -= 21;
    // 80653E78: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_80653E7C:
    ctx->pc = 0x80653E7Cu;
    // 80653E7C: stw     r31, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653E80:
    ctx->pc = 0x80653E80u;
    // 80653E80: addi    r4, r4, -16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16);

label_80653E84:
    ctx->pc = 0x80653E84u;
    // 80653E84: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80653E88:
    ctx->pc = 0x80653E88u;
    // 80653E88: stw     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80653E8C:
    ctx->pc = 0x80653E8Cu;
    // 80653E8C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80653E90:
    ctx->pc = 0x80653E90u;
    // 80653E90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653E94:
    ctx->pc = 0x80653E94u;
    // 80653E94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653E98:
    ctx->pc = 0x80653E98u;
    // 80653E98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653E9C:
    ctx->pc = 0x80653E9Cu;
    // 80653E9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653EA0:
    ctx->pc = 0x80653EA0u;
    ctx->downcount -= 7;
    // 80653EA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653EA4:
    ctx->pc = 0x80653EA4u;
    // 80653EA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653EA8:
    ctx->pc = 0x80653EA8u;
    // 80653EA8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653EAC:
    ctx->pc = 0x80653EACu;
    // 80653EAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653EB0:
    ctx->pc = 0x80653EB0u;
    // 80653EB0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653EB4:
    ctx->pc = 0x80653EB4u;
    // 80653EB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653EB8:
    ctx->pc = 0x80653EB8u;
    // 80653EB8: bc    12, 2, 0x80653EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653EC8;
        }
    }

label_80653EBC:
    ctx->pc = 0x80653EBCu;
    ctx->downcount -= 2;
    // 80653EBC: cmpwi   r4, 0
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

label_80653EC0:
    ctx->pc = 0x80653EC0u;
    // 80653EC0: bc    4, 1, 0x80653EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653EC8;
        }
    }

label_80653EC4:
    ctx->pc = 0x80653EC4u;
    ctx->downcount -= 1;
    // 80653EC4: bl      0x801C1C90
    {
            ctx->lr = 0x80653EC8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80653EC8:
    ctx->pc = 0x80653EC8u;
    ctx->downcount -= 7;
    // 80653EC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653ECC:
    ctx->pc = 0x80653ECCu;
    // 80653ECC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653ED0:
    ctx->pc = 0x80653ED0u;
    // 80653ED0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653ED4:
    ctx->pc = 0x80653ED4u;
    // 80653ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653ED8:
    ctx->pc = 0x80653ED8u;
    // 80653ED8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653EDC:
    ctx->pc = 0x80653EDCu;
    // 80653EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653EE0:
    ctx->pc = 0x80653EE0u;
    ctx->downcount -= 7;
    // 80653EE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653EE4:
    ctx->pc = 0x80653EE4u;
    // 80653EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653EE8:
    ctx->pc = 0x80653EE8u;
    // 80653EE8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653EEC:
    ctx->pc = 0x80653EECu;
    // 80653EEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653EF0:
    ctx->pc = 0x80653EF0u;
    // 80653EF0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653EF4:
    ctx->pc = 0x80653EF4u;
    // 80653EF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653EF8:
    ctx->pc = 0x80653EF8u;
    // 80653EF8: bc    12, 2, 0x80653F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653F08;
        }
    }

label_80653EFC:
    ctx->pc = 0x80653EFCu;
    ctx->downcount -= 2;
    // 80653EFC: cmpwi   r4, 0
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

label_80653F00:
    ctx->pc = 0x80653F00u;
    // 80653F00: bc    4, 1, 0x80653F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653F08;
        }
    }

label_80653F04:
    ctx->pc = 0x80653F04u;
    ctx->downcount -= 1;
    // 80653F04: bl      0x801C1C90
    {
            ctx->lr = 0x80653F08u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80653F08:
    ctx->pc = 0x80653F08u;
    ctx->downcount -= 7;
    // 80653F08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653F0C:
    ctx->pc = 0x80653F0Cu;
    // 80653F0C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653F10:
    ctx->pc = 0x80653F10u;
    // 80653F10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653F14:
    ctx->pc = 0x80653F14u;
    // 80653F14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653F18:
    ctx->pc = 0x80653F18u;
    // 80653F18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653F1C:
    ctx->pc = 0x80653F1Cu;
    // 80653F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653F20:
    ctx->pc = 0x80653F20u;
    ctx->downcount -= 7;
    // 80653F20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80653F24:
    ctx->pc = 0x80653F24u;
    // 80653F24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80653F28:
    ctx->pc = 0x80653F28u;
    // 80653F28: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80653F2C:
    ctx->pc = 0x80653F2Cu;
    // 80653F2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80653F30:
    ctx->pc = 0x80653F30u;
    // 80653F30: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80653F34:
    ctx->pc = 0x80653F34u;
    // 80653F34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80653F38:
    ctx->pc = 0x80653F38u;
    // 80653F38: bc    12, 2, 0x80653F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80653F48;
        }
    }

label_80653F3C:
    ctx->pc = 0x80653F3Cu;
    ctx->downcount -= 2;
    // 80653F3C: cmpwi   r4, 0
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

label_80653F40:
    ctx->pc = 0x80653F40u;
    // 80653F40: bc    4, 1, 0x80653F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80653F48;
        }
    }

label_80653F44:
    ctx->pc = 0x80653F44u;
    ctx->downcount -= 1;
    // 80653F44: bl      0x801C1C90
    {
            ctx->lr = 0x80653F48u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80653F48:
    ctx->pc = 0x80653F48u;
    ctx->downcount -= 7;
    // 80653F48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80653F4C:
    ctx->pc = 0x80653F4Cu;
    // 80653F4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80653F50:
    ctx->pc = 0x80653F50u;
    // 80653F50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653F54:
    ctx->pc = 0x80653F54u;
    // 80653F54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80653F58:
    ctx->pc = 0x80653F58u;
    // 80653F58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80653F5C:
    ctx->pc = 0x80653F5Cu;
    // 80653F5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653F60:
    ctx->pc = 0x80653F60u;
    ctx->downcount -= 3;
    // 80653F60: lis     r3, -32657
    ctx->gpr[3] = ((u32)(s32)(-32657) << 16);

label_80653F64:
    ctx->pc = 0x80653F64u;
    // 80653F64: addi    r3, r3, 36
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(36);

label_80653F68:
    ctx->pc = 0x80653F68u;
    // 80653F68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

label_80653F6C:
    ctx->pc = 0x80653F6Cu;
    ctx->downcount -= 15;
    // 80653F6C: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_80653F70:
    ctx->pc = 0x80653F70u;
    // 80653F70: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_80653F74:
    ctx->pc = 0x80653F74u;
    // 80653F74: lwz     r0, -16016(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653F78:
    ctx->pc = 0x80653F78u;
    // 80653F78: mulli   r3, r3, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_80653F7C:
    ctx->pc = 0x80653F7Cu;
    // 80653F7C: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_80653F80:
    ctx->pc = 0x80653F80u;
    // 80653F80: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80653F84:
    ctx->pc = 0x80653F84u;
    // 80653F84: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80653F88:
    ctx->pc = 0x80653F88u;
    // 80653F88: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80653F8C:
    ctx->pc = 0x80653F8Cu;
    // 80653F8C: lis     r3, -32663
    ctx->gpr[3] = ((u32)(s32)(-32663) << 16);

label_80653F90:
    ctx->pc = 0x80653F90u;
    // 80653F90: addi    r3, r3, -14056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14056);

label_80653F94:
    ctx->pc = 0x80653F94u;
    // 80653F94: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80653F98:
    ctx->pc = 0x80653F98u;
    // 80653F98: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80653F9C:
    ctx->pc = 0x80653F9Cu;
    // 80653F9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806531C0;
        }
    }

    ctx->pc = 0x80653FA0u;
    return;
return_dispatch_806531C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x806531C8u: goto label_806531C8;
    case 0x806531CCu: goto label_806531CC;
    case 0x806531F8u: goto label_806531F8;
    case 0x80653228u: goto label_80653228;
    case 0x80653234u: goto label_80653234;
    case 0x80653238u: goto label_80653238;
    case 0x80653258u: goto label_80653258;
    case 0x8065325Cu: goto label_8065325C;
    case 0x80653278u: goto label_80653278;
    case 0x80653284u: goto label_80653284;
    case 0x80653288u: goto label_80653288;
    case 0x806532A8u: goto label_806532A8;
    case 0x806532ACu: goto label_806532AC;
    case 0x806532FCu: goto label_806532FC;
    case 0x80653390u: goto label_80653390;
    case 0x806533A8u: goto label_806533A8;
    case 0x806533C0u: goto label_806533C0;
    case 0x806533D8u: goto label_806533D8;
    case 0x806533F0u: goto label_806533F0;
    case 0x80653408u: goto label_80653408;
    case 0x80653420u: goto label_80653420;
    case 0x80653430u: goto label_80653430;
    case 0x80653440u: goto label_80653440;
    case 0x80653454u: goto label_80653454;
    case 0x80653464u: goto label_80653464;
    case 0x80653474u: goto label_80653474;
    case 0x80653488u: goto label_80653488;
    case 0x806534ECu: goto label_806534EC;
    case 0x8065355Cu: goto label_8065355C;
    case 0x80653568u: goto label_80653568;
    case 0x80653578u: goto label_80653578;
    case 0x8065362Cu: goto label_8065362C;
    case 0x806536E0u: goto label_806536E0;
    case 0x80653708u: goto label_80653708;
    case 0x80653718u: goto label_80653718;
    case 0x8065374Cu: goto label_8065374C;
    case 0x80653760u: goto label_80653760;
    case 0x80653770u: goto label_80653770;
    case 0x8065377Cu: goto label_8065377C;
    case 0x806537A4u: goto label_806537A4;
    case 0x806537B8u: goto label_806537B8;
    case 0x806537C0u: goto label_806537C0;
    case 0x806537C8u: goto label_806537C8;
    case 0x8065381Cu: goto label_8065381C;
    case 0x80653850u: goto label_80653850;
    case 0x80653868u: goto label_80653868;
    case 0x8065389Cu: goto label_8065389C;
    case 0x806538B8u: goto label_806538B8;
    case 0x806538D0u: goto label_806538D0;
    case 0x806538F4u: goto label_806538F4;
    case 0x806538FCu: goto label_806538FC;
    case 0x80653920u: goto label_80653920;
    case 0x80653958u: goto label_80653958;
    case 0x80653960u: goto label_80653960;
    case 0x80653984u: goto label_80653984;
    case 0x80653A48u: goto label_80653A48;
    case 0x80653A90u: goto label_80653A90;
    case 0x80653AC4u: goto label_80653AC4;
    case 0x80653AECu: goto label_80653AEC;
    case 0x80653AFCu: goto label_80653AFC;
    case 0x80653B08u: goto label_80653B08;
    case 0x80653B14u: goto label_80653B14;
    case 0x80653B34u: goto label_80653B34;
    case 0x80653B6Cu: goto label_80653B6C;
    case 0x80653B84u: goto label_80653B84;
    case 0x80653B8Cu: goto label_80653B8C;
    case 0x80653B94u: goto label_80653B94;
    case 0x80653BB8u: goto label_80653BB8;
    case 0x80653BECu: goto label_80653BEC;
    case 0x80653BF4u: goto label_80653BF4;
    case 0x80653C6Cu: goto label_80653C6C;
    case 0x80653C9Cu: goto label_80653C9C;
    case 0x80653CB4u: goto label_80653CB4;
    case 0x80653CE0u: goto label_80653CE0;
    case 0x80653CF0u: goto label_80653CF0;
    case 0x80653CF8u: goto label_80653CF8;
    case 0x80653D04u: goto label_80653D04;
    case 0x80653D14u: goto label_80653D14;
    case 0x80653D1Cu: goto label_80653D1C;
    case 0x80653D24u: goto label_80653D24;
    case 0x80653D50u: goto label_80653D50;
    case 0x80653D58u: goto label_80653D58;
    case 0x80653D88u: goto label_80653D88;
    case 0x80653D90u: goto label_80653D90;
    case 0x80653DC8u: goto label_80653DC8;
    case 0x80653DD0u: goto label_80653DD0;
    case 0x80653E0Cu: goto label_80653E0C;
    case 0x80653E28u: goto label_80653E28;
    case 0x80653E34u: goto label_80653E34;
    case 0x80653E78u: goto label_80653E78;
    case 0x80653EC8u: goto label_80653EC8;
    case 0x80653F08u: goto label_80653F08;
    case 0x80653F48u: goto label_80653F48;
    default: return;
    }
}

