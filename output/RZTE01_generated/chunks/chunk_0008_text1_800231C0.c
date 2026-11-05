// DolRecomp output
#include "../RZTE01.h"

static void loop_8002664C(CPUState* ctx) {
label_8002664C:
    ctx->downcount -= 16;
    ctx->pc = 0x8002664Cu;
    // 8002664C: lbz     r0, 2362(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2362);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x80026650u;
    // 80026650: lwz     r3, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    // 80026654: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

    ctx->pc = 0x80026658u;
    // 80026658: lbz     r7, 2854(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2854);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

    // 8002665C: add   r0, r10, r0
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x80026660u;
    // 80026660: lbz     r6, 2853(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2853);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

    // 80026664: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

    ctx->pc = 0x80026668u;
    // 80026668: lbz     r8, 2855(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2855);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x8002666Cu;
    // 8002666C: lbz     r5, 2852(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2852);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    // 80026670: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    // 80026674: rlwimi r5, r6, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 8u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

    // 80026678: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

    // 8002667C: rlwimi r5, r7, 16, 8, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 16u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x00FF0000u) | (rot & 0x00FF0000u);
    }

    // 80026680: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    // 80026684: rlwimi r5, r8, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    ctx->pc = 0x80026688u;
    // 80026688: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8002668Cu;
    // 8002668C: lhz     r0, 2928(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2928);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80026690: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

    // 80026694: cmplw   r10, r0
    {
        u32 val_a = (u32)(ctx->gpr[10]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 80026698: bc    12, 0, 0x8002664C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002664Cu;
                return;
            }
            goto label_8002664C;
        }
    }

    ctx->pc = 0x8002669Cu;
}

static void loop_80026990(CPUState* ctx) {
label_80026990:
    ctx->downcount -= 5;
    ctx->pc = 0x80026990u;
    // 80026990: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80026994u;
    // 80026994: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80026998u;
    // 80026998: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x8002699Cu;
    // 8002699C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 800269A0: bc    16, 0, 0x80026990
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80026990u;
                return;
            }
            goto label_80026990;
        }
    }

    ctx->pc = 0x800269A4u;
}

void func_800231C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800231C0u: goto label_800231C0;
    case 0x800231C4u: goto label_800231C4;
    case 0x800231C8u: goto label_800231C8;
    case 0x800231CCu: goto label_800231CC;
    case 0x800231D0u: goto label_800231D0;
    case 0x800231D4u: goto label_800231D4;
    case 0x800231D8u: goto label_800231D8;
    case 0x800231DCu: goto label_800231DC;
    case 0x800231E0u: goto label_800231E0;
    case 0x800231E4u: goto label_800231E4;
    case 0x800231E8u: goto label_800231E8;
    case 0x800231ECu: goto label_800231EC;
    case 0x800231F0u: goto label_800231F0;
    case 0x800231F4u: goto label_800231F4;
    case 0x800231F8u: goto label_800231F8;
    case 0x800231FCu: goto label_800231FC;
    case 0x80023200u: goto label_80023200;
    case 0x80023204u: goto label_80023204;
    case 0x80023208u: goto label_80023208;
    case 0x8002320Cu: goto label_8002320C;
    case 0x80023210u: goto label_80023210;
    case 0x80023214u: goto label_80023214;
    case 0x80023218u: goto label_80023218;
    case 0x8002321Cu: goto label_8002321C;
    case 0x80023220u: goto label_80023220;
    case 0x80023224u: goto label_80023224;
    case 0x80023228u: goto label_80023228;
    case 0x8002322Cu: goto label_8002322C;
    case 0x80023230u: goto label_80023230;
    case 0x80023234u: goto label_80023234;
    case 0x80023238u: goto label_80023238;
    case 0x8002323Cu: goto label_8002323C;
    case 0x80023240u: goto label_80023240;
    case 0x80023244u: goto label_80023244;
    case 0x80023248u: goto label_80023248;
    case 0x8002324Cu: goto label_8002324C;
    case 0x80023250u: goto label_80023250;
    case 0x80023254u: goto label_80023254;
    case 0x80023258u: goto label_80023258;
    case 0x8002325Cu: goto label_8002325C;
    case 0x80023260u: goto label_80023260;
    case 0x80023264u: goto label_80023264;
    case 0x80023268u: goto label_80023268;
    case 0x8002326Cu: goto label_8002326C;
    case 0x80023270u: goto label_80023270;
    case 0x80023274u: goto label_80023274;
    case 0x80023278u: goto label_80023278;
    case 0x8002327Cu: goto label_8002327C;
    case 0x80023280u: goto label_80023280;
    case 0x80023284u: goto label_80023284;
    case 0x80023288u: goto label_80023288;
    case 0x8002328Cu: goto label_8002328C;
    case 0x80023290u: goto label_80023290;
    case 0x80023294u: goto label_80023294;
    case 0x80023298u: goto label_80023298;
    case 0x8002329Cu: goto label_8002329C;
    case 0x800232A0u: goto label_800232A0;
    case 0x800232A4u: goto label_800232A4;
    case 0x800232A8u: goto label_800232A8;
    case 0x800232ACu: goto label_800232AC;
    case 0x800232B0u: goto label_800232B0;
    case 0x800232B4u: goto label_800232B4;
    case 0x800232B8u: goto label_800232B8;
    case 0x800232BCu: goto label_800232BC;
    case 0x800232C0u: goto label_800232C0;
    case 0x800232C4u: goto label_800232C4;
    case 0x800232C8u: goto label_800232C8;
    case 0x800232CCu: goto label_800232CC;
    case 0x800232D0u: goto label_800232D0;
    case 0x800232D4u: goto label_800232D4;
    case 0x800232D8u: goto label_800232D8;
    case 0x800232DCu: goto label_800232DC;
    case 0x800232E0u: goto label_800232E0;
    case 0x800232E4u: goto label_800232E4;
    case 0x800232E8u: goto label_800232E8;
    case 0x800232ECu: goto label_800232EC;
    case 0x800232F0u: goto label_800232F0;
    case 0x800232F4u: goto label_800232F4;
    case 0x800232F8u: goto label_800232F8;
    case 0x800232FCu: goto label_800232FC;
    case 0x80023300u: goto label_80023300;
    case 0x80023304u: goto label_80023304;
    case 0x80023308u: goto label_80023308;
    case 0x8002330Cu: goto label_8002330C;
    case 0x80023310u: goto label_80023310;
    case 0x80023314u: goto label_80023314;
    case 0x80023318u: goto label_80023318;
    case 0x8002331Cu: goto label_8002331C;
    case 0x80023320u: goto label_80023320;
    case 0x80023324u: goto label_80023324;
    case 0x80023328u: goto label_80023328;
    case 0x8002332Cu: goto label_8002332C;
    case 0x80023330u: goto label_80023330;
    case 0x80023334u: goto label_80023334;
    case 0x80023338u: goto label_80023338;
    case 0x8002333Cu: goto label_8002333C;
    case 0x80023340u: goto label_80023340;
    case 0x80023344u: goto label_80023344;
    case 0x80023348u: goto label_80023348;
    case 0x8002334Cu: goto label_8002334C;
    case 0x80023350u: goto label_80023350;
    case 0x80023354u: goto label_80023354;
    case 0x80023358u: goto label_80023358;
    case 0x8002335Cu: goto label_8002335C;
    case 0x80023360u: goto label_80023360;
    case 0x80023364u: goto label_80023364;
    case 0x80023368u: goto label_80023368;
    case 0x8002336Cu: goto label_8002336C;
    case 0x80023370u: goto label_80023370;
    case 0x80023374u: goto label_80023374;
    case 0x80023378u: goto label_80023378;
    case 0x8002337Cu: goto label_8002337C;
    case 0x80023380u: goto label_80023380;
    case 0x80023384u: goto label_80023384;
    case 0x80023388u: goto label_80023388;
    case 0x8002338Cu: goto label_8002338C;
    case 0x80023390u: goto label_80023390;
    case 0x80023394u: goto label_80023394;
    case 0x80023398u: goto label_80023398;
    case 0x8002339Cu: goto label_8002339C;
    case 0x800233A0u: goto label_800233A0;
    case 0x800233A4u: goto label_800233A4;
    case 0x800233A8u: goto label_800233A8;
    case 0x800233ACu: goto label_800233AC;
    case 0x800233B0u: goto label_800233B0;
    case 0x800233B4u: goto label_800233B4;
    case 0x800233B8u: goto label_800233B8;
    case 0x800233BCu: goto label_800233BC;
    case 0x800233C0u: goto label_800233C0;
    case 0x800233C4u: goto label_800233C4;
    case 0x800233C8u: goto label_800233C8;
    case 0x800233CCu: goto label_800233CC;
    case 0x800233D0u: goto label_800233D0;
    case 0x800233D4u: goto label_800233D4;
    case 0x800233D8u: goto label_800233D8;
    case 0x800233DCu: goto label_800233DC;
    case 0x800233E0u: goto label_800233E0;
    case 0x800233E4u: goto label_800233E4;
    case 0x800233E8u: goto label_800233E8;
    case 0x800233ECu: goto label_800233EC;
    case 0x800233F0u: goto label_800233F0;
    case 0x800233F4u: goto label_800233F4;
    case 0x800233F8u: goto label_800233F8;
    case 0x800233FCu: goto label_800233FC;
    case 0x80023400u: goto label_80023400;
    case 0x80023404u: goto label_80023404;
    case 0x80023408u: goto label_80023408;
    case 0x8002340Cu: goto label_8002340C;
    case 0x80023410u: goto label_80023410;
    case 0x80023414u: goto label_80023414;
    case 0x80023418u: goto label_80023418;
    case 0x8002341Cu: goto label_8002341C;
    case 0x80023420u: goto label_80023420;
    case 0x80023424u: goto label_80023424;
    case 0x80023428u: goto label_80023428;
    case 0x8002342Cu: goto label_8002342C;
    case 0x80023430u: goto label_80023430;
    case 0x80023434u: goto label_80023434;
    case 0x80023438u: goto label_80023438;
    case 0x8002343Cu: goto label_8002343C;
    case 0x80023440u: goto label_80023440;
    case 0x80023444u: goto label_80023444;
    case 0x80023448u: goto label_80023448;
    case 0x8002344Cu: goto label_8002344C;
    case 0x80023450u: goto label_80023450;
    case 0x80023454u: goto label_80023454;
    case 0x80023458u: goto label_80023458;
    case 0x8002345Cu: goto label_8002345C;
    case 0x80023460u: goto label_80023460;
    case 0x80023464u: goto label_80023464;
    case 0x80023468u: goto label_80023468;
    case 0x8002346Cu: goto label_8002346C;
    case 0x80023470u: goto label_80023470;
    case 0x80023474u: goto label_80023474;
    case 0x80023478u: goto label_80023478;
    case 0x8002347Cu: goto label_8002347C;
    case 0x80023480u: goto label_80023480;
    case 0x80023484u: goto label_80023484;
    case 0x80023488u: goto label_80023488;
    case 0x8002348Cu: goto label_8002348C;
    case 0x80023490u: goto label_80023490;
    case 0x80023494u: goto label_80023494;
    case 0x80023498u: goto label_80023498;
    case 0x8002349Cu: goto label_8002349C;
    case 0x800234A0u: goto label_800234A0;
    case 0x800234A4u: goto label_800234A4;
    case 0x800234A8u: goto label_800234A8;
    case 0x800234ACu: goto label_800234AC;
    case 0x800234B0u: goto label_800234B0;
    case 0x800234B4u: goto label_800234B4;
    case 0x800234B8u: goto label_800234B8;
    case 0x800234BCu: goto label_800234BC;
    case 0x800234C0u: goto label_800234C0;
    case 0x800234C4u: goto label_800234C4;
    case 0x800234C8u: goto label_800234C8;
    case 0x800234CCu: goto label_800234CC;
    case 0x800234D0u: goto label_800234D0;
    case 0x800234D4u: goto label_800234D4;
    case 0x800234D8u: goto label_800234D8;
    case 0x800234DCu: goto label_800234DC;
    case 0x800234E0u: goto label_800234E0;
    case 0x800234E4u: goto label_800234E4;
    case 0x800234E8u: goto label_800234E8;
    case 0x800234ECu: goto label_800234EC;
    case 0x800234F0u: goto label_800234F0;
    case 0x800234F4u: goto label_800234F4;
    case 0x800234F8u: goto label_800234F8;
    case 0x800234FCu: goto label_800234FC;
    case 0x80023500u: goto label_80023500;
    case 0x80023504u: goto label_80023504;
    case 0x80023508u: goto label_80023508;
    case 0x8002350Cu: goto label_8002350C;
    case 0x80023510u: goto label_80023510;
    case 0x80023514u: goto label_80023514;
    case 0x80023518u: goto label_80023518;
    case 0x8002351Cu: goto label_8002351C;
    case 0x80023520u: goto label_80023520;
    case 0x80023524u: goto label_80023524;
    case 0x80023528u: goto label_80023528;
    case 0x8002352Cu: goto label_8002352C;
    case 0x80023530u: goto label_80023530;
    case 0x80023534u: goto label_80023534;
    case 0x80023538u: goto label_80023538;
    case 0x8002353Cu: goto label_8002353C;
    case 0x80023540u: goto label_80023540;
    case 0x80023544u: goto label_80023544;
    case 0x80023548u: goto label_80023548;
    case 0x8002354Cu: goto label_8002354C;
    case 0x80023550u: goto label_80023550;
    case 0x80023554u: goto label_80023554;
    case 0x80023558u: goto label_80023558;
    case 0x8002355Cu: goto label_8002355C;
    case 0x80023560u: goto label_80023560;
    case 0x80023564u: goto label_80023564;
    case 0x80023568u: goto label_80023568;
    case 0x8002356Cu: goto label_8002356C;
    case 0x80023570u: goto label_80023570;
    case 0x80023574u: goto label_80023574;
    case 0x80023578u: goto label_80023578;
    case 0x8002357Cu: goto label_8002357C;
    case 0x80023580u: goto label_80023580;
    case 0x80023584u: goto label_80023584;
    case 0x80023588u: goto label_80023588;
    case 0x8002358Cu: goto label_8002358C;
    case 0x80023590u: goto label_80023590;
    case 0x80023594u: goto label_80023594;
    case 0x80023598u: goto label_80023598;
    case 0x8002359Cu: goto label_8002359C;
    case 0x800235A0u: goto label_800235A0;
    case 0x800235A4u: goto label_800235A4;
    case 0x800235A8u: goto label_800235A8;
    case 0x800235ACu: goto label_800235AC;
    case 0x800235B0u: goto label_800235B0;
    case 0x800235B4u: goto label_800235B4;
    case 0x800235B8u: goto label_800235B8;
    case 0x800235BCu: goto label_800235BC;
    case 0x800235C0u: goto label_800235C0;
    case 0x800235C4u: goto label_800235C4;
    case 0x800235C8u: goto label_800235C8;
    case 0x800235CCu: goto label_800235CC;
    case 0x800235D0u: goto label_800235D0;
    case 0x800235D4u: goto label_800235D4;
    case 0x800235D8u: goto label_800235D8;
    case 0x800235DCu: goto label_800235DC;
    case 0x800235E0u: goto label_800235E0;
    case 0x800235E4u: goto label_800235E4;
    case 0x800235E8u: goto label_800235E8;
    case 0x800235ECu: goto label_800235EC;
    case 0x800235F0u: goto label_800235F0;
    case 0x800235F4u: goto label_800235F4;
    case 0x800235F8u: goto label_800235F8;
    case 0x800235FCu: goto label_800235FC;
    case 0x80023600u: goto label_80023600;
    case 0x80023604u: goto label_80023604;
    case 0x80023608u: goto label_80023608;
    case 0x8002360Cu: goto label_8002360C;
    case 0x80023610u: goto label_80023610;
    case 0x80023614u: goto label_80023614;
    case 0x80023618u: goto label_80023618;
    case 0x8002361Cu: goto label_8002361C;
    case 0x80023620u: goto label_80023620;
    case 0x80023624u: goto label_80023624;
    case 0x80023628u: goto label_80023628;
    case 0x8002362Cu: goto label_8002362C;
    case 0x80023630u: goto label_80023630;
    case 0x80023634u: goto label_80023634;
    case 0x80023638u: goto label_80023638;
    case 0x8002363Cu: goto label_8002363C;
    case 0x80023640u: goto label_80023640;
    case 0x80023644u: goto label_80023644;
    case 0x80023648u: goto label_80023648;
    case 0x8002364Cu: goto label_8002364C;
    case 0x80023650u: goto label_80023650;
    case 0x80023654u: goto label_80023654;
    case 0x80023658u: goto label_80023658;
    case 0x8002365Cu: goto label_8002365C;
    case 0x80023660u: goto label_80023660;
    case 0x80023664u: goto label_80023664;
    case 0x80023668u: goto label_80023668;
    case 0x8002366Cu: goto label_8002366C;
    case 0x80023670u: goto label_80023670;
    case 0x80023674u: goto label_80023674;
    case 0x80023678u: goto label_80023678;
    case 0x8002367Cu: goto label_8002367C;
    case 0x80023680u: goto label_80023680;
    case 0x80023684u: goto label_80023684;
    case 0x80023688u: goto label_80023688;
    case 0x8002368Cu: goto label_8002368C;
    case 0x80023690u: goto label_80023690;
    case 0x80023694u: goto label_80023694;
    case 0x80023698u: goto label_80023698;
    case 0x8002369Cu: goto label_8002369C;
    case 0x800236A0u: goto label_800236A0;
    case 0x800236A4u: goto label_800236A4;
    case 0x800236A8u: goto label_800236A8;
    case 0x800236ACu: goto label_800236AC;
    case 0x800236B0u: goto label_800236B0;
    case 0x800236B4u: goto label_800236B4;
    case 0x800236B8u: goto label_800236B8;
    case 0x800236BCu: goto label_800236BC;
    case 0x800236C0u: goto label_800236C0;
    case 0x800236C4u: goto label_800236C4;
    case 0x800236C8u: goto label_800236C8;
    case 0x800236CCu: goto label_800236CC;
    case 0x800236D0u: goto label_800236D0;
    case 0x800236D4u: goto label_800236D4;
    case 0x800236D8u: goto label_800236D8;
    case 0x800236DCu: goto label_800236DC;
    case 0x800236E0u: goto label_800236E0;
    case 0x800236E4u: goto label_800236E4;
    case 0x800236E8u: goto label_800236E8;
    case 0x800236ECu: goto label_800236EC;
    case 0x800236F0u: goto label_800236F0;
    case 0x800236F4u: goto label_800236F4;
    case 0x800236F8u: goto label_800236F8;
    case 0x800236FCu: goto label_800236FC;
    case 0x80023700u: goto label_80023700;
    case 0x80023704u: goto label_80023704;
    case 0x80023708u: goto label_80023708;
    case 0x8002370Cu: goto label_8002370C;
    case 0x80023710u: goto label_80023710;
    case 0x80023714u: goto label_80023714;
    case 0x80023718u: goto label_80023718;
    case 0x8002371Cu: goto label_8002371C;
    case 0x80023720u: goto label_80023720;
    case 0x80023724u: goto label_80023724;
    case 0x80023728u: goto label_80023728;
    case 0x8002372Cu: goto label_8002372C;
    case 0x80023730u: goto label_80023730;
    case 0x80023734u: goto label_80023734;
    case 0x80023738u: goto label_80023738;
    case 0x8002373Cu: goto label_8002373C;
    case 0x80023740u: goto label_80023740;
    case 0x80023744u: goto label_80023744;
    case 0x80023748u: goto label_80023748;
    case 0x8002374Cu: goto label_8002374C;
    case 0x80023750u: goto label_80023750;
    case 0x80023754u: goto label_80023754;
    case 0x80023758u: goto label_80023758;
    case 0x8002375Cu: goto label_8002375C;
    case 0x80023760u: goto label_80023760;
    case 0x80023764u: goto label_80023764;
    case 0x80023768u: goto label_80023768;
    case 0x8002376Cu: goto label_8002376C;
    case 0x80023770u: goto label_80023770;
    case 0x80023774u: goto label_80023774;
    case 0x80023778u: goto label_80023778;
    case 0x8002377Cu: goto label_8002377C;
    case 0x80023780u: goto label_80023780;
    case 0x80023784u: goto label_80023784;
    case 0x80023788u: goto label_80023788;
    case 0x8002378Cu: goto label_8002378C;
    case 0x80023790u: goto label_80023790;
    case 0x80023794u: goto label_80023794;
    case 0x80023798u: goto label_80023798;
    case 0x8002379Cu: goto label_8002379C;
    case 0x800237A0u: goto label_800237A0;
    case 0x800237A4u: goto label_800237A4;
    case 0x800237A8u: goto label_800237A8;
    case 0x800237ACu: goto label_800237AC;
    case 0x800237B0u: goto label_800237B0;
    case 0x800237B4u: goto label_800237B4;
    case 0x800237B8u: goto label_800237B8;
    case 0x800237BCu: goto label_800237BC;
    case 0x800237C0u: goto label_800237C0;
    case 0x800237C4u: goto label_800237C4;
    case 0x800237C8u: goto label_800237C8;
    case 0x800237CCu: goto label_800237CC;
    case 0x800237D0u: goto label_800237D0;
    case 0x800237D4u: goto label_800237D4;
    case 0x800237D8u: goto label_800237D8;
    case 0x800237DCu: goto label_800237DC;
    case 0x800237E0u: goto label_800237E0;
    case 0x800237E4u: goto label_800237E4;
    case 0x800237E8u: goto label_800237E8;
    case 0x800237ECu: goto label_800237EC;
    case 0x800237F0u: goto label_800237F0;
    case 0x800237F4u: goto label_800237F4;
    case 0x800237F8u: goto label_800237F8;
    case 0x800237FCu: goto label_800237FC;
    case 0x80023800u: goto label_80023800;
    case 0x80023804u: goto label_80023804;
    case 0x80023808u: goto label_80023808;
    case 0x8002380Cu: goto label_8002380C;
    case 0x80023810u: goto label_80023810;
    case 0x80023814u: goto label_80023814;
    case 0x80023818u: goto label_80023818;
    case 0x8002381Cu: goto label_8002381C;
    case 0x80023820u: goto label_80023820;
    case 0x80023824u: goto label_80023824;
    case 0x80023828u: goto label_80023828;
    case 0x8002382Cu: goto label_8002382C;
    case 0x80023830u: goto label_80023830;
    case 0x80023834u: goto label_80023834;
    case 0x80023838u: goto label_80023838;
    case 0x8002383Cu: goto label_8002383C;
    case 0x80023840u: goto label_80023840;
    case 0x80023844u: goto label_80023844;
    case 0x80023848u: goto label_80023848;
    case 0x8002384Cu: goto label_8002384C;
    case 0x80023850u: goto label_80023850;
    case 0x80023854u: goto label_80023854;
    case 0x80023858u: goto label_80023858;
    case 0x8002385Cu: goto label_8002385C;
    case 0x80023860u: goto label_80023860;
    case 0x80023864u: goto label_80023864;
    case 0x80023868u: goto label_80023868;
    case 0x8002386Cu: goto label_8002386C;
    case 0x80023870u: goto label_80023870;
    case 0x80023874u: goto label_80023874;
    case 0x80023878u: goto label_80023878;
    case 0x8002387Cu: goto label_8002387C;
    case 0x80023880u: goto label_80023880;
    case 0x80023884u: goto label_80023884;
    case 0x80023888u: goto label_80023888;
    case 0x8002388Cu: goto label_8002388C;
    case 0x80023890u: goto label_80023890;
    case 0x80023894u: goto label_80023894;
    case 0x80023898u: goto label_80023898;
    case 0x8002389Cu: goto label_8002389C;
    case 0x800238A0u: goto label_800238A0;
    case 0x800238A4u: goto label_800238A4;
    case 0x800238A8u: goto label_800238A8;
    case 0x800238ACu: goto label_800238AC;
    case 0x800238B0u: goto label_800238B0;
    case 0x800238B4u: goto label_800238B4;
    case 0x800238B8u: goto label_800238B8;
    case 0x800238BCu: goto label_800238BC;
    case 0x800238C0u: goto label_800238C0;
    case 0x800238C4u: goto label_800238C4;
    case 0x800238C8u: goto label_800238C8;
    case 0x800238CCu: goto label_800238CC;
    case 0x800238D0u: goto label_800238D0;
    case 0x800238D4u: goto label_800238D4;
    case 0x800238D8u: goto label_800238D8;
    case 0x800238DCu: goto label_800238DC;
    case 0x800238E0u: goto label_800238E0;
    case 0x800238E4u: goto label_800238E4;
    case 0x800238E8u: goto label_800238E8;
    case 0x800238ECu: goto label_800238EC;
    case 0x800238F0u: goto label_800238F0;
    case 0x800238F4u: goto label_800238F4;
    case 0x800238F8u: goto label_800238F8;
    case 0x800238FCu: goto label_800238FC;
    case 0x80023900u: goto label_80023900;
    case 0x80023904u: goto label_80023904;
    case 0x80023908u: goto label_80023908;
    case 0x8002390Cu: goto label_8002390C;
    case 0x80023910u: goto label_80023910;
    case 0x80023914u: goto label_80023914;
    case 0x80023918u: goto label_80023918;
    case 0x8002391Cu: goto label_8002391C;
    case 0x80023920u: goto label_80023920;
    case 0x80023924u: goto label_80023924;
    case 0x80023928u: goto label_80023928;
    case 0x8002392Cu: goto label_8002392C;
    case 0x80023930u: goto label_80023930;
    case 0x80023934u: goto label_80023934;
    case 0x80023938u: goto label_80023938;
    case 0x8002393Cu: goto label_8002393C;
    case 0x80023940u: goto label_80023940;
    case 0x80023944u: goto label_80023944;
    case 0x80023948u: goto label_80023948;
    case 0x8002394Cu: goto label_8002394C;
    case 0x80023950u: goto label_80023950;
    case 0x80023954u: goto label_80023954;
    case 0x80023958u: goto label_80023958;
    case 0x8002395Cu: goto label_8002395C;
    case 0x80023960u: goto label_80023960;
    case 0x80023964u: goto label_80023964;
    case 0x80023968u: goto label_80023968;
    case 0x8002396Cu: goto label_8002396C;
    case 0x80023970u: goto label_80023970;
    case 0x80023974u: goto label_80023974;
    case 0x80023978u: goto label_80023978;
    case 0x8002397Cu: goto label_8002397C;
    case 0x80023980u: goto label_80023980;
    case 0x80023984u: goto label_80023984;
    case 0x80023988u: goto label_80023988;
    case 0x8002398Cu: goto label_8002398C;
    case 0x80023990u: goto label_80023990;
    case 0x80023994u: goto label_80023994;
    case 0x80023998u: goto label_80023998;
    case 0x8002399Cu: goto label_8002399C;
    case 0x800239A0u: goto label_800239A0;
    case 0x800239A4u: goto label_800239A4;
    case 0x800239A8u: goto label_800239A8;
    case 0x800239ACu: goto label_800239AC;
    case 0x800239B0u: goto label_800239B0;
    case 0x800239B4u: goto label_800239B4;
    case 0x800239B8u: goto label_800239B8;
    case 0x800239BCu: goto label_800239BC;
    case 0x800239C0u: goto label_800239C0;
    case 0x800239C4u: goto label_800239C4;
    case 0x800239C8u: goto label_800239C8;
    case 0x800239CCu: goto label_800239CC;
    case 0x800239D0u: goto label_800239D0;
    case 0x800239D4u: goto label_800239D4;
    case 0x800239D8u: goto label_800239D8;
    case 0x800239DCu: goto label_800239DC;
    case 0x800239E0u: goto label_800239E0;
    case 0x800239E4u: goto label_800239E4;
    case 0x800239E8u: goto label_800239E8;
    case 0x800239ECu: goto label_800239EC;
    case 0x800239F0u: goto label_800239F0;
    case 0x800239F4u: goto label_800239F4;
    case 0x800239F8u: goto label_800239F8;
    case 0x800239FCu: goto label_800239FC;
    case 0x80023A00u: goto label_80023A00;
    case 0x80023A04u: goto label_80023A04;
    case 0x80023A08u: goto label_80023A08;
    case 0x80023A0Cu: goto label_80023A0C;
    case 0x80023A10u: goto label_80023A10;
    case 0x80023A14u: goto label_80023A14;
    case 0x80023A18u: goto label_80023A18;
    case 0x80023A1Cu: goto label_80023A1C;
    case 0x80023A20u: goto label_80023A20;
    case 0x80023A24u: goto label_80023A24;
    case 0x80023A28u: goto label_80023A28;
    case 0x80023A2Cu: goto label_80023A2C;
    case 0x80023A30u: goto label_80023A30;
    case 0x80023A34u: goto label_80023A34;
    case 0x80023A38u: goto label_80023A38;
    case 0x80023A3Cu: goto label_80023A3C;
    case 0x80023A40u: goto label_80023A40;
    case 0x80023A44u: goto label_80023A44;
    case 0x80023A48u: goto label_80023A48;
    case 0x80023A4Cu: goto label_80023A4C;
    case 0x80023A50u: goto label_80023A50;
    case 0x80023A54u: goto label_80023A54;
    case 0x80023A58u: goto label_80023A58;
    case 0x80023A5Cu: goto label_80023A5C;
    case 0x80023A60u: goto label_80023A60;
    case 0x80023A64u: goto label_80023A64;
    case 0x80023A68u: goto label_80023A68;
    case 0x80023A6Cu: goto label_80023A6C;
    case 0x80023A70u: goto label_80023A70;
    case 0x80023A74u: goto label_80023A74;
    case 0x80023A78u: goto label_80023A78;
    case 0x80023A7Cu: goto label_80023A7C;
    case 0x80023A80u: goto label_80023A80;
    case 0x80023A84u: goto label_80023A84;
    case 0x80023A88u: goto label_80023A88;
    case 0x80023A8Cu: goto label_80023A8C;
    case 0x80023A90u: goto label_80023A90;
    case 0x80023A94u: goto label_80023A94;
    case 0x80023A98u: goto label_80023A98;
    case 0x80023A9Cu: goto label_80023A9C;
    case 0x80023AA0u: goto label_80023AA0;
    case 0x80023AA4u: goto label_80023AA4;
    case 0x80023AA8u: goto label_80023AA8;
    case 0x80023AACu: goto label_80023AAC;
    case 0x80023AB0u: goto label_80023AB0;
    case 0x80023AB4u: goto label_80023AB4;
    case 0x80023AB8u: goto label_80023AB8;
    case 0x80023ABCu: goto label_80023ABC;
    case 0x80023AC0u: goto label_80023AC0;
    case 0x80023AC4u: goto label_80023AC4;
    case 0x80023AC8u: goto label_80023AC8;
    case 0x80023ACCu: goto label_80023ACC;
    case 0x80023AD0u: goto label_80023AD0;
    case 0x80023AD4u: goto label_80023AD4;
    case 0x80023AD8u: goto label_80023AD8;
    case 0x80023ADCu: goto label_80023ADC;
    case 0x80023AE0u: goto label_80023AE0;
    case 0x80023AE4u: goto label_80023AE4;
    case 0x80023AE8u: goto label_80023AE8;
    case 0x80023AECu: goto label_80023AEC;
    case 0x80023AF0u: goto label_80023AF0;
    case 0x80023AF4u: goto label_80023AF4;
    case 0x80023AF8u: goto label_80023AF8;
    case 0x80023AFCu: goto label_80023AFC;
    case 0x80023B00u: goto label_80023B00;
    case 0x80023B04u: goto label_80023B04;
    case 0x80023B08u: goto label_80023B08;
    case 0x80023B0Cu: goto label_80023B0C;
    case 0x80023B10u: goto label_80023B10;
    case 0x80023B14u: goto label_80023B14;
    case 0x80023B18u: goto label_80023B18;
    case 0x80023B1Cu: goto label_80023B1C;
    case 0x80023B20u: goto label_80023B20;
    case 0x80023B24u: goto label_80023B24;
    case 0x80023B28u: goto label_80023B28;
    case 0x80023B2Cu: goto label_80023B2C;
    case 0x80023B30u: goto label_80023B30;
    case 0x80023B34u: goto label_80023B34;
    case 0x80023B38u: goto label_80023B38;
    case 0x80023B3Cu: goto label_80023B3C;
    case 0x80023B40u: goto label_80023B40;
    case 0x80023B44u: goto label_80023B44;
    case 0x80023B48u: goto label_80023B48;
    case 0x80023B4Cu: goto label_80023B4C;
    case 0x80023B50u: goto label_80023B50;
    case 0x80023B54u: goto label_80023B54;
    case 0x80023B58u: goto label_80023B58;
    case 0x80023B5Cu: goto label_80023B5C;
    case 0x80023B60u: goto label_80023B60;
    case 0x80023B64u: goto label_80023B64;
    case 0x80023B68u: goto label_80023B68;
    case 0x80023B6Cu: goto label_80023B6C;
    case 0x80023B70u: goto label_80023B70;
    case 0x80023B74u: goto label_80023B74;
    case 0x80023B78u: goto label_80023B78;
    case 0x80023B7Cu: goto label_80023B7C;
    case 0x80023B80u: goto label_80023B80;
    case 0x80023B84u: goto label_80023B84;
    case 0x80023B88u: goto label_80023B88;
    case 0x80023B8Cu: goto label_80023B8C;
    case 0x80023B90u: goto label_80023B90;
    case 0x80023B94u: goto label_80023B94;
    case 0x80023B98u: goto label_80023B98;
    case 0x80023B9Cu: goto label_80023B9C;
    case 0x80023BA0u: goto label_80023BA0;
    case 0x80023BA4u: goto label_80023BA4;
    case 0x80023BA8u: goto label_80023BA8;
    case 0x80023BACu: goto label_80023BAC;
    case 0x80023BB0u: goto label_80023BB0;
    case 0x80023BB4u: goto label_80023BB4;
    case 0x80023BB8u: goto label_80023BB8;
    case 0x80023BBCu: goto label_80023BBC;
    case 0x80023BC0u: goto label_80023BC0;
    case 0x80023BC4u: goto label_80023BC4;
    case 0x80023BC8u: goto label_80023BC8;
    case 0x80023BCCu: goto label_80023BCC;
    case 0x80023BD0u: goto label_80023BD0;
    case 0x80023BD4u: goto label_80023BD4;
    case 0x80023BD8u: goto label_80023BD8;
    case 0x80023BDCu: goto label_80023BDC;
    case 0x80023BE0u: goto label_80023BE0;
    case 0x80023BE4u: goto label_80023BE4;
    case 0x80023BE8u: goto label_80023BE8;
    case 0x80023BECu: goto label_80023BEC;
    case 0x80023BF0u: goto label_80023BF0;
    case 0x80023BF4u: goto label_80023BF4;
    case 0x80023BF8u: goto label_80023BF8;
    case 0x80023BFCu: goto label_80023BFC;
    case 0x80023C00u: goto label_80023C00;
    case 0x80023C04u: goto label_80023C04;
    case 0x80023C08u: goto label_80023C08;
    case 0x80023C0Cu: goto label_80023C0C;
    case 0x80023C10u: goto label_80023C10;
    case 0x80023C14u: goto label_80023C14;
    case 0x80023C18u: goto label_80023C18;
    case 0x80023C1Cu: goto label_80023C1C;
    case 0x80023C20u: goto label_80023C20;
    case 0x80023C24u: goto label_80023C24;
    case 0x80023C28u: goto label_80023C28;
    case 0x80023C2Cu: goto label_80023C2C;
    case 0x80023C30u: goto label_80023C30;
    case 0x80023C34u: goto label_80023C34;
    case 0x80023C38u: goto label_80023C38;
    case 0x80023C3Cu: goto label_80023C3C;
    case 0x80023C40u: goto label_80023C40;
    case 0x80023C44u: goto label_80023C44;
    case 0x80023C48u: goto label_80023C48;
    case 0x80023C4Cu: goto label_80023C4C;
    case 0x80023C50u: goto label_80023C50;
    case 0x80023C54u: goto label_80023C54;
    case 0x80023C58u: goto label_80023C58;
    case 0x80023C5Cu: goto label_80023C5C;
    case 0x80023C60u: goto label_80023C60;
    case 0x80023C64u: goto label_80023C64;
    case 0x80023C68u: goto label_80023C68;
    case 0x80023C6Cu: goto label_80023C6C;
    case 0x80023C70u: goto label_80023C70;
    case 0x80023C74u: goto label_80023C74;
    case 0x80023C78u: goto label_80023C78;
    case 0x80023C7Cu: goto label_80023C7C;
    case 0x80023C80u: goto label_80023C80;
    case 0x80023C84u: goto label_80023C84;
    case 0x80023C88u: goto label_80023C88;
    case 0x80023C8Cu: goto label_80023C8C;
    case 0x80023C90u: goto label_80023C90;
    case 0x80023C94u: goto label_80023C94;
    case 0x80023C98u: goto label_80023C98;
    case 0x80023C9Cu: goto label_80023C9C;
    case 0x80023CA0u: goto label_80023CA0;
    case 0x80023CA4u: goto label_80023CA4;
    case 0x80023CA8u: goto label_80023CA8;
    case 0x80023CACu: goto label_80023CAC;
    case 0x80023CB0u: goto label_80023CB0;
    case 0x80023CB4u: goto label_80023CB4;
    case 0x80023CB8u: goto label_80023CB8;
    case 0x80023CBCu: goto label_80023CBC;
    case 0x80023CC0u: goto label_80023CC0;
    case 0x80023CC4u: goto label_80023CC4;
    case 0x80023CC8u: goto label_80023CC8;
    case 0x80023CCCu: goto label_80023CCC;
    case 0x80023CD0u: goto label_80023CD0;
    case 0x80023CD4u: goto label_80023CD4;
    case 0x80023CD8u: goto label_80023CD8;
    case 0x80023CDCu: goto label_80023CDC;
    case 0x80023CE0u: goto label_80023CE0;
    case 0x80023CE4u: goto label_80023CE4;
    case 0x80023CE8u: goto label_80023CE8;
    case 0x80023CECu: goto label_80023CEC;
    case 0x80023CF0u: goto label_80023CF0;
    case 0x80023CF4u: goto label_80023CF4;
    case 0x80023CF8u: goto label_80023CF8;
    case 0x80023CFCu: goto label_80023CFC;
    case 0x80023D00u: goto label_80023D00;
    case 0x80023D04u: goto label_80023D04;
    case 0x80023D08u: goto label_80023D08;
    case 0x80023D0Cu: goto label_80023D0C;
    case 0x80023D10u: goto label_80023D10;
    case 0x80023D14u: goto label_80023D14;
    case 0x80023D18u: goto label_80023D18;
    case 0x80023D1Cu: goto label_80023D1C;
    case 0x80023D20u: goto label_80023D20;
    case 0x80023D24u: goto label_80023D24;
    case 0x80023D28u: goto label_80023D28;
    case 0x80023D2Cu: goto label_80023D2C;
    case 0x80023D30u: goto label_80023D30;
    case 0x80023D34u: goto label_80023D34;
    case 0x80023D38u: goto label_80023D38;
    case 0x80023D3Cu: goto label_80023D3C;
    case 0x80023D40u: goto label_80023D40;
    case 0x80023D44u: goto label_80023D44;
    case 0x80023D48u: goto label_80023D48;
    case 0x80023D4Cu: goto label_80023D4C;
    case 0x80023D50u: goto label_80023D50;
    case 0x80023D54u: goto label_80023D54;
    case 0x80023D58u: goto label_80023D58;
    case 0x80023D5Cu: goto label_80023D5C;
    case 0x80023D60u: goto label_80023D60;
    case 0x80023D64u: goto label_80023D64;
    case 0x80023D68u: goto label_80023D68;
    case 0x80023D6Cu: goto label_80023D6C;
    case 0x80023D70u: goto label_80023D70;
    case 0x80023D74u: goto label_80023D74;
    case 0x80023D78u: goto label_80023D78;
    case 0x80023D7Cu: goto label_80023D7C;
    case 0x80023D80u: goto label_80023D80;
    case 0x80023D84u: goto label_80023D84;
    case 0x80023D88u: goto label_80023D88;
    case 0x80023D8Cu: goto label_80023D8C;
    case 0x80023D90u: goto label_80023D90;
    case 0x80023D94u: goto label_80023D94;
    case 0x80023D98u: goto label_80023D98;
    case 0x80023D9Cu: goto label_80023D9C;
    case 0x80023DA0u: goto label_80023DA0;
    case 0x80023DA4u: goto label_80023DA4;
    case 0x80023DA8u: goto label_80023DA8;
    case 0x80023DACu: goto label_80023DAC;
    case 0x80023DB0u: goto label_80023DB0;
    case 0x80023DB4u: goto label_80023DB4;
    case 0x80023DB8u: goto label_80023DB8;
    case 0x80023DBCu: goto label_80023DBC;
    case 0x80023DC0u: goto label_80023DC0;
    case 0x80023DC4u: goto label_80023DC4;
    case 0x80023DC8u: goto label_80023DC8;
    case 0x80023DCCu: goto label_80023DCC;
    case 0x80023DD0u: goto label_80023DD0;
    case 0x80023DD4u: goto label_80023DD4;
    case 0x80023DD8u: goto label_80023DD8;
    case 0x80023DDCu: goto label_80023DDC;
    case 0x80023DE0u: goto label_80023DE0;
    case 0x80023DE4u: goto label_80023DE4;
    case 0x80023DE8u: goto label_80023DE8;
    case 0x80023DECu: goto label_80023DEC;
    case 0x80023DF0u: goto label_80023DF0;
    case 0x80023DF4u: goto label_80023DF4;
    case 0x80023DF8u: goto label_80023DF8;
    case 0x80023DFCu: goto label_80023DFC;
    case 0x80023E00u: goto label_80023E00;
    case 0x80023E04u: goto label_80023E04;
    case 0x80023E08u: goto label_80023E08;
    case 0x80023E0Cu: goto label_80023E0C;
    case 0x80023E10u: goto label_80023E10;
    case 0x80023E14u: goto label_80023E14;
    case 0x80023E18u: goto label_80023E18;
    case 0x80023E1Cu: goto label_80023E1C;
    case 0x80023E20u: goto label_80023E20;
    case 0x80023E24u: goto label_80023E24;
    case 0x80023E28u: goto label_80023E28;
    case 0x80023E2Cu: goto label_80023E2C;
    case 0x80023E30u: goto label_80023E30;
    case 0x80023E34u: goto label_80023E34;
    case 0x80023E38u: goto label_80023E38;
    case 0x80023E3Cu: goto label_80023E3C;
    case 0x80023E40u: goto label_80023E40;
    case 0x80023E44u: goto label_80023E44;
    case 0x80023E48u: goto label_80023E48;
    case 0x80023E4Cu: goto label_80023E4C;
    case 0x80023E50u: goto label_80023E50;
    case 0x80023E54u: goto label_80023E54;
    case 0x80023E58u: goto label_80023E58;
    case 0x80023E5Cu: goto label_80023E5C;
    case 0x80023E60u: goto label_80023E60;
    case 0x80023E64u: goto label_80023E64;
    case 0x80023E68u: goto label_80023E68;
    case 0x80023E6Cu: goto label_80023E6C;
    case 0x80023E70u: goto label_80023E70;
    case 0x80023E74u: goto label_80023E74;
    case 0x80023E78u: goto label_80023E78;
    case 0x80023E7Cu: goto label_80023E7C;
    case 0x80023E80u: goto label_80023E80;
    case 0x80023E84u: goto label_80023E84;
    case 0x80023E88u: goto label_80023E88;
    case 0x80023E8Cu: goto label_80023E8C;
    case 0x80023E90u: goto label_80023E90;
    case 0x80023E94u: goto label_80023E94;
    case 0x80023E98u: goto label_80023E98;
    case 0x80023E9Cu: goto label_80023E9C;
    case 0x80023EA0u: goto label_80023EA0;
    case 0x80023EA4u: goto label_80023EA4;
    case 0x80023EA8u: goto label_80023EA8;
    case 0x80023EACu: goto label_80023EAC;
    case 0x80023EB0u: goto label_80023EB0;
    case 0x80023EB4u: goto label_80023EB4;
    case 0x80023EB8u: goto label_80023EB8;
    case 0x80023EBCu: goto label_80023EBC;
    case 0x80023EC0u: goto label_80023EC0;
    case 0x80023EC4u: goto label_80023EC4;
    case 0x80023EC8u: goto label_80023EC8;
    case 0x80023ECCu: goto label_80023ECC;
    case 0x80023ED0u: goto label_80023ED0;
    case 0x80023ED4u: goto label_80023ED4;
    case 0x80023ED8u: goto label_80023ED8;
    case 0x80023EDCu: goto label_80023EDC;
    case 0x80023EE0u: goto label_80023EE0;
    case 0x80023EE4u: goto label_80023EE4;
    case 0x80023EE8u: goto label_80023EE8;
    case 0x80023EECu: goto label_80023EEC;
    case 0x80023EF0u: goto label_80023EF0;
    case 0x80023EF4u: goto label_80023EF4;
    case 0x80023EF8u: goto label_80023EF8;
    case 0x80023EFCu: goto label_80023EFC;
    case 0x80023F00u: goto label_80023F00;
    case 0x80023F04u: goto label_80023F04;
    case 0x80023F08u: goto label_80023F08;
    case 0x80023F0Cu: goto label_80023F0C;
    case 0x80023F10u: goto label_80023F10;
    case 0x80023F14u: goto label_80023F14;
    case 0x80023F18u: goto label_80023F18;
    case 0x80023F1Cu: goto label_80023F1C;
    case 0x80023F20u: goto label_80023F20;
    case 0x80023F24u: goto label_80023F24;
    case 0x80023F28u: goto label_80023F28;
    case 0x80023F2Cu: goto label_80023F2C;
    case 0x80023F30u: goto label_80023F30;
    case 0x80023F34u: goto label_80023F34;
    case 0x80023F38u: goto label_80023F38;
    case 0x80023F3Cu: goto label_80023F3C;
    case 0x80023F40u: goto label_80023F40;
    case 0x80023F44u: goto label_80023F44;
    case 0x80023F48u: goto label_80023F48;
    case 0x80023F4Cu: goto label_80023F4C;
    case 0x80023F50u: goto label_80023F50;
    case 0x80023F54u: goto label_80023F54;
    case 0x80023F58u: goto label_80023F58;
    case 0x80023F5Cu: goto label_80023F5C;
    case 0x80023F60u: goto label_80023F60;
    case 0x80023F64u: goto label_80023F64;
    case 0x80023F68u: goto label_80023F68;
    case 0x80023F6Cu: goto label_80023F6C;
    case 0x80023F70u: goto label_80023F70;
    case 0x80023F74u: goto label_80023F74;
    case 0x80023F78u: goto label_80023F78;
    case 0x80023F7Cu: goto label_80023F7C;
    case 0x80023F80u: goto label_80023F80;
    case 0x80023F84u: goto label_80023F84;
    case 0x80023F88u: goto label_80023F88;
    case 0x80023F8Cu: goto label_80023F8C;
    case 0x80023F90u: goto label_80023F90;
    case 0x80023F94u: goto label_80023F94;
    case 0x80023F98u: goto label_80023F98;
    case 0x80023F9Cu: goto label_80023F9C;
    case 0x80023FA0u: goto label_80023FA0;
    case 0x80023FA4u: goto label_80023FA4;
    case 0x80023FA8u: goto label_80023FA8;
    case 0x80023FACu: goto label_80023FAC;
    case 0x80023FB0u: goto label_80023FB0;
    case 0x80023FB4u: goto label_80023FB4;
    case 0x80023FB8u: goto label_80023FB8;
    case 0x80023FBCu: goto label_80023FBC;
    case 0x80023FC0u: goto label_80023FC0;
    case 0x80023FC4u: goto label_80023FC4;
    case 0x80023FC8u: goto label_80023FC8;
    case 0x80023FCCu: goto label_80023FCC;
    case 0x80023FD0u: goto label_80023FD0;
    case 0x80023FD4u: goto label_80023FD4;
    case 0x80023FD8u: goto label_80023FD8;
    case 0x80023FDCu: goto label_80023FDC;
    case 0x80023FE0u: goto label_80023FE0;
    case 0x80023FE4u: goto label_80023FE4;
    case 0x80023FE8u: goto label_80023FE8;
    case 0x80023FECu: goto label_80023FEC;
    case 0x80023FF0u: goto label_80023FF0;
    case 0x80023FF4u: goto label_80023FF4;
    case 0x80023FF8u: goto label_80023FF8;
    case 0x80023FFCu: goto label_80023FFC;
    case 0x80024000u: goto label_80024000;
    case 0x80024004u: goto label_80024004;
    case 0x80024008u: goto label_80024008;
    case 0x8002400Cu: goto label_8002400C;
    case 0x80024010u: goto label_80024010;
    case 0x80024014u: goto label_80024014;
    case 0x80024018u: goto label_80024018;
    case 0x8002401Cu: goto label_8002401C;
    case 0x80024020u: goto label_80024020;
    case 0x80024024u: goto label_80024024;
    case 0x80024028u: goto label_80024028;
    case 0x8002402Cu: goto label_8002402C;
    case 0x80024030u: goto label_80024030;
    case 0x80024034u: goto label_80024034;
    case 0x80024038u: goto label_80024038;
    case 0x8002403Cu: goto label_8002403C;
    case 0x80024040u: goto label_80024040;
    case 0x80024044u: goto label_80024044;
    case 0x80024048u: goto label_80024048;
    case 0x8002404Cu: goto label_8002404C;
    case 0x80024050u: goto label_80024050;
    case 0x80024054u: goto label_80024054;
    case 0x80024058u: goto label_80024058;
    case 0x8002405Cu: goto label_8002405C;
    case 0x80024060u: goto label_80024060;
    case 0x80024064u: goto label_80024064;
    case 0x80024068u: goto label_80024068;
    case 0x8002406Cu: goto label_8002406C;
    case 0x80024070u: goto label_80024070;
    case 0x80024074u: goto label_80024074;
    case 0x80024078u: goto label_80024078;
    case 0x8002407Cu: goto label_8002407C;
    case 0x80024080u: goto label_80024080;
    case 0x80024084u: goto label_80024084;
    case 0x80024088u: goto label_80024088;
    case 0x8002408Cu: goto label_8002408C;
    case 0x80024090u: goto label_80024090;
    case 0x80024094u: goto label_80024094;
    case 0x80024098u: goto label_80024098;
    case 0x8002409Cu: goto label_8002409C;
    case 0x800240A0u: goto label_800240A0;
    case 0x800240A4u: goto label_800240A4;
    case 0x800240A8u: goto label_800240A8;
    case 0x800240ACu: goto label_800240AC;
    case 0x800240B0u: goto label_800240B0;
    case 0x800240B4u: goto label_800240B4;
    case 0x800240B8u: goto label_800240B8;
    case 0x800240BCu: goto label_800240BC;
    case 0x800240C0u: goto label_800240C0;
    case 0x800240C4u: goto label_800240C4;
    case 0x800240C8u: goto label_800240C8;
    case 0x800240CCu: goto label_800240CC;
    case 0x800240D0u: goto label_800240D0;
    case 0x800240D4u: goto label_800240D4;
    case 0x800240D8u: goto label_800240D8;
    case 0x800240DCu: goto label_800240DC;
    case 0x800240E0u: goto label_800240E0;
    case 0x800240E4u: goto label_800240E4;
    case 0x800240E8u: goto label_800240E8;
    case 0x800240ECu: goto label_800240EC;
    case 0x800240F0u: goto label_800240F0;
    case 0x800240F4u: goto label_800240F4;
    case 0x800240F8u: goto label_800240F8;
    case 0x800240FCu: goto label_800240FC;
    case 0x80024100u: goto label_80024100;
    case 0x80024104u: goto label_80024104;
    case 0x80024108u: goto label_80024108;
    case 0x8002410Cu: goto label_8002410C;
    case 0x80024110u: goto label_80024110;
    case 0x80024114u: goto label_80024114;
    case 0x80024118u: goto label_80024118;
    case 0x8002411Cu: goto label_8002411C;
    case 0x80024120u: goto label_80024120;
    case 0x80024124u: goto label_80024124;
    case 0x80024128u: goto label_80024128;
    case 0x8002412Cu: goto label_8002412C;
    case 0x80024130u: goto label_80024130;
    case 0x80024134u: goto label_80024134;
    case 0x80024138u: goto label_80024138;
    case 0x8002413Cu: goto label_8002413C;
    case 0x80024140u: goto label_80024140;
    case 0x80024144u: goto label_80024144;
    case 0x80024148u: goto label_80024148;
    case 0x8002414Cu: goto label_8002414C;
    case 0x80024150u: goto label_80024150;
    case 0x80024154u: goto label_80024154;
    case 0x80024158u: goto label_80024158;
    case 0x8002415Cu: goto label_8002415C;
    case 0x80024160u: goto label_80024160;
    case 0x80024164u: goto label_80024164;
    case 0x80024168u: goto label_80024168;
    case 0x8002416Cu: goto label_8002416C;
    case 0x80024170u: goto label_80024170;
    case 0x80024174u: goto label_80024174;
    case 0x80024178u: goto label_80024178;
    case 0x8002417Cu: goto label_8002417C;
    case 0x80024180u: goto label_80024180;
    case 0x80024184u: goto label_80024184;
    case 0x80024188u: goto label_80024188;
    case 0x8002418Cu: goto label_8002418C;
    case 0x80024190u: goto label_80024190;
    case 0x80024194u: goto label_80024194;
    case 0x80024198u: goto label_80024198;
    case 0x8002419Cu: goto label_8002419C;
    case 0x800241A0u: goto label_800241A0;
    case 0x800241A4u: goto label_800241A4;
    case 0x800241A8u: goto label_800241A8;
    case 0x800241ACu: goto label_800241AC;
    case 0x800241B0u: goto label_800241B0;
    case 0x800241B4u: goto label_800241B4;
    case 0x800241B8u: goto label_800241B8;
    case 0x800241BCu: goto label_800241BC;
    case 0x800241C0u: goto label_800241C0;
    case 0x800241C4u: goto label_800241C4;
    case 0x800241C8u: goto label_800241C8;
    case 0x800241CCu: goto label_800241CC;
    case 0x800241D0u: goto label_800241D0;
    case 0x800241D4u: goto label_800241D4;
    case 0x800241D8u: goto label_800241D8;
    case 0x800241DCu: goto label_800241DC;
    case 0x800241E0u: goto label_800241E0;
    case 0x800241E4u: goto label_800241E4;
    case 0x800241E8u: goto label_800241E8;
    case 0x800241ECu: goto label_800241EC;
    case 0x800241F0u: goto label_800241F0;
    case 0x800241F4u: goto label_800241F4;
    case 0x800241F8u: goto label_800241F8;
    case 0x800241FCu: goto label_800241FC;
    case 0x80024200u: goto label_80024200;
    case 0x80024204u: goto label_80024204;
    case 0x80024208u: goto label_80024208;
    case 0x8002420Cu: goto label_8002420C;
    case 0x80024210u: goto label_80024210;
    case 0x80024214u: goto label_80024214;
    case 0x80024218u: goto label_80024218;
    case 0x8002421Cu: goto label_8002421C;
    case 0x80024220u: goto label_80024220;
    case 0x80024224u: goto label_80024224;
    case 0x80024228u: goto label_80024228;
    case 0x8002422Cu: goto label_8002422C;
    case 0x80024230u: goto label_80024230;
    case 0x80024234u: goto label_80024234;
    case 0x80024238u: goto label_80024238;
    case 0x8002423Cu: goto label_8002423C;
    case 0x80024240u: goto label_80024240;
    case 0x80024244u: goto label_80024244;
    case 0x80024248u: goto label_80024248;
    case 0x8002424Cu: goto label_8002424C;
    case 0x80024250u: goto label_80024250;
    case 0x80024254u: goto label_80024254;
    case 0x80024258u: goto label_80024258;
    case 0x8002425Cu: goto label_8002425C;
    case 0x80024260u: goto label_80024260;
    case 0x80024264u: goto label_80024264;
    case 0x80024268u: goto label_80024268;
    case 0x8002426Cu: goto label_8002426C;
    case 0x80024270u: goto label_80024270;
    case 0x80024274u: goto label_80024274;
    case 0x80024278u: goto label_80024278;
    case 0x8002427Cu: goto label_8002427C;
    case 0x80024280u: goto label_80024280;
    case 0x80024284u: goto label_80024284;
    case 0x80024288u: goto label_80024288;
    case 0x8002428Cu: goto label_8002428C;
    case 0x80024290u: goto label_80024290;
    case 0x80024294u: goto label_80024294;
    case 0x80024298u: goto label_80024298;
    case 0x8002429Cu: goto label_8002429C;
    case 0x800242A0u: goto label_800242A0;
    case 0x800242A4u: goto label_800242A4;
    case 0x800242A8u: goto label_800242A8;
    case 0x800242ACu: goto label_800242AC;
    case 0x800242B0u: goto label_800242B0;
    case 0x800242B4u: goto label_800242B4;
    case 0x800242B8u: goto label_800242B8;
    case 0x800242BCu: goto label_800242BC;
    case 0x800242C0u: goto label_800242C0;
    case 0x800242C4u: goto label_800242C4;
    case 0x800242C8u: goto label_800242C8;
    case 0x800242CCu: goto label_800242CC;
    case 0x800242D0u: goto label_800242D0;
    case 0x800242D4u: goto label_800242D4;
    case 0x800242D8u: goto label_800242D8;
    case 0x800242DCu: goto label_800242DC;
    case 0x800242E0u: goto label_800242E0;
    case 0x800242E4u: goto label_800242E4;
    case 0x800242E8u: goto label_800242E8;
    case 0x800242ECu: goto label_800242EC;
    case 0x800242F0u: goto label_800242F0;
    case 0x800242F4u: goto label_800242F4;
    case 0x800242F8u: goto label_800242F8;
    case 0x800242FCu: goto label_800242FC;
    case 0x80024300u: goto label_80024300;
    case 0x80024304u: goto label_80024304;
    case 0x80024308u: goto label_80024308;
    case 0x8002430Cu: goto label_8002430C;
    case 0x80024310u: goto label_80024310;
    case 0x80024314u: goto label_80024314;
    case 0x80024318u: goto label_80024318;
    case 0x8002431Cu: goto label_8002431C;
    case 0x80024320u: goto label_80024320;
    case 0x80024324u: goto label_80024324;
    case 0x80024328u: goto label_80024328;
    case 0x8002432Cu: goto label_8002432C;
    case 0x80024330u: goto label_80024330;
    case 0x80024334u: goto label_80024334;
    case 0x80024338u: goto label_80024338;
    case 0x8002433Cu: goto label_8002433C;
    case 0x80024340u: goto label_80024340;
    case 0x80024344u: goto label_80024344;
    case 0x80024348u: goto label_80024348;
    case 0x8002434Cu: goto label_8002434C;
    case 0x80024350u: goto label_80024350;
    case 0x80024354u: goto label_80024354;
    case 0x80024358u: goto label_80024358;
    case 0x8002435Cu: goto label_8002435C;
    case 0x80024360u: goto label_80024360;
    case 0x80024364u: goto label_80024364;
    case 0x80024368u: goto label_80024368;
    case 0x8002436Cu: goto label_8002436C;
    case 0x80024370u: goto label_80024370;
    case 0x80024374u: goto label_80024374;
    case 0x80024378u: goto label_80024378;
    case 0x8002437Cu: goto label_8002437C;
    case 0x80024380u: goto label_80024380;
    case 0x80024384u: goto label_80024384;
    case 0x80024388u: goto label_80024388;
    case 0x8002438Cu: goto label_8002438C;
    case 0x80024390u: goto label_80024390;
    case 0x80024394u: goto label_80024394;
    case 0x80024398u: goto label_80024398;
    case 0x8002439Cu: goto label_8002439C;
    case 0x800243A0u: goto label_800243A0;
    case 0x800243A4u: goto label_800243A4;
    case 0x800243A8u: goto label_800243A8;
    case 0x800243ACu: goto label_800243AC;
    case 0x800243B0u: goto label_800243B0;
    case 0x800243B4u: goto label_800243B4;
    case 0x800243B8u: goto label_800243B8;
    case 0x800243BCu: goto label_800243BC;
    case 0x800243C0u: goto label_800243C0;
    case 0x800243C4u: goto label_800243C4;
    case 0x800243C8u: goto label_800243C8;
    case 0x800243CCu: goto label_800243CC;
    case 0x800243D0u: goto label_800243D0;
    case 0x800243D4u: goto label_800243D4;
    case 0x800243D8u: goto label_800243D8;
    case 0x800243DCu: goto label_800243DC;
    case 0x800243E0u: goto label_800243E0;
    case 0x800243E4u: goto label_800243E4;
    case 0x800243E8u: goto label_800243E8;
    case 0x800243ECu: goto label_800243EC;
    case 0x800243F0u: goto label_800243F0;
    case 0x800243F4u: goto label_800243F4;
    case 0x800243F8u: goto label_800243F8;
    case 0x800243FCu: goto label_800243FC;
    case 0x80024400u: goto label_80024400;
    case 0x80024404u: goto label_80024404;
    case 0x80024408u: goto label_80024408;
    case 0x8002440Cu: goto label_8002440C;
    case 0x80024410u: goto label_80024410;
    case 0x80024414u: goto label_80024414;
    case 0x80024418u: goto label_80024418;
    case 0x8002441Cu: goto label_8002441C;
    case 0x80024420u: goto label_80024420;
    case 0x80024424u: goto label_80024424;
    case 0x80024428u: goto label_80024428;
    case 0x8002442Cu: goto label_8002442C;
    case 0x80024430u: goto label_80024430;
    case 0x80024434u: goto label_80024434;
    case 0x80024438u: goto label_80024438;
    case 0x8002443Cu: goto label_8002443C;
    case 0x80024440u: goto label_80024440;
    case 0x80024444u: goto label_80024444;
    case 0x80024448u: goto label_80024448;
    case 0x8002444Cu: goto label_8002444C;
    case 0x80024450u: goto label_80024450;
    case 0x80024454u: goto label_80024454;
    case 0x80024458u: goto label_80024458;
    case 0x8002445Cu: goto label_8002445C;
    case 0x80024460u: goto label_80024460;
    case 0x80024464u: goto label_80024464;
    case 0x80024468u: goto label_80024468;
    case 0x8002446Cu: goto label_8002446C;
    case 0x80024470u: goto label_80024470;
    case 0x80024474u: goto label_80024474;
    case 0x80024478u: goto label_80024478;
    case 0x8002447Cu: goto label_8002447C;
    case 0x80024480u: goto label_80024480;
    case 0x80024484u: goto label_80024484;
    case 0x80024488u: goto label_80024488;
    case 0x8002448Cu: goto label_8002448C;
    case 0x80024490u: goto label_80024490;
    case 0x80024494u: goto label_80024494;
    case 0x80024498u: goto label_80024498;
    case 0x8002449Cu: goto label_8002449C;
    case 0x800244A0u: goto label_800244A0;
    case 0x800244A4u: goto label_800244A4;
    case 0x800244A8u: goto label_800244A8;
    case 0x800244ACu: goto label_800244AC;
    case 0x800244B0u: goto label_800244B0;
    case 0x800244B4u: goto label_800244B4;
    case 0x800244B8u: goto label_800244B8;
    case 0x800244BCu: goto label_800244BC;
    case 0x800244C0u: goto label_800244C0;
    case 0x800244C4u: goto label_800244C4;
    case 0x800244C8u: goto label_800244C8;
    case 0x800244CCu: goto label_800244CC;
    case 0x800244D0u: goto label_800244D0;
    case 0x800244D4u: goto label_800244D4;
    case 0x800244D8u: goto label_800244D8;
    case 0x800244DCu: goto label_800244DC;
    case 0x800244E0u: goto label_800244E0;
    case 0x800244E4u: goto label_800244E4;
    case 0x800244E8u: goto label_800244E8;
    case 0x800244ECu: goto label_800244EC;
    case 0x800244F0u: goto label_800244F0;
    case 0x800244F4u: goto label_800244F4;
    case 0x800244F8u: goto label_800244F8;
    case 0x800244FCu: goto label_800244FC;
    case 0x80024500u: goto label_80024500;
    case 0x80024504u: goto label_80024504;
    case 0x80024508u: goto label_80024508;
    case 0x8002450Cu: goto label_8002450C;
    case 0x80024510u: goto label_80024510;
    case 0x80024514u: goto label_80024514;
    case 0x80024518u: goto label_80024518;
    case 0x8002451Cu: goto label_8002451C;
    case 0x80024520u: goto label_80024520;
    case 0x80024524u: goto label_80024524;
    case 0x80024528u: goto label_80024528;
    case 0x8002452Cu: goto label_8002452C;
    case 0x80024530u: goto label_80024530;
    case 0x80024534u: goto label_80024534;
    case 0x80024538u: goto label_80024538;
    case 0x8002453Cu: goto label_8002453C;
    case 0x80024540u: goto label_80024540;
    case 0x80024544u: goto label_80024544;
    case 0x80024548u: goto label_80024548;
    case 0x8002454Cu: goto label_8002454C;
    case 0x80024550u: goto label_80024550;
    case 0x80024554u: goto label_80024554;
    case 0x80024558u: goto label_80024558;
    case 0x8002455Cu: goto label_8002455C;
    case 0x80024560u: goto label_80024560;
    case 0x80024564u: goto label_80024564;
    case 0x80024568u: goto label_80024568;
    case 0x8002456Cu: goto label_8002456C;
    case 0x80024570u: goto label_80024570;
    case 0x80024574u: goto label_80024574;
    case 0x80024578u: goto label_80024578;
    case 0x8002457Cu: goto label_8002457C;
    case 0x80024580u: goto label_80024580;
    case 0x80024584u: goto label_80024584;
    case 0x80024588u: goto label_80024588;
    case 0x8002458Cu: goto label_8002458C;
    case 0x80024590u: goto label_80024590;
    case 0x80024594u: goto label_80024594;
    case 0x80024598u: goto label_80024598;
    case 0x8002459Cu: goto label_8002459C;
    case 0x800245A0u: goto label_800245A0;
    case 0x800245A4u: goto label_800245A4;
    case 0x800245A8u: goto label_800245A8;
    case 0x800245ACu: goto label_800245AC;
    case 0x800245B0u: goto label_800245B0;
    case 0x800245B4u: goto label_800245B4;
    case 0x800245B8u: goto label_800245B8;
    case 0x800245BCu: goto label_800245BC;
    case 0x800245C0u: goto label_800245C0;
    case 0x800245C4u: goto label_800245C4;
    case 0x800245C8u: goto label_800245C8;
    case 0x800245CCu: goto label_800245CC;
    case 0x800245D0u: goto label_800245D0;
    case 0x800245D4u: goto label_800245D4;
    case 0x800245D8u: goto label_800245D8;
    case 0x800245DCu: goto label_800245DC;
    case 0x800245E0u: goto label_800245E0;
    case 0x800245E4u: goto label_800245E4;
    case 0x800245E8u: goto label_800245E8;
    case 0x800245ECu: goto label_800245EC;
    case 0x800245F0u: goto label_800245F0;
    case 0x800245F4u: goto label_800245F4;
    case 0x800245F8u: goto label_800245F8;
    case 0x800245FCu: goto label_800245FC;
    case 0x80024600u: goto label_80024600;
    case 0x80024604u: goto label_80024604;
    case 0x80024608u: goto label_80024608;
    case 0x8002460Cu: goto label_8002460C;
    case 0x80024610u: goto label_80024610;
    case 0x80024614u: goto label_80024614;
    case 0x80024618u: goto label_80024618;
    case 0x8002461Cu: goto label_8002461C;
    case 0x80024620u: goto label_80024620;
    case 0x80024624u: goto label_80024624;
    case 0x80024628u: goto label_80024628;
    case 0x8002462Cu: goto label_8002462C;
    case 0x80024630u: goto label_80024630;
    case 0x80024634u: goto label_80024634;
    case 0x80024638u: goto label_80024638;
    case 0x8002463Cu: goto label_8002463C;
    case 0x80024640u: goto label_80024640;
    case 0x80024644u: goto label_80024644;
    case 0x80024648u: goto label_80024648;
    case 0x8002464Cu: goto label_8002464C;
    case 0x80024650u: goto label_80024650;
    case 0x80024654u: goto label_80024654;
    case 0x80024658u: goto label_80024658;
    case 0x8002465Cu: goto label_8002465C;
    case 0x80024660u: goto label_80024660;
    case 0x80024664u: goto label_80024664;
    case 0x80024668u: goto label_80024668;
    case 0x8002466Cu: goto label_8002466C;
    case 0x80024670u: goto label_80024670;
    case 0x80024674u: goto label_80024674;
    case 0x80024678u: goto label_80024678;
    case 0x8002467Cu: goto label_8002467C;
    case 0x80024680u: goto label_80024680;
    case 0x80024684u: goto label_80024684;
    case 0x80024688u: goto label_80024688;
    case 0x8002468Cu: goto label_8002468C;
    case 0x80024690u: goto label_80024690;
    case 0x80024694u: goto label_80024694;
    case 0x80024698u: goto label_80024698;
    case 0x8002469Cu: goto label_8002469C;
    case 0x800246A0u: goto label_800246A0;
    case 0x800246A4u: goto label_800246A4;
    case 0x800246A8u: goto label_800246A8;
    case 0x800246ACu: goto label_800246AC;
    case 0x800246B0u: goto label_800246B0;
    case 0x800246B4u: goto label_800246B4;
    case 0x800246B8u: goto label_800246B8;
    case 0x800246BCu: goto label_800246BC;
    case 0x800246C0u: goto label_800246C0;
    case 0x800246C4u: goto label_800246C4;
    case 0x800246C8u: goto label_800246C8;
    case 0x800246CCu: goto label_800246CC;
    case 0x800246D0u: goto label_800246D0;
    case 0x800246D4u: goto label_800246D4;
    case 0x800246D8u: goto label_800246D8;
    case 0x800246DCu: goto label_800246DC;
    case 0x800246E0u: goto label_800246E0;
    case 0x800246E4u: goto label_800246E4;
    case 0x800246E8u: goto label_800246E8;
    case 0x800246ECu: goto label_800246EC;
    case 0x800246F0u: goto label_800246F0;
    case 0x800246F4u: goto label_800246F4;
    case 0x800246F8u: goto label_800246F8;
    case 0x800246FCu: goto label_800246FC;
    case 0x80024700u: goto label_80024700;
    case 0x80024704u: goto label_80024704;
    case 0x80024708u: goto label_80024708;
    case 0x8002470Cu: goto label_8002470C;
    case 0x80024710u: goto label_80024710;
    case 0x80024714u: goto label_80024714;
    case 0x80024718u: goto label_80024718;
    case 0x8002471Cu: goto label_8002471C;
    case 0x80024720u: goto label_80024720;
    case 0x80024724u: goto label_80024724;
    case 0x80024728u: goto label_80024728;
    case 0x8002472Cu: goto label_8002472C;
    case 0x80024730u: goto label_80024730;
    case 0x80024734u: goto label_80024734;
    case 0x80024738u: goto label_80024738;
    case 0x8002473Cu: goto label_8002473C;
    case 0x80024740u: goto label_80024740;
    case 0x80024744u: goto label_80024744;
    case 0x80024748u: goto label_80024748;
    case 0x8002474Cu: goto label_8002474C;
    case 0x80024750u: goto label_80024750;
    case 0x80024754u: goto label_80024754;
    case 0x80024758u: goto label_80024758;
    case 0x8002475Cu: goto label_8002475C;
    case 0x80024760u: goto label_80024760;
    case 0x80024764u: goto label_80024764;
    case 0x80024768u: goto label_80024768;
    case 0x8002476Cu: goto label_8002476C;
    case 0x80024770u: goto label_80024770;
    case 0x80024774u: goto label_80024774;
    case 0x80024778u: goto label_80024778;
    case 0x8002477Cu: goto label_8002477C;
    case 0x80024780u: goto label_80024780;
    case 0x80024784u: goto label_80024784;
    case 0x80024788u: goto label_80024788;
    case 0x8002478Cu: goto label_8002478C;
    case 0x80024790u: goto label_80024790;
    case 0x80024794u: goto label_80024794;
    case 0x80024798u: goto label_80024798;
    case 0x8002479Cu: goto label_8002479C;
    case 0x800247A0u: goto label_800247A0;
    case 0x800247A4u: goto label_800247A4;
    case 0x800247A8u: goto label_800247A8;
    case 0x800247ACu: goto label_800247AC;
    case 0x800247B0u: goto label_800247B0;
    case 0x800247B4u: goto label_800247B4;
    case 0x800247B8u: goto label_800247B8;
    case 0x800247BCu: goto label_800247BC;
    case 0x800247C0u: goto label_800247C0;
    case 0x800247C4u: goto label_800247C4;
    case 0x800247C8u: goto label_800247C8;
    case 0x800247CCu: goto label_800247CC;
    case 0x800247D0u: goto label_800247D0;
    case 0x800247D4u: goto label_800247D4;
    case 0x800247D8u: goto label_800247D8;
    case 0x800247DCu: goto label_800247DC;
    case 0x800247E0u: goto label_800247E0;
    case 0x800247E4u: goto label_800247E4;
    case 0x800247E8u: goto label_800247E8;
    case 0x800247ECu: goto label_800247EC;
    case 0x800247F0u: goto label_800247F0;
    case 0x800247F4u: goto label_800247F4;
    case 0x800247F8u: goto label_800247F8;
    case 0x800247FCu: goto label_800247FC;
    case 0x80024800u: goto label_80024800;
    case 0x80024804u: goto label_80024804;
    case 0x80024808u: goto label_80024808;
    case 0x8002480Cu: goto label_8002480C;
    case 0x80024810u: goto label_80024810;
    case 0x80024814u: goto label_80024814;
    case 0x80024818u: goto label_80024818;
    case 0x8002481Cu: goto label_8002481C;
    case 0x80024820u: goto label_80024820;
    case 0x80024824u: goto label_80024824;
    case 0x80024828u: goto label_80024828;
    case 0x8002482Cu: goto label_8002482C;
    case 0x80024830u: goto label_80024830;
    case 0x80024834u: goto label_80024834;
    case 0x80024838u: goto label_80024838;
    case 0x8002483Cu: goto label_8002483C;
    case 0x80024840u: goto label_80024840;
    case 0x80024844u: goto label_80024844;
    case 0x80024848u: goto label_80024848;
    case 0x8002484Cu: goto label_8002484C;
    case 0x80024850u: goto label_80024850;
    case 0x80024854u: goto label_80024854;
    case 0x80024858u: goto label_80024858;
    case 0x8002485Cu: goto label_8002485C;
    case 0x80024860u: goto label_80024860;
    case 0x80024864u: goto label_80024864;
    case 0x80024868u: goto label_80024868;
    case 0x8002486Cu: goto label_8002486C;
    case 0x80024870u: goto label_80024870;
    case 0x80024874u: goto label_80024874;
    case 0x80024878u: goto label_80024878;
    case 0x8002487Cu: goto label_8002487C;
    case 0x80024880u: goto label_80024880;
    case 0x80024884u: goto label_80024884;
    case 0x80024888u: goto label_80024888;
    case 0x8002488Cu: goto label_8002488C;
    case 0x80024890u: goto label_80024890;
    case 0x80024894u: goto label_80024894;
    case 0x80024898u: goto label_80024898;
    case 0x8002489Cu: goto label_8002489C;
    case 0x800248A0u: goto label_800248A0;
    case 0x800248A4u: goto label_800248A4;
    case 0x800248A8u: goto label_800248A8;
    case 0x800248ACu: goto label_800248AC;
    case 0x800248B0u: goto label_800248B0;
    case 0x800248B4u: goto label_800248B4;
    case 0x800248B8u: goto label_800248B8;
    case 0x800248BCu: goto label_800248BC;
    case 0x800248C0u: goto label_800248C0;
    case 0x800248C4u: goto label_800248C4;
    case 0x800248C8u: goto label_800248C8;
    case 0x800248CCu: goto label_800248CC;
    case 0x800248D0u: goto label_800248D0;
    case 0x800248D4u: goto label_800248D4;
    case 0x800248D8u: goto label_800248D8;
    case 0x800248DCu: goto label_800248DC;
    case 0x800248E0u: goto label_800248E0;
    case 0x800248E4u: goto label_800248E4;
    case 0x800248E8u: goto label_800248E8;
    case 0x800248ECu: goto label_800248EC;
    case 0x800248F0u: goto label_800248F0;
    case 0x800248F4u: goto label_800248F4;
    case 0x800248F8u: goto label_800248F8;
    case 0x800248FCu: goto label_800248FC;
    case 0x80024900u: goto label_80024900;
    case 0x80024904u: goto label_80024904;
    case 0x80024908u: goto label_80024908;
    case 0x8002490Cu: goto label_8002490C;
    case 0x80024910u: goto label_80024910;
    case 0x80024914u: goto label_80024914;
    case 0x80024918u: goto label_80024918;
    case 0x8002491Cu: goto label_8002491C;
    case 0x80024920u: goto label_80024920;
    case 0x80024924u: goto label_80024924;
    case 0x80024928u: goto label_80024928;
    case 0x8002492Cu: goto label_8002492C;
    case 0x80024930u: goto label_80024930;
    case 0x80024934u: goto label_80024934;
    case 0x80024938u: goto label_80024938;
    case 0x8002493Cu: goto label_8002493C;
    case 0x80024940u: goto label_80024940;
    case 0x80024944u: goto label_80024944;
    case 0x80024948u: goto label_80024948;
    case 0x8002494Cu: goto label_8002494C;
    case 0x80024950u: goto label_80024950;
    case 0x80024954u: goto label_80024954;
    case 0x80024958u: goto label_80024958;
    case 0x8002495Cu: goto label_8002495C;
    case 0x80024960u: goto label_80024960;
    case 0x80024964u: goto label_80024964;
    case 0x80024968u: goto label_80024968;
    case 0x8002496Cu: goto label_8002496C;
    case 0x80024970u: goto label_80024970;
    case 0x80024974u: goto label_80024974;
    case 0x80024978u: goto label_80024978;
    case 0x8002497Cu: goto label_8002497C;
    case 0x80024980u: goto label_80024980;
    case 0x80024984u: goto label_80024984;
    case 0x80024988u: goto label_80024988;
    case 0x8002498Cu: goto label_8002498C;
    case 0x80024990u: goto label_80024990;
    case 0x80024994u: goto label_80024994;
    case 0x80024998u: goto label_80024998;
    case 0x8002499Cu: goto label_8002499C;
    case 0x800249A0u: goto label_800249A0;
    case 0x800249A4u: goto label_800249A4;
    case 0x800249A8u: goto label_800249A8;
    case 0x800249ACu: goto label_800249AC;
    case 0x800249B0u: goto label_800249B0;
    case 0x800249B4u: goto label_800249B4;
    case 0x800249B8u: goto label_800249B8;
    case 0x800249BCu: goto label_800249BC;
    case 0x800249C0u: goto label_800249C0;
    case 0x800249C4u: goto label_800249C4;
    case 0x800249C8u: goto label_800249C8;
    case 0x800249CCu: goto label_800249CC;
    case 0x800249D0u: goto label_800249D0;
    case 0x800249D4u: goto label_800249D4;
    case 0x800249D8u: goto label_800249D8;
    case 0x800249DCu: goto label_800249DC;
    case 0x800249E0u: goto label_800249E0;
    case 0x800249E4u: goto label_800249E4;
    case 0x800249E8u: goto label_800249E8;
    case 0x800249ECu: goto label_800249EC;
    case 0x800249F0u: goto label_800249F0;
    case 0x800249F4u: goto label_800249F4;
    case 0x800249F8u: goto label_800249F8;
    case 0x800249FCu: goto label_800249FC;
    case 0x80024A00u: goto label_80024A00;
    case 0x80024A04u: goto label_80024A04;
    case 0x80024A08u: goto label_80024A08;
    case 0x80024A0Cu: goto label_80024A0C;
    case 0x80024A10u: goto label_80024A10;
    case 0x80024A14u: goto label_80024A14;
    case 0x80024A18u: goto label_80024A18;
    case 0x80024A1Cu: goto label_80024A1C;
    case 0x80024A20u: goto label_80024A20;
    case 0x80024A24u: goto label_80024A24;
    case 0x80024A28u: goto label_80024A28;
    case 0x80024A2Cu: goto label_80024A2C;
    case 0x80024A30u: goto label_80024A30;
    case 0x80024A34u: goto label_80024A34;
    case 0x80024A38u: goto label_80024A38;
    case 0x80024A3Cu: goto label_80024A3C;
    case 0x80024A40u: goto label_80024A40;
    case 0x80024A44u: goto label_80024A44;
    case 0x80024A48u: goto label_80024A48;
    case 0x80024A4Cu: goto label_80024A4C;
    case 0x80024A50u: goto label_80024A50;
    case 0x80024A54u: goto label_80024A54;
    case 0x80024A58u: goto label_80024A58;
    case 0x80024A5Cu: goto label_80024A5C;
    case 0x80024A60u: goto label_80024A60;
    case 0x80024A64u: goto label_80024A64;
    case 0x80024A68u: goto label_80024A68;
    case 0x80024A6Cu: goto label_80024A6C;
    case 0x80024A70u: goto label_80024A70;
    case 0x80024A74u: goto label_80024A74;
    case 0x80024A78u: goto label_80024A78;
    case 0x80024A7Cu: goto label_80024A7C;
    case 0x80024A80u: goto label_80024A80;
    case 0x80024A84u: goto label_80024A84;
    case 0x80024A88u: goto label_80024A88;
    case 0x80024A8Cu: goto label_80024A8C;
    case 0x80024A90u: goto label_80024A90;
    case 0x80024A94u: goto label_80024A94;
    case 0x80024A98u: goto label_80024A98;
    case 0x80024A9Cu: goto label_80024A9C;
    case 0x80024AA0u: goto label_80024AA0;
    case 0x80024AA4u: goto label_80024AA4;
    case 0x80024AA8u: goto label_80024AA8;
    case 0x80024AACu: goto label_80024AAC;
    case 0x80024AB0u: goto label_80024AB0;
    case 0x80024AB4u: goto label_80024AB4;
    case 0x80024AB8u: goto label_80024AB8;
    case 0x80024ABCu: goto label_80024ABC;
    case 0x80024AC0u: goto label_80024AC0;
    case 0x80024AC4u: goto label_80024AC4;
    case 0x80024AC8u: goto label_80024AC8;
    case 0x80024ACCu: goto label_80024ACC;
    case 0x80024AD0u: goto label_80024AD0;
    case 0x80024AD4u: goto label_80024AD4;
    case 0x80024AD8u: goto label_80024AD8;
    case 0x80024ADCu: goto label_80024ADC;
    case 0x80024AE0u: goto label_80024AE0;
    case 0x80024AE4u: goto label_80024AE4;
    case 0x80024AE8u: goto label_80024AE8;
    case 0x80024AECu: goto label_80024AEC;
    case 0x80024AF0u: goto label_80024AF0;
    case 0x80024AF4u: goto label_80024AF4;
    case 0x80024AF8u: goto label_80024AF8;
    case 0x80024AFCu: goto label_80024AFC;
    case 0x80024B00u: goto label_80024B00;
    case 0x80024B04u: goto label_80024B04;
    case 0x80024B08u: goto label_80024B08;
    case 0x80024B0Cu: goto label_80024B0C;
    case 0x80024B10u: goto label_80024B10;
    case 0x80024B14u: goto label_80024B14;
    case 0x80024B18u: goto label_80024B18;
    case 0x80024B1Cu: goto label_80024B1C;
    case 0x80024B20u: goto label_80024B20;
    case 0x80024B24u: goto label_80024B24;
    case 0x80024B28u: goto label_80024B28;
    case 0x80024B2Cu: goto label_80024B2C;
    case 0x80024B30u: goto label_80024B30;
    case 0x80024B34u: goto label_80024B34;
    case 0x80024B38u: goto label_80024B38;
    case 0x80024B3Cu: goto label_80024B3C;
    case 0x80024B40u: goto label_80024B40;
    case 0x80024B44u: goto label_80024B44;
    case 0x80024B48u: goto label_80024B48;
    case 0x80024B4Cu: goto label_80024B4C;
    case 0x80024B50u: goto label_80024B50;
    case 0x80024B54u: goto label_80024B54;
    case 0x80024B58u: goto label_80024B58;
    case 0x80024B5Cu: goto label_80024B5C;
    case 0x80024B60u: goto label_80024B60;
    case 0x80024B64u: goto label_80024B64;
    case 0x80024B68u: goto label_80024B68;
    case 0x80024B6Cu: goto label_80024B6C;
    case 0x80024B70u: goto label_80024B70;
    case 0x80024B74u: goto label_80024B74;
    case 0x80024B78u: goto label_80024B78;
    case 0x80024B7Cu: goto label_80024B7C;
    case 0x80024B80u: goto label_80024B80;
    case 0x80024B84u: goto label_80024B84;
    case 0x80024B88u: goto label_80024B88;
    case 0x80024B8Cu: goto label_80024B8C;
    case 0x80024B90u: goto label_80024B90;
    case 0x80024B94u: goto label_80024B94;
    case 0x80024B98u: goto label_80024B98;
    case 0x80024B9Cu: goto label_80024B9C;
    case 0x80024BA0u: goto label_80024BA0;
    case 0x80024BA4u: goto label_80024BA4;
    case 0x80024BA8u: goto label_80024BA8;
    case 0x80024BACu: goto label_80024BAC;
    case 0x80024BB0u: goto label_80024BB0;
    case 0x80024BB4u: goto label_80024BB4;
    case 0x80024BB8u: goto label_80024BB8;
    case 0x80024BBCu: goto label_80024BBC;
    case 0x80024BC0u: goto label_80024BC0;
    case 0x80024BC4u: goto label_80024BC4;
    case 0x80024BC8u: goto label_80024BC8;
    case 0x80024BCCu: goto label_80024BCC;
    case 0x80024BD0u: goto label_80024BD0;
    case 0x80024BD4u: goto label_80024BD4;
    case 0x80024BD8u: goto label_80024BD8;
    case 0x80024BDCu: goto label_80024BDC;
    case 0x80024BE0u: goto label_80024BE0;
    case 0x80024BE4u: goto label_80024BE4;
    case 0x80024BE8u: goto label_80024BE8;
    case 0x80024BECu: goto label_80024BEC;
    case 0x80024BF0u: goto label_80024BF0;
    case 0x80024BF4u: goto label_80024BF4;
    case 0x80024BF8u: goto label_80024BF8;
    case 0x80024BFCu: goto label_80024BFC;
    case 0x80024C00u: goto label_80024C00;
    case 0x80024C04u: goto label_80024C04;
    case 0x80024C08u: goto label_80024C08;
    case 0x80024C0Cu: goto label_80024C0C;
    case 0x80024C10u: goto label_80024C10;
    case 0x80024C14u: goto label_80024C14;
    case 0x80024C18u: goto label_80024C18;
    case 0x80024C1Cu: goto label_80024C1C;
    case 0x80024C20u: goto label_80024C20;
    case 0x80024C24u: goto label_80024C24;
    case 0x80024C28u: goto label_80024C28;
    case 0x80024C2Cu: goto label_80024C2C;
    case 0x80024C30u: goto label_80024C30;
    case 0x80024C34u: goto label_80024C34;
    case 0x80024C38u: goto label_80024C38;
    case 0x80024C3Cu: goto label_80024C3C;
    case 0x80024C40u: goto label_80024C40;
    case 0x80024C44u: goto label_80024C44;
    case 0x80024C48u: goto label_80024C48;
    case 0x80024C4Cu: goto label_80024C4C;
    case 0x80024C50u: goto label_80024C50;
    case 0x80024C54u: goto label_80024C54;
    case 0x80024C58u: goto label_80024C58;
    case 0x80024C5Cu: goto label_80024C5C;
    case 0x80024C60u: goto label_80024C60;
    case 0x80024C64u: goto label_80024C64;
    case 0x80024C68u: goto label_80024C68;
    case 0x80024C6Cu: goto label_80024C6C;
    case 0x80024C70u: goto label_80024C70;
    case 0x80024C74u: goto label_80024C74;
    case 0x80024C78u: goto label_80024C78;
    case 0x80024C7Cu: goto label_80024C7C;
    case 0x80024C80u: goto label_80024C80;
    case 0x80024C84u: goto label_80024C84;
    case 0x80024C88u: goto label_80024C88;
    case 0x80024C8Cu: goto label_80024C8C;
    case 0x80024C90u: goto label_80024C90;
    case 0x80024C94u: goto label_80024C94;
    case 0x80024C98u: goto label_80024C98;
    case 0x80024C9Cu: goto label_80024C9C;
    case 0x80024CA0u: goto label_80024CA0;
    case 0x80024CA4u: goto label_80024CA4;
    case 0x80024CA8u: goto label_80024CA8;
    case 0x80024CACu: goto label_80024CAC;
    case 0x80024CB0u: goto label_80024CB0;
    case 0x80024CB4u: goto label_80024CB4;
    case 0x80024CB8u: goto label_80024CB8;
    case 0x80024CBCu: goto label_80024CBC;
    case 0x80024CC0u: goto label_80024CC0;
    case 0x80024CC4u: goto label_80024CC4;
    case 0x80024CC8u: goto label_80024CC8;
    case 0x80024CCCu: goto label_80024CCC;
    case 0x80024CD0u: goto label_80024CD0;
    case 0x80024CD4u: goto label_80024CD4;
    case 0x80024CD8u: goto label_80024CD8;
    case 0x80024CDCu: goto label_80024CDC;
    case 0x80024CE0u: goto label_80024CE0;
    case 0x80024CE4u: goto label_80024CE4;
    case 0x80024CE8u: goto label_80024CE8;
    case 0x80024CECu: goto label_80024CEC;
    case 0x80024CF0u: goto label_80024CF0;
    case 0x80024CF4u: goto label_80024CF4;
    case 0x80024CF8u: goto label_80024CF8;
    case 0x80024CFCu: goto label_80024CFC;
    case 0x80024D00u: goto label_80024D00;
    case 0x80024D04u: goto label_80024D04;
    case 0x80024D08u: goto label_80024D08;
    case 0x80024D0Cu: goto label_80024D0C;
    case 0x80024D10u: goto label_80024D10;
    case 0x80024D14u: goto label_80024D14;
    case 0x80024D18u: goto label_80024D18;
    case 0x80024D1Cu: goto label_80024D1C;
    case 0x80024D20u: goto label_80024D20;
    case 0x80024D24u: goto label_80024D24;
    case 0x80024D28u: goto label_80024D28;
    case 0x80024D2Cu: goto label_80024D2C;
    case 0x80024D30u: goto label_80024D30;
    case 0x80024D34u: goto label_80024D34;
    case 0x80024D38u: goto label_80024D38;
    case 0x80024D3Cu: goto label_80024D3C;
    case 0x80024D40u: goto label_80024D40;
    case 0x80024D44u: goto label_80024D44;
    case 0x80024D48u: goto label_80024D48;
    case 0x80024D4Cu: goto label_80024D4C;
    case 0x80024D50u: goto label_80024D50;
    case 0x80024D54u: goto label_80024D54;
    case 0x80024D58u: goto label_80024D58;
    case 0x80024D5Cu: goto label_80024D5C;
    case 0x80024D60u: goto label_80024D60;
    case 0x80024D64u: goto label_80024D64;
    case 0x80024D68u: goto label_80024D68;
    case 0x80024D6Cu: goto label_80024D6C;
    case 0x80024D70u: goto label_80024D70;
    case 0x80024D74u: goto label_80024D74;
    case 0x80024D78u: goto label_80024D78;
    case 0x80024D7Cu: goto label_80024D7C;
    case 0x80024D80u: goto label_80024D80;
    case 0x80024D84u: goto label_80024D84;
    case 0x80024D88u: goto label_80024D88;
    case 0x80024D8Cu: goto label_80024D8C;
    case 0x80024D90u: goto label_80024D90;
    case 0x80024D94u: goto label_80024D94;
    case 0x80024D98u: goto label_80024D98;
    case 0x80024D9Cu: goto label_80024D9C;
    case 0x80024DA0u: goto label_80024DA0;
    case 0x80024DA4u: goto label_80024DA4;
    case 0x80024DA8u: goto label_80024DA8;
    case 0x80024DACu: goto label_80024DAC;
    case 0x80024DB0u: goto label_80024DB0;
    case 0x80024DB4u: goto label_80024DB4;
    case 0x80024DB8u: goto label_80024DB8;
    case 0x80024DBCu: goto label_80024DBC;
    case 0x80024DC0u: goto label_80024DC0;
    case 0x80024DC4u: goto label_80024DC4;
    case 0x80024DC8u: goto label_80024DC8;
    case 0x80024DCCu: goto label_80024DCC;
    case 0x80024DD0u: goto label_80024DD0;
    case 0x80024DD4u: goto label_80024DD4;
    case 0x80024DD8u: goto label_80024DD8;
    case 0x80024DDCu: goto label_80024DDC;
    case 0x80024DE0u: goto label_80024DE0;
    case 0x80024DE4u: goto label_80024DE4;
    case 0x80024DE8u: goto label_80024DE8;
    case 0x80024DECu: goto label_80024DEC;
    case 0x80024DF0u: goto label_80024DF0;
    case 0x80024DF4u: goto label_80024DF4;
    case 0x80024DF8u: goto label_80024DF8;
    case 0x80024DFCu: goto label_80024DFC;
    case 0x80024E00u: goto label_80024E00;
    case 0x80024E04u: goto label_80024E04;
    case 0x80024E08u: goto label_80024E08;
    case 0x80024E0Cu: goto label_80024E0C;
    case 0x80024E10u: goto label_80024E10;
    case 0x80024E14u: goto label_80024E14;
    case 0x80024E18u: goto label_80024E18;
    case 0x80024E1Cu: goto label_80024E1C;
    case 0x80024E20u: goto label_80024E20;
    case 0x80024E24u: goto label_80024E24;
    case 0x80024E28u: goto label_80024E28;
    case 0x80024E2Cu: goto label_80024E2C;
    case 0x80024E30u: goto label_80024E30;
    case 0x80024E34u: goto label_80024E34;
    case 0x80024E38u: goto label_80024E38;
    case 0x80024E3Cu: goto label_80024E3C;
    case 0x80024E40u: goto label_80024E40;
    case 0x80024E44u: goto label_80024E44;
    case 0x80024E48u: goto label_80024E48;
    case 0x80024E4Cu: goto label_80024E4C;
    case 0x80024E50u: goto label_80024E50;
    case 0x80024E54u: goto label_80024E54;
    case 0x80024E58u: goto label_80024E58;
    case 0x80024E5Cu: goto label_80024E5C;
    case 0x80024E60u: goto label_80024E60;
    case 0x80024E64u: goto label_80024E64;
    case 0x80024E68u: goto label_80024E68;
    case 0x80024E6Cu: goto label_80024E6C;
    case 0x80024E70u: goto label_80024E70;
    case 0x80024E74u: goto label_80024E74;
    case 0x80024E78u: goto label_80024E78;
    case 0x80024E7Cu: goto label_80024E7C;
    case 0x80024E80u: goto label_80024E80;
    case 0x80024E84u: goto label_80024E84;
    case 0x80024E88u: goto label_80024E88;
    case 0x80024E8Cu: goto label_80024E8C;
    case 0x80024E90u: goto label_80024E90;
    case 0x80024E94u: goto label_80024E94;
    case 0x80024E98u: goto label_80024E98;
    case 0x80024E9Cu: goto label_80024E9C;
    case 0x80024EA0u: goto label_80024EA0;
    case 0x80024EA4u: goto label_80024EA4;
    case 0x80024EA8u: goto label_80024EA8;
    case 0x80024EACu: goto label_80024EAC;
    case 0x80024EB0u: goto label_80024EB0;
    case 0x80024EB4u: goto label_80024EB4;
    case 0x80024EB8u: goto label_80024EB8;
    case 0x80024EBCu: goto label_80024EBC;
    case 0x80024EC0u: goto label_80024EC0;
    case 0x80024EC4u: goto label_80024EC4;
    case 0x80024EC8u: goto label_80024EC8;
    case 0x80024ECCu: goto label_80024ECC;
    case 0x80024ED0u: goto label_80024ED0;
    case 0x80024ED4u: goto label_80024ED4;
    case 0x80024ED8u: goto label_80024ED8;
    case 0x80024EDCu: goto label_80024EDC;
    case 0x80024EE0u: goto label_80024EE0;
    case 0x80024EE4u: goto label_80024EE4;
    case 0x80024EE8u: goto label_80024EE8;
    case 0x80024EECu: goto label_80024EEC;
    case 0x80024EF0u: goto label_80024EF0;
    case 0x80024EF4u: goto label_80024EF4;
    case 0x80024EF8u: goto label_80024EF8;
    case 0x80024EFCu: goto label_80024EFC;
    case 0x80024F00u: goto label_80024F00;
    case 0x80024F04u: goto label_80024F04;
    case 0x80024F08u: goto label_80024F08;
    case 0x80024F0Cu: goto label_80024F0C;
    case 0x80024F10u: goto label_80024F10;
    case 0x80024F14u: goto label_80024F14;
    case 0x80024F18u: goto label_80024F18;
    case 0x80024F1Cu: goto label_80024F1C;
    case 0x80024F20u: goto label_80024F20;
    case 0x80024F24u: goto label_80024F24;
    case 0x80024F28u: goto label_80024F28;
    case 0x80024F2Cu: goto label_80024F2C;
    case 0x80024F30u: goto label_80024F30;
    case 0x80024F34u: goto label_80024F34;
    case 0x80024F38u: goto label_80024F38;
    case 0x80024F3Cu: goto label_80024F3C;
    case 0x80024F40u: goto label_80024F40;
    case 0x80024F44u: goto label_80024F44;
    case 0x80024F48u: goto label_80024F48;
    case 0x80024F4Cu: goto label_80024F4C;
    case 0x80024F50u: goto label_80024F50;
    case 0x80024F54u: goto label_80024F54;
    case 0x80024F58u: goto label_80024F58;
    case 0x80024F5Cu: goto label_80024F5C;
    case 0x80024F60u: goto label_80024F60;
    case 0x80024F64u: goto label_80024F64;
    case 0x80024F68u: goto label_80024F68;
    case 0x80024F6Cu: goto label_80024F6C;
    case 0x80024F70u: goto label_80024F70;
    case 0x80024F74u: goto label_80024F74;
    case 0x80024F78u: goto label_80024F78;
    case 0x80024F7Cu: goto label_80024F7C;
    case 0x80024F80u: goto label_80024F80;
    case 0x80024F84u: goto label_80024F84;
    case 0x80024F88u: goto label_80024F88;
    case 0x80024F8Cu: goto label_80024F8C;
    case 0x80024F90u: goto label_80024F90;
    case 0x80024F94u: goto label_80024F94;
    case 0x80024F98u: goto label_80024F98;
    case 0x80024F9Cu: goto label_80024F9C;
    case 0x80024FA0u: goto label_80024FA0;
    case 0x80024FA4u: goto label_80024FA4;
    case 0x80024FA8u: goto label_80024FA8;
    case 0x80024FACu: goto label_80024FAC;
    case 0x80024FB0u: goto label_80024FB0;
    case 0x80024FB4u: goto label_80024FB4;
    case 0x80024FB8u: goto label_80024FB8;
    case 0x80024FBCu: goto label_80024FBC;
    case 0x80024FC0u: goto label_80024FC0;
    case 0x80024FC4u: goto label_80024FC4;
    case 0x80024FC8u: goto label_80024FC8;
    case 0x80024FCCu: goto label_80024FCC;
    case 0x80024FD0u: goto label_80024FD0;
    case 0x80024FD4u: goto label_80024FD4;
    case 0x80024FD8u: goto label_80024FD8;
    case 0x80024FDCu: goto label_80024FDC;
    case 0x80024FE0u: goto label_80024FE0;
    case 0x80024FE4u: goto label_80024FE4;
    case 0x80024FE8u: goto label_80024FE8;
    case 0x80024FECu: goto label_80024FEC;
    case 0x80024FF0u: goto label_80024FF0;
    case 0x80024FF4u: goto label_80024FF4;
    case 0x80024FF8u: goto label_80024FF8;
    case 0x80024FFCu: goto label_80024FFC;
    case 0x80025000u: goto label_80025000;
    case 0x80025004u: goto label_80025004;
    case 0x80025008u: goto label_80025008;
    case 0x8002500Cu: goto label_8002500C;
    case 0x80025010u: goto label_80025010;
    case 0x80025014u: goto label_80025014;
    case 0x80025018u: goto label_80025018;
    case 0x8002501Cu: goto label_8002501C;
    case 0x80025020u: goto label_80025020;
    case 0x80025024u: goto label_80025024;
    case 0x80025028u: goto label_80025028;
    case 0x8002502Cu: goto label_8002502C;
    case 0x80025030u: goto label_80025030;
    case 0x80025034u: goto label_80025034;
    case 0x80025038u: goto label_80025038;
    case 0x8002503Cu: goto label_8002503C;
    case 0x80025040u: goto label_80025040;
    case 0x80025044u: goto label_80025044;
    case 0x80025048u: goto label_80025048;
    case 0x8002504Cu: goto label_8002504C;
    case 0x80025050u: goto label_80025050;
    case 0x80025054u: goto label_80025054;
    case 0x80025058u: goto label_80025058;
    case 0x8002505Cu: goto label_8002505C;
    case 0x80025060u: goto label_80025060;
    case 0x80025064u: goto label_80025064;
    case 0x80025068u: goto label_80025068;
    case 0x8002506Cu: goto label_8002506C;
    case 0x80025070u: goto label_80025070;
    case 0x80025074u: goto label_80025074;
    case 0x80025078u: goto label_80025078;
    case 0x8002507Cu: goto label_8002507C;
    case 0x80025080u: goto label_80025080;
    case 0x80025084u: goto label_80025084;
    case 0x80025088u: goto label_80025088;
    case 0x8002508Cu: goto label_8002508C;
    case 0x80025090u: goto label_80025090;
    case 0x80025094u: goto label_80025094;
    case 0x80025098u: goto label_80025098;
    case 0x8002509Cu: goto label_8002509C;
    case 0x800250A0u: goto label_800250A0;
    case 0x800250A4u: goto label_800250A4;
    case 0x800250A8u: goto label_800250A8;
    case 0x800250ACu: goto label_800250AC;
    case 0x800250B0u: goto label_800250B0;
    case 0x800250B4u: goto label_800250B4;
    case 0x800250B8u: goto label_800250B8;
    case 0x800250BCu: goto label_800250BC;
    case 0x800250C0u: goto label_800250C0;
    case 0x800250C4u: goto label_800250C4;
    case 0x800250C8u: goto label_800250C8;
    case 0x800250CCu: goto label_800250CC;
    case 0x800250D0u: goto label_800250D0;
    case 0x800250D4u: goto label_800250D4;
    case 0x800250D8u: goto label_800250D8;
    case 0x800250DCu: goto label_800250DC;
    case 0x800250E0u: goto label_800250E0;
    case 0x800250E4u: goto label_800250E4;
    case 0x800250E8u: goto label_800250E8;
    case 0x800250ECu: goto label_800250EC;
    case 0x800250F0u: goto label_800250F0;
    case 0x800250F4u: goto label_800250F4;
    case 0x800250F8u: goto label_800250F8;
    case 0x800250FCu: goto label_800250FC;
    case 0x80025100u: goto label_80025100;
    case 0x80025104u: goto label_80025104;
    case 0x80025108u: goto label_80025108;
    case 0x8002510Cu: goto label_8002510C;
    case 0x80025110u: goto label_80025110;
    case 0x80025114u: goto label_80025114;
    case 0x80025118u: goto label_80025118;
    case 0x8002511Cu: goto label_8002511C;
    case 0x80025120u: goto label_80025120;
    case 0x80025124u: goto label_80025124;
    case 0x80025128u: goto label_80025128;
    case 0x8002512Cu: goto label_8002512C;
    case 0x80025130u: goto label_80025130;
    case 0x80025134u: goto label_80025134;
    case 0x80025138u: goto label_80025138;
    case 0x8002513Cu: goto label_8002513C;
    case 0x80025140u: goto label_80025140;
    case 0x80025144u: goto label_80025144;
    case 0x80025148u: goto label_80025148;
    case 0x8002514Cu: goto label_8002514C;
    case 0x80025150u: goto label_80025150;
    case 0x80025154u: goto label_80025154;
    case 0x80025158u: goto label_80025158;
    case 0x8002515Cu: goto label_8002515C;
    case 0x80025160u: goto label_80025160;
    case 0x80025164u: goto label_80025164;
    case 0x80025168u: goto label_80025168;
    case 0x8002516Cu: goto label_8002516C;
    case 0x80025170u: goto label_80025170;
    case 0x80025174u: goto label_80025174;
    case 0x80025178u: goto label_80025178;
    case 0x8002517Cu: goto label_8002517C;
    case 0x80025180u: goto label_80025180;
    case 0x80025184u: goto label_80025184;
    case 0x80025188u: goto label_80025188;
    case 0x8002518Cu: goto label_8002518C;
    case 0x80025190u: goto label_80025190;
    case 0x80025194u: goto label_80025194;
    case 0x80025198u: goto label_80025198;
    case 0x8002519Cu: goto label_8002519C;
    case 0x800251A0u: goto label_800251A0;
    case 0x800251A4u: goto label_800251A4;
    case 0x800251A8u: goto label_800251A8;
    case 0x800251ACu: goto label_800251AC;
    case 0x800251B0u: goto label_800251B0;
    case 0x800251B4u: goto label_800251B4;
    case 0x800251B8u: goto label_800251B8;
    case 0x800251BCu: goto label_800251BC;
    case 0x800251C0u: goto label_800251C0;
    case 0x800251C4u: goto label_800251C4;
    case 0x800251C8u: goto label_800251C8;
    case 0x800251CCu: goto label_800251CC;
    case 0x800251D0u: goto label_800251D0;
    case 0x800251D4u: goto label_800251D4;
    case 0x800251D8u: goto label_800251D8;
    case 0x800251DCu: goto label_800251DC;
    case 0x800251E0u: goto label_800251E0;
    case 0x800251E4u: goto label_800251E4;
    case 0x800251E8u: goto label_800251E8;
    case 0x800251ECu: goto label_800251EC;
    case 0x800251F0u: goto label_800251F0;
    case 0x800251F4u: goto label_800251F4;
    case 0x800251F8u: goto label_800251F8;
    case 0x800251FCu: goto label_800251FC;
    case 0x80025200u: goto label_80025200;
    case 0x80025204u: goto label_80025204;
    case 0x80025208u: goto label_80025208;
    case 0x8002520Cu: goto label_8002520C;
    case 0x80025210u: goto label_80025210;
    case 0x80025214u: goto label_80025214;
    case 0x80025218u: goto label_80025218;
    case 0x8002521Cu: goto label_8002521C;
    case 0x80025220u: goto label_80025220;
    case 0x80025224u: goto label_80025224;
    case 0x80025228u: goto label_80025228;
    case 0x8002522Cu: goto label_8002522C;
    case 0x80025230u: goto label_80025230;
    case 0x80025234u: goto label_80025234;
    case 0x80025238u: goto label_80025238;
    case 0x8002523Cu: goto label_8002523C;
    case 0x80025240u: goto label_80025240;
    case 0x80025244u: goto label_80025244;
    case 0x80025248u: goto label_80025248;
    case 0x8002524Cu: goto label_8002524C;
    case 0x80025250u: goto label_80025250;
    case 0x80025254u: goto label_80025254;
    case 0x80025258u: goto label_80025258;
    case 0x8002525Cu: goto label_8002525C;
    case 0x80025260u: goto label_80025260;
    case 0x80025264u: goto label_80025264;
    case 0x80025268u: goto label_80025268;
    case 0x8002526Cu: goto label_8002526C;
    case 0x80025270u: goto label_80025270;
    case 0x80025274u: goto label_80025274;
    case 0x80025278u: goto label_80025278;
    case 0x8002527Cu: goto label_8002527C;
    case 0x80025280u: goto label_80025280;
    case 0x80025284u: goto label_80025284;
    case 0x80025288u: goto label_80025288;
    case 0x8002528Cu: goto label_8002528C;
    case 0x80025290u: goto label_80025290;
    case 0x80025294u: goto label_80025294;
    case 0x80025298u: goto label_80025298;
    case 0x8002529Cu: goto label_8002529C;
    case 0x800252A0u: goto label_800252A0;
    case 0x800252A4u: goto label_800252A4;
    case 0x800252A8u: goto label_800252A8;
    case 0x800252ACu: goto label_800252AC;
    case 0x800252B0u: goto label_800252B0;
    case 0x800252B4u: goto label_800252B4;
    case 0x800252B8u: goto label_800252B8;
    case 0x800252BCu: goto label_800252BC;
    case 0x800252C0u: goto label_800252C0;
    case 0x800252C4u: goto label_800252C4;
    case 0x800252C8u: goto label_800252C8;
    case 0x800252CCu: goto label_800252CC;
    case 0x800252D0u: goto label_800252D0;
    case 0x800252D4u: goto label_800252D4;
    case 0x800252D8u: goto label_800252D8;
    case 0x800252DCu: goto label_800252DC;
    case 0x800252E0u: goto label_800252E0;
    case 0x800252E4u: goto label_800252E4;
    case 0x800252E8u: goto label_800252E8;
    case 0x800252ECu: goto label_800252EC;
    case 0x800252F0u: goto label_800252F0;
    case 0x800252F4u: goto label_800252F4;
    case 0x800252F8u: goto label_800252F8;
    case 0x800252FCu: goto label_800252FC;
    case 0x80025300u: goto label_80025300;
    case 0x80025304u: goto label_80025304;
    case 0x80025308u: goto label_80025308;
    case 0x8002530Cu: goto label_8002530C;
    case 0x80025310u: goto label_80025310;
    case 0x80025314u: goto label_80025314;
    case 0x80025318u: goto label_80025318;
    case 0x8002531Cu: goto label_8002531C;
    case 0x80025320u: goto label_80025320;
    case 0x80025324u: goto label_80025324;
    case 0x80025328u: goto label_80025328;
    case 0x8002532Cu: goto label_8002532C;
    case 0x80025330u: goto label_80025330;
    case 0x80025334u: goto label_80025334;
    case 0x80025338u: goto label_80025338;
    case 0x8002533Cu: goto label_8002533C;
    case 0x80025340u: goto label_80025340;
    case 0x80025344u: goto label_80025344;
    case 0x80025348u: goto label_80025348;
    case 0x8002534Cu: goto label_8002534C;
    case 0x80025350u: goto label_80025350;
    case 0x80025354u: goto label_80025354;
    case 0x80025358u: goto label_80025358;
    case 0x8002535Cu: goto label_8002535C;
    case 0x80025360u: goto label_80025360;
    case 0x80025364u: goto label_80025364;
    case 0x80025368u: goto label_80025368;
    case 0x8002536Cu: goto label_8002536C;
    case 0x80025370u: goto label_80025370;
    case 0x80025374u: goto label_80025374;
    case 0x80025378u: goto label_80025378;
    case 0x8002537Cu: goto label_8002537C;
    case 0x80025380u: goto label_80025380;
    case 0x80025384u: goto label_80025384;
    case 0x80025388u: goto label_80025388;
    case 0x8002538Cu: goto label_8002538C;
    case 0x80025390u: goto label_80025390;
    case 0x80025394u: goto label_80025394;
    case 0x80025398u: goto label_80025398;
    case 0x8002539Cu: goto label_8002539C;
    case 0x800253A0u: goto label_800253A0;
    case 0x800253A4u: goto label_800253A4;
    case 0x800253A8u: goto label_800253A8;
    case 0x800253ACu: goto label_800253AC;
    case 0x800253B0u: goto label_800253B0;
    case 0x800253B4u: goto label_800253B4;
    case 0x800253B8u: goto label_800253B8;
    case 0x800253BCu: goto label_800253BC;
    case 0x800253C0u: goto label_800253C0;
    case 0x800253C4u: goto label_800253C4;
    case 0x800253C8u: goto label_800253C8;
    case 0x800253CCu: goto label_800253CC;
    case 0x800253D0u: goto label_800253D0;
    case 0x800253D4u: goto label_800253D4;
    case 0x800253D8u: goto label_800253D8;
    case 0x800253DCu: goto label_800253DC;
    case 0x800253E0u: goto label_800253E0;
    case 0x800253E4u: goto label_800253E4;
    case 0x800253E8u: goto label_800253E8;
    case 0x800253ECu: goto label_800253EC;
    case 0x800253F0u: goto label_800253F0;
    case 0x800253F4u: goto label_800253F4;
    case 0x800253F8u: goto label_800253F8;
    case 0x800253FCu: goto label_800253FC;
    case 0x80025400u: goto label_80025400;
    case 0x80025404u: goto label_80025404;
    case 0x80025408u: goto label_80025408;
    case 0x8002540Cu: goto label_8002540C;
    case 0x80025410u: goto label_80025410;
    case 0x80025414u: goto label_80025414;
    case 0x80025418u: goto label_80025418;
    case 0x8002541Cu: goto label_8002541C;
    case 0x80025420u: goto label_80025420;
    case 0x80025424u: goto label_80025424;
    case 0x80025428u: goto label_80025428;
    case 0x8002542Cu: goto label_8002542C;
    case 0x80025430u: goto label_80025430;
    case 0x80025434u: goto label_80025434;
    case 0x80025438u: goto label_80025438;
    case 0x8002543Cu: goto label_8002543C;
    case 0x80025440u: goto label_80025440;
    case 0x80025444u: goto label_80025444;
    case 0x80025448u: goto label_80025448;
    case 0x8002544Cu: goto label_8002544C;
    case 0x80025450u: goto label_80025450;
    case 0x80025454u: goto label_80025454;
    case 0x80025458u: goto label_80025458;
    case 0x8002545Cu: goto label_8002545C;
    case 0x80025460u: goto label_80025460;
    case 0x80025464u: goto label_80025464;
    case 0x80025468u: goto label_80025468;
    case 0x8002546Cu: goto label_8002546C;
    case 0x80025470u: goto label_80025470;
    case 0x80025474u: goto label_80025474;
    case 0x80025478u: goto label_80025478;
    case 0x8002547Cu: goto label_8002547C;
    case 0x80025480u: goto label_80025480;
    case 0x80025484u: goto label_80025484;
    case 0x80025488u: goto label_80025488;
    case 0x8002548Cu: goto label_8002548C;
    case 0x80025490u: goto label_80025490;
    case 0x80025494u: goto label_80025494;
    case 0x80025498u: goto label_80025498;
    case 0x8002549Cu: goto label_8002549C;
    case 0x800254A0u: goto label_800254A0;
    case 0x800254A4u: goto label_800254A4;
    case 0x800254A8u: goto label_800254A8;
    case 0x800254ACu: goto label_800254AC;
    case 0x800254B0u: goto label_800254B0;
    case 0x800254B4u: goto label_800254B4;
    case 0x800254B8u: goto label_800254B8;
    case 0x800254BCu: goto label_800254BC;
    case 0x800254C0u: goto label_800254C0;
    case 0x800254C4u: goto label_800254C4;
    case 0x800254C8u: goto label_800254C8;
    case 0x800254CCu: goto label_800254CC;
    case 0x800254D0u: goto label_800254D0;
    case 0x800254D4u: goto label_800254D4;
    case 0x800254D8u: goto label_800254D8;
    case 0x800254DCu: goto label_800254DC;
    case 0x800254E0u: goto label_800254E0;
    case 0x800254E4u: goto label_800254E4;
    case 0x800254E8u: goto label_800254E8;
    case 0x800254ECu: goto label_800254EC;
    case 0x800254F0u: goto label_800254F0;
    case 0x800254F4u: goto label_800254F4;
    case 0x800254F8u: goto label_800254F8;
    case 0x800254FCu: goto label_800254FC;
    case 0x80025500u: goto label_80025500;
    case 0x80025504u: goto label_80025504;
    case 0x80025508u: goto label_80025508;
    case 0x8002550Cu: goto label_8002550C;
    case 0x80025510u: goto label_80025510;
    case 0x80025514u: goto label_80025514;
    case 0x80025518u: goto label_80025518;
    case 0x8002551Cu: goto label_8002551C;
    case 0x80025520u: goto label_80025520;
    case 0x80025524u: goto label_80025524;
    case 0x80025528u: goto label_80025528;
    case 0x8002552Cu: goto label_8002552C;
    case 0x80025530u: goto label_80025530;
    case 0x80025534u: goto label_80025534;
    case 0x80025538u: goto label_80025538;
    case 0x8002553Cu: goto label_8002553C;
    case 0x80025540u: goto label_80025540;
    case 0x80025544u: goto label_80025544;
    case 0x80025548u: goto label_80025548;
    case 0x8002554Cu: goto label_8002554C;
    case 0x80025550u: goto label_80025550;
    case 0x80025554u: goto label_80025554;
    case 0x80025558u: goto label_80025558;
    case 0x8002555Cu: goto label_8002555C;
    case 0x80025560u: goto label_80025560;
    case 0x80025564u: goto label_80025564;
    case 0x80025568u: goto label_80025568;
    case 0x8002556Cu: goto label_8002556C;
    case 0x80025570u: goto label_80025570;
    case 0x80025574u: goto label_80025574;
    case 0x80025578u: goto label_80025578;
    case 0x8002557Cu: goto label_8002557C;
    case 0x80025580u: goto label_80025580;
    case 0x80025584u: goto label_80025584;
    case 0x80025588u: goto label_80025588;
    case 0x8002558Cu: goto label_8002558C;
    case 0x80025590u: goto label_80025590;
    case 0x80025594u: goto label_80025594;
    case 0x80025598u: goto label_80025598;
    case 0x8002559Cu: goto label_8002559C;
    case 0x800255A0u: goto label_800255A0;
    case 0x800255A4u: goto label_800255A4;
    case 0x800255A8u: goto label_800255A8;
    case 0x800255ACu: goto label_800255AC;
    case 0x800255B0u: goto label_800255B0;
    case 0x800255B4u: goto label_800255B4;
    case 0x800255B8u: goto label_800255B8;
    case 0x800255BCu: goto label_800255BC;
    case 0x800255C0u: goto label_800255C0;
    case 0x800255C4u: goto label_800255C4;
    case 0x800255C8u: goto label_800255C8;
    case 0x800255CCu: goto label_800255CC;
    case 0x800255D0u: goto label_800255D0;
    case 0x800255D4u: goto label_800255D4;
    case 0x800255D8u: goto label_800255D8;
    case 0x800255DCu: goto label_800255DC;
    case 0x800255E0u: goto label_800255E0;
    case 0x800255E4u: goto label_800255E4;
    case 0x800255E8u: goto label_800255E8;
    case 0x800255ECu: goto label_800255EC;
    case 0x800255F0u: goto label_800255F0;
    case 0x800255F4u: goto label_800255F4;
    case 0x800255F8u: goto label_800255F8;
    case 0x800255FCu: goto label_800255FC;
    case 0x80025600u: goto label_80025600;
    case 0x80025604u: goto label_80025604;
    case 0x80025608u: goto label_80025608;
    case 0x8002560Cu: goto label_8002560C;
    case 0x80025610u: goto label_80025610;
    case 0x80025614u: goto label_80025614;
    case 0x80025618u: goto label_80025618;
    case 0x8002561Cu: goto label_8002561C;
    case 0x80025620u: goto label_80025620;
    case 0x80025624u: goto label_80025624;
    case 0x80025628u: goto label_80025628;
    case 0x8002562Cu: goto label_8002562C;
    case 0x80025630u: goto label_80025630;
    case 0x80025634u: goto label_80025634;
    case 0x80025638u: goto label_80025638;
    case 0x8002563Cu: goto label_8002563C;
    case 0x80025640u: goto label_80025640;
    case 0x80025644u: goto label_80025644;
    case 0x80025648u: goto label_80025648;
    case 0x8002564Cu: goto label_8002564C;
    case 0x80025650u: goto label_80025650;
    case 0x80025654u: goto label_80025654;
    case 0x80025658u: goto label_80025658;
    case 0x8002565Cu: goto label_8002565C;
    case 0x80025660u: goto label_80025660;
    case 0x80025664u: goto label_80025664;
    case 0x80025668u: goto label_80025668;
    case 0x8002566Cu: goto label_8002566C;
    case 0x80025670u: goto label_80025670;
    case 0x80025674u: goto label_80025674;
    case 0x80025678u: goto label_80025678;
    case 0x8002567Cu: goto label_8002567C;
    case 0x80025680u: goto label_80025680;
    case 0x80025684u: goto label_80025684;
    case 0x80025688u: goto label_80025688;
    case 0x8002568Cu: goto label_8002568C;
    case 0x80025690u: goto label_80025690;
    case 0x80025694u: goto label_80025694;
    case 0x80025698u: goto label_80025698;
    case 0x8002569Cu: goto label_8002569C;
    case 0x800256A0u: goto label_800256A0;
    case 0x800256A4u: goto label_800256A4;
    case 0x800256A8u: goto label_800256A8;
    case 0x800256ACu: goto label_800256AC;
    case 0x800256B0u: goto label_800256B0;
    case 0x800256B4u: goto label_800256B4;
    case 0x800256B8u: goto label_800256B8;
    case 0x800256BCu: goto label_800256BC;
    case 0x800256C0u: goto label_800256C0;
    case 0x800256C4u: goto label_800256C4;
    case 0x800256C8u: goto label_800256C8;
    case 0x800256CCu: goto label_800256CC;
    case 0x800256D0u: goto label_800256D0;
    case 0x800256D4u: goto label_800256D4;
    case 0x800256D8u: goto label_800256D8;
    case 0x800256DCu: goto label_800256DC;
    case 0x800256E0u: goto label_800256E0;
    case 0x800256E4u: goto label_800256E4;
    case 0x800256E8u: goto label_800256E8;
    case 0x800256ECu: goto label_800256EC;
    case 0x800256F0u: goto label_800256F0;
    case 0x800256F4u: goto label_800256F4;
    case 0x800256F8u: goto label_800256F8;
    case 0x800256FCu: goto label_800256FC;
    case 0x80025700u: goto label_80025700;
    case 0x80025704u: goto label_80025704;
    case 0x80025708u: goto label_80025708;
    case 0x8002570Cu: goto label_8002570C;
    case 0x80025710u: goto label_80025710;
    case 0x80025714u: goto label_80025714;
    case 0x80025718u: goto label_80025718;
    case 0x8002571Cu: goto label_8002571C;
    case 0x80025720u: goto label_80025720;
    case 0x80025724u: goto label_80025724;
    case 0x80025728u: goto label_80025728;
    case 0x8002572Cu: goto label_8002572C;
    case 0x80025730u: goto label_80025730;
    case 0x80025734u: goto label_80025734;
    case 0x80025738u: goto label_80025738;
    case 0x8002573Cu: goto label_8002573C;
    case 0x80025740u: goto label_80025740;
    case 0x80025744u: goto label_80025744;
    case 0x80025748u: goto label_80025748;
    case 0x8002574Cu: goto label_8002574C;
    case 0x80025750u: goto label_80025750;
    case 0x80025754u: goto label_80025754;
    case 0x80025758u: goto label_80025758;
    case 0x8002575Cu: goto label_8002575C;
    case 0x80025760u: goto label_80025760;
    case 0x80025764u: goto label_80025764;
    case 0x80025768u: goto label_80025768;
    case 0x8002576Cu: goto label_8002576C;
    case 0x80025770u: goto label_80025770;
    case 0x80025774u: goto label_80025774;
    case 0x80025778u: goto label_80025778;
    case 0x8002577Cu: goto label_8002577C;
    case 0x80025780u: goto label_80025780;
    case 0x80025784u: goto label_80025784;
    case 0x80025788u: goto label_80025788;
    case 0x8002578Cu: goto label_8002578C;
    case 0x80025790u: goto label_80025790;
    case 0x80025794u: goto label_80025794;
    case 0x80025798u: goto label_80025798;
    case 0x8002579Cu: goto label_8002579C;
    case 0x800257A0u: goto label_800257A0;
    case 0x800257A4u: goto label_800257A4;
    case 0x800257A8u: goto label_800257A8;
    case 0x800257ACu: goto label_800257AC;
    case 0x800257B0u: goto label_800257B0;
    case 0x800257B4u: goto label_800257B4;
    case 0x800257B8u: goto label_800257B8;
    case 0x800257BCu: goto label_800257BC;
    case 0x800257C0u: goto label_800257C0;
    case 0x800257C4u: goto label_800257C4;
    case 0x800257C8u: goto label_800257C8;
    case 0x800257CCu: goto label_800257CC;
    case 0x800257D0u: goto label_800257D0;
    case 0x800257D4u: goto label_800257D4;
    case 0x800257D8u: goto label_800257D8;
    case 0x800257DCu: goto label_800257DC;
    case 0x800257E0u: goto label_800257E0;
    case 0x800257E4u: goto label_800257E4;
    case 0x800257E8u: goto label_800257E8;
    case 0x800257ECu: goto label_800257EC;
    case 0x800257F0u: goto label_800257F0;
    case 0x800257F4u: goto label_800257F4;
    case 0x800257F8u: goto label_800257F8;
    case 0x800257FCu: goto label_800257FC;
    case 0x80025800u: goto label_80025800;
    case 0x80025804u: goto label_80025804;
    case 0x80025808u: goto label_80025808;
    case 0x8002580Cu: goto label_8002580C;
    case 0x80025810u: goto label_80025810;
    case 0x80025814u: goto label_80025814;
    case 0x80025818u: goto label_80025818;
    case 0x8002581Cu: goto label_8002581C;
    case 0x80025820u: goto label_80025820;
    case 0x80025824u: goto label_80025824;
    case 0x80025828u: goto label_80025828;
    case 0x8002582Cu: goto label_8002582C;
    case 0x80025830u: goto label_80025830;
    case 0x80025834u: goto label_80025834;
    case 0x80025838u: goto label_80025838;
    case 0x8002583Cu: goto label_8002583C;
    case 0x80025840u: goto label_80025840;
    case 0x80025844u: goto label_80025844;
    case 0x80025848u: goto label_80025848;
    case 0x8002584Cu: goto label_8002584C;
    case 0x80025850u: goto label_80025850;
    case 0x80025854u: goto label_80025854;
    case 0x80025858u: goto label_80025858;
    case 0x8002585Cu: goto label_8002585C;
    case 0x80025860u: goto label_80025860;
    case 0x80025864u: goto label_80025864;
    case 0x80025868u: goto label_80025868;
    case 0x8002586Cu: goto label_8002586C;
    case 0x80025870u: goto label_80025870;
    case 0x80025874u: goto label_80025874;
    case 0x80025878u: goto label_80025878;
    case 0x8002587Cu: goto label_8002587C;
    case 0x80025880u: goto label_80025880;
    case 0x80025884u: goto label_80025884;
    case 0x80025888u: goto label_80025888;
    case 0x8002588Cu: goto label_8002588C;
    case 0x80025890u: goto label_80025890;
    case 0x80025894u: goto label_80025894;
    case 0x80025898u: goto label_80025898;
    case 0x8002589Cu: goto label_8002589C;
    case 0x800258A0u: goto label_800258A0;
    case 0x800258A4u: goto label_800258A4;
    case 0x800258A8u: goto label_800258A8;
    case 0x800258ACu: goto label_800258AC;
    case 0x800258B0u: goto label_800258B0;
    case 0x800258B4u: goto label_800258B4;
    case 0x800258B8u: goto label_800258B8;
    case 0x800258BCu: goto label_800258BC;
    case 0x800258C0u: goto label_800258C0;
    case 0x800258C4u: goto label_800258C4;
    case 0x800258C8u: goto label_800258C8;
    case 0x800258CCu: goto label_800258CC;
    case 0x800258D0u: goto label_800258D0;
    case 0x800258D4u: goto label_800258D4;
    case 0x800258D8u: goto label_800258D8;
    case 0x800258DCu: goto label_800258DC;
    case 0x800258E0u: goto label_800258E0;
    case 0x800258E4u: goto label_800258E4;
    case 0x800258E8u: goto label_800258E8;
    case 0x800258ECu: goto label_800258EC;
    case 0x800258F0u: goto label_800258F0;
    case 0x800258F4u: goto label_800258F4;
    case 0x800258F8u: goto label_800258F8;
    case 0x800258FCu: goto label_800258FC;
    case 0x80025900u: goto label_80025900;
    case 0x80025904u: goto label_80025904;
    case 0x80025908u: goto label_80025908;
    case 0x8002590Cu: goto label_8002590C;
    case 0x80025910u: goto label_80025910;
    case 0x80025914u: goto label_80025914;
    case 0x80025918u: goto label_80025918;
    case 0x8002591Cu: goto label_8002591C;
    case 0x80025920u: goto label_80025920;
    case 0x80025924u: goto label_80025924;
    case 0x80025928u: goto label_80025928;
    case 0x8002592Cu: goto label_8002592C;
    case 0x80025930u: goto label_80025930;
    case 0x80025934u: goto label_80025934;
    case 0x80025938u: goto label_80025938;
    case 0x8002593Cu: goto label_8002593C;
    case 0x80025940u: goto label_80025940;
    case 0x80025944u: goto label_80025944;
    case 0x80025948u: goto label_80025948;
    case 0x8002594Cu: goto label_8002594C;
    case 0x80025950u: goto label_80025950;
    case 0x80025954u: goto label_80025954;
    case 0x80025958u: goto label_80025958;
    case 0x8002595Cu: goto label_8002595C;
    case 0x80025960u: goto label_80025960;
    case 0x80025964u: goto label_80025964;
    case 0x80025968u: goto label_80025968;
    case 0x8002596Cu: goto label_8002596C;
    case 0x80025970u: goto label_80025970;
    case 0x80025974u: goto label_80025974;
    case 0x80025978u: goto label_80025978;
    case 0x8002597Cu: goto label_8002597C;
    case 0x80025980u: goto label_80025980;
    case 0x80025984u: goto label_80025984;
    case 0x80025988u: goto label_80025988;
    case 0x8002598Cu: goto label_8002598C;
    case 0x80025990u: goto label_80025990;
    case 0x80025994u: goto label_80025994;
    case 0x80025998u: goto label_80025998;
    case 0x8002599Cu: goto label_8002599C;
    case 0x800259A0u: goto label_800259A0;
    case 0x800259A4u: goto label_800259A4;
    case 0x800259A8u: goto label_800259A8;
    case 0x800259ACu: goto label_800259AC;
    case 0x800259B0u: goto label_800259B0;
    case 0x800259B4u: goto label_800259B4;
    case 0x800259B8u: goto label_800259B8;
    case 0x800259BCu: goto label_800259BC;
    case 0x800259C0u: goto label_800259C0;
    case 0x800259C4u: goto label_800259C4;
    case 0x800259C8u: goto label_800259C8;
    case 0x800259CCu: goto label_800259CC;
    case 0x800259D0u: goto label_800259D0;
    case 0x800259D4u: goto label_800259D4;
    case 0x800259D8u: goto label_800259D8;
    case 0x800259DCu: goto label_800259DC;
    case 0x800259E0u: goto label_800259E0;
    case 0x800259E4u: goto label_800259E4;
    case 0x800259E8u: goto label_800259E8;
    case 0x800259ECu: goto label_800259EC;
    case 0x800259F0u: goto label_800259F0;
    case 0x800259F4u: goto label_800259F4;
    case 0x800259F8u: goto label_800259F8;
    case 0x800259FCu: goto label_800259FC;
    case 0x80025A00u: goto label_80025A00;
    case 0x80025A04u: goto label_80025A04;
    case 0x80025A08u: goto label_80025A08;
    case 0x80025A0Cu: goto label_80025A0C;
    case 0x80025A10u: goto label_80025A10;
    case 0x80025A14u: goto label_80025A14;
    case 0x80025A18u: goto label_80025A18;
    case 0x80025A1Cu: goto label_80025A1C;
    case 0x80025A20u: goto label_80025A20;
    case 0x80025A24u: goto label_80025A24;
    case 0x80025A28u: goto label_80025A28;
    case 0x80025A2Cu: goto label_80025A2C;
    case 0x80025A30u: goto label_80025A30;
    case 0x80025A34u: goto label_80025A34;
    case 0x80025A38u: goto label_80025A38;
    case 0x80025A3Cu: goto label_80025A3C;
    case 0x80025A40u: goto label_80025A40;
    case 0x80025A44u: goto label_80025A44;
    case 0x80025A48u: goto label_80025A48;
    case 0x80025A4Cu: goto label_80025A4C;
    case 0x80025A50u: goto label_80025A50;
    case 0x80025A54u: goto label_80025A54;
    case 0x80025A58u: goto label_80025A58;
    case 0x80025A5Cu: goto label_80025A5C;
    case 0x80025A60u: goto label_80025A60;
    case 0x80025A64u: goto label_80025A64;
    case 0x80025A68u: goto label_80025A68;
    case 0x80025A6Cu: goto label_80025A6C;
    case 0x80025A70u: goto label_80025A70;
    case 0x80025A74u: goto label_80025A74;
    case 0x80025A78u: goto label_80025A78;
    case 0x80025A7Cu: goto label_80025A7C;
    case 0x80025A80u: goto label_80025A80;
    case 0x80025A84u: goto label_80025A84;
    case 0x80025A88u: goto label_80025A88;
    case 0x80025A8Cu: goto label_80025A8C;
    case 0x80025A90u: goto label_80025A90;
    case 0x80025A94u: goto label_80025A94;
    case 0x80025A98u: goto label_80025A98;
    case 0x80025A9Cu: goto label_80025A9C;
    case 0x80025AA0u: goto label_80025AA0;
    case 0x80025AA4u: goto label_80025AA4;
    case 0x80025AA8u: goto label_80025AA8;
    case 0x80025AACu: goto label_80025AAC;
    case 0x80025AB0u: goto label_80025AB0;
    case 0x80025AB4u: goto label_80025AB4;
    case 0x80025AB8u: goto label_80025AB8;
    case 0x80025ABCu: goto label_80025ABC;
    case 0x80025AC0u: goto label_80025AC0;
    case 0x80025AC4u: goto label_80025AC4;
    case 0x80025AC8u: goto label_80025AC8;
    case 0x80025ACCu: goto label_80025ACC;
    case 0x80025AD0u: goto label_80025AD0;
    case 0x80025AD4u: goto label_80025AD4;
    case 0x80025AD8u: goto label_80025AD8;
    case 0x80025ADCu: goto label_80025ADC;
    case 0x80025AE0u: goto label_80025AE0;
    case 0x80025AE4u: goto label_80025AE4;
    case 0x80025AE8u: goto label_80025AE8;
    case 0x80025AECu: goto label_80025AEC;
    case 0x80025AF0u: goto label_80025AF0;
    case 0x80025AF4u: goto label_80025AF4;
    case 0x80025AF8u: goto label_80025AF8;
    case 0x80025AFCu: goto label_80025AFC;
    case 0x80025B00u: goto label_80025B00;
    case 0x80025B04u: goto label_80025B04;
    case 0x80025B08u: goto label_80025B08;
    case 0x80025B0Cu: goto label_80025B0C;
    case 0x80025B10u: goto label_80025B10;
    case 0x80025B14u: goto label_80025B14;
    case 0x80025B18u: goto label_80025B18;
    case 0x80025B1Cu: goto label_80025B1C;
    case 0x80025B20u: goto label_80025B20;
    case 0x80025B24u: goto label_80025B24;
    case 0x80025B28u: goto label_80025B28;
    case 0x80025B2Cu: goto label_80025B2C;
    case 0x80025B30u: goto label_80025B30;
    case 0x80025B34u: goto label_80025B34;
    case 0x80025B38u: goto label_80025B38;
    case 0x80025B3Cu: goto label_80025B3C;
    case 0x80025B40u: goto label_80025B40;
    case 0x80025B44u: goto label_80025B44;
    case 0x80025B48u: goto label_80025B48;
    case 0x80025B4Cu: goto label_80025B4C;
    case 0x80025B50u: goto label_80025B50;
    case 0x80025B54u: goto label_80025B54;
    case 0x80025B58u: goto label_80025B58;
    case 0x80025B5Cu: goto label_80025B5C;
    case 0x80025B60u: goto label_80025B60;
    case 0x80025B64u: goto label_80025B64;
    case 0x80025B68u: goto label_80025B68;
    case 0x80025B6Cu: goto label_80025B6C;
    case 0x80025B70u: goto label_80025B70;
    case 0x80025B74u: goto label_80025B74;
    case 0x80025B78u: goto label_80025B78;
    case 0x80025B7Cu: goto label_80025B7C;
    case 0x80025B80u: goto label_80025B80;
    case 0x80025B84u: goto label_80025B84;
    case 0x80025B88u: goto label_80025B88;
    case 0x80025B8Cu: goto label_80025B8C;
    case 0x80025B90u: goto label_80025B90;
    case 0x80025B94u: goto label_80025B94;
    case 0x80025B98u: goto label_80025B98;
    case 0x80025B9Cu: goto label_80025B9C;
    case 0x80025BA0u: goto label_80025BA0;
    case 0x80025BA4u: goto label_80025BA4;
    case 0x80025BA8u: goto label_80025BA8;
    case 0x80025BACu: goto label_80025BAC;
    case 0x80025BB0u: goto label_80025BB0;
    case 0x80025BB4u: goto label_80025BB4;
    case 0x80025BB8u: goto label_80025BB8;
    case 0x80025BBCu: goto label_80025BBC;
    case 0x80025BC0u: goto label_80025BC0;
    case 0x80025BC4u: goto label_80025BC4;
    case 0x80025BC8u: goto label_80025BC8;
    case 0x80025BCCu: goto label_80025BCC;
    case 0x80025BD0u: goto label_80025BD0;
    case 0x80025BD4u: goto label_80025BD4;
    case 0x80025BD8u: goto label_80025BD8;
    case 0x80025BDCu: goto label_80025BDC;
    case 0x80025BE0u: goto label_80025BE0;
    case 0x80025BE4u: goto label_80025BE4;
    case 0x80025BE8u: goto label_80025BE8;
    case 0x80025BECu: goto label_80025BEC;
    case 0x80025BF0u: goto label_80025BF0;
    case 0x80025BF4u: goto label_80025BF4;
    case 0x80025BF8u: goto label_80025BF8;
    case 0x80025BFCu: goto label_80025BFC;
    case 0x80025C00u: goto label_80025C00;
    case 0x80025C04u: goto label_80025C04;
    case 0x80025C08u: goto label_80025C08;
    case 0x80025C0Cu: goto label_80025C0C;
    case 0x80025C10u: goto label_80025C10;
    case 0x80025C14u: goto label_80025C14;
    case 0x80025C18u: goto label_80025C18;
    case 0x80025C1Cu: goto label_80025C1C;
    case 0x80025C20u: goto label_80025C20;
    case 0x80025C24u: goto label_80025C24;
    case 0x80025C28u: goto label_80025C28;
    case 0x80025C2Cu: goto label_80025C2C;
    case 0x80025C30u: goto label_80025C30;
    case 0x80025C34u: goto label_80025C34;
    case 0x80025C38u: goto label_80025C38;
    case 0x80025C3Cu: goto label_80025C3C;
    case 0x80025C40u: goto label_80025C40;
    case 0x80025C44u: goto label_80025C44;
    case 0x80025C48u: goto label_80025C48;
    case 0x80025C4Cu: goto label_80025C4C;
    case 0x80025C50u: goto label_80025C50;
    case 0x80025C54u: goto label_80025C54;
    case 0x80025C58u: goto label_80025C58;
    case 0x80025C5Cu: goto label_80025C5C;
    case 0x80025C60u: goto label_80025C60;
    case 0x80025C64u: goto label_80025C64;
    case 0x80025C68u: goto label_80025C68;
    case 0x80025C6Cu: goto label_80025C6C;
    case 0x80025C70u: goto label_80025C70;
    case 0x80025C74u: goto label_80025C74;
    case 0x80025C78u: goto label_80025C78;
    case 0x80025C7Cu: goto label_80025C7C;
    case 0x80025C80u: goto label_80025C80;
    case 0x80025C84u: goto label_80025C84;
    case 0x80025C88u: goto label_80025C88;
    case 0x80025C8Cu: goto label_80025C8C;
    case 0x80025C90u: goto label_80025C90;
    case 0x80025C94u: goto label_80025C94;
    case 0x80025C98u: goto label_80025C98;
    case 0x80025C9Cu: goto label_80025C9C;
    case 0x80025CA0u: goto label_80025CA0;
    case 0x80025CA4u: goto label_80025CA4;
    case 0x80025CA8u: goto label_80025CA8;
    case 0x80025CACu: goto label_80025CAC;
    case 0x80025CB0u: goto label_80025CB0;
    case 0x80025CB4u: goto label_80025CB4;
    case 0x80025CB8u: goto label_80025CB8;
    case 0x80025CBCu: goto label_80025CBC;
    case 0x80025CC0u: goto label_80025CC0;
    case 0x80025CC4u: goto label_80025CC4;
    case 0x80025CC8u: goto label_80025CC8;
    case 0x80025CCCu: goto label_80025CCC;
    case 0x80025CD0u: goto label_80025CD0;
    case 0x80025CD4u: goto label_80025CD4;
    case 0x80025CD8u: goto label_80025CD8;
    case 0x80025CDCu: goto label_80025CDC;
    case 0x80025CE0u: goto label_80025CE0;
    case 0x80025CE4u: goto label_80025CE4;
    case 0x80025CE8u: goto label_80025CE8;
    case 0x80025CECu: goto label_80025CEC;
    case 0x80025CF0u: goto label_80025CF0;
    case 0x80025CF4u: goto label_80025CF4;
    case 0x80025CF8u: goto label_80025CF8;
    case 0x80025CFCu: goto label_80025CFC;
    case 0x80025D00u: goto label_80025D00;
    case 0x80025D04u: goto label_80025D04;
    case 0x80025D08u: goto label_80025D08;
    case 0x80025D0Cu: goto label_80025D0C;
    case 0x80025D10u: goto label_80025D10;
    case 0x80025D14u: goto label_80025D14;
    case 0x80025D18u: goto label_80025D18;
    case 0x80025D1Cu: goto label_80025D1C;
    case 0x80025D20u: goto label_80025D20;
    case 0x80025D24u: goto label_80025D24;
    case 0x80025D28u: goto label_80025D28;
    case 0x80025D2Cu: goto label_80025D2C;
    case 0x80025D30u: goto label_80025D30;
    case 0x80025D34u: goto label_80025D34;
    case 0x80025D38u: goto label_80025D38;
    case 0x80025D3Cu: goto label_80025D3C;
    case 0x80025D40u: goto label_80025D40;
    case 0x80025D44u: goto label_80025D44;
    case 0x80025D48u: goto label_80025D48;
    case 0x80025D4Cu: goto label_80025D4C;
    case 0x80025D50u: goto label_80025D50;
    case 0x80025D54u: goto label_80025D54;
    case 0x80025D58u: goto label_80025D58;
    case 0x80025D5Cu: goto label_80025D5C;
    case 0x80025D60u: goto label_80025D60;
    case 0x80025D64u: goto label_80025D64;
    case 0x80025D68u: goto label_80025D68;
    case 0x80025D6Cu: goto label_80025D6C;
    case 0x80025D70u: goto label_80025D70;
    case 0x80025D74u: goto label_80025D74;
    case 0x80025D78u: goto label_80025D78;
    case 0x80025D7Cu: goto label_80025D7C;
    case 0x80025D80u: goto label_80025D80;
    case 0x80025D84u: goto label_80025D84;
    case 0x80025D88u: goto label_80025D88;
    case 0x80025D8Cu: goto label_80025D8C;
    case 0x80025D90u: goto label_80025D90;
    case 0x80025D94u: goto label_80025D94;
    case 0x80025D98u: goto label_80025D98;
    case 0x80025D9Cu: goto label_80025D9C;
    case 0x80025DA0u: goto label_80025DA0;
    case 0x80025DA4u: goto label_80025DA4;
    case 0x80025DA8u: goto label_80025DA8;
    case 0x80025DACu: goto label_80025DAC;
    case 0x80025DB0u: goto label_80025DB0;
    case 0x80025DB4u: goto label_80025DB4;
    case 0x80025DB8u: goto label_80025DB8;
    case 0x80025DBCu: goto label_80025DBC;
    case 0x80025DC0u: goto label_80025DC0;
    case 0x80025DC4u: goto label_80025DC4;
    case 0x80025DC8u: goto label_80025DC8;
    case 0x80025DCCu: goto label_80025DCC;
    case 0x80025DD0u: goto label_80025DD0;
    case 0x80025DD4u: goto label_80025DD4;
    case 0x80025DD8u: goto label_80025DD8;
    case 0x80025DDCu: goto label_80025DDC;
    case 0x80025DE0u: goto label_80025DE0;
    case 0x80025DE4u: goto label_80025DE4;
    case 0x80025DE8u: goto label_80025DE8;
    case 0x80025DECu: goto label_80025DEC;
    case 0x80025DF0u: goto label_80025DF0;
    case 0x80025DF4u: goto label_80025DF4;
    case 0x80025DF8u: goto label_80025DF8;
    case 0x80025DFCu: goto label_80025DFC;
    case 0x80025E00u: goto label_80025E00;
    case 0x80025E04u: goto label_80025E04;
    case 0x80025E08u: goto label_80025E08;
    case 0x80025E0Cu: goto label_80025E0C;
    case 0x80025E10u: goto label_80025E10;
    case 0x80025E14u: goto label_80025E14;
    case 0x80025E18u: goto label_80025E18;
    case 0x80025E1Cu: goto label_80025E1C;
    case 0x80025E20u: goto label_80025E20;
    case 0x80025E24u: goto label_80025E24;
    case 0x80025E28u: goto label_80025E28;
    case 0x80025E2Cu: goto label_80025E2C;
    case 0x80025E30u: goto label_80025E30;
    case 0x80025E34u: goto label_80025E34;
    case 0x80025E38u: goto label_80025E38;
    case 0x80025E3Cu: goto label_80025E3C;
    case 0x80025E40u: goto label_80025E40;
    case 0x80025E44u: goto label_80025E44;
    case 0x80025E48u: goto label_80025E48;
    case 0x80025E4Cu: goto label_80025E4C;
    case 0x80025E50u: goto label_80025E50;
    case 0x80025E54u: goto label_80025E54;
    case 0x80025E58u: goto label_80025E58;
    case 0x80025E5Cu: goto label_80025E5C;
    case 0x80025E60u: goto label_80025E60;
    case 0x80025E64u: goto label_80025E64;
    case 0x80025E68u: goto label_80025E68;
    case 0x80025E6Cu: goto label_80025E6C;
    case 0x80025E70u: goto label_80025E70;
    case 0x80025E74u: goto label_80025E74;
    case 0x80025E78u: goto label_80025E78;
    case 0x80025E7Cu: goto label_80025E7C;
    case 0x80025E80u: goto label_80025E80;
    case 0x80025E84u: goto label_80025E84;
    case 0x80025E88u: goto label_80025E88;
    case 0x80025E8Cu: goto label_80025E8C;
    case 0x80025E90u: goto label_80025E90;
    case 0x80025E94u: goto label_80025E94;
    case 0x80025E98u: goto label_80025E98;
    case 0x80025E9Cu: goto label_80025E9C;
    case 0x80025EA0u: goto label_80025EA0;
    case 0x80025EA4u: goto label_80025EA4;
    case 0x80025EA8u: goto label_80025EA8;
    case 0x80025EACu: goto label_80025EAC;
    case 0x80025EB0u: goto label_80025EB0;
    case 0x80025EB4u: goto label_80025EB4;
    case 0x80025EB8u: goto label_80025EB8;
    case 0x80025EBCu: goto label_80025EBC;
    case 0x80025EC0u: goto label_80025EC0;
    case 0x80025EC4u: goto label_80025EC4;
    case 0x80025EC8u: goto label_80025EC8;
    case 0x80025ECCu: goto label_80025ECC;
    case 0x80025ED0u: goto label_80025ED0;
    case 0x80025ED4u: goto label_80025ED4;
    case 0x80025ED8u: goto label_80025ED8;
    case 0x80025EDCu: goto label_80025EDC;
    case 0x80025EE0u: goto label_80025EE0;
    case 0x80025EE4u: goto label_80025EE4;
    case 0x80025EE8u: goto label_80025EE8;
    case 0x80025EECu: goto label_80025EEC;
    case 0x80025EF0u: goto label_80025EF0;
    case 0x80025EF4u: goto label_80025EF4;
    case 0x80025EF8u: goto label_80025EF8;
    case 0x80025EFCu: goto label_80025EFC;
    case 0x80025F00u: goto label_80025F00;
    case 0x80025F04u: goto label_80025F04;
    case 0x80025F08u: goto label_80025F08;
    case 0x80025F0Cu: goto label_80025F0C;
    case 0x80025F10u: goto label_80025F10;
    case 0x80025F14u: goto label_80025F14;
    case 0x80025F18u: goto label_80025F18;
    case 0x80025F1Cu: goto label_80025F1C;
    case 0x80025F20u: goto label_80025F20;
    case 0x80025F24u: goto label_80025F24;
    case 0x80025F28u: goto label_80025F28;
    case 0x80025F2Cu: goto label_80025F2C;
    case 0x80025F30u: goto label_80025F30;
    case 0x80025F34u: goto label_80025F34;
    case 0x80025F38u: goto label_80025F38;
    case 0x80025F3Cu: goto label_80025F3C;
    case 0x80025F40u: goto label_80025F40;
    case 0x80025F44u: goto label_80025F44;
    case 0x80025F48u: goto label_80025F48;
    case 0x80025F4Cu: goto label_80025F4C;
    case 0x80025F50u: goto label_80025F50;
    case 0x80025F54u: goto label_80025F54;
    case 0x80025F58u: goto label_80025F58;
    case 0x80025F5Cu: goto label_80025F5C;
    case 0x80025F60u: goto label_80025F60;
    case 0x80025F64u: goto label_80025F64;
    case 0x80025F68u: goto label_80025F68;
    case 0x80025F6Cu: goto label_80025F6C;
    case 0x80025F70u: goto label_80025F70;
    case 0x80025F74u: goto label_80025F74;
    case 0x80025F78u: goto label_80025F78;
    case 0x80025F7Cu: goto label_80025F7C;
    case 0x80025F80u: goto label_80025F80;
    case 0x80025F84u: goto label_80025F84;
    case 0x80025F88u: goto label_80025F88;
    case 0x80025F8Cu: goto label_80025F8C;
    case 0x80025F90u: goto label_80025F90;
    case 0x80025F94u: goto label_80025F94;
    case 0x80025F98u: goto label_80025F98;
    case 0x80025F9Cu: goto label_80025F9C;
    case 0x80025FA0u: goto label_80025FA0;
    case 0x80025FA4u: goto label_80025FA4;
    case 0x80025FA8u: goto label_80025FA8;
    case 0x80025FACu: goto label_80025FAC;
    case 0x80025FB0u: goto label_80025FB0;
    case 0x80025FB4u: goto label_80025FB4;
    case 0x80025FB8u: goto label_80025FB8;
    case 0x80025FBCu: goto label_80025FBC;
    case 0x80025FC0u: goto label_80025FC0;
    case 0x80025FC4u: goto label_80025FC4;
    case 0x80025FC8u: goto label_80025FC8;
    case 0x80025FCCu: goto label_80025FCC;
    case 0x80025FD0u: goto label_80025FD0;
    case 0x80025FD4u: goto label_80025FD4;
    case 0x80025FD8u: goto label_80025FD8;
    case 0x80025FDCu: goto label_80025FDC;
    case 0x80025FE0u: goto label_80025FE0;
    case 0x80025FE4u: goto label_80025FE4;
    case 0x80025FE8u: goto label_80025FE8;
    case 0x80025FECu: goto label_80025FEC;
    case 0x80025FF0u: goto label_80025FF0;
    case 0x80025FF4u: goto label_80025FF4;
    case 0x80025FF8u: goto label_80025FF8;
    case 0x80025FFCu: goto label_80025FFC;
    case 0x80026000u: goto label_80026000;
    case 0x80026004u: goto label_80026004;
    case 0x80026008u: goto label_80026008;
    case 0x8002600Cu: goto label_8002600C;
    case 0x80026010u: goto label_80026010;
    case 0x80026014u: goto label_80026014;
    case 0x80026018u: goto label_80026018;
    case 0x8002601Cu: goto label_8002601C;
    case 0x80026020u: goto label_80026020;
    case 0x80026024u: goto label_80026024;
    case 0x80026028u: goto label_80026028;
    case 0x8002602Cu: goto label_8002602C;
    case 0x80026030u: goto label_80026030;
    case 0x80026034u: goto label_80026034;
    case 0x80026038u: goto label_80026038;
    case 0x8002603Cu: goto label_8002603C;
    case 0x80026040u: goto label_80026040;
    case 0x80026044u: goto label_80026044;
    case 0x80026048u: goto label_80026048;
    case 0x8002604Cu: goto label_8002604C;
    case 0x80026050u: goto label_80026050;
    case 0x80026054u: goto label_80026054;
    case 0x80026058u: goto label_80026058;
    case 0x8002605Cu: goto label_8002605C;
    case 0x80026060u: goto label_80026060;
    case 0x80026064u: goto label_80026064;
    case 0x80026068u: goto label_80026068;
    case 0x8002606Cu: goto label_8002606C;
    case 0x80026070u: goto label_80026070;
    case 0x80026074u: goto label_80026074;
    case 0x80026078u: goto label_80026078;
    case 0x8002607Cu: goto label_8002607C;
    case 0x80026080u: goto label_80026080;
    case 0x80026084u: goto label_80026084;
    case 0x80026088u: goto label_80026088;
    case 0x8002608Cu: goto label_8002608C;
    case 0x80026090u: goto label_80026090;
    case 0x80026094u: goto label_80026094;
    case 0x80026098u: goto label_80026098;
    case 0x8002609Cu: goto label_8002609C;
    case 0x800260A0u: goto label_800260A0;
    case 0x800260A4u: goto label_800260A4;
    case 0x800260A8u: goto label_800260A8;
    case 0x800260ACu: goto label_800260AC;
    case 0x800260B0u: goto label_800260B0;
    case 0x800260B4u: goto label_800260B4;
    case 0x800260B8u: goto label_800260B8;
    case 0x800260BCu: goto label_800260BC;
    case 0x800260C0u: goto label_800260C0;
    case 0x800260C4u: goto label_800260C4;
    case 0x800260C8u: goto label_800260C8;
    case 0x800260CCu: goto label_800260CC;
    case 0x800260D0u: goto label_800260D0;
    case 0x800260D4u: goto label_800260D4;
    case 0x800260D8u: goto label_800260D8;
    case 0x800260DCu: goto label_800260DC;
    case 0x800260E0u: goto label_800260E0;
    case 0x800260E4u: goto label_800260E4;
    case 0x800260E8u: goto label_800260E8;
    case 0x800260ECu: goto label_800260EC;
    case 0x800260F0u: goto label_800260F0;
    case 0x800260F4u: goto label_800260F4;
    case 0x800260F8u: goto label_800260F8;
    case 0x800260FCu: goto label_800260FC;
    case 0x80026100u: goto label_80026100;
    case 0x80026104u: goto label_80026104;
    case 0x80026108u: goto label_80026108;
    case 0x8002610Cu: goto label_8002610C;
    case 0x80026110u: goto label_80026110;
    case 0x80026114u: goto label_80026114;
    case 0x80026118u: goto label_80026118;
    case 0x8002611Cu: goto label_8002611C;
    case 0x80026120u: goto label_80026120;
    case 0x80026124u: goto label_80026124;
    case 0x80026128u: goto label_80026128;
    case 0x8002612Cu: goto label_8002612C;
    case 0x80026130u: goto label_80026130;
    case 0x80026134u: goto label_80026134;
    case 0x80026138u: goto label_80026138;
    case 0x8002613Cu: goto label_8002613C;
    case 0x80026140u: goto label_80026140;
    case 0x80026144u: goto label_80026144;
    case 0x80026148u: goto label_80026148;
    case 0x8002614Cu: goto label_8002614C;
    case 0x80026150u: goto label_80026150;
    case 0x80026154u: goto label_80026154;
    case 0x80026158u: goto label_80026158;
    case 0x8002615Cu: goto label_8002615C;
    case 0x80026160u: goto label_80026160;
    case 0x80026164u: goto label_80026164;
    case 0x80026168u: goto label_80026168;
    case 0x8002616Cu: goto label_8002616C;
    case 0x80026170u: goto label_80026170;
    case 0x80026174u: goto label_80026174;
    case 0x80026178u: goto label_80026178;
    case 0x8002617Cu: goto label_8002617C;
    case 0x80026180u: goto label_80026180;
    case 0x80026184u: goto label_80026184;
    case 0x80026188u: goto label_80026188;
    case 0x8002618Cu: goto label_8002618C;
    case 0x80026190u: goto label_80026190;
    case 0x80026194u: goto label_80026194;
    case 0x80026198u: goto label_80026198;
    case 0x8002619Cu: goto label_8002619C;
    case 0x800261A0u: goto label_800261A0;
    case 0x800261A4u: goto label_800261A4;
    case 0x800261A8u: goto label_800261A8;
    case 0x800261ACu: goto label_800261AC;
    case 0x800261B0u: goto label_800261B0;
    case 0x800261B4u: goto label_800261B4;
    case 0x800261B8u: goto label_800261B8;
    case 0x800261BCu: goto label_800261BC;
    case 0x800261C0u: goto label_800261C0;
    case 0x800261C4u: goto label_800261C4;
    case 0x800261C8u: goto label_800261C8;
    case 0x800261CCu: goto label_800261CC;
    case 0x800261D0u: goto label_800261D0;
    case 0x800261D4u: goto label_800261D4;
    case 0x800261D8u: goto label_800261D8;
    case 0x800261DCu: goto label_800261DC;
    case 0x800261E0u: goto label_800261E0;
    case 0x800261E4u: goto label_800261E4;
    case 0x800261E8u: goto label_800261E8;
    case 0x800261ECu: goto label_800261EC;
    case 0x800261F0u: goto label_800261F0;
    case 0x800261F4u: goto label_800261F4;
    case 0x800261F8u: goto label_800261F8;
    case 0x800261FCu: goto label_800261FC;
    case 0x80026200u: goto label_80026200;
    case 0x80026204u: goto label_80026204;
    case 0x80026208u: goto label_80026208;
    case 0x8002620Cu: goto label_8002620C;
    case 0x80026210u: goto label_80026210;
    case 0x80026214u: goto label_80026214;
    case 0x80026218u: goto label_80026218;
    case 0x8002621Cu: goto label_8002621C;
    case 0x80026220u: goto label_80026220;
    case 0x80026224u: goto label_80026224;
    case 0x80026228u: goto label_80026228;
    case 0x8002622Cu: goto label_8002622C;
    case 0x80026230u: goto label_80026230;
    case 0x80026234u: goto label_80026234;
    case 0x80026238u: goto label_80026238;
    case 0x8002623Cu: goto label_8002623C;
    case 0x80026240u: goto label_80026240;
    case 0x80026244u: goto label_80026244;
    case 0x80026248u: goto label_80026248;
    case 0x8002624Cu: goto label_8002624C;
    case 0x80026250u: goto label_80026250;
    case 0x80026254u: goto label_80026254;
    case 0x80026258u: goto label_80026258;
    case 0x8002625Cu: goto label_8002625C;
    case 0x80026260u: goto label_80026260;
    case 0x80026264u: goto label_80026264;
    case 0x80026268u: goto label_80026268;
    case 0x8002626Cu: goto label_8002626C;
    case 0x80026270u: goto label_80026270;
    case 0x80026274u: goto label_80026274;
    case 0x80026278u: goto label_80026278;
    case 0x8002627Cu: goto label_8002627C;
    case 0x80026280u: goto label_80026280;
    case 0x80026284u: goto label_80026284;
    case 0x80026288u: goto label_80026288;
    case 0x8002628Cu: goto label_8002628C;
    case 0x80026290u: goto label_80026290;
    case 0x80026294u: goto label_80026294;
    case 0x80026298u: goto label_80026298;
    case 0x8002629Cu: goto label_8002629C;
    case 0x800262A0u: goto label_800262A0;
    case 0x800262A4u: goto label_800262A4;
    case 0x800262A8u: goto label_800262A8;
    case 0x800262ACu: goto label_800262AC;
    case 0x800262B0u: goto label_800262B0;
    case 0x800262B4u: goto label_800262B4;
    case 0x800262B8u: goto label_800262B8;
    case 0x800262BCu: goto label_800262BC;
    case 0x800262C0u: goto label_800262C0;
    case 0x800262C4u: goto label_800262C4;
    case 0x800262C8u: goto label_800262C8;
    case 0x800262CCu: goto label_800262CC;
    case 0x800262D0u: goto label_800262D0;
    case 0x800262D4u: goto label_800262D4;
    case 0x800262D8u: goto label_800262D8;
    case 0x800262DCu: goto label_800262DC;
    case 0x800262E0u: goto label_800262E0;
    case 0x800262E4u: goto label_800262E4;
    case 0x800262E8u: goto label_800262E8;
    case 0x800262ECu: goto label_800262EC;
    case 0x800262F0u: goto label_800262F0;
    case 0x800262F4u: goto label_800262F4;
    case 0x800262F8u: goto label_800262F8;
    case 0x800262FCu: goto label_800262FC;
    case 0x80026300u: goto label_80026300;
    case 0x80026304u: goto label_80026304;
    case 0x80026308u: goto label_80026308;
    case 0x8002630Cu: goto label_8002630C;
    case 0x80026310u: goto label_80026310;
    case 0x80026314u: goto label_80026314;
    case 0x80026318u: goto label_80026318;
    case 0x8002631Cu: goto label_8002631C;
    case 0x80026320u: goto label_80026320;
    case 0x80026324u: goto label_80026324;
    case 0x80026328u: goto label_80026328;
    case 0x8002632Cu: goto label_8002632C;
    case 0x80026330u: goto label_80026330;
    case 0x80026334u: goto label_80026334;
    case 0x80026338u: goto label_80026338;
    case 0x8002633Cu: goto label_8002633C;
    case 0x80026340u: goto label_80026340;
    case 0x80026344u: goto label_80026344;
    case 0x80026348u: goto label_80026348;
    case 0x8002634Cu: goto label_8002634C;
    case 0x80026350u: goto label_80026350;
    case 0x80026354u: goto label_80026354;
    case 0x80026358u: goto label_80026358;
    case 0x8002635Cu: goto label_8002635C;
    case 0x80026360u: goto label_80026360;
    case 0x80026364u: goto label_80026364;
    case 0x80026368u: goto label_80026368;
    case 0x8002636Cu: goto label_8002636C;
    case 0x80026370u: goto label_80026370;
    case 0x80026374u: goto label_80026374;
    case 0x80026378u: goto label_80026378;
    case 0x8002637Cu: goto label_8002637C;
    case 0x80026380u: goto label_80026380;
    case 0x80026384u: goto label_80026384;
    case 0x80026388u: goto label_80026388;
    case 0x8002638Cu: goto label_8002638C;
    case 0x80026390u: goto label_80026390;
    case 0x80026394u: goto label_80026394;
    case 0x80026398u: goto label_80026398;
    case 0x8002639Cu: goto label_8002639C;
    case 0x800263A0u: goto label_800263A0;
    case 0x800263A4u: goto label_800263A4;
    case 0x800263A8u: goto label_800263A8;
    case 0x800263ACu: goto label_800263AC;
    case 0x800263B0u: goto label_800263B0;
    case 0x800263B4u: goto label_800263B4;
    case 0x800263B8u: goto label_800263B8;
    case 0x800263BCu: goto label_800263BC;
    case 0x800263C0u: goto label_800263C0;
    case 0x800263C4u: goto label_800263C4;
    case 0x800263C8u: goto label_800263C8;
    case 0x800263CCu: goto label_800263CC;
    case 0x800263D0u: goto label_800263D0;
    case 0x800263D4u: goto label_800263D4;
    case 0x800263D8u: goto label_800263D8;
    case 0x800263DCu: goto label_800263DC;
    case 0x800263E0u: goto label_800263E0;
    case 0x800263E4u: goto label_800263E4;
    case 0x800263E8u: goto label_800263E8;
    case 0x800263ECu: goto label_800263EC;
    case 0x800263F0u: goto label_800263F0;
    case 0x800263F4u: goto label_800263F4;
    case 0x800263F8u: goto label_800263F8;
    case 0x800263FCu: goto label_800263FC;
    case 0x80026400u: goto label_80026400;
    case 0x80026404u: goto label_80026404;
    case 0x80026408u: goto label_80026408;
    case 0x8002640Cu: goto label_8002640C;
    case 0x80026410u: goto label_80026410;
    case 0x80026414u: goto label_80026414;
    case 0x80026418u: goto label_80026418;
    case 0x8002641Cu: goto label_8002641C;
    case 0x80026420u: goto label_80026420;
    case 0x80026424u: goto label_80026424;
    case 0x80026428u: goto label_80026428;
    case 0x8002642Cu: goto label_8002642C;
    case 0x80026430u: goto label_80026430;
    case 0x80026434u: goto label_80026434;
    case 0x80026438u: goto label_80026438;
    case 0x8002643Cu: goto label_8002643C;
    case 0x80026440u: goto label_80026440;
    case 0x80026444u: goto label_80026444;
    case 0x80026448u: goto label_80026448;
    case 0x8002644Cu: goto label_8002644C;
    case 0x80026450u: goto label_80026450;
    case 0x80026454u: goto label_80026454;
    case 0x80026458u: goto label_80026458;
    case 0x8002645Cu: goto label_8002645C;
    case 0x80026460u: goto label_80026460;
    case 0x80026464u: goto label_80026464;
    case 0x80026468u: goto label_80026468;
    case 0x8002646Cu: goto label_8002646C;
    case 0x80026470u: goto label_80026470;
    case 0x80026474u: goto label_80026474;
    case 0x80026478u: goto label_80026478;
    case 0x8002647Cu: goto label_8002647C;
    case 0x80026480u: goto label_80026480;
    case 0x80026484u: goto label_80026484;
    case 0x80026488u: goto label_80026488;
    case 0x8002648Cu: goto label_8002648C;
    case 0x80026490u: goto label_80026490;
    case 0x80026494u: goto label_80026494;
    case 0x80026498u: goto label_80026498;
    case 0x8002649Cu: goto label_8002649C;
    case 0x800264A0u: goto label_800264A0;
    case 0x800264A4u: goto label_800264A4;
    case 0x800264A8u: goto label_800264A8;
    case 0x800264ACu: goto label_800264AC;
    case 0x800264B0u: goto label_800264B0;
    case 0x800264B4u: goto label_800264B4;
    case 0x800264B8u: goto label_800264B8;
    case 0x800264BCu: goto label_800264BC;
    case 0x800264C0u: goto label_800264C0;
    case 0x800264C4u: goto label_800264C4;
    case 0x800264C8u: goto label_800264C8;
    case 0x800264CCu: goto label_800264CC;
    case 0x800264D0u: goto label_800264D0;
    case 0x800264D4u: goto label_800264D4;
    case 0x800264D8u: goto label_800264D8;
    case 0x800264DCu: goto label_800264DC;
    case 0x800264E0u: goto label_800264E0;
    case 0x800264E4u: goto label_800264E4;
    case 0x800264E8u: goto label_800264E8;
    case 0x800264ECu: goto label_800264EC;
    case 0x800264F0u: goto label_800264F0;
    case 0x800264F4u: goto label_800264F4;
    case 0x800264F8u: goto label_800264F8;
    case 0x800264FCu: goto label_800264FC;
    case 0x80026500u: goto label_80026500;
    case 0x80026504u: goto label_80026504;
    case 0x80026508u: goto label_80026508;
    case 0x8002650Cu: goto label_8002650C;
    case 0x80026510u: goto label_80026510;
    case 0x80026514u: goto label_80026514;
    case 0x80026518u: goto label_80026518;
    case 0x8002651Cu: goto label_8002651C;
    case 0x80026520u: goto label_80026520;
    case 0x80026524u: goto label_80026524;
    case 0x80026528u: goto label_80026528;
    case 0x8002652Cu: goto label_8002652C;
    case 0x80026530u: goto label_80026530;
    case 0x80026534u: goto label_80026534;
    case 0x80026538u: goto label_80026538;
    case 0x8002653Cu: goto label_8002653C;
    case 0x80026540u: goto label_80026540;
    case 0x80026544u: goto label_80026544;
    case 0x80026548u: goto label_80026548;
    case 0x8002654Cu: goto label_8002654C;
    case 0x80026550u: goto label_80026550;
    case 0x80026554u: goto label_80026554;
    case 0x80026558u: goto label_80026558;
    case 0x8002655Cu: goto label_8002655C;
    case 0x80026560u: goto label_80026560;
    case 0x80026564u: goto label_80026564;
    case 0x80026568u: goto label_80026568;
    case 0x8002656Cu: goto label_8002656C;
    case 0x80026570u: goto label_80026570;
    case 0x80026574u: goto label_80026574;
    case 0x80026578u: goto label_80026578;
    case 0x8002657Cu: goto label_8002657C;
    case 0x80026580u: goto label_80026580;
    case 0x80026584u: goto label_80026584;
    case 0x80026588u: goto label_80026588;
    case 0x8002658Cu: goto label_8002658C;
    case 0x80026590u: goto label_80026590;
    case 0x80026594u: goto label_80026594;
    case 0x80026598u: goto label_80026598;
    case 0x8002659Cu: goto label_8002659C;
    case 0x800265A0u: goto label_800265A0;
    case 0x800265A4u: goto label_800265A4;
    case 0x800265A8u: goto label_800265A8;
    case 0x800265ACu: goto label_800265AC;
    case 0x800265B0u: goto label_800265B0;
    case 0x800265B4u: goto label_800265B4;
    case 0x800265B8u: goto label_800265B8;
    case 0x800265BCu: goto label_800265BC;
    case 0x800265C0u: goto label_800265C0;
    case 0x800265C4u: goto label_800265C4;
    case 0x800265C8u: goto label_800265C8;
    case 0x800265CCu: goto label_800265CC;
    case 0x800265D0u: goto label_800265D0;
    case 0x800265D4u: goto label_800265D4;
    case 0x800265D8u: goto label_800265D8;
    case 0x800265DCu: goto label_800265DC;
    case 0x800265E0u: goto label_800265E0;
    case 0x800265E4u: goto label_800265E4;
    case 0x800265E8u: goto label_800265E8;
    case 0x800265ECu: goto label_800265EC;
    case 0x800265F0u: goto label_800265F0;
    case 0x800265F4u: goto label_800265F4;
    case 0x800265F8u: goto label_800265F8;
    case 0x800265FCu: goto label_800265FC;
    case 0x80026600u: goto label_80026600;
    case 0x80026604u: goto label_80026604;
    case 0x80026608u: goto label_80026608;
    case 0x8002660Cu: goto label_8002660C;
    case 0x80026610u: goto label_80026610;
    case 0x80026614u: goto label_80026614;
    case 0x80026618u: goto label_80026618;
    case 0x8002661Cu: goto label_8002661C;
    case 0x80026620u: goto label_80026620;
    case 0x80026624u: goto label_80026624;
    case 0x80026628u: goto label_80026628;
    case 0x8002662Cu: goto label_8002662C;
    case 0x80026630u: goto label_80026630;
    case 0x80026634u: goto label_80026634;
    case 0x80026638u: goto label_80026638;
    case 0x8002663Cu: goto label_8002663C;
    case 0x80026640u: goto label_80026640;
    case 0x80026644u: goto label_80026644;
    case 0x80026648u: goto label_80026648;
    case 0x8002664Cu: goto label_8002664C;
    case 0x80026650u: goto label_80026650;
    case 0x80026654u: goto label_80026654;
    case 0x80026658u: goto label_80026658;
    case 0x8002665Cu: goto label_8002665C;
    case 0x80026660u: goto label_80026660;
    case 0x80026664u: goto label_80026664;
    case 0x80026668u: goto label_80026668;
    case 0x8002666Cu: goto label_8002666C;
    case 0x80026670u: goto label_80026670;
    case 0x80026674u: goto label_80026674;
    case 0x80026678u: goto label_80026678;
    case 0x8002667Cu: goto label_8002667C;
    case 0x80026680u: goto label_80026680;
    case 0x80026684u: goto label_80026684;
    case 0x80026688u: goto label_80026688;
    case 0x8002668Cu: goto label_8002668C;
    case 0x80026690u: goto label_80026690;
    case 0x80026694u: goto label_80026694;
    case 0x80026698u: goto label_80026698;
    case 0x8002669Cu: goto label_8002669C;
    case 0x800266A0u: goto label_800266A0;
    case 0x800266A4u: goto label_800266A4;
    case 0x800266A8u: goto label_800266A8;
    case 0x800266ACu: goto label_800266AC;
    case 0x800266B0u: goto label_800266B0;
    case 0x800266B4u: goto label_800266B4;
    case 0x800266B8u: goto label_800266B8;
    case 0x800266BCu: goto label_800266BC;
    case 0x800266C0u: goto label_800266C0;
    case 0x800266C4u: goto label_800266C4;
    case 0x800266C8u: goto label_800266C8;
    case 0x800266CCu: goto label_800266CC;
    case 0x800266D0u: goto label_800266D0;
    case 0x800266D4u: goto label_800266D4;
    case 0x800266D8u: goto label_800266D8;
    case 0x800266DCu: goto label_800266DC;
    case 0x800266E0u: goto label_800266E0;
    case 0x800266E4u: goto label_800266E4;
    case 0x800266E8u: goto label_800266E8;
    case 0x800266ECu: goto label_800266EC;
    case 0x800266F0u: goto label_800266F0;
    case 0x800266F4u: goto label_800266F4;
    case 0x800266F8u: goto label_800266F8;
    case 0x800266FCu: goto label_800266FC;
    case 0x80026700u: goto label_80026700;
    case 0x80026704u: goto label_80026704;
    case 0x80026708u: goto label_80026708;
    case 0x8002670Cu: goto label_8002670C;
    case 0x80026710u: goto label_80026710;
    case 0x80026714u: goto label_80026714;
    case 0x80026718u: goto label_80026718;
    case 0x8002671Cu: goto label_8002671C;
    case 0x80026720u: goto label_80026720;
    case 0x80026724u: goto label_80026724;
    case 0x80026728u: goto label_80026728;
    case 0x8002672Cu: goto label_8002672C;
    case 0x80026730u: goto label_80026730;
    case 0x80026734u: goto label_80026734;
    case 0x80026738u: goto label_80026738;
    case 0x8002673Cu: goto label_8002673C;
    case 0x80026740u: goto label_80026740;
    case 0x80026744u: goto label_80026744;
    case 0x80026748u: goto label_80026748;
    case 0x8002674Cu: goto label_8002674C;
    case 0x80026750u: goto label_80026750;
    case 0x80026754u: goto label_80026754;
    case 0x80026758u: goto label_80026758;
    case 0x8002675Cu: goto label_8002675C;
    case 0x80026760u: goto label_80026760;
    case 0x80026764u: goto label_80026764;
    case 0x80026768u: goto label_80026768;
    case 0x8002676Cu: goto label_8002676C;
    case 0x80026770u: goto label_80026770;
    case 0x80026774u: goto label_80026774;
    case 0x80026778u: goto label_80026778;
    case 0x8002677Cu: goto label_8002677C;
    case 0x80026780u: goto label_80026780;
    case 0x80026784u: goto label_80026784;
    case 0x80026788u: goto label_80026788;
    case 0x8002678Cu: goto label_8002678C;
    case 0x80026790u: goto label_80026790;
    case 0x80026794u: goto label_80026794;
    case 0x80026798u: goto label_80026798;
    case 0x8002679Cu: goto label_8002679C;
    case 0x800267A0u: goto label_800267A0;
    case 0x800267A4u: goto label_800267A4;
    case 0x800267A8u: goto label_800267A8;
    case 0x800267ACu: goto label_800267AC;
    case 0x800267B0u: goto label_800267B0;
    case 0x800267B4u: goto label_800267B4;
    case 0x800267B8u: goto label_800267B8;
    case 0x800267BCu: goto label_800267BC;
    case 0x800267C0u: goto label_800267C0;
    case 0x800267C4u: goto label_800267C4;
    case 0x800267C8u: goto label_800267C8;
    case 0x800267CCu: goto label_800267CC;
    case 0x800267D0u: goto label_800267D0;
    case 0x800267D4u: goto label_800267D4;
    case 0x800267D8u: goto label_800267D8;
    case 0x800267DCu: goto label_800267DC;
    case 0x800267E0u: goto label_800267E0;
    case 0x800267E4u: goto label_800267E4;
    case 0x800267E8u: goto label_800267E8;
    case 0x800267ECu: goto label_800267EC;
    case 0x800267F0u: goto label_800267F0;
    case 0x800267F4u: goto label_800267F4;
    case 0x800267F8u: goto label_800267F8;
    case 0x800267FCu: goto label_800267FC;
    case 0x80026800u: goto label_80026800;
    case 0x80026804u: goto label_80026804;
    case 0x80026808u: goto label_80026808;
    case 0x8002680Cu: goto label_8002680C;
    case 0x80026810u: goto label_80026810;
    case 0x80026814u: goto label_80026814;
    case 0x80026818u: goto label_80026818;
    case 0x8002681Cu: goto label_8002681C;
    case 0x80026820u: goto label_80026820;
    case 0x80026824u: goto label_80026824;
    case 0x80026828u: goto label_80026828;
    case 0x8002682Cu: goto label_8002682C;
    case 0x80026830u: goto label_80026830;
    case 0x80026834u: goto label_80026834;
    case 0x80026838u: goto label_80026838;
    case 0x8002683Cu: goto label_8002683C;
    case 0x80026840u: goto label_80026840;
    case 0x80026844u: goto label_80026844;
    case 0x80026848u: goto label_80026848;
    case 0x8002684Cu: goto label_8002684C;
    case 0x80026850u: goto label_80026850;
    case 0x80026854u: goto label_80026854;
    case 0x80026858u: goto label_80026858;
    case 0x8002685Cu: goto label_8002685C;
    case 0x80026860u: goto label_80026860;
    case 0x80026864u: goto label_80026864;
    case 0x80026868u: goto label_80026868;
    case 0x8002686Cu: goto label_8002686C;
    case 0x80026870u: goto label_80026870;
    case 0x80026874u: goto label_80026874;
    case 0x80026878u: goto label_80026878;
    case 0x8002687Cu: goto label_8002687C;
    case 0x80026880u: goto label_80026880;
    case 0x80026884u: goto label_80026884;
    case 0x80026888u: goto label_80026888;
    case 0x8002688Cu: goto label_8002688C;
    case 0x80026890u: goto label_80026890;
    case 0x80026894u: goto label_80026894;
    case 0x80026898u: goto label_80026898;
    case 0x8002689Cu: goto label_8002689C;
    case 0x800268A0u: goto label_800268A0;
    case 0x800268A4u: goto label_800268A4;
    case 0x800268A8u: goto label_800268A8;
    case 0x800268ACu: goto label_800268AC;
    case 0x800268B0u: goto label_800268B0;
    case 0x800268B4u: goto label_800268B4;
    case 0x800268B8u: goto label_800268B8;
    case 0x800268BCu: goto label_800268BC;
    case 0x800268C0u: goto label_800268C0;
    case 0x800268C4u: goto label_800268C4;
    case 0x800268C8u: goto label_800268C8;
    case 0x800268CCu: goto label_800268CC;
    case 0x800268D0u: goto label_800268D0;
    case 0x800268D4u: goto label_800268D4;
    case 0x800268D8u: goto label_800268D8;
    case 0x800268DCu: goto label_800268DC;
    case 0x800268E0u: goto label_800268E0;
    case 0x800268E4u: goto label_800268E4;
    case 0x800268E8u: goto label_800268E8;
    case 0x800268ECu: goto label_800268EC;
    case 0x800268F0u: goto label_800268F0;
    case 0x800268F4u: goto label_800268F4;
    case 0x800268F8u: goto label_800268F8;
    case 0x800268FCu: goto label_800268FC;
    case 0x80026900u: goto label_80026900;
    case 0x80026904u: goto label_80026904;
    case 0x80026908u: goto label_80026908;
    case 0x8002690Cu: goto label_8002690C;
    case 0x80026910u: goto label_80026910;
    case 0x80026914u: goto label_80026914;
    case 0x80026918u: goto label_80026918;
    case 0x8002691Cu: goto label_8002691C;
    case 0x80026920u: goto label_80026920;
    case 0x80026924u: goto label_80026924;
    case 0x80026928u: goto label_80026928;
    case 0x8002692Cu: goto label_8002692C;
    case 0x80026930u: goto label_80026930;
    case 0x80026934u: goto label_80026934;
    case 0x80026938u: goto label_80026938;
    case 0x8002693Cu: goto label_8002693C;
    case 0x80026940u: goto label_80026940;
    case 0x80026944u: goto label_80026944;
    case 0x80026948u: goto label_80026948;
    case 0x8002694Cu: goto label_8002694C;
    case 0x80026950u: goto label_80026950;
    case 0x80026954u: goto label_80026954;
    case 0x80026958u: goto label_80026958;
    case 0x8002695Cu: goto label_8002695C;
    case 0x80026960u: goto label_80026960;
    case 0x80026964u: goto label_80026964;
    case 0x80026968u: goto label_80026968;
    case 0x8002696Cu: goto label_8002696C;
    case 0x80026970u: goto label_80026970;
    case 0x80026974u: goto label_80026974;
    case 0x80026978u: goto label_80026978;
    case 0x8002697Cu: goto label_8002697C;
    case 0x80026980u: goto label_80026980;
    case 0x80026984u: goto label_80026984;
    case 0x80026988u: goto label_80026988;
    case 0x8002698Cu: goto label_8002698C;
    case 0x80026990u: goto label_80026990;
    case 0x80026994u: goto label_80026994;
    case 0x80026998u: goto label_80026998;
    case 0x8002699Cu: goto label_8002699C;
    case 0x800269A0u: goto label_800269A0;
    case 0x800269A4u: goto label_800269A4;
    case 0x800269A8u: goto label_800269A8;
    case 0x800269ACu: goto label_800269AC;
    case 0x800269B0u: goto label_800269B0;
    case 0x800269B4u: goto label_800269B4;
    case 0x800269B8u: goto label_800269B8;
    case 0x800269BCu: goto label_800269BC;
    case 0x800269C0u: goto label_800269C0;
    case 0x800269C4u: goto label_800269C4;
    case 0x800269C8u: goto label_800269C8;
    case 0x800269CCu: goto label_800269CC;
    case 0x800269D0u: goto label_800269D0;
    case 0x800269D4u: goto label_800269D4;
    case 0x800269D8u: goto label_800269D8;
    case 0x800269DCu: goto label_800269DC;
    case 0x800269E0u: goto label_800269E0;
    case 0x800269E4u: goto label_800269E4;
    case 0x800269E8u: goto label_800269E8;
    case 0x800269ECu: goto label_800269EC;
    case 0x800269F0u: goto label_800269F0;
    case 0x800269F4u: goto label_800269F4;
    case 0x800269F8u: goto label_800269F8;
    case 0x800269FCu: goto label_800269FC;
    case 0x80026A00u: goto label_80026A00;
    case 0x80026A04u: goto label_80026A04;
    case 0x80026A08u: goto label_80026A08;
    case 0x80026A0Cu: goto label_80026A0C;
    case 0x80026A10u: goto label_80026A10;
    case 0x80026A14u: goto label_80026A14;
    case 0x80026A18u: goto label_80026A18;
    case 0x80026A1Cu: goto label_80026A1C;
    case 0x80026A20u: goto label_80026A20;
    case 0x80026A24u: goto label_80026A24;
    case 0x80026A28u: goto label_80026A28;
    case 0x80026A2Cu: goto label_80026A2C;
    case 0x80026A30u: goto label_80026A30;
    case 0x80026A34u: goto label_80026A34;
    case 0x80026A38u: goto label_80026A38;
    case 0x80026A3Cu: goto label_80026A3C;
    case 0x80026A40u: goto label_80026A40;
    case 0x80026A44u: goto label_80026A44;
    case 0x80026A48u: goto label_80026A48;
    case 0x80026A4Cu: goto label_80026A4C;
    case 0x80026A50u: goto label_80026A50;
    case 0x80026A54u: goto label_80026A54;
    case 0x80026A58u: goto label_80026A58;
    case 0x80026A5Cu: goto label_80026A5C;
    case 0x80026A60u: goto label_80026A60;
    case 0x80026A64u: goto label_80026A64;
    case 0x80026A68u: goto label_80026A68;
    case 0x80026A6Cu: goto label_80026A6C;
    case 0x80026A70u: goto label_80026A70;
    case 0x80026A74u: goto label_80026A74;
    case 0x80026A78u: goto label_80026A78;
    case 0x80026A7Cu: goto label_80026A7C;
    case 0x80026A80u: goto label_80026A80;
    case 0x80026A84u: goto label_80026A84;
    case 0x80026A88u: goto label_80026A88;
    case 0x80026A8Cu: goto label_80026A8C;
    case 0x80026A90u: goto label_80026A90;
    case 0x80026A94u: goto label_80026A94;
    case 0x80026A98u: goto label_80026A98;
    case 0x80026A9Cu: goto label_80026A9C;
    case 0x80026AA0u: goto label_80026AA0;
    case 0x80026AA4u: goto label_80026AA4;
    case 0x80026AA8u: goto label_80026AA8;
    case 0x80026AACu: goto label_80026AAC;
    case 0x80026AB0u: goto label_80026AB0;
    case 0x80026AB4u: goto label_80026AB4;
    case 0x80026AB8u: goto label_80026AB8;
    case 0x80026ABCu: goto label_80026ABC;
    case 0x80026AC0u: goto label_80026AC0;
    case 0x80026AC4u: goto label_80026AC4;
    case 0x80026AC8u: goto label_80026AC8;
    case 0x80026ACCu: goto label_80026ACC;
    case 0x80026AD0u: goto label_80026AD0;
    case 0x80026AD4u: goto label_80026AD4;
    case 0x80026AD8u: goto label_80026AD8;
    case 0x80026ADCu: goto label_80026ADC;
    case 0x80026AE0u: goto label_80026AE0;
    case 0x80026AE4u: goto label_80026AE4;
    case 0x80026AE8u: goto label_80026AE8;
    case 0x80026AECu: goto label_80026AEC;
    case 0x80026AF0u: goto label_80026AF0;
    case 0x80026AF4u: goto label_80026AF4;
    case 0x80026AF8u: goto label_80026AF8;
    case 0x80026AFCu: goto label_80026AFC;
    case 0x80026B00u: goto label_80026B00;
    case 0x80026B04u: goto label_80026B04;
    case 0x80026B08u: goto label_80026B08;
    case 0x80026B0Cu: goto label_80026B0C;
    case 0x80026B10u: goto label_80026B10;
    case 0x80026B14u: goto label_80026B14;
    case 0x80026B18u: goto label_80026B18;
    case 0x80026B1Cu: goto label_80026B1C;
    case 0x80026B20u: goto label_80026B20;
    case 0x80026B24u: goto label_80026B24;
    case 0x80026B28u: goto label_80026B28;
    case 0x80026B2Cu: goto label_80026B2C;
    case 0x80026B30u: goto label_80026B30;
    case 0x80026B34u: goto label_80026B34;
    case 0x80026B38u: goto label_80026B38;
    case 0x80026B3Cu: goto label_80026B3C;
    case 0x80026B40u: goto label_80026B40;
    case 0x80026B44u: goto label_80026B44;
    case 0x80026B48u: goto label_80026B48;
    case 0x80026B4Cu: goto label_80026B4C;
    case 0x80026B50u: goto label_80026B50;
    case 0x80026B54u: goto label_80026B54;
    case 0x80026B58u: goto label_80026B58;
    case 0x80026B5Cu: goto label_80026B5C;
    case 0x80026B60u: goto label_80026B60;
    case 0x80026B64u: goto label_80026B64;
    case 0x80026B68u: goto label_80026B68;
    case 0x80026B6Cu: goto label_80026B6C;
    case 0x80026B70u: goto label_80026B70;
    case 0x80026B74u: goto label_80026B74;
    case 0x80026B78u: goto label_80026B78;
    case 0x80026B7Cu: goto label_80026B7C;
    case 0x80026B80u: goto label_80026B80;
    case 0x80026B84u: goto label_80026B84;
    case 0x80026B88u: goto label_80026B88;
    case 0x80026B8Cu: goto label_80026B8C;
    case 0x80026B90u: goto label_80026B90;
    case 0x80026B94u: goto label_80026B94;
    case 0x80026B98u: goto label_80026B98;
    case 0x80026B9Cu: goto label_80026B9C;
    case 0x80026BA0u: goto label_80026BA0;
    case 0x80026BA4u: goto label_80026BA4;
    case 0x80026BA8u: goto label_80026BA8;
    case 0x80026BACu: goto label_80026BAC;
    case 0x80026BB0u: goto label_80026BB0;
    case 0x80026BB4u: goto label_80026BB4;
    case 0x80026BB8u: goto label_80026BB8;
    case 0x80026BBCu: goto label_80026BBC;
    case 0x80026BC0u: goto label_80026BC0;
    case 0x80026BC4u: goto label_80026BC4;
    case 0x80026BC8u: goto label_80026BC8;
    case 0x80026BCCu: goto label_80026BCC;
    case 0x80026BD0u: goto label_80026BD0;
    case 0x80026BD4u: goto label_80026BD4;
    case 0x80026BD8u: goto label_80026BD8;
    case 0x80026BDCu: goto label_80026BDC;
    case 0x80026BE0u: goto label_80026BE0;
    case 0x80026BE4u: goto label_80026BE4;
    case 0x80026BE8u: goto label_80026BE8;
    case 0x80026BECu: goto label_80026BEC;
    case 0x80026BF0u: goto label_80026BF0;
    case 0x80026BF4u: goto label_80026BF4;
    case 0x80026BF8u: goto label_80026BF8;
    case 0x80026BFCu: goto label_80026BFC;
    case 0x80026C00u: goto label_80026C00;
    case 0x80026C04u: goto label_80026C04;
    case 0x80026C08u: goto label_80026C08;
    case 0x80026C0Cu: goto label_80026C0C;
    case 0x80026C10u: goto label_80026C10;
    case 0x80026C14u: goto label_80026C14;
    case 0x80026C18u: goto label_80026C18;
    case 0x80026C1Cu: goto label_80026C1C;
    case 0x80026C20u: goto label_80026C20;
    case 0x80026C24u: goto label_80026C24;
    case 0x80026C28u: goto label_80026C28;
    case 0x80026C2Cu: goto label_80026C2C;
    case 0x80026C30u: goto label_80026C30;
    case 0x80026C34u: goto label_80026C34;
    case 0x80026C38u: goto label_80026C38;
    case 0x80026C3Cu: goto label_80026C3C;
    case 0x80026C40u: goto label_80026C40;
    case 0x80026C44u: goto label_80026C44;
    case 0x80026C48u: goto label_80026C48;
    case 0x80026C4Cu: goto label_80026C4C;
    case 0x80026C50u: goto label_80026C50;
    case 0x80026C54u: goto label_80026C54;
    case 0x80026C58u: goto label_80026C58;
    case 0x80026C5Cu: goto label_80026C5C;
    case 0x80026C60u: goto label_80026C60;
    case 0x80026C64u: goto label_80026C64;
    case 0x80026C68u: goto label_80026C68;
    case 0x80026C6Cu: goto label_80026C6C;
    case 0x80026C70u: goto label_80026C70;
    case 0x80026C74u: goto label_80026C74;
    case 0x80026C78u: goto label_80026C78;
    case 0x80026C7Cu: goto label_80026C7C;
    case 0x80026C80u: goto label_80026C80;
    case 0x80026C84u: goto label_80026C84;
    case 0x80026C88u: goto label_80026C88;
    case 0x80026C8Cu: goto label_80026C8C;
    case 0x80026C90u: goto label_80026C90;
    case 0x80026C94u: goto label_80026C94;
    case 0x80026C98u: goto label_80026C98;
    case 0x80026C9Cu: goto label_80026C9C;
    case 0x80026CA0u: goto label_80026CA0;
    case 0x80026CA4u: goto label_80026CA4;
    case 0x80026CA8u: goto label_80026CA8;
    case 0x80026CACu: goto label_80026CAC;
    case 0x80026CB0u: goto label_80026CB0;
    case 0x80026CB4u: goto label_80026CB4;
    case 0x80026CB8u: goto label_80026CB8;
    case 0x80026CBCu: goto label_80026CBC;
    case 0x80026CC0u: goto label_80026CC0;
    case 0x80026CC4u: goto label_80026CC4;
    case 0x80026CC8u: goto label_80026CC8;
    case 0x80026CCCu: goto label_80026CCC;
    case 0x80026CD0u: goto label_80026CD0;
    case 0x80026CD4u: goto label_80026CD4;
    case 0x80026CD8u: goto label_80026CD8;
    case 0x80026CDCu: goto label_80026CDC;
    case 0x80026CE0u: goto label_80026CE0;
    case 0x80026CE4u: goto label_80026CE4;
    case 0x80026CE8u: goto label_80026CE8;
    case 0x80026CECu: goto label_80026CEC;
    case 0x80026CF0u: goto label_80026CF0;
    case 0x80026CF4u: goto label_80026CF4;
    case 0x80026CF8u: goto label_80026CF8;
    case 0x80026CFCu: goto label_80026CFC;
    case 0x80026D00u: goto label_80026D00;
    case 0x80026D04u: goto label_80026D04;
    case 0x80026D08u: goto label_80026D08;
    case 0x80026D0Cu: goto label_80026D0C;
    case 0x80026D10u: goto label_80026D10;
    case 0x80026D14u: goto label_80026D14;
    case 0x80026D18u: goto label_80026D18;
    case 0x80026D1Cu: goto label_80026D1C;
    case 0x80026D20u: goto label_80026D20;
    case 0x80026D24u: goto label_80026D24;
    case 0x80026D28u: goto label_80026D28;
    case 0x80026D2Cu: goto label_80026D2C;
    case 0x80026D30u: goto label_80026D30;
    case 0x80026D34u: goto label_80026D34;
    case 0x80026D38u: goto label_80026D38;
    case 0x80026D3Cu: goto label_80026D3C;
    case 0x80026D40u: goto label_80026D40;
    case 0x80026D44u: goto label_80026D44;
    case 0x80026D48u: goto label_80026D48;
    case 0x80026D4Cu: goto label_80026D4C;
    case 0x80026D50u: goto label_80026D50;
    case 0x80026D54u: goto label_80026D54;
    case 0x80026D58u: goto label_80026D58;
    case 0x80026D5Cu: goto label_80026D5C;
    case 0x80026D60u: goto label_80026D60;
    case 0x80026D64u: goto label_80026D64;
    case 0x80026D68u: goto label_80026D68;
    case 0x80026D6Cu: goto label_80026D6C;
    case 0x80026D70u: goto label_80026D70;
    case 0x80026D74u: goto label_80026D74;
    case 0x80026D78u: goto label_80026D78;
    case 0x80026D7Cu: goto label_80026D7C;
    case 0x80026D80u: goto label_80026D80;
    case 0x80026D84u: goto label_80026D84;
    case 0x80026D88u: goto label_80026D88;
    case 0x80026D8Cu: goto label_80026D8C;
    case 0x80026D90u: goto label_80026D90;
    case 0x80026D94u: goto label_80026D94;
    case 0x80026D98u: goto label_80026D98;
    case 0x80026D9Cu: goto label_80026D9C;
    case 0x80026DA0u: goto label_80026DA0;
    case 0x80026DA4u: goto label_80026DA4;
    case 0x80026DA8u: goto label_80026DA8;
    case 0x80026DACu: goto label_80026DAC;
    case 0x80026DB0u: goto label_80026DB0;
    case 0x80026DB4u: goto label_80026DB4;
    case 0x80026DB8u: goto label_80026DB8;
    case 0x80026DBCu: goto label_80026DBC;
    case 0x80026DC0u: goto label_80026DC0;
    case 0x80026DC4u: goto label_80026DC4;
    case 0x80026DC8u: goto label_80026DC8;
    case 0x80026DCCu: goto label_80026DCC;
    case 0x80026DD0u: goto label_80026DD0;
    case 0x80026DD4u: goto label_80026DD4;
    case 0x80026DD8u: goto label_80026DD8;
    case 0x80026DDCu: goto label_80026DDC;
    case 0x80026DE0u: goto label_80026DE0;
    case 0x80026DE4u: goto label_80026DE4;
    case 0x80026DE8u: goto label_80026DE8;
    case 0x80026DECu: goto label_80026DEC;
    case 0x80026DF0u: goto label_80026DF0;
    case 0x80026DF4u: goto label_80026DF4;
    case 0x80026DF8u: goto label_80026DF8;
    case 0x80026DFCu: goto label_80026DFC;
    case 0x80026E00u: goto label_80026E00;
    case 0x80026E04u: goto label_80026E04;
    case 0x80026E08u: goto label_80026E08;
    case 0x80026E0Cu: goto label_80026E0C;
    case 0x80026E10u: goto label_80026E10;
    case 0x80026E14u: goto label_80026E14;
    case 0x80026E18u: goto label_80026E18;
    case 0x80026E1Cu: goto label_80026E1C;
    case 0x80026E20u: goto label_80026E20;
    case 0x80026E24u: goto label_80026E24;
    case 0x80026E28u: goto label_80026E28;
    case 0x80026E2Cu: goto label_80026E2C;
    case 0x80026E30u: goto label_80026E30;
    case 0x80026E34u: goto label_80026E34;
    case 0x80026E38u: goto label_80026E38;
    case 0x80026E3Cu: goto label_80026E3C;
    case 0x80026E40u: goto label_80026E40;
    case 0x80026E44u: goto label_80026E44;
    case 0x80026E48u: goto label_80026E48;
    case 0x80026E4Cu: goto label_80026E4C;
    case 0x80026E50u: goto label_80026E50;
    case 0x80026E54u: goto label_80026E54;
    case 0x80026E58u: goto label_80026E58;
    case 0x80026E5Cu: goto label_80026E5C;
    case 0x80026E60u: goto label_80026E60;
    case 0x80026E64u: goto label_80026E64;
    case 0x80026E68u: goto label_80026E68;
    case 0x80026E6Cu: goto label_80026E6C;
    case 0x80026E70u: goto label_80026E70;
    case 0x80026E74u: goto label_80026E74;
    case 0x80026E78u: goto label_80026E78;
    case 0x80026E7Cu: goto label_80026E7C;
    case 0x80026E80u: goto label_80026E80;
    case 0x80026E84u: goto label_80026E84;
    case 0x80026E88u: goto label_80026E88;
    case 0x80026E8Cu: goto label_80026E8C;
    case 0x80026E90u: goto label_80026E90;
    case 0x80026E94u: goto label_80026E94;
    case 0x80026E98u: goto label_80026E98;
    case 0x80026E9Cu: goto label_80026E9C;
    case 0x80026EA0u: goto label_80026EA0;
    case 0x80026EA4u: goto label_80026EA4;
    case 0x80026EA8u: goto label_80026EA8;
    case 0x80026EACu: goto label_80026EAC;
    case 0x80026EB0u: goto label_80026EB0;
    case 0x80026EB4u: goto label_80026EB4;
    case 0x80026EB8u: goto label_80026EB8;
    case 0x80026EBCu: goto label_80026EBC;
    case 0x80026EC0u: goto label_80026EC0;
    case 0x80026EC4u: goto label_80026EC4;
    case 0x80026EC8u: goto label_80026EC8;
    case 0x80026ECCu: goto label_80026ECC;
    case 0x80026ED0u: goto label_80026ED0;
    case 0x80026ED4u: goto label_80026ED4;
    case 0x80026ED8u: goto label_80026ED8;
    case 0x80026EDCu: goto label_80026EDC;
    case 0x80026EE0u: goto label_80026EE0;
    case 0x80026EE4u: goto label_80026EE4;
    case 0x80026EE8u: goto label_80026EE8;
    case 0x80026EECu: goto label_80026EEC;
    case 0x80026EF0u: goto label_80026EF0;
    case 0x80026EF4u: goto label_80026EF4;
    case 0x80026EF8u: goto label_80026EF8;
    case 0x80026EFCu: goto label_80026EFC;
    case 0x80026F00u: goto label_80026F00;
    case 0x80026F04u: goto label_80026F04;
    case 0x80026F08u: goto label_80026F08;
    case 0x80026F0Cu: goto label_80026F0C;
    case 0x80026F10u: goto label_80026F10;
    case 0x80026F14u: goto label_80026F14;
    case 0x80026F18u: goto label_80026F18;
    case 0x80026F1Cu: goto label_80026F1C;
    case 0x80026F20u: goto label_80026F20;
    case 0x80026F24u: goto label_80026F24;
    case 0x80026F28u: goto label_80026F28;
    case 0x80026F2Cu: goto label_80026F2C;
    case 0x80026F30u: goto label_80026F30;
    case 0x80026F34u: goto label_80026F34;
    case 0x80026F38u: goto label_80026F38;
    case 0x80026F3Cu: goto label_80026F3C;
    case 0x80026F40u: goto label_80026F40;
    case 0x80026F44u: goto label_80026F44;
    case 0x80026F48u: goto label_80026F48;
    case 0x80026F4Cu: goto label_80026F4C;
    case 0x80026F50u: goto label_80026F50;
    case 0x80026F54u: goto label_80026F54;
    case 0x80026F58u: goto label_80026F58;
    case 0x80026F5Cu: goto label_80026F5C;
    case 0x80026F60u: goto label_80026F60;
    case 0x80026F64u: goto label_80026F64;
    case 0x80026F68u: goto label_80026F68;
    case 0x80026F6Cu: goto label_80026F6C;
    case 0x80026F70u: goto label_80026F70;
    case 0x80026F74u: goto label_80026F74;
    case 0x80026F78u: goto label_80026F78;
    case 0x80026F7Cu: goto label_80026F7C;
    case 0x80026F80u: goto label_80026F80;
    case 0x80026F84u: goto label_80026F84;
    case 0x80026F88u: goto label_80026F88;
    case 0x80026F8Cu: goto label_80026F8C;
    case 0x80026F90u: goto label_80026F90;
    case 0x80026F94u: goto label_80026F94;
    case 0x80026F98u: goto label_80026F98;
    case 0x80026F9Cu: goto label_80026F9C;
    case 0x80026FA0u: goto label_80026FA0;
    case 0x80026FA4u: goto label_80026FA4;
    case 0x80026FA8u: goto label_80026FA8;
    case 0x80026FACu: goto label_80026FAC;
    case 0x80026FB0u: goto label_80026FB0;
    case 0x80026FB4u: goto label_80026FB4;
    case 0x80026FB8u: goto label_80026FB8;
    case 0x80026FBCu: goto label_80026FBC;
    case 0x80026FC0u: goto label_80026FC0;
    case 0x80026FC4u: goto label_80026FC4;
    case 0x80026FC8u: goto label_80026FC8;
    case 0x80026FCCu: goto label_80026FCC;
    case 0x80026FD0u: goto label_80026FD0;
    case 0x80026FD4u: goto label_80026FD4;
    case 0x80026FD8u: goto label_80026FD8;
    case 0x80026FDCu: goto label_80026FDC;
    case 0x80026FE0u: goto label_80026FE0;
    case 0x80026FE4u: goto label_80026FE4;
    case 0x80026FE8u: goto label_80026FE8;
    case 0x80026FECu: goto label_80026FEC;
    case 0x80026FF0u: goto label_80026FF0;
    case 0x80026FF4u: goto label_80026FF4;
    case 0x80026FF8u: goto label_80026FF8;
    case 0x80026FFCu: goto label_80026FFC;
    case 0x80027000u: goto label_80027000;
    case 0x80027004u: goto label_80027004;
    case 0x80027008u: goto label_80027008;
    case 0x8002700Cu: goto label_8002700C;
    case 0x80027010u: goto label_80027010;
    case 0x80027014u: goto label_80027014;
    case 0x80027018u: goto label_80027018;
    case 0x8002701Cu: goto label_8002701C;
    case 0x80027020u: goto label_80027020;
    case 0x80027024u: goto label_80027024;
    case 0x80027028u: goto label_80027028;
    case 0x8002702Cu: goto label_8002702C;
    case 0x80027030u: goto label_80027030;
    case 0x80027034u: goto label_80027034;
    case 0x80027038u: goto label_80027038;
    case 0x8002703Cu: goto label_8002703C;
    case 0x80027040u: goto label_80027040;
    case 0x80027044u: goto label_80027044;
    case 0x80027048u: goto label_80027048;
    case 0x8002704Cu: goto label_8002704C;
    case 0x80027050u: goto label_80027050;
    case 0x80027054u: goto label_80027054;
    case 0x80027058u: goto label_80027058;
    case 0x8002705Cu: goto label_8002705C;
    case 0x80027060u: goto label_80027060;
    case 0x80027064u: goto label_80027064;
    case 0x80027068u: goto label_80027068;
    case 0x8002706Cu: goto label_8002706C;
    case 0x80027070u: goto label_80027070;
    case 0x80027074u: goto label_80027074;
    case 0x80027078u: goto label_80027078;
    case 0x8002707Cu: goto label_8002707C;
    case 0x80027080u: goto label_80027080;
    case 0x80027084u: goto label_80027084;
    case 0x80027088u: goto label_80027088;
    case 0x8002708Cu: goto label_8002708C;
    case 0x80027090u: goto label_80027090;
    case 0x80027094u: goto label_80027094;
    case 0x80027098u: goto label_80027098;
    case 0x8002709Cu: goto label_8002709C;
    case 0x800270A0u: goto label_800270A0;
    case 0x800270A4u: goto label_800270A4;
    case 0x800270A8u: goto label_800270A8;
    case 0x800270ACu: goto label_800270AC;
    case 0x800270B0u: goto label_800270B0;
    case 0x800270B4u: goto label_800270B4;
    case 0x800270B8u: goto label_800270B8;
    case 0x800270BCu: goto label_800270BC;
    case 0x800270C0u: goto label_800270C0;
    case 0x800270C4u: goto label_800270C4;
    case 0x800270C8u: goto label_800270C8;
    case 0x800270CCu: goto label_800270CC;
    case 0x800270D0u: goto label_800270D0;
    case 0x800270D4u: goto label_800270D4;
    case 0x800270D8u: goto label_800270D8;
    case 0x800270DCu: goto label_800270DC;
    case 0x800270E0u: goto label_800270E0;
    case 0x800270E4u: goto label_800270E4;
    case 0x800270E8u: goto label_800270E8;
    case 0x800270ECu: goto label_800270EC;
    case 0x800270F0u: goto label_800270F0;
    case 0x800270F4u: goto label_800270F4;
    case 0x800270F8u: goto label_800270F8;
    case 0x800270FCu: goto label_800270FC;
    case 0x80027100u: goto label_80027100;
    case 0x80027104u: goto label_80027104;
    case 0x80027108u: goto label_80027108;
    case 0x8002710Cu: goto label_8002710C;
    case 0x80027110u: goto label_80027110;
    case 0x80027114u: goto label_80027114;
    case 0x80027118u: goto label_80027118;
    case 0x8002711Cu: goto label_8002711C;
    case 0x80027120u: goto label_80027120;
    case 0x80027124u: goto label_80027124;
    case 0x80027128u: goto label_80027128;
    case 0x8002712Cu: goto label_8002712C;
    case 0x80027130u: goto label_80027130;
    case 0x80027134u: goto label_80027134;
    case 0x80027138u: goto label_80027138;
    case 0x8002713Cu: goto label_8002713C;
    case 0x80027140u: goto label_80027140;
    case 0x80027144u: goto label_80027144;
    case 0x80027148u: goto label_80027148;
    case 0x8002714Cu: goto label_8002714C;
    case 0x80027150u: goto label_80027150;
    case 0x80027154u: goto label_80027154;
    case 0x80027158u: goto label_80027158;
    case 0x8002715Cu: goto label_8002715C;
    case 0x80027160u: goto label_80027160;
    case 0x80027164u: goto label_80027164;
    case 0x80027168u: goto label_80027168;
    case 0x8002716Cu: goto label_8002716C;
    case 0x80027170u: goto label_80027170;
    case 0x80027174u: goto label_80027174;
    case 0x80027178u: goto label_80027178;
    case 0x8002717Cu: goto label_8002717C;
    case 0x80027180u: goto label_80027180;
    case 0x80027184u: goto label_80027184;
    case 0x80027188u: goto label_80027188;
    case 0x8002718Cu: goto label_8002718C;
    case 0x80027190u: goto label_80027190;
    case 0x80027194u: goto label_80027194;
    case 0x80027198u: goto label_80027198;
    case 0x8002719Cu: goto label_8002719C;
    case 0x800271A0u: goto label_800271A0;
    case 0x800271A4u: goto label_800271A4;
    case 0x800271A8u: goto label_800271A8;
    case 0x800271ACu: goto label_800271AC;
    case 0x800271B0u: goto label_800271B0;
    case 0x800271B4u: goto label_800271B4;
    case 0x800271B8u: goto label_800271B8;
    case 0x800271BCu: goto label_800271BC;
    default: return;
    }
label_800231C0:
    ctx->pc = 0x800231C0u;
    ctx->downcount -= 10;
    // 800231C0: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800231C4:
    ctx->pc = 0x800231C4u;
    // 800231C4: addi    r4, r1, 1048
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(1048);

label_800231C8:
    ctx->pc = 0x800231C8u;
    // 800231C8: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800231CC:
    ctx->pc = 0x800231CCu;
    // 800231CC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800231D0:
    ctx->pc = 0x800231D0u;
    // 800231D0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800231D4:
    ctx->pc = 0x800231D4u;
    // 800231D4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800231D8:
    ctx->pc = 0x800231D8u;
    // 800231D8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800231DC:
    ctx->pc = 0x800231DCu;
    // 800231DC: bl      0x80004000
    {
            ctx->lr = 0x800231E0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800231E0:
    ctx->pc = 0x800231E0u;
    ctx->downcount -= 13;
    // 800231E0: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800231E4:
    ctx->pc = 0x800231E4u;
    // 800231E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800231E8:
    ctx->pc = 0x800231E8u;
    // 800231E8: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800231EC:
    ctx->pc = 0x800231ECu;
    // 800231EC: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800231F0:
    ctx->pc = 0x800231F0u;
    // 800231F0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_800231F4:
    ctx->pc = 0x800231F4u;
    // 800231F4: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800231F8:
    ctx->pc = 0x800231F8u;
    // 800231F8: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_800231FC:
    ctx->pc = 0x800231FCu;
    // 800231FC: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023200:
    ctx->pc = 0x80023200u;
    // 80023200: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023204:
    ctx->pc = 0x80023204u;
    // 80023204: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023208:
    ctx->pc = 0x80023208u;
    // 80023208: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_8002320C:
    ctx->pc = 0x8002320Cu;
    // 8002320C: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023210:
    ctx->pc = 0x80023210u;
    // 80023210: bl      0x8004AF50
    {
            ctx->lr = 0x80023214u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023214:
    ctx->pc = 0x80023214u;
    ctx->downcount -= 32;
    // 80023214: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80023218:
    ctx->pc = 0x80023218u;
    // 80023218: sth     r0, 930(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(930);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002321C:
    ctx->pc = 0x8002321Cu;
    // 8002321C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80023220:
    ctx->pc = 0x80023220u;
    // 80023220: li      r27, 26
    ctx->gpr[27] = (u32)(s32)(26);

label_80023224:
    ctx->pc = 0x80023224u;
    // 80023224: stb     r0, 908(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(908);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023228:
    ctx->pc = 0x80023228u;
    // 80023228: lis     r12, -32766
    ctx->gpr[12] = ((u32)(s32)(-32766) << 16);

label_8002322C:
    ctx->pc = 0x8002322Cu;
    // 8002322C: addi    r12, r12, 12256
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(12256);

label_80023230:
    ctx->pc = 0x80023230u;
    // 80023230: lwz     r10, 912(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(912);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023234:
    ctx->pc = 0x80023234u;
    // 80023234: lwz     r11, 908(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(908);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023238:
    ctx->pc = 0x80023238u;
    // 80023238: lwz     r9, 916(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(916);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8002323C:
    ctx->pc = 0x8002323Cu;
    // 8002323C: lwz     r8, 920(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(920);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023240:
    ctx->pc = 0x80023240u;
    // 80023240: lwz     r7, 924(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(924);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023244:
    ctx->pc = 0x80023244u;
    // 80023244: lwz     r6, 928(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023248:
    ctx->pc = 0x80023248u;
    // 80023248: lwz     r5, 932(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002324C:
    ctx->pc = 0x8002324Cu;
    // 8002324C: lwz     r4, 936(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023250:
    ctx->pc = 0x80023250u;
    // 80023250: lwz     r3, 940(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(940);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023254:
    ctx->pc = 0x80023254u;
    // 80023254: lwz     r0, 944(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023258:
    ctx->pc = 0x80023258u;
    // 80023258: stw     r27, 904(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(904);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_8002325C:
    ctx->pc = 0x8002325Cu;
    // 8002325C: stw     r12, 948(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(948);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023260:
    ctx->pc = 0x80023260u;
    // 80023260: stw     r27, 952(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(952);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_80023264:
    ctx->pc = 0x80023264u;
    // 80023264: stw     r11, 956(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(956);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023268:
    ctx->pc = 0x80023268u;
    // 80023268: stw     r10, 960(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002326C:
    ctx->pc = 0x8002326Cu;
    // 8002326C: stw     r9, 964(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(964);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023270:
    ctx->pc = 0x80023270u;
    // 80023270: stw     r8, 968(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(968);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023274:
    ctx->pc = 0x80023274u;
    // 80023274: stw     r7, 972(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(972);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023278:
    ctx->pc = 0x80023278u;
    // 80023278: stw     r6, 976(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002327C:
    ctx->pc = 0x8002327Cu;
    // 8002327C: stw     r5, 980(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023280:
    ctx->pc = 0x80023280u;
    // 80023280: stw     r4, 984(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023284:
    ctx->pc = 0x80023284u;
    // 80023284: stw     r3, 988(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023288:
    ctx->pc = 0x80023288u;
    // 80023288: stw     r0, 992(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002328C:
    ctx->pc = 0x8002328Cu;
    // 8002328C: stw     r12, 996(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023290:
    ctx->pc = 0x80023290u;
    // 80023290: bl      0x8004AF10
    {
            ctx->lr = 0x80023294u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023294:
    ctx->pc = 0x80023294u;
    ctx->downcount -= 2;
    // 80023294: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023298:
    ctx->pc = 0x80023298u;
    // 80023298: bl      0x8004AF10
    {
            ctx->lr = 0x8002329Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002329C:
    ctx->pc = 0x8002329Cu;
    ctx->downcount -= 5;
    // 8002329C: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800232A0:
    ctx->pc = 0x800232A0u;
    // 800232A0: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800232A4:
    ctx->pc = 0x800232A4u;
    // 800232A4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800232A8:
    ctx->pc = 0x800232A8u;
    // 800232A8: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800232AC:
    ctx->pc = 0x800232ACu;
    // 800232AC: bc    4, 0, 0x800232BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800232BC;
        }
    }

label_800232B0:
    ctx->pc = 0x800232B0u;
    ctx->downcount -= 3;
    // 800232B0: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800232B4:
    ctx->pc = 0x800232B4u;
    // 800232B4: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800232B8:
    ctx->pc = 0x800232B8u;
    // 800232B8: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800232BC:
    ctx->pc = 0x800232BCu;
    ctx->downcount -= 1;
    // 800232BC: bl      0x8004AF50
    {
            ctx->lr = 0x800232C0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800232C0:
    ctx->pc = 0x800232C0u;
    ctx->downcount -= 4;
    // 800232C0: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800232C4:
    ctx->pc = 0x800232C4u;
    // 800232C4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800232C8:
    ctx->pc = 0x800232C8u;
    // 800232C8: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800232CC:
    ctx->pc = 0x800232CCu;
    // 800232CC: bc    4, 2, 0x800232DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800232DC;
        }
    }

label_800232D0:
    ctx->pc = 0x800232D0u;
    ctx->downcount -= 2;
    // 800232D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800232D4:
    ctx->pc = 0x800232D4u;
    // 800232D4: bl      0x8004AF50
    {
            ctx->lr = 0x800232D8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800232D8:
    ctx->pc = 0x800232D8u;
    ctx->downcount -= 1;
    // 800232D8: b       0x80023350
    {
            goto label_80023350;
    }

label_800232DC:
    ctx->pc = 0x800232DCu;
    ctx->downcount -= 10;
    // 800232DC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800232E0:
    ctx->pc = 0x800232E0u;
    // 800232E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800232E4:
    ctx->pc = 0x800232E4u;
    // 800232E4: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800232E8:
    ctx->pc = 0x800232E8u;
    // 800232E8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800232EC:
    ctx->pc = 0x800232ECu;
    // 800232EC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800232F0:
    ctx->pc = 0x800232F0u;
    // 800232F0: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800232F4:
    ctx->pc = 0x800232F4u;
    // 800232F4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800232F8:
    ctx->pc = 0x800232F8u;
    // 800232F8: bl      0x80004350
    {
            ctx->lr = 0x800232FCu;
            ctx->pc = 0x80004350u;
            return;
    }

label_800232FC:
    ctx->pc = 0x800232FCu;
    ctx->downcount -= 10;
    // 800232FC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023300:
    ctx->pc = 0x80023300u;
    // 80023300: addi    r4, r1, 952
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(952);

label_80023304:
    ctx->pc = 0x80023304u;
    // 80023304: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023308:
    ctx->pc = 0x80023308u;
    // 80023308: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002330C:
    ctx->pc = 0x8002330Cu;
    // 8002330C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023310:
    ctx->pc = 0x80023310u;
    // 80023310: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023314:
    ctx->pc = 0x80023314u;
    // 80023314: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023318:
    ctx->pc = 0x80023318u;
    // 80023318: bl      0x80004000
    {
            ctx->lr = 0x8002331Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002331C:
    ctx->pc = 0x8002331Cu;
    ctx->downcount -= 13;
    // 8002331C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023320:
    ctx->pc = 0x80023320u;
    // 80023320: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023324:
    ctx->pc = 0x80023324u;
    // 80023324: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023328:
    ctx->pc = 0x80023328u;
    // 80023328: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002332C:
    ctx->pc = 0x8002332Cu;
    // 8002332C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023330:
    ctx->pc = 0x80023330u;
    // 80023330: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023334:
    ctx->pc = 0x80023334u;
    // 80023334: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023338:
    ctx->pc = 0x80023338u;
    // 80023338: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8002333C:
    ctx->pc = 0x8002333Cu;
    // 8002333C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023340:
    ctx->pc = 0x80023340u;
    // 80023340: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023344:
    ctx->pc = 0x80023344u;
    // 80023344: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023348:
    ctx->pc = 0x80023348u;
    // 80023348: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002334C:
    ctx->pc = 0x8002334Cu;
    // 8002334C: bl      0x8004AF50
    {
            ctx->lr = 0x80023350u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023350:
    ctx->pc = 0x80023350u;
    ctx->downcount -= 30;
    // 80023350: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_80023354:
    ctx->pc = 0x80023354u;
    // 80023354: stb     r11, 812(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(812);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_80023358:
    ctx->pc = 0x80023358u;
    // 80023358: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002335C:
    ctx->pc = 0x8002335Cu;
    // 8002335C: li      r12, 21
    ctx->gpr[12] = (u32)(s32)(21);

label_80023360:
    ctx->pc = 0x80023360u;
    // 80023360: sth     r0, 834(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(834);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80023364:
    ctx->pc = 0x80023364u;
    // 80023364: lwz     r10, 812(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(812);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023368:
    ctx->pc = 0x80023368u;
    // 80023368: lwz     r9, 816(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(816);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8002336C:
    ctx->pc = 0x8002336Cu;
    // 8002336C: lwz     r8, 820(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(820);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023370:
    ctx->pc = 0x80023370u;
    // 80023370: lwz     r7, 824(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(824);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023374:
    ctx->pc = 0x80023374u;
    // 80023374: lwz     r6, 828(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(828);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023378:
    ctx->pc = 0x80023378u;
    // 80023378: lwz     r5, 832(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(832);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002337C:
    ctx->pc = 0x8002337Cu;
    // 8002337C: lwz     r4, 836(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(836);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023380:
    ctx->pc = 0x80023380u;
    // 80023380: lwz     r3, 840(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023384:
    ctx->pc = 0x80023384u;
    // 80023384: lwz     r0, 844(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023388:
    ctx->pc = 0x80023388u;
    // 80023388: stw     r12, 808(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8002338C:
    ctx->pc = 0x8002338Cu;
    // 8002338C: stw     r28, 852(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80023390:
    ctx->pc = 0x80023390u;
    // 80023390: stw     r11, 848(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023394:
    ctx->pc = 0x80023394u;
    // 80023394: stw     r12, 856(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023398:
    ctx->pc = 0x80023398u;
    // 80023398: stw     r10, 860(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002339C:
    ctx->pc = 0x8002339Cu;
    // 8002339C: stw     r9, 864(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(864);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800233A0:
    ctx->pc = 0x800233A0u;
    // 800233A0: stw     r8, 868(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(868);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800233A4:
    ctx->pc = 0x800233A4u;
    // 800233A4: stw     r7, 872(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(872);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800233A8:
    ctx->pc = 0x800233A8u;
    // 800233A8: stw     r6, 876(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(876);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800233AC:
    ctx->pc = 0x800233ACu;
    // 800233AC: stw     r5, 880(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(880);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800233B0:
    ctx->pc = 0x800233B0u;
    // 800233B0: stw     r4, 884(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(884);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800233B4:
    ctx->pc = 0x800233B4u;
    // 800233B4: stw     r3, 888(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800233B8:
    ctx->pc = 0x800233B8u;
    // 800233B8: stw     r0, 892(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800233BC:
    ctx->pc = 0x800233BCu;
    // 800233BC: stw     r11, 896(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(896);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_800233C0:
    ctx->pc = 0x800233C0u;
    // 800233C0: stw     r28, 900(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800233C4:
    ctx->pc = 0x800233C4u;
    // 800233C4: bl      0x8004AF10
    {
            ctx->lr = 0x800233C8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800233C8:
    ctx->pc = 0x800233C8u;
    ctx->downcount -= 2;
    // 800233C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800233CC:
    ctx->pc = 0x800233CCu;
    // 800233CC: bl      0x8004AF10
    {
            ctx->lr = 0x800233D0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800233D0:
    ctx->pc = 0x800233D0u;
    ctx->downcount -= 5;
    // 800233D0: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800233D4:
    ctx->pc = 0x800233D4u;
    // 800233D4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800233D8:
    ctx->pc = 0x800233D8u;
    // 800233D8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800233DC:
    ctx->pc = 0x800233DCu;
    // 800233DC: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800233E0:
    ctx->pc = 0x800233E0u;
    // 800233E0: bc    4, 0, 0x800233F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800233F0;
        }
    }

label_800233E4:
    ctx->pc = 0x800233E4u;
    ctx->downcount -= 3;
    // 800233E4: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800233E8:
    ctx->pc = 0x800233E8u;
    // 800233E8: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800233EC:
    ctx->pc = 0x800233ECu;
    // 800233EC: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800233F0:
    ctx->pc = 0x800233F0u;
    ctx->downcount -= 1;
    // 800233F0: bl      0x8004AF50
    {
            ctx->lr = 0x800233F4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800233F4:
    ctx->pc = 0x800233F4u;
    ctx->downcount -= 4;
    // 800233F4: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800233F8:
    ctx->pc = 0x800233F8u;
    // 800233F8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800233FC:
    ctx->pc = 0x800233FCu;
    // 800233FC: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023400:
    ctx->pc = 0x80023400u;
    // 80023400: bc    4, 2, 0x80023410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023410;
        }
    }

label_80023404:
    ctx->pc = 0x80023404u;
    ctx->downcount -= 2;
    // 80023404: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023408:
    ctx->pc = 0x80023408u;
    // 80023408: bl      0x8004AF50
    {
            ctx->lr = 0x8002340Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_8002340C:
    ctx->pc = 0x8002340Cu;
    ctx->downcount -= 1;
    // 8002340C: b       0x80023484
    {
            goto label_80023484;
    }

label_80023410:
    ctx->pc = 0x80023410u;
    ctx->downcount -= 10;
    // 80023410: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023414:
    ctx->pc = 0x80023414u;
    // 80023414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023418:
    ctx->pc = 0x80023418u;
    // 80023418: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002341C:
    ctx->pc = 0x8002341Cu;
    // 8002341C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023420:
    ctx->pc = 0x80023420u;
    // 80023420: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023424:
    ctx->pc = 0x80023424u;
    // 80023424: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023428:
    ctx->pc = 0x80023428u;
    // 80023428: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002342C:
    ctx->pc = 0x8002342Cu;
    // 8002342C: bl      0x80004350
    {
            ctx->lr = 0x80023430u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023430:
    ctx->pc = 0x80023430u;
    ctx->downcount -= 10;
    // 80023430: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023434:
    ctx->pc = 0x80023434u;
    // 80023434: addi    r4, r1, 856
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(856);

label_80023438:
    ctx->pc = 0x80023438u;
    // 80023438: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002343C:
    ctx->pc = 0x8002343Cu;
    // 8002343C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023440:
    ctx->pc = 0x80023440u;
    // 80023440: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023444:
    ctx->pc = 0x80023444u;
    // 80023444: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023448:
    ctx->pc = 0x80023448u;
    // 80023448: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002344C:
    ctx->pc = 0x8002344Cu;
    // 8002344C: bl      0x80004000
    {
            ctx->lr = 0x80023450u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023450:
    ctx->pc = 0x80023450u;
    ctx->downcount -= 13;
    // 80023450: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023454:
    ctx->pc = 0x80023454u;
    // 80023454: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023458:
    ctx->pc = 0x80023458u;
    // 80023458: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002345C:
    ctx->pc = 0x8002345Cu;
    // 8002345C: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023460:
    ctx->pc = 0x80023460u;
    // 80023460: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023464:
    ctx->pc = 0x80023464u;
    // 80023464: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023468:
    ctx->pc = 0x80023468u;
    // 80023468: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_8002346C:
    ctx->pc = 0x8002346Cu;
    // 8002346C: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023470:
    ctx->pc = 0x80023470u;
    // 80023470: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023474:
    ctx->pc = 0x80023474u;
    // 80023474: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023478:
    ctx->pc = 0x80023478u;
    // 80023478: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_8002347C:
    ctx->pc = 0x8002347Cu;
    // 8002347C: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023480:
    ctx->pc = 0x80023480u;
    // 80023480: bl      0x8004AF50
    {
            ctx->lr = 0x80023484u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023484:
    ctx->pc = 0x80023484u;
    ctx->downcount -= 2;
    // 80023484: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80023488:
    ctx->pc = 0x80023488u;
    // 80023488: bl      0x8004AF50
    {
            ctx->lr = 0x8002348Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_8002348C:
    ctx->pc = 0x8002348Cu;
    ctx->downcount -= 2;
    // 8002348C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80023490:
    ctx->pc = 0x80023490u;
    // 80023490: b       0x80024088
    {
            goto label_80024088;
    }

label_80023494:
    ctx->pc = 0x80023494u;
    ctx->downcount -= 3;
    // 80023494: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80023498:
    ctx->pc = 0x80023498u;
    // 80023498: li      r24, -2
    ctx->gpr[24] = (u32)(s32)(-2);

label_8002349C:
    ctx->pc = 0x8002349Cu;
    // 8002349C: bl      0x8004AF50
    {
            ctx->lr = 0x800234A0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800234A0:
    ctx->pc = 0x800234A0u;
    ctx->downcount -= 1;
    // 800234A0: b       0x80024068
    {
            goto label_80024068;
    }

label_800234A4:
    ctx->pc = 0x800234A4u;
    ctx->downcount -= 2;
    // 800234A4: cmplw   r27, r25
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800234A8:
    ctx->pc = 0x800234A8u;
    // 800234A8: bc    12, 2, 0x80024068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024068;
        }
    }

label_800234AC:
    ctx->pc = 0x800234ACu;
    ctx->downcount -= 1;
    // 800234AC: bl      0x8004AF10
    {
            ctx->lr = 0x800234B0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800234B0:
    ctx->pc = 0x800234B0u;
    ctx->downcount -= 2;
    // 800234B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800234B4:
    ctx->pc = 0x800234B4u;
    // 800234B4: bl      0x8004AF10
    {
            ctx->lr = 0x800234B8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800234B8:
    ctx->pc = 0x800234B8u;
    ctx->downcount -= 5;
    // 800234B8: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800234BC:
    ctx->pc = 0x800234BCu;
    // 800234BC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800234C0:
    ctx->pc = 0x800234C0u;
    // 800234C0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800234C4:
    ctx->pc = 0x800234C4u;
    // 800234C4: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800234C8:
    ctx->pc = 0x800234C8u;
    // 800234C8: bc    4, 0, 0x800234D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800234D8;
        }
    }

label_800234CC:
    ctx->pc = 0x800234CCu;
    ctx->downcount -= 3;
    // 800234CC: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800234D0:
    ctx->pc = 0x800234D0u;
    // 800234D0: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800234D4:
    ctx->pc = 0x800234D4u;
    // 800234D4: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800234D8:
    ctx->pc = 0x800234D8u;
    ctx->downcount -= 1;
    // 800234D8: bl      0x8004AF50
    {
            ctx->lr = 0x800234DCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800234DC:
    ctx->pc = 0x800234DCu;
    ctx->downcount -= 5;
    // 800234DC: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800234E0:
    ctx->pc = 0x800234E0u;
    // 800234E0: addi    r4, r26, 8
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(8);

label_800234E4:
    ctx->pc = 0x800234E4u;
    // 800234E4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800234E8:
    ctx->pc = 0x800234E8u;
    // 800234E8: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800234EC:
    ctx->pc = 0x800234ECu;
    // 800234EC: bc    12, 1, 0x8002405C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002405C;
        }
    }

label_800234F0:
    ctx->pc = 0x800234F0u;
    ctx->downcount -= 33;
    // 800234F0: stb     r27, 2320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2320);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_800234F4:
    ctx->pc = 0x800234F4u;
    // 800234F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800234F8:
    ctx->pc = 0x800234F8u;
    // 800234F8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_800234FC:
    ctx->pc = 0x800234FCu;
    // 800234FC: li      r31, 19
    ctx->gpr[31] = (u32)(s32)(19);

label_80023500:
    ctx->pc = 0x80023500u;
    // 80023500: stb     r0, 716(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(716);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023504:
    ctx->pc = 0x80023504u;
    // 80023504: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80023508:
    ctx->pc = 0x80023508u;
    // 80023508: lwz     r10, 720(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(720);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8002350C:
    ctx->pc = 0x8002350Cu;
    // 8002350C: stb     r3, 2976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2976);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80023510:
    ctx->pc = 0x80023510u;
    // 80023510: lwz     r9, 724(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(724);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023514:
    ctx->pc = 0x80023514u;
    // 80023514: sth     r3, 738(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(738);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80023518:
    ctx->pc = 0x80023518u;
    // 80023518: lwz     r8, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8002351C:
    ctx->pc = 0x8002351Cu;
    // 8002351C: lwz     r11, 716(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(716);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023520:
    ctx->pc = 0x80023520u;
    // 80023520: lwz     r7, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023524:
    ctx->pc = 0x80023524u;
    // 80023524: lwz     r6, 736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(736);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023528:
    ctx->pc = 0x80023528u;
    // 80023528: lwz     r5, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002352C:
    ctx->pc = 0x8002352Cu;
    // 8002352C: lwz     r4, 744(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(744);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023530:
    ctx->pc = 0x80023530u;
    // 80023530: lwz     r3, 748(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(748);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023534:
    ctx->pc = 0x80023534u;
    // 80023534: lwz     r0, 752(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(752);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023538:
    ctx->pc = 0x80023538u;
    // 80023538: stw     r31, 712(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(712);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002353C:
    ctx->pc = 0x8002353Cu;
    // 8002353C: stw     r12, 756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(756);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023540:
    ctx->pc = 0x80023540u;
    // 80023540: stw     r31, 760(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80023544:
    ctx->pc = 0x80023544u;
    // 80023544: stw     r11, 764(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(764);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023548:
    ctx->pc = 0x80023548u;
    // 80023548: stw     r10, 768(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(768);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002354C:
    ctx->pc = 0x8002354Cu;
    // 8002354C: stw     r9, 772(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(772);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023550:
    ctx->pc = 0x80023550u;
    // 80023550: stw     r8, 776(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(776);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023554:
    ctx->pc = 0x80023554u;
    // 80023554: stw     r7, 780(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023558:
    ctx->pc = 0x80023558u;
    // 80023558: stw     r6, 784(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(784);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002355C:
    ctx->pc = 0x8002355Cu;
    // 8002355C: stw     r5, 788(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(788);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023560:
    ctx->pc = 0x80023560u;
    // 80023560: stw     r4, 792(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(792);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023564:
    ctx->pc = 0x80023564u;
    // 80023564: stw     r3, 796(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023568:
    ctx->pc = 0x80023568u;
    // 80023568: stw     r0, 800(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002356C:
    ctx->pc = 0x8002356Cu;
    // 8002356C: stw     r12, 804(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023570:
    ctx->pc = 0x80023570u;
    // 80023570: bl      0x8004AF10
    {
            ctx->lr = 0x80023574u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023574:
    ctx->pc = 0x80023574u;
    ctx->downcount -= 2;
    // 80023574: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023578:
    ctx->pc = 0x80023578u;
    // 80023578: bl      0x8004AF10
    {
            ctx->lr = 0x8002357Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002357C:
    ctx->pc = 0x8002357Cu;
    ctx->downcount -= 5;
    // 8002357C: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023580:
    ctx->pc = 0x80023580u;
    // 80023580: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023584:
    ctx->pc = 0x80023584u;
    // 80023584: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023588:
    ctx->pc = 0x80023588u;
    // 80023588: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002358C:
    ctx->pc = 0x8002358Cu;
    // 8002358C: bc    4, 0, 0x8002359C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002359C;
        }
    }

label_80023590:
    ctx->pc = 0x80023590u;
    ctx->downcount -= 3;
    // 80023590: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023594:
    ctx->pc = 0x80023594u;
    // 80023594: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023598:
    ctx->pc = 0x80023598u;
    // 80023598: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002359C:
    ctx->pc = 0x8002359Cu;
    ctx->downcount -= 1;
    // 8002359C: bl      0x8004AF50
    {
            ctx->lr = 0x800235A0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800235A0:
    ctx->pc = 0x800235A0u;
    ctx->downcount -= 4;
    // 800235A0: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800235A4:
    ctx->pc = 0x800235A4u;
    // 800235A4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800235A8:
    ctx->pc = 0x800235A8u;
    // 800235A8: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800235AC:
    ctx->pc = 0x800235ACu;
    // 800235AC: bc    4, 2, 0x800235BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800235BC;
        }
    }

label_800235B0:
    ctx->pc = 0x800235B0u;
    ctx->downcount -= 2;
    // 800235B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800235B4:
    ctx->pc = 0x800235B4u;
    // 800235B4: bl      0x8004AF50
    {
            ctx->lr = 0x800235B8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800235B8:
    ctx->pc = 0x800235B8u;
    ctx->downcount -= 1;
    // 800235B8: b       0x80023630
    {
            goto label_80023630;
    }

label_800235BC:
    ctx->pc = 0x800235BCu;
    ctx->downcount -= 10;
    // 800235BC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800235C0:
    ctx->pc = 0x800235C0u;
    // 800235C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800235C4:
    ctx->pc = 0x800235C4u;
    // 800235C4: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800235C8:
    ctx->pc = 0x800235C8u;
    // 800235C8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800235CC:
    ctx->pc = 0x800235CCu;
    // 800235CC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800235D0:
    ctx->pc = 0x800235D0u;
    // 800235D0: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800235D4:
    ctx->pc = 0x800235D4u;
    // 800235D4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800235D8:
    ctx->pc = 0x800235D8u;
    // 800235D8: bl      0x80004350
    {
            ctx->lr = 0x800235DCu;
            ctx->pc = 0x80004350u;
            return;
    }

label_800235DC:
    ctx->pc = 0x800235DCu;
    ctx->downcount -= 10;
    // 800235DC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800235E0:
    ctx->pc = 0x800235E0u;
    // 800235E0: addi    r4, r1, 760
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(760);

label_800235E4:
    ctx->pc = 0x800235E4u;
    // 800235E4: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800235E8:
    ctx->pc = 0x800235E8u;
    // 800235E8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800235EC:
    ctx->pc = 0x800235ECu;
    // 800235EC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800235F0:
    ctx->pc = 0x800235F0u;
    // 800235F0: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800235F4:
    ctx->pc = 0x800235F4u;
    // 800235F4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800235F8:
    ctx->pc = 0x800235F8u;
    // 800235F8: bl      0x80004000
    {
            ctx->lr = 0x800235FCu;
            ctx->pc = 0x80004000u;
            return;
    }

label_800235FC:
    ctx->pc = 0x800235FCu;
    ctx->downcount -= 13;
    // 800235FC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023600:
    ctx->pc = 0x80023600u;
    // 80023600: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023604:
    ctx->pc = 0x80023604u;
    // 80023604: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023608:
    ctx->pc = 0x80023608u;
    // 80023608: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002360C:
    ctx->pc = 0x8002360Cu;
    // 8002360C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023610:
    ctx->pc = 0x80023610u;
    // 80023610: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023614:
    ctx->pc = 0x80023614u;
    // 80023614: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023618:
    ctx->pc = 0x80023618u;
    // 80023618: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8002361C:
    ctx->pc = 0x8002361Cu;
    // 8002361C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023620:
    ctx->pc = 0x80023620u;
    // 80023620: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023624:
    ctx->pc = 0x80023624u;
    // 80023624: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023628:
    ctx->pc = 0x80023628u;
    // 80023628: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002362C:
    ctx->pc = 0x8002362Cu;
    // 8002362C: bl      0x8004AF50
    {
            ctx->lr = 0x80023630u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023630:
    ctx->pc = 0x80023630u;
    ctx->downcount -= 31;
    // 80023630: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80023634:
    ctx->pc = 0x80023634u;
    // 80023634: sth     r0, 642(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80023638:
    ctx->pc = 0x80023638u;
    // 80023638: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8002363C:
    ctx->pc = 0x8002363Cu;
    // 8002363C: li      r31, 26
    ctx->gpr[31] = (u32)(s32)(26);

label_80023640:
    ctx->pc = 0x80023640u;
    // 80023640: stb     r0, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023644:
    ctx->pc = 0x80023644u;
    // 80023644: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80023648:
    ctx->pc = 0x80023648u;
    // 80023648: lwz     r10, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8002364C:
    ctx->pc = 0x8002364Cu;
    // 8002364C: lwz     r11, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023650:
    ctx->pc = 0x80023650u;
    // 80023650: lwz     r9, 628(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(628);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023654:
    ctx->pc = 0x80023654u;
    // 80023654: lwz     r8, 632(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(632);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023658:
    ctx->pc = 0x80023658u;
    // 80023658: lwz     r7, 636(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(636);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002365C:
    ctx->pc = 0x8002365Cu;
    // 8002365C: lwz     r6, 640(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(640);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023660:
    ctx->pc = 0x80023660u;
    // 80023660: lwz     r5, 644(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(644);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023664:
    ctx->pc = 0x80023664u;
    // 80023664: lwz     r4, 648(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023668:
    ctx->pc = 0x80023668u;
    // 80023668: lwz     r3, 652(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002366C:
    ctx->pc = 0x8002366Cu;
    // 8002366C: lwz     r0, 656(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023670:
    ctx->pc = 0x80023670u;
    // 80023670: stw     r31, 616(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80023674:
    ctx->pc = 0x80023674u;
    // 80023674: stw     r12, 660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023678:
    ctx->pc = 0x80023678u;
    // 80023678: stw     r31, 664(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002367C:
    ctx->pc = 0x8002367Cu;
    // 8002367C: stw     r11, 668(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023680:
    ctx->pc = 0x80023680u;
    // 80023680: stw     r10, 672(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023684:
    ctx->pc = 0x80023684u;
    // 80023684: stw     r9, 676(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023688:
    ctx->pc = 0x80023688u;
    // 80023688: stw     r8, 680(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002368C:
    ctx->pc = 0x8002368Cu;
    // 8002368C: stw     r7, 684(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023690:
    ctx->pc = 0x80023690u;
    // 80023690: stw     r6, 688(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(688);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023694:
    ctx->pc = 0x80023694u;
    // 80023694: stw     r5, 692(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023698:
    ctx->pc = 0x80023698u;
    // 80023698: stw     r4, 696(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(696);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002369C:
    ctx->pc = 0x8002369Cu;
    // 8002369C: stw     r3, 700(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(700);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800236A0:
    ctx->pc = 0x800236A0u;
    // 800236A0: stw     r0, 704(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800236A4:
    ctx->pc = 0x800236A4u;
    // 800236A4: stw     r12, 708(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_800236A8:
    ctx->pc = 0x800236A8u;
    // 800236A8: bl      0x8004AF10
    {
            ctx->lr = 0x800236ACu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800236AC:
    ctx->pc = 0x800236ACu;
    ctx->downcount -= 2;
    // 800236AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800236B0:
    ctx->pc = 0x800236B0u;
    // 800236B0: bl      0x8004AF10
    {
            ctx->lr = 0x800236B4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800236B4:
    ctx->pc = 0x800236B4u;
    ctx->downcount -= 5;
    // 800236B4: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800236B8:
    ctx->pc = 0x800236B8u;
    // 800236B8: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800236BC:
    ctx->pc = 0x800236BCu;
    // 800236BC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800236C0:
    ctx->pc = 0x800236C0u;
    // 800236C0: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800236C4:
    ctx->pc = 0x800236C4u;
    // 800236C4: bc    4, 0, 0x800236D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800236D4;
        }
    }

label_800236C8:
    ctx->pc = 0x800236C8u;
    ctx->downcount -= 3;
    // 800236C8: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800236CC:
    ctx->pc = 0x800236CCu;
    // 800236CC: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800236D0:
    ctx->pc = 0x800236D0u;
    // 800236D0: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800236D4:
    ctx->pc = 0x800236D4u;
    ctx->downcount -= 1;
    // 800236D4: bl      0x8004AF50
    {
            ctx->lr = 0x800236D8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800236D8:
    ctx->pc = 0x800236D8u;
    ctx->downcount -= 4;
    // 800236D8: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800236DC:
    ctx->pc = 0x800236DCu;
    // 800236DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800236E0:
    ctx->pc = 0x800236E0u;
    // 800236E0: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800236E4:
    ctx->pc = 0x800236E4u;
    // 800236E4: bc    4, 2, 0x800236F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800236F4;
        }
    }

label_800236E8:
    ctx->pc = 0x800236E8u;
    ctx->downcount -= 2;
    // 800236E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800236EC:
    ctx->pc = 0x800236ECu;
    // 800236EC: bl      0x8004AF50
    {
            ctx->lr = 0x800236F0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800236F0:
    ctx->pc = 0x800236F0u;
    ctx->downcount -= 1;
    // 800236F0: b       0x80023768
    {
            goto label_80023768;
    }

label_800236F4:
    ctx->pc = 0x800236F4u;
    ctx->downcount -= 10;
    // 800236F4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800236F8:
    ctx->pc = 0x800236F8u;
    // 800236F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800236FC:
    ctx->pc = 0x800236FCu;
    // 800236FC: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023700:
    ctx->pc = 0x80023700u;
    // 80023700: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023704:
    ctx->pc = 0x80023704u;
    // 80023704: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023708:
    ctx->pc = 0x80023708u;
    // 80023708: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002370C:
    ctx->pc = 0x8002370Cu;
    // 8002370C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023710:
    ctx->pc = 0x80023710u;
    // 80023710: bl      0x80004350
    {
            ctx->lr = 0x80023714u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023714:
    ctx->pc = 0x80023714u;
    ctx->downcount -= 10;
    // 80023714: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023718:
    ctx->pc = 0x80023718u;
    // 80023718: addi    r4, r1, 664
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(664);

label_8002371C:
    ctx->pc = 0x8002371Cu;
    // 8002371C: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023720:
    ctx->pc = 0x80023720u;
    // 80023720: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023724:
    ctx->pc = 0x80023724u;
    // 80023724: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023728:
    ctx->pc = 0x80023728u;
    // 80023728: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002372C:
    ctx->pc = 0x8002372Cu;
    // 8002372C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023730:
    ctx->pc = 0x80023730u;
    // 80023730: bl      0x80004000
    {
            ctx->lr = 0x80023734u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023734:
    ctx->pc = 0x80023734u;
    ctx->downcount -= 13;
    // 80023734: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023738:
    ctx->pc = 0x80023738u;
    // 80023738: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002373C:
    ctx->pc = 0x8002373Cu;
    // 8002373C: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023740:
    ctx->pc = 0x80023740u;
    // 80023740: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023744:
    ctx->pc = 0x80023744u;
    // 80023744: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023748:
    ctx->pc = 0x80023748u;
    // 80023748: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002374C:
    ctx->pc = 0x8002374Cu;
    // 8002374C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023750:
    ctx->pc = 0x80023750u;
    // 80023750: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023754:
    ctx->pc = 0x80023754u;
    // 80023754: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023758:
    ctx->pc = 0x80023758u;
    // 80023758: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_8002375C:
    ctx->pc = 0x8002375Cu;
    // 8002375C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023760:
    ctx->pc = 0x80023760u;
    // 80023760: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023764:
    ctx->pc = 0x80023764u;
    // 80023764: bl      0x8004AF50
    {
            ctx->lr = 0x80023768u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023768:
    ctx->pc = 0x80023768u;
    ctx->downcount -= 16;
    // 80023768: lis     r3, 1200
    ctx->gpr[3] = ((u32)(s32)(1200) << 16);

label_8002376C:
    ctx->pc = 0x8002376Cu;
    // 8002376C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80023770:
    ctx->pc = 0x80023770u;
    // 80023770: addi    r8, r3, 48
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(48);

label_80023774:
    ctx->pc = 0x80023774u;
    // 80023774: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80023778:
    ctx->pc = 0x80023778u;
    // 80023778: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_8002377C:
    ctx->pc = 0x8002377Cu;
    // 8002377C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80023780:
    ctx->pc = 0x80023780u;
    // 80023780: stb     r9, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80023784:
    ctx->pc = 0x80023784u;
    // 80023784: addi    r3, r1, 572
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(572);

label_80023788:
    ctx->pc = 0x80023788u;
    // 80023788: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8002378C:
    ctx->pc = 0x8002378Cu;
    // 8002378C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80023790:
    ctx->pc = 0x80023790u;
    // 80023790: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023794:
    ctx->pc = 0x80023794u;
    // 80023794: stb     r9, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80023798:
    ctx->pc = 0x80023798u;
    // 80023798: stw     r7, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002379C:
    ctx->pc = 0x8002379Cu;
    // 8002379C: sth     r6, 594(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(594);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_800237A0:
    ctx->pc = 0x800237A0u;
    // 800237A0: stw     r0, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800237A4:
    ctx->pc = 0x800237A4u;
    // 800237A4: bl      0x80004000
    {
            ctx->lr = 0x800237A8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800237A8:
    ctx->pc = 0x800237A8u;
    ctx->downcount -= 4;
    // 800237A8: addi    r3, r1, 576
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(576);

label_800237AC:
    ctx->pc = 0x800237ACu;
    // 800237AC: addi    r4, r1, 14
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(14);

label_800237B0:
    ctx->pc = 0x800237B0u;
    // 800237B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800237B4:
    ctx->pc = 0x800237B4u;
    // 800237B4: bl      0x80004000
    {
            ctx->lr = 0x800237B8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800237B8:
    ctx->pc = 0x800237B8u;
    ctx->downcount -= 4;
    // 800237B8: addi    r3, r1, 577
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(577);

label_800237BC:
    ctx->pc = 0x800237BCu;
    // 800237BC: addi    r4, r1, 15
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(15);

label_800237C0:
    ctx->pc = 0x800237C0u;
    // 800237C0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800237C4:
    ctx->pc = 0x800237C4u;
    // 800237C4: bl      0x80004000
    {
            ctx->lr = 0x800237C8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800237C8:
    ctx->pc = 0x800237C8u;
    ctx->downcount -= 25;
    // 800237C8: lwz     r31, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800237CC:
    ctx->pc = 0x800237CCu;
    // 800237CC: lwz     r12, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800237D0:
    ctx->pc = 0x800237D0u;
    // 800237D0: lwz     r11, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_800237D4:
    ctx->pc = 0x800237D4u;
    // 800237D4: lwz     r10, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800237D8:
    ctx->pc = 0x800237D8u;
    // 800237D8: lwz     r9, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800237DC:
    ctx->pc = 0x800237DCu;
    // 800237DC: lwz     r8, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800237E0:
    ctx->pc = 0x800237E0u;
    // 800237E0: lwz     r7, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800237E4:
    ctx->pc = 0x800237E4u;
    // 800237E4: lwz     r6, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800237E8:
    ctx->pc = 0x800237E8u;
    // 800237E8: lwz     r5, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800237EC:
    ctx->pc = 0x800237ECu;
    // 800237EC: lwz     r4, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800237F0:
    ctx->pc = 0x800237F0u;
    // 800237F0: lwz     r3, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800237F4:
    ctx->pc = 0x800237F4u;
    // 800237F4: lwz     r0, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800237F8:
    ctx->pc = 0x800237F8u;
    // 800237F8: stw     r31, 520(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800237FC:
    ctx->pc = 0x800237FCu;
    // 800237FC: stw     r12, 524(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023800:
    ctx->pc = 0x80023800u;
    // 80023800: stw     r11, 528(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023804:
    ctx->pc = 0x80023804u;
    // 80023804: stw     r10, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023808:
    ctx->pc = 0x80023808u;
    // 80023808: stw     r9, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8002380C:
    ctx->pc = 0x8002380Cu;
    // 8002380C: stw     r8, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023810:
    ctx->pc = 0x80023810u;
    // 80023810: stw     r7, 544(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023814:
    ctx->pc = 0x80023814u;
    // 80023814: stw     r6, 548(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023818:
    ctx->pc = 0x80023818u;
    // 80023818: stw     r5, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002381C:
    ctx->pc = 0x8002381Cu;
    // 8002381C: stw     r4, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023820:
    ctx->pc = 0x80023820u;
    // 80023820: stw     r3, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023824:
    ctx->pc = 0x80023824u;
    // 80023824: stw     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023828:
    ctx->pc = 0x80023828u;
    // 80023828: bl      0x8004AF10
    {
            ctx->lr = 0x8002382Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002382C:
    ctx->pc = 0x8002382Cu;
    ctx->downcount -= 2;
    // 8002382C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023830:
    ctx->pc = 0x80023830u;
    // 80023830: bl      0x8004AF10
    {
            ctx->lr = 0x80023834u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023834:
    ctx->pc = 0x80023834u;
    ctx->downcount -= 5;
    // 80023834: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023838:
    ctx->pc = 0x80023838u;
    // 80023838: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002383C:
    ctx->pc = 0x8002383Cu;
    // 8002383C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023840:
    ctx->pc = 0x80023840u;
    // 80023840: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80023844:
    ctx->pc = 0x80023844u;
    // 80023844: bc    4, 0, 0x80023854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023854;
        }
    }

label_80023848:
    ctx->pc = 0x80023848u;
    ctx->downcount -= 3;
    // 80023848: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002384C:
    ctx->pc = 0x8002384Cu;
    // 8002384C: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023850:
    ctx->pc = 0x80023850u;
    // 80023850: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023854:
    ctx->pc = 0x80023854u;
    ctx->downcount -= 1;
    // 80023854: bl      0x8004AF50
    {
            ctx->lr = 0x80023858u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023858:
    ctx->pc = 0x80023858u;
    ctx->downcount -= 4;
    // 80023858: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002385C:
    ctx->pc = 0x8002385Cu;
    // 8002385C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80023860:
    ctx->pc = 0x80023860u;
    // 80023860: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023864:
    ctx->pc = 0x80023864u;
    // 80023864: bc    4, 2, 0x80023874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023874;
        }
    }

label_80023868:
    ctx->pc = 0x80023868u;
    ctx->downcount -= 2;
    // 80023868: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002386C:
    ctx->pc = 0x8002386Cu;
    // 8002386C: bl      0x8004AF50
    {
            ctx->lr = 0x80023870u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023870:
    ctx->pc = 0x80023870u;
    ctx->downcount -= 1;
    // 80023870: b       0x800238E8
    {
            goto label_800238E8;
    }

label_80023874:
    ctx->pc = 0x80023874u;
    ctx->downcount -= 10;
    // 80023874: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023878:
    ctx->pc = 0x80023878u;
    // 80023878: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002387C:
    ctx->pc = 0x8002387Cu;
    // 8002387C: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023880:
    ctx->pc = 0x80023880u;
    // 80023880: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023884:
    ctx->pc = 0x80023884u;
    // 80023884: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023888:
    ctx->pc = 0x80023888u;
    // 80023888: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002388C:
    ctx->pc = 0x8002388Cu;
    // 8002388C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023890:
    ctx->pc = 0x80023890u;
    // 80023890: bl      0x80004350
    {
            ctx->lr = 0x80023894u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023894:
    ctx->pc = 0x80023894u;
    ctx->downcount -= 10;
    // 80023894: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023898:
    ctx->pc = 0x80023898u;
    // 80023898: addi    r4, r1, 520
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(520);

label_8002389C:
    ctx->pc = 0x8002389Cu;
    // 8002389C: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800238A0:
    ctx->pc = 0x800238A0u;
    // 800238A0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800238A4:
    ctx->pc = 0x800238A4u;
    // 800238A4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800238A8:
    ctx->pc = 0x800238A8u;
    // 800238A8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800238AC:
    ctx->pc = 0x800238ACu;
    // 800238AC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800238B0:
    ctx->pc = 0x800238B0u;
    // 800238B0: bl      0x80004000
    {
            ctx->lr = 0x800238B4u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800238B4:
    ctx->pc = 0x800238B4u;
    ctx->downcount -= 13;
    // 800238B4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800238B8:
    ctx->pc = 0x800238B8u;
    // 800238B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800238BC:
    ctx->pc = 0x800238BCu;
    // 800238BC: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800238C0:
    ctx->pc = 0x800238C0u;
    // 800238C0: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800238C4:
    ctx->pc = 0x800238C4u;
    // 800238C4: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_800238C8:
    ctx->pc = 0x800238C8u;
    // 800238C8: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800238CC:
    ctx->pc = 0x800238CCu;
    // 800238CC: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_800238D0:
    ctx->pc = 0x800238D0u;
    // 800238D0: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_800238D4:
    ctx->pc = 0x800238D4u;
    // 800238D4: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_800238D8:
    ctx->pc = 0x800238D8u;
    // 800238D8: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_800238DC:
    ctx->pc = 0x800238DCu;
    // 800238DC: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_800238E0:
    ctx->pc = 0x800238E0u;
    // 800238E0: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800238E4:
    ctx->pc = 0x800238E4u;
    // 800238E4: bl      0x8004AF50
    {
            ctx->lr = 0x800238E8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800238E8:
    ctx->pc = 0x800238E8u;
    ctx->downcount -= 21;
    // 800238E8: lbz     r5, -16931(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-16931);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_800238EC:
    ctx->pc = 0x800238ECu;
    // 800238EC: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_800238F0:
    ctx->pc = 0x800238F0u;
    // 800238F0: lis     r9, 1200
    ctx->gpr[9] = ((u32)(s32)(1200) << 16);

label_800238F4:
    ctx->pc = 0x800238F4u;
    // 800238F4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_800238F8:
    ctx->pc = 0x800238F8u;
    // 800238F8: addi    r8, r5, -1
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-1);

label_800238FC:
    ctx->pc = 0x800238FCu;
    // 800238FC: li      r5, 22
    ctx->gpr[5] = (u32)(s32)(22);

label_80023900:
    ctx->pc = 0x80023900u;
    // 80023900: rlwinm r7, r8, 3, 0, 28
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 3u) & 0xFFFFFFF8u;
    }

label_80023904:
    ctx->pc = 0x80023904u;
    // 80023904: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_80023908:
    ctx->pc = 0x80023908u;
    // 80023908: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002390C:
    ctx->pc = 0x8002390Cu;
    // 8002390C: stb     r3, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80023910:
    ctx->pc = 0x80023910u;
    // 80023910: add   r7, r7, r8
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80023914:
    ctx->pc = 0x80023914u;
    // 80023914: addi    r4, r4, 26544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26544);

label_80023918:
    ctx->pc = 0x80023918u;
    // 80023918: stw     r5, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002391C:
    ctx->pc = 0x8002391Cu;
    // 8002391C: add   r26, r4, r7
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80023920:
    ctx->pc = 0x80023920u;
    // 80023920: addi    r3, r1, 428
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(428);

label_80023924:
    ctx->pc = 0x80023924u;
    // 80023924: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80023928:
    ctx->pc = 0x80023928u;
    // 80023928: stw     r9, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8002392C:
    ctx->pc = 0x8002392Cu;
    // 8002392C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80023930:
    ctx->pc = 0x80023930u;
    // 80023930: sth     r6, 450(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(450);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80023934:
    ctx->pc = 0x80023934u;
    // 80023934: stw     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023938:
    ctx->pc = 0x80023938u;
    // 80023938: bl      0x80004000
    {
            ctx->lr = 0x8002393Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002393C:
    ctx->pc = 0x8002393Cu;
    ctx->downcount -= 4;
    // 8002393C: addi    r3, r1, 432
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(432);

label_80023940:
    ctx->pc = 0x80023940u;
    // 80023940: addi    r4, r1, 13
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(13);

label_80023944:
    ctx->pc = 0x80023944u;
    // 80023944: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023948:
    ctx->pc = 0x80023948u;
    // 80023948: bl      0x80004000
    {
            ctx->lr = 0x8002394Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002394C:
    ctx->pc = 0x8002394Cu;
    ctx->downcount -= 4;
    // 8002394C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80023950:
    ctx->pc = 0x80023950u;
    // 80023950: addi    r3, r1, 433
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(433);

label_80023954:
    ctx->pc = 0x80023954u;
    // 80023954: li      r5, 9
    ctx->gpr[5] = (u32)(s32)(9);

label_80023958:
    ctx->pc = 0x80023958u;
    // 80023958: bl      0x80004000
    {
            ctx->lr = 0x8002395Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002395C:
    ctx->pc = 0x8002395Cu;
    ctx->downcount -= 25;
    // 8002395C: lwz     r31, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80023960:
    ctx->pc = 0x80023960u;
    // 80023960: lwz     r12, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80023964:
    ctx->pc = 0x80023964u;
    // 80023964: lwz     r11, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023968:
    ctx->pc = 0x80023968u;
    // 80023968: lwz     r10, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8002396C:
    ctx->pc = 0x8002396Cu;
    // 8002396C: lwz     r9, 440(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023970:
    ctx->pc = 0x80023970u;
    // 80023970: lwz     r8, 444(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(444);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023974:
    ctx->pc = 0x80023974u;
    // 80023974: lwz     r7, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023978:
    ctx->pc = 0x80023978u;
    // 80023978: lwz     r6, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002397C:
    ctx->pc = 0x8002397Cu;
    // 8002397C: lwz     r5, 456(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023980:
    ctx->pc = 0x80023980u;
    // 80023980: lwz     r4, 460(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(460);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023984:
    ctx->pc = 0x80023984u;
    // 80023984: lwz     r3, 464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023988:
    ctx->pc = 0x80023988u;
    // 80023988: lwz     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002398C:
    ctx->pc = 0x8002398Cu;
    // 8002398C: stw     r31, 472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80023990:
    ctx->pc = 0x80023990u;
    // 80023990: stw     r12, 476(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023994:
    ctx->pc = 0x80023994u;
    // 80023994: stw     r11, 480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023998:
    ctx->pc = 0x80023998u;
    // 80023998: stw     r10, 484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002399C:
    ctx->pc = 0x8002399Cu;
    // 8002399C: stw     r9, 488(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800239A0:
    ctx->pc = 0x800239A0u;
    // 800239A0: stw     r8, 492(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800239A4:
    ctx->pc = 0x800239A4u;
    // 800239A4: stw     r7, 496(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800239A8:
    ctx->pc = 0x800239A8u;
    // 800239A8: stw     r6, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800239AC:
    ctx->pc = 0x800239ACu;
    // 800239AC: stw     r5, 504(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800239B0:
    ctx->pc = 0x800239B0u;
    // 800239B0: stw     r4, 508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800239B4:
    ctx->pc = 0x800239B4u;
    // 800239B4: stw     r3, 512(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800239B8:
    ctx->pc = 0x800239B8u;
    // 800239B8: stw     r0, 516(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800239BC:
    ctx->pc = 0x800239BCu;
    // 800239BC: bl      0x8004AF10
    {
            ctx->lr = 0x800239C0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800239C0:
    ctx->pc = 0x800239C0u;
    ctx->downcount -= 2;
    // 800239C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800239C4:
    ctx->pc = 0x800239C4u;
    // 800239C4: bl      0x8004AF10
    {
            ctx->lr = 0x800239C8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800239C8:
    ctx->pc = 0x800239C8u;
    ctx->downcount -= 5;
    // 800239C8: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800239CC:
    ctx->pc = 0x800239CCu;
    // 800239CC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800239D0:
    ctx->pc = 0x800239D0u;
    // 800239D0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800239D4:
    ctx->pc = 0x800239D4u;
    // 800239D4: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800239D8:
    ctx->pc = 0x800239D8u;
    // 800239D8: bc    4, 0, 0x800239E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800239E8;
        }
    }

label_800239DC:
    ctx->pc = 0x800239DCu;
    ctx->downcount -= 3;
    // 800239DC: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800239E0:
    ctx->pc = 0x800239E0u;
    // 800239E0: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800239E4:
    ctx->pc = 0x800239E4u;
    // 800239E4: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800239E8:
    ctx->pc = 0x800239E8u;
    ctx->downcount -= 1;
    // 800239E8: bl      0x8004AF50
    {
            ctx->lr = 0x800239ECu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800239EC:
    ctx->pc = 0x800239ECu;
    ctx->downcount -= 4;
    // 800239EC: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800239F0:
    ctx->pc = 0x800239F0u;
    // 800239F0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800239F4:
    ctx->pc = 0x800239F4u;
    // 800239F4: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800239F8:
    ctx->pc = 0x800239F8u;
    // 800239F8: bc    4, 2, 0x80023A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023A08;
        }
    }

label_800239FC:
    ctx->pc = 0x800239FCu;
    ctx->downcount -= 2;
    // 800239FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023A00:
    ctx->pc = 0x80023A00u;
    // 80023A00: bl      0x8004AF50
    {
            ctx->lr = 0x80023A04u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023A04:
    ctx->pc = 0x80023A04u;
    ctx->downcount -= 1;
    // 80023A04: b       0x80023A7C
    {
            goto label_80023A7C;
    }

label_80023A08:
    ctx->pc = 0x80023A08u;
    ctx->downcount -= 10;
    // 80023A08: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023A0C:
    ctx->pc = 0x80023A0Cu;
    // 80023A0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023A10:
    ctx->pc = 0x80023A10u;
    // 80023A10: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023A14:
    ctx->pc = 0x80023A14u;
    // 80023A14: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023A18:
    ctx->pc = 0x80023A18u;
    // 80023A18: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023A1C:
    ctx->pc = 0x80023A1Cu;
    // 80023A1C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023A20:
    ctx->pc = 0x80023A20u;
    // 80023A20: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023A24:
    ctx->pc = 0x80023A24u;
    // 80023A24: bl      0x80004350
    {
            ctx->lr = 0x80023A28u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023A28:
    ctx->pc = 0x80023A28u;
    ctx->downcount -= 10;
    // 80023A28: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023A2C:
    ctx->pc = 0x80023A2Cu;
    // 80023A2C: addi    r4, r1, 472
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(472);

label_80023A30:
    ctx->pc = 0x80023A30u;
    // 80023A30: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023A34:
    ctx->pc = 0x80023A34u;
    // 80023A34: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023A38:
    ctx->pc = 0x80023A38u;
    // 80023A38: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023A3C:
    ctx->pc = 0x80023A3Cu;
    // 80023A3C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023A40:
    ctx->pc = 0x80023A40u;
    // 80023A40: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023A44:
    ctx->pc = 0x80023A44u;
    // 80023A44: bl      0x80004000
    {
            ctx->lr = 0x80023A48u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023A48:
    ctx->pc = 0x80023A48u;
    ctx->downcount -= 13;
    // 80023A48: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023A4C:
    ctx->pc = 0x80023A4Cu;
    // 80023A4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023A50:
    ctx->pc = 0x80023A50u;
    // 80023A50: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023A54:
    ctx->pc = 0x80023A54u;
    // 80023A54: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023A58:
    ctx->pc = 0x80023A58u;
    // 80023A58: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023A5C:
    ctx->pc = 0x80023A5Cu;
    // 80023A5C: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023A60:
    ctx->pc = 0x80023A60u;
    // 80023A60: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023A64:
    ctx->pc = 0x80023A64u;
    // 80023A64: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023A68:
    ctx->pc = 0x80023A68u;
    // 80023A68: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023A6C:
    ctx->pc = 0x80023A6Cu;
    // 80023A6C: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023A70:
    ctx->pc = 0x80023A70u;
    // 80023A70: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023A74:
    ctx->pc = 0x80023A74u;
    // 80023A74: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023A78:
    ctx->pc = 0x80023A78u;
    // 80023A78: bl      0x8004AF50
    {
            ctx->lr = 0x80023A7Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023A7C:
    ctx->pc = 0x80023A7Cu;
    ctx->downcount -= 21;
    // 80023A7C: lbz     r5, -16931(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-16931);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80023A80:
    ctx->pc = 0x80023A80u;
    // 80023A80: lis     r6, 1200
    ctx->gpr[6] = ((u32)(s32)(1200) << 16);

label_80023A84:
    ctx->pc = 0x80023A84u;
    // 80023A84: addi    r8, r6, 26
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(26);

label_80023A88:
    ctx->pc = 0x80023A88u;
    // 80023A88: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_80023A8C:
    ctx->pc = 0x80023A8Cu;
    // 80023A8C: addi    r7, r5, -1
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1);

label_80023A90:
    ctx->pc = 0x80023A90u;
    // 80023A90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80023A94:
    ctx->pc = 0x80023A94u;
    // 80023A94: li      r5, 22
    ctx->gpr[5] = (u32)(s32)(22);

label_80023A98:
    ctx->pc = 0x80023A98u;
    // 80023A98: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_80023A9C:
    ctx->pc = 0x80023A9Cu;
    // 80023A9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80023AA0:
    ctx->pc = 0x80023AA0u;
    // 80023AA0: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80023AA4:
    ctx->pc = 0x80023AA4u;
    // 80023AA4: rlwinm r7, r7, 1, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0xFFFFFFFEu;
    }

label_80023AA8:
    ctx->pc = 0x80023AA8u;
    // 80023AA8: addi    r4, r4, 26592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26592);

label_80023AAC:
    ctx->pc = 0x80023AACu;
    // 80023AAC: stw     r5, 328(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023AB0:
    ctx->pc = 0x80023AB0u;
    // 80023AB0: add   r26, r4, r7
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80023AB4:
    ctx->pc = 0x80023AB4u;
    // 80023AB4: addi    r3, r1, 332
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(332);

label_80023AB8:
    ctx->pc = 0x80023AB8u;
    // 80023AB8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80023ABC:
    ctx->pc = 0x80023ABCu;
    // 80023ABC: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023AC0:
    ctx->pc = 0x80023AC0u;
    // 80023AC0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80023AC4:
    ctx->pc = 0x80023AC4u;
    // 80023AC4: sth     r6, 354(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(354);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80023AC8:
    ctx->pc = 0x80023AC8u;
    // 80023AC8: stw     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023ACC:
    ctx->pc = 0x80023ACCu;
    // 80023ACC: bl      0x80004000
    {
            ctx->lr = 0x80023AD0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023AD0:
    ctx->pc = 0x80023AD0u;
    ctx->downcount -= 4;
    // 80023AD0: addi    r3, r1, 336
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(336);

label_80023AD4:
    ctx->pc = 0x80023AD4u;
    // 80023AD4: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80023AD8:
    ctx->pc = 0x80023AD8u;
    // 80023AD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023ADC:
    ctx->pc = 0x80023ADCu;
    // 80023ADC: bl      0x80004000
    {
            ctx->lr = 0x80023AE0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023AE0:
    ctx->pc = 0x80023AE0u;
    ctx->downcount -= 4;
    // 80023AE0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80023AE4:
    ctx->pc = 0x80023AE4u;
    // 80023AE4: addi    r3, r1, 337
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(337);

label_80023AE8:
    ctx->pc = 0x80023AE8u;
    // 80023AE8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80023AEC:
    ctx->pc = 0x80023AECu;
    // 80023AEC: bl      0x80004000
    {
            ctx->lr = 0x80023AF0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023AF0:
    ctx->pc = 0x80023AF0u;
    ctx->downcount -= 25;
    // 80023AF0: lwz     r31, 328(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80023AF4:
    ctx->pc = 0x80023AF4u;
    // 80023AF4: lwz     r12, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80023AF8:
    ctx->pc = 0x80023AF8u;
    // 80023AF8: lwz     r11, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023AFC:
    ctx->pc = 0x80023AFCu;
    // 80023AFC: lwz     r10, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023B00:
    ctx->pc = 0x80023B00u;
    // 80023B00: lwz     r9, 344(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023B04:
    ctx->pc = 0x80023B04u;
    // 80023B04: lwz     r8, 348(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(348);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023B08:
    ctx->pc = 0x80023B08u;
    // 80023B08: lwz     r7, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023B0C:
    ctx->pc = 0x80023B0Cu;
    // 80023B0C: lwz     r6, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023B10:
    ctx->pc = 0x80023B10u;
    // 80023B10: lwz     r5, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023B14:
    ctx->pc = 0x80023B14u;
    // 80023B14: lwz     r4, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023B18:
    ctx->pc = 0x80023B18u;
    // 80023B18: lwz     r3, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023B1C:
    ctx->pc = 0x80023B1Cu;
    // 80023B1C: lwz     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023B20:
    ctx->pc = 0x80023B20u;
    // 80023B20: stw     r31, 376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80023B24:
    ctx->pc = 0x80023B24u;
    // 80023B24: stw     r12, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023B28:
    ctx->pc = 0x80023B28u;
    // 80023B28: stw     r11, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023B2C:
    ctx->pc = 0x80023B2Cu;
    // 80023B2C: stw     r10, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023B30:
    ctx->pc = 0x80023B30u;
    // 80023B30: stw     r9, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023B34:
    ctx->pc = 0x80023B34u;
    // 80023B34: stw     r8, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023B38:
    ctx->pc = 0x80023B38u;
    // 80023B38: stw     r7, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023B3C:
    ctx->pc = 0x80023B3Cu;
    // 80023B3C: stw     r6, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023B40:
    ctx->pc = 0x80023B40u;
    // 80023B40: stw     r5, 408(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023B44:
    ctx->pc = 0x80023B44u;
    // 80023B44: stw     r4, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023B48:
    ctx->pc = 0x80023B48u;
    // 80023B48: stw     r3, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023B4C:
    ctx->pc = 0x80023B4Cu;
    // 80023B4C: stw     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023B50:
    ctx->pc = 0x80023B50u;
    // 80023B50: bl      0x8004AF10
    {
            ctx->lr = 0x80023B54u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023B54:
    ctx->pc = 0x80023B54u;
    ctx->downcount -= 2;
    // 80023B54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023B58:
    ctx->pc = 0x80023B58u;
    // 80023B58: bl      0x8004AF10
    {
            ctx->lr = 0x80023B5Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023B5C:
    ctx->pc = 0x80023B5Cu;
    ctx->downcount -= 5;
    // 80023B5C: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023B60:
    ctx->pc = 0x80023B60u;
    // 80023B60: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023B64:
    ctx->pc = 0x80023B64u;
    // 80023B64: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023B68:
    ctx->pc = 0x80023B68u;
    // 80023B68: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80023B6C:
    ctx->pc = 0x80023B6Cu;
    // 80023B6C: bc    4, 0, 0x80023B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023B7C;
        }
    }

label_80023B70:
    ctx->pc = 0x80023B70u;
    ctx->downcount -= 3;
    // 80023B70: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023B74:
    ctx->pc = 0x80023B74u;
    // 80023B74: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023B78:
    ctx->pc = 0x80023B78u;
    // 80023B78: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023B7C:
    ctx->pc = 0x80023B7Cu;
    ctx->downcount -= 1;
    // 80023B7C: bl      0x8004AF50
    {
            ctx->lr = 0x80023B80u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023B80:
    ctx->pc = 0x80023B80u;
    ctx->downcount -= 4;
    // 80023B80: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023B84:
    ctx->pc = 0x80023B84u;
    // 80023B84: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80023B88:
    ctx->pc = 0x80023B88u;
    // 80023B88: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023B8C:
    ctx->pc = 0x80023B8Cu;
    // 80023B8C: bc    4, 2, 0x80023B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023B9C;
        }
    }

label_80023B90:
    ctx->pc = 0x80023B90u;
    ctx->downcount -= 2;
    // 80023B90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023B94:
    ctx->pc = 0x80023B94u;
    // 80023B94: bl      0x8004AF50
    {
            ctx->lr = 0x80023B98u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023B98:
    ctx->pc = 0x80023B98u;
    ctx->downcount -= 1;
    // 80023B98: b       0x80023C10
    {
            goto label_80023C10;
    }

label_80023B9C:
    ctx->pc = 0x80023B9Cu;
    ctx->downcount -= 10;
    // 80023B9C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023BA0:
    ctx->pc = 0x80023BA0u;
    // 80023BA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023BA4:
    ctx->pc = 0x80023BA4u;
    // 80023BA4: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023BA8:
    ctx->pc = 0x80023BA8u;
    // 80023BA8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023BAC:
    ctx->pc = 0x80023BACu;
    // 80023BAC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023BB0:
    ctx->pc = 0x80023BB0u;
    // 80023BB0: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023BB4:
    ctx->pc = 0x80023BB4u;
    // 80023BB4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023BB8:
    ctx->pc = 0x80023BB8u;
    // 80023BB8: bl      0x80004350
    {
            ctx->lr = 0x80023BBCu;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023BBC:
    ctx->pc = 0x80023BBCu;
    ctx->downcount -= 10;
    // 80023BBC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023BC0:
    ctx->pc = 0x80023BC0u;
    // 80023BC0: addi    r4, r1, 376
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(376);

label_80023BC4:
    ctx->pc = 0x80023BC4u;
    // 80023BC4: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023BC8:
    ctx->pc = 0x80023BC8u;
    // 80023BC8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023BCC:
    ctx->pc = 0x80023BCCu;
    // 80023BCC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023BD0:
    ctx->pc = 0x80023BD0u;
    // 80023BD0: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023BD4:
    ctx->pc = 0x80023BD4u;
    // 80023BD4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023BD8:
    ctx->pc = 0x80023BD8u;
    // 80023BD8: bl      0x80004000
    {
            ctx->lr = 0x80023BDCu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023BDC:
    ctx->pc = 0x80023BDCu;
    ctx->downcount -= 13;
    // 80023BDC: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023BE0:
    ctx->pc = 0x80023BE0u;
    // 80023BE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023BE4:
    ctx->pc = 0x80023BE4u;
    // 80023BE4: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023BE8:
    ctx->pc = 0x80023BE8u;
    // 80023BE8: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023BEC:
    ctx->pc = 0x80023BECu;
    // 80023BEC: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023BF0:
    ctx->pc = 0x80023BF0u;
    // 80023BF0: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023BF4:
    ctx->pc = 0x80023BF4u;
    // 80023BF4: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023BF8:
    ctx->pc = 0x80023BF8u;
    // 80023BF8: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023BFC:
    ctx->pc = 0x80023BFCu;
    // 80023BFC: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023C00:
    ctx->pc = 0x80023C00u;
    // 80023C00: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023C04:
    ctx->pc = 0x80023C04u;
    // 80023C04: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023C08:
    ctx->pc = 0x80023C08u;
    // 80023C08: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023C0C:
    ctx->pc = 0x80023C0Cu;
    // 80023C0C: bl      0x8004AF50
    {
            ctx->lr = 0x80023C10u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023C10:
    ctx->pc = 0x80023C10u;
    ctx->downcount -= 16;
    // 80023C10: lis     r3, 1200
    ctx->gpr[3] = ((u32)(s32)(1200) << 16);

label_80023C14:
    ctx->pc = 0x80023C14u;
    // 80023C14: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80023C18:
    ctx->pc = 0x80023C18u;
    // 80023C18: addi    r9, r3, 51
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(51);

label_80023C1C:
    ctx->pc = 0x80023C1Cu;
    // 80023C1C: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80023C20:
    ctx->pc = 0x80023C20u;
    // 80023C20: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_80023C24:
    ctx->pc = 0x80023C24u;
    // 80023C24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80023C28:
    ctx->pc = 0x80023C28u;
    // 80023C28: stb     r27, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_80023C2C:
    ctx->pc = 0x80023C2Cu;
    // 80023C2C: addi    r3, r1, 284
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(284);

label_80023C30:
    ctx->pc = 0x80023C30u;
    // 80023C30: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80023C34:
    ctx->pc = 0x80023C34u;
    // 80023C34: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80023C38:
    ctx->pc = 0x80023C38u;
    // 80023C38: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023C3C:
    ctx->pc = 0x80023C3Cu;
    // 80023C3C: stb     r8, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80023C40:
    ctx->pc = 0x80023C40u;
    // 80023C40: stw     r7, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023C44:
    ctx->pc = 0x80023C44u;
    // 80023C44: sth     r6, 306(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(306);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80023C48:
    ctx->pc = 0x80023C48u;
    // 80023C48: stw     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023C4C:
    ctx->pc = 0x80023C4Cu;
    // 80023C4C: bl      0x80004000
    {
            ctx->lr = 0x80023C50u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023C50:
    ctx->pc = 0x80023C50u;
    ctx->downcount -= 4;
    // 80023C50: addi    r3, r1, 288
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(288);

label_80023C54:
    ctx->pc = 0x80023C54u;
    // 80023C54: addi    r4, r1, 10
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(10);

label_80023C58:
    ctx->pc = 0x80023C58u;
    // 80023C58: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023C5C:
    ctx->pc = 0x80023C5Cu;
    // 80023C5C: bl      0x80004000
    {
            ctx->lr = 0x80023C60u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023C60:
    ctx->pc = 0x80023C60u;
    ctx->downcount -= 4;
    // 80023C60: addi    r3, r1, 289
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(289);

label_80023C64:
    ctx->pc = 0x80023C64u;
    // 80023C64: addi    r4, r1, 11
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(11);

label_80023C68:
    ctx->pc = 0x80023C68u;
    // 80023C68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023C6C:
    ctx->pc = 0x80023C6Cu;
    // 80023C6C: bl      0x80004000
    {
            ctx->lr = 0x80023C70u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023C70:
    ctx->pc = 0x80023C70u;
    ctx->downcount -= 25;
    // 80023C70: lwz     r27, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80023C74:
    ctx->pc = 0x80023C74u;
    // 80023C74: lwz     r12, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80023C78:
    ctx->pc = 0x80023C78u;
    // 80023C78: lwz     r11, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023C7C:
    ctx->pc = 0x80023C7Cu;
    // 80023C7C: lwz     r10, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023C80:
    ctx->pc = 0x80023C80u;
    // 80023C80: lwz     r9, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023C84:
    ctx->pc = 0x80023C84u;
    // 80023C84: lwz     r8, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023C88:
    ctx->pc = 0x80023C88u;
    // 80023C88: lwz     r7, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023C8C:
    ctx->pc = 0x80023C8Cu;
    // 80023C8C: lwz     r6, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023C90:
    ctx->pc = 0x80023C90u;
    // 80023C90: lwz     r5, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023C94:
    ctx->pc = 0x80023C94u;
    // 80023C94: lwz     r4, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023C98:
    ctx->pc = 0x80023C98u;
    // 80023C98: lwz     r3, 320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023C9C:
    ctx->pc = 0x80023C9Cu;
    // 80023C9C: lwz     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023CA0:
    ctx->pc = 0x80023CA0u;
    // 80023CA0: stw     r27, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_80023CA4:
    ctx->pc = 0x80023CA4u;
    // 80023CA4: stw     r12, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023CA8:
    ctx->pc = 0x80023CA8u;
    // 80023CA8: stw     r11, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023CAC:
    ctx->pc = 0x80023CACu;
    // 80023CAC: stw     r10, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023CB0:
    ctx->pc = 0x80023CB0u;
    // 80023CB0: stw     r9, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023CB4:
    ctx->pc = 0x80023CB4u;
    // 80023CB4: stw     r8, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023CB8:
    ctx->pc = 0x80023CB8u;
    // 80023CB8: stw     r7, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023CBC:
    ctx->pc = 0x80023CBCu;
    // 80023CBC: stw     r6, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023CC0:
    ctx->pc = 0x80023CC0u;
    // 80023CC0: stw     r5, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023CC4:
    ctx->pc = 0x80023CC4u;
    // 80023CC4: stw     r4, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023CC8:
    ctx->pc = 0x80023CC8u;
    // 80023CC8: stw     r3, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023CCC:
    ctx->pc = 0x80023CCCu;
    // 80023CCC: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023CD0:
    ctx->pc = 0x80023CD0u;
    // 80023CD0: bl      0x8004AF10
    {
            ctx->lr = 0x80023CD4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023CD4:
    ctx->pc = 0x80023CD4u;
    ctx->downcount -= 2;
    // 80023CD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023CD8:
    ctx->pc = 0x80023CD8u;
    // 80023CD8: bl      0x8004AF10
    {
            ctx->lr = 0x80023CDCu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023CDC:
    ctx->pc = 0x80023CDCu;
    ctx->downcount -= 5;
    // 80023CDC: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023CE0:
    ctx->pc = 0x80023CE0u;
    // 80023CE0: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023CE4:
    ctx->pc = 0x80023CE4u;
    // 80023CE4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023CE8:
    ctx->pc = 0x80023CE8u;
    // 80023CE8: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80023CEC:
    ctx->pc = 0x80023CECu;
    // 80023CEC: bc    4, 0, 0x80023CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023CFC;
        }
    }

label_80023CF0:
    ctx->pc = 0x80023CF0u;
    ctx->downcount -= 3;
    // 80023CF0: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023CF4:
    ctx->pc = 0x80023CF4u;
    // 80023CF4: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023CF8:
    ctx->pc = 0x80023CF8u;
    // 80023CF8: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023CFC:
    ctx->pc = 0x80023CFCu;
    ctx->downcount -= 1;
    // 80023CFC: bl      0x8004AF50
    {
            ctx->lr = 0x80023D00u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023D00:
    ctx->pc = 0x80023D00u;
    ctx->downcount -= 4;
    // 80023D00: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023D04:
    ctx->pc = 0x80023D04u;
    // 80023D04: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80023D08:
    ctx->pc = 0x80023D08u;
    // 80023D08: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023D0C:
    ctx->pc = 0x80023D0Cu;
    // 80023D0C: bc    4, 2, 0x80023D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023D1C;
        }
    }

label_80023D10:
    ctx->pc = 0x80023D10u;
    ctx->downcount -= 2;
    // 80023D10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023D14:
    ctx->pc = 0x80023D14u;
    // 80023D14: bl      0x8004AF50
    {
            ctx->lr = 0x80023D18u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023D18:
    ctx->pc = 0x80023D18u;
    ctx->downcount -= 1;
    // 80023D18: b       0x80023D90
    {
            goto label_80023D90;
    }

label_80023D1C:
    ctx->pc = 0x80023D1Cu;
    ctx->downcount -= 10;
    // 80023D1C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023D20:
    ctx->pc = 0x80023D20u;
    // 80023D20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023D24:
    ctx->pc = 0x80023D24u;
    // 80023D24: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023D28:
    ctx->pc = 0x80023D28u;
    // 80023D28: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023D2C:
    ctx->pc = 0x80023D2Cu;
    // 80023D2C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023D30:
    ctx->pc = 0x80023D30u;
    // 80023D30: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023D34:
    ctx->pc = 0x80023D34u;
    // 80023D34: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023D38:
    ctx->pc = 0x80023D38u;
    // 80023D38: bl      0x80004350
    {
            ctx->lr = 0x80023D3Cu;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023D3C:
    ctx->pc = 0x80023D3Cu;
    ctx->downcount -= 10;
    // 80023D3C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023D40:
    ctx->pc = 0x80023D40u;
    // 80023D40: addi    r4, r1, 232
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(232);

label_80023D44:
    ctx->pc = 0x80023D44u;
    // 80023D44: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023D48:
    ctx->pc = 0x80023D48u;
    // 80023D48: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023D4C:
    ctx->pc = 0x80023D4Cu;
    // 80023D4C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023D50:
    ctx->pc = 0x80023D50u;
    // 80023D50: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023D54:
    ctx->pc = 0x80023D54u;
    // 80023D54: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023D58:
    ctx->pc = 0x80023D58u;
    // 80023D58: bl      0x80004000
    {
            ctx->lr = 0x80023D5Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023D5C:
    ctx->pc = 0x80023D5Cu;
    ctx->downcount -= 13;
    // 80023D5C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023D60:
    ctx->pc = 0x80023D60u;
    // 80023D60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023D64:
    ctx->pc = 0x80023D64u;
    // 80023D64: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023D68:
    ctx->pc = 0x80023D68u;
    // 80023D68: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023D6C:
    ctx->pc = 0x80023D6Cu;
    // 80023D6C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023D70:
    ctx->pc = 0x80023D70u;
    // 80023D70: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023D74:
    ctx->pc = 0x80023D74u;
    // 80023D74: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023D78:
    ctx->pc = 0x80023D78u;
    // 80023D78: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023D7C:
    ctx->pc = 0x80023D7Cu;
    // 80023D7C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023D80:
    ctx->pc = 0x80023D80u;
    // 80023D80: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023D84:
    ctx->pc = 0x80023D84u;
    // 80023D84: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023D88:
    ctx->pc = 0x80023D88u;
    // 80023D88: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023D8C:
    ctx->pc = 0x80023D8Cu;
    // 80023D8C: bl      0x8004AF50
    {
            ctx->lr = 0x80023D90u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023D90:
    ctx->pc = 0x80023D90u;
    ctx->downcount -= 18;
    // 80023D90: lis     r3, 1200
    ctx->gpr[3] = ((u32)(s32)(1200) << 16);

label_80023D94:
    ctx->pc = 0x80023D94u;
    // 80023D94: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80023D98:
    ctx->pc = 0x80023D98u;
    // 80023D98: addi    r9, r3, 48
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(48);

label_80023D9C:
    ctx->pc = 0x80023D9Cu;
    // 80023D9C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80023DA0:
    ctx->pc = 0x80023DA0u;
    // 80023DA0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80023DA4:
    ctx->pc = 0x80023DA4u;
    // 80023DA4: addi    r6, r6, 12256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12256);

label_80023DA8:
    ctx->pc = 0x80023DA8u;
    // 80023DA8: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80023DAC:
    ctx->pc = 0x80023DACu;
    // 80023DAC: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80023DB0:
    ctx->pc = 0x80023DB0u;
    // 80023DB0: stb     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80023DB4:
    ctx->pc = 0x80023DB4u;
    // 80023DB4: addi    r3, r1, 188
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(188);

label_80023DB8:
    ctx->pc = 0x80023DB8u;
    // 80023DB8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80023DBC:
    ctx->pc = 0x80023DBCu;
    // 80023DBC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80023DC0:
    ctx->pc = 0x80023DC0u;
    // 80023DC0: stw     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023DC4:
    ctx->pc = 0x80023DC4u;
    // 80023DC4: stb     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80023DC8:
    ctx->pc = 0x80023DC8u;
    // 80023DC8: stw     r7, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023DCC:
    ctx->pc = 0x80023DCCu;
    // 80023DCC: sth     r0, 210(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(210);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80023DD0:
    ctx->pc = 0x80023DD0u;
    // 80023DD0: stw     r6, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023DD4:
    ctx->pc = 0x80023DD4u;
    // 80023DD4: bl      0x80004000
    {
            ctx->lr = 0x80023DD8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023DD8:
    ctx->pc = 0x80023DD8u;
    ctx->downcount -= 4;
    // 80023DD8: addi    r3, r1, 192
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(192);

label_80023DDC:
    ctx->pc = 0x80023DDCu;
    // 80023DDC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80023DE0:
    ctx->pc = 0x80023DE0u;
    // 80023DE0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023DE4:
    ctx->pc = 0x80023DE4u;
    // 80023DE4: bl      0x80004000
    {
            ctx->lr = 0x80023DE8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023DE8:
    ctx->pc = 0x80023DE8u;
    ctx->downcount -= 4;
    // 80023DE8: addi    r3, r1, 193
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(193);

label_80023DEC:
    ctx->pc = 0x80023DECu;
    // 80023DEC: addi    r4, r1, 9
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(9);

label_80023DF0:
    ctx->pc = 0x80023DF0u;
    // 80023DF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80023DF4:
    ctx->pc = 0x80023DF4u;
    // 80023DF4: bl      0x80004000
    {
            ctx->lr = 0x80023DF8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023DF8:
    ctx->pc = 0x80023DF8u;
    ctx->downcount -= 25;
    // 80023DF8: lwz     r27, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80023DFC:
    ctx->pc = 0x80023DFCu;
    // 80023DFC: lwz     r12, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80023E00:
    ctx->pc = 0x80023E00u;
    // 80023E00: lwz     r11, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80023E04:
    ctx->pc = 0x80023E04u;
    // 80023E04: lwz     r10, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023E08:
    ctx->pc = 0x80023E08u;
    // 80023E08: lwz     r9, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023E0C:
    ctx->pc = 0x80023E0Cu;
    // 80023E0C: lwz     r8, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023E10:
    ctx->pc = 0x80023E10u;
    // 80023E10: lwz     r7, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023E14:
    ctx->pc = 0x80023E14u;
    // 80023E14: lwz     r6, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023E18:
    ctx->pc = 0x80023E18u;
    // 80023E18: lwz     r5, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023E1C:
    ctx->pc = 0x80023E1Cu;
    // 80023E1C: lwz     r4, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023E20:
    ctx->pc = 0x80023E20u;
    // 80023E20: lwz     r3, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023E24:
    ctx->pc = 0x80023E24u;
    // 80023E24: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023E28:
    ctx->pc = 0x80023E28u;
    // 80023E28: stw     r27, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_80023E2C:
    ctx->pc = 0x80023E2Cu;
    // 80023E2C: stw     r12, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023E30:
    ctx->pc = 0x80023E30u;
    // 80023E30: stw     r11, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023E34:
    ctx->pc = 0x80023E34u;
    // 80023E34: stw     r10, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023E38:
    ctx->pc = 0x80023E38u;
    // 80023E38: stw     r9, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023E3C:
    ctx->pc = 0x80023E3Cu;
    // 80023E3C: stw     r8, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023E40:
    ctx->pc = 0x80023E40u;
    // 80023E40: stw     r7, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023E44:
    ctx->pc = 0x80023E44u;
    // 80023E44: stw     r6, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023E48:
    ctx->pc = 0x80023E48u;
    // 80023E48: stw     r5, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023E4C:
    ctx->pc = 0x80023E4Cu;
    // 80023E4C: stw     r4, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023E50:
    ctx->pc = 0x80023E50u;
    // 80023E50: stw     r3, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023E54:
    ctx->pc = 0x80023E54u;
    // 80023E54: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023E58:
    ctx->pc = 0x80023E58u;
    // 80023E58: bl      0x8004AF10
    {
            ctx->lr = 0x80023E5Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023E5C:
    ctx->pc = 0x80023E5Cu;
    ctx->downcount -= 2;
    // 80023E5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023E60:
    ctx->pc = 0x80023E60u;
    // 80023E60: bl      0x8004AF10
    {
            ctx->lr = 0x80023E64u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023E64:
    ctx->pc = 0x80023E64u;
    ctx->downcount -= 5;
    // 80023E64: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023E68:
    ctx->pc = 0x80023E68u;
    // 80023E68: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023E6C:
    ctx->pc = 0x80023E6Cu;
    // 80023E6C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023E70:
    ctx->pc = 0x80023E70u;
    // 80023E70: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80023E74:
    ctx->pc = 0x80023E74u;
    // 80023E74: bc    4, 0, 0x80023E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023E84;
        }
    }

label_80023E78:
    ctx->pc = 0x80023E78u;
    ctx->downcount -= 3;
    // 80023E78: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023E7C:
    ctx->pc = 0x80023E7Cu;
    // 80023E7C: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023E80:
    ctx->pc = 0x80023E80u;
    // 80023E80: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023E84:
    ctx->pc = 0x80023E84u;
    ctx->downcount -= 1;
    // 80023E84: bl      0x8004AF50
    {
            ctx->lr = 0x80023E88u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023E88:
    ctx->pc = 0x80023E88u;
    ctx->downcount -= 4;
    // 80023E88: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023E8C:
    ctx->pc = 0x80023E8Cu;
    // 80023E8C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80023E90:
    ctx->pc = 0x80023E90u;
    // 80023E90: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023E94:
    ctx->pc = 0x80023E94u;
    // 80023E94: bc    4, 2, 0x80023EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023EA4;
        }
    }

label_80023E98:
    ctx->pc = 0x80023E98u;
    ctx->downcount -= 2;
    // 80023E98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023E9C:
    ctx->pc = 0x80023E9Cu;
    // 80023E9C: bl      0x8004AF50
    {
            ctx->lr = 0x80023EA0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023EA0:
    ctx->pc = 0x80023EA0u;
    ctx->downcount -= 1;
    // 80023EA0: b       0x80023F18
    {
            goto label_80023F18;
    }

label_80023EA4:
    ctx->pc = 0x80023EA4u;
    ctx->downcount -= 10;
    // 80023EA4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023EA8:
    ctx->pc = 0x80023EA8u;
    // 80023EA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023EAC:
    ctx->pc = 0x80023EACu;
    // 80023EAC: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023EB0:
    ctx->pc = 0x80023EB0u;
    // 80023EB0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023EB4:
    ctx->pc = 0x80023EB4u;
    // 80023EB4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023EB8:
    ctx->pc = 0x80023EB8u;
    // 80023EB8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023EBC:
    ctx->pc = 0x80023EBCu;
    // 80023EBC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023EC0:
    ctx->pc = 0x80023EC0u;
    // 80023EC0: bl      0x80004350
    {
            ctx->lr = 0x80023EC4u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023EC4:
    ctx->pc = 0x80023EC4u;
    ctx->downcount -= 10;
    // 80023EC4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023EC8:
    ctx->pc = 0x80023EC8u;
    // 80023EC8: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_80023ECC:
    ctx->pc = 0x80023ECCu;
    // 80023ECC: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023ED0:
    ctx->pc = 0x80023ED0u;
    // 80023ED0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023ED4:
    ctx->pc = 0x80023ED4u;
    // 80023ED4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023ED8:
    ctx->pc = 0x80023ED8u;
    // 80023ED8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023EDC:
    ctx->pc = 0x80023EDCu;
    // 80023EDC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023EE0:
    ctx->pc = 0x80023EE0u;
    // 80023EE0: bl      0x80004000
    {
            ctx->lr = 0x80023EE4u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80023EE4:
    ctx->pc = 0x80023EE4u;
    ctx->downcount -= 13;
    // 80023EE4: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023EE8:
    ctx->pc = 0x80023EE8u;
    // 80023EE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023EEC:
    ctx->pc = 0x80023EECu;
    // 80023EEC: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023EF0:
    ctx->pc = 0x80023EF0u;
    // 80023EF0: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023EF4:
    ctx->pc = 0x80023EF4u;
    // 80023EF4: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80023EF8:
    ctx->pc = 0x80023EF8u;
    // 80023EF8: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80023EFC:
    ctx->pc = 0x80023EFCu;
    // 80023EFC: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80023F00:
    ctx->pc = 0x80023F00u;
    // 80023F00: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80023F04:
    ctx->pc = 0x80023F04u;
    // 80023F04: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80023F08:
    ctx->pc = 0x80023F08u;
    // 80023F08: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80023F0C:
    ctx->pc = 0x80023F0Cu;
    // 80023F0C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80023F10:
    ctx->pc = 0x80023F10u;
    // 80023F10: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80023F14:
    ctx->pc = 0x80023F14u;
    // 80023F14: bl      0x8004AF50
    {
            ctx->lr = 0x80023F18u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023F18:
    ctx->pc = 0x80023F18u;
    ctx->downcount -= 30;
    // 80023F18: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_80023F1C:
    ctx->pc = 0x80023F1Cu;
    // 80023F1C: stb     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_80023F20:
    ctx->pc = 0x80023F20u;
    // 80023F20: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80023F24:
    ctx->pc = 0x80023F24u;
    // 80023F24: li      r12, 21
    ctx->gpr[12] = (u32)(s32)(21);

label_80023F28:
    ctx->pc = 0x80023F28u;
    // 80023F28: sth     r0, 66(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80023F2C:
    ctx->pc = 0x80023F2Cu;
    // 80023F2C: lwz     r10, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80023F30:
    ctx->pc = 0x80023F30u;
    // 80023F30: lwz     r9, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80023F34:
    ctx->pc = 0x80023F34u;
    // 80023F34: lwz     r8, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80023F38:
    ctx->pc = 0x80023F38u;
    // 80023F38: lwz     r7, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80023F3C:
    ctx->pc = 0x80023F3Cu;
    // 80023F3C: lwz     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80023F40:
    ctx->pc = 0x80023F40u;
    // 80023F40: lwz     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80023F44:
    ctx->pc = 0x80023F44u;
    // 80023F44: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80023F48:
    ctx->pc = 0x80023F48u;
    // 80023F48: lwz     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023F4C:
    ctx->pc = 0x80023F4Cu;
    // 80023F4C: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023F50:
    ctx->pc = 0x80023F50u;
    // 80023F50: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023F54:
    ctx->pc = 0x80023F54u;
    // 80023F54: stw     r28, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80023F58:
    ctx->pc = 0x80023F58u;
    // 80023F58: stw     r11, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023F5C:
    ctx->pc = 0x80023F5Cu;
    // 80023F5C: stw     r12, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80023F60:
    ctx->pc = 0x80023F60u;
    // 80023F60: stw     r10, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80023F64:
    ctx->pc = 0x80023F64u;
    // 80023F64: stw     r9, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80023F68:
    ctx->pc = 0x80023F68u;
    // 80023F68: stw     r8, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80023F6C:
    ctx->pc = 0x80023F6Cu;
    // 80023F6C: stw     r7, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80023F70:
    ctx->pc = 0x80023F70u;
    // 80023F70: stw     r6, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80023F74:
    ctx->pc = 0x80023F74u;
    // 80023F74: stw     r5, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80023F78:
    ctx->pc = 0x80023F78u;
    // 80023F78: stw     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80023F7C:
    ctx->pc = 0x80023F7Cu;
    // 80023F7C: stw     r3, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80023F80:
    ctx->pc = 0x80023F80u;
    // 80023F80: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80023F84:
    ctx->pc = 0x80023F84u;
    // 80023F84: stw     r11, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80023F88:
    ctx->pc = 0x80023F88u;
    // 80023F88: stw     r28, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80023F8C:
    ctx->pc = 0x80023F8Cu;
    // 80023F8C: bl      0x8004AF10
    {
            ctx->lr = 0x80023F90u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023F90:
    ctx->pc = 0x80023F90u;
    ctx->downcount -= 2;
    // 80023F90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80023F94:
    ctx->pc = 0x80023F94u;
    // 80023F94: bl      0x8004AF10
    {
            ctx->lr = 0x80023F98u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80023F98:
    ctx->pc = 0x80023F98u;
    ctx->downcount -= 5;
    // 80023F98: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80023F9C:
    ctx->pc = 0x80023F9Cu;
    // 80023F9C: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023FA0:
    ctx->pc = 0x80023FA0u;
    // 80023FA0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80023FA4:
    ctx->pc = 0x80023FA4u;
    // 80023FA4: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80023FA8:
    ctx->pc = 0x80023FA8u;
    // 80023FA8: bc    4, 0, 0x80023FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023FB8;
        }
    }

label_80023FAC:
    ctx->pc = 0x80023FACu;
    ctx->downcount -= 3;
    // 80023FAC: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80023FB0:
    ctx->pc = 0x80023FB0u;
    // 80023FB0: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80023FB4:
    ctx->pc = 0x80023FB4u;
    // 80023FB4: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023FB8:
    ctx->pc = 0x80023FB8u;
    ctx->downcount -= 1;
    // 80023FB8: bl      0x8004AF50
    {
            ctx->lr = 0x80023FBCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023FBC:
    ctx->pc = 0x80023FBCu;
    ctx->downcount -= 4;
    // 80023FBC: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023FC0:
    ctx->pc = 0x80023FC0u;
    // 80023FC0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80023FC4:
    ctx->pc = 0x80023FC4u;
    // 80023FC4: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80023FC8:
    ctx->pc = 0x80023FC8u;
    // 80023FC8: bc    4, 2, 0x80023FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80023FD8;
        }
    }

label_80023FCC:
    ctx->pc = 0x80023FCCu;
    ctx->downcount -= 2;
    // 80023FCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80023FD0:
    ctx->pc = 0x80023FD0u;
    // 80023FD0: bl      0x8004AF50
    {
            ctx->lr = 0x80023FD4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80023FD4:
    ctx->pc = 0x80023FD4u;
    ctx->downcount -= 1;
    // 80023FD4: b       0x8002404C
    {
            goto label_8002404C;
    }

label_80023FD8:
    ctx->pc = 0x80023FD8u;
    ctx->downcount -= 10;
    // 80023FD8: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023FDC:
    ctx->pc = 0x80023FDCu;
    // 80023FDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80023FE0:
    ctx->pc = 0x80023FE0u;
    // 80023FE0: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80023FE4:
    ctx->pc = 0x80023FE4u;
    // 80023FE4: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80023FE8:
    ctx->pc = 0x80023FE8u;
    // 80023FE8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80023FEC:
    ctx->pc = 0x80023FECu;
    // 80023FEC: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80023FF0:
    ctx->pc = 0x80023FF0u;
    // 80023FF0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80023FF4:
    ctx->pc = 0x80023FF4u;
    // 80023FF4: bl      0x80004350
    {
            ctx->lr = 0x80023FF8u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80023FF8:
    ctx->pc = 0x80023FF8u;
    ctx->downcount -= 10;
    // 80023FF8: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80023FFC:
    ctx->pc = 0x80023FFCu;
    // 80023FFC: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_80024000:
    ctx->pc = 0x80024000u;
    // 80024000: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024004:
    ctx->pc = 0x80024004u;
    // 80024004: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024008:
    ctx->pc = 0x80024008u;
    // 80024008: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002400C:
    ctx->pc = 0x8002400Cu;
    // 8002400C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024010:
    ctx->pc = 0x80024010u;
    // 80024010: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024014:
    ctx->pc = 0x80024014u;
    // 80024014: bl      0x80004000
    {
            ctx->lr = 0x80024018u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024018:
    ctx->pc = 0x80024018u;
    ctx->downcount -= 13;
    // 80024018: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002401C:
    ctx->pc = 0x8002401Cu;
    // 8002401C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024020:
    ctx->pc = 0x80024020u;
    // 80024020: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024024:
    ctx->pc = 0x80024024u;
    // 80024024: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024028:
    ctx->pc = 0x80024028u;
    // 80024028: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8002402C:
    ctx->pc = 0x8002402Cu;
    // 8002402C: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024030:
    ctx->pc = 0x80024030u;
    // 80024030: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024034:
    ctx->pc = 0x80024034u;
    // 80024034: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024038:
    ctx->pc = 0x80024038u;
    // 80024038: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_8002403C:
    ctx->pc = 0x8002403Cu;
    // 8002403C: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024040:
    ctx->pc = 0x80024040u;
    // 80024040: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024044:
    ctx->pc = 0x80024044u;
    // 80024044: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024048:
    ctx->pc = 0x80024048u;
    // 80024048: bl      0x8004AF50
    {
            ctx->lr = 0x8002404Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_8002404C:
    ctx->pc = 0x8002404Cu;
    ctx->downcount -= 2;
    // 8002404C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80024050:
    ctx->pc = 0x80024050u;
    // 80024050: bl      0x8004AF50
    {
            ctx->lr = 0x80024054u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024054:
    ctx->pc = 0x80024054u;
    ctx->downcount -= 2;
    // 80024054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80024058:
    ctx->pc = 0x80024058u;
    // 80024058: b       0x80024088
    {
            goto label_80024088;
    }

label_8002405C:
    ctx->pc = 0x8002405Cu;
    ctx->downcount -= 3;
    // 8002405C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80024060:
    ctx->pc = 0x80024060u;
    // 80024060: li      r24, -2
    ctx->gpr[24] = (u32)(s32)(-2);

label_80024064:
    ctx->pc = 0x80024064u;
    // 80024064: bl      0x8004AF50
    {
            ctx->lr = 0x80024068u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024068:
    ctx->pc = 0x80024068u;
    ctx->downcount -= 2;
    // 80024068: cmpwi   r28, 0
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

label_8002406C:
    ctx->pc = 0x8002406Cu;
    // 8002406C: bc    12, 2, 0x80024084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024084;
        }
    }

label_80024070:
    ctx->pc = 0x80024070u;
    ctx->downcount -= 6;
    // 80024070: or   r12, r28, r28
    {
        ctx->gpr[12] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80024074:
    ctx->pc = 0x80024074u;
    // 80024074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024078:
    ctx->pc = 0x80024078u;
    // 80024078: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8002407C:
    ctx->pc = 0x8002407Cu;
    // 8002407C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80024080:
    ctx->pc = 0x80024080u;
    // 80024080: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80024084u;
            ctx->pc = target;
            return;
        }
    }

label_80024084:
    ctx->pc = 0x80024084u;
    ctx->downcount -= 1;
    // 80024084: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80024088:
    ctx->pc = 0x80024088u;
    ctx->downcount -= 2;
    // 80024088: addi    r11, r1, 1136
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(1136);

label_8002408C:
    ctx->pc = 0x8002408Cu;
    // 8002408C: bl      0x80007898
    {
            ctx->lr = 0x80024090u;
            ctx->pc = 0x80007898u;
            return;
    }

label_80024090:
    ctx->pc = 0x80024090u;
    ctx->downcount -= 5;
    // 80024090: lwz     r0, 1140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024094:
    ctx->pc = 0x80024094u;
    // 80024094: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80024098:
    ctx->pc = 0x80024098u;
    // 80024098: addi    r1, r1, 1136
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(1136);

label_8002409C:
    ctx->pc = 0x8002409Cu;
    // 8002409C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800240A0:
    ctx->pc = 0x800240A0u;
    ctx->downcount -= 5;
    // 800240A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800240A4:
    ctx->pc = 0x800240A4u;
    // 800240A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800240A8:
    ctx->pc = 0x800240A8u;
    // 800240A8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800240AC:
    ctx->pc = 0x800240ACu;
    // 800240AC: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_800240B0:
    ctx->pc = 0x800240B0u;
    // 800240B0: bl      0x80007854
    {
            ctx->lr = 0x800240B4u;
            ctx->pc = 0x80007854u;
            return;
    }

label_800240B4:
    ctx->pc = 0x800240B4u;
    ctx->downcount -= 8;
    // 800240B4: lis     r6, -32656
    ctx->gpr[6] = ((u32)(s32)(-32656) << 16);

label_800240B8:
    ctx->pc = 0x800240B8u;
    // 800240B8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800240BC:
    ctx->pc = 0x800240BCu;
    // 800240BC: addi    r6, r6, 31952
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31952);

label_800240C0:
    ctx->pc = 0x800240C0u;
    // 800240C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800240C4:
    ctx->pc = 0x800240C4u;
    // 800240C4: lwzx    r28, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_800240C8:
    ctx->pc = 0x800240C8u;
    // 800240C8: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800240CC:
    ctx->pc = 0x800240CCu;
    // 800240CC: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800240D0:
    ctx->pc = 0x800240D0u;
    // 800240D0: bl      0x8004AF10
    {
            ctx->lr = 0x800240D4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800240D4:
    ctx->pc = 0x800240D4u;
    ctx->downcount -= 3;
    // 800240D4: lwz     r30, 2304(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2304);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800240D8:
    ctx->pc = 0x800240D8u;
    // 800240D8: lwz     r29, 2336(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2336);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800240DC:
    ctx->pc = 0x800240DCu;
    // 800240DC: bl      0x8004AF50
    {
            ctx->lr = 0x800240E0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800240E0:
    ctx->pc = 0x800240E0u;
    ctx->downcount -= 2;
    // 800240E0: cmpwi   r30, -1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800240E4:
    ctx->pc = 0x800240E4u;
    // 800240E4: bc    12, 2, 0x8002428C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002428C;
        }
    }

label_800240E8:
    ctx->pc = 0x800240E8u;
    ctx->downcount -= 2;
    // 800240E8: cmpwi   r29, 0
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

label_800240EC:
    ctx->pc = 0x800240ECu;
    // 800240EC: bc    12, 2, 0x800240FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800240FC;
        }
    }

label_800240F0:
    ctx->pc = 0x800240F0u;
    ctx->downcount -= 1;
    // 800240F0: bl      0x8005A8E0
    {
            ctx->lr = 0x800240F4u;
            ctx->pc = 0x8005A8E0u;
            return;
    }

label_800240F4:
    ctx->pc = 0x800240F4u;
    ctx->downcount -= 2;
    // 800240F4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800240F8:
    ctx->pc = 0x800240F8u;
    // 800240F8: bc    4, 2, 0x80024104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024104;
        }
    }

label_800240FC:
    ctx->pc = 0x800240FCu;
    ctx->downcount -= 2;
    // 800240FC: li      r30, -2
    ctx->gpr[30] = (u32)(s32)(-2);

label_80024100:
    ctx->pc = 0x80024100u;
    // 80024100: b       0x8002428C
    {
            goto label_8002428C;
    }

label_80024104:
    ctx->pc = 0x80024104u;
    ctx->downcount -= 10;
    // 80024104: li      r3, 170
    ctx->gpr[3] = (u32)(s32)(170);

label_80024108:
    ctx->pc = 0x80024108u;
    // 80024108: li      r0, 85
    ctx->gpr[0] = (u32)(s32)(85);

label_8002410C:
    ctx->pc = 0x8002410Cu;
    // 8002410C: stb     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80024110:
    ctx->pc = 0x80024110u;
    // 80024110: stb     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80024114:
    ctx->pc = 0x80024114u;
    // 80024114: stb     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80024118:
    ctx->pc = 0x80024118u;
    // 80024118: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002411C:
    ctx->pc = 0x8002411Cu;
    // 8002411C: stb     r26, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_80024120:
    ctx->pc = 0x80024120u;
    // 80024120: stb     r26, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_80024124:
    ctx->pc = 0x80024124u;
    // 80024124: stb     r26, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_80024128:
    ctx->pc = 0x80024128u;
    // 80024128: bl      0x8004AF10
    {
            ctx->lr = 0x8002412Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002412C:
    ctx->pc = 0x8002412Cu;
    ctx->downcount -= 3;
    // 8002412C: cmpwi   r26, 170
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(170);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024130:
    ctx->pc = 0x80024130u;
    // 80024130: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024134:
    ctx->pc = 0x80024134u;
    // 80024134: bc    12, 2, 0x8002414C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002414C;
        }
    }

label_80024138:
    ctx->pc = 0x80024138u;
    ctx->downcount -= 2;
    // 80024138: cmpwi   r26, 85
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(85);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002413C:
    ctx->pc = 0x8002413Cu;
    // 8002413C: bc    12, 2, 0x80024210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024210;
        }
    }

label_80024140:
    ctx->pc = 0x80024140u;
    ctx->downcount -= 2;
    // 80024140: cmpwi   r26, 0
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

label_80024144:
    ctx->pc = 0x80024144u;
    // 80024144: bc    12, 2, 0x80024248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024248;
        }
    }

label_80024148:
    ctx->pc = 0x80024148u;
    ctx->downcount -= 1;
    // 80024148: b       0x80024280
    {
            goto label_80024280;
    }

label_8002414C:
    ctx->pc = 0x8002414Cu;
    ctx->downcount -= 1;
    // 8002414C: bl      0x8004AF10
    {
            ctx->lr = 0x80024150u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024150:
    ctx->pc = 0x80024150u;
    ctx->downcount -= 5;
    // 80024150: lbz     r4, 352(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80024154:
    ctx->pc = 0x80024154u;
    // 80024154: lbz     r0, 353(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024158:
    ctx->pc = 0x80024158u;
    // 80024158: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8002415C:
    ctx->pc = 0x8002415Cu;
    // 8002415C: extsb. r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80024160:
    ctx->pc = 0x80024160u;
    // 80024160: bc    4, 0, 0x80024170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024170;
        }
    }

label_80024164:
    ctx->pc = 0x80024164u;
    ctx->downcount -= 3;
    // 80024164: lwz     r0, 360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024168:
    ctx->pc = 0x80024168u;
    // 80024168: add   r0, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8002416C:
    ctx->pc = 0x8002416Cu;
    // 8002416C: extsb r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024170:
    ctx->pc = 0x80024170u;
    ctx->downcount -= 1;
    // 80024170: bl      0x8004AF50
    {
            ctx->lr = 0x80024174u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024174:
    ctx->pc = 0x80024174u;
    ctx->downcount -= 5;
    // 80024174: lwz     r3, 360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024178:
    ctx->pc = 0x80024178u;
    // 80024178: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_8002417C:
    ctx->pc = 0x8002417Cu;
    // 8002417C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024180:
    ctx->pc = 0x80024180u;
    // 80024180: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024184:
    ctx->pc = 0x80024184u;
    // 80024184: bc    12, 1, 0x80024208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024208;
        }
    }

label_80024188:
    ctx->pc = 0x80024188u;
    ctx->downcount -= 7;
    // 80024188: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002418C:
    ctx->pc = 0x8002418Cu;
    // 8002418C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80024190:
    ctx->pc = 0x80024190u;
    // 80024190: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80024194:
    ctx->pc = 0x80024194u;
    // 80024194: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_80024198:
    ctx->pc = 0x80024198u;
    // 80024198: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_8002419C:
    ctx->pc = 0x8002419Cu;
    // 8002419C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_800241A0:
    ctx->pc = 0x800241A0u;
    // 800241A0: bl      0x8002D5C0
    {
            ctx->lr = 0x800241A4u;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_800241A4:
    ctx->pc = 0x800241A4u;
    ctx->downcount -= 7;
    // 800241A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800241A8:
    ctx->pc = 0x800241A8u;
    // 800241A8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800241AC:
    ctx->pc = 0x800241ACu;
    // 800241AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800241B0:
    ctx->pc = 0x800241B0u;
    // 800241B0: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_800241B4:
    ctx->pc = 0x800241B4u;
    // 800241B4: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_800241B8:
    ctx->pc = 0x800241B8u;
    // 800241B8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_800241BC:
    ctx->pc = 0x800241BCu;
    // 800241BC: bl      0x8002D5C0
    {
            ctx->lr = 0x800241C0u;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_800241C0:
    ctx->pc = 0x800241C0u;
    ctx->downcount -= 7;
    // 800241C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800241C4:
    ctx->pc = 0x800241C4u;
    // 800241C4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800241C8:
    ctx->pc = 0x800241C8u;
    // 800241C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800241CC:
    ctx->pc = 0x800241CCu;
    // 800241CC: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_800241D0:
    ctx->pc = 0x800241D0u;
    // 800241D0: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_800241D4:
    ctx->pc = 0x800241D4u;
    // 800241D4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_800241D8:
    ctx->pc = 0x800241D8u;
    // 800241D8: bl      0x8002D5C0
    {
            ctx->lr = 0x800241DCu;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_800241DC:
    ctx->pc = 0x800241DCu;
    ctx->downcount -= 7;
    // 800241DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800241E0:
    ctx->pc = 0x800241E0u;
    // 800241E0: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800241E4:
    ctx->pc = 0x800241E4u;
    // 800241E4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800241E8:
    ctx->pc = 0x800241E8u;
    // 800241E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800241EC:
    ctx->pc = 0x800241ECu;
    // 800241EC: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_800241F0:
    ctx->pc = 0x800241F0u;
    // 800241F0: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_800241F4:
    ctx->pc = 0x800241F4u;
    // 800241F4: bl      0x8002D5C0
    {
            ctx->lr = 0x800241F8u;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_800241F8:
    ctx->pc = 0x800241F8u;
    ctx->downcount -= 2;
    // 800241F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800241FC:
    ctx->pc = 0x800241FCu;
    // 800241FC: bl      0x8004AF50
    {
            ctx->lr = 0x80024200u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024200:
    ctx->pc = 0x80024200u;
    ctx->downcount -= 2;
    // 80024200: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80024204:
    ctx->pc = 0x80024204u;
    // 80024204: b       0x800242AC
    {
            goto label_800242AC;
    }

label_80024208:
    ctx->pc = 0x80024208u;
    ctx->downcount -= 2;
    // 80024208: li      r30, -2
    ctx->gpr[30] = (u32)(s32)(-2);

label_8002420C:
    ctx->pc = 0x8002420Cu;
    // 8002420C: b       0x80024284
    {
            goto label_80024284;
    }

label_80024210:
    ctx->pc = 0x80024210u;
    ctx->downcount -= 7;
    // 80024210: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024214:
    ctx->pc = 0x80024214u;
    // 80024214: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80024218:
    ctx->pc = 0x80024218u;
    // 80024218: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8002421C:
    ctx->pc = 0x8002421Cu;
    // 8002421C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80024220:
    ctx->pc = 0x80024220u;
    // 80024220: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_80024224:
    ctx->pc = 0x80024224u;
    // 80024224: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_80024228:
    ctx->pc = 0x80024228u;
    // 80024228: bl      0x8002D5C0
    {
            ctx->lr = 0x8002422Cu;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_8002422C:
    ctx->pc = 0x8002422Cu;
    ctx->downcount -= 3;
    // 8002422C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024230:
    ctx->pc = 0x80024230u;
    // 80024230: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024234:
    ctx->pc = 0x80024234u;
    // 80024234: bc    4, 2, 0x80024284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024284;
        }
    }

label_80024238:
    ctx->pc = 0x80024238u;
    ctx->downcount -= 2;
    // 80024238: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002423C:
    ctx->pc = 0x8002423Cu;
    // 8002423C: bl      0x8004AF50
    {
            ctx->lr = 0x80024240u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024240:
    ctx->pc = 0x80024240u;
    ctx->downcount -= 2;
    // 80024240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80024244:
    ctx->pc = 0x80024244u;
    // 80024244: b       0x800242AC
    {
            goto label_800242AC;
    }

label_80024248:
    ctx->pc = 0x80024248u;
    ctx->downcount -= 7;
    // 80024248: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002424C:
    ctx->pc = 0x8002424Cu;
    // 8002424C: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80024250:
    ctx->pc = 0x80024250u;
    // 80024250: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80024254:
    ctx->pc = 0x80024254u;
    // 80024254: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024258:
    ctx->pc = 0x80024258u;
    // 80024258: li      r6, 164
    ctx->gpr[6] = (u32)(s32)(164);

label_8002425C:
    ctx->pc = 0x8002425Cu;
    // 8002425C: li      r7, 241
    ctx->gpr[7] = (u32)(s32)(241);

label_80024260:
    ctx->pc = 0x80024260u;
    // 80024260: bl      0x8002D5C0
    {
            ctx->lr = 0x80024264u;
            ctx->pc = 0x8002D5C0u;
            return;
    }

label_80024264:
    ctx->pc = 0x80024264u;
    ctx->downcount -= 3;
    // 80024264: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024268:
    ctx->pc = 0x80024268u;
    // 80024268: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002426C:
    ctx->pc = 0x8002426Cu;
    // 8002426C: bc    4, 2, 0x80024284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024284;
        }
    }

label_80024270:
    ctx->pc = 0x80024270u;
    ctx->downcount -= 2;
    // 80024270: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80024274:
    ctx->pc = 0x80024274u;
    // 80024274: bl      0x8004AF50
    {
            ctx->lr = 0x80024278u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024278:
    ctx->pc = 0x80024278u;
    ctx->downcount -= 2;
    // 80024278: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002427C:
    ctx->pc = 0x8002427Cu;
    // 8002427C: b       0x800242AC
    {
            goto label_800242AC;
    }

label_80024280:
    ctx->pc = 0x80024280u;
    ctx->downcount -= 1;
    // 80024280: li      r30, -2
    ctx->gpr[30] = (u32)(s32)(-2);

label_80024284:
    ctx->pc = 0x80024284u;
    ctx->downcount -= 2;
    // 80024284: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80024288:
    ctx->pc = 0x80024288u;
    // 80024288: bl      0x8004AF50
    {
            ctx->lr = 0x8002428Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_8002428C:
    ctx->pc = 0x8002428Cu;
    ctx->downcount -= 2;
    // 8002428C: cmpwi   r27, 0
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

label_80024290:
    ctx->pc = 0x80024290u;
    // 80024290: bc    12, 2, 0x800242A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800242A8;
        }
    }

label_80024294:
    ctx->pc = 0x80024294u;
    ctx->downcount -= 6;
    // 80024294: or   r12, r27, r27
    {
        ctx->gpr[12] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80024298:
    ctx->pc = 0x80024298u;
    // 80024298: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002429C:
    ctx->pc = 0x8002429Cu;
    // 8002429C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800242A0:
    ctx->pc = 0x800242A0u;
    // 800242A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_800242A4:
    ctx->pc = 0x800242A4u;
    // 800242A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800242A8u;
            ctx->pc = target;
            return;
        }
    }

label_800242A8:
    ctx->pc = 0x800242A8u;
    ctx->downcount -= 1;
    // 800242A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800242AC:
    ctx->pc = 0x800242ACu;
    ctx->downcount -= 2;
    // 800242AC: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_800242B0:
    ctx->pc = 0x800242B0u;
    // 800242B0: bl      0x800078A0
    {
            ctx->lr = 0x800242B4u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_800242B4:
    ctx->pc = 0x800242B4u;
    ctx->downcount -= 5;
    // 800242B4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800242B8:
    ctx->pc = 0x800242B8u;
    // 800242B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800242BC:
    ctx->pc = 0x800242BCu;
    // 800242BC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_800242C0:
    ctx->pc = 0x800242C0u;
    // 800242C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800242C4:
    ctx->pc = 0x800242C4u;
    // 800242C4: .long   0x00000000
    // embedded data

label_800242C8:
    ctx->pc = 0x800242C8u;
    // 800242C8: .long   0x00000000
    // embedded data

label_800242CC:
    ctx->pc = 0x800242CCu;
    // 800242CC: .long   0x00000000
    // embedded data

label_800242D0:
    ctx->pc = 0x800242D0u;
    // 800242D0: b       0x8005CFA0
    {
            ctx->pc = 0x8005CFA0u;
            return;
    }

label_800242D4:
    ctx->pc = 0x800242D4u;
    // 800242D4: .long   0x00000000
    // embedded data

label_800242D8:
    ctx->pc = 0x800242D8u;
    // 800242D8: .long   0x00000000
    // embedded data

label_800242DC:
    ctx->pc = 0x800242DCu;
    // 800242DC: .long   0x00000000
    // embedded data

label_800242E0:
    ctx->pc = 0x800242E0u;
    // 800242E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800242E4:
    ctx->pc = 0x800242E4u;
    // 800242E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800242E8:
    ctx->pc = 0x800242E8u;
    // 800242E8: lis     r4, -32656
    ctx->gpr[4] = ((u32)(s32)(-32656) << 16);

label_800242EC:
    ctx->pc = 0x800242ECu;
    // 800242EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800242F0:
    ctx->pc = 0x800242F0u;
    // 800242F0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800242F4:
    ctx->pc = 0x800242F4u;
    // 800242F4: addi    r4, r4, 31952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31952);

label_800242F8:
    ctx->pc = 0x800242F8u;
    // 800242F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800242FC:
    ctx->pc = 0x800242FCu;
    // 800242FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80024300:
    ctx->pc = 0x80024300u;
    // 80024300: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80024304:
    ctx->pc = 0x80024304u;
    // 80024304: lwzx    r30, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80024308:
    ctx->pc = 0x80024308u;
    // 80024308: bl      0x8004AF10
    {
            ctx->lr = 0x8002430Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002430C:
    ctx->pc = 0x8002430Cu;
    ctx->downcount -= 5;
    // 8002430C: lbz     r4, 2309(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2309);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80024310:
    ctx->pc = 0x80024310u;
    // 80024310: addi    r0, r4, 251
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(251);

label_80024314:
    ctx->pc = 0x80024314u;
    // 80024314: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80024318:
    ctx->pc = 0x80024318u;
    // 80024318: cmplwi  r0, 0x0002
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

label_8002431C:
    ctx->pc = 0x8002431Cu;
    // 8002431C: bc    4, 1, 0x80024328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024328;
        }
    }

label_80024320:
    ctx->pc = 0x80024320u;
    ctx->downcount -= 2;
    // 80024320: cmplwi  r4, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024324:
    ctx->pc = 0x80024324u;
    // 80024324: bc    4, 2, 0x8002432C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002432C;
        }
    }

label_80024328:
    ctx->pc = 0x80024328u;
    ctx->downcount -= 1;
    // 80024328: lbz     r31, 2310(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2310);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_8002432C:
    ctx->pc = 0x8002432Cu;
    ctx->downcount -= 1;
    // 8002432C: bl      0x8004AF50
    {
            ctx->lr = 0x80024330u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024330:
    ctx->pc = 0x80024330u;
    ctx->downcount -= 8;
    // 80024330: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024334:
    ctx->pc = 0x80024334u;
    // 80024334: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80024338:
    ctx->pc = 0x80024338u;
    // 80024338: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002433C:
    ctx->pc = 0x8002433Cu;
    // 8002433C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024340:
    ctx->pc = 0x80024340u;
    // 80024340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80024344:
    ctx->pc = 0x80024344u;
    // 80024344: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80024348:
    ctx->pc = 0x80024348u;
    // 80024348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_8002434C:
    ctx->pc = 0x8002434Cu;
    // 8002434C: .long   0x00000000
    // embedded data

label_80024350:
    ctx->pc = 0x80024350u;
    // 80024350: stwu     r1, -944(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-944);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80024354:
    ctx->pc = 0x80024354u;
    // 80024354: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80024358:
    ctx->pc = 0x80024358u;
    // 80024358: lis     r5, -32656
    ctx->gpr[5] = ((u32)(s32)(-32656) << 16);

label_8002435C:
    ctx->pc = 0x8002435Cu;
    // 8002435C: stw     r0, 948(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024360:
    ctx->pc = 0x80024360u;
    // 80024360: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80024364:
    ctx->pc = 0x80024364u;
    // 80024364: addi    r5, r5, 31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31952);

label_80024368:
    ctx->pc = 0x80024368u;
    // 80024368: stw     r31, 940(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(940);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002436C:
    ctx->pc = 0x8002436Cu;
    // 8002436C: stw     r30, 936(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(936);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80024370:
    ctx->pc = 0x80024370u;
    // 80024370: stw     r29, 932(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(932);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80024374:
    ctx->pc = 0x80024374u;
    // 80024374: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024378:
    ctx->pc = 0x80024378u;
    // 80024378: stw     r28, 928(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(928);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8002437C:
    ctx->pc = 0x8002437Cu;
    // 8002437C: lwzx    r30, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80024380:
    ctx->pc = 0x80024380u;
    // 80024380: lbz     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024384:
    ctx->pc = 0x80024384u;
    // 80024384: cmplwi  r0, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024388:
    ctx->pc = 0x80024388u;
    // 80024388: bc    12, 1, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_8002438C:
    ctx->pc = 0x8002438Cu;
    ctx->downcount -= 7;
    // 8002438C: lis     r3, -32663
    ctx->gpr[3] = ((u32)(s32)(-32663) << 16);

label_80024390:
    ctx->pc = 0x80024390u;
    // 80024390: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80024394:
    ctx->pc = 0x80024394u;
    // 80024394: addi    r3, r3, -9776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9776);

label_80024398:
    ctx->pc = 0x80024398u;
    // 80024398: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002439C:
    ctx->pc = 0x8002439Cu;
    // 8002439C: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_800243A0:
    ctx->pc = 0x800243A0u;
    // 800243A0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_800243A4:
    ctx->pc = 0x800243A4u;
    ctx->downcount -= 2;
    // 800243A4: cmpwi   r4, 0
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

label_800243A8:
    ctx->pc = 0x800243A8u;
    // 800243A8: bc    4, 2, 0x80024B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024B08;
        }
    }

label_800243AC:
    ctx->pc = 0x800243ACu;
    ctx->downcount -= 5;
    // 800243AC: lbz     r3, 2354(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2354);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800243B0:
    ctx->pc = 0x800243B0u;
    // 800243B0: addi    r0, r3, 251
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(251);

label_800243B4:
    ctx->pc = 0x800243B4u;
    // 800243B4: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_800243B8:
    ctx->pc = 0x800243B8u;
    // 800243B8: cmplwi  r0, 0x0002
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

label_800243BC:
    ctx->pc = 0x800243BCu;
    // 800243BC: bc    4, 1, 0x800245AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800245AC;
        }
    }

label_800243C0:
    ctx->pc = 0x800243C0u;
    ctx->downcount -= 2;
    // 800243C0: cmplwi  r3, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800243C4:
    ctx->pc = 0x800243C4u;
    // 800243C4: bc    12, 2, 0x800245AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800245AC;
        }
    }

label_800243C8:
    ctx->pc = 0x800243C8u;
    ctx->downcount -= 5;
    // 800243C8: lbz     r3, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800243CC:
    ctx->pc = 0x800243CCu;
    // 800243CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800243D0:
    ctx->pc = 0x800243D0u;
    // 800243D0: stb     r0, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800243D4:
    ctx->pc = 0x800243D4u;
    // 800243D4: rlwinm. r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800243D8:
    ctx->pc = 0x800243D8u;
    // 800243D8: bc    4, 2, 0x800243E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800243E4;
        }
    }

label_800243DC:
    ctx->pc = 0x800243DCu;
    ctx->downcount -= 2;
    // 800243DC: li      r4, -3
    ctx->gpr[4] = (u32)(s32)(-3);

label_800243E0:
    ctx->pc = 0x800243E0u;
    // 800243E0: b       0x8002545C
    {
            goto label_8002545C;
    }

label_800243E4:
    ctx->pc = 0x800243E4u;
    ctx->downcount -= 2;
    // 800243E4: cmplwi  r0, 0x0001
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

label_800243E8:
    ctx->pc = 0x800243E8u;
    // 800243E8: bc    4, 1, 0x800243FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800243FC;
        }
    }

label_800243EC:
    ctx->pc = 0x800243ECu;
    ctx->downcount -= 4;
    // 800243EC: lis     r3, 1190
    ctx->gpr[3] = ((u32)(s32)(1190) << 16);

label_800243F0:
    ctx->pc = 0x800243F0u;
    // 800243F0: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_800243F4:
    ctx->pc = 0x800243F4u;
    // 800243F4: stw     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800243F8:
    ctx->pc = 0x800243F8u;
    // 800243F8: b       0x80024408
    {
            goto label_80024408;
    }

label_800243FC:
    ctx->pc = 0x800243FCu;
    ctx->downcount -= 3;
    // 800243FC: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_80024400:
    ctx->pc = 0x80024400u;
    // 80024400: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80024404:
    ctx->pc = 0x80024404u;
    // 80024404: stw     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024408:
    ctx->pc = 0x80024408u;
    ctx->downcount -= 15;
    // 80024408: lwz     r3, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002440C:
    ctx->pc = 0x8002440Cu;
    // 8002440C: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80024410:
    ctx->pc = 0x80024410u;
    // 80024410: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80024414:
    ctx->pc = 0x80024414u;
    // 80024414: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_80024418:
    ctx->pc = 0x80024418u;
    // 80024418: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_8002441C:
    ctx->pc = 0x8002441Cu;
    // 8002441C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80024420:
    ctx->pc = 0x80024420u;
    // 80024420: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024424:
    ctx->pc = 0x80024424u;
    // 80024424: addi    r3, r1, 836
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(836);

label_80024428:
    ctx->pc = 0x80024428u;
    // 80024428: addi    r4, r1, 60
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(60);

label_8002442C:
    ctx->pc = 0x8002442Cu;
    // 8002442C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80024430:
    ctx->pc = 0x80024430u;
    // 80024430: sth     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80024434:
    ctx->pc = 0x80024434u;
    // 80024434: stw     r7, 832(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(832);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024438:
    ctx->pc = 0x80024438u;
    // 80024438: sth     r0, 858(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(858);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002443C:
    ctx->pc = 0x8002443Cu;
    // 8002443C: stw     r6, 876(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(876);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024440:
    ctx->pc = 0x80024440u;
    // 80024440: bl      0x80004000
    {
            ctx->lr = 0x80024444u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024444:
    ctx->pc = 0x80024444u;
    ctx->downcount -= 4;
    // 80024444: addi    r3, r1, 840
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(840);

label_80024448:
    ctx->pc = 0x80024448u;
    // 80024448: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8002444C:
    ctx->pc = 0x8002444Cu;
    // 8002444C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80024450:
    ctx->pc = 0x80024450u;
    // 80024450: bl      0x80004000
    {
            ctx->lr = 0x80024454u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024454:
    ctx->pc = 0x80024454u;
    ctx->downcount -= 29;
    // 80024454: lhz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80024458:
    ctx->pc = 0x80024458u;
    // 80024458: addi    r31, r30, 2353
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(2353);

label_8002445C:
    ctx->pc = 0x8002445Cu;
    // 8002445C: sth     r0, 864(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(864);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024460:
    ctx->pc = 0x80024460u;
    // 80024460: lwz     r12, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024464:
    ctx->pc = 0x80024464u;
    // 80024464: lwz     r11, 832(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(832);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80024468:
    ctx->pc = 0x80024468u;
    // 80024468: lwz     r10, 836(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(836);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8002446C:
    ctx->pc = 0x8002446Cu;
    // 8002446C: lwz     r9, 840(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(840);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024470:
    ctx->pc = 0x80024470u;
    // 80024470: lwz     r8, 844(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(844);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024474:
    ctx->pc = 0x80024474u;
    // 80024474: lwz     r7, 848(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(848);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80024478:
    ctx->pc = 0x80024478u;
    // 80024478: lwz     r6, 852(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(852);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002447C:
    ctx->pc = 0x8002447Cu;
    // 8002447C: lwz     r5, 856(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024480:
    ctx->pc = 0x80024480u;
    // 80024480: lwz     r4, 864(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(864);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024484:
    ctx->pc = 0x80024484u;
    // 80024484: lwz     r3, 872(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024488:
    ctx->pc = 0x80024488u;
    // 80024488: lwz     r0, 876(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(876);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002448C:
    ctx->pc = 0x8002448Cu;
    // 8002448C: stw     r31, 860(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024490:
    ctx->pc = 0x80024490u;
    // 80024490: stw     r12, 868(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(868);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024494:
    ctx->pc = 0x80024494u;
    // 80024494: stw     r11, 880(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(880);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80024498:
    ctx->pc = 0x80024498u;
    // 80024498: stw     r10, 884(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(884);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002449C:
    ctx->pc = 0x8002449Cu;
    // 8002449C: stw     r9, 888(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(888);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800244A0:
    ctx->pc = 0x800244A0u;
    // 800244A0: stw     r8, 892(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(892);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800244A4:
    ctx->pc = 0x800244A4u;
    // 800244A4: stw     r7, 896(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(896);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800244A8:
    ctx->pc = 0x800244A8u;
    // 800244A8: stw     r6, 900(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800244AC:
    ctx->pc = 0x800244ACu;
    // 800244AC: stw     r5, 904(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(904);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800244B0:
    ctx->pc = 0x800244B0u;
    // 800244B0: stw     r31, 908(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(908);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800244B4:
    ctx->pc = 0x800244B4u;
    // 800244B4: stw     r4, 912(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(912);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800244B8:
    ctx->pc = 0x800244B8u;
    // 800244B8: stw     r12, 916(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(916);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_800244BC:
    ctx->pc = 0x800244BCu;
    // 800244BC: stw     r3, 920(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(920);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800244C0:
    ctx->pc = 0x800244C0u;
    // 800244C0: stw     r0, 924(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(924);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800244C4:
    ctx->pc = 0x800244C4u;
    // 800244C4: bl      0x8004AF10
    {
            ctx->lr = 0x800244C8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800244C8:
    ctx->pc = 0x800244C8u;
    ctx->downcount -= 2;
    // 800244C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800244CC:
    ctx->pc = 0x800244CCu;
    // 800244CC: bl      0x8004AF10
    {
            ctx->lr = 0x800244D0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800244D0:
    ctx->pc = 0x800244D0u;
    ctx->downcount -= 7;
    // 800244D0: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800244D4:
    ctx->pc = 0x800244D4u;
    // 800244D4: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_800244D8:
    ctx->pc = 0x800244D8u;
    // 800244D8: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800244DC:
    ctx->pc = 0x800244DCu;
    // 800244DC: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_800244E0:
    ctx->pc = 0x800244E0u;
    // 800244E0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800244E4:
    ctx->pc = 0x800244E4u;
    // 800244E4: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800244E8:
    ctx->pc = 0x800244E8u;
    // 800244E8: bc    4, 0, 0x800244F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800244F8;
        }
    }

label_800244EC:
    ctx->pc = 0x800244ECu;
    ctx->downcount -= 3;
    // 800244EC: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800244F0:
    ctx->pc = 0x800244F0u;
    // 800244F0: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800244F4:
    ctx->pc = 0x800244F4u;
    // 800244F4: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800244F8:
    ctx->pc = 0x800244F8u;
    ctx->downcount -= 1;
    // 800244F8: bl      0x8004AF50
    {
            ctx->lr = 0x800244FCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800244FC:
    ctx->pc = 0x800244FCu;
    ctx->downcount -= 4;
    // 800244FC: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024500:
    ctx->pc = 0x80024500u;
    // 80024500: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024504:
    ctx->pc = 0x80024504u;
    // 80024504: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024508:
    ctx->pc = 0x80024508u;
    // 80024508: bc    4, 2, 0x8002451C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002451C;
        }
    }

label_8002450C:
    ctx->pc = 0x8002450Cu;
    ctx->downcount -= 2;
    // 8002450C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024510:
    ctx->pc = 0x80024510u;
    // 80024510: bl      0x8004AF50
    {
            ctx->lr = 0x80024514u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024514:
    ctx->pc = 0x80024514u;
    ctx->downcount -= 2;
    // 80024514: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80024518:
    ctx->pc = 0x80024518u;
    // 80024518: b       0x80024594
    {
            goto label_80024594;
    }

label_8002451C:
    ctx->pc = 0x8002451Cu;
    ctx->downcount -= 10;
    // 8002451C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024520:
    ctx->pc = 0x80024520u;
    // 80024520: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80024524:
    ctx->pc = 0x80024524u;
    // 80024524: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024528:
    ctx->pc = 0x80024528u;
    // 80024528: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002452C:
    ctx->pc = 0x8002452Cu;
    // 8002452C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024530:
    ctx->pc = 0x80024530u;
    // 80024530: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024534:
    ctx->pc = 0x80024534u;
    // 80024534: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024538:
    ctx->pc = 0x80024538u;
    // 80024538: bl      0x80004350
    {
            ctx->lr = 0x8002453Cu;
            ctx->pc = 0x80004350u;
            return;
    }

label_8002453C:
    ctx->pc = 0x8002453Cu;
    ctx->downcount -= 10;
    // 8002453C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024540:
    ctx->pc = 0x80024540u;
    // 80024540: addi    r4, r1, 880
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(880);

label_80024544:
    ctx->pc = 0x80024544u;
    // 80024544: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024548:
    ctx->pc = 0x80024548u;
    // 80024548: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002454C:
    ctx->pc = 0x8002454Cu;
    // 8002454C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024550:
    ctx->pc = 0x80024550u;
    // 80024550: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024554:
    ctx->pc = 0x80024554u;
    // 80024554: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024558:
    ctx->pc = 0x80024558u;
    // 80024558: bl      0x80004000
    {
            ctx->lr = 0x8002455Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002455C:
    ctx->pc = 0x8002455Cu;
    ctx->downcount -= 13;
    // 8002455C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024560:
    ctx->pc = 0x80024560u;
    // 80024560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024564:
    ctx->pc = 0x80024564u;
    // 80024564: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024568:
    ctx->pc = 0x80024568u;
    // 80024568: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002456C:
    ctx->pc = 0x8002456Cu;
    // 8002456C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024570:
    ctx->pc = 0x80024570u;
    // 80024570: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024574:
    ctx->pc = 0x80024574u;
    // 80024574: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024578:
    ctx->pc = 0x80024578u;
    // 80024578: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8002457C:
    ctx->pc = 0x8002457Cu;
    // 8002457C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024580:
    ctx->pc = 0x80024580u;
    // 80024580: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024584:
    ctx->pc = 0x80024584u;
    // 80024584: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024588:
    ctx->pc = 0x80024588u;
    // 80024588: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002458C:
    ctx->pc = 0x8002458Cu;
    // 8002458C: bl      0x8004AF50
    {
            ctx->lr = 0x80024590u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024590:
    ctx->pc = 0x80024590u;
    ctx->downcount -= 1;
    // 80024590: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80024594:
    ctx->pc = 0x80024594u;
    ctx->downcount -= 6;
    // 80024594: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80024598:
    ctx->pc = 0x80024598u;
    // 80024598: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_8002459C:
    ctx->pc = 0x8002459Cu;
    // 8002459C: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_800245A0:
    ctx->pc = 0x800245A0u;
    // 800245A0: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_800245A4:
    ctx->pc = 0x800245A4u;
    // 800245A4: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_800245A8:
    ctx->pc = 0x800245A8u;
    // 800245A8: b       0x8002545C
    {
            goto label_8002545C;
    }

label_800245AC:
    ctx->pc = 0x800245ACu;
    ctx->downcount -= 6;
    // 800245AC: lwz     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800245B0:
    ctx->pc = 0x800245B0u;
    // 800245B0: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_800245B4:
    ctx->pc = 0x800245B4u;
    // 800245B4: ori     r9, r0, 0x00F0
    ctx->gpr[9] = ctx->gpr[0] | 0x00F0u;

label_800245B8:
    ctx->pc = 0x800245B8u;
    // 800245B8: addis   r0, r9, -1190
    ctx->gpr[0] = ctx->gpr[9] + ((u32)(s32)(-1190) << 16);

label_800245BC:
    ctx->pc = 0x800245BCu;
    // 800245BC: cmplwi  r0, 0x00F0
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00F0u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800245C0:
    ctx->pc = 0x800245C0u;
    // 800245C0: bc    4, 2, 0x80024774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024774;
        }
    }

label_800245C4:
    ctx->pc = 0x800245C4u;
    ctx->downcount -= 18;
    // 800245C4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_800245C8:
    ctx->pc = 0x800245C8u;
    // 800245C8: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800245CC:
    ctx->pc = 0x800245CCu;
    // 800245CC: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800245D0:
    ctx->pc = 0x800245D0u;
    // 800245D0: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_800245D4:
    ctx->pc = 0x800245D4u;
    // 800245D4: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_800245D8:
    ctx->pc = 0x800245D8u;
    // 800245D8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_800245DC:
    ctx->pc = 0x800245DCu;
    // 800245DC: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_800245E0:
    ctx->pc = 0x800245E0u;
    // 800245E0: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_800245E4:
    ctx->pc = 0x800245E4u;
    // 800245E4: stb     r3, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800245E8:
    ctx->pc = 0x800245E8u;
    // 800245E8: addi    r3, r1, 788
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(788);

label_800245EC:
    ctx->pc = 0x800245ECu;
    // 800245EC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_800245F0:
    ctx->pc = 0x800245F0u;
    // 800245F0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_800245F4:
    ctx->pc = 0x800245F4u;
    // 800245F4: stw     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800245F8:
    ctx->pc = 0x800245F8u;
    // 800245F8: stb     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_800245FC:
    ctx->pc = 0x800245FCu;
    // 800245FC: stw     r7, 784(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(784);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024600:
    ctx->pc = 0x80024600u;
    // 80024600: sth     r0, 810(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(810);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024604:
    ctx->pc = 0x80024604u;
    // 80024604: stw     r6, 828(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(828);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024608:
    ctx->pc = 0x80024608u;
    // 80024608: bl      0x80004000
    {
            ctx->lr = 0x8002460Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002460C:
    ctx->pc = 0x8002460Cu;
    ctx->downcount -= 4;
    // 8002460C: addi    r3, r1, 792
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(792);

label_80024610:
    ctx->pc = 0x80024610u;
    // 80024610: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80024614:
    ctx->pc = 0x80024614u;
    // 80024614: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024618:
    ctx->pc = 0x80024618u;
    // 80024618: bl      0x80004000
    {
            ctx->lr = 0x8002461Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002461C:
    ctx->pc = 0x8002461Cu;
    ctx->downcount -= 4;
    // 8002461C: addi    r3, r1, 793
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(793);

label_80024620:
    ctx->pc = 0x80024620u;
    // 80024620: addi    r4, r1, 17
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(17);

label_80024624:
    ctx->pc = 0x80024624u;
    // 80024624: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024628:
    ctx->pc = 0x80024628u;
    // 80024628: bl      0x80004000
    {
            ctx->lr = 0x8002462Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002462C:
    ctx->pc = 0x8002462Cu;
    ctx->downcount -= 25;
    // 8002462C: lwz     r31, 784(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(784);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80024630:
    ctx->pc = 0x80024630u;
    // 80024630: lwz     r12, 788(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(788);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024634:
    ctx->pc = 0x80024634u;
    // 80024634: lwz     r11, 792(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(792);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80024638:
    ctx->pc = 0x80024638u;
    // 80024638: lwz     r10, 796(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(796);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8002463C:
    ctx->pc = 0x8002463Cu;
    // 8002463C: lwz     r9, 800(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(800);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024640:
    ctx->pc = 0x80024640u;
    // 80024640: lwz     r8, 804(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(804);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024644:
    ctx->pc = 0x80024644u;
    // 80024644: lwz     r7, 808(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(808);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80024648:
    ctx->pc = 0x80024648u;
    // 80024648: lwz     r6, 812(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(812);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002464C:
    ctx->pc = 0x8002464Cu;
    // 8002464C: lwz     r5, 816(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(816);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024650:
    ctx->pc = 0x80024650u;
    // 80024650: lwz     r4, 820(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(820);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024654:
    ctx->pc = 0x80024654u;
    // 80024654: lwz     r3, 824(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(824);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024658:
    ctx->pc = 0x80024658u;
    // 80024658: lwz     r0, 828(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002465C:
    ctx->pc = 0x8002465Cu;
    // 8002465C: stw     r31, 736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(736);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024660:
    ctx->pc = 0x80024660u;
    // 80024660: stw     r12, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024664:
    ctx->pc = 0x80024664u;
    // 80024664: stw     r11, 744(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(744);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80024668:
    ctx->pc = 0x80024668u;
    // 80024668: stw     r10, 748(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(748);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8002466C:
    ctx->pc = 0x8002466Cu;
    // 8002466C: stw     r9, 752(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(752);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024670:
    ctx->pc = 0x80024670u;
    // 80024670: stw     r8, 756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(756);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024674:
    ctx->pc = 0x80024674u;
    // 80024674: stw     r7, 760(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024678:
    ctx->pc = 0x80024678u;
    // 80024678: stw     r6, 764(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(764);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002467C:
    ctx->pc = 0x8002467Cu;
    // 8002467C: stw     r5, 768(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(768);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024680:
    ctx->pc = 0x80024680u;
    // 80024680: stw     r4, 772(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(772);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80024684:
    ctx->pc = 0x80024684u;
    // 80024684: stw     r3, 776(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(776);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024688:
    ctx->pc = 0x80024688u;
    // 80024688: stw     r0, 780(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002468C:
    ctx->pc = 0x8002468Cu;
    // 8002468C: bl      0x8004AF10
    {
            ctx->lr = 0x80024690u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024690:
    ctx->pc = 0x80024690u;
    ctx->downcount -= 2;
    // 80024690: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024694:
    ctx->pc = 0x80024694u;
    // 80024694: bl      0x8004AF10
    {
            ctx->lr = 0x80024698u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024698:
    ctx->pc = 0x80024698u;
    ctx->downcount -= 7;
    // 80024698: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002469C:
    ctx->pc = 0x8002469Cu;
    // 8002469C: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_800246A0:
    ctx->pc = 0x800246A0u;
    // 800246A0: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800246A4:
    ctx->pc = 0x800246A4u;
    // 800246A4: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_800246A8:
    ctx->pc = 0x800246A8u;
    // 800246A8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800246AC:
    ctx->pc = 0x800246ACu;
    // 800246AC: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800246B0:
    ctx->pc = 0x800246B0u;
    // 800246B0: bc    4, 0, 0x800246C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800246C0;
        }
    }

label_800246B4:
    ctx->pc = 0x800246B4u;
    ctx->downcount -= 3;
    // 800246B4: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800246B8:
    ctx->pc = 0x800246B8u;
    // 800246B8: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800246BC:
    ctx->pc = 0x800246BCu;
    // 800246BC: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800246C0:
    ctx->pc = 0x800246C0u;
    ctx->downcount -= 1;
    // 800246C0: bl      0x8004AF50
    {
            ctx->lr = 0x800246C4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800246C4:
    ctx->pc = 0x800246C4u;
    ctx->downcount -= 4;
    // 800246C4: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800246C8:
    ctx->pc = 0x800246C8u;
    // 800246C8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800246CC:
    ctx->pc = 0x800246CCu;
    // 800246CC: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800246D0:
    ctx->pc = 0x800246D0u;
    // 800246D0: bc    4, 2, 0x800246E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800246E4;
        }
    }

label_800246D4:
    ctx->pc = 0x800246D4u;
    ctx->downcount -= 2;
    // 800246D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800246D8:
    ctx->pc = 0x800246D8u;
    // 800246D8: bl      0x8004AF50
    {
            ctx->lr = 0x800246DCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800246DC:
    ctx->pc = 0x800246DCu;
    ctx->downcount -= 2;
    // 800246DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800246E0:
    ctx->pc = 0x800246E0u;
    // 800246E0: b       0x8002475C
    {
            goto label_8002475C;
    }

label_800246E4:
    ctx->pc = 0x800246E4u;
    ctx->downcount -= 10;
    // 800246E4: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800246E8:
    ctx->pc = 0x800246E8u;
    // 800246E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800246EC:
    ctx->pc = 0x800246ECu;
    // 800246EC: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800246F0:
    ctx->pc = 0x800246F0u;
    // 800246F0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800246F4:
    ctx->pc = 0x800246F4u;
    // 800246F4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800246F8:
    ctx->pc = 0x800246F8u;
    // 800246F8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800246FC:
    ctx->pc = 0x800246FCu;
    // 800246FC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024700:
    ctx->pc = 0x80024700u;
    // 80024700: bl      0x80004350
    {
            ctx->lr = 0x80024704u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80024704:
    ctx->pc = 0x80024704u;
    ctx->downcount -= 10;
    // 80024704: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024708:
    ctx->pc = 0x80024708u;
    // 80024708: addi    r4, r1, 736
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(736);

label_8002470C:
    ctx->pc = 0x8002470Cu;
    // 8002470C: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024710:
    ctx->pc = 0x80024710u;
    // 80024710: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024714:
    ctx->pc = 0x80024714u;
    // 80024714: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024718:
    ctx->pc = 0x80024718u;
    // 80024718: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002471C:
    ctx->pc = 0x8002471Cu;
    // 8002471C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024720:
    ctx->pc = 0x80024720u;
    // 80024720: bl      0x80004000
    {
            ctx->lr = 0x80024724u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024724:
    ctx->pc = 0x80024724u;
    ctx->downcount -= 13;
    // 80024724: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024728:
    ctx->pc = 0x80024728u;
    // 80024728: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002472C:
    ctx->pc = 0x8002472Cu;
    // 8002472C: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024730:
    ctx->pc = 0x80024730u;
    // 80024730: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024734:
    ctx->pc = 0x80024734u;
    // 80024734: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024738:
    ctx->pc = 0x80024738u;
    // 80024738: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002473C:
    ctx->pc = 0x8002473Cu;
    // 8002473C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024740:
    ctx->pc = 0x80024740u;
    // 80024740: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024744:
    ctx->pc = 0x80024744u;
    // 80024744: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024748:
    ctx->pc = 0x80024748u;
    // 80024748: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_8002474C:
    ctx->pc = 0x8002474Cu;
    // 8002474C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024750:
    ctx->pc = 0x80024750u;
    // 80024750: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024754:
    ctx->pc = 0x80024754u;
    // 80024754: bl      0x8004AF50
    {
            ctx->lr = 0x80024758u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024758:
    ctx->pc = 0x80024758u;
    ctx->downcount -= 1;
    // 80024758: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002475C:
    ctx->pc = 0x8002475Cu;
    ctx->downcount -= 6;
    // 8002475C: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80024760:
    ctx->pc = 0x80024760u;
    // 80024760: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80024764:
    ctx->pc = 0x80024764u;
    // 80024764: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80024768:
    ctx->pc = 0x80024768u;
    // 80024768: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_8002476C:
    ctx->pc = 0x8002476Cu;
    // 8002476C: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80024770:
    ctx->pc = 0x80024770u;
    // 80024770: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024774:
    ctx->pc = 0x80024774u;
    ctx->downcount -= 4;
    // 80024774: lbz     r3, 2353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2353);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80024778:
    ctx->pc = 0x80024778u;
    // 80024778: lbz     r0, 2356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2356);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002477C:
    ctx->pc = 0x8002477Cu;
    // 8002477C: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024780:
    ctx->pc = 0x80024780u;
    // 80024780: bc    4, 2, 0x80024790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024790;
        }
    }

label_80024784:
    ctx->pc = 0x80024784u;
    ctx->downcount -= 3;
    // 80024784: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80024788:
    ctx->pc = 0x80024788u;
    // 80024788: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002478C:
    ctx->pc = 0x8002478Cu;
    // 8002478C: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024790:
    ctx->pc = 0x80024790u;
    ctx->downcount -= 5;
    // 80024790: lbz     r3, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80024794:
    ctx->pc = 0x80024794u;
    // 80024794: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024798:
    ctx->pc = 0x80024798u;
    // 80024798: stb     r0, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002479C:
    ctx->pc = 0x8002479Cu;
    // 8002479C: rlwinm. r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800247A0:
    ctx->pc = 0x800247A0u;
    // 800247A0: bc    12, 2, 0x80024950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80024950;
        }
    }

label_800247A4:
    ctx->pc = 0x800247A4u;
    ctx->downcount -= 17;
    // 800247A4: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_800247A8:
    ctx->pc = 0x800247A8u;
    // 800247A8: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800247AC:
    ctx->pc = 0x800247ACu;
    // 800247AC: addi    r3, r3, 254
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(254);

label_800247B0:
    ctx->pc = 0x800247B0u;
    // 800247B0: stw     r3, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800247B4:
    ctx->pc = 0x800247B4u;
    // 800247B4: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_800247B8:
    ctx->pc = 0x800247B8u;
    // 800247B8: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_800247BC:
    ctx->pc = 0x800247BCu;
    // 800247BC: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_800247C0:
    ctx->pc = 0x800247C0u;
    // 800247C0: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_800247C4:
    ctx->pc = 0x800247C4u;
    // 800247C4: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800247C8:
    ctx->pc = 0x800247C8u;
    // 800247C8: addi    r3, r1, 644
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(644);

label_800247CC:
    ctx->pc = 0x800247CCu;
    // 800247CC: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_800247D0:
    ctx->pc = 0x800247D0u;
    // 800247D0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_800247D4:
    ctx->pc = 0x800247D4u;
    // 800247D4: sth     r8, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_800247D8:
    ctx->pc = 0x800247D8u;
    // 800247D8: stw     r7, 640(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800247DC:
    ctx->pc = 0x800247DCu;
    // 800247DC: sth     r0, 666(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(666);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800247E0:
    ctx->pc = 0x800247E0u;
    // 800247E0: stw     r6, 684(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800247E4:
    ctx->pc = 0x800247E4u;
    // 800247E4: bl      0x80004000
    {
            ctx->lr = 0x800247E8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800247E8:
    ctx->pc = 0x800247E8u;
    ctx->downcount -= 4;
    // 800247E8: addi    r3, r1, 648
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(648);

label_800247EC:
    ctx->pc = 0x800247ECu;
    // 800247EC: addi    r4, r1, 22
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(22);

label_800247F0:
    ctx->pc = 0x800247F0u;
    // 800247F0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800247F4:
    ctx->pc = 0x800247F4u;
    // 800247F4: bl      0x80004000
    {
            ctx->lr = 0x800247F8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800247F8:
    ctx->pc = 0x800247F8u;
    ctx->downcount -= 29;
    // 800247F8: lhz     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800247FC:
    ctx->pc = 0x800247FCu;
    // 800247FC: addi    r31, r30, 2353
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(2353);

label_80024800:
    ctx->pc = 0x80024800u;
    // 80024800: sth     r0, 672(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(672);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024804:
    ctx->pc = 0x80024804u;
    // 80024804: lwz     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024808:
    ctx->pc = 0x80024808u;
    // 80024808: lwz     r11, 640(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(640);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8002480C:
    ctx->pc = 0x8002480Cu;
    // 8002480C: lwz     r10, 644(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(644);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80024810:
    ctx->pc = 0x80024810u;
    // 80024810: lwz     r9, 648(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(648);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024814:
    ctx->pc = 0x80024814u;
    // 80024814: lwz     r8, 652(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(652);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024818:
    ctx->pc = 0x80024818u;
    // 80024818: lwz     r7, 656(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(656);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002481C:
    ctx->pc = 0x8002481Cu;
    // 8002481C: lwz     r6, 660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(660);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80024820:
    ctx->pc = 0x80024820u;
    // 80024820: lwz     r5, 664(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024824:
    ctx->pc = 0x80024824u;
    // 80024824: lwz     r4, 672(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(672);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024828:
    ctx->pc = 0x80024828u;
    // 80024828: lwz     r3, 680(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(680);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002482C:
    ctx->pc = 0x8002482Cu;
    // 8002482C: lwz     r0, 684(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024830:
    ctx->pc = 0x80024830u;
    // 80024830: stw     r31, 668(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024834:
    ctx->pc = 0x80024834u;
    // 80024834: stw     r12, 676(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024838:
    ctx->pc = 0x80024838u;
    // 80024838: stw     r11, 688(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(688);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8002483C:
    ctx->pc = 0x8002483Cu;
    // 8002483C: stw     r10, 692(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80024840:
    ctx->pc = 0x80024840u;
    // 80024840: stw     r9, 696(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(696);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024844:
    ctx->pc = 0x80024844u;
    // 80024844: stw     r8, 700(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(700);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024848:
    ctx->pc = 0x80024848u;
    // 80024848: stw     r7, 704(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002484C:
    ctx->pc = 0x8002484Cu;
    // 8002484C: stw     r6, 708(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024850:
    ctx->pc = 0x80024850u;
    // 80024850: stw     r5, 712(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(712);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024854:
    ctx->pc = 0x80024854u;
    // 80024854: stw     r31, 716(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(716);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024858:
    ctx->pc = 0x80024858u;
    // 80024858: stw     r4, 720(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(720);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002485C:
    ctx->pc = 0x8002485Cu;
    // 8002485C: stw     r12, 724(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(724);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024860:
    ctx->pc = 0x80024860u;
    // 80024860: stw     r3, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024864:
    ctx->pc = 0x80024864u;
    // 80024864: stw     r0, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024868:
    ctx->pc = 0x80024868u;
    // 80024868: bl      0x8004AF10
    {
            ctx->lr = 0x8002486Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002486C:
    ctx->pc = 0x8002486Cu;
    ctx->downcount -= 2;
    // 8002486C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024870:
    ctx->pc = 0x80024870u;
    // 80024870: bl      0x8004AF10
    {
            ctx->lr = 0x80024874u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024874:
    ctx->pc = 0x80024874u;
    ctx->downcount -= 7;
    // 80024874: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024878:
    ctx->pc = 0x80024878u;
    // 80024878: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8002487C:
    ctx->pc = 0x8002487Cu;
    // 8002487C: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024880:
    ctx->pc = 0x80024880u;
    // 80024880: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80024884:
    ctx->pc = 0x80024884u;
    // 80024884: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80024888:
    ctx->pc = 0x80024888u;
    // 80024888: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002488C:
    ctx->pc = 0x8002488Cu;
    // 8002488C: bc    4, 0, 0x8002489C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002489C;
        }
    }

label_80024890:
    ctx->pc = 0x80024890u;
    ctx->downcount -= 3;
    // 80024890: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024894:
    ctx->pc = 0x80024894u;
    // 80024894: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80024898:
    ctx->pc = 0x80024898u;
    // 80024898: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002489C:
    ctx->pc = 0x8002489Cu;
    ctx->downcount -= 1;
    // 8002489C: bl      0x8004AF50
    {
            ctx->lr = 0x800248A0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800248A0:
    ctx->pc = 0x800248A0u;
    ctx->downcount -= 4;
    // 800248A0: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800248A4:
    ctx->pc = 0x800248A4u;
    // 800248A4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800248A8:
    ctx->pc = 0x800248A8u;
    // 800248A8: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800248AC:
    ctx->pc = 0x800248ACu;
    // 800248AC: bc    4, 2, 0x800248C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800248C0;
        }
    }

label_800248B0:
    ctx->pc = 0x800248B0u;
    ctx->downcount -= 2;
    // 800248B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800248B4:
    ctx->pc = 0x800248B4u;
    // 800248B4: bl      0x8004AF50
    {
            ctx->lr = 0x800248B8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800248B8:
    ctx->pc = 0x800248B8u;
    ctx->downcount -= 2;
    // 800248B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800248BC:
    ctx->pc = 0x800248BCu;
    // 800248BC: b       0x80024938
    {
            goto label_80024938;
    }

label_800248C0:
    ctx->pc = 0x800248C0u;
    ctx->downcount -= 10;
    // 800248C0: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800248C4:
    ctx->pc = 0x800248C4u;
    // 800248C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800248C8:
    ctx->pc = 0x800248C8u;
    // 800248C8: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800248CC:
    ctx->pc = 0x800248CCu;
    // 800248CC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800248D0:
    ctx->pc = 0x800248D0u;
    // 800248D0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800248D4:
    ctx->pc = 0x800248D4u;
    // 800248D4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800248D8:
    ctx->pc = 0x800248D8u;
    // 800248D8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800248DC:
    ctx->pc = 0x800248DCu;
    // 800248DC: bl      0x80004350
    {
            ctx->lr = 0x800248E0u;
            ctx->pc = 0x80004350u;
            return;
    }

label_800248E0:
    ctx->pc = 0x800248E0u;
    ctx->downcount -= 10;
    // 800248E0: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800248E4:
    ctx->pc = 0x800248E4u;
    // 800248E4: addi    r4, r1, 688
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(688);

label_800248E8:
    ctx->pc = 0x800248E8u;
    // 800248E8: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800248EC:
    ctx->pc = 0x800248ECu;
    // 800248EC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800248F0:
    ctx->pc = 0x800248F0u;
    // 800248F0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800248F4:
    ctx->pc = 0x800248F4u;
    // 800248F4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800248F8:
    ctx->pc = 0x800248F8u;
    // 800248F8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800248FC:
    ctx->pc = 0x800248FCu;
    // 800248FC: bl      0x80004000
    {
            ctx->lr = 0x80024900u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024900:
    ctx->pc = 0x80024900u;
    ctx->downcount -= 13;
    // 80024900: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024904:
    ctx->pc = 0x80024904u;
    // 80024904: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80024908:
    ctx->pc = 0x80024908u;
    // 80024908: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002490C:
    ctx->pc = 0x8002490Cu;
    // 8002490C: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024910:
    ctx->pc = 0x80024910u;
    // 80024910: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024914:
    ctx->pc = 0x80024914u;
    // 80024914: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024918:
    ctx->pc = 0x80024918u;
    // 80024918: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_8002491C:
    ctx->pc = 0x8002491Cu;
    // 8002491C: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024920:
    ctx->pc = 0x80024920u;
    // 80024920: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024924:
    ctx->pc = 0x80024924u;
    // 80024924: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024928:
    ctx->pc = 0x80024928u;
    // 80024928: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_8002492C:
    ctx->pc = 0x8002492Cu;
    // 8002492C: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024930:
    ctx->pc = 0x80024930u;
    // 80024930: bl      0x8004AF50
    {
            ctx->lr = 0x80024934u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024934:
    ctx->pc = 0x80024934u;
    ctx->downcount -= 1;
    // 80024934: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80024938:
    ctx->pc = 0x80024938u;
    ctx->downcount -= 6;
    // 80024938: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_8002493C:
    ctx->pc = 0x8002493Cu;
    // 8002493C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80024940:
    ctx->pc = 0x80024940u;
    // 80024940: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80024944:
    ctx->pc = 0x80024944u;
    // 80024944: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80024948:
    ctx->pc = 0x80024948u;
    // 80024948: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_8002494C:
    ctx->pc = 0x8002494Cu;
    // 8002494C: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024950:
    ctx->pc = 0x80024950u;
    ctx->downcount -= 20;
    // 80024950: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80024954:
    ctx->pc = 0x80024954u;
    // 80024954: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024958:
    ctx->pc = 0x80024958u;
    // 80024958: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_8002495C:
    ctx->pc = 0x8002495Cu;
    // 8002495C: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80024960:
    ctx->pc = 0x80024960u;
    // 80024960: addi    r9, r3, 254
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(254);

label_80024964:
    ctx->pc = 0x80024964u;
    // 80024964: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80024968:
    ctx->pc = 0x80024968u;
    // 80024968: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002496C:
    ctx->pc = 0x8002496Cu;
    // 8002496C: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80024970:
    ctx->pc = 0x80024970u;
    // 80024970: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80024974:
    ctx->pc = 0x80024974u;
    // 80024974: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80024978:
    ctx->pc = 0x80024978u;
    // 80024978: stb     r3, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002497C:
    ctx->pc = 0x8002497Cu;
    // 8002497C: addi    r3, r1, 596
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(596);

label_80024980:
    ctx->pc = 0x80024980u;
    // 80024980: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_80024984:
    ctx->pc = 0x80024984u;
    // 80024984: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80024988:
    ctx->pc = 0x80024988u;
    // 80024988: stw     r9, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8002498C:
    ctx->pc = 0x8002498Cu;
    // 8002498C: stb     r8, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80024990:
    ctx->pc = 0x80024990u;
    // 80024990: stw     r7, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024994:
    ctx->pc = 0x80024994u;
    // 80024994: sth     r0, 618(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(618);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024998:
    ctx->pc = 0x80024998u;
    // 80024998: stw     r6, 636(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002499C:
    ctx->pc = 0x8002499Cu;
    // 8002499C: bl      0x80004000
    {
            ctx->lr = 0x800249A0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800249A0:
    ctx->pc = 0x800249A0u;
    ctx->downcount -= 4;
    // 800249A0: addi    r3, r1, 600
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(600);

label_800249A4:
    ctx->pc = 0x800249A4u;
    // 800249A4: addi    r4, r1, 14
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(14);

label_800249A8:
    ctx->pc = 0x800249A8u;
    // 800249A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800249AC:
    ctx->pc = 0x800249ACu;
    // 800249AC: bl      0x80004000
    {
            ctx->lr = 0x800249B0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800249B0:
    ctx->pc = 0x800249B0u;
    ctx->downcount -= 4;
    // 800249B0: addi    r3, r1, 601
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(601);

label_800249B4:
    ctx->pc = 0x800249B4u;
    // 800249B4: addi    r4, r1, 15
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(15);

label_800249B8:
    ctx->pc = 0x800249B8u;
    // 800249B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800249BC:
    ctx->pc = 0x800249BCu;
    // 800249BC: bl      0x80004000
    {
            ctx->lr = 0x800249C0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800249C0:
    ctx->pc = 0x800249C0u;
    ctx->downcount -= 25;
    // 800249C0: lwz     r31, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800249C4:
    ctx->pc = 0x800249C4u;
    // 800249C4: lwz     r12, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800249C8:
    ctx->pc = 0x800249C8u;
    // 800249C8: lwz     r11, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_800249CC:
    ctx->pc = 0x800249CCu;
    // 800249CC: lwz     r10, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800249D0:
    ctx->pc = 0x800249D0u;
    // 800249D0: lwz     r9, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800249D4:
    ctx->pc = 0x800249D4u;
    // 800249D4: lwz     r8, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800249D8:
    ctx->pc = 0x800249D8u;
    // 800249D8: lwz     r7, 616(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(616);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800249DC:
    ctx->pc = 0x800249DCu;
    // 800249DC: lwz     r6, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800249E0:
    ctx->pc = 0x800249E0u;
    // 800249E0: lwz     r5, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800249E4:
    ctx->pc = 0x800249E4u;
    // 800249E4: lwz     r4, 628(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(628);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800249E8:
    ctx->pc = 0x800249E8u;
    // 800249E8: lwz     r3, 632(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800249EC:
    ctx->pc = 0x800249ECu;
    // 800249EC: lwz     r0, 636(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800249F0:
    ctx->pc = 0x800249F0u;
    // 800249F0: stw     r31, 544(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800249F4:
    ctx->pc = 0x800249F4u;
    // 800249F4: stw     r12, 548(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_800249F8:
    ctx->pc = 0x800249F8u;
    // 800249F8: stw     r11, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_800249FC:
    ctx->pc = 0x800249FCu;
    // 800249FC: stw     r10, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80024A00:
    ctx->pc = 0x80024A00u;
    // 80024A00: stw     r9, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024A04:
    ctx->pc = 0x80024A04u;
    // 80024A04: stw     r8, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024A08:
    ctx->pc = 0x80024A08u;
    // 80024A08: stw     r7, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024A0C:
    ctx->pc = 0x80024A0Cu;
    // 80024A0C: stw     r6, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024A10:
    ctx->pc = 0x80024A10u;
    // 80024A10: stw     r5, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024A14:
    ctx->pc = 0x80024A14u;
    // 80024A14: stw     r4, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80024A18:
    ctx->pc = 0x80024A18u;
    // 80024A18: stw     r3, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024A1C:
    ctx->pc = 0x80024A1Cu;
    // 80024A1C: stw     r0, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024A20:
    ctx->pc = 0x80024A20u;
    // 80024A20: bl      0x8004AF10
    {
            ctx->lr = 0x80024A24u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024A24:
    ctx->pc = 0x80024A24u;
    ctx->downcount -= 2;
    // 80024A24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024A28:
    ctx->pc = 0x80024A28u;
    // 80024A28: bl      0x8004AF10
    {
            ctx->lr = 0x80024A2Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024A2C:
    ctx->pc = 0x80024A2Cu;
    ctx->downcount -= 7;
    // 80024A2C: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024A30:
    ctx->pc = 0x80024A30u;
    // 80024A30: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80024A34:
    ctx->pc = 0x80024A34u;
    // 80024A34: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024A38:
    ctx->pc = 0x80024A38u;
    // 80024A38: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80024A3C:
    ctx->pc = 0x80024A3Cu;
    // 80024A3C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80024A40:
    ctx->pc = 0x80024A40u;
    // 80024A40: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80024A44:
    ctx->pc = 0x80024A44u;
    // 80024A44: bc    4, 0, 0x80024A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024A54;
        }
    }

label_80024A48:
    ctx->pc = 0x80024A48u;
    ctx->downcount -= 3;
    // 80024A48: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024A4C:
    ctx->pc = 0x80024A4Cu;
    // 80024A4C: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80024A50:
    ctx->pc = 0x80024A50u;
    // 80024A50: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024A54:
    ctx->pc = 0x80024A54u;
    ctx->downcount -= 1;
    // 80024A54: bl      0x8004AF50
    {
            ctx->lr = 0x80024A58u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024A58:
    ctx->pc = 0x80024A58u;
    ctx->downcount -= 4;
    // 80024A58: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024A5C:
    ctx->pc = 0x80024A5Cu;
    // 80024A5C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024A60:
    ctx->pc = 0x80024A60u;
    // 80024A60: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024A64:
    ctx->pc = 0x80024A64u;
    // 80024A64: bc    4, 2, 0x80024A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024A78;
        }
    }

label_80024A68:
    ctx->pc = 0x80024A68u;
    ctx->downcount -= 2;
    // 80024A68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024A6C:
    ctx->pc = 0x80024A6Cu;
    // 80024A6C: bl      0x8004AF50
    {
            ctx->lr = 0x80024A70u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024A70:
    ctx->pc = 0x80024A70u;
    ctx->downcount -= 2;
    // 80024A70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80024A74:
    ctx->pc = 0x80024A74u;
    // 80024A74: b       0x80024AF0
    {
            goto label_80024AF0;
    }

label_80024A78:
    ctx->pc = 0x80024A78u;
    ctx->downcount -= 10;
    // 80024A78: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024A7C:
    ctx->pc = 0x80024A7Cu;
    // 80024A7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80024A80:
    ctx->pc = 0x80024A80u;
    // 80024A80: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024A84:
    ctx->pc = 0x80024A84u;
    // 80024A84: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024A88:
    ctx->pc = 0x80024A88u;
    // 80024A88: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024A8C:
    ctx->pc = 0x80024A8Cu;
    // 80024A8C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024A90:
    ctx->pc = 0x80024A90u;
    // 80024A90: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024A94:
    ctx->pc = 0x80024A94u;
    // 80024A94: bl      0x80004350
    {
            ctx->lr = 0x80024A98u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80024A98:
    ctx->pc = 0x80024A98u;
    ctx->downcount -= 10;
    // 80024A98: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024A9C:
    ctx->pc = 0x80024A9Cu;
    // 80024A9C: addi    r4, r1, 544
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(544);

label_80024AA0:
    ctx->pc = 0x80024AA0u;
    // 80024AA0: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024AA4:
    ctx->pc = 0x80024AA4u;
    // 80024AA4: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024AA8:
    ctx->pc = 0x80024AA8u;
    // 80024AA8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024AAC:
    ctx->pc = 0x80024AACu;
    // 80024AAC: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024AB0:
    ctx->pc = 0x80024AB0u;
    // 80024AB0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024AB4:
    ctx->pc = 0x80024AB4u;
    // 80024AB4: bl      0x80004000
    {
            ctx->lr = 0x80024AB8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024AB8:
    ctx->pc = 0x80024AB8u;
    ctx->downcount -= 13;
    // 80024AB8: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024ABC:
    ctx->pc = 0x80024ABCu;
    // 80024ABC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024AC0:
    ctx->pc = 0x80024AC0u;
    // 80024AC0: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024AC4:
    ctx->pc = 0x80024AC4u;
    // 80024AC4: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024AC8:
    ctx->pc = 0x80024AC8u;
    // 80024AC8: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024ACC:
    ctx->pc = 0x80024ACCu;
    // 80024ACC: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024AD0:
    ctx->pc = 0x80024AD0u;
    // 80024AD0: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024AD4:
    ctx->pc = 0x80024AD4u;
    // 80024AD4: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024AD8:
    ctx->pc = 0x80024AD8u;
    // 80024AD8: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024ADC:
    ctx->pc = 0x80024ADCu;
    // 80024ADC: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024AE0:
    ctx->pc = 0x80024AE0u;
    // 80024AE0: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024AE4:
    ctx->pc = 0x80024AE4u;
    // 80024AE4: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024AE8:
    ctx->pc = 0x80024AE8u;
    // 80024AE8: bl      0x8004AF50
    {
            ctx->lr = 0x80024AECu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024AEC:
    ctx->pc = 0x80024AECu;
    ctx->downcount -= 1;
    // 80024AEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80024AF0:
    ctx->pc = 0x80024AF0u;
    ctx->downcount -= 6;
    // 80024AF0: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80024AF4:
    ctx->pc = 0x80024AF4u;
    // 80024AF4: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80024AF8:
    ctx->pc = 0x80024AF8u;
    // 80024AF8: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80024AFC:
    ctx->pc = 0x80024AFCu;
    // 80024AFC: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80024B00:
    ctx->pc = 0x80024B00u;
    // 80024B00: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80024B04:
    ctx->pc = 0x80024B04u;
    // 80024B04: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024B08:
    ctx->pc = 0x80024B08u;
    ctx->downcount -= 2;
    // 80024B08: cmpwi   r4, -3
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024B0C:
    ctx->pc = 0x80024B0Cu;
    // 80024B0C: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_80024B10:
    ctx->pc = 0x80024B10u;
    ctx->downcount -= 3;
    // 80024B10: lbz     r3, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80024B14:
    ctx->pc = 0x80024B14u;
    // 80024B14: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024B18:
    ctx->pc = 0x80024B18u;
    // 80024B18: bc    12, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_80024B1C:
    ctx->pc = 0x80024B1Cu;
    ctx->downcount -= 5;
    // 80024B1C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024B20:
    ctx->pc = 0x80024B20u;
    // 80024B20: stb     r0, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024B24:
    ctx->pc = 0x80024B24u;
    // 80024B24: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80024B28:
    ctx->pc = 0x80024B28u;
    // 80024B28: cmplwi  r0, 0x0001
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

label_80024B2C:
    ctx->pc = 0x80024B2Cu;
    // 80024B2C: bc    4, 1, 0x80024B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024B40;
        }
    }

label_80024B30:
    ctx->pc = 0x80024B30u;
    ctx->downcount -= 4;
    // 80024B30: lis     r3, 1190
    ctx->gpr[3] = ((u32)(s32)(1190) << 16);

label_80024B34:
    ctx->pc = 0x80024B34u;
    // 80024B34: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80024B38:
    ctx->pc = 0x80024B38u;
    // 80024B38: stw     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024B3C:
    ctx->pc = 0x80024B3Cu;
    // 80024B3C: b       0x80024B4C
    {
            goto label_80024B4C;
    }

label_80024B40:
    ctx->pc = 0x80024B40u;
    ctx->downcount -= 3;
    // 80024B40: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_80024B44:
    ctx->pc = 0x80024B44u;
    // 80024B44: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80024B48:
    ctx->pc = 0x80024B48u;
    // 80024B48: stw     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024B4C:
    ctx->pc = 0x80024B4Cu;
    ctx->downcount -= 15;
    // 80024B4C: lwz     r3, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024B50:
    ctx->pc = 0x80024B50u;
    // 80024B50: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80024B54:
    ctx->pc = 0x80024B54u;
    // 80024B54: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80024B58:
    ctx->pc = 0x80024B58u;
    // 80024B58: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_80024B5C:
    ctx->pc = 0x80024B5Cu;
    // 80024B5C: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_80024B60:
    ctx->pc = 0x80024B60u;
    // 80024B60: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80024B64:
    ctx->pc = 0x80024B64u;
    // 80024B64: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024B68:
    ctx->pc = 0x80024B68u;
    // 80024B68: addi    r3, r1, 452
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(452);

label_80024B6C:
    ctx->pc = 0x80024B6Cu;
    // 80024B6C: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_80024B70:
    ctx->pc = 0x80024B70u;
    // 80024B70: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80024B74:
    ctx->pc = 0x80024B74u;
    // 80024B74: sth     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80024B78:
    ctx->pc = 0x80024B78u;
    // 80024B78: stw     r7, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024B7C:
    ctx->pc = 0x80024B7Cu;
    // 80024B7C: sth     r0, 474(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(474);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024B80:
    ctx->pc = 0x80024B80u;
    // 80024B80: stw     r6, 492(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024B84:
    ctx->pc = 0x80024B84u;
    // 80024B84: bl      0x80004000
    {
            ctx->lr = 0x80024B88u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024B88:
    ctx->pc = 0x80024B88u;
    ctx->downcount -= 4;
    // 80024B88: addi    r3, r1, 456
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(456);

label_80024B8C:
    ctx->pc = 0x80024B8Cu;
    // 80024B8C: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80024B90:
    ctx->pc = 0x80024B90u;
    // 80024B90: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80024B94:
    ctx->pc = 0x80024B94u;
    // 80024B94: bl      0x80004000
    {
            ctx->lr = 0x80024B98u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024B98:
    ctx->pc = 0x80024B98u;
    ctx->downcount -= 29;
    // 80024B98: lhz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80024B9C:
    ctx->pc = 0x80024B9Cu;
    // 80024B9C: addi    r31, r30, 2353
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(2353);

label_80024BA0:
    ctx->pc = 0x80024BA0u;
    // 80024BA0: sth     r0, 480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024BA4:
    ctx->pc = 0x80024BA4u;
    // 80024BA4: lwz     r12, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024BA8:
    ctx->pc = 0x80024BA8u;
    // 80024BA8: lwz     r11, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80024BAC:
    ctx->pc = 0x80024BACu;
    // 80024BAC: lwz     r10, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80024BB0:
    ctx->pc = 0x80024BB0u;
    // 80024BB0: lwz     r9, 456(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024BB4:
    ctx->pc = 0x80024BB4u;
    // 80024BB4: lwz     r8, 460(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(460);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024BB8:
    ctx->pc = 0x80024BB8u;
    // 80024BB8: lwz     r7, 464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80024BBC:
    ctx->pc = 0x80024BBCu;
    // 80024BBC: lwz     r6, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80024BC0:
    ctx->pc = 0x80024BC0u;
    // 80024BC0: lwz     r5, 472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024BC4:
    ctx->pc = 0x80024BC4u;
    // 80024BC4: lwz     r4, 480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024BC8:
    ctx->pc = 0x80024BC8u;
    // 80024BC8: lwz     r3, 488(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024BCC:
    ctx->pc = 0x80024BCCu;
    // 80024BCC: lwz     r0, 492(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024BD0:
    ctx->pc = 0x80024BD0u;
    // 80024BD0: stw     r31, 476(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024BD4:
    ctx->pc = 0x80024BD4u;
    // 80024BD4: stw     r12, 484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024BD8:
    ctx->pc = 0x80024BD8u;
    // 80024BD8: stw     r11, 496(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80024BDC:
    ctx->pc = 0x80024BDCu;
    // 80024BDC: stw     r10, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80024BE0:
    ctx->pc = 0x80024BE0u;
    // 80024BE0: stw     r9, 504(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024BE4:
    ctx->pc = 0x80024BE4u;
    // 80024BE4: stw     r8, 508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024BE8:
    ctx->pc = 0x80024BE8u;
    // 80024BE8: stw     r7, 512(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024BEC:
    ctx->pc = 0x80024BECu;
    // 80024BEC: stw     r6, 516(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024BF0:
    ctx->pc = 0x80024BF0u;
    // 80024BF0: stw     r5, 520(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024BF4:
    ctx->pc = 0x80024BF4u;
    // 80024BF4: stw     r31, 524(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024BF8:
    ctx->pc = 0x80024BF8u;
    // 80024BF8: stw     r4, 528(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80024BFC:
    ctx->pc = 0x80024BFCu;
    // 80024BFC: stw     r12, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024C00:
    ctx->pc = 0x80024C00u;
    // 80024C00: stw     r3, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024C04:
    ctx->pc = 0x80024C04u;
    // 80024C04: stw     r0, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024C08:
    ctx->pc = 0x80024C08u;
    // 80024C08: bl      0x8004AF10
    {
            ctx->lr = 0x80024C0Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024C0C:
    ctx->pc = 0x80024C0Cu;
    ctx->downcount -= 2;
    // 80024C0C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024C10:
    ctx->pc = 0x80024C10u;
    // 80024C10: bl      0x8004AF10
    {
            ctx->lr = 0x80024C14u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024C14:
    ctx->pc = 0x80024C14u;
    ctx->downcount -= 7;
    // 80024C14: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024C18:
    ctx->pc = 0x80024C18u;
    // 80024C18: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80024C1C:
    ctx->pc = 0x80024C1Cu;
    // 80024C1C: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024C20:
    ctx->pc = 0x80024C20u;
    // 80024C20: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80024C24:
    ctx->pc = 0x80024C24u;
    // 80024C24: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80024C28:
    ctx->pc = 0x80024C28u;
    // 80024C28: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80024C2C:
    ctx->pc = 0x80024C2Cu;
    // 80024C2C: bc    4, 0, 0x80024C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024C3C;
        }
    }

label_80024C30:
    ctx->pc = 0x80024C30u;
    ctx->downcount -= 3;
    // 80024C30: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024C34:
    ctx->pc = 0x80024C34u;
    // 80024C34: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80024C38:
    ctx->pc = 0x80024C38u;
    // 80024C38: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024C3C:
    ctx->pc = 0x80024C3Cu;
    ctx->downcount -= 1;
    // 80024C3C: bl      0x8004AF50
    {
            ctx->lr = 0x80024C40u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024C40:
    ctx->pc = 0x80024C40u;
    ctx->downcount -= 4;
    // 80024C40: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024C44:
    ctx->pc = 0x80024C44u;
    // 80024C44: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024C48:
    ctx->pc = 0x80024C48u;
    // 80024C48: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024C4C:
    ctx->pc = 0x80024C4Cu;
    // 80024C4C: bc    4, 2, 0x80024C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024C60;
        }
    }

label_80024C50:
    ctx->pc = 0x80024C50u;
    ctx->downcount -= 2;
    // 80024C50: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80024C54:
    ctx->pc = 0x80024C54u;
    // 80024C54: bl      0x8004AF50
    {
            ctx->lr = 0x80024C58u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024C58:
    ctx->pc = 0x80024C58u;
    ctx->downcount -= 2;
    // 80024C58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80024C5C:
    ctx->pc = 0x80024C5Cu;
    // 80024C5C: b       0x80024CD8
    {
            goto label_80024CD8;
    }

label_80024C60:
    ctx->pc = 0x80024C60u;
    ctx->downcount -= 10;
    // 80024C60: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024C64:
    ctx->pc = 0x80024C64u;
    // 80024C64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80024C68:
    ctx->pc = 0x80024C68u;
    // 80024C68: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024C6C:
    ctx->pc = 0x80024C6Cu;
    // 80024C6C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024C70:
    ctx->pc = 0x80024C70u;
    // 80024C70: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024C74:
    ctx->pc = 0x80024C74u;
    // 80024C74: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024C78:
    ctx->pc = 0x80024C78u;
    // 80024C78: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024C7C:
    ctx->pc = 0x80024C7Cu;
    // 80024C7C: bl      0x80004350
    {
            ctx->lr = 0x80024C80u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80024C80:
    ctx->pc = 0x80024C80u;
    ctx->downcount -= 10;
    // 80024C80: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024C84:
    ctx->pc = 0x80024C84u;
    // 80024C84: addi    r4, r1, 496
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(496);

label_80024C88:
    ctx->pc = 0x80024C88u;
    // 80024C88: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024C8C:
    ctx->pc = 0x80024C8Cu;
    // 80024C8C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024C90:
    ctx->pc = 0x80024C90u;
    // 80024C90: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024C94:
    ctx->pc = 0x80024C94u;
    // 80024C94: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024C98:
    ctx->pc = 0x80024C98u;
    // 80024C98: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024C9C:
    ctx->pc = 0x80024C9Cu;
    // 80024C9C: bl      0x80004000
    {
            ctx->lr = 0x80024CA0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024CA0:
    ctx->pc = 0x80024CA0u;
    ctx->downcount -= 13;
    // 80024CA0: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024CA4:
    ctx->pc = 0x80024CA4u;
    // 80024CA4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80024CA8:
    ctx->pc = 0x80024CA8u;
    // 80024CA8: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024CAC:
    ctx->pc = 0x80024CACu;
    // 80024CAC: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024CB0:
    ctx->pc = 0x80024CB0u;
    // 80024CB0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024CB4:
    ctx->pc = 0x80024CB4u;
    // 80024CB4: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024CB8:
    ctx->pc = 0x80024CB8u;
    // 80024CB8: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024CBC:
    ctx->pc = 0x80024CBCu;
    // 80024CBC: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024CC0:
    ctx->pc = 0x80024CC0u;
    // 80024CC0: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024CC4:
    ctx->pc = 0x80024CC4u;
    // 80024CC4: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024CC8:
    ctx->pc = 0x80024CC8u;
    // 80024CC8: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024CCC:
    ctx->pc = 0x80024CCCu;
    // 80024CCC: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024CD0:
    ctx->pc = 0x80024CD0u;
    // 80024CD0: bl      0x8004AF50
    {
            ctx->lr = 0x80024CD4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024CD4:
    ctx->pc = 0x80024CD4u;
    ctx->downcount -= 1;
    // 80024CD4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80024CD8:
    ctx->pc = 0x80024CD8u;
    ctx->downcount -= 6;
    // 80024CD8: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80024CDC:
    ctx->pc = 0x80024CDCu;
    // 80024CDC: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80024CE0:
    ctx->pc = 0x80024CE0u;
    // 80024CE0: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80024CE4:
    ctx->pc = 0x80024CE4u;
    // 80024CE4: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80024CE8:
    ctx->pc = 0x80024CE8u;
    // 80024CE8: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80024CEC:
    ctx->pc = 0x80024CECu;
    // 80024CEC: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024CF0:
    ctx->pc = 0x80024CF0u;
    ctx->downcount -= 2;
    // 80024CF0: cmpwi   r4, 0
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

label_80024CF4:
    ctx->pc = 0x80024CF4u;
    // 80024CF4: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_80024CF8:
    ctx->pc = 0x80024CF8u;
    ctx->downcount -= 5;
    // 80024CF8: lbz     r3, 2354(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2354);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80024CFC:
    ctx->pc = 0x80024CFCu;
    // 80024CFC: addi    r0, r3, 251
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(251);

label_80024D00:
    ctx->pc = 0x80024D00u;
    // 80024D00: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80024D04:
    ctx->pc = 0x80024D04u;
    // 80024D04: cmplwi  r0, 0x0002
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

label_80024D08:
    ctx->pc = 0x80024D08u;
    // 80024D08: bc    4, 1, 0x80024D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024D14;
        }
    }

label_80024D0C:
    ctx->pc = 0x80024D0Cu;
    ctx->downcount -= 2;
    // 80024D0C: cmplwi  r3, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024D10:
    ctx->pc = 0x80024D10u;
    // 80024D10: bc    4, 2, 0x80024ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024ECC;
        }
    }

label_80024D14:
    ctx->pc = 0x80024D14u;
    ctx->downcount -= 20;
    // 80024D14: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80024D18:
    ctx->pc = 0x80024D18u;
    // 80024D18: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024D1C:
    ctx->pc = 0x80024D1Cu;
    // 80024D1C: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_80024D20:
    ctx->pc = 0x80024D20u;
    // 80024D20: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80024D24:
    ctx->pc = 0x80024D24u;
    // 80024D24: addi    r9, r3, 254
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(254);

label_80024D28:
    ctx->pc = 0x80024D28u;
    // 80024D28: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80024D2C:
    ctx->pc = 0x80024D2Cu;
    // 80024D2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80024D30:
    ctx->pc = 0x80024D30u;
    // 80024D30: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80024D34:
    ctx->pc = 0x80024D34u;
    // 80024D34: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80024D38:
    ctx->pc = 0x80024D38u;
    // 80024D38: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80024D3C:
    ctx->pc = 0x80024D3Cu;
    // 80024D3C: stb     r3, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80024D40:
    ctx->pc = 0x80024D40u;
    // 80024D40: addi    r3, r1, 404
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(404);

label_80024D44:
    ctx->pc = 0x80024D44u;
    // 80024D44: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_80024D48:
    ctx->pc = 0x80024D48u;
    // 80024D48: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80024D4C:
    ctx->pc = 0x80024D4Cu;
    // 80024D4C: stw     r9, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024D50:
    ctx->pc = 0x80024D50u;
    // 80024D50: stb     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80024D54:
    ctx->pc = 0x80024D54u;
    // 80024D54: stw     r7, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024D58:
    ctx->pc = 0x80024D58u;
    // 80024D58: sth     r0, 426(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(426);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024D5C:
    ctx->pc = 0x80024D5Cu;
    // 80024D5C: stw     r6, 444(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024D60:
    ctx->pc = 0x80024D60u;
    // 80024D60: bl      0x80004000
    {
            ctx->lr = 0x80024D64u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024D64:
    ctx->pc = 0x80024D64u;
    ctx->downcount -= 4;
    // 80024D64: addi    r3, r1, 408
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(408);

label_80024D68:
    ctx->pc = 0x80024D68u;
    // 80024D68: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80024D6C:
    ctx->pc = 0x80024D6Cu;
    // 80024D6C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024D70:
    ctx->pc = 0x80024D70u;
    // 80024D70: bl      0x80004000
    {
            ctx->lr = 0x80024D74u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024D74:
    ctx->pc = 0x80024D74u;
    ctx->downcount -= 4;
    // 80024D74: addi    r3, r1, 409
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(409);

label_80024D78:
    ctx->pc = 0x80024D78u;
    // 80024D78: addi    r4, r1, 13
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(13);

label_80024D7C:
    ctx->pc = 0x80024D7Cu;
    // 80024D7C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024D80:
    ctx->pc = 0x80024D80u;
    // 80024D80: bl      0x80004000
    {
            ctx->lr = 0x80024D84u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024D84:
    ctx->pc = 0x80024D84u;
    ctx->downcount -= 25;
    // 80024D84: lwz     r31, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80024D88:
    ctx->pc = 0x80024D88u;
    // 80024D88: lwz     r12, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024D8C:
    ctx->pc = 0x80024D8Cu;
    // 80024D8C: lwz     r11, 408(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80024D90:
    ctx->pc = 0x80024D90u;
    // 80024D90: lwz     r10, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80024D94:
    ctx->pc = 0x80024D94u;
    // 80024D94: lwz     r9, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024D98:
    ctx->pc = 0x80024D98u;
    // 80024D98: lwz     r8, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024D9C:
    ctx->pc = 0x80024D9Cu;
    // 80024D9C: lwz     r7, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80024DA0:
    ctx->pc = 0x80024DA0u;
    // 80024DA0: lwz     r6, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80024DA4:
    ctx->pc = 0x80024DA4u;
    // 80024DA4: lwz     r5, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024DA8:
    ctx->pc = 0x80024DA8u;
    // 80024DA8: lwz     r4, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024DAC:
    ctx->pc = 0x80024DACu;
    // 80024DAC: lwz     r3, 440(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024DB0:
    ctx->pc = 0x80024DB0u;
    // 80024DB0: lwz     r0, 444(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024DB4:
    ctx->pc = 0x80024DB4u;
    // 80024DB4: stw     r31, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024DB8:
    ctx->pc = 0x80024DB8u;
    // 80024DB8: stw     r12, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024DBC:
    ctx->pc = 0x80024DBCu;
    // 80024DBC: stw     r11, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80024DC0:
    ctx->pc = 0x80024DC0u;
    // 80024DC0: stw     r10, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80024DC4:
    ctx->pc = 0x80024DC4u;
    // 80024DC4: stw     r9, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024DC8:
    ctx->pc = 0x80024DC8u;
    // 80024DC8: stw     r8, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024DCC:
    ctx->pc = 0x80024DCCu;
    // 80024DCC: stw     r7, 376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024DD0:
    ctx->pc = 0x80024DD0u;
    // 80024DD0: stw     r6, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024DD4:
    ctx->pc = 0x80024DD4u;
    // 80024DD4: stw     r5, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024DD8:
    ctx->pc = 0x80024DD8u;
    // 80024DD8: stw     r4, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80024DDC:
    ctx->pc = 0x80024DDCu;
    // 80024DDC: stw     r3, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024DE0:
    ctx->pc = 0x80024DE0u;
    // 80024DE0: stw     r0, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024DE4:
    ctx->pc = 0x80024DE4u;
    // 80024DE4: bl      0x8004AF10
    {
            ctx->lr = 0x80024DE8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024DE8:
    ctx->pc = 0x80024DE8u;
    ctx->downcount -= 2;
    // 80024DE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024DEC:
    ctx->pc = 0x80024DECu;
    // 80024DEC: bl      0x8004AF10
    {
            ctx->lr = 0x80024DF0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024DF0:
    ctx->pc = 0x80024DF0u;
    ctx->downcount -= 7;
    // 80024DF0: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024DF4:
    ctx->pc = 0x80024DF4u;
    // 80024DF4: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80024DF8:
    ctx->pc = 0x80024DF8u;
    // 80024DF8: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024DFC:
    ctx->pc = 0x80024DFCu;
    // 80024DFC: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80024E00:
    ctx->pc = 0x80024E00u;
    // 80024E00: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80024E04:
    ctx->pc = 0x80024E04u;
    // 80024E04: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80024E08:
    ctx->pc = 0x80024E08u;
    // 80024E08: bc    4, 0, 0x80024E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024E18;
        }
    }

label_80024E0C:
    ctx->pc = 0x80024E0Cu;
    ctx->downcount -= 3;
    // 80024E0C: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024E10:
    ctx->pc = 0x80024E10u;
    // 80024E10: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80024E14:
    ctx->pc = 0x80024E14u;
    // 80024E14: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024E18:
    ctx->pc = 0x80024E18u;
    ctx->downcount -= 1;
    // 80024E18: bl      0x8004AF50
    {
            ctx->lr = 0x80024E1Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024E1C:
    ctx->pc = 0x80024E1Cu;
    ctx->downcount -= 4;
    // 80024E1C: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024E20:
    ctx->pc = 0x80024E20u;
    // 80024E20: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024E24:
    ctx->pc = 0x80024E24u;
    // 80024E24: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024E28:
    ctx->pc = 0x80024E28u;
    // 80024E28: bc    4, 2, 0x80024E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024E3C;
        }
    }

label_80024E2C:
    ctx->pc = 0x80024E2Cu;
    ctx->downcount -= 2;
    // 80024E2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024E30:
    ctx->pc = 0x80024E30u;
    // 80024E30: bl      0x8004AF50
    {
            ctx->lr = 0x80024E34u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024E34:
    ctx->pc = 0x80024E34u;
    ctx->downcount -= 2;
    // 80024E34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80024E38:
    ctx->pc = 0x80024E38u;
    // 80024E38: b       0x80024EB4
    {
            goto label_80024EB4;
    }

label_80024E3C:
    ctx->pc = 0x80024E3Cu;
    ctx->downcount -= 10;
    // 80024E3C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024E40:
    ctx->pc = 0x80024E40u;
    // 80024E40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80024E44:
    ctx->pc = 0x80024E44u;
    // 80024E44: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024E48:
    ctx->pc = 0x80024E48u;
    // 80024E48: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024E4C:
    ctx->pc = 0x80024E4Cu;
    // 80024E4C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024E50:
    ctx->pc = 0x80024E50u;
    // 80024E50: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024E54:
    ctx->pc = 0x80024E54u;
    // 80024E54: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024E58:
    ctx->pc = 0x80024E58u;
    // 80024E58: bl      0x80004350
    {
            ctx->lr = 0x80024E5Cu;
            ctx->pc = 0x80004350u;
            return;
    }

label_80024E5C:
    ctx->pc = 0x80024E5Cu;
    ctx->downcount -= 10;
    // 80024E5C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024E60:
    ctx->pc = 0x80024E60u;
    // 80024E60: addi    r4, r1, 352
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(352);

label_80024E64:
    ctx->pc = 0x80024E64u;
    // 80024E64: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024E68:
    ctx->pc = 0x80024E68u;
    // 80024E68: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80024E6C:
    ctx->pc = 0x80024E6Cu;
    // 80024E6C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024E70:
    ctx->pc = 0x80024E70u;
    // 80024E70: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80024E74:
    ctx->pc = 0x80024E74u;
    // 80024E74: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80024E78:
    ctx->pc = 0x80024E78u;
    // 80024E78: bl      0x80004000
    {
            ctx->lr = 0x80024E7Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024E7C:
    ctx->pc = 0x80024E7Cu;
    ctx->downcount -= 13;
    // 80024E7C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024E80:
    ctx->pc = 0x80024E80u;
    // 80024E80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024E84:
    ctx->pc = 0x80024E84u;
    // 80024E84: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024E88:
    ctx->pc = 0x80024E88u;
    // 80024E88: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024E8C:
    ctx->pc = 0x80024E8Cu;
    // 80024E8C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80024E90:
    ctx->pc = 0x80024E90u;
    // 80024E90: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80024E94:
    ctx->pc = 0x80024E94u;
    // 80024E94: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80024E98:
    ctx->pc = 0x80024E98u;
    // 80024E98: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80024E9C:
    ctx->pc = 0x80024E9Cu;
    // 80024E9C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80024EA0:
    ctx->pc = 0x80024EA0u;
    // 80024EA0: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80024EA4:
    ctx->pc = 0x80024EA4u;
    // 80024EA4: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80024EA8:
    ctx->pc = 0x80024EA8u;
    // 80024EA8: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024EAC:
    ctx->pc = 0x80024EACu;
    // 80024EAC: bl      0x8004AF50
    {
            ctx->lr = 0x80024EB0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024EB0:
    ctx->pc = 0x80024EB0u;
    ctx->downcount -= 1;
    // 80024EB0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80024EB4:
    ctx->pc = 0x80024EB4u;
    ctx->downcount -= 6;
    // 80024EB4: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80024EB8:
    ctx->pc = 0x80024EB8u;
    // 80024EB8: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80024EBC:
    ctx->pc = 0x80024EBCu;
    // 80024EBC: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80024EC0:
    ctx->pc = 0x80024EC0u;
    // 80024EC0: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80024EC4:
    ctx->pc = 0x80024EC4u;
    // 80024EC4: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80024EC8:
    ctx->pc = 0x80024EC8u;
    // 80024EC8: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024ECC:
    ctx->pc = 0x80024ECCu;
    ctx->downcount -= 2;
    // 80024ECC: li      r4, -3
    ctx->gpr[4] = (u32)(s32)(-3);

label_80024ED0:
    ctx->pc = 0x80024ED0u;
    // 80024ED0: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80024ED4:
    ctx->pc = 0x80024ED4u;
    ctx->downcount -= 2;
    // 80024ED4: cmpwi   r4, 0
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

label_80024ED8:
    ctx->pc = 0x80024ED8u;
    // 80024ED8: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_80024EDC:
    ctx->pc = 0x80024EDCu;
    ctx->downcount -= 20;
    // 80024EDC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80024EE0:
    ctx->pc = 0x80024EE0u;
    // 80024EE0: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80024EE4:
    ctx->pc = 0x80024EE4u;
    // 80024EE4: lis     r3, 1190
    ctx->gpr[3] = ((u32)(s32)(1190) << 16);

label_80024EE8:
    ctx->pc = 0x80024EE8u;
    // 80024EE8: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80024EEC:
    ctx->pc = 0x80024EECu;
    // 80024EEC: lbz     r4, 2356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2356);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80024EF0:
    ctx->pc = 0x80024EF0u;
    // 80024EF0: addi    r9, r3, 254
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(254);

label_80024EF4:
    ctx->pc = 0x80024EF4u;
    // 80024EF4: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80024EF8:
    ctx->pc = 0x80024EF8u;
    // 80024EF8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80024EFC:
    ctx->pc = 0x80024EFCu;
    // 80024EFC: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80024F00:
    ctx->pc = 0x80024F00u;
    // 80024F00: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80024F04:
    ctx->pc = 0x80024F04u;
    // 80024F04: stb     r4, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80024F08:
    ctx->pc = 0x80024F08u;
    // 80024F08: addi    r3, r1, 308
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(308);

label_80024F0C:
    ctx->pc = 0x80024F0Cu;
    // 80024F0C: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_80024F10:
    ctx->pc = 0x80024F10u;
    // 80024F10: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80024F14:
    ctx->pc = 0x80024F14u;
    // 80024F14: stw     r9, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024F18:
    ctx->pc = 0x80024F18u;
    // 80024F18: stb     r8, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80024F1C:
    ctx->pc = 0x80024F1Cu;
    // 80024F1C: stw     r7, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024F20:
    ctx->pc = 0x80024F20u;
    // 80024F20: sth     r0, 330(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(330);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80024F24:
    ctx->pc = 0x80024F24u;
    // 80024F24: stw     r6, 348(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024F28:
    ctx->pc = 0x80024F28u;
    // 80024F28: bl      0x80004000
    {
            ctx->lr = 0x80024F2Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024F2C:
    ctx->pc = 0x80024F2Cu;
    ctx->downcount -= 4;
    // 80024F2C: addi    r3, r1, 312
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(312);

label_80024F30:
    ctx->pc = 0x80024F30u;
    // 80024F30: addi    r4, r1, 10
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(10);

label_80024F34:
    ctx->pc = 0x80024F34u;
    // 80024F34: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024F38:
    ctx->pc = 0x80024F38u;
    // 80024F38: bl      0x80004000
    {
            ctx->lr = 0x80024F3Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024F3C:
    ctx->pc = 0x80024F3Cu;
    ctx->downcount -= 4;
    // 80024F3C: addi    r3, r1, 313
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(313);

label_80024F40:
    ctx->pc = 0x80024F40u;
    // 80024F40: addi    r4, r1, 11
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(11);

label_80024F44:
    ctx->pc = 0x80024F44u;
    // 80024F44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80024F48:
    ctx->pc = 0x80024F48u;
    // 80024F48: bl      0x80004000
    {
            ctx->lr = 0x80024F4Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80024F4C:
    ctx->pc = 0x80024F4Cu;
    ctx->downcount -= 25;
    // 80024F4C: lwz     r31, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80024F50:
    ctx->pc = 0x80024F50u;
    // 80024F50: lwz     r12, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80024F54:
    ctx->pc = 0x80024F54u;
    // 80024F54: lwz     r11, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80024F58:
    ctx->pc = 0x80024F58u;
    // 80024F58: lwz     r10, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80024F5C:
    ctx->pc = 0x80024F5Cu;
    // 80024F5C: lwz     r9, 320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80024F60:
    ctx->pc = 0x80024F60u;
    // 80024F60: lwz     r8, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80024F64:
    ctx->pc = 0x80024F64u;
    // 80024F64: lwz     r7, 328(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80024F68:
    ctx->pc = 0x80024F68u;
    // 80024F68: lwz     r6, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80024F6C:
    ctx->pc = 0x80024F6Cu;
    // 80024F6C: lwz     r5, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80024F70:
    ctx->pc = 0x80024F70u;
    // 80024F70: lwz     r4, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80024F74:
    ctx->pc = 0x80024F74u;
    // 80024F74: lwz     r3, 344(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024F78:
    ctx->pc = 0x80024F78u;
    // 80024F78: lwz     r0, 348(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024F7C:
    ctx->pc = 0x80024F7Cu;
    // 80024F7C: stw     r31, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80024F80:
    ctx->pc = 0x80024F80u;
    // 80024F80: stw     r12, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80024F84:
    ctx->pc = 0x80024F84u;
    // 80024F84: stw     r11, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80024F88:
    ctx->pc = 0x80024F88u;
    // 80024F88: stw     r10, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80024F8C:
    ctx->pc = 0x80024F8Cu;
    // 80024F8C: stw     r9, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80024F90:
    ctx->pc = 0x80024F90u;
    // 80024F90: stw     r8, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80024F94:
    ctx->pc = 0x80024F94u;
    // 80024F94: stw     r7, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80024F98:
    ctx->pc = 0x80024F98u;
    // 80024F98: stw     r6, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80024F9C:
    ctx->pc = 0x80024F9Cu;
    // 80024F9C: stw     r5, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80024FA0:
    ctx->pc = 0x80024FA0u;
    // 80024FA0: stw     r4, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80024FA4:
    ctx->pc = 0x80024FA4u;
    // 80024FA4: stw     r3, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80024FA8:
    ctx->pc = 0x80024FA8u;
    // 80024FA8: stw     r0, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80024FAC:
    ctx->pc = 0x80024FACu;
    // 80024FAC: bl      0x8004AF10
    {
            ctx->lr = 0x80024FB0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024FB0:
    ctx->pc = 0x80024FB0u;
    ctx->downcount -= 2;
    // 80024FB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80024FB4:
    ctx->pc = 0x80024FB4u;
    // 80024FB4: bl      0x8004AF10
    {
            ctx->lr = 0x80024FB8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80024FB8:
    ctx->pc = 0x80024FB8u;
    ctx->downcount -= 7;
    // 80024FB8: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80024FBC:
    ctx->pc = 0x80024FBCu;
    // 80024FBC: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80024FC0:
    ctx->pc = 0x80024FC0u;
    // 80024FC0: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024FC4:
    ctx->pc = 0x80024FC4u;
    // 80024FC4: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80024FC8:
    ctx->pc = 0x80024FC8u;
    // 80024FC8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80024FCC:
    ctx->pc = 0x80024FCCu;
    // 80024FCC: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80024FD0:
    ctx->pc = 0x80024FD0u;
    // 80024FD0: bc    4, 0, 0x80024FE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80024FE0;
        }
    }

label_80024FD4:
    ctx->pc = 0x80024FD4u;
    ctx->downcount -= 3;
    // 80024FD4: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80024FD8:
    ctx->pc = 0x80024FD8u;
    // 80024FD8: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80024FDC:
    ctx->pc = 0x80024FDCu;
    // 80024FDC: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80024FE0:
    ctx->pc = 0x80024FE0u;
    ctx->downcount -= 1;
    // 80024FE0: bl      0x8004AF50
    {
            ctx->lr = 0x80024FE4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024FE4:
    ctx->pc = 0x80024FE4u;
    ctx->downcount -= 4;
    // 80024FE4: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80024FE8:
    ctx->pc = 0x80024FE8u;
    // 80024FE8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80024FEC:
    ctx->pc = 0x80024FECu;
    // 80024FEC: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80024FF0:
    ctx->pc = 0x80024FF0u;
    // 80024FF0: bc    4, 2, 0x80025004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025004;
        }
    }

label_80024FF4:
    ctx->pc = 0x80024FF4u;
    ctx->downcount -= 2;
    // 80024FF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80024FF8:
    ctx->pc = 0x80024FF8u;
    // 80024FF8: bl      0x8004AF50
    {
            ctx->lr = 0x80024FFCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80024FFC:
    ctx->pc = 0x80024FFCu;
    ctx->downcount -= 2;
    // 80024FFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80025000:
    ctx->pc = 0x80025000u;
    // 80025000: b       0x8002507C
    {
            goto label_8002507C;
    }

label_80025004:
    ctx->pc = 0x80025004u;
    ctx->downcount -= 10;
    // 80025004: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025008:
    ctx->pc = 0x80025008u;
    // 80025008: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002500C:
    ctx->pc = 0x8002500Cu;
    // 8002500C: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025010:
    ctx->pc = 0x80025010u;
    // 80025010: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025014:
    ctx->pc = 0x80025014u;
    // 80025014: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025018:
    ctx->pc = 0x80025018u;
    // 80025018: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002501C:
    ctx->pc = 0x8002501Cu;
    // 8002501C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025020:
    ctx->pc = 0x80025020u;
    // 80025020: bl      0x80004350
    {
            ctx->lr = 0x80025024u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80025024:
    ctx->pc = 0x80025024u;
    ctx->downcount -= 10;
    // 80025024: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025028:
    ctx->pc = 0x80025028u;
    // 80025028: addi    r4, r1, 256
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(256);

label_8002502C:
    ctx->pc = 0x8002502Cu;
    // 8002502C: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025030:
    ctx->pc = 0x80025030u;
    // 80025030: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025034:
    ctx->pc = 0x80025034u;
    // 80025034: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025038:
    ctx->pc = 0x80025038u;
    // 80025038: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002503C:
    ctx->pc = 0x8002503Cu;
    // 8002503C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025040:
    ctx->pc = 0x80025040u;
    // 80025040: bl      0x80004000
    {
            ctx->lr = 0x80025044u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025044:
    ctx->pc = 0x80025044u;
    ctx->downcount -= 13;
    // 80025044: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025048:
    ctx->pc = 0x80025048u;
    // 80025048: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002504C:
    ctx->pc = 0x8002504Cu;
    // 8002504C: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025050:
    ctx->pc = 0x80025050u;
    // 80025050: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025054:
    ctx->pc = 0x80025054u;
    // 80025054: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025058:
    ctx->pc = 0x80025058u;
    // 80025058: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002505C:
    ctx->pc = 0x8002505Cu;
    // 8002505C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80025060:
    ctx->pc = 0x80025060u;
    // 80025060: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80025064:
    ctx->pc = 0x80025064u;
    // 80025064: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025068:
    ctx->pc = 0x80025068u;
    // 80025068: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_8002506C:
    ctx->pc = 0x8002506Cu;
    // 8002506C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80025070:
    ctx->pc = 0x80025070u;
    // 80025070: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025074:
    ctx->pc = 0x80025074u;
    // 80025074: bl      0x8004AF50
    {
            ctx->lr = 0x80025078u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025078:
    ctx->pc = 0x80025078u;
    ctx->downcount -= 1;
    // 80025078: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002507C:
    ctx->pc = 0x8002507Cu;
    ctx->downcount -= 6;
    // 8002507C: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80025080:
    ctx->pc = 0x80025080u;
    // 80025080: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80025084:
    ctx->pc = 0x80025084u;
    // 80025084: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80025088:
    ctx->pc = 0x80025088u;
    // 80025088: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_8002508C:
    ctx->pc = 0x8002508Cu;
    // 8002508C: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80025090:
    ctx->pc = 0x80025090u;
    // 80025090: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80025094:
    ctx->pc = 0x80025094u;
    ctx->downcount -= 2;
    // 80025094: cmpwi   r4, 0
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

label_80025098:
    ctx->pc = 0x80025098u;
    // 80025098: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_8002509C:
    ctx->pc = 0x8002509Cu;
    ctx->downcount -= 5;
    // 8002509C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800250A0:
    ctx->pc = 0x800250A0u;
    // 800250A0: stb     r0, 2358(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2358);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800250A4:
    ctx->pc = 0x800250A4u;
    // 800250A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800250A8:
    ctx->pc = 0x800250A8u;
    // 800250A8: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800250AC:
    ctx->pc = 0x800250ACu;
    // 800250AC: b       0x8002545C
    {
            goto label_8002545C;
    }

label_800250B0:
    ctx->pc = 0x800250B0u;
    ctx->downcount -= 2;
    // 800250B0: cmpwi   r4, 0
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

label_800250B4:
    ctx->pc = 0x800250B4u;
    // 800250B4: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_800250B8:
    ctx->pc = 0x800250B8u;
    ctx->downcount -= 5;
    // 800250B8: lbz     r3, 2354(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2354);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800250BC:
    ctx->pc = 0x800250BCu;
    // 800250BC: addi    r0, r3, 251
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(251);

label_800250C0:
    ctx->pc = 0x800250C0u;
    // 800250C0: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_800250C4:
    ctx->pc = 0x800250C4u;
    // 800250C4: cmplwi  r0, 0x0002
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

label_800250C8:
    ctx->pc = 0x800250C8u;
    // 800250C8: bc    4, 1, 0x800250D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800250D4;
        }
    }

label_800250CC:
    ctx->pc = 0x800250CCu;
    ctx->downcount -= 2;
    // 800250CC: cmplwi  r3, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800250D0:
    ctx->pc = 0x800250D0u;
    // 800250D0: bc    4, 2, 0x8002528C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002528C;
        }
    }

label_800250D4:
    ctx->pc = 0x800250D4u;
    ctx->downcount -= 20;
    // 800250D4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_800250D8:
    ctx->pc = 0x800250D8u;
    // 800250D8: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800250DC:
    ctx->pc = 0x800250DCu;
    // 800250DC: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_800250E0:
    ctx->pc = 0x800250E0u;
    // 800250E0: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800250E4:
    ctx->pc = 0x800250E4u;
    // 800250E4: addi    r9, r3, 242
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(242);

label_800250E8:
    ctx->pc = 0x800250E8u;
    // 800250E8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_800250EC:
    ctx->pc = 0x800250ECu;
    // 800250EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800250F0:
    ctx->pc = 0x800250F0u;
    // 800250F0: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_800250F4:
    ctx->pc = 0x800250F4u;
    // 800250F4: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_800250F8:
    ctx->pc = 0x800250F8u;
    // 800250F8: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_800250FC:
    ctx->pc = 0x800250FCu;
    // 800250FC: stb     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80025100:
    ctx->pc = 0x80025100u;
    // 80025100: addi    r3, r1, 212
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(212);

label_80025104:
    ctx->pc = 0x80025104u;
    // 80025104: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80025108:
    ctx->pc = 0x80025108u;
    // 80025108: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8002510C:
    ctx->pc = 0x8002510Cu;
    // 8002510C: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025110:
    ctx->pc = 0x80025110u;
    // 80025110: stb     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80025114:
    ctx->pc = 0x80025114u;
    // 80025114: stw     r7, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025118:
    ctx->pc = 0x80025118u;
    // 80025118: sth     r0, 234(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(234);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002511C:
    ctx->pc = 0x8002511Cu;
    // 8002511C: stw     r6, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025120:
    ctx->pc = 0x80025120u;
    // 80025120: bl      0x80004000
    {
            ctx->lr = 0x80025124u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025124:
    ctx->pc = 0x80025124u;
    ctx->downcount -= 4;
    // 80025124: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_80025128:
    ctx->pc = 0x80025128u;
    // 80025128: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8002512C:
    ctx->pc = 0x8002512Cu;
    // 8002512C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80025130:
    ctx->pc = 0x80025130u;
    // 80025130: bl      0x80004000
    {
            ctx->lr = 0x80025134u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025134:
    ctx->pc = 0x80025134u;
    ctx->downcount -= 4;
    // 80025134: addi    r3, r1, 217
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(217);

label_80025138:
    ctx->pc = 0x80025138u;
    // 80025138: addi    r4, r1, 9
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(9);

label_8002513C:
    ctx->pc = 0x8002513Cu;
    // 8002513C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80025140:
    ctx->pc = 0x80025140u;
    // 80025140: bl      0x80004000
    {
            ctx->lr = 0x80025144u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025144:
    ctx->pc = 0x80025144u;
    ctx->downcount -= 25;
    // 80025144: lwz     r31, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025148:
    ctx->pc = 0x80025148u;
    // 80025148: lwz     r12, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8002514C:
    ctx->pc = 0x8002514Cu;
    // 8002514C: lwz     r11, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025150:
    ctx->pc = 0x80025150u;
    // 80025150: lwz     r10, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025154:
    ctx->pc = 0x80025154u;
    // 80025154: lwz     r9, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025158:
    ctx->pc = 0x80025158u;
    // 80025158: lwz     r8, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8002515C:
    ctx->pc = 0x8002515Cu;
    // 8002515C: lwz     r7, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80025160:
    ctx->pc = 0x80025160u;
    // 80025160: lwz     r6, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025164:
    ctx->pc = 0x80025164u;
    // 80025164: lwz     r5, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025168:
    ctx->pc = 0x80025168u;
    // 80025168: lwz     r4, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002516C:
    ctx->pc = 0x8002516Cu;
    // 8002516C: lwz     r3, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025170:
    ctx->pc = 0x80025170u;
    // 80025170: lwz     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025174:
    ctx->pc = 0x80025174u;
    // 80025174: stw     r31, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025178:
    ctx->pc = 0x80025178u;
    // 80025178: stw     r12, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8002517C:
    ctx->pc = 0x8002517Cu;
    // 8002517C: stw     r11, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80025180:
    ctx->pc = 0x80025180u;
    // 80025180: stw     r10, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025184:
    ctx->pc = 0x80025184u;
    // 80025184: stw     r9, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025188:
    ctx->pc = 0x80025188u;
    // 80025188: stw     r8, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002518C:
    ctx->pc = 0x8002518Cu;
    // 8002518C: stw     r7, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025190:
    ctx->pc = 0x80025190u;
    // 80025190: stw     r6, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025194:
    ctx->pc = 0x80025194u;
    // 80025194: stw     r5, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025198:
    ctx->pc = 0x80025198u;
    // 80025198: stw     r4, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002519C:
    ctx->pc = 0x8002519Cu;
    // 8002519C: stw     r3, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800251A0:
    ctx->pc = 0x800251A0u;
    // 800251A0: stw     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800251A4:
    ctx->pc = 0x800251A4u;
    // 800251A4: bl      0x8004AF10
    {
            ctx->lr = 0x800251A8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800251A8:
    ctx->pc = 0x800251A8u;
    ctx->downcount -= 2;
    // 800251A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800251AC:
    ctx->pc = 0x800251ACu;
    // 800251AC: bl      0x8004AF10
    {
            ctx->lr = 0x800251B0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800251B0:
    ctx->pc = 0x800251B0u;
    ctx->downcount -= 7;
    // 800251B0: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800251B4:
    ctx->pc = 0x800251B4u;
    // 800251B4: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_800251B8:
    ctx->pc = 0x800251B8u;
    // 800251B8: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800251BC:
    ctx->pc = 0x800251BCu;
    // 800251BC: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_800251C0:
    ctx->pc = 0x800251C0u;
    // 800251C0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800251C4:
    ctx->pc = 0x800251C4u;
    // 800251C4: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800251C8:
    ctx->pc = 0x800251C8u;
    // 800251C8: bc    4, 0, 0x800251D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800251D8;
        }
    }

label_800251CC:
    ctx->pc = 0x800251CCu;
    ctx->downcount -= 3;
    // 800251CC: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800251D0:
    ctx->pc = 0x800251D0u;
    // 800251D0: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800251D4:
    ctx->pc = 0x800251D4u;
    // 800251D4: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800251D8:
    ctx->pc = 0x800251D8u;
    ctx->downcount -= 1;
    // 800251D8: bl      0x8004AF50
    {
            ctx->lr = 0x800251DCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800251DC:
    ctx->pc = 0x800251DCu;
    ctx->downcount -= 4;
    // 800251DC: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800251E0:
    ctx->pc = 0x800251E0u;
    // 800251E0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800251E4:
    ctx->pc = 0x800251E4u;
    // 800251E4: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800251E8:
    ctx->pc = 0x800251E8u;
    // 800251E8: bc    4, 2, 0x800251FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800251FC;
        }
    }

label_800251EC:
    ctx->pc = 0x800251ECu;
    ctx->downcount -= 2;
    // 800251EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800251F0:
    ctx->pc = 0x800251F0u;
    // 800251F0: bl      0x8004AF50
    {
            ctx->lr = 0x800251F4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800251F4:
    ctx->pc = 0x800251F4u;
    ctx->downcount -= 2;
    // 800251F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800251F8:
    ctx->pc = 0x800251F8u;
    // 800251F8: b       0x80025274
    {
            goto label_80025274;
    }

label_800251FC:
    ctx->pc = 0x800251FCu;
    ctx->downcount -= 10;
    // 800251FC: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025200:
    ctx->pc = 0x80025200u;
    // 80025200: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025204:
    ctx->pc = 0x80025204u;
    // 80025204: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025208:
    ctx->pc = 0x80025208u;
    // 80025208: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002520C:
    ctx->pc = 0x8002520Cu;
    // 8002520C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025210:
    ctx->pc = 0x80025210u;
    // 80025210: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025214:
    ctx->pc = 0x80025214u;
    // 80025214: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025218:
    ctx->pc = 0x80025218u;
    // 80025218: bl      0x80004350
    {
            ctx->lr = 0x8002521Cu;
            ctx->pc = 0x80004350u;
            return;
    }

label_8002521C:
    ctx->pc = 0x8002521Cu;
    ctx->downcount -= 10;
    // 8002521C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025220:
    ctx->pc = 0x80025220u;
    // 80025220: addi    r4, r1, 160
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(160);

label_80025224:
    ctx->pc = 0x80025224u;
    // 80025224: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025228:
    ctx->pc = 0x80025228u;
    // 80025228: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002522C:
    ctx->pc = 0x8002522Cu;
    // 8002522C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025230:
    ctx->pc = 0x80025230u;
    // 80025230: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025234:
    ctx->pc = 0x80025234u;
    // 80025234: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025238:
    ctx->pc = 0x80025238u;
    // 80025238: bl      0x80004000
    {
            ctx->lr = 0x8002523Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002523C:
    ctx->pc = 0x8002523Cu;
    ctx->downcount -= 13;
    // 8002523C: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025240:
    ctx->pc = 0x80025240u;
    // 80025240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025244:
    ctx->pc = 0x80025244u;
    // 80025244: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025248:
    ctx->pc = 0x80025248u;
    // 80025248: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002524C:
    ctx->pc = 0x8002524Cu;
    // 8002524C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025250:
    ctx->pc = 0x80025250u;
    // 80025250: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025254:
    ctx->pc = 0x80025254u;
    // 80025254: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80025258:
    ctx->pc = 0x80025258u;
    // 80025258: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8002525C:
    ctx->pc = 0x8002525Cu;
    // 8002525C: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025260:
    ctx->pc = 0x80025260u;
    // 80025260: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80025264:
    ctx->pc = 0x80025264u;
    // 80025264: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80025268:
    ctx->pc = 0x80025268u;
    // 80025268: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002526C:
    ctx->pc = 0x8002526Cu;
    // 8002526C: bl      0x8004AF50
    {
            ctx->lr = 0x80025270u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025270:
    ctx->pc = 0x80025270u;
    ctx->downcount -= 1;
    // 80025270: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80025274:
    ctx->pc = 0x80025274u;
    ctx->downcount -= 6;
    // 80025274: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80025278:
    ctx->pc = 0x80025278u;
    // 80025278: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_8002527C:
    ctx->pc = 0x8002527Cu;
    // 8002527C: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80025280:
    ctx->pc = 0x80025280u;
    // 80025280: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80025284:
    ctx->pc = 0x80025284u;
    // 80025284: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80025288:
    ctx->pc = 0x80025288u;
    // 80025288: b       0x8002545C
    {
            goto label_8002545C;
    }

label_8002528C:
    ctx->pc = 0x8002528Cu;
    ctx->downcount -= 2;
    // 8002528C: li      r4, -3
    ctx->gpr[4] = (u32)(s32)(-3);

label_80025290:
    ctx->pc = 0x80025290u;
    // 80025290: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80025294:
    ctx->pc = 0x80025294u;
    ctx->downcount -= 2;
    // 80025294: cmpwi   r4, 0
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

label_80025298:
    ctx->pc = 0x80025298u;
    // 80025298: bc    4, 2, 0x8002545C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002545C;
        }
    }

label_8002529C:
    ctx->pc = 0x8002529Cu;
    ctx->downcount -= 19;
    // 8002529C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_800252A0:
    ctx->pc = 0x800252A0u;
    // 800252A0: stb     r0, 2355(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2355);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800252A4:
    ctx->pc = 0x800252A4u;
    // 800252A4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_800252A8:
    ctx->pc = 0x800252A8u;
    // 800252A8: lis     r3, 1190
    ctx->gpr[3] = ((u32)(s32)(1190) << 16);

label_800252AC:
    ctx->pc = 0x800252ACu;
    // 800252AC: stb     r8, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_800252B0:
    ctx->pc = 0x800252B0u;
    // 800252B0: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800252B4:
    ctx->pc = 0x800252B4u;
    // 800252B4: addi    r3, r3, 255
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(255);

label_800252B8:
    ctx->pc = 0x800252B8u;
    // 800252B8: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_800252BC:
    ctx->pc = 0x800252BCu;
    // 800252BC: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_800252C0:
    ctx->pc = 0x800252C0u;
    // 800252C0: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_800252C4:
    ctx->pc = 0x800252C4u;
    // 800252C4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800252C8:
    ctx->pc = 0x800252C8u;
    // 800252C8: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_800252CC:
    ctx->pc = 0x800252CCu;
    // 800252CC: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_800252D0:
    ctx->pc = 0x800252D0u;
    // 800252D0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_800252D4:
    ctx->pc = 0x800252D4u;
    // 800252D4: sth     r8, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_800252D8:
    ctx->pc = 0x800252D8u;
    // 800252D8: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800252DC:
    ctx->pc = 0x800252DCu;
    // 800252DC: sth     r0, 90(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800252E0:
    ctx->pc = 0x800252E0u;
    // 800252E0: stw     r6, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800252E4:
    ctx->pc = 0x800252E4u;
    // 800252E4: bl      0x80004000
    {
            ctx->lr = 0x800252E8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800252E8:
    ctx->pc = 0x800252E8u;
    ctx->downcount -= 4;
    // 800252E8: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_800252EC:
    ctx->pc = 0x800252ECu;
    // 800252EC: addi    r4, r1, 18
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(18);

label_800252F0:
    ctx->pc = 0x800252F0u;
    // 800252F0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800252F4:
    ctx->pc = 0x800252F4u;
    // 800252F4: bl      0x80004000
    {
            ctx->lr = 0x800252F8u;
            ctx->pc = 0x80004000u;
            return;
    }

label_800252F8:
    ctx->pc = 0x800252F8u;
    ctx->downcount -= 29;
    // 800252F8: lhz     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800252FC:
    ctx->pc = 0x800252FCu;
    // 800252FC: addi    r31, r30, 2353
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(2353);

label_80025300:
    ctx->pc = 0x80025300u;
    // 80025300: sth     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025304:
    ctx->pc = 0x80025304u;
    // 80025304: lwz     r12, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025308:
    ctx->pc = 0x80025308u;
    // 80025308: lwz     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8002530C:
    ctx->pc = 0x8002530Cu;
    // 8002530C: lwz     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025310:
    ctx->pc = 0x80025310u;
    // 80025310: lwz     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025314:
    ctx->pc = 0x80025314u;
    // 80025314: lwz     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80025318:
    ctx->pc = 0x80025318u;
    // 80025318: lwz     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002531C:
    ctx->pc = 0x8002531Cu;
    // 8002531C: lwz     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025320:
    ctx->pc = 0x80025320u;
    // 80025320: lwz     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025324:
    ctx->pc = 0x80025324u;
    // 80025324: lwz     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025328:
    ctx->pc = 0x80025328u;
    // 80025328: lwz     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002532C:
    ctx->pc = 0x8002532Cu;
    // 8002532C: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025330:
    ctx->pc = 0x80025330u;
    // 80025330: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025334:
    ctx->pc = 0x80025334u;
    // 80025334: stw     r12, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025338:
    ctx->pc = 0x80025338u;
    // 80025338: stw     r11, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8002533C:
    ctx->pc = 0x8002533Cu;
    // 8002533C: stw     r10, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025340:
    ctx->pc = 0x80025340u;
    // 80025340: stw     r9, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025344:
    ctx->pc = 0x80025344u;
    // 80025344: stw     r8, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025348:
    ctx->pc = 0x80025348u;
    // 80025348: stw     r7, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002534C:
    ctx->pc = 0x8002534Cu;
    // 8002534C: stw     r6, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025350:
    ctx->pc = 0x80025350u;
    // 80025350: stw     r5, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025354:
    ctx->pc = 0x80025354u;
    // 80025354: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025358:
    ctx->pc = 0x80025358u;
    // 80025358: stw     r4, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002535C:
    ctx->pc = 0x8002535Cu;
    // 8002535C: stw     r12, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025360:
    ctx->pc = 0x80025360u;
    // 80025360: stw     r3, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025364:
    ctx->pc = 0x80025364u;
    // 80025364: stw     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025368:
    ctx->pc = 0x80025368u;
    // 80025368: bl      0x8004AF10
    {
            ctx->lr = 0x8002536Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002536C:
    ctx->pc = 0x8002536Cu;
    ctx->downcount -= 2;
    // 8002536C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025370:
    ctx->pc = 0x80025370u;
    // 80025370: bl      0x8004AF10
    {
            ctx->lr = 0x80025374u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025374:
    ctx->pc = 0x80025374u;
    ctx->downcount -= 7;
    // 80025374: lbz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025378:
    ctx->pc = 0x80025378u;
    // 80025378: lbz     r5, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8002537C:
    ctx->pc = 0x8002537Cu;
    // 8002537C: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025380:
    ctx->pc = 0x80025380u;
    // 80025380: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80025384:
    ctx->pc = 0x80025384u;
    // 80025384: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025388:
    ctx->pc = 0x80025388u;
    // 80025388: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002538C:
    ctx->pc = 0x8002538Cu;
    // 8002538C: bc    4, 0, 0x8002539C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002539C;
        }
    }

label_80025390:
    ctx->pc = 0x80025390u;
    ctx->downcount -= 3;
    // 80025390: lwz     r0, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025394:
    ctx->pc = 0x80025394u;
    // 80025394: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025398:
    ctx->pc = 0x80025398u;
    // 80025398: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002539C:
    ctx->pc = 0x8002539Cu;
    ctx->downcount -= 1;
    // 8002539C: bl      0x8004AF50
    {
            ctx->lr = 0x800253A0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800253A0:
    ctx->pc = 0x800253A0u;
    ctx->downcount -= 4;
    // 800253A0: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800253A4:
    ctx->pc = 0x800253A4u;
    // 800253A4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800253A8:
    ctx->pc = 0x800253A8u;
    // 800253A8: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800253AC:
    ctx->pc = 0x800253ACu;
    // 800253AC: bc    4, 2, 0x800253C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800253C0;
        }
    }

label_800253B0:
    ctx->pc = 0x800253B0u;
    ctx->downcount -= 2;
    // 800253B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800253B4:
    ctx->pc = 0x800253B4u;
    // 800253B4: bl      0x8004AF50
    {
            ctx->lr = 0x800253B8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800253B8:
    ctx->pc = 0x800253B8u;
    ctx->downcount -= 2;
    // 800253B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800253BC:
    ctx->pc = 0x800253BCu;
    // 800253BC: b       0x80025438
    {
            goto label_80025438;
    }

label_800253C0:
    ctx->pc = 0x800253C0u;
    ctx->downcount -= 10;
    // 800253C0: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800253C4:
    ctx->pc = 0x800253C4u;
    // 800253C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800253C8:
    ctx->pc = 0x800253C8u;
    // 800253C8: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800253CC:
    ctx->pc = 0x800253CCu;
    // 800253CC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800253D0:
    ctx->pc = 0x800253D0u;
    // 800253D0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800253D4:
    ctx->pc = 0x800253D4u;
    // 800253D4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800253D8:
    ctx->pc = 0x800253D8u;
    // 800253D8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800253DC:
    ctx->pc = 0x800253DCu;
    // 800253DC: bl      0x80004350
    {
            ctx->lr = 0x800253E0u;
            ctx->pc = 0x80004350u;
            return;
    }

label_800253E0:
    ctx->pc = 0x800253E0u;
    ctx->downcount -= 10;
    // 800253E0: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800253E4:
    ctx->pc = 0x800253E4u;
    // 800253E4: addi    r4, r1, 112
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(112);

label_800253E8:
    ctx->pc = 0x800253E8u;
    // 800253E8: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800253EC:
    ctx->pc = 0x800253ECu;
    // 800253EC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800253F0:
    ctx->pc = 0x800253F0u;
    // 800253F0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800253F4:
    ctx->pc = 0x800253F4u;
    // 800253F4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800253F8:
    ctx->pc = 0x800253F8u;
    // 800253F8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800253FC:
    ctx->pc = 0x800253FCu;
    // 800253FC: bl      0x80004000
    {
            ctx->lr = 0x80025400u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025400:
    ctx->pc = 0x80025400u;
    ctx->downcount -= 13;
    // 80025400: lbz     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025404:
    ctx->pc = 0x80025404u;
    // 80025404: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80025408:
    ctx->pc = 0x80025408u;
    // 80025408: lwz     r4, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002540C:
    ctx->pc = 0x8002540Cu;
    // 8002540C: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025410:
    ctx->pc = 0x80025410u;
    // 80025410: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025414:
    ctx->pc = 0x80025414u;
    // 80025414: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025418:
    ctx->pc = 0x80025418u;
    // 80025418: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_8002541C:
    ctx->pc = 0x8002541Cu;
    // 8002541C: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80025420:
    ctx->pc = 0x80025420u;
    // 80025420: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025424:
    ctx->pc = 0x80025424u;
    // 80025424: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80025428:
    ctx->pc = 0x80025428u;
    // 80025428: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_8002542C:
    ctx->pc = 0x8002542Cu;
    // 8002542C: stb     r0, 353(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025430:
    ctx->pc = 0x80025430u;
    // 80025430: bl      0x8004AF50
    {
            ctx->lr = 0x80025434u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025434:
    ctx->pc = 0x80025434u;
    ctx->downcount -= 1;
    // 80025434: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80025438:
    ctx->pc = 0x80025438u;
    ctx->downcount -= 6;
    // 80025438: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_8002543C:
    ctx->pc = 0x8002543Cu;
    // 8002543C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_80025440:
    ctx->pc = 0x80025440u;
    // 80025440: rlwinm r3, r3, 27, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00000001u;
    }

label_80025444:
    ctx->pc = 0x80025444u;
    // 80025444: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80025448:
    ctx->pc = 0x80025448u;
    // 80025448: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_8002544C:
    ctx->pc = 0x8002544Cu;
    // 8002544C: b       0x8002545C
    {
            goto label_8002545C;
    }

label_80025450:
    ctx->pc = 0x80025450u;
    ctx->downcount -= 3;
    // 80025450: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025454:
    ctx->pc = 0x80025454u;
    // 80025454: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80025458:
    ctx->pc = 0x80025458u;
    // 80025458: stb     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002545C:
    ctx->pc = 0x8002545Cu;
    ctx->downcount -= 3;
    // 8002545C: lbz     r0, 2974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2974);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025460:
    ctx->pc = 0x80025460u;
    // 80025460: cmpwi   r0, 0
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

label_80025464:
    ctx->pc = 0x80025464u;
    // 80025464: bc    12, 2, 0x80025470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025470;
        }
    }

label_80025468:
    ctx->pc = 0x80025468u;
    ctx->downcount -= 2;
    // 80025468: cmpwi   r4, 0
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

label_8002546C:
    ctx->pc = 0x8002546Cu;
    // 8002546C: bc    12, 2, 0x80025494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025494;
        }
    }

label_80025470:
    ctx->pc = 0x80025470u;
    ctx->downcount -= 6;
    // 80025470: lwz     r12, 2968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2968);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025474:
    ctx->pc = 0x80025474u;
    // 80025474: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80025478:
    ctx->pc = 0x80025478u;
    // 80025478: stb     r0, 2352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2352);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002547C:
    ctx->pc = 0x8002547Cu;
    // 8002547C: cmpwi   r12, 0
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

label_80025480:
    ctx->pc = 0x80025480u;
    // 80025480: stw     r0, 2968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2968);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025484:
    ctx->pc = 0x80025484u;
    // 80025484: bc    12, 2, 0x80025494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025494;
        }
    }

label_80025488:
    ctx->pc = 0x80025488u;
    ctx->downcount -= 4;
    // 80025488: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002548C:
    ctx->pc = 0x8002548Cu;
    // 8002548C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80025490:
    ctx->pc = 0x80025490u;
    // 80025490: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80025494u;
            ctx->pc = target;
            return;
        }
    }

label_80025494:
    ctx->pc = 0x80025494u;
    ctx->downcount -= 9;
    // 80025494: lwz     r0, 948(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(948);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025498:
    ctx->pc = 0x80025498u;
    // 80025498: lwz     r31, 940(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(940);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002549C:
    ctx->pc = 0x8002549Cu;
    // 8002549C: lwz     r30, 936(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(936);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800254A0:
    ctx->pc = 0x800254A0u;
    // 800254A0: lwz     r29, 932(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(932);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800254A4:
    ctx->pc = 0x800254A4u;
    // 800254A4: lwz     r28, 928(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(928);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_800254A8:
    ctx->pc = 0x800254A8u;
    // 800254A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800254AC:
    ctx->pc = 0x800254ACu;
    // 800254AC: addi    r1, r1, 944
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(944);

label_800254B0:
    ctx->pc = 0x800254B0u;
    // 800254B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800254B4:
    ctx->pc = 0x800254B4u;
    // 800254B4: .long   0x00000000
    // embedded data

label_800254B8:
    ctx->pc = 0x800254B8u;
    // 800254B8: .long   0x00000000
    // embedded data

label_800254BC:
    ctx->pc = 0x800254BCu;
    // 800254BC: .long   0x00000000
    // embedded data

label_800254C0:
    ctx->pc = 0x800254C0u;
    // 800254C0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800254C4:
    ctx->pc = 0x800254C4u;
    // 800254C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800254C8:
    ctx->pc = 0x800254C8u;
    // 800254C8: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800254CC:
    ctx->pc = 0x800254CCu;
    // 800254CC: addi    r11, r1, 144
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(144);

label_800254D0:
    ctx->pc = 0x800254D0u;
    // 800254D0: bl      0x80007854
    {
            ctx->lr = 0x800254D4u;
            ctx->pc = 0x80007854u;
            return;
    }

label_800254D4:
    ctx->pc = 0x800254D4u;
    ctx->downcount -= 8;
    // 800254D4: lis     r6, -32656
    ctx->gpr[6] = ((u32)(s32)(-32656) << 16);

label_800254D8:
    ctx->pc = 0x800254D8u;
    // 800254D8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800254DC:
    ctx->pc = 0x800254DCu;
    // 800254DC: addi    r6, r6, 31952
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31952);

label_800254E0:
    ctx->pc = 0x800254E0u;
    // 800254E0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800254E4:
    ctx->pc = 0x800254E4u;
    // 800254E4: lwzx    r29, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800254E8:
    ctx->pc = 0x800254E8u;
    // 800254E8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800254EC:
    ctx->pc = 0x800254ECu;
    // 800254EC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800254F0:
    ctx->pc = 0x800254F0u;
    // 800254F0: bl      0x8004AF10
    {
            ctx->lr = 0x800254F4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800254F4:
    ctx->pc = 0x800254F4u;
    ctx->downcount -= 8;
    // 800254F4: lwz     r0, 2968(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800254F8:
    ctx->pc = 0x800254F8u;
    // 800254F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800254FC:
    ctx->pc = 0x800254FCu;
    // 800254FC: lbz     r4, 2309(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2309);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025500:
    ctx->pc = 0x80025500u;
    // 80025500: cmpwi   r0, 0
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

label_80025504:
    ctx->pc = 0x80025504u;
    // 80025504: lbz     r5, 2310(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2310);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80025508:
    ctx->pc = 0x80025508u;
    // 80025508: lwz     r26, 2304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2304);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002550C:
    ctx->pc = 0x8002550Cu;
    // 8002550C: lwz     r3, 2336(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025510:
    ctx->pc = 0x80025510u;
    // 80025510: bc    12, 2, 0x8002551C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002551C;
        }
    }

label_80025514:
    ctx->pc = 0x80025514u;
    ctx->downcount -= 2;
    // 80025514: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80025518:
    ctx->pc = 0x80025518u;
    // 80025518: b       0x80025520
    {
            goto label_80025520;
    }

label_8002551C:
    ctx->pc = 0x8002551Cu;
    ctx->downcount -= 1;
    // 8002551C: lbz     r0, 2352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025520:
    ctx->pc = 0x80025520u;
    ctx->downcount -= 2;
    // 80025520: cmpwi   r26, -1
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025524:
    ctx->pc = 0x80025524u;
    // 80025524: bc    12, 2, 0x800257E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800257E8;
        }
    }

label_80025528:
    ctx->pc = 0x80025528u;
    ctx->downcount -= 2;
    // 80025528: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002552C:
    ctx->pc = 0x8002552Cu;
    // 8002552C: bc    12, 2, 0x80025538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025538;
        }
    }

label_80025530:
    ctx->pc = 0x80025530u;
    ctx->downcount -= 2;
    // 80025530: cmpwi   r0, 0
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

label_80025534:
    ctx->pc = 0x80025534u;
    // 80025534: bc    12, 2, 0x80025540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025540;
        }
    }

label_80025538:
    ctx->pc = 0x80025538u;
    ctx->downcount -= 2;
    // 80025538: li      r26, -2
    ctx->gpr[26] = (u32)(s32)(-2);

label_8002553C:
    ctx->pc = 0x8002553Cu;
    // 8002553C: b       0x800257E8
    {
            goto label_800257E8;
    }

label_80025540:
    ctx->pc = 0x80025540u;
    ctx->downcount -= 3;
    // 80025540: lbz     r0, 2370(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2370);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025544:
    ctx->pc = 0x80025544u;
    // 80025544: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80025548:
    ctx->pc = 0x80025548u;
    // 80025548: bc    4, 0, 0x80025554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025554;
        }
    }

label_8002554C:
    ctx->pc = 0x8002554Cu;
    ctx->downcount -= 2;
    // 8002554C: li      r26, -4
    ctx->gpr[26] = (u32)(s32)(-4);

label_80025550:
    ctx->pc = 0x80025550u;
    // 80025550: b       0x800257E8
    {
            goto label_800257E8;
    }

label_80025554:
    ctx->pc = 0x80025554u;
    ctx->downcount -= 2;
    // 80025554: cmplw   r31, r5
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025558:
    ctx->pc = 0x80025558u;
    // 80025558: bc    4, 2, 0x80025564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025564;
        }
    }

label_8002555C:
    ctx->pc = 0x8002555Cu;
    ctx->downcount -= 2;
    // 8002555C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80025560:
    ctx->pc = 0x80025560u;
    // 80025560: b       0x800257E8
    {
            goto label_800257E8;
    }

label_80025564:
    ctx->pc = 0x80025564u;
    ctx->downcount -= 3;
    // 80025564: addi    r0, r4, -5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5);

label_80025568:
    ctx->pc = 0x80025568u;
    // 80025568: cmplwi  r0, 0x0002
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

label_8002556C:
    ctx->pc = 0x8002556Cu;
    // 8002556C: bc    4, 1, 0x80025578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025578;
        }
    }

label_80025570:
    ctx->pc = 0x80025570u;
    ctx->downcount -= 2;
    // 80025570: cmplwi  r4, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025574:
    ctx->pc = 0x80025574u;
    // 80025574: bc    4, 2, 0x80025588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025588;
        }
    }

label_80025578:
    ctx->pc = 0x80025578u;
    ctx->downcount -= 2;
    // 80025578: cmpwi   r31, 0
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

label_8002557C:
    ctx->pc = 0x8002557Cu;
    // 8002557C: bc    12, 2, 0x800255B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800255B4;
        }
    }

label_80025580:
    ctx->pc = 0x80025580u;
    ctx->downcount -= 2;
    // 80025580: cmplwi  r31, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025584:
    ctx->pc = 0x80025584u;
    // 80025584: bc    12, 2, 0x800255B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800255B4;
        }
    }

label_80025588:
    ctx->pc = 0x80025588u;
    ctx->downcount -= 3;
    // 80025588: addi    r0, r4, -5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5);

label_8002558C:
    ctx->pc = 0x8002558Cu;
    // 8002558C: cmplwi  r0, 0x0002
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

label_80025590:
    ctx->pc = 0x80025590u;
    // 80025590: bc    4, 1, 0x800257E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800257E4;
        }
    }

label_80025594:
    ctx->pc = 0x80025594u;
    ctx->downcount -= 2;
    // 80025594: cmplwi  r4, 0x00FA
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x00FAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025598:
    ctx->pc = 0x80025598u;
    // 80025598: bc    12, 2, 0x800257E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800257E4;
        }
    }

label_8002559C:
    ctx->pc = 0x8002559Cu;
    ctx->downcount -= 2;
    // 8002559C: cmplwi  r31, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255A0:
    ctx->pc = 0x800255A0u;
    // 800255A0: bc    12, 2, 0x800255B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800255B4;
        }
    }

label_800255A4:
    ctx->pc = 0x800255A4u;
    ctx->downcount -= 2;
    // 800255A4: cmplwi  r31, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255A8:
    ctx->pc = 0x800255A8u;
    // 800255A8: bc    12, 2, 0x800255B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800255B4;
        }
    }

label_800255AC:
    ctx->pc = 0x800255ACu;
    ctx->downcount -= 2;
    // 800255AC: cmplwi  r31, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255B0:
    ctx->pc = 0x800255B0u;
    // 800255B0: bc    4, 2, 0x800257E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800257E4;
        }
    }

label_800255B4:
    ctx->pc = 0x800255B4u;
    ctx->downcount -= 2;
    // 800255B4: cmplwi  r31, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255B8:
    ctx->pc = 0x800255B8u;
    // 800255B8: bc    4, 2, 0x800255D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800255D0;
        }
    }

label_800255BC:
    ctx->pc = 0x800255BCu;
    ctx->downcount -= 3;
    // 800255BC: lbz     r0, 2975(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2975);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800255C0:
    ctx->pc = 0x800255C0u;
    // 800255C0: cmplwi  r0, 0x00C8
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00C8u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255C4:
    ctx->pc = 0x800255C4u;
    // 800255C4: bc    4, 0, 0x800255D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800255D0;
        }
    }

label_800255C8:
    ctx->pc = 0x800255C8u;
    ctx->downcount -= 2;
    // 800255C8: li      r26, -2
    ctx->gpr[26] = (u32)(s32)(-2);

label_800255CC:
    ctx->pc = 0x800255CCu;
    // 800255CC: b       0x800257E8
    {
            goto label_800257E8;
    }

label_800255D0:
    ctx->pc = 0x800255D0u;
    ctx->downcount -= 5;
    // 800255D0: stb     r31, 2356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2356);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800255D4:
    ctx->pc = 0x800255D4u;
    // 800255D4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_800255D8:
    ctx->pc = 0x800255D8u;
    // 800255D8: cmpwi   r31, 0
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

label_800255DC:
    ctx->pc = 0x800255DCu;
    // 800255DC: stb     r0, 2355(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2355);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800255E0:
    ctx->pc = 0x800255E0u;
    // 800255E0: bc    12, 2, 0x800255F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800255F0;
        }
    }

label_800255E4:
    ctx->pc = 0x800255E4u;
    ctx->downcount -= 2;
    // 800255E4: cmpwi   r31, 128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800255E8:
    ctx->pc = 0x800255E8u;
    // 800255E8: bc    12, 2, 0x80025608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025608;
        }
    }

label_800255EC:
    ctx->pc = 0x800255ECu;
    ctx->downcount -= 1;
    // 800255EC: b       0x80025620
    {
            goto label_80025620;
    }

label_800255F0:
    ctx->pc = 0x800255F0u;
    ctx->downcount -= 6;
    // 800255F0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800255F4:
    ctx->pc = 0x800255F4u;
    // 800255F4: stb     r0, 2974(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800255F8:
    ctx->pc = 0x800255F8u;
    // 800255F8: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_800255FC:
    ctx->pc = 0x800255FCu;
    // 800255FC: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80025600:
    ctx->pc = 0x80025600u;
    // 80025600: stw     r0, 2984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025604:
    ctx->pc = 0x80025604u;
    // 80025604: b       0x80025634
    {
            goto label_80025634;
    }

label_80025608:
    ctx->pc = 0x80025608u;
    ctx->downcount -= 6;
    // 80025608: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_8002560C:
    ctx->pc = 0x8002560Cu;
    // 8002560C: stb     r0, 2974(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025610:
    ctx->pc = 0x80025610u;
    // 80025610: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_80025614:
    ctx->pc = 0x80025614u;
    // 80025614: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80025618:
    ctx->pc = 0x80025618u;
    // 80025618: stw     r0, 2984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002561C:
    ctx->pc = 0x8002561Cu;
    // 8002561C: b       0x80025634
    {
            goto label_80025634;
    }

label_80025620:
    ctx->pc = 0x80025620u;
    ctx->downcount -= 5;
    // 80025620: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80025624:
    ctx->pc = 0x80025624u;
    // 80025624: stb     r0, 2974(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2974);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025628:
    ctx->pc = 0x80025628u;
    // 80025628: lis     r3, 1190
    ctx->gpr[3] = ((u32)(s32)(1190) << 16);

label_8002562C:
    ctx->pc = 0x8002562Cu;
    // 8002562C: addi    r0, r3, 254
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(254);

label_80025630:
    ctx->pc = 0x80025630u;
    // 80025630: stw     r0, 2984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025634:
    ctx->pc = 0x80025634u;
    ctx->downcount -= 15;
    // 80025634: lwz     r3, 2984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025638:
    ctx->pc = 0x80025638u;
    // 80025638: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_8002563C:
    ctx->pc = 0x8002563Cu;
    // 8002563C: addi    r6, r6, 17232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17232);

label_80025640:
    ctx->pc = 0x80025640u;
    // 80025640: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_80025644:
    ctx->pc = 0x80025644u;
    // 80025644: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_80025648:
    ctx->pc = 0x80025648u;
    // 80025648: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_8002564C:
    ctx->pc = 0x8002564Cu;
    // 8002564C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025650:
    ctx->pc = 0x80025650u;
    // 80025650: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80025654:
    ctx->pc = 0x80025654u;
    // 80025654: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80025658:
    ctx->pc = 0x80025658u;
    // 80025658: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8002565C:
    ctx->pc = 0x8002565Cu;
    // 8002565C: sth     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80025660:
    ctx->pc = 0x80025660u;
    // 80025660: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025664:
    ctx->pc = 0x80025664u;
    // 80025664: sth     r0, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025668:
    ctx->pc = 0x80025668u;
    // 80025668: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002566C:
    ctx->pc = 0x8002566Cu;
    // 8002566C: bl      0x80004000
    {
            ctx->lr = 0x80025670u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025670:
    ctx->pc = 0x80025670u;
    ctx->downcount -= 4;
    // 80025670: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80025674:
    ctx->pc = 0x80025674u;
    // 80025674: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80025678:
    ctx->pc = 0x80025678u;
    // 80025678: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8002567C:
    ctx->pc = 0x8002567Cu;
    // 8002567C: bl      0x80004000
    {
            ctx->lr = 0x80025680u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025680:
    ctx->pc = 0x80025680u;
    ctx->downcount -= 29;
    // 80025680: lhz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80025684:
    ctx->pc = 0x80025684u;
    // 80025684: addi    r31, r29, 2353
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(2353);

label_80025688:
    ctx->pc = 0x80025688u;
    // 80025688: sth     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002568C:
    ctx->pc = 0x8002568Cu;
    // 8002568C: lwz     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025690:
    ctx->pc = 0x80025690u;
    // 80025690: lwz     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025694:
    ctx->pc = 0x80025694u;
    // 80025694: lwz     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025698:
    ctx->pc = 0x80025698u;
    // 80025698: lwz     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8002569C:
    ctx->pc = 0x8002569Cu;
    // 8002569C: lwz     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800256A0:
    ctx->pc = 0x800256A0u;
    // 800256A0: lwz     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800256A4:
    ctx->pc = 0x800256A4u;
    // 800256A4: lwz     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800256A8:
    ctx->pc = 0x800256A8u;
    // 800256A8: lwz     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800256AC:
    ctx->pc = 0x800256ACu;
    // 800256AC: lwz     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800256B0:
    ctx->pc = 0x800256B0u;
    // 800256B0: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800256B4:
    ctx->pc = 0x800256B4u;
    // 800256B4: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800256B8:
    ctx->pc = 0x800256B8u;
    // 800256B8: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800256BC:
    ctx->pc = 0x800256BCu;
    // 800256BC: stw     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_800256C0:
    ctx->pc = 0x800256C0u;
    // 800256C0: stw     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_800256C4:
    ctx->pc = 0x800256C4u;
    // 800256C4: stw     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_800256C8:
    ctx->pc = 0x800256C8u;
    // 800256C8: stw     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800256CC:
    ctx->pc = 0x800256CCu;
    // 800256CC: stw     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800256D0:
    ctx->pc = 0x800256D0u;
    // 800256D0: stw     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800256D4:
    ctx->pc = 0x800256D4u;
    // 800256D4: stw     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800256D8:
    ctx->pc = 0x800256D8u;
    // 800256D8: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800256DC:
    ctx->pc = 0x800256DCu;
    // 800256DC: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800256E0:
    ctx->pc = 0x800256E0u;
    // 800256E0: stw     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800256E4:
    ctx->pc = 0x800256E4u;
    // 800256E4: stw     r12, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_800256E8:
    ctx->pc = 0x800256E8u;
    // 800256E8: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800256EC:
    ctx->pc = 0x800256ECu;
    // 800256EC: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800256F0:
    ctx->pc = 0x800256F0u;
    // 800256F0: bl      0x8004AF10
    {
            ctx->lr = 0x800256F4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800256F4:
    ctx->pc = 0x800256F4u;
    ctx->downcount -= 2;
    // 800256F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800256F8:
    ctx->pc = 0x800256F8u;
    // 800256F8: bl      0x8004AF10
    {
            ctx->lr = 0x800256FCu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800256FC:
    ctx->pc = 0x800256FCu;
    ctx->downcount -= 5;
    // 800256FC: lbz     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025700:
    ctx->pc = 0x80025700u;
    // 80025700: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025704:
    ctx->pc = 0x80025704u;
    // 80025704: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025708:
    ctx->pc = 0x80025708u;
    // 80025708: extsb. r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002570C:
    ctx->pc = 0x8002570Cu;
    // 8002570C: bc    4, 0, 0x8002571C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002571C;
        }
    }

label_80025710:
    ctx->pc = 0x80025710u;
    ctx->downcount -= 3;
    // 80025710: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025714:
    ctx->pc = 0x80025714u;
    // 80025714: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025718:
    ctx->pc = 0x80025718u;
    // 80025718: extsb r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002571C:
    ctx->pc = 0x8002571Cu;
    ctx->downcount -= 1;
    // 8002571C: bl      0x8004AF50
    {
            ctx->lr = 0x80025720u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025720:
    ctx->pc = 0x80025720u;
    ctx->downcount -= 4;
    // 80025720: lwz     r3, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025724:
    ctx->pc = 0x80025724u;
    // 80025724: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80025728:
    ctx->pc = 0x80025728u;
    // 80025728: cmplw   r0, r26
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002572C:
    ctx->pc = 0x8002572Cu;
    // 8002572C: bc    4, 2, 0x80025740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025740;
        }
    }

label_80025730:
    ctx->pc = 0x80025730u;
    ctx->downcount -= 2;
    // 80025730: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025734:
    ctx->pc = 0x80025734u;
    // 80025734: bl      0x8004AF50
    {
            ctx->lr = 0x80025738u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025738:
    ctx->pc = 0x80025738u;
    ctx->downcount -= 2;
    // 80025738: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002573C:
    ctx->pc = 0x8002573Cu;
    // 8002573C: b       0x800257B8
    {
            goto label_800257B8;
    }

label_80025740:
    ctx->pc = 0x80025740u;
    ctx->downcount -= 10;
    // 80025740: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025744:
    ctx->pc = 0x80025744u;
    // 80025744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025748:
    ctx->pc = 0x80025748u;
    // 80025748: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002574C:
    ctx->pc = 0x8002574Cu;
    // 8002574C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025750:
    ctx->pc = 0x80025750u;
    // 80025750: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025754:
    ctx->pc = 0x80025754u;
    // 80025754: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025758:
    ctx->pc = 0x80025758u;
    // 80025758: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002575C:
    ctx->pc = 0x8002575Cu;
    // 8002575C: bl      0x80004350
    {
            ctx->lr = 0x80025760u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80025760:
    ctx->pc = 0x80025760u;
    ctx->downcount -= 10;
    // 80025760: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025764:
    ctx->pc = 0x80025764u;
    // 80025764: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_80025768:
    ctx->pc = 0x80025768u;
    // 80025768: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002576C:
    ctx->pc = 0x8002576Cu;
    // 8002576C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025770:
    ctx->pc = 0x80025770u;
    // 80025770: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025774:
    ctx->pc = 0x80025774u;
    // 80025774: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025778:
    ctx->pc = 0x80025778u;
    // 80025778: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002577C:
    ctx->pc = 0x8002577Cu;
    // 8002577C: bl      0x80004000
    {
            ctx->lr = 0x80025780u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025780:
    ctx->pc = 0x80025780u;
    ctx->downcount -= 13;
    // 80025780: lbz     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025784:
    ctx->pc = 0x80025784u;
    // 80025784: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025788:
    ctx->pc = 0x80025788u;
    // 80025788: lwz     r4, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002578C:
    ctx->pc = 0x8002578Cu;
    // 8002578C: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025790:
    ctx->pc = 0x80025790u;
    // 80025790: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025794:
    ctx->pc = 0x80025794u;
    // 80025794: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025798:
    ctx->pc = 0x80025798u;
    // 80025798: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_8002579C:
    ctx->pc = 0x8002579Cu;
    // 8002579C: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_800257A0:
    ctx->pc = 0x800257A0u;
    // 800257A0: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_800257A4:
    ctx->pc = 0x800257A4u;
    // 800257A4: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_800257A8:
    ctx->pc = 0x800257A8u;
    // 800257A8: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_800257AC:
    ctx->pc = 0x800257ACu;
    // 800257AC: stb     r0, 353(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800257B0:
    ctx->pc = 0x800257B0u;
    // 800257B0: bl      0x8004AF50
    {
            ctx->lr = 0x800257B4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800257B4:
    ctx->pc = 0x800257B4u;
    ctx->downcount -= 1;
    // 800257B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800257B8:
    ctx->pc = 0x800257B8u;
    ctx->downcount -= 2;
    // 800257B8: cmpwi   r0, 0
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

label_800257BC:
    ctx->pc = 0x800257BCu;
    // 800257BC: bc    4, 2, 0x800257C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800257C8;
        }
    }

label_800257C0:
    ctx->pc = 0x800257C0u;
    ctx->downcount -= 2;
    // 800257C0: li      r26, -2
    ctx->gpr[26] = (u32)(s32)(-2);

label_800257C4:
    ctx->pc = 0x800257C4u;
    // 800257C4: b       0x800257E8
    {
            goto label_800257E8;
    }

label_800257C8:
    ctx->pc = 0x800257C8u;
    ctx->downcount -= 5;
    // 800257C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800257CC:
    ctx->pc = 0x800257CCu;
    // 800257CC: stb     r0, 2352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2352);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800257D0:
    ctx->pc = 0x800257D0u;
    // 800257D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800257D4:
    ctx->pc = 0x800257D4u;
    // 800257D4: stw     r28, 2968(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2968);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800257D8:
    ctx->pc = 0x800257D8u;
    // 800257D8: bl      0x8004AF50
    {
            ctx->lr = 0x800257DCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800257DC:
    ctx->pc = 0x800257DCu;
    ctx->downcount -= 2;
    // 800257DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800257E0:
    ctx->pc = 0x800257E0u;
    // 800257E0: b       0x80025810
    {
            goto label_80025810;
    }

label_800257E4:
    ctx->pc = 0x800257E4u;
    ctx->downcount -= 1;
    // 800257E4: li      r26, -4
    ctx->gpr[26] = (u32)(s32)(-4);

label_800257E8:
    ctx->pc = 0x800257E8u;
    ctx->downcount -= 2;
    // 800257E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800257EC:
    ctx->pc = 0x800257ECu;
    // 800257EC: bl      0x8004AF50
    {
            ctx->lr = 0x800257F0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800257F0:
    ctx->pc = 0x800257F0u;
    ctx->downcount -= 2;
    // 800257F0: cmpwi   r28, 0
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

label_800257F4:
    ctx->pc = 0x800257F4u;
    // 800257F4: bc    12, 2, 0x8002580C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002580C;
        }
    }

label_800257F8:
    ctx->pc = 0x800257F8u;
    ctx->downcount -= 6;
    // 800257F8: or   r12, r28, r28
    {
        ctx->gpr[12] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800257FC:
    ctx->pc = 0x800257FCu;
    // 800257FC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80025800:
    ctx->pc = 0x80025800u;
    // 80025800: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80025804:
    ctx->pc = 0x80025804u;
    // 80025804: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80025808:
    ctx->pc = 0x80025808u;
    // 80025808: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002580Cu;
            ctx->pc = target;
            return;
        }
    }

label_8002580C:
    ctx->pc = 0x8002580Cu;
    ctx->downcount -= 1;
    // 8002580C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80025810:
    ctx->pc = 0x80025810u;
    ctx->downcount -= 2;
    // 80025810: addi    r11, r1, 144
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(144);

label_80025814:
    ctx->pc = 0x80025814u;
    // 80025814: bl      0x800078A0
    {
            ctx->lr = 0x80025818u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_80025818:
    ctx->pc = 0x80025818u;
    ctx->downcount -= 5;
    // 80025818: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002581C:
    ctx->pc = 0x8002581Cu;
    // 8002581C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80025820:
    ctx->pc = 0x80025820u;
    // 80025820: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80025824:
    ctx->pc = 0x80025824u;
    // 80025824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80025828:
    ctx->pc = 0x80025828u;
    // 80025828: .long   0x00000000
    // embedded data

label_8002582C:
    ctx->pc = 0x8002582Cu;
    // 8002582C: .long   0x00000000
    // embedded data

label_80025830:
    ctx->pc = 0x80025830u;
    // 80025830: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80025834:
    ctx->pc = 0x80025834u;
    // 80025834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80025838:
    ctx->pc = 0x80025838u;
    // 80025838: lis     r6, -32656
    ctx->gpr[6] = ((u32)(s32)(-32656) << 16);

label_8002583C:
    ctx->pc = 0x8002583Cu;
    // 8002583C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025840:
    ctx->pc = 0x80025840u;
    // 80025840: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80025844:
    ctx->pc = 0x80025844u;
    // 80025844: addi    r6, r6, 31952
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31952);

label_80025848:
    ctx->pc = 0x80025848u;
    // 80025848: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002584C:
    ctx->pc = 0x8002584Cu;
    // 8002584C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025850:
    ctx->pc = 0x80025850u;
    // 80025850: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80025854:
    ctx->pc = 0x80025854u;
    // 80025854: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025858:
    ctx->pc = 0x80025858u;
    // 80025858: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8002585C:
    ctx->pc = 0x8002585Cu;
    // 8002585C: lwzx    r31, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025860:
    ctx->pc = 0x80025860u;
    // 80025860: bl      0x8004AF10
    {
            ctx->lr = 0x80025864u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025864:
    ctx->pc = 0x80025864u;
    ctx->downcount -= 2;
    // 80025864: cmpwi   r29, 0
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

label_80025868:
    ctx->pc = 0x80025868u;
    // 80025868: bc    12, 2, 0x800258E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800258E4;
        }
    }

label_8002586C:
    ctx->pc = 0x8002586Cu;
    ctx->downcount -= 2;
    // 8002586C: cmpwi   r30, 0
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

label_80025870:
    ctx->pc = 0x80025870u;
    // 80025870: bc    12, 2, 0x800258E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800258E4;
        }
    }

label_80025874:
    ctx->pc = 0x80025874u;
    ctx->downcount -= 28;
    // 80025874: lwz     r4, 2208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025878:
    ctx->pc = 0x80025878u;
    // 80025878: lwz     r0, 2212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002587C:
    ctx->pc = 0x8002587Cu;
    // 8002587C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025880:
    ctx->pc = 0x80025880u;
    // 80025880: stw     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025884:
    ctx->pc = 0x80025884u;
    // 80025884: lwz     r4, 2216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025888:
    ctx->pc = 0x80025888u;
    // 80025888: lwz     r0, 2220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002588C:
    ctx->pc = 0x8002588Cu;
    // 8002588C: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025890:
    ctx->pc = 0x80025890u;
    // 80025890: stw     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025894:
    ctx->pc = 0x80025894u;
    // 80025894: lwz     r4, 2224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025898:
    ctx->pc = 0x80025898u;
    // 80025898: lwz     r0, 2228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002589C:
    ctx->pc = 0x8002589Cu;
    // 8002589C: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258A0:
    ctx->pc = 0x800258A0u;
    // 800258A0: stw     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800258A4:
    ctx->pc = 0x800258A4u;
    // 800258A4: lwz     r0, 2232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258A8:
    ctx->pc = 0x800258A8u;
    // 800258A8: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258AC:
    ctx->pc = 0x800258ACu;
    // 800258AC: lwz     r4, 2236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2236);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800258B0:
    ctx->pc = 0x800258B0u;
    // 800258B0: lwz     r0, 2240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2240);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258B4:
    ctx->pc = 0x800258B4u;
    // 800258B4: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258B8:
    ctx->pc = 0x800258B8u;
    // 800258B8: stw     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800258BC:
    ctx->pc = 0x800258BCu;
    // 800258BC: lwz     r4, 2244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800258C0:
    ctx->pc = 0x800258C0u;
    // 800258C0: lwz     r0, 2248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258C4:
    ctx->pc = 0x800258C4u;
    // 800258C4: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258C8:
    ctx->pc = 0x800258C8u;
    // 800258C8: stw     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800258CC:
    ctx->pc = 0x800258CCu;
    // 800258CC: lwz     r4, 2252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800258D0:
    ctx->pc = 0x800258D0u;
    // 800258D0: lwz     r0, 2256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258D4:
    ctx->pc = 0x800258D4u;
    // 800258D4: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258D8:
    ctx->pc = 0x800258D8u;
    // 800258D8: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800258DC:
    ctx->pc = 0x800258DCu;
    // 800258DC: lwz     r0, 2260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258E0:
    ctx->pc = 0x800258E0u;
    // 800258E0: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800258E4:
    ctx->pc = 0x800258E4u;
    ctx->downcount -= 1;
    // 800258E4: bl      0x8004AF50
    {
            ctx->lr = 0x800258E8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800258E8:
    ctx->pc = 0x800258E8u;
    ctx->downcount -= 8;
    // 800258E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800258EC:
    ctx->pc = 0x800258ECu;
    // 800258EC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800258F0:
    ctx->pc = 0x800258F0u;
    // 800258F0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800258F4:
    ctx->pc = 0x800258F4u;
    // 800258F4: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800258F8:
    ctx->pc = 0x800258F8u;
    // 800258F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800258FC:
    ctx->pc = 0x800258FCu;
    // 800258FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80025900:
    ctx->pc = 0x80025900u;
    // 80025900: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80025904:
    ctx->pc = 0x80025904u;
    // 80025904: .long   0x00000000
    // embedded data

label_80025908:
    ctx->pc = 0x80025908u;
    // 80025908: .long   0x00000000
    // embedded data

label_8002590C:
    ctx->pc = 0x8002590Cu;
    // 8002590C: .long   0x00000000
    // embedded data

label_80025910:
    ctx->pc = 0x80025910u;
    // 80025910: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80025914:
    ctx->pc = 0x80025914u;
    // 80025914: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80025918:
    ctx->pc = 0x80025918u;
    // 80025918: li      r8, 18
    ctx->gpr[8] = (u32)(s32)(18);

label_8002591C:
    ctx->pc = 0x8002591Cu;
    // 8002591C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80025920:
    ctx->pc = 0x80025920u;
    // 80025920: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025924:
    ctx->pc = 0x80025924u;
    // 80025924: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80025928:
    ctx->pc = 0x80025928u;
    // 80025928: or   r5, r0, r5
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[5];
    }

label_8002592C:
    ctx->pc = 0x8002592Cu;
    // 8002592C: cmplwi  r4, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025930:
    ctx->pc = 0x80025930u;
    // 80025930: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025934:
    ctx->pc = 0x80025934u;
    // 80025934: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80025938:
    ctx->pc = 0x80025938u;
    // 80025938: srawi r5, r5, 31
    {
        u32 sh = 31u;
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

label_8002593C:
    ctx->pc = 0x8002593Cu;
    // 8002593C: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025940:
    ctx->pc = 0x80025940u;
    // 80025940: andc   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[5];
    }

label_80025944:
    ctx->pc = 0x80025944u;
    // 80025944: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025948:
    ctx->pc = 0x80025948u;
    // 80025948: stw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002594C:
    ctx->pc = 0x8002594Cu;
    // 8002594C: stw     r8, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025950:
    ctx->pc = 0x80025950u;
    // 80025950: sth     r7, 82(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80025954:
    ctx->pc = 0x80025954u;
    // 80025954: stb     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025958:
    ctx->pc = 0x80025958u;
    // 80025958: stw     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002595C:
    ctx->pc = 0x8002595Cu;
    // 8002595C: bc    12, 1, 0x80025A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80025A34;
        }
    }

label_80025960:
    ctx->pc = 0x80025960u;
    ctx->downcount -= 7;
    // 80025960: lis     r3, -32663
    ctx->gpr[3] = ((u32)(s32)(-32663) << 16);

label_80025964:
    ctx->pc = 0x80025964u;
    // 80025964: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80025968:
    ctx->pc = 0x80025968u;
    // 80025968: addi    r3, r3, -9740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9740);

label_8002596C:
    ctx->pc = 0x8002596Cu;
    // 8002596C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025970:
    ctx->pc = 0x80025970u;
    // 80025970: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_80025974:
    ctx->pc = 0x80025974u;
    // 80025974: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80025978:
    ctx->pc = 0x80025978u;
    ctx->downcount -= 3;
    // 80025978: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_8002597C:
    ctx->pc = 0x8002597Cu;
    // 8002597C: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025980:
    ctx->pc = 0x80025980u;
    // 80025980: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025984:
    ctx->pc = 0x80025984u;
    ctx->downcount -= 3;
    // 80025984: li      r0, 49
    ctx->gpr[0] = (u32)(s32)(49);

label_80025988:
    ctx->pc = 0x80025988u;
    // 80025988: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002598C:
    ctx->pc = 0x8002598Cu;
    // 8002598C: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025990:
    ctx->pc = 0x80025990u;
    ctx->downcount -= 3;
    // 80025990: li      r0, 51
    ctx->gpr[0] = (u32)(s32)(51);

label_80025994:
    ctx->pc = 0x80025994u;
    // 80025994: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025998:
    ctx->pc = 0x80025998u;
    // 80025998: b       0x80025A34
    {
            goto label_80025A34;
    }

label_8002599C:
    ctx->pc = 0x8002599Cu;
    ctx->downcount -= 3;
    // 8002599C: li      r0, 50
    ctx->gpr[0] = (u32)(s32)(50);

label_800259A0:
    ctx->pc = 0x800259A0u;
    // 800259A0: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259A4:
    ctx->pc = 0x800259A4u;
    // 800259A4: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259A8:
    ctx->pc = 0x800259A8u;
    ctx->downcount -= 3;
    // 800259A8: li      r0, 53
    ctx->gpr[0] = (u32)(s32)(53);

label_800259AC:
    ctx->pc = 0x800259ACu;
    // 800259AC: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259B0:
    ctx->pc = 0x800259B0u;
    // 800259B0: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259B4:
    ctx->pc = 0x800259B4u;
    ctx->downcount -= 3;
    // 800259B4: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_800259B8:
    ctx->pc = 0x800259B8u;
    // 800259B8: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259BC:
    ctx->pc = 0x800259BCu;
    // 800259BC: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259C0:
    ctx->pc = 0x800259C0u;
    ctx->downcount -= 3;
    // 800259C0: li      r0, 50
    ctx->gpr[0] = (u32)(s32)(50);

label_800259C4:
    ctx->pc = 0x800259C4u;
    // 800259C4: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259C8:
    ctx->pc = 0x800259C8u;
    // 800259C8: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259CC:
    ctx->pc = 0x800259CCu;
    ctx->downcount -= 3;
    // 800259CC: li      r0, 53
    ctx->gpr[0] = (u32)(s32)(53);

label_800259D0:
    ctx->pc = 0x800259D0u;
    // 800259D0: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259D4:
    ctx->pc = 0x800259D4u;
    // 800259D4: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259D8:
    ctx->pc = 0x800259D8u;
    ctx->downcount -= 3;
    // 800259D8: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_800259DC:
    ctx->pc = 0x800259DCu;
    // 800259DC: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259E0:
    ctx->pc = 0x800259E0u;
    // 800259E0: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259E4:
    ctx->pc = 0x800259E4u;
    ctx->downcount -= 3;
    // 800259E4: li      r0, 62
    ctx->gpr[0] = (u32)(s32)(62);

label_800259E8:
    ctx->pc = 0x800259E8u;
    // 800259E8: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259EC:
    ctx->pc = 0x800259ECu;
    // 800259EC: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259F0:
    ctx->pc = 0x800259F0u;
    ctx->downcount -= 3;
    // 800259F0: li      r0, 50
    ctx->gpr[0] = (u32)(s32)(50);

label_800259F4:
    ctx->pc = 0x800259F4u;
    // 800259F4: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800259F8:
    ctx->pc = 0x800259F8u;
    // 800259F8: b       0x80025A34
    {
            goto label_80025A34;
    }

label_800259FC:
    ctx->pc = 0x800259FCu;
    ctx->downcount -= 3;
    // 800259FC: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_80025A00:
    ctx->pc = 0x80025A00u;
    // 80025A00: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025A04:
    ctx->pc = 0x80025A04u;
    // 80025A04: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025A08:
    ctx->pc = 0x80025A08u;
    ctx->downcount -= 3;
    // 80025A08: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_80025A0C:
    ctx->pc = 0x80025A0Cu;
    // 80025A0C: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025A10:
    ctx->pc = 0x80025A10u;
    // 80025A10: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025A14:
    ctx->pc = 0x80025A14u;
    ctx->downcount -= 3;
    // 80025A14: li      r0, 52
    ctx->gpr[0] = (u32)(s32)(52);

label_80025A18:
    ctx->pc = 0x80025A18u;
    // 80025A18: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025A1C:
    ctx->pc = 0x80025A1Cu;
    // 80025A1C: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025A20:
    ctx->pc = 0x80025A20u;
    ctx->downcount -= 3;
    // 80025A20: li      r0, 53
    ctx->gpr[0] = (u32)(s32)(53);

label_80025A24:
    ctx->pc = 0x80025A24u;
    // 80025A24: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025A28:
    ctx->pc = 0x80025A28u;
    // 80025A28: b       0x80025A34
    {
            goto label_80025A34;
    }

label_80025A2C:
    ctx->pc = 0x80025A2Cu;
    ctx->downcount -= 2;
    // 80025A2C: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_80025A30:
    ctx->pc = 0x80025A30u;
    // 80025A30: stb     r0, 61(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025A34:
    ctx->pc = 0x80025A34u;
    ctx->downcount -= 25;
    // 80025A34: lwz     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025A38:
    ctx->pc = 0x80025A38u;
    // 80025A38: lwz     r12, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025A3C:
    ctx->pc = 0x80025A3Cu;
    // 80025A3C: lwz     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025A40:
    ctx->pc = 0x80025A40u;
    // 80025A40: lwz     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025A44:
    ctx->pc = 0x80025A44u;
    // 80025A44: lwz     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025A48:
    ctx->pc = 0x80025A48u;
    // 80025A48: lwz     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80025A4C:
    ctx->pc = 0x80025A4Cu;
    // 80025A4C: lwz     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80025A50:
    ctx->pc = 0x80025A50u;
    // 80025A50: lwz     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025A54:
    ctx->pc = 0x80025A54u;
    // 80025A54: lwz     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025A58:
    ctx->pc = 0x80025A58u;
    // 80025A58: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025A5C:
    ctx->pc = 0x80025A5Cu;
    // 80025A5C: lwz     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025A60:
    ctx->pc = 0x80025A60u;
    // 80025A60: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025A64:
    ctx->pc = 0x80025A64u;
    // 80025A64: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025A68:
    ctx->pc = 0x80025A68u;
    // 80025A68: stw     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025A6C:
    ctx->pc = 0x80025A6Cu;
    // 80025A6C: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80025A70:
    ctx->pc = 0x80025A70u;
    // 80025A70: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025A74:
    ctx->pc = 0x80025A74u;
    // 80025A74: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025A78:
    ctx->pc = 0x80025A78u;
    // 80025A78: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025A7C:
    ctx->pc = 0x80025A7Cu;
    // 80025A7C: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025A80:
    ctx->pc = 0x80025A80u;
    // 80025A80: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025A84:
    ctx->pc = 0x80025A84u;
    // 80025A84: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025A88:
    ctx->pc = 0x80025A88u;
    // 80025A88: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025A8C:
    ctx->pc = 0x80025A8Cu;
    // 80025A8C: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025A90:
    ctx->pc = 0x80025A90u;
    // 80025A90: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025A94:
    ctx->pc = 0x80025A94u;
    // 80025A94: bl      0x8004AF10
    {
            ctx->lr = 0x80025A98u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025A98:
    ctx->pc = 0x80025A98u;
    ctx->downcount -= 2;
    // 80025A98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025A9C:
    ctx->pc = 0x80025A9Cu;
    // 80025A9C: bl      0x8004AF10
    {
            ctx->lr = 0x80025AA0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025AA0:
    ctx->pc = 0x80025AA0u;
    ctx->downcount -= 5;
    // 80025AA0: lbz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025AA4:
    ctx->pc = 0x80025AA4u;
    // 80025AA4: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025AA8:
    ctx->pc = 0x80025AA8u;
    // 80025AA8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025AAC:
    ctx->pc = 0x80025AACu;
    // 80025AAC: extsb. r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80025AB0:
    ctx->pc = 0x80025AB0u;
    // 80025AB0: bc    4, 0, 0x80025AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025AC0;
        }
    }

label_80025AB4:
    ctx->pc = 0x80025AB4u;
    ctx->downcount -= 3;
    // 80025AB4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025AB8:
    ctx->pc = 0x80025AB8u;
    // 80025AB8: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025ABC:
    ctx->pc = 0x80025ABCu;
    // 80025ABC: extsb r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025AC0:
    ctx->pc = 0x80025AC0u;
    ctx->downcount -= 1;
    // 80025AC0: bl      0x8004AF50
    {
            ctx->lr = 0x80025AC4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025AC4:
    ctx->pc = 0x80025AC4u;
    ctx->downcount -= 4;
    // 80025AC4: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025AC8:
    ctx->pc = 0x80025AC8u;
    // 80025AC8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80025ACC:
    ctx->pc = 0x80025ACCu;
    // 80025ACC: cmplw   r0, r29
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025AD0:
    ctx->pc = 0x80025AD0u;
    // 80025AD0: bc    4, 2, 0x80025AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025AE4;
        }
    }

label_80025AD4:
    ctx->pc = 0x80025AD4u;
    ctx->downcount -= 2;
    // 80025AD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025AD8:
    ctx->pc = 0x80025AD8u;
    // 80025AD8: bl      0x8004AF50
    {
            ctx->lr = 0x80025ADCu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025ADC:
    ctx->pc = 0x80025ADCu;
    ctx->downcount -= 2;
    // 80025ADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80025AE0:
    ctx->pc = 0x80025AE0u;
    // 80025AE0: b       0x80025B5C
    {
            goto label_80025B5C;
    }

label_80025AE4:
    ctx->pc = 0x80025AE4u;
    ctx->downcount -= 10;
    // 80025AE4: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025AE8:
    ctx->pc = 0x80025AE8u;
    // 80025AE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025AEC:
    ctx->pc = 0x80025AECu;
    // 80025AEC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025AF0:
    ctx->pc = 0x80025AF0u;
    // 80025AF0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025AF4:
    ctx->pc = 0x80025AF4u;
    // 80025AF4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025AF8:
    ctx->pc = 0x80025AF8u;
    // 80025AF8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025AFC:
    ctx->pc = 0x80025AFCu;
    // 80025AFC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025B00:
    ctx->pc = 0x80025B00u;
    // 80025B00: bl      0x80004350
    {
            ctx->lr = 0x80025B04u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80025B04:
    ctx->pc = 0x80025B04u;
    ctx->downcount -= 10;
    // 80025B04: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025B08:
    ctx->pc = 0x80025B08u;
    // 80025B08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80025B0C:
    ctx->pc = 0x80025B0Cu;
    // 80025B0C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025B10:
    ctx->pc = 0x80025B10u;
    // 80025B10: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025B14:
    ctx->pc = 0x80025B14u;
    // 80025B14: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025B18:
    ctx->pc = 0x80025B18u;
    // 80025B18: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025B1C:
    ctx->pc = 0x80025B1Cu;
    // 80025B1C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025B20:
    ctx->pc = 0x80025B20u;
    // 80025B20: bl      0x80004000
    {
            ctx->lr = 0x80025B24u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025B24:
    ctx->pc = 0x80025B24u;
    ctx->downcount -= 13;
    // 80025B24: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025B28:
    ctx->pc = 0x80025B28u;
    // 80025B28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025B2C:
    ctx->pc = 0x80025B2Cu;
    // 80025B2C: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025B30:
    ctx->pc = 0x80025B30u;
    // 80025B30: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025B34:
    ctx->pc = 0x80025B34u;
    // 80025B34: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025B38:
    ctx->pc = 0x80025B38u;
    // 80025B38: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025B3C:
    ctx->pc = 0x80025B3Cu;
    // 80025B3C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80025B40:
    ctx->pc = 0x80025B40u;
    // 80025B40: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80025B44:
    ctx->pc = 0x80025B44u;
    // 80025B44: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025B48:
    ctx->pc = 0x80025B48u;
    // 80025B48: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80025B4C:
    ctx->pc = 0x80025B4Cu;
    // 80025B4C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80025B50:
    ctx->pc = 0x80025B50u;
    // 80025B50: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025B54:
    ctx->pc = 0x80025B54u;
    // 80025B54: bl      0x8004AF50
    {
            ctx->lr = 0x80025B58u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025B58:
    ctx->pc = 0x80025B58u;
    ctx->downcount -= 1;
    // 80025B58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80025B5C:
    ctx->pc = 0x80025B5Cu;
    ctx->downcount -= 8;
    // 80025B5C: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025B60:
    ctx->pc = 0x80025B60u;
    // 80025B60: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025B64:
    ctx->pc = 0x80025B64u;
    // 80025B64: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80025B68:
    ctx->pc = 0x80025B68u;
    // 80025B68: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80025B6C:
    ctx->pc = 0x80025B6Cu;
    // 80025B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80025B70:
    ctx->pc = 0x80025B70u;
    // 80025B70: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80025B74:
    ctx->pc = 0x80025B74u;
    // 80025B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80025B78:
    ctx->pc = 0x80025B78u;
    // 80025B78: .long   0x00000000
    // embedded data

label_80025B7C:
    ctx->pc = 0x80025B7Cu;
    // 80025B7C: .long   0x00000000
    // embedded data

label_80025B80:
    ctx->pc = 0x80025B80u;
    // 80025B80: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80025B84:
    ctx->pc = 0x80025B84u;
    // 80025B84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80025B88:
    ctx->pc = 0x80025B88u;
    // 80025B88: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80025B8C:
    ctx->pc = 0x80025B8Cu;
    // 80025B8C: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80025B90:
    ctx->pc = 0x80025B90u;
    // 80025B90: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025B94:
    ctx->pc = 0x80025B94u;
    // 80025B94: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80025B98:
    ctx->pc = 0x80025B98u;
    // 80025B98: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025B9C:
    ctx->pc = 0x80025B9Cu;
    // 80025B9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025BA0:
    ctx->pc = 0x80025BA0u;
    // 80025BA0: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80025BA4:
    ctx->pc = 0x80025BA4u;
    // 80025BA4: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025BA8:
    ctx->pc = 0x80025BA8u;
    // 80025BA8: stw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025BAC:
    ctx->pc = 0x80025BACu;
    // 80025BAC: stb     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80025BB0:
    ctx->pc = 0x80025BB0u;
    // 80025BB0: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80025BB4:
    ctx->pc = 0x80025BB4u;
    // 80025BB4: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025BB8:
    ctx->pc = 0x80025BB8u;
    // 80025BB8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80025BBC:
    ctx->pc = 0x80025BBCu;
    // 80025BBC: stb     r8, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80025BC0:
    ctx->pc = 0x80025BC0u;
    // 80025BC0: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025BC4:
    ctx->pc = 0x80025BC4u;
    // 80025BC4: sth     r0, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025BC8:
    ctx->pc = 0x80025BC8u;
    // 80025BC8: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025BCC:
    ctx->pc = 0x80025BCCu;
    // 80025BCC: bl      0x80004000
    {
            ctx->lr = 0x80025BD0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025BD0:
    ctx->pc = 0x80025BD0u;
    ctx->downcount -= 4;
    // 80025BD0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80025BD4:
    ctx->pc = 0x80025BD4u;
    // 80025BD4: addi    r4, r1, 9
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(9);

label_80025BD8:
    ctx->pc = 0x80025BD8u;
    // 80025BD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80025BDC:
    ctx->pc = 0x80025BDCu;
    // 80025BDC: bl      0x80004000
    {
            ctx->lr = 0x80025BE0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025BE0:
    ctx->pc = 0x80025BE0u;
    ctx->downcount -= 4;
    // 80025BE0: addi    r3, r1, 25
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(25);

label_80025BE4:
    ctx->pc = 0x80025BE4u;
    // 80025BE4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80025BE8:
    ctx->pc = 0x80025BE8u;
    // 80025BE8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80025BEC:
    ctx->pc = 0x80025BECu;
    // 80025BEC: bl      0x80004000
    {
            ctx->lr = 0x80025BF0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025BF0:
    ctx->pc = 0x80025BF0u;
    ctx->downcount -= 25;
    // 80025BF0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80025BF4:
    ctx->pc = 0x80025BF4u;
    // 80025BF4: lwz     r12, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025BF8:
    ctx->pc = 0x80025BF8u;
    // 80025BF8: lwz     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025BFC:
    ctx->pc = 0x80025BFCu;
    // 80025BFC: lwz     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025C00:
    ctx->pc = 0x80025C00u;
    // 80025C00: lwz     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025C04:
    ctx->pc = 0x80025C04u;
    // 80025C04: lwz     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80025C08:
    ctx->pc = 0x80025C08u;
    // 80025C08: lwz     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80025C0C:
    ctx->pc = 0x80025C0Cu;
    // 80025C0C: lwz     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025C10:
    ctx->pc = 0x80025C10u;
    // 80025C10: lwz     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025C14:
    ctx->pc = 0x80025C14u;
    // 80025C14: lwz     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025C18:
    ctx->pc = 0x80025C18u;
    // 80025C18: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025C1C:
    ctx->pc = 0x80025C1Cu;
    // 80025C1C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025C20:
    ctx->pc = 0x80025C20u;
    // 80025C20: stw     r30, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025C24:
    ctx->pc = 0x80025C24u;
    // 80025C24: stw     r12, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025C28:
    ctx->pc = 0x80025C28u;
    // 80025C28: stw     r11, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80025C2C:
    ctx->pc = 0x80025C2Cu;
    // 80025C2C: stw     r10, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025C30:
    ctx->pc = 0x80025C30u;
    // 80025C30: stw     r9, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025C34:
    ctx->pc = 0x80025C34u;
    // 80025C34: stw     r8, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025C38:
    ctx->pc = 0x80025C38u;
    // 80025C38: stw     r7, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025C3C:
    ctx->pc = 0x80025C3Cu;
    // 80025C3C: stw     r6, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025C40:
    ctx->pc = 0x80025C40u;
    // 80025C40: stw     r5, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025C44:
    ctx->pc = 0x80025C44u;
    // 80025C44: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025C48:
    ctx->pc = 0x80025C48u;
    // 80025C48: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025C4C:
    ctx->pc = 0x80025C4Cu;
    // 80025C4C: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025C50:
    ctx->pc = 0x80025C50u;
    // 80025C50: bl      0x8004AF10
    {
            ctx->lr = 0x80025C54u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025C54:
    ctx->pc = 0x80025C54u;
    ctx->downcount -= 2;
    // 80025C54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025C58:
    ctx->pc = 0x80025C58u;
    // 80025C58: bl      0x8004AF10
    {
            ctx->lr = 0x80025C5Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025C5C:
    ctx->pc = 0x80025C5Cu;
    ctx->downcount -= 5;
    // 80025C5C: lbz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025C60:
    ctx->pc = 0x80025C60u;
    // 80025C60: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025C64:
    ctx->pc = 0x80025C64u;
    // 80025C64: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025C68:
    ctx->pc = 0x80025C68u;
    // 80025C68: extsb. r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80025C6C:
    ctx->pc = 0x80025C6Cu;
    // 80025C6C: bc    4, 0, 0x80025C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025C7C;
        }
    }

label_80025C70:
    ctx->pc = 0x80025C70u;
    ctx->downcount -= 3;
    // 80025C70: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025C74:
    ctx->pc = 0x80025C74u;
    // 80025C74: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025C78:
    ctx->pc = 0x80025C78u;
    // 80025C78: extsb r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025C7C:
    ctx->pc = 0x80025C7Cu;
    ctx->downcount -= 1;
    // 80025C7C: bl      0x8004AF50
    {
            ctx->lr = 0x80025C80u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025C80:
    ctx->pc = 0x80025C80u;
    ctx->downcount -= 4;
    // 80025C80: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025C84:
    ctx->pc = 0x80025C84u;
    // 80025C84: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80025C88:
    ctx->pc = 0x80025C88u;
    // 80025C88: cmplw   r0, r29
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025C8C:
    ctx->pc = 0x80025C8Cu;
    // 80025C8C: bc    4, 2, 0x80025CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025CA0;
        }
    }

label_80025C90:
    ctx->pc = 0x80025C90u;
    ctx->downcount -= 2;
    // 80025C90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80025C94:
    ctx->pc = 0x80025C94u;
    // 80025C94: bl      0x8004AF50
    {
            ctx->lr = 0x80025C98u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025C98:
    ctx->pc = 0x80025C98u;
    ctx->downcount -= 2;
    // 80025C98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80025C9C:
    ctx->pc = 0x80025C9Cu;
    // 80025C9C: b       0x80025D18
    {
            goto label_80025D18;
    }

label_80025CA0:
    ctx->pc = 0x80025CA0u;
    ctx->downcount -= 10;
    // 80025CA0: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025CA4:
    ctx->pc = 0x80025CA4u;
    // 80025CA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025CA8:
    ctx->pc = 0x80025CA8u;
    // 80025CA8: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025CAC:
    ctx->pc = 0x80025CACu;
    // 80025CAC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025CB0:
    ctx->pc = 0x80025CB0u;
    // 80025CB0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025CB4:
    ctx->pc = 0x80025CB4u;
    // 80025CB4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025CB8:
    ctx->pc = 0x80025CB8u;
    // 80025CB8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025CBC:
    ctx->pc = 0x80025CBCu;
    // 80025CBC: bl      0x80004350
    {
            ctx->lr = 0x80025CC0u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80025CC0:
    ctx->pc = 0x80025CC0u;
    ctx->downcount -= 10;
    // 80025CC0: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025CC4:
    ctx->pc = 0x80025CC4u;
    // 80025CC4: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_80025CC8:
    ctx->pc = 0x80025CC8u;
    // 80025CC8: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025CCC:
    ctx->pc = 0x80025CCCu;
    // 80025CCC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025CD0:
    ctx->pc = 0x80025CD0u;
    // 80025CD0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025CD4:
    ctx->pc = 0x80025CD4u;
    // 80025CD4: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025CD8:
    ctx->pc = 0x80025CD8u;
    // 80025CD8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025CDC:
    ctx->pc = 0x80025CDCu;
    // 80025CDC: bl      0x80004000
    {
            ctx->lr = 0x80025CE0u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025CE0:
    ctx->pc = 0x80025CE0u;
    ctx->downcount -= 13;
    // 80025CE0: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025CE4:
    ctx->pc = 0x80025CE4u;
    // 80025CE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80025CE8:
    ctx->pc = 0x80025CE8u;
    // 80025CE8: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025CEC:
    ctx->pc = 0x80025CECu;
    // 80025CEC: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025CF0:
    ctx->pc = 0x80025CF0u;
    // 80025CF0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025CF4:
    ctx->pc = 0x80025CF4u;
    // 80025CF4: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025CF8:
    ctx->pc = 0x80025CF8u;
    // 80025CF8: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80025CFC:
    ctx->pc = 0x80025CFCu;
    // 80025CFC: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80025D00:
    ctx->pc = 0x80025D00u;
    // 80025D00: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025D04:
    ctx->pc = 0x80025D04u;
    // 80025D04: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80025D08:
    ctx->pc = 0x80025D08u;
    // 80025D08: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80025D0C:
    ctx->pc = 0x80025D0Cu;
    // 80025D0C: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025D10:
    ctx->pc = 0x80025D10u;
    // 80025D10: bl      0x8004AF50
    {
            ctx->lr = 0x80025D14u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025D14:
    ctx->pc = 0x80025D14u;
    ctx->downcount -= 1;
    // 80025D14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80025D18:
    ctx->pc = 0x80025D18u;
    ctx->downcount -= 8;
    // 80025D18: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025D1C:
    ctx->pc = 0x80025D1Cu;
    // 80025D1C: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025D20:
    ctx->pc = 0x80025D20u;
    // 80025D20: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80025D24:
    ctx->pc = 0x80025D24u;
    // 80025D24: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80025D28:
    ctx->pc = 0x80025D28u;
    // 80025D28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80025D2C:
    ctx->pc = 0x80025D2Cu;
    // 80025D2C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80025D30:
    ctx->pc = 0x80025D30u;
    // 80025D30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80025D34:
    ctx->pc = 0x80025D34u;
    // 80025D34: .long   0x00000000
    // embedded data

label_80025D38:
    ctx->pc = 0x80025D38u;
    // 80025D38: .long   0x00000000
    // embedded data

label_80025D3C:
    ctx->pc = 0x80025D3Cu;
    // 80025D3C: .long   0x00000000
    // embedded data

label_80025D40:
    ctx->pc = 0x80025D40u;
    // 80025D40: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80025D44:
    ctx->pc = 0x80025D44u;
    // 80025D44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80025D48:
    ctx->pc = 0x80025D48u;
    // 80025D48: rlwinm r9, r5, 0, 27, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000001Fu;
    }

label_80025D4C:
    ctx->pc = 0x80025D4Cu;
    // 80025D4C: li      r8, 22
    ctx->gpr[8] = (u32)(s32)(22);

label_80025D50:
    ctx->pc = 0x80025D50u;
    // 80025D50: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025D54:
    ctx->pc = 0x80025D54u;
    // 80025D54: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80025D58:
    ctx->pc = 0x80025D58u;
    // 80025D58: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025D5C:
    ctx->pc = 0x80025D5Cu;
    // 80025D5C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80025D60:
    ctx->pc = 0x80025D60u;
    // 80025D60: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80025D64:
    ctx->pc = 0x80025D64u;
    // 80025D64: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025D68:
    ctx->pc = 0x80025D68u;
    // 80025D68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025D6C:
    ctx->pc = 0x80025D6Cu;
    // 80025D6C: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_80025D70:
    ctx->pc = 0x80025D70u;
    // 80025D70: stw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025D74:
    ctx->pc = 0x80025D74u;
    // 80025D74: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80025D78:
    ctx->pc = 0x80025D78u;
    // 80025D78: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80025D7C:
    ctx->pc = 0x80025D7Cu;
    // 80025D7C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025D80:
    ctx->pc = 0x80025D80u;
    // 80025D80: stb     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80025D84:
    ctx->pc = 0x80025D84u;
    // 80025D84: stw     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025D88:
    ctx->pc = 0x80025D88u;
    // 80025D88: sth     r0, 90(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025D8C:
    ctx->pc = 0x80025D8Cu;
    // 80025D8C: stw     r7, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025D90:
    ctx->pc = 0x80025D90u;
    // 80025D90: bl      0x80004000
    {
            ctx->lr = 0x80025D94u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025D94:
    ctx->pc = 0x80025D94u;
    ctx->downcount -= 4;
    // 80025D94: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_80025D98:
    ctx->pc = 0x80025D98u;
    // 80025D98: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80025D9C:
    ctx->pc = 0x80025D9Cu;
    // 80025D9C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80025DA0:
    ctx->pc = 0x80025DA0u;
    // 80025DA0: bl      0x80004000
    {
            ctx->lr = 0x80025DA4u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025DA4:
    ctx->pc = 0x80025DA4u;
    ctx->downcount -= 4;
    // 80025DA4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025DA8:
    ctx->pc = 0x80025DA8u;
    // 80025DA8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80025DAC:
    ctx->pc = 0x80025DACu;
    // 80025DAC: addi    r3, r1, 73
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(73);

label_80025DB0:
    ctx->pc = 0x80025DB0u;
    // 80025DB0: bl      0x80004000
    {
            ctx->lr = 0x80025DB4u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025DB4:
    ctx->pc = 0x80025DB4u;
    ctx->downcount -= 25;
    // 80025DB4: lwz     r31, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025DB8:
    ctx->pc = 0x80025DB8u;
    // 80025DB8: lwz     r12, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025DBC:
    ctx->pc = 0x80025DBCu;
    // 80025DBC: lwz     r11, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025DC0:
    ctx->pc = 0x80025DC0u;
    // 80025DC0: lwz     r10, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025DC4:
    ctx->pc = 0x80025DC4u;
    // 80025DC4: lwz     r9, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025DC8:
    ctx->pc = 0x80025DC8u;
    // 80025DC8: lwz     r8, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80025DCC:
    ctx->pc = 0x80025DCCu;
    // 80025DCC: lwz     r7, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80025DD0:
    ctx->pc = 0x80025DD0u;
    // 80025DD0: lwz     r6, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025DD4:
    ctx->pc = 0x80025DD4u;
    // 80025DD4: lwz     r5, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025DD8:
    ctx->pc = 0x80025DD8u;
    // 80025DD8: lwz     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025DDC:
    ctx->pc = 0x80025DDCu;
    // 80025DDC: lwz     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025DE0:
    ctx->pc = 0x80025DE0u;
    // 80025DE0: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025DE4:
    ctx->pc = 0x80025DE4u;
    // 80025DE4: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025DE8:
    ctx->pc = 0x80025DE8u;
    // 80025DE8: stw     r12, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025DEC:
    ctx->pc = 0x80025DECu;
    // 80025DEC: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80025DF0:
    ctx->pc = 0x80025DF0u;
    // 80025DF0: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025DF4:
    ctx->pc = 0x80025DF4u;
    // 80025DF4: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025DF8:
    ctx->pc = 0x80025DF8u;
    // 80025DF8: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025DFC:
    ctx->pc = 0x80025DFCu;
    // 80025DFC: stw     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025E00:
    ctx->pc = 0x80025E00u;
    // 80025E00: stw     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025E04:
    ctx->pc = 0x80025E04u;
    // 80025E04: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025E08:
    ctx->pc = 0x80025E08u;
    // 80025E08: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025E0C:
    ctx->pc = 0x80025E0Cu;
    // 80025E0C: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025E10:
    ctx->pc = 0x80025E10u;
    // 80025E10: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025E14:
    ctx->pc = 0x80025E14u;
    // 80025E14: bl      0x8004AF10
    {
            ctx->lr = 0x80025E18u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025E18:
    ctx->pc = 0x80025E18u;
    ctx->downcount -= 2;
    // 80025E18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025E1C:
    ctx->pc = 0x80025E1Cu;
    // 80025E1C: bl      0x8004AF10
    {
            ctx->lr = 0x80025E20u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025E20:
    ctx->pc = 0x80025E20u;
    ctx->downcount -= 5;
    // 80025E20: lbz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025E24:
    ctx->pc = 0x80025E24u;
    // 80025E24: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025E28:
    ctx->pc = 0x80025E28u;
    // 80025E28: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025E2C:
    ctx->pc = 0x80025E2Cu;
    // 80025E2C: extsb. r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80025E30:
    ctx->pc = 0x80025E30u;
    // 80025E30: bc    4, 0, 0x80025E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025E40;
        }
    }

label_80025E34:
    ctx->pc = 0x80025E34u;
    ctx->downcount -= 3;
    // 80025E34: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025E38:
    ctx->pc = 0x80025E38u;
    // 80025E38: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025E3C:
    ctx->pc = 0x80025E3Cu;
    // 80025E3C: extsb r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025E40:
    ctx->pc = 0x80025E40u;
    ctx->downcount -= 1;
    // 80025E40: bl      0x8004AF50
    {
            ctx->lr = 0x80025E44u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025E44:
    ctx->pc = 0x80025E44u;
    ctx->downcount -= 4;
    // 80025E44: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025E48:
    ctx->pc = 0x80025E48u;
    // 80025E48: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80025E4C:
    ctx->pc = 0x80025E4Cu;
    // 80025E4C: cmplw   r0, r29
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80025E50:
    ctx->pc = 0x80025E50u;
    // 80025E50: bc    4, 2, 0x80025E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025E64;
        }
    }

label_80025E54:
    ctx->pc = 0x80025E54u;
    ctx->downcount -= 2;
    // 80025E54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025E58:
    ctx->pc = 0x80025E58u;
    // 80025E58: bl      0x8004AF50
    {
            ctx->lr = 0x80025E5Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025E5C:
    ctx->pc = 0x80025E5Cu;
    ctx->downcount -= 2;
    // 80025E5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80025E60:
    ctx->pc = 0x80025E60u;
    // 80025E60: b       0x80025EDC
    {
            goto label_80025EDC;
    }

label_80025E64:
    ctx->pc = 0x80025E64u;
    ctx->downcount -= 10;
    // 80025E64: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025E68:
    ctx->pc = 0x80025E68u;
    // 80025E68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80025E6C:
    ctx->pc = 0x80025E6Cu;
    // 80025E6C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025E70:
    ctx->pc = 0x80025E70u;
    // 80025E70: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025E74:
    ctx->pc = 0x80025E74u;
    // 80025E74: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025E78:
    ctx->pc = 0x80025E78u;
    // 80025E78: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025E7C:
    ctx->pc = 0x80025E7Cu;
    // 80025E7C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025E80:
    ctx->pc = 0x80025E80u;
    // 80025E80: bl      0x80004350
    {
            ctx->lr = 0x80025E84u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80025E84:
    ctx->pc = 0x80025E84u;
    ctx->downcount -= 10;
    // 80025E84: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025E88:
    ctx->pc = 0x80025E88u;
    // 80025E88: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80025E8C:
    ctx->pc = 0x80025E8Cu;
    // 80025E8C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025E90:
    ctx->pc = 0x80025E90u;
    // 80025E90: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80025E94:
    ctx->pc = 0x80025E94u;
    // 80025E94: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025E98:
    ctx->pc = 0x80025E98u;
    // 80025E98: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80025E9C:
    ctx->pc = 0x80025E9Cu;
    // 80025E9C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80025EA0:
    ctx->pc = 0x80025EA0u;
    // 80025EA0: bl      0x80004000
    {
            ctx->lr = 0x80025EA4u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025EA4:
    ctx->pc = 0x80025EA4u;
    ctx->downcount -= 13;
    // 80025EA4: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025EA8:
    ctx->pc = 0x80025EA8u;
    // 80025EA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80025EAC:
    ctx->pc = 0x80025EACu;
    // 80025EAC: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025EB0:
    ctx->pc = 0x80025EB0u;
    // 80025EB0: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025EB4:
    ctx->pc = 0x80025EB4u;
    // 80025EB4: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80025EB8:
    ctx->pc = 0x80025EB8u;
    // 80025EB8: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80025EBC:
    ctx->pc = 0x80025EBCu;
    // 80025EBC: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80025EC0:
    ctx->pc = 0x80025EC0u;
    // 80025EC0: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80025EC4:
    ctx->pc = 0x80025EC4u;
    // 80025EC4: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80025EC8:
    ctx->pc = 0x80025EC8u;
    // 80025EC8: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80025ECC:
    ctx->pc = 0x80025ECCu;
    // 80025ECC: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80025ED0:
    ctx->pc = 0x80025ED0u;
    // 80025ED0: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80025ED4:
    ctx->pc = 0x80025ED4u;
    // 80025ED4: bl      0x8004AF50
    {
            ctx->lr = 0x80025ED8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025ED8:
    ctx->pc = 0x80025ED8u;
    ctx->downcount -= 1;
    // 80025ED8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80025EDC:
    ctx->pc = 0x80025EDCu;
    ctx->downcount -= 8;
    // 80025EDC: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025EE0:
    ctx->pc = 0x80025EE0u;
    // 80025EE0: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80025EE4:
    ctx->pc = 0x80025EE4u;
    // 80025EE4: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80025EE8:
    ctx->pc = 0x80025EE8u;
    // 80025EE8: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80025EEC:
    ctx->pc = 0x80025EECu;
    // 80025EEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80025EF0:
    ctx->pc = 0x80025EF0u;
    // 80025EF0: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80025EF4:
    ctx->pc = 0x80025EF4u;
    // 80025EF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80025EF8:
    ctx->pc = 0x80025EF8u;
    // 80025EF8: .long   0x00000000
    // embedded data

label_80025EFC:
    ctx->pc = 0x80025EFCu;
    // 80025EFC: .long   0x00000000
    // embedded data

label_80025F00:
    ctx->pc = 0x80025F00u;
    // 80025F00: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80025F04:
    ctx->pc = 0x80025F04u;
    // 80025F04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80025F08:
    ctx->pc = 0x80025F08u;
    // 80025F08: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025F0C:
    ctx->pc = 0x80025F0Cu;
    // 80025F0C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80025F10:
    ctx->pc = 0x80025F10u;
    // 80025F10: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80025F14:
    ctx->pc = 0x80025F14u;
    // 80025F14: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80025F18:
    ctx->pc = 0x80025F18u;
    // 80025F18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025F1C:
    ctx->pc = 0x80025F1Cu;
    // 80025F1C: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_80025F20:
    ctx->pc = 0x80025F20u;
    // 80025F20: stw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025F24:
    ctx->pc = 0x80025F24u;
    // 80025F24: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80025F28:
    ctx->pc = 0x80025F28u;
    // 80025F28: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80025F2C:
    ctx->pc = 0x80025F2Cu;
    // 80025F2C: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80025F30:
    ctx->pc = 0x80025F30u;
    // 80025F30: li      r5, 23
    ctx->gpr[5] = (u32)(s32)(23);

label_80025F34:
    ctx->pc = 0x80025F34u;
    // 80025F34: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025F38:
    ctx->pc = 0x80025F38u;
    // 80025F38: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80025F3C:
    ctx->pc = 0x80025F3Cu;
    // 80025F3C: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025F40:
    ctx->pc = 0x80025F40u;
    // 80025F40: sth     r0, 90(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025F44:
    ctx->pc = 0x80025F44u;
    // 80025F44: stw     r7, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025F48:
    ctx->pc = 0x80025F48u;
    // 80025F48: bl      0x80004000
    {
            ctx->lr = 0x80025F4Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025F4C:
    ctx->pc = 0x80025F4Cu;
    ctx->downcount -= 4;
    // 80025F4C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_80025F50:
    ctx->pc = 0x80025F50u;
    // 80025F50: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80025F54:
    ctx->pc = 0x80025F54u;
    // 80025F54: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80025F58:
    ctx->pc = 0x80025F58u;
    // 80025F58: bl      0x80004000
    {
            ctx->lr = 0x80025F5Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80025F5C:
    ctx->pc = 0x80025F5Cu;
    ctx->downcount -= 28;
    // 80025F5C: lhz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80025F60:
    ctx->pc = 0x80025F60u;
    // 80025F60: sth     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80025F64:
    ctx->pc = 0x80025F64u;
    // 80025F64: lwz     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80025F68:
    ctx->pc = 0x80025F68u;
    // 80025F68: lwz     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80025F6C:
    ctx->pc = 0x80025F6Cu;
    // 80025F6C: lwz     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80025F70:
    ctx->pc = 0x80025F70u;
    // 80025F70: lwz     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80025F74:
    ctx->pc = 0x80025F74u;
    // 80025F74: lwz     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80025F78:
    ctx->pc = 0x80025F78u;
    // 80025F78: lwz     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80025F7C:
    ctx->pc = 0x80025F7Cu;
    // 80025F7C: lwz     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80025F80:
    ctx->pc = 0x80025F80u;
    // 80025F80: lwz     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80025F84:
    ctx->pc = 0x80025F84u;
    // 80025F84: lwz     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80025F88:
    ctx->pc = 0x80025F88u;
    // 80025F88: lwz     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025F8C:
    ctx->pc = 0x80025F8Cu;
    // 80025F8C: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025F90:
    ctx->pc = 0x80025F90u;
    // 80025F90: stw     r29, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025F94:
    ctx->pc = 0x80025F94u;
    // 80025F94: stw     r12, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025F98:
    ctx->pc = 0x80025F98u;
    // 80025F98: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80025F9C:
    ctx->pc = 0x80025F9Cu;
    // 80025F9C: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80025FA0:
    ctx->pc = 0x80025FA0u;
    // 80025FA0: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80025FA4:
    ctx->pc = 0x80025FA4u;
    // 80025FA4: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80025FA8:
    ctx->pc = 0x80025FA8u;
    // 80025FA8: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80025FAC:
    ctx->pc = 0x80025FACu;
    // 80025FAC: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80025FB0:
    ctx->pc = 0x80025FB0u;
    // 80025FB0: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80025FB4:
    ctx->pc = 0x80025FB4u;
    // 80025FB4: stw     r29, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80025FB8:
    ctx->pc = 0x80025FB8u;
    // 80025FB8: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80025FBC:
    ctx->pc = 0x80025FBCu;
    // 80025FBC: stw     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80025FC0:
    ctx->pc = 0x80025FC0u;
    // 80025FC0: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80025FC4:
    ctx->pc = 0x80025FC4u;
    // 80025FC4: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80025FC8:
    ctx->pc = 0x80025FC8u;
    // 80025FC8: bl      0x8004AF10
    {
            ctx->lr = 0x80025FCCu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025FCC:
    ctx->pc = 0x80025FCCu;
    ctx->downcount -= 2;
    // 80025FCC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80025FD0:
    ctx->pc = 0x80025FD0u;
    // 80025FD0: bl      0x8004AF10
    {
            ctx->lr = 0x80025FD4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80025FD4:
    ctx->pc = 0x80025FD4u;
    ctx->downcount -= 5;
    // 80025FD4: lbz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80025FD8:
    ctx->pc = 0x80025FD8u;
    // 80025FD8: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80025FDC:
    ctx->pc = 0x80025FDCu;
    // 80025FDC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80025FE0:
    ctx->pc = 0x80025FE0u;
    // 80025FE0: extsb. r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80025FE4:
    ctx->pc = 0x80025FE4u;
    // 80025FE4: bc    4, 0, 0x80025FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80025FF4;
        }
    }

label_80025FE8:
    ctx->pc = 0x80025FE8u;
    ctx->downcount -= 3;
    // 80025FE8: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80025FEC:
    ctx->pc = 0x80025FECu;
    // 80025FEC: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80025FF0:
    ctx->pc = 0x80025FF0u;
    // 80025FF0: extsb r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80025FF4:
    ctx->pc = 0x80025FF4u;
    ctx->downcount -= 1;
    // 80025FF4: bl      0x8004AF50
    {
            ctx->lr = 0x80025FF8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80025FF8:
    ctx->pc = 0x80025FF8u;
    ctx->downcount -= 4;
    // 80025FF8: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80025FFC:
    ctx->pc = 0x80025FFCu;
    // 80025FFC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80026000:
    ctx->pc = 0x80026000u;
    // 80026000: cmplw   r0, r29
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026004:
    ctx->pc = 0x80026004u;
    // 80026004: bc    4, 2, 0x80026018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026018;
        }
    }

label_80026008:
    ctx->pc = 0x80026008u;
    ctx->downcount -= 2;
    // 80026008: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002600C:
    ctx->pc = 0x8002600Cu;
    // 8002600C: bl      0x8004AF50
    {
            ctx->lr = 0x80026010u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026010:
    ctx->pc = 0x80026010u;
    ctx->downcount -= 2;
    // 80026010: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80026014:
    ctx->pc = 0x80026014u;
    // 80026014: b       0x80026090
    {
            goto label_80026090;
    }

label_80026018:
    ctx->pc = 0x80026018u;
    ctx->downcount -= 10;
    // 80026018: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002601C:
    ctx->pc = 0x8002601Cu;
    // 8002601C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026020:
    ctx->pc = 0x80026020u;
    // 80026020: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026024:
    ctx->pc = 0x80026024u;
    // 80026024: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026028:
    ctx->pc = 0x80026028u;
    // 80026028: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002602C:
    ctx->pc = 0x8002602Cu;
    // 8002602C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026030:
    ctx->pc = 0x80026030u;
    // 80026030: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026034:
    ctx->pc = 0x80026034u;
    // 80026034: bl      0x80004350
    {
            ctx->lr = 0x80026038u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026038:
    ctx->pc = 0x80026038u;
    ctx->downcount -= 10;
    // 80026038: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002603C:
    ctx->pc = 0x8002603Cu;
    // 8002603C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80026040:
    ctx->pc = 0x80026040u;
    // 80026040: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026044:
    ctx->pc = 0x80026044u;
    // 80026044: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026048:
    ctx->pc = 0x80026048u;
    // 80026048: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002604C:
    ctx->pc = 0x8002604Cu;
    // 8002604C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026050:
    ctx->pc = 0x80026050u;
    // 80026050: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026054:
    ctx->pc = 0x80026054u;
    // 80026054: bl      0x80004000
    {
            ctx->lr = 0x80026058u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026058:
    ctx->pc = 0x80026058u;
    ctx->downcount -= 13;
    // 80026058: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002605C:
    ctx->pc = 0x8002605Cu;
    // 8002605C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80026060:
    ctx->pc = 0x80026060u;
    // 80026060: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026064:
    ctx->pc = 0x80026064u;
    // 80026064: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026068:
    ctx->pc = 0x80026068u;
    // 80026068: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8002606C:
    ctx->pc = 0x8002606Cu;
    // 8002606C: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80026070:
    ctx->pc = 0x80026070u;
    // 80026070: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80026074:
    ctx->pc = 0x80026074u;
    // 80026074: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80026078:
    ctx->pc = 0x80026078u;
    // 80026078: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_8002607C:
    ctx->pc = 0x8002607Cu;
    // 8002607C: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80026080:
    ctx->pc = 0x80026080u;
    // 80026080: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80026084:
    ctx->pc = 0x80026084u;
    // 80026084: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026088:
    ctx->pc = 0x80026088u;
    // 80026088: bl      0x8004AF50
    {
            ctx->lr = 0x8002608Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_8002608C:
    ctx->pc = 0x8002608Cu;
    ctx->downcount -= 1;
    // 8002608C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80026090:
    ctx->pc = 0x80026090u;
    ctx->downcount -= 8;
    // 80026090: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026094:
    ctx->pc = 0x80026094u;
    // 80026094: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80026098:
    ctx->pc = 0x80026098u;
    // 80026098: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002609C:
    ctx->pc = 0x8002609Cu;
    // 8002609C: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800260A0:
    ctx->pc = 0x800260A0u;
    // 800260A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800260A4:
    ctx->pc = 0x800260A4u;
    // 800260A4: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_800260A8:
    ctx->pc = 0x800260A8u;
    // 800260A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800260AC:
    ctx->pc = 0x800260ACu;
    // 800260AC: .long   0x00000000
    // embedded data

label_800260B0:
    ctx->pc = 0x800260B0u;
    // 800260B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800260B4:
    ctx->pc = 0x800260B4u;
    // 800260B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800260B8:
    ctx->pc = 0x800260B8u;
    // 800260B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800260BC:
    ctx->pc = 0x800260BCu;
    // 800260BC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800260C0:
    ctx->pc = 0x800260C0u;
    // 800260C0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800260C4:
    ctx->pc = 0x800260C4u;
    // 800260C4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800260C8:
    ctx->pc = 0x800260C8u;
    // 800260C8: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800260CC:
    ctx->pc = 0x800260CCu;
    // 800260CC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800260D0:
    ctx->pc = 0x800260D0u;
    // 800260D0: bl      0x8004AF10
    {
            ctx->lr = 0x800260D4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800260D4:
    ctx->pc = 0x800260D4u;
    ctx->downcount -= 5;
    // 800260D4: lbz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800260D8:
    ctx->pc = 0x800260D8u;
    // 800260D8: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800260DC:
    ctx->pc = 0x800260DCu;
    // 800260DC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800260E0:
    ctx->pc = 0x800260E0u;
    // 800260E0: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800260E4:
    ctx->pc = 0x800260E4u;
    // 800260E4: bc    4, 0, 0x800260F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800260F4;
        }
    }

label_800260E8:
    ctx->pc = 0x800260E8u;
    ctx->downcount -= 3;
    // 800260E8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800260EC:
    ctx->pc = 0x800260ECu;
    // 800260EC: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800260F0:
    ctx->pc = 0x800260F0u;
    // 800260F0: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800260F4:
    ctx->pc = 0x800260F4u;
    ctx->downcount -= 1;
    // 800260F4: bl      0x8004AF50
    {
            ctx->lr = 0x800260F8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800260F8:
    ctx->pc = 0x800260F8u;
    ctx->downcount -= 6;
    // 800260F8: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800260FC:
    ctx->pc = 0x800260FCu;
    // 800260FC: extsb r0, r30
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[30];
    }

label_80026100:
    ctx->pc = 0x80026100u;
    // 80026100: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80026104:
    ctx->pc = 0x80026104u;
    // 80026104: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80026108:
    ctx->pc = 0x80026108u;
    // 80026108: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002610C:
    ctx->pc = 0x8002610Cu;
    // 8002610C: bc    12, 1, 0x80026118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026118;
        }
    }

label_80026110:
    ctx->pc = 0x80026110u;
    ctx->downcount -= 2;
    // 80026110: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80026114:
    ctx->pc = 0x80026114u;
    // 80026114: b       0x8002611C
    {
            goto label_8002611C;
    }

label_80026118:
    ctx->pc = 0x80026118u;
    ctx->downcount -= 1;
    // 80026118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002611C:
    ctx->pc = 0x8002611Cu;
    ctx->downcount -= 8;
    // 8002611C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026120:
    ctx->pc = 0x80026120u;
    // 80026120: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80026124:
    ctx->pc = 0x80026124u;
    // 80026124: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80026128:
    ctx->pc = 0x80026128u;
    // 80026128: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002612C:
    ctx->pc = 0x8002612Cu;
    // 8002612C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80026130:
    ctx->pc = 0x80026130u;
    // 80026130: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80026134:
    ctx->pc = 0x80026134u;
    // 80026134: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026138:
    ctx->pc = 0x80026138u;
    // 80026138: .long   0x00000000
    // embedded data

label_8002613C:
    ctx->pc = 0x8002613Cu;
    // 8002613C: .long   0x00000000
    // embedded data

label_80026140:
    ctx->pc = 0x80026140u;
    // 80026140: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80026144:
    ctx->pc = 0x80026144u;
    // 80026144: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80026148:
    ctx->pc = 0x80026148u;
    // 80026148: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002614C:
    ctx->pc = 0x8002614Cu;
    // 8002614C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80026150:
    ctx->pc = 0x80026150u;
    // 80026150: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80026154:
    ctx->pc = 0x80026154u;
    // 80026154: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026158:
    ctx->pc = 0x80026158u;
    // 80026158: bl      0x8004AF10
    {
            ctx->lr = 0x8002615Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002615C:
    ctx->pc = 0x8002615Cu;
    ctx->downcount -= 11;
    // 8002615C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026160:
    ctx->pc = 0x80026160u;
    // 80026160: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026164:
    ctx->pc = 0x80026164u;
    // 80026164: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026168:
    ctx->pc = 0x80026168u;
    // 80026168: stb     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002616C:
    ctx->pc = 0x8002616Cu;
    // 8002616C: mulli   r5, r0, 48
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026170:
    ctx->pc = 0x80026170u;
    // 80026170: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026174:
    ctx->pc = 0x80026174u;
    // 80026174: stb     r4, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80026178:
    ctx->pc = 0x80026178u;
    // 80026178: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002617C:
    ctx->pc = 0x8002617Cu;
    // 8002617C: bl      0x80004350
    {
            ctx->lr = 0x80026180u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026180:
    ctx->pc = 0x80026180u;
    ctx->downcount -= 2;
    // 80026180: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80026184:
    ctx->pc = 0x80026184u;
    // 80026184: bl      0x8004AF50
    {
            ctx->lr = 0x80026188u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026188:
    ctx->pc = 0x80026188u;
    ctx->downcount -= 7;
    // 80026188: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002618C:
    ctx->pc = 0x8002618Cu;
    // 8002618C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80026190:
    ctx->pc = 0x80026190u;
    // 80026190: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80026194:
    ctx->pc = 0x80026194u;
    // 80026194: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80026198:
    ctx->pc = 0x80026198u;
    // 80026198: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8002619C:
    ctx->pc = 0x8002619Cu;
    // 8002619C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800261A0:
    ctx->pc = 0x800261A0u;
    ctx->downcount -= 2;
    // 800261A0: stw     r3, -16952(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-16952);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800261A4:
    ctx->pc = 0x800261A4u;
    // 800261A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800261A8:
    ctx->pc = 0x800261A8u;
    // 800261A8: .long   0x00000000
    // embedded data

label_800261AC:
    ctx->pc = 0x800261ACu;
    // 800261AC: .long   0x00000000
    // embedded data

label_800261B0:
    ctx->pc = 0x800261B0u;
    ctx->downcount -= 25;
    // 800261B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800261B4:
    ctx->pc = 0x800261B4u;
    // 800261B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800261B8:
    // 800261B8: lis     r4, -32656
    ctx->gpr[4] = ((u32)(s32)(-32656) << 16);

label_800261BC:
    // 800261BC: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_800261C0:
    ctx->pc = 0x800261C0u;
    // 800261C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800261C4:
    // 800261C4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800261C8:
    // 800261C8: addi    r4, r4, 31952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31952);

label_800261CC:
    ctx->pc = 0x800261CCu;
    // 800261CC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800261D0:
    // 800261D0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800261D4:
    ctx->pc = 0x800261D4u;
    // 800261D4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800261D8:
    // 800261D8: li      r30, -1
    ctx->gpr[30] = (u32)(s32)(-1);

label_800261DC:
    ctx->pc = 0x800261DCu;
    // 800261DC: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800261E0:
    ctx->pc = 0x800261E0u;
    // 800261E0: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800261E4:
    // 800261E4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800261E8:
    ctx->pc = 0x800261E8u;
    // 800261E8: lwzx    r29, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800261EC:
    // 800261EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800261F0:
    ctx->pc = 0x800261F0u;
    // 800261F0: stb     r30, 2370(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2370);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_800261F4:
    // 800261F4: addi    r3, r29, 2376
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2376);

label_800261F8:
    ctx->pc = 0x800261F8u;
    // 800261F8: stb     r31, 2369(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800261FC:
    ctx->pc = 0x800261FCu;
    // 800261FC: stb     r30, 2368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2368);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80026200:
    ctx->pc = 0x80026200u;
    // 80026200: stb     r30, 2371(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80026204:
    ctx->pc = 0x80026204u;
    // 80026204: sth     r31, 2366(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80026208:
    ctx->pc = 0x80026208u;
    // 80026208: stb     r31, 2363(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_8002620C:
    ctx->pc = 0x8002620Cu;
    // 8002620C: sth     r31, 2364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2364);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80026210:
    // 80026210: bl      0x80004350
    {
            ctx->lr = 0x80026214u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026214:
    ctx->downcount -= 4;
    // 80026214: addi    r3, r29, 2448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2448);

label_80026218:
    // 80026218: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002621C:
    // 8002621C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80026220:
    // 80026220: bl      0x80004350
    {
            ctx->lr = 0x80026224u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026224:
    ctx->downcount -= 4;
    // 80026224: addi    r3, r29, 2520
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2520);

label_80026228:
    // 80026228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002622C:
    // 8002622C: li      r5, 264
    ctx->gpr[5] = (u32)(s32)(264);

label_80026230:
    // 80026230: bl      0x80004350
    {
            ctx->lr = 0x80026234u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026234:
    ctx->downcount -= 11;
    // 80026234: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80026238:
    ctx->pc = 0x80026238u;
    // 80026238: stw     r3, 2520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2520);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002623C:
    // 8002623C: li      r0, 252
    ctx->gpr[0] = (u32)(s32)(252);

label_80026240:
    ctx->pc = 0x80026240u;
    // 80026240: stw     r3, 2448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026244:
    ctx->pc = 0x80026244u;
    // 80026244: stw     r3, 2376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026248:
    ctx->pc = 0x80026248u;
    // 80026248: stb     r31, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_8002624C:
    ctx->pc = 0x8002624Cu;
    // 8002624C: stb     r30, 2980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2980);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80026250:
    ctx->pc = 0x80026250u;
    // 80026250: stb     r0, 2309(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2309);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026254:
    ctx->pc = 0x80026254u;
    // 80026254: lwz     r12, 2276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2276);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80026258:
    // 80026258: cmpwi   r12, 0
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

label_8002625C:
    // 8002625C: bc    12, 2, 0x80026270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026270;
        }
    }

label_80026260:
    ctx->downcount -= 5;
    // 80026260: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80026264:
    // 80026264: li      r4, 252
    ctx->gpr[4] = (u32)(s32)(252);

label_80026268:
    ctx->pc = 0x80026268u;
    // 80026268: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8002626C:
    ctx->pc = 0x8002626Cu;
    // 8002626C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80026270u;
            ctx->pc = target;
            return;
        }
    }

label_80026270:
    ctx->pc = 0x80026270u;
    ctx->downcount -= 9;
    // 80026270: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026274:
    ctx->pc = 0x80026274u;
    // 80026274: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80026278:
    ctx->pc = 0x80026278u;
    // 80026278: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002627C:
    ctx->pc = 0x8002627Cu;
    // 8002627C: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80026280:
    ctx->pc = 0x80026280u;
    // 80026280: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80026284:
    ctx->pc = 0x80026284u;
    // 80026284: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80026288:
    // 80026288: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8002628C:
    ctx->pc = 0x8002628Cu;
    // 8002628C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026290:
    ctx->pc = 0x80026290u;
    ctx->downcount -= 5;
    // 80026290: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80026294:
    ctx->pc = 0x80026294u;
    // 80026294: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80026298:
    ctx->pc = 0x80026298u;
    // 80026298: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002629C:
    // 8002629C: addi    r11, r1, 304
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(304);

label_800262A0:
    // 800262A0: bl      0x80007850
    {
            ctx->lr = 0x800262A4u;
            ctx->pc = 0x80007850u;
            return;
    }

label_800262A4:
    ctx->downcount -= 5;
    // 800262A4: lis     r4, -32656
    ctx->gpr[4] = ((u32)(s32)(-32656) << 16);

label_800262A8:
    // 800262A8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800262AC:
    // 800262AC: addi    r4, r4, 31952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31952);

label_800262B0:
    ctx->pc = 0x800262B0u;
    // 800262B0: lwzx    r25, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_800262B4:
    // 800262B4: bl      0x8004F230
    {
            ctx->lr = 0x800262B8u;
            ctx->pc = 0x8004F230u;
            return;
    }

label_800262B8:
    ctx->downcount -= 4;
    // 800262B8: lis     r27, -32667
    ctx->gpr[27] = ((u32)(s32)(-32667) << 16);

label_800262BC:
    // 800262BC: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800262C0:
    // 800262C0: addi    r3, r27, 26400
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(26400);

label_800262C4:
    // 800262C4: bl      0x8002D9F0
    {
            ctx->lr = 0x800262C8u;
            ctx->pc = 0x8002D9F0u;
            return;
    }

label_800262C8:
    ctx->downcount -= 5;
    // 800262C8: lis     r4, 17180
    ctx->gpr[4] = ((u32)(s32)(17180) << 16);

label_800262CC:
    // 800262CC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800262D0:
    // 800262D0: addi    r30, r4, -8573
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-8573);

label_800262D4:
    // 800262D4: li      r29, 9
    ctx->gpr[29] = (u32)(s32)(9);

label_800262D8:
    // 800262D8: lis     r31, -32768
    ctx->gpr[31] = ((u32)(s32)(-32768) << 16);

label_800262DC:
    ctx->downcount -= 2;
    // 800262DC: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_800262E0:
    // 800262E0: bl      0x8002D9F0
    {
            ctx->lr = 0x800262E4u;
            ctx->pc = 0x8002D9F0u;
            return;
    }

label_800262E4:
    ctx->downcount -= 2;
    // 800262E4: cmpw    r3, r28
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800262E8:
    // 800262E8: bc    4, 1, 0x80026328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026328;
        }
    }

label_800262EC:
    ctx->downcount -= 5;
    // 800262EC: subf   r5, r28, r3
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800262F0:
    // 800262F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800262F4:
    // 800262F4: addi    r4, r27, 26400
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(26400);

label_800262F8:
    // 800262F8: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_800262FC:
    // 800262FC: bl      0x8002D720
    {
            ctx->lr = 0x80026300u;
            ctx->pc = 0x8002D720u;
            return;
    }

label_80026300:
    ctx->downcount -= 3;
    // 80026300: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026304:
    // 80026304: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80026308:
    // 80026308: bl      0x8002D6A0
    {
            ctx->lr = 0x8002630Cu;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_8002630C:
    ctx->downcount -= 2;
    // 8002630C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026310:
    // 80026310: bc    12, 0, 0x80026360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026360;
        }
    }

label_80026314:
    ctx->downcount -= 4;
    // 80026314: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026318:
    // 80026318: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8002631C:
    // 8002631C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026320:
    // 80026320: bl      0x8002DAD0
    {
            ctx->lr = 0x80026324u;
            ctx->pc = 0x8002DAD0u;
            return;
    }

label_80026324:
    ctx->downcount -= 1;
    // 80026324: b       0x80026360
    {
            goto label_80026360;
    }

label_80026328:
    ctx->downcount -= 3;
    // 80026328: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_8002632C:
    // 8002632C: addi    r4, r27, 26400
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(26400);

label_80026330:
    // 80026330: bl      0x8002D6A0
    {
            ctx->lr = 0x80026334u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80026334:
    ctx->downcount -= 2;
    // 80026334: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026338:
    // 80026338: bc    12, 0, 0x8002634C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002634C;
        }
    }

label_8002633C:
    ctx->downcount -= 4;
    // 8002633C: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026340:
    // 80026340: addi    r5, r27, 26400
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(26400);

label_80026344:
    // 80026344: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026348:
    // 80026348: bl      0x8002DAD0
    {
            ctx->lr = 0x8002634Cu;
            ctx->pc = 0x8002DAD0u;
            return;
    }

label_8002634C:
    ctx->downcount -= 4;
    // 8002634C: addi    r3, r25, 2376
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2376);

label_80026350:
    // 80026350: addi    r4, r25, 2520
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026354:
    // 80026354: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80026358:
    // 80026358: bl      0x80004000
    {
            ctx->lr = 0x8002635Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002635C:
    ctx->pc = 0x8002635Cu;
    ctx->downcount -= 1;
    // 8002635C: stb     r29, 2371(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_80026360:
    ctx->downcount -= 1;
    // 80026360: bl      0x8004F230
    {
            ctx->lr = 0x80026364u;
            ctx->pc = 0x8004F230u;
            return;
    }

label_80026364:
    ctx->pc = 0x80026364u;
    ctx->downcount -= 52;
    // 80026364: lwz     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026368:
    // 80026368: subf   r3, r26, r4
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8002636C:
    // 8002636C: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_80026370:
    // 80026370: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_80026374:
    // 80026374: mulhwu   r0, r30, r0
    {
        u64 product = (u64)ctx->gpr[30] * (u64)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_80026378:
    // 80026378: rlwinm r0, r0, 17, 15, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 17u) & 0x0001FFFFu;
    }

label_8002637C:
    // 8002637C: divwu   r0, r3, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_80026380:
    // 80026380: cmplwi  r0, 0x0050
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0050u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026384:
    // 80026384: bc    12, 0, 0x800262DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800262DCu;
                return;
            }
            goto label_800262DC;
        }
    }

label_80026388:
    ctx->downcount -= 5;
    // 80026388: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002638C:
    ctx->pc = 0x8002638Cu;
    // 8002638C: stb     r0, 2369(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026390:
    // 80026390: addi    r11, r1, 304
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(304);

label_80026394:
    ctx->pc = 0x80026394u;
    // 80026394: sth     r0, 2366(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026398:
    // 80026398: bl      0x8000789C
    {
            ctx->lr = 0x8002639Cu;
            ctx->pc = 0x8000789Cu;
            return;
    }

label_8002639C:
    ctx->pc = 0x8002639Cu;
    ctx->downcount -= 5;
    // 8002639C: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800263A0:
    ctx->pc = 0x800263A0u;
    // 800263A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800263A4:
    // 800263A4: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_800263A8:
    ctx->pc = 0x800263A8u;
    // 800263A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800263AC:
    ctx->pc = 0x800263ACu;
    // 800263AC: .long   0x00000000
    // embedded data

label_800263B0:
    ctx->pc = 0x800263B0u;
    // 800263B0: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800263B4:
    ctx->pc = 0x800263B4u;
    // 800263B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800263B8:
    ctx->pc = 0x800263B8u;
    // 800263B8: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800263BC:
    // 800263BC: addi    r11, r1, 304
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(304);

label_800263C0:
    // 800263C0: bl      0x80007850
    {
            ctx->lr = 0x800263C4u;
            ctx->pc = 0x80007850u;
            return;
    }

label_800263C4:
    ctx->downcount -= 5;
    // 800263C4: lis     r4, -32656
    ctx->gpr[4] = ((u32)(s32)(-32656) << 16);

label_800263C8:
    // 800263C8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800263CC:
    // 800263CC: addi    r4, r4, 31952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31952);

label_800263D0:
    ctx->pc = 0x800263D0u;
    // 800263D0: lwzx    r25, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_800263D4:
    // 800263D4: bl      0x8004F230
    {
            ctx->lr = 0x800263D8u;
            ctx->pc = 0x8004F230u;
            return;
    }

label_800263D8:
    ctx->downcount -= 4;
    // 800263D8: lis     r27, -32667
    ctx->gpr[27] = ((u32)(s32)(-32667) << 16);

label_800263DC:
    // 800263DC: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800263E0:
    // 800263E0: addi    r3, r27, 26400
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(26400);

label_800263E4:
    // 800263E4: bl      0x8002D9F0
    {
            ctx->lr = 0x800263E8u;
            ctx->pc = 0x8002D9F0u;
            return;
    }

label_800263E8:
    ctx->downcount -= 5;
    // 800263E8: lis     r4, 17180
    ctx->gpr[4] = ((u32)(s32)(17180) << 16);

label_800263EC:
    // 800263EC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800263F0:
    // 800263F0: addi    r30, r4, -8573
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-8573);

label_800263F4:
    // 800263F4: li      r29, 11
    ctx->gpr[29] = (u32)(s32)(11);

label_800263F8:
    // 800263F8: lis     r31, -32768
    ctx->gpr[31] = ((u32)(s32)(-32768) << 16);

label_800263FC:
    ctx->downcount -= 2;
    // 800263FC: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026400:
    // 80026400: bl      0x8002D9F0
    {
            ctx->lr = 0x80026404u;
            ctx->pc = 0x8002D9F0u;
            return;
    }

label_80026404:
    ctx->downcount -= 2;
    // 80026404: cmpw    r3, r28
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026408:
    // 80026408: bc    4, 1, 0x80026448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026448;
        }
    }

label_8002640C:
    ctx->downcount -= 5;
    // 8002640C: subf   r5, r28, r3
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80026410:
    // 80026410: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80026414:
    // 80026414: addi    r4, r27, 26400
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(26400);

label_80026418:
    // 80026418: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_8002641C:
    // 8002641C: bl      0x8002D720
    {
            ctx->lr = 0x80026420u;
            ctx->pc = 0x8002D720u;
            return;
    }

label_80026420:
    ctx->downcount -= 3;
    // 80026420: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026424:
    // 80026424: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80026428:
    // 80026428: bl      0x8002D6A0
    {
            ctx->lr = 0x8002642Cu;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_8002642C:
    ctx->downcount -= 2;
    // 8002642C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026430:
    // 80026430: bc    12, 0, 0x80026480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026480;
        }
    }

label_80026434:
    ctx->downcount -= 4;
    // 80026434: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026438:
    // 80026438: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8002643C:
    // 8002643C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026440:
    // 80026440: bl      0x8002DAD0
    {
            ctx->lr = 0x80026444u;
            ctx->pc = 0x8002DAD0u;
            return;
    }

label_80026444:
    ctx->downcount -= 1;
    // 80026444: b       0x80026480
    {
            goto label_80026480;
    }

label_80026448:
    ctx->downcount -= 3;
    // 80026448: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_8002644C:
    // 8002644C: addi    r4, r27, 26400
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(26400);

label_80026450:
    // 80026450: bl      0x8002D6A0
    {
            ctx->lr = 0x80026454u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80026454:
    ctx->downcount -= 2;
    // 80026454: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026458:
    // 80026458: bc    12, 0, 0x8002646C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002646C;
        }
    }

label_8002645C:
    ctx->downcount -= 4;
    // 8002645C: addi    r3, r25, 2520
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026460:
    // 80026460: addi    r5, r27, 26400
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(26400);

label_80026464:
    // 80026464: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026468:
    // 80026468: bl      0x8002DAD0
    {
            ctx->lr = 0x8002646Cu;
            ctx->pc = 0x8002DAD0u;
            return;
    }

label_8002646C:
    ctx->downcount -= 4;
    // 8002646C: addi    r3, r25, 2448
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(2448);

label_80026470:
    // 80026470: addi    r4, r25, 2520
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(2520);

label_80026474:
    // 80026474: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80026478:
    // 80026478: bl      0x80004000
    {
            ctx->lr = 0x8002647Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_8002647C:
    ctx->pc = 0x8002647Cu;
    ctx->downcount -= 1;
    // 8002647C: stb     r29, 2371(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_80026480:
    ctx->downcount -= 1;
    // 80026480: bl      0x8004F230
    {
            ctx->lr = 0x80026484u;
            ctx->pc = 0x8004F230u;
            return;
    }

label_80026484:
    ctx->pc = 0x80026484u;
    ctx->downcount -= 52;
    // 80026484: lwz     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026488:
    // 80026488: subf   r3, r26, r4
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8002648C:
    // 8002648C: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_80026490:
    // 80026490: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_80026494:
    // 80026494: mulhwu   r0, r30, r0
    {
        u64 product = (u64)ctx->gpr[30] * (u64)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_80026498:
    // 80026498: rlwinm r0, r0, 17, 15, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 17u) & 0x0001FFFFu;
    }

label_8002649C:
    // 8002649C: divwu   r0, r3, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_800264A0:
    // 800264A0: cmplwi  r0, 0x0050
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0050u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800264A4:
    // 800264A4: bc    12, 0, 0x800263FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800263FCu;
                return;
            }
            goto label_800263FC;
        }
    }

label_800264A8:
    ctx->downcount -= 5;
    // 800264A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800264AC:
    ctx->pc = 0x800264ACu;
    // 800264AC: stb     r0, 2369(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800264B0:
    // 800264B0: addi    r11, r1, 304
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(304);

label_800264B4:
    ctx->pc = 0x800264B4u;
    // 800264B4: sth     r0, 2366(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800264B8:
    // 800264B8: bl      0x8000789C
    {
            ctx->lr = 0x800264BCu;
            ctx->pc = 0x8000789Cu;
            return;
    }

label_800264BC:
    ctx->pc = 0x800264BCu;
    ctx->downcount -= 5;
    // 800264BC: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800264C0:
    ctx->pc = 0x800264C0u;
    // 800264C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800264C4:
    // 800264C4: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_800264C8:
    ctx->pc = 0x800264C8u;
    // 800264C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800264CC:
    ctx->pc = 0x800264CCu;
    // 800264CC: .long   0x00000000
    // embedded data

label_800264D0:
    // 800264D0: lis     r5, -32656
    ctx->gpr[5] = ((u32)(s32)(-32656) << 16);

label_800264D4:
    // 800264D4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800264D8:
    // 800264D8: addi    r5, r5, 31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31952);

label_800264DC:
    // 800264DC: cmpwi   r4, 0
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

label_800264E0:
    ctx->pc = 0x800264E0u;
    // 800264E0: lwzx    r6, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800264E4:
    // 800264E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800264E8:
    ctx->pc = 0x800264E8u;
    // 800264E8: stb     r5, 2369(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_800264EC:
    // 800264EC: bc    4, 2, 0x80026514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026514;
        }
    }

label_800264F0:
    ctx->pc = 0x800264F0u;
    ctx->downcount -= 4;
    // 800264F0: lbz     r0, 2368(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2368);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800264F4:
    // 800264F4: li      r3, 9000
    ctx->gpr[3] = (u32)(s32)(9000);

label_800264F8:
    // 800264F8: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800264FC:
    // 800264FC: bc    4, 2, 0x80026504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026504;
        }
    }

label_80026500:
    ctx->downcount -= 1;
    // 80026500: li      r3, 1000
    ctx->gpr[3] = (u32)(s32)(1000);

label_80026504:
    ctx->pc = 0x80026504u;
    ctx->downcount -= 4;
    // 80026504: sth     r3, 2366(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80026508:
    // 80026508: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8002650C:
    ctx->pc = 0x8002650Cu;
    // 8002650C: stb     r0, 2371(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026510:
    ctx->pc = 0x80026510u;
    // 80026510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026514:
    ctx->pc = 0x80026514u;
    ctx->downcount -= 5;
    // 80026514: lbz     r4, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026518:
    // 80026518: cmpwi   r4, 0
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

label_8002651C:
    // 8002651C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80026520:
    ctx->pc = 0x80026520u;
    // 80026520: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026524:
    ctx->pc = 0x80026524u;
    // 80026524: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026528:
    ctx->pc = 0x80026528u;
    ctx->downcount -= 2;
    // 80026528: sth     r5, 2366(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002652C:
    // 8002652C: b       0x800261B0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_80026530:
    ctx->pc = 0x80026530u;
    ctx->downcount -= 1;
    // 80026530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026534:
    ctx->pc = 0x80026534u;
    // 80026534: .long   0x00000000
    // embedded data

label_80026538:
    ctx->pc = 0x80026538u;
    // 80026538: .long   0x00000000
    // embedded data

label_8002653C:
    ctx->pc = 0x8002653Cu;
    // 8002653C: .long   0x00000000
    // embedded data

label_80026540:
    // 80026540: lis     r5, -32656
    ctx->gpr[5] = ((u32)(s32)(-32656) << 16);

label_80026544:
    // 80026544: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80026548:
    // 80026548: addi    r5, r5, 31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31952);

label_8002654C:
    // 8002654C: cmpwi   r4, 0
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

label_80026550:
    ctx->pc = 0x80026550u;
    // 80026550: lwzx    r6, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026554:
    // 80026554: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80026558:
    ctx->pc = 0x80026558u;
    // 80026558: stb     r5, 2369(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8002655C:
    // 8002655C: bc    4, 2, 0x800265F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800265F0;
        }
    }

label_80026560:
    ctx->pc = 0x80026560u;
    ctx->downcount -= 7;
    // 80026560: sth     r5, 2366(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80026564:
    ctx->pc = 0x80026564u;
    // 80026564: lbz     r4, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026568:
    // 80026568: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8002656C:
    ctx->pc = 0x8002656Cu;
    // 8002656C: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026570:
    ctx->pc = 0x80026570u;
    // 80026570: lbz     r0, 2371(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2371);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026574:
    // 80026574: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026578:
    // 80026578: bc    4, 2, 0x800265C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800265C4;
        }
    }

label_8002657C:
    ctx->pc = 0x8002657Cu;
    ctx->downcount -= 3;
    // 8002657C: lbz     r0, 2973(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2973);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026580:
    // 80026580: cmplwi  r0, 0x0004
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

label_80026584:
    // 80026584: bc    12, 1, 0x8002658C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002658C;
        }
    }

label_80026588:
    ctx->pc = 0x80026588u;
    ctx->downcount -= 1;
    // 80026588: stb     r5, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8002658C:
    ctx->pc = 0x8002658Cu;
    ctx->downcount -= 3;
    // 8002658C: lbz     r0, 2973(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2973);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026590:
    // 80026590: cmplwi  r0, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026594:
    // 80026594: bc    12, 1, 0x800265A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800265A8;
        }
    }

label_80026598:
    ctx->downcount -= 4;
    // 80026598: li      r0, 5500
    ctx->gpr[0] = (u32)(s32)(5500);

label_8002659C:
    ctx->pc = 0x8002659Cu;
    // 8002659C: sth     r0, 2366(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800265A0:
    // 800265A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800265A4:
    ctx->pc = 0x800265A4u;
    // 800265A4: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800265A8:
    ctx->pc = 0x800265A8u;
    ctx->downcount -= 3;
    // 800265A8: lbz     r0, 2973(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2973);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800265AC:
    // 800265AC: cmplwi  r0, 0x000E
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Eu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800265B0:
    // 800265B0: bc    4, 2, 0x800265C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800265C4;
        }
    }

label_800265B4:
    ctx->downcount -= 4;
    // 800265B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800265B8:
    ctx->pc = 0x800265B8u;
    // 800265B8: stb     r0, 2371(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800265BC:
    // 800265BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800265C0:
    ctx->pc = 0x800265C0u;
    // 800265C0: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800265C4:
    ctx->pc = 0x800265C4u;
    ctx->downcount -= 3;
    // 800265C4: lbz     r0, 2371(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2371);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800265C8:
    // 800265C8: cmpwi   r0, 4
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

label_800265CC:
    // 800265CC: bc    4, 2, 0x80026604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026604;
        }
    }

label_800265D0:
    ctx->pc = 0x800265D0u;
    ctx->downcount -= 3;
    // 800265D0: lbz     r0, 2973(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2973);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800265D4:
    // 800265D4: cmplwi  r0, 0x001A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x001Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800265D8:
    // 800265D8: bc    4, 2, 0x80026604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026604;
        }
    }

label_800265DC:
    ctx->downcount -= 5;
    // 800265DC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_800265E0:
    ctx->pc = 0x800265E0u;
    // 800265E0: stb     r0, 2371(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800265E4:
    // 800265E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800265E8:
    ctx->pc = 0x800265E8u;
    // 800265E8: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800265EC:
    // 800265EC: b       0x80026604
    {
            goto label_80026604;
    }

label_800265F0:
    ctx->downcount -= 5;
    // 800265F0: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_800265F4:
    ctx->pc = 0x800265F4u;
    // 800265F4: sth     r0, 2366(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800265F8:
    ctx->pc = 0x800265F8u;
    // 800265F8: lbz     r4, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800265FC:
    // 800265FC: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_80026600:
    ctx->pc = 0x80026600u;
    // 80026600: stb     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026604:
    ctx->pc = 0x80026604u;
    ctx->downcount -= 3;
    // 80026604: lbz     r0, 2363(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2363);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026608:
    // 80026608: cmplwi  r0, 0x0064
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0064u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002660C:
    ctx->pc = 0x8002660Cu;
    // 8002660C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026610:
    ctx->downcount -= 1;
    // 80026610: b       0x800261B0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_80026614:
    ctx->pc = 0x80026614u;
    ctx->downcount -= 1;
    // 80026614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026618:
    ctx->pc = 0x80026618u;
    // 80026618: .long   0x00000000
    // embedded data

label_8002661C:
    ctx->pc = 0x8002661Cu;
    // 8002661C: .long   0x00000000
    // embedded data

label_80026620:
    // 80026620: lis     r5, -32656
    ctx->gpr[5] = ((u32)(s32)(-32656) << 16);

label_80026624:
    // 80026624: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80026628:
    // 80026628: addi    r5, r5, 31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31952);

label_8002662C:
    // 8002662C: cmpwi   r4, 0
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

label_80026630:
    ctx->pc = 0x80026630u;
    // 80026630: lwzx    r4, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026634:
    // 80026634: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80026638:
    ctx->pc = 0x80026638u;
    // 80026638: stb     r6, 2369(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002663C:
    // 8002663C: bc    4, 2, 0x80026764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026764;
        }
    }

label_80026640:
    ctx->downcount -= 3;
    // 80026640: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80026644:
    // 80026644: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80026648:
    // 80026648: b       0x8002668C
    {
            goto label_8002668C;
    }

label_8002664C:
    loop_8002664C(ctx);
    if (ctx->pc == 0x8002669Cu) goto label_8002669C;
    return;
label_80026650:
    ctx->pc = 0x80026650u;
    // 80026650: lwz     r3, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026654:
    // 80026654: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_80026658:
    ctx->pc = 0x80026658u;
    // 80026658: lbz     r7, 2854(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2854);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002665C:
    // 8002665C: add   r0, r10, r0
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80026660:
    ctx->pc = 0x80026660u;
    // 80026660: lbz     r6, 2853(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2853);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80026664:
    // 80026664: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80026668:
    ctx->pc = 0x80026668u;
    // 80026668: lbz     r8, 2855(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2855);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_8002666C:
    ctx->pc = 0x8002666Cu;
    // 8002666C: lbz     r5, 2852(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2852);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80026670:
    // 80026670: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026674:
    // 80026674: rlwimi r5, r6, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 8u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_80026678:
    // 80026678: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8002667C:
    // 8002667C: rlwimi r5, r7, 16, 8, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 16u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x00FF0000u) | (rot & 0x00FF0000u);
    }

label_80026680:
    // 80026680: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80026684:
    // 80026684: rlwimi r5, r8, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_80026688:
    ctx->pc = 0x80026688u;
    // 80026688: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002668C:
    ctx->pc = 0x8002668Cu;
    ctx->downcount -= 4;
    // 8002668C: lhz     r0, 2928(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2928);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80026690:
    // 80026690: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_80026694:
    // 80026694: cmplw   r10, r0
    {
        u32 val_a = (u32)(ctx->gpr[10]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026698:
    // 80026698: bc    12, 0, 0x8002664C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002664Cu;
                return;
            }
            goto label_8002664C;
        }
    }

label_8002669C:
    ctx->downcount -= 9;
    // 8002669C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800266A0:
    ctx->pc = 0x800266A0u;
    // 800266A0: stb     r5, 2363(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_800266A4:
    ctx->pc = 0x800266A4u;
    // 800266A4: lbz     r3, 2362(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2362);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800266A8:
    ctx->pc = 0x800266A8u;
    // 800266A8: lhz     r0, 2928(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2928);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800266AC:
    // 800266AC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800266B0:
    ctx->pc = 0x800266B0u;
    // 800266B0: stb     r0, 2362(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2362);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800266B4:
    // 800266B4: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_800266B8:
    // 800266B8: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800266BC:
    // 800266BC: bc    4, 0, 0x800266C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800266C8;
        }
    }

label_800266C0:
    ctx->pc = 0x800266C0u;
    ctx->downcount -= 2;
    // 800266C0: sth     r5, 2366(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_800266C4:
    ctx->pc = 0x800266C4u;
    // 800266C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_800266C8:
    ctx->downcount -= 5;
    // 800266C8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_800266CC:
    // 800266CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800266D0:
    // 800266D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800266D4:
    ctx->pc = 0x800266D4u;
    // 800266D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_800266D8:
    ctx->pc = 0x800266D8u;
    ctx->downcount -= 5;
    // 800266D8: lwz     r6, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800266DC:
    // 800266DC: add   r3, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800266E0:
    ctx->pc = 0x800266E0u;
    // 800266E0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800266E4:
    // 800266E4: cmpwi   r0, 0
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

label_800266E8:
    // 800266E8: bc    12, 2, 0x800266F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800266F4;
        }
    }

label_800266EC:
    ctx->downcount -= 2;
    // 800266EC: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_800266F0:
    ctx->pc = 0x800266F0u;
    // 800266F0: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800266F4:
    ctx->pc = 0x800266F4u;
    ctx->downcount -= 6;
    // 800266F4: lwz     r6, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800266F8:
    // 800266F8: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_800266FC:
    // 800266FC: add   r3, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026700:
    ctx->pc = 0x80026700u;
    // 80026700: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026704:
    // 80026704: cmpwi   r0, 0
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

label_80026708:
    // 80026708: bc    12, 2, 0x80026714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026714;
        }
    }

label_8002670C:
    ctx->downcount -= 2;
    // 8002670C: addi    r0, r7, 2
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(2);

label_80026710:
    ctx->pc = 0x80026710u;
    // 80026710: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026714:
    ctx->pc = 0x80026714u;
    ctx->downcount -= 6;
    // 80026714: lwz     r6, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026718:
    // 80026718: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8002671C:
    // 8002671C: add   r3, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026720:
    ctx->pc = 0x80026720u;
    // 80026720: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026724:
    // 80026724: cmpwi   r0, 0
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

label_80026728:
    // 80026728: bc    12, 2, 0x80026734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026734;
        }
    }

label_8002672C:
    ctx->downcount -= 2;
    // 8002672C: addi    r0, r7, 3
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(3);

label_80026730:
    ctx->pc = 0x80026730u;
    // 80026730: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026734:
    ctx->pc = 0x80026734u;
    ctx->downcount -= 6;
    // 80026734: lwz     r6, 2372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026738:
    // 80026738: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8002673C:
    // 8002673C: add   r3, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026740:
    ctx->pc = 0x80026740u;
    // 80026740: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026744:
    // 80026744: cmpwi   r0, 0
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

label_80026748:
    // 80026748: bc    12, 2, 0x80026754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026754;
        }
    }

label_8002674C:
    ctx->downcount -= 2;
    // 8002674C: addi    r0, r7, 4
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(4);

label_80026750:
    ctx->pc = 0x80026750u;
    // 80026750: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026754:
    ctx->downcount -= 3;
    // 80026754: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80026758:
    // 80026758: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_8002675C:
    // 8002675C: bc    16, 0, 0x800266D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800266D8u;
                return;
            }
            goto label_800266D8;
        }
    }

label_80026760:
    ctx->pc = 0x80026760u;
    ctx->downcount -= 1;
    // 80026760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026764:
    ctx->pc = 0x80026764u;
    ctx->downcount -= 5;
    // 80026764: lbz     r5, 2363(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2363);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80026768:
    // 80026768: cmplwi  r5, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002676C:
    // 8002676C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80026770:
    ctx->pc = 0x80026770u;
    // 80026770: stb     r0, 2363(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2363);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026774:
    // 80026774: bc    4, 0, 0x80026780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026780;
        }
    }

label_80026778:
    ctx->pc = 0x80026778u;
    ctx->downcount -= 2;
    // 80026778: sth     r6, 2366(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_8002677C:
    ctx->pc = 0x8002677Cu;
    // 8002677C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026780:
    ctx->downcount -= 1;
    // 80026780: b       0x800261B0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_80026784:
    ctx->pc = 0x80026784u;
    ctx->downcount -= 1;
    // 80026784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026788:
    ctx->pc = 0x80026788u;
    // 80026788: .long   0x00000000
    // embedded data

label_8002678C:
    ctx->pc = 0x8002678Cu;
    // 8002678C: .long   0x00000000
    // embedded data

label_80026790:
    ctx->pc = 0x80026790u;
    // 80026790: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80026794:
    ctx->pc = 0x80026794u;
    // 80026794: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80026798:
    ctx->pc = 0x80026798u;
    // 80026798: lis     r4, -32656
    ctx->gpr[4] = ((u32)(s32)(-32656) << 16);

label_8002679C:
    ctx->pc = 0x8002679Cu;
    // 8002679C: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800267A0:
    ctx->pc = 0x800267A0u;
    // 800267A0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800267A4:
    ctx->pc = 0x800267A4u;
    // 800267A4: addi    r4, r4, 31952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31952);

label_800267A8:
    ctx->pc = 0x800267A8u;
    // 800267A8: stw     r31, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800267AC:
    ctx->pc = 0x800267ACu;
    // 800267AC: stw     r30, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800267B0:
    ctx->pc = 0x800267B0u;
    // 800267B0: stw     r29, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800267B4:
    ctx->pc = 0x800267B4u;
    // 800267B4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800267B8:
    ctx->pc = 0x800267B8u;
    // 800267B8: stw     r28, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800267BC:
    ctx->pc = 0x800267BCu;
    // 800267BC: lwzx    r30, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800267C0:
    ctx->pc = 0x800267C0u;
    // 800267C0: lbz     r0, 2362(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2362);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800267C4:
    ctx->pc = 0x800267C4u;
    // 800267C4: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800267C8:
    ctx->pc = 0x800267C8u;
    // 800267C8: bc    4, 0, 0x80026960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026960;
        }
    }

label_800267CC:
    ctx->pc = 0x800267CCu;
    ctx->downcount -= 19;
    // 800267CC: addi    r0, r30, 2520
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2520);

label_800267D0:
    ctx->pc = 0x800267D0u;
    // 800267D0: stw     r0, 2372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800267D4:
    ctx->pc = 0x800267D4u;
    // 800267D4: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800267D8:
    ctx->pc = 0x800267D8u;
    // 800267D8: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_800267DC:
    ctx->pc = 0x800267DCu;
    // 800267DC: lbz     r4, 2362(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2362);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800267E0:
    ctx->pc = 0x800267E0u;
    // 800267E0: addi    r6, r6, 26144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(26144);

label_800267E4:
    ctx->pc = 0x800267E4u;
    // 800267E4: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_800267E8:
    ctx->pc = 0x800267E8u;
    // 800267E8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_800267EC:
    ctx->pc = 0x800267ECu;
    // 800267EC: addis   r4, r4, 1188
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1188) << 16);

label_800267F0:
    ctx->pc = 0x800267F0u;
    // 800267F0: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_800267F4:
    ctx->pc = 0x800267F4u;
    // 800267F4: addi    r4, r4, 80
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(80);

label_800267F8:
    ctx->pc = 0x800267F8u;
    // 800267F8: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_800267FC:
    ctx->pc = 0x800267FCu;
    // 800267FC: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026800:
    ctx->pc = 0x80026800u;
    // 80026800: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80026804:
    ctx->pc = 0x80026804u;
    // 80026804: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80026808:
    ctx->pc = 0x80026808u;
    // 80026808: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002680C:
    ctx->pc = 0x8002680Cu;
    // 8002680C: sth     r0, 90(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026810:
    ctx->pc = 0x80026810u;
    // 80026810: stw     r6, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026814:
    ctx->pc = 0x80026814u;
    // 80026814: bl      0x80004000
    {
            ctx->lr = 0x80026818u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026818:
    ctx->pc = 0x80026818u;
    ctx->downcount -= 4;
    // 80026818: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_8002681C:
    ctx->pc = 0x8002681Cu;
    // 8002681C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80026820:
    ctx->pc = 0x80026820u;
    // 80026820: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80026824:
    ctx->pc = 0x80026824u;
    // 80026824: bl      0x80004000
    {
            ctx->lr = 0x80026828u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026828:
    ctx->pc = 0x80026828u;
    ctx->downcount -= 29;
    // 80026828: lhz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002682C:
    ctx->pc = 0x8002682Cu;
    // 8002682C: addi    r31, r30, 2852
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(2852);

label_80026830:
    ctx->pc = 0x80026830u;
    // 80026830: sth     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026834:
    ctx->pc = 0x80026834u;
    // 80026834: lwz     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80026838:
    ctx->pc = 0x80026838u;
    // 80026838: lwz     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8002683C:
    ctx->pc = 0x8002683Cu;
    // 8002683C: lwz     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80026840:
    ctx->pc = 0x80026840u;
    // 80026840: lwz     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80026844:
    ctx->pc = 0x80026844u;
    // 80026844: lwz     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80026848:
    ctx->pc = 0x80026848u;
    // 80026848: lwz     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002684C:
    ctx->pc = 0x8002684Cu;
    // 8002684C: lwz     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026850:
    ctx->pc = 0x80026850u;
    // 80026850: lwz     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80026854:
    ctx->pc = 0x80026854u;
    // 80026854: lwz     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026858:
    ctx->pc = 0x80026858u;
    // 80026858: lwz     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002685C:
    ctx->pc = 0x8002685Cu;
    // 8002685C: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026860:
    ctx->pc = 0x80026860u;
    // 80026860: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80026864:
    ctx->pc = 0x80026864u;
    // 80026864: stw     r12, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026868:
    ctx->pc = 0x80026868u;
    // 80026868: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8002686C:
    ctx->pc = 0x8002686Cu;
    // 8002686C: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80026870:
    ctx->pc = 0x80026870u;
    // 80026870: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80026874:
    ctx->pc = 0x80026874u;
    // 80026874: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80026878:
    ctx->pc = 0x80026878u;
    // 80026878: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002687C:
    ctx->pc = 0x8002687Cu;
    // 8002687C: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026880:
    ctx->pc = 0x80026880u;
    // 80026880: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80026884:
    ctx->pc = 0x80026884u;
    // 80026884: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80026888:
    ctx->pc = 0x80026888u;
    // 80026888: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002688C:
    ctx->pc = 0x8002688Cu;
    // 8002688C: stw     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026890:
    ctx->pc = 0x80026890u;
    // 80026890: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026894:
    ctx->pc = 0x80026894u;
    // 80026894: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026898:
    ctx->pc = 0x80026898u;
    // 80026898: bl      0x8004AF10
    {
            ctx->lr = 0x8002689Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_8002689C:
    ctx->pc = 0x8002689Cu;
    ctx->downcount -= 2;
    // 8002689C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800268A0:
    ctx->pc = 0x800268A0u;
    // 800268A0: bl      0x8004AF10
    {
            ctx->lr = 0x800268A4u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800268A4:
    ctx->pc = 0x800268A4u;
    ctx->downcount -= 5;
    // 800268A4: lbz     r4, 1516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1516);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_800268A8:
    ctx->pc = 0x800268A8u;
    // 800268A8: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800268AC:
    ctx->pc = 0x800268ACu;
    // 800268AC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800268B0:
    ctx->pc = 0x800268B0u;
    // 800268B0: extsb. r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800268B4:
    ctx->pc = 0x800268B4u;
    // 800268B4: bc    4, 0, 0x800268C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800268C4;
        }
    }

label_800268B8:
    ctx->pc = 0x800268B8u;
    ctx->downcount -= 3;
    // 800268B8: lwz     r0, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800268BC:
    ctx->pc = 0x800268BCu;
    // 800268BC: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800268C0:
    ctx->pc = 0x800268C0u;
    // 800268C0: extsb r28, r0
    {
        ctx->gpr[28] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800268C4:
    ctx->pc = 0x800268C4u;
    ctx->downcount -= 1;
    // 800268C4: bl      0x8004AF50
    {
            ctx->lr = 0x800268C8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800268C8:
    ctx->pc = 0x800268C8u;
    ctx->downcount -= 4;
    // 800268C8: lwz     r3, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800268CC:
    ctx->pc = 0x800268CCu;
    // 800268CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800268D0:
    ctx->pc = 0x800268D0u;
    // 800268D0: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800268D4:
    ctx->pc = 0x800268D4u;
    // 800268D4: bc    4, 2, 0x800268E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800268E4;
        }
    }

label_800268D8:
    ctx->pc = 0x800268D8u;
    ctx->downcount -= 2;
    // 800268D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800268DC:
    ctx->pc = 0x800268DCu;
    // 800268DC: bl      0x8004AF50
    {
            ctx->lr = 0x800268E0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_800268E0:
    ctx->pc = 0x800268E0u;
    ctx->downcount -= 1;
    // 800268E0: b       0x80026958
    {
            goto label_80026958;
    }

label_800268E4:
    ctx->pc = 0x800268E4u;
    ctx->downcount -= 10;
    // 800268E4: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800268E8:
    ctx->pc = 0x800268E8u;
    // 800268E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800268EC:
    ctx->pc = 0x800268ECu;
    // 800268EC: lwz     r3, 1520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800268F0:
    ctx->pc = 0x800268F0u;
    // 800268F0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800268F4:
    ctx->pc = 0x800268F4u;
    // 800268F4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800268F8:
    ctx->pc = 0x800268F8u;
    // 800268F8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_800268FC:
    ctx->pc = 0x800268FCu;
    // 800268FC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026900:
    ctx->pc = 0x80026900u;
    // 80026900: bl      0x80004350
    {
            ctx->lr = 0x80026904u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026904:
    ctx->pc = 0x80026904u;
    ctx->downcount -= 10;
    // 80026904: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026908:
    ctx->pc = 0x80026908u;
    // 80026908: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8002690C:
    ctx->pc = 0x8002690Cu;
    // 8002690C: lwz     r3, 1520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026910:
    ctx->pc = 0x80026910u;
    // 80026910: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026914:
    ctx->pc = 0x80026914u;
    // 80026914: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026918:
    ctx->pc = 0x80026918u;
    // 80026918: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002691C:
    ctx->pc = 0x8002691Cu;
    // 8002691C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026920:
    ctx->pc = 0x80026920u;
    // 80026920: bl      0x80004000
    {
            ctx->lr = 0x80026924u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026924:
    ctx->pc = 0x80026924u;
    ctx->downcount -= 13;
    // 80026924: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026928:
    ctx->pc = 0x80026928u;
    // 80026928: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002692C:
    ctx->pc = 0x8002692Cu;
    // 8002692C: lwz     r4, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026930:
    ctx->pc = 0x80026930u;
    // 80026930: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026934:
    ctx->pc = 0x80026934u;
    // 80026934: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80026938:
    ctx->pc = 0x80026938u;
    // 80026938: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002693C:
    ctx->pc = 0x8002693Cu;
    // 8002693C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80026940:
    ctx->pc = 0x80026940u;
    // 80026940: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80026944:
    ctx->pc = 0x80026944u;
    // 80026944: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80026948:
    ctx->pc = 0x80026948u;
    // 80026948: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_8002694C:
    ctx->pc = 0x8002694Cu;
    // 8002694C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80026950:
    ctx->pc = 0x80026950u;
    // 80026950: stb     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026954:
    ctx->pc = 0x80026954u;
    // 80026954: bl      0x8004AF50
    {
            ctx->lr = 0x80026958u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026958:
    ctx->pc = 0x80026958u;
    ctx->downcount -= 2;
    // 80026958: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002695C:
    ctx->pc = 0x8002695Cu;
    // 8002695C: b       0x80026970
    {
            goto label_80026970;
    }

label_80026960:
    ctx->pc = 0x80026960u;
    ctx->downcount -= 4;
    // 80026960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80026964:
    ctx->pc = 0x80026964u;
    // 80026964: stb     r0, 2369(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026968:
    ctx->pc = 0x80026968u;
    // 80026968: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002696C:
    ctx->pc = 0x8002696Cu;
    // 8002696C: stb     r0, 2362(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2362);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026970:
    ctx->pc = 0x80026970u;
    ctx->downcount -= 2;
    // 80026970: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026974:
    ctx->pc = 0x80026974u;
    // 80026974: bc    12, 2, 0x80026A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026A54;
        }
    }

label_80026978:
    ctx->pc = 0x80026978u;
    ctx->downcount -= 7;
    // 80026978: lis     r3, -32667
    ctx->gpr[3] = ((u32)(s32)(-32667) << 16);

label_8002697C:
    ctx->pc = 0x8002697Cu;
    // 8002697C: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_80026980:
    ctx->pc = 0x80026980u;
    // 80026980: addi    r3, r3, 26400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26400);

label_80026984:
    ctx->pc = 0x80026984u;
    // 80026984: addi    r5, r1, 108
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(108);

label_80026988:
    ctx->pc = 0x80026988u;
    // 80026988: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_8002698C:
    ctx->pc = 0x8002698Cu;
    // 8002698C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80026990:
    loop_80026990(ctx);
    if (ctx->pc == 0x800269A4u) goto label_800269A4;
    return;
label_80026994:
    ctx->pc = 0x80026994u;
    // 80026994: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80026998:
    ctx->pc = 0x80026998u;
    // 80026998: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002699C:
    ctx->pc = 0x8002699Cu;
    // 8002699C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_800269A0:
    // 800269A0: bc    16, 0, 0x80026990
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80026990u;
                return;
            }
            goto label_80026990;
        }
    }

label_800269A4:
    ctx->pc = 0x800269A4u;
    ctx->downcount -= 6;
    // 800269A4: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800269A8:
    ctx->pc = 0x800269A8u;
    // 800269A8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_800269AC:
    ctx->pc = 0x800269ACu;
    // 800269AC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800269B0:
    ctx->pc = 0x800269B0u;
    // 800269B0: lwz     r0, 2520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800269B4:
    ctx->pc = 0x800269B4u;
    // 800269B4: cmplwi  r0, 0x0001
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

label_800269B8:
    ctx->pc = 0x800269B8u;
    // 800269B8: bc    12, 1, 0x800269C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800269C8;
        }
    }

label_800269BC:
    ctx->pc = 0x800269BCu;
    ctx->downcount -= 3;
    // 800269BC: lwz     r0, 2524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800269C0:
    ctx->pc = 0x800269C0u;
    // 800269C0: cmplwi  r0, 0x0001
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

label_800269C4:
    ctx->pc = 0x800269C4u;
    // 800269C4: bc    4, 1, 0x80026A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026A4C;
        }
    }

label_800269C8:
    ctx->pc = 0x800269C8u;
    ctx->downcount -= 3;
    // 800269C8: lbz     r0, 2368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2368);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800269CC:
    ctx->pc = 0x800269CCu;
    // 800269CC: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800269D0:
    ctx->pc = 0x800269D0u;
    // 800269D0: bc    12, 2, 0x800269EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800269EC;
        }
    }

label_800269D4:
    ctx->pc = 0x800269D4u;
    ctx->downcount -= 4;
    // 800269D4: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_800269D8:
    ctx->pc = 0x800269D8u;
    // 800269D8: addi    r3, r30, 2520
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2520);

label_800269DC:
    ctx->pc = 0x800269DCu;
    // 800269DC: addi    r4, r4, 26400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26400);

label_800269E0:
    ctx->pc = 0x800269E0u;
    // 800269E0: bl      0x8002D6A0
    {
            ctx->lr = 0x800269E4u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_800269E4:
    ctx->pc = 0x800269E4u;
    ctx->downcount -= 2;
    // 800269E4: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800269E8:
    ctx->pc = 0x800269E8u;
    // 800269E8: bc    12, 2, 0x80026A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026A0C;
        }
    }

label_800269EC:
    ctx->pc = 0x800269ECu;
    ctx->downcount -= 3;
    // 800269EC: lbz     r0, 2368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2368);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800269F0:
    ctx->pc = 0x800269F0u;
    // 800269F0: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800269F4:
    ctx->pc = 0x800269F4u;
    // 800269F4: bc    4, 2, 0x80026A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026A4C;
        }
    }

label_800269F8:
    ctx->pc = 0x800269F8u;
    ctx->downcount -= 3;
    // 800269F8: addi    r3, r30, 2520
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2520);

label_800269FC:
    ctx->pc = 0x800269FCu;
    // 800269FC: addi    r4, r1, 112
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(112);

label_80026A00:
    ctx->pc = 0x80026A00u;
    // 80026A00: bl      0x8002D6A0
    {
            ctx->lr = 0x80026A04u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80026A04:
    ctx->pc = 0x80026A04u;
    ctx->downcount -= 2;
    // 80026A04: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026A08:
    ctx->pc = 0x80026A08u;
    // 80026A08: bc    4, 2, 0x80026A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026A4C;
        }
    }

label_80026A0C:
    ctx->pc = 0x80026A0Cu;
    ctx->downcount -= 3;
    // 80026A0C: addi    r3, r30, 2520
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2520);

label_80026A10:
    ctx->pc = 0x80026A10u;
    // 80026A10: addi    r4, r30, 2448
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2448);

label_80026A14:
    ctx->pc = 0x80026A14u;
    // 80026A14: bl      0x8002D6A0
    {
            ctx->lr = 0x80026A18u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80026A18:
    ctx->pc = 0x80026A18u;
    ctx->downcount -= 2;
    // 80026A18: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026A1C:
    ctx->pc = 0x80026A1Cu;
    // 80026A1C: bc    4, 2, 0x80026A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026A4C;
        }
    }

label_80026A20:
    ctx->pc = 0x80026A20u;
    ctx->downcount -= 4;
    // 80026A20: addi    r3, r30, 2520
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2520);

label_80026A24:
    ctx->pc = 0x80026A24u;
    // 80026A24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026A28:
    ctx->pc = 0x80026A28u;
    // 80026A28: li      r5, 264
    ctx->gpr[5] = (u32)(s32)(264);

label_80026A2C:
    ctx->pc = 0x80026A2Cu;
    // 80026A2C: bl      0x80004350
    {
            ctx->lr = 0x80026A30u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026A30:
    ctx->pc = 0x80026A30u;
    ctx->downcount -= 7;
    // 80026A30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80026A34:
    ctx->pc = 0x80026A34u;
    // 80026A34: stw     r0, 2520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026A38:
    ctx->pc = 0x80026A38u;
    // 80026A38: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80026A3C:
    ctx->pc = 0x80026A3Cu;
    // 80026A3C: stb     r3, 2371(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80026A40:
    ctx->pc = 0x80026A40u;
    // 80026A40: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80026A44:
    ctx->pc = 0x80026A44u;
    // 80026A44: sth     r0, 2366(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026A48:
    ctx->pc = 0x80026A48u;
    // 80026A48: b       0x80026A54
    {
            goto label_80026A54;
    }

label_80026A4C:
    ctx->pc = 0x80026A4Cu;
    ctx->downcount -= 2;
    // 80026A4C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80026A50:
    ctx->pc = 0x80026A50u;
    // 80026A50: bl      0x800261B0
    {
            ctx->lr = 0x80026A54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_80026A54:
    ctx->pc = 0x80026A54u;
    ctx->downcount -= 9;
    // 80026A54: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026A58:
    ctx->pc = 0x80026A58u;
    // 80026A58: lwz     r31, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80026A5C:
    ctx->pc = 0x80026A5Cu;
    // 80026A5C: lwz     r30, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80026A60:
    ctx->pc = 0x80026A60u;
    // 80026A60: lwz     r29, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80026A64:
    ctx->pc = 0x80026A64u;
    // 80026A64: lwz     r28, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80026A68:
    ctx->pc = 0x80026A68u;
    // 80026A68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80026A6C:
    ctx->pc = 0x80026A6Cu;
    // 80026A6C: addi    r1, r1, 208
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(208);

label_80026A70:
    ctx->pc = 0x80026A70u;
    // 80026A70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800231C0;
        }
    }

label_80026A74:
    ctx->pc = 0x80026A74u;
    // 80026A74: .long   0x00000000
    // embedded data

label_80026A78:
    ctx->pc = 0x80026A78u;
    // 80026A78: .long   0x00000000
    // embedded data

label_80026A7C:
    ctx->pc = 0x80026A7Cu;
    // 80026A7C: .long   0x00000000
    // embedded data

label_80026A80:
    ctx->pc = 0x80026A80u;
    // 80026A80: stwu     r1, -720(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-720);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80026A84:
    ctx->pc = 0x80026A84u;
    // 80026A84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80026A88:
    ctx->pc = 0x80026A88u;
    // 80026A88: stw     r0, 724(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(724);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026A8C:
    ctx->pc = 0x80026A8Cu;
    // 80026A8C: addi    r11, r1, 720
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(720);

label_80026A90:
    ctx->pc = 0x80026A90u;
    // 80026A90: bl      0x80007858
    {
            ctx->lr = 0x80026A94u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80026A94:
    ctx->pc = 0x80026A94u;
    ctx->downcount -= 8;
    // 80026A94: lis     r5, -32656
    ctx->gpr[5] = ((u32)(s32)(-32656) << 16);

label_80026A98:
    ctx->pc = 0x80026A98u;
    // 80026A98: rlwinm r8, r3, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80026A9C:
    ctx->pc = 0x80026A9Cu;
    // 80026A9C: addi    r5, r5, 31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31952);

label_80026AA0:
    ctx->pc = 0x80026AA0u;
    // 80026AA0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026AA4:
    ctx->pc = 0x80026AA4u;
    // 80026AA4: lwzx    r28, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80026AA8:
    ctx->pc = 0x80026AA8u;
    // 80026AA8: lbz     r0, 2370(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2370);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026AAC:
    ctx->pc = 0x80026AACu;
    // 80026AAC: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026AB0:
    ctx->pc = 0x80026AB0u;
    // 80026AB0: bc    4, 2, 0x8002776C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8002776Cu;
            return;
        }
    }

label_80026AB4:
    ctx->pc = 0x80026AB4u;
    ctx->downcount -= 3;
    // 80026AB4: lbz     r0, 2371(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2371);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026AB8:
    ctx->pc = 0x80026AB8u;
    // 80026AB8: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026ABC:
    ctx->pc = 0x80026ABCu;
    // 80026ABC: bc    12, 0, 0x8002776C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8002776Cu;
            return;
        }
    }

label_80026AC0:
    ctx->pc = 0x80026AC0u;
    ctx->downcount -= 3;
    // 80026AC0: lwz     r0, 2112(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026AC4:
    ctx->pc = 0x80026AC4u;
    // 80026AC4: cmpwi   r0, 0
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

label_80026AC8:
    ctx->pc = 0x80026AC8u;
    // 80026AC8: bc    12, 2, 0x8002776C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8002776Cu;
            return;
        }
    }

label_80026ACC:
    ctx->pc = 0x80026ACCu;
    ctx->downcount -= 3;
    // 80026ACC: lbz     r0, 2369(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2369);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026AD0:
    ctx->pc = 0x80026AD0u;
    // 80026AD0: cmpwi   r0, 0
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

label_80026AD4:
    ctx->pc = 0x80026AD4u;
    // 80026AD4: bc    4, 2, 0x80027748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80027748u;
            return;
        }
    }

label_80026AD8:
    ctx->pc = 0x80026AD8u;
    ctx->downcount -= 5;
    // 80026AD8: lha     r4, 2366(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2366);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80026ADC:
    ctx->pc = 0x80026ADCu;
    // 80026ADC: cmpwi   r4, 0
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

label_80026AE0:
    ctx->pc = 0x80026AE0u;
    // 80026AE0: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80026AE4:
    ctx->pc = 0x80026AE4u;
    // 80026AE4: sth     r0, 2366(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026AE8:
    ctx->pc = 0x80026AE8u;
    // 80026AE8: bc    4, 0, 0x80027748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80027748u;
            return;
        }
    }

label_80026AEC:
    ctx->pc = 0x80026AECu;
    ctx->downcount -= 6;
    // 80026AEC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80026AF0:
    ctx->pc = 0x80026AF0u;
    // 80026AF0: stb     r31, 2369(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80026AF4:
    ctx->pc = 0x80026AF4u;
    // 80026AF4: lbz     r0, 2371(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2371);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026AF8:
    ctx->pc = 0x80026AF8u;
    // 80026AF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026AFC:
    ctx->pc = 0x80026AFCu;
    // 80026AFC: cmplwi  r0, 0x000B
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026B00:
    ctx->pc = 0x80026B00u;
    // 80026B00: bc    12, 1, 0x80027748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80027748u;
            return;
        }
    }

label_80026B04:
    ctx->pc = 0x80026B04u;
    ctx->downcount -= 7;
    // 80026B04: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_80026B08:
    ctx->pc = 0x80026B08u;
    // 80026B08: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80026B0C:
    ctx->pc = 0x80026B0Cu;
    // 80026B0C: addi    r4, r4, -9672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9672);

label_80026B10:
    ctx->pc = 0x80026B10u;
    // 80026B10: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026B14:
    ctx->pc = 0x80026B14u;
    // 80026B14: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_80026B18:
    ctx->pc = 0x80026B18u;
    // 80026B18: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80026B1C:
    ctx->pc = 0x80026B1Cu;
    ctx->downcount -= 16;
    // 80026B1C: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_80026B20:
    ctx->pc = 0x80026B20u;
    // 80026B20: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80026B24:
    ctx->pc = 0x80026B24u;
    // 80026B24: addi    r3, r3, 247
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(247);

label_80026B28:
    ctx->pc = 0x80026B28u;
    // 80026B28: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_80026B2C:
    ctx->pc = 0x80026B2Cu;
    // 80026B2C: addi    r6, r6, 25920
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25920);

label_80026B30:
    ctx->pc = 0x80026B30u;
    // 80026B30: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80026B34:
    ctx->pc = 0x80026B34u;
    // 80026B34: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026B38:
    ctx->pc = 0x80026B38u;
    // 80026B38: addi    r3, r1, 580
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(580);

label_80026B3C:
    ctx->pc = 0x80026B3Cu;
    // 80026B3C: lwzx    r30, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80026B40:
    ctx->pc = 0x80026B40u;
    // 80026B40: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_80026B44:
    ctx->pc = 0x80026B44u;
    // 80026B44: sth     r31, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80026B48:
    ctx->pc = 0x80026B48u;
    // 80026B48: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80026B4C:
    ctx->pc = 0x80026B4Cu;
    // 80026B4C: stw     r7, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026B50:
    ctx->pc = 0x80026B50u;
    // 80026B50: sth     r0, 602(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(602);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026B54:
    ctx->pc = 0x80026B54u;
    // 80026B54: stw     r6, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026B58:
    ctx->pc = 0x80026B58u;
    // 80026B58: bl      0x80004000
    {
            ctx->lr = 0x80026B5Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026B5C:
    ctx->pc = 0x80026B5Cu;
    ctx->downcount -= 4;
    // 80026B5C: addi    r3, r1, 584
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(584);

label_80026B60:
    ctx->pc = 0x80026B60u;
    // 80026B60: addi    r4, r1, 18
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(18);

label_80026B64:
    ctx->pc = 0x80026B64u;
    // 80026B64: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80026B68:
    ctx->pc = 0x80026B68u;
    // 80026B68: bl      0x80004000
    {
            ctx->lr = 0x80026B6Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026B6C:
    ctx->pc = 0x80026B6Cu;
    ctx->downcount -= 29;
    // 80026B6C: lhz     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80026B70:
    ctx->pc = 0x80026B70u;
    // 80026B70: addi    r29, r30, 2973
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(2973);

label_80026B74:
    ctx->pc = 0x80026B74u;
    // 80026B74: sth     r0, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026B78:
    ctx->pc = 0x80026B78u;
    // 80026B78: lwz     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80026B7C:
    ctx->pc = 0x80026B7Cu;
    // 80026B7C: lwz     r11, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80026B80:
    ctx->pc = 0x80026B80u;
    // 80026B80: lwz     r10, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80026B84:
    ctx->pc = 0x80026B84u;
    // 80026B84: lwz     r9, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80026B88:
    ctx->pc = 0x80026B88u;
    // 80026B88: lwz     r8, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80026B8C:
    ctx->pc = 0x80026B8Cu;
    // 80026B8C: lwz     r7, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80026B90:
    ctx->pc = 0x80026B90u;
    // 80026B90: lwz     r6, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026B94:
    ctx->pc = 0x80026B94u;
    // 80026B94: lwz     r5, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80026B98:
    ctx->pc = 0x80026B98u;
    // 80026B98: lwz     r4, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026B9C:
    ctx->pc = 0x80026B9Cu;
    // 80026B9C: lwz     r3, 616(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026BA0:
    ctx->pc = 0x80026BA0u;
    // 80026BA0: lwz     r0, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026BA4:
    ctx->pc = 0x80026BA4u;
    // 80026BA4: stw     r29, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80026BA8:
    ctx->pc = 0x80026BA8u;
    // 80026BA8: stw     r12, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026BAC:
    ctx->pc = 0x80026BACu;
    // 80026BAC: stw     r11, 528(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80026BB0:
    ctx->pc = 0x80026BB0u;
    // 80026BB0: stw     r10, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80026BB4:
    ctx->pc = 0x80026BB4u;
    // 80026BB4: stw     r9, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80026BB8:
    ctx->pc = 0x80026BB8u;
    // 80026BB8: stw     r8, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80026BBC:
    ctx->pc = 0x80026BBCu;
    // 80026BBC: stw     r7, 544(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026BC0:
    ctx->pc = 0x80026BC0u;
    // 80026BC0: stw     r6, 548(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026BC4:
    ctx->pc = 0x80026BC4u;
    // 80026BC4: stw     r5, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80026BC8:
    ctx->pc = 0x80026BC8u;
    // 80026BC8: stw     r29, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80026BCC:
    ctx->pc = 0x80026BCCu;
    // 80026BCC: stw     r4, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026BD0:
    ctx->pc = 0x80026BD0u;
    // 80026BD0: stw     r12, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026BD4:
    ctx->pc = 0x80026BD4u;
    // 80026BD4: stw     r3, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026BD8:
    ctx->pc = 0x80026BD8u;
    // 80026BD8: stw     r0, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026BDC:
    ctx->pc = 0x80026BDCu;
    // 80026BDC: bl      0x8004AF10
    {
            ctx->lr = 0x80026BE0u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026BE0:
    ctx->pc = 0x80026BE0u;
    ctx->downcount -= 2;
    // 80026BE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026BE4:
    ctx->pc = 0x80026BE4u;
    // 80026BE4: bl      0x8004AF10
    {
            ctx->lr = 0x80026BE8u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026BE8:
    ctx->pc = 0x80026BE8u;
    ctx->downcount -= 5;
    // 80026BE8: lbz     r4, 1516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1516);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026BEC:
    ctx->pc = 0x80026BECu;
    // 80026BEC: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026BF0:
    ctx->pc = 0x80026BF0u;
    // 80026BF0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80026BF4:
    ctx->pc = 0x80026BF4u;
    // 80026BF4: extsb. r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026BF8:
    ctx->pc = 0x80026BF8u;
    // 80026BF8: bc    4, 0, 0x80026C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026C08;
        }
    }

label_80026BFC:
    ctx->pc = 0x80026BFCu;
    ctx->downcount -= 3;
    // 80026BFC: lwz     r0, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026C00:
    ctx->pc = 0x80026C00u;
    // 80026C00: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80026C04:
    ctx->pc = 0x80026C04u;
    // 80026C04: extsb r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026C08:
    ctx->pc = 0x80026C08u;
    ctx->downcount -= 1;
    // 80026C08: bl      0x8004AF50
    {
            ctx->lr = 0x80026C0Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026C0C:
    ctx->pc = 0x80026C0Cu;
    ctx->downcount -= 4;
    // 80026C0C: lwz     r3, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026C10:
    ctx->pc = 0x80026C10u;
    // 80026C10: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80026C14:
    ctx->pc = 0x80026C14u;
    // 80026C14: cmplw   r0, r29
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026C18:
    ctx->pc = 0x80026C18u;
    // 80026C18: bc    4, 2, 0x80026C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026C28;
        }
    }

label_80026C1C:
    ctx->pc = 0x80026C1Cu;
    ctx->downcount -= 2;
    // 80026C1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80026C20:
    ctx->pc = 0x80026C20u;
    // 80026C20: bl      0x8004AF50
    {
            ctx->lr = 0x80026C24u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026C24:
    ctx->pc = 0x80026C24u;
    ctx->downcount -= 1;
    // 80026C24: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_80026C28:
    ctx->pc = 0x80026C28u;
    ctx->downcount -= 10;
    // 80026C28: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026C2C:
    ctx->pc = 0x80026C2Cu;
    // 80026C2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026C30:
    ctx->pc = 0x80026C30u;
    // 80026C30: lwz     r3, 1520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026C34:
    ctx->pc = 0x80026C34u;
    // 80026C34: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026C38:
    ctx->pc = 0x80026C38u;
    // 80026C38: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026C3C:
    ctx->pc = 0x80026C3Cu;
    // 80026C3C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026C40:
    ctx->pc = 0x80026C40u;
    // 80026C40: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026C44:
    ctx->pc = 0x80026C44u;
    // 80026C44: bl      0x80004350
    {
            ctx->lr = 0x80026C48u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026C48:
    ctx->pc = 0x80026C48u;
    ctx->downcount -= 10;
    // 80026C48: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026C4C:
    ctx->pc = 0x80026C4Cu;
    // 80026C4C: addi    r4, r1, 528
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(528);

label_80026C50:
    ctx->pc = 0x80026C50u;
    // 80026C50: lwz     r3, 1520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026C54:
    ctx->pc = 0x80026C54u;
    // 80026C54: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026C58:
    ctx->pc = 0x80026C58u;
    // 80026C58: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026C5C:
    ctx->pc = 0x80026C5Cu;
    // 80026C5C: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026C60:
    ctx->pc = 0x80026C60u;
    // 80026C60: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026C64:
    ctx->pc = 0x80026C64u;
    // 80026C64: bl      0x80004000
    {
            ctx->lr = 0x80026C68u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026C68:
    ctx->pc = 0x80026C68u;
    ctx->downcount -= 13;
    // 80026C68: lbz     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026C6C:
    ctx->pc = 0x80026C6Cu;
    // 80026C6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80026C70:
    ctx->pc = 0x80026C70u;
    // 80026C70: lwz     r4, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026C74:
    ctx->pc = 0x80026C74u;
    // 80026C74: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026C78:
    ctx->pc = 0x80026C78u;
    // 80026C78: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80026C7C:
    ctx->pc = 0x80026C7Cu;
    // 80026C7C: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80026C80:
    ctx->pc = 0x80026C80u;
    // 80026C80: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80026C84:
    ctx->pc = 0x80026C84u;
    // 80026C84: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80026C88:
    ctx->pc = 0x80026C88u;
    // 80026C88: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80026C8C:
    ctx->pc = 0x80026C8Cu;
    // 80026C8C: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80026C90:
    ctx->pc = 0x80026C90u;
    // 80026C90: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80026C94:
    ctx->pc = 0x80026C94u;
    // 80026C94: stb     r0, 1517(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1517);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026C98:
    ctx->pc = 0x80026C98u;
    // 80026C98: bl      0x8004AF50
    {
            ctx->lr = 0x80026C9Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026C9C:
    ctx->pc = 0x80026C9Cu;
    ctx->downcount -= 1;
    // 80026C9C: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_80026CA0:
    ctx->pc = 0x80026CA0u;
    ctx->downcount -= 4;
    // 80026CA0: lwzx    r29, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80026CA4:
    ctx->pc = 0x80026CA4u;
    // 80026CA4: lbz     r0, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026CA8:
    ctx->pc = 0x80026CA8u;
    // 80026CA8: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026CAC:
    ctx->pc = 0x80026CACu;
    // 80026CAC: bc    4, 0, 0x80026E44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026E44;
        }
    }

label_80026CB0:
    ctx->pc = 0x80026CB0u;
    ctx->downcount -= 19;
    // 80026CB0: addi    r0, r29, 2376
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(2376);

label_80026CB4:
    ctx->pc = 0x80026CB4u;
    // 80026CB4: stw     r0, 2372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026CB8:
    ctx->pc = 0x80026CB8u;
    // 80026CB8: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80026CBC:
    ctx->pc = 0x80026CBCu;
    // 80026CBC: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_80026CC0:
    ctx->pc = 0x80026CC0u;
    // 80026CC0: lbz     r4, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026CC4:
    ctx->pc = 0x80026CC4u;
    // 80026CC4: addi    r6, r6, 26144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(26144);

label_80026CC8:
    ctx->pc = 0x80026CC8u;
    // 80026CC8: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_80026CCC:
    ctx->pc = 0x80026CCCu;
    // 80026CCC: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80026CD0:
    ctx->pc = 0x80026CD0u;
    // 80026CD0: addis   r4, r4, 1188
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1188) << 16);

label_80026CD4:
    ctx->pc = 0x80026CD4u;
    // 80026CD4: sth     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80026CD8:
    ctx->pc = 0x80026CD8u;
    // 80026CD8: addi    r4, r4, 80
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(80);

label_80026CDC:
    ctx->pc = 0x80026CDCu;
    // 80026CDC: addi    r3, r1, 436
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(436);

label_80026CE0:
    ctx->pc = 0x80026CE0u;
    // 80026CE0: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026CE4:
    ctx->pc = 0x80026CE4u;
    // 80026CE4: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_80026CE8:
    ctx->pc = 0x80026CE8u;
    // 80026CE8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80026CEC:
    ctx->pc = 0x80026CECu;
    // 80026CEC: stw     r7, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026CF0:
    ctx->pc = 0x80026CF0u;
    // 80026CF0: sth     r0, 458(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(458);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026CF4:
    ctx->pc = 0x80026CF4u;
    // 80026CF4: stw     r6, 476(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026CF8:
    ctx->pc = 0x80026CF8u;
    // 80026CF8: bl      0x80004000
    {
            ctx->lr = 0x80026CFCu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026CFC:
    ctx->pc = 0x80026CFCu;
    ctx->downcount -= 4;
    // 80026CFC: addi    r3, r1, 440
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(440);

label_80026D00:
    ctx->pc = 0x80026D00u;
    // 80026D00: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80026D04:
    ctx->pc = 0x80026D04u;
    // 80026D04: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80026D08:
    ctx->pc = 0x80026D08u;
    // 80026D08: bl      0x80004000
    {
            ctx->lr = 0x80026D0Cu;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026D0C:
    ctx->pc = 0x80026D0Cu;
    ctx->downcount -= 29;
    // 80026D0C: lhz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80026D10:
    ctx->pc = 0x80026D10u;
    // 80026D10: addi    r30, r29, 2852
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(2852);

label_80026D14:
    ctx->pc = 0x80026D14u;
    // 80026D14: sth     r0, 464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026D18:
    ctx->pc = 0x80026D18u;
    // 80026D18: lwz     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80026D1C:
    ctx->pc = 0x80026D1Cu;
    // 80026D1C: lwz     r11, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80026D20:
    ctx->pc = 0x80026D20u;
    // 80026D20: lwz     r10, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80026D24:
    ctx->pc = 0x80026D24u;
    // 80026D24: lwz     r9, 440(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80026D28:
    ctx->pc = 0x80026D28u;
    // 80026D28: lwz     r8, 444(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(444);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80026D2C:
    ctx->pc = 0x80026D2Cu;
    // 80026D2C: lwz     r7, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80026D30:
    ctx->pc = 0x80026D30u;
    // 80026D30: lwz     r6, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026D34:
    ctx->pc = 0x80026D34u;
    // 80026D34: lwz     r5, 456(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80026D38:
    ctx->pc = 0x80026D38u;
    // 80026D38: lwz     r4, 464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026D3C:
    ctx->pc = 0x80026D3Cu;
    // 80026D3C: lwz     r3, 472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026D40:
    ctx->pc = 0x80026D40u;
    // 80026D40: lwz     r0, 476(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026D44:
    ctx->pc = 0x80026D44u;
    // 80026D44: stw     r30, 460(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(460);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80026D48:
    ctx->pc = 0x80026D48u;
    // 80026D48: stw     r12, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026D4C:
    ctx->pc = 0x80026D4Cu;
    // 80026D4C: stw     r11, 480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80026D50:
    ctx->pc = 0x80026D50u;
    // 80026D50: stw     r10, 484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80026D54:
    ctx->pc = 0x80026D54u;
    // 80026D54: stw     r9, 488(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80026D58:
    ctx->pc = 0x80026D58u;
    // 80026D58: stw     r8, 492(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80026D5C:
    ctx->pc = 0x80026D5Cu;
    // 80026D5C: stw     r7, 496(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026D60:
    ctx->pc = 0x80026D60u;
    // 80026D60: stw     r6, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026D64:
    ctx->pc = 0x80026D64u;
    // 80026D64: stw     r5, 504(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80026D68:
    ctx->pc = 0x80026D68u;
    // 80026D68: stw     r30, 508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80026D6C:
    ctx->pc = 0x80026D6Cu;
    // 80026D6C: stw     r4, 512(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026D70:
    ctx->pc = 0x80026D70u;
    // 80026D70: stw     r12, 516(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026D74:
    ctx->pc = 0x80026D74u;
    // 80026D74: stw     r3, 520(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026D78:
    ctx->pc = 0x80026D78u;
    // 80026D78: stw     r0, 524(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026D7C:
    ctx->pc = 0x80026D7Cu;
    // 80026D7C: bl      0x8004AF10
    {
            ctx->lr = 0x80026D80u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026D80:
    ctx->pc = 0x80026D80u;
    ctx->downcount -= 2;
    // 80026D80: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026D84:
    ctx->pc = 0x80026D84u;
    // 80026D84: bl      0x8004AF10
    {
            ctx->lr = 0x80026D88u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026D88:
    ctx->pc = 0x80026D88u;
    ctx->downcount -= 5;
    // 80026D88: lbz     r4, 1516(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1516);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026D8C:
    ctx->pc = 0x80026D8Cu;
    // 80026D8C: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026D90:
    ctx->pc = 0x80026D90u;
    // 80026D90: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80026D94:
    ctx->pc = 0x80026D94u;
    // 80026D94: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026D98:
    ctx->pc = 0x80026D98u;
    // 80026D98: bc    4, 0, 0x80026DA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026DA8;
        }
    }

label_80026D9C:
    ctx->pc = 0x80026D9Cu;
    ctx->downcount -= 3;
    // 80026D9C: lwz     r0, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026DA0:
    ctx->pc = 0x80026DA0u;
    // 80026DA0: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80026DA4:
    ctx->pc = 0x80026DA4u;
    // 80026DA4: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026DA8:
    ctx->pc = 0x80026DA8u;
    ctx->downcount -= 1;
    // 80026DA8: bl      0x8004AF50
    {
            ctx->lr = 0x80026DACu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026DAC:
    ctx->pc = 0x80026DACu;
    ctx->downcount -= 4;
    // 80026DAC: lwz     r3, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026DB0:
    ctx->pc = 0x80026DB0u;
    // 80026DB0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80026DB4:
    ctx->pc = 0x80026DB4u;
    // 80026DB4: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026DB8:
    ctx->pc = 0x80026DB8u;
    // 80026DB8: bc    4, 2, 0x80026DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026DC8;
        }
    }

label_80026DBC:
    ctx->pc = 0x80026DBCu;
    ctx->downcount -= 2;
    // 80026DBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80026DC0:
    ctx->pc = 0x80026DC0u;
    // 80026DC0: bl      0x8004AF50
    {
            ctx->lr = 0x80026DC4u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026DC4:
    ctx->pc = 0x80026DC4u;
    ctx->downcount -= 1;
    // 80026DC4: b       0x80026E3C
    {
            goto label_80026E3C;
    }

label_80026DC8:
    ctx->pc = 0x80026DC8u;
    ctx->downcount -= 10;
    // 80026DC8: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026DCC:
    ctx->pc = 0x80026DCCu;
    // 80026DCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026DD0:
    ctx->pc = 0x80026DD0u;
    // 80026DD0: lwz     r3, 1520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026DD4:
    ctx->pc = 0x80026DD4u;
    // 80026DD4: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026DD8:
    ctx->pc = 0x80026DD8u;
    // 80026DD8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026DDC:
    ctx->pc = 0x80026DDCu;
    // 80026DDC: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026DE0:
    ctx->pc = 0x80026DE0u;
    // 80026DE0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026DE4:
    ctx->pc = 0x80026DE4u;
    // 80026DE4: bl      0x80004350
    {
            ctx->lr = 0x80026DE8u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026DE8:
    ctx->pc = 0x80026DE8u;
    ctx->downcount -= 10;
    // 80026DE8: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026DEC:
    ctx->pc = 0x80026DECu;
    // 80026DEC: addi    r4, r1, 480
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(480);

label_80026DF0:
    ctx->pc = 0x80026DF0u;
    // 80026DF0: lwz     r3, 1520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026DF4:
    ctx->pc = 0x80026DF4u;
    // 80026DF4: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026DF8:
    ctx->pc = 0x80026DF8u;
    // 80026DF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026DFC:
    ctx->pc = 0x80026DFCu;
    // 80026DFC: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026E00:
    ctx->pc = 0x80026E00u;
    // 80026E00: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026E04:
    ctx->pc = 0x80026E04u;
    // 80026E04: bl      0x80004000
    {
            ctx->lr = 0x80026E08u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026E08:
    ctx->pc = 0x80026E08u;
    ctx->downcount -= 13;
    // 80026E08: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026E0C:
    ctx->pc = 0x80026E0Cu;
    // 80026E0C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80026E10:
    ctx->pc = 0x80026E10u;
    // 80026E10: lwz     r4, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026E14:
    ctx->pc = 0x80026E14u;
    // 80026E14: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026E18:
    ctx->pc = 0x80026E18u;
    // 80026E18: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80026E1C:
    ctx->pc = 0x80026E1Cu;
    // 80026E1C: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80026E20:
    ctx->pc = 0x80026E20u;
    // 80026E20: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80026E24:
    ctx->pc = 0x80026E24u;
    // 80026E24: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80026E28:
    ctx->pc = 0x80026E28u;
    // 80026E28: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80026E2C:
    ctx->pc = 0x80026E2Cu;
    // 80026E2C: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80026E30:
    ctx->pc = 0x80026E30u;
    // 80026E30: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80026E34:
    ctx->pc = 0x80026E34u;
    // 80026E34: stb     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026E38:
    ctx->pc = 0x80026E38u;
    // 80026E38: bl      0x8004AF50
    {
            ctx->lr = 0x80026E3Cu;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026E3C:
    ctx->pc = 0x80026E3Cu;
    ctx->downcount -= 2;
    // 80026E3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80026E40:
    ctx->pc = 0x80026E40u;
    // 80026E40: b       0x80026E54
    {
            goto label_80026E54;
    }

label_80026E44:
    ctx->pc = 0x80026E44u;
    ctx->downcount -= 4;
    // 80026E44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80026E48:
    ctx->pc = 0x80026E48u;
    // 80026E48: stb     r0, 2369(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026E4C:
    ctx->pc = 0x80026E4Cu;
    // 80026E4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80026E50:
    ctx->pc = 0x80026E50u;
    // 80026E50: stb     r0, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026E54:
    ctx->pc = 0x80026E54u;
    ctx->downcount -= 2;
    // 80026E54: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026E58:
    ctx->pc = 0x80026E58u;
    // 80026E58: bc    12, 2, 0x80027748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80027748u;
            return;
        }
    }

label_80026E5C:
    ctx->pc = 0x80026E5Cu;
    ctx->downcount -= 3;
    // 80026E5C: lwz     r0, 2376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026E60:
    ctx->pc = 0x80026E60u;
    // 80026E60: cmplwi  r0, 0x0001
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

label_80026E64:
    ctx->pc = 0x80026E64u;
    // 80026E64: bc    12, 1, 0x80026E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80026E74;
        }
    }

label_80026E68:
    ctx->pc = 0x80026E68u;
    ctx->downcount -= 3;
    // 80026E68: lwz     r0, 2380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026E6C:
    ctx->pc = 0x80026E6Cu;
    // 80026E6C: cmplwi  r0, 0x0001
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

label_80026E70:
    ctx->pc = 0x80026E70u;
    // 80026E70: bc    4, 1, 0x80026EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026EA0;
        }
    }

label_80026E74:
    ctx->pc = 0x80026E74u;
    ctx->downcount -= 4;
    // 80026E74: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_80026E78:
    ctx->pc = 0x80026E78u;
    // 80026E78: addi    r3, r29, 2376
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2376);

label_80026E7C:
    ctx->pc = 0x80026E7Cu;
    // 80026E7C: addi    r4, r4, 26400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26400);

label_80026E80:
    ctx->pc = 0x80026E80u;
    // 80026E80: bl      0x8002D6A0
    {
            ctx->lr = 0x80026E84u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80026E84:
    ctx->pc = 0x80026E84u;
    ctx->downcount -= 2;
    // 80026E84: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026E88:
    ctx->pc = 0x80026E88u;
    // 80026E88: bc    4, 2, 0x80026EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026EA0;
        }
    }

label_80026E8C:
    ctx->pc = 0x80026E8Cu;
    ctx->downcount -= 5;
    // 80026E8C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80026E90:
    ctx->pc = 0x80026E90u;
    // 80026E90: stb     r0, 2371(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80026E94:
    ctx->pc = 0x80026E94u;
    // 80026E94: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_80026E98:
    ctx->pc = 0x80026E98u;
    // 80026E98: sth     r0, 2366(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026E9C:
    ctx->pc = 0x80026E9Cu;
    // 80026E9C: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_80026EA0:
    ctx->pc = 0x80026EA0u;
    ctx->downcount -= 2;
    // 80026EA0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80026EA4:
    ctx->pc = 0x80026EA4u;
    // 80026EA4: bl      0x800261B0
    {
            ctx->lr = 0x80026EA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_80026EA8:
    ctx->pc = 0x80026EA8u;
    ctx->downcount -= 1;
    // 80026EA8: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_80026EAC:
    ctx->pc = 0x80026EACu;
    ctx->downcount -= 4;
    // 80026EAC: lwzx    r29, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80026EB0:
    ctx->pc = 0x80026EB0u;
    // 80026EB0: lbz     r0, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026EB4:
    ctx->pc = 0x80026EB4u;
    // 80026EB4: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026EB8:
    ctx->pc = 0x80026EB8u;
    // 80026EB8: bc    4, 0, 0x80027050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80027050;
        }
    }

label_80026EBC:
    ctx->pc = 0x80026EBCu;
    ctx->downcount -= 19;
    // 80026EBC: addi    r0, r29, 2520
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(2520);

label_80026EC0:
    ctx->pc = 0x80026EC0u;
    // 80026EC0: stw     r0, 2372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026EC4:
    ctx->pc = 0x80026EC4u;
    // 80026EC4: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_80026EC8:
    ctx->pc = 0x80026EC8u;
    // 80026EC8: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_80026ECC:
    ctx->pc = 0x80026ECCu;
    // 80026ECC: lbz     r4, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026ED0:
    ctx->pc = 0x80026ED0u;
    // 80026ED0: addi    r6, r6, 26144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(26144);

label_80026ED4:
    ctx->pc = 0x80026ED4u;
    // 80026ED4: li      r7, 23
    ctx->gpr[7] = (u32)(s32)(23);

label_80026ED8:
    ctx->pc = 0x80026ED8u;
    // 80026ED8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80026EDC:
    ctx->pc = 0x80026EDCu;
    // 80026EDC: addis   r4, r4, 1188
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1188) << 16);

label_80026EE0:
    ctx->pc = 0x80026EE0u;
    // 80026EE0: sth     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80026EE4:
    ctx->pc = 0x80026EE4u;
    // 80026EE4: addi    r4, r4, 80
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(80);

label_80026EE8:
    ctx->pc = 0x80026EE8u;
    // 80026EE8: addi    r3, r1, 340
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(340);

label_80026EEC:
    ctx->pc = 0x80026EECu;
    // 80026EEC: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026EF0:
    ctx->pc = 0x80026EF0u;
    // 80026EF0: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80026EF4:
    ctx->pc = 0x80026EF4u;
    // 80026EF4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80026EF8:
    ctx->pc = 0x80026EF8u;
    // 80026EF8: stw     r7, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026EFC:
    ctx->pc = 0x80026EFCu;
    // 80026EFC: sth     r0, 362(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(362);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026F00:
    ctx->pc = 0x80026F00u;
    // 80026F00: stw     r6, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026F04:
    ctx->pc = 0x80026F04u;
    // 80026F04: bl      0x80004000
    {
            ctx->lr = 0x80026F08u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026F08:
    ctx->pc = 0x80026F08u;
    ctx->downcount -= 4;
    // 80026F08: addi    r3, r1, 344
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(344);

label_80026F0C:
    ctx->pc = 0x80026F0Cu;
    // 80026F0C: addi    r4, r1, 14
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(14);

label_80026F10:
    ctx->pc = 0x80026F10u;
    // 80026F10: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80026F14:
    ctx->pc = 0x80026F14u;
    // 80026F14: bl      0x80004000
    {
            ctx->lr = 0x80026F18u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80026F18:
    ctx->pc = 0x80026F18u;
    ctx->downcount -= 29;
    // 80026F18: lhz     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80026F1C:
    ctx->pc = 0x80026F1Cu;
    // 80026F1C: addi    r30, r29, 2852
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(2852);

label_80026F20:
    ctx->pc = 0x80026F20u;
    // 80026F20: sth     r0, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80026F24:
    ctx->pc = 0x80026F24u;
    // 80026F24: lwz     r12, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80026F28:
    ctx->pc = 0x80026F28u;
    // 80026F28: lwz     r11, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80026F2C:
    ctx->pc = 0x80026F2Cu;
    // 80026F2C: lwz     r10, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80026F30:
    ctx->pc = 0x80026F30u;
    // 80026F30: lwz     r9, 344(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80026F34:
    ctx->pc = 0x80026F34u;
    // 80026F34: lwz     r8, 348(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(348);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80026F38:
    ctx->pc = 0x80026F38u;
    // 80026F38: lwz     r7, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80026F3C:
    ctx->pc = 0x80026F3Cu;
    // 80026F3C: lwz     r6, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80026F40:
    ctx->pc = 0x80026F40u;
    // 80026F40: lwz     r5, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80026F44:
    ctx->pc = 0x80026F44u;
    // 80026F44: lwz     r4, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80026F48:
    ctx->pc = 0x80026F48u;
    // 80026F48: lwz     r3, 376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026F4C:
    ctx->pc = 0x80026F4Cu;
    // 80026F4C: lwz     r0, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026F50:
    ctx->pc = 0x80026F50u;
    // 80026F50: stw     r30, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80026F54:
    ctx->pc = 0x80026F54u;
    // 80026F54: stw     r12, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026F58:
    ctx->pc = 0x80026F58u;
    // 80026F58: stw     r11, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80026F5C:
    ctx->pc = 0x80026F5Cu;
    // 80026F5C: stw     r10, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80026F60:
    ctx->pc = 0x80026F60u;
    // 80026F60: stw     r9, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80026F64:
    ctx->pc = 0x80026F64u;
    // 80026F64: stw     r8, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80026F68:
    ctx->pc = 0x80026F68u;
    // 80026F68: stw     r7, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80026F6C:
    ctx->pc = 0x80026F6Cu;
    // 80026F6C: stw     r6, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80026F70:
    ctx->pc = 0x80026F70u;
    // 80026F70: stw     r5, 408(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80026F74:
    ctx->pc = 0x80026F74u;
    // 80026F74: stw     r30, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80026F78:
    ctx->pc = 0x80026F78u;
    // 80026F78: stw     r4, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80026F7C:
    ctx->pc = 0x80026F7Cu;
    // 80026F7C: stw     r12, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80026F80:
    ctx->pc = 0x80026F80u;
    // 80026F80: stw     r3, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80026F84:
    ctx->pc = 0x80026F84u;
    // 80026F84: stw     r0, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80026F88:
    ctx->pc = 0x80026F88u;
    // 80026F88: bl      0x8004AF10
    {
            ctx->lr = 0x80026F8Cu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026F8C:
    ctx->pc = 0x80026F8Cu;
    ctx->downcount -= 2;
    // 80026F8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80026F90:
    ctx->pc = 0x80026F90u;
    // 80026F90: bl      0x8004AF10
    {
            ctx->lr = 0x80026F94u;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_80026F94:
    ctx->pc = 0x80026F94u;
    ctx->downcount -= 5;
    // 80026F94: lbz     r4, 1516(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1516);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80026F98:
    ctx->pc = 0x80026F98u;
    // 80026F98: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026F9C:
    ctx->pc = 0x80026F9Cu;
    // 80026F9C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80026FA0:
    ctx->pc = 0x80026FA0u;
    // 80026FA0: extsb. r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80026FA4:
    ctx->pc = 0x80026FA4u;
    // 80026FA4: bc    4, 0, 0x80026FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026FB4;
        }
    }

label_80026FA8:
    ctx->pc = 0x80026FA8u;
    ctx->downcount -= 3;
    // 80026FA8: lwz     r0, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80026FAC:
    ctx->pc = 0x80026FACu;
    // 80026FAC: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80026FB0:
    ctx->pc = 0x80026FB0u;
    // 80026FB0: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026FB4:
    ctx->pc = 0x80026FB4u;
    ctx->downcount -= 1;
    // 80026FB4: bl      0x8004AF50
    {
            ctx->lr = 0x80026FB8u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026FB8:
    ctx->pc = 0x80026FB8u;
    ctx->downcount -= 4;
    // 80026FB8: lwz     r3, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026FBC:
    ctx->pc = 0x80026FBCu;
    // 80026FBC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80026FC0:
    ctx->pc = 0x80026FC0u;
    // 80026FC0: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80026FC4:
    ctx->pc = 0x80026FC4u;
    // 80026FC4: bc    4, 2, 0x80026FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80026FD4;
        }
    }

label_80026FC8:
    ctx->pc = 0x80026FC8u;
    ctx->downcount -= 2;
    // 80026FC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80026FCC:
    ctx->pc = 0x80026FCCu;
    // 80026FCC: bl      0x8004AF50
    {
            ctx->lr = 0x80026FD0u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80026FD0:
    ctx->pc = 0x80026FD0u;
    ctx->downcount -= 1;
    // 80026FD0: b       0x80027048
    {
            goto label_80027048;
    }

label_80026FD4:
    ctx->pc = 0x80026FD4u;
    ctx->downcount -= 10;
    // 80026FD4: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026FD8:
    ctx->pc = 0x80026FD8u;
    // 80026FD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80026FDC:
    ctx->pc = 0x80026FDCu;
    // 80026FDC: lwz     r3, 1520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80026FE0:
    ctx->pc = 0x80026FE0u;
    // 80026FE0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80026FE4:
    ctx->pc = 0x80026FE4u;
    // 80026FE4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80026FE8:
    ctx->pc = 0x80026FE8u;
    // 80026FE8: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80026FEC:
    ctx->pc = 0x80026FECu;
    // 80026FEC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80026FF0:
    ctx->pc = 0x80026FF0u;
    // 80026FF0: bl      0x80004350
    {
            ctx->lr = 0x80026FF4u;
            ctx->pc = 0x80004350u;
            return;
    }

label_80026FF4:
    ctx->pc = 0x80026FF4u;
    ctx->downcount -= 10;
    // 80026FF4: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80026FF8:
    ctx->pc = 0x80026FF8u;
    // 80026FF8: addi    r4, r1, 384
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(384);

label_80026FFC:
    ctx->pc = 0x80026FFCu;
    // 80026FFC: lwz     r3, 1520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80027000:
    ctx->pc = 0x80027000u;
    // 80027000: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_80027004:
    ctx->pc = 0x80027004u;
    // 80027004: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80027008:
    ctx->pc = 0x80027008u;
    // 80027008: mulli   r0, r0, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_8002700C:
    ctx->pc = 0x8002700Cu;
    // 8002700C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80027010:
    ctx->pc = 0x80027010u;
    // 80027010: bl      0x80004000
    {
            ctx->lr = 0x80027014u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80027014:
    ctx->pc = 0x80027014u;
    ctx->downcount -= 13;
    // 80027014: lbz     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80027018:
    ctx->pc = 0x80027018u;
    // 80027018: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002701C:
    ctx->pc = 0x8002701Cu;
    // 8002701C: lwz     r4, 1524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1524);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80027020:
    ctx->pc = 0x80027020u;
    // 80027020: extsb r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80027024:
    ctx->pc = 0x80027024u;
    // 80027024: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80027028:
    ctx->pc = 0x80027028u;
    // 80027028: subf   r5, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002702C:
    ctx->pc = 0x8002702Cu;
    // 8002702C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80027030:
    ctx->pc = 0x80027030u;
    // 80027030: subf   r4, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80027034:
    ctx->pc = 0x80027034u;
    // 80027034: nor   r4, r5, r4
    {
        ctx->gpr[4] = ~(ctx->gpr[5] | ctx->gpr[4]);
    }

label_80027038:
    ctx->pc = 0x80027038u;
    // 80027038: srawi r4, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_8002703C:
    ctx->pc = 0x8002703Cu;
    // 8002703C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_80027040:
    ctx->pc = 0x80027040u;
    // 80027040: stb     r0, 1517(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1517);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80027044:
    ctx->pc = 0x80027044u;
    // 80027044: bl      0x8004AF50
    {
            ctx->lr = 0x80027048u;
            ctx->pc = 0x8004AF50u;
            return;
    }

label_80027048:
    ctx->pc = 0x80027048u;
    ctx->downcount -= 2;
    // 80027048: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002704C:
    ctx->pc = 0x8002704Cu;
    // 8002704C: b       0x80027060
    {
            goto label_80027060;
    }

label_80027050:
    ctx->pc = 0x80027050u;
    ctx->downcount -= 4;
    // 80027050: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80027054:
    ctx->pc = 0x80027054u;
    // 80027054: stb     r0, 2369(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2369);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80027058:
    ctx->pc = 0x80027058u;
    // 80027058: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002705C:
    ctx->pc = 0x8002705Cu;
    // 8002705C: stb     r0, 2362(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2362);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80027060:
    ctx->pc = 0x80027060u;
    ctx->downcount -= 2;
    // 80027060: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80027064:
    ctx->pc = 0x80027064u;
    // 80027064: bc    12, 2, 0x80027748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80027748u;
            return;
        }
    }

label_80027068:
    ctx->pc = 0x80027068u;
    ctx->downcount -= 3;
    // 80027068: lwz     r0, 2520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002706C:
    ctx->pc = 0x8002706Cu;
    // 8002706C: cmplwi  r0, 0x0001
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

label_80027070:
    ctx->pc = 0x80027070u;
    // 80027070: bc    12, 1, 0x80027080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80027080;
        }
    }

label_80027074:
    ctx->pc = 0x80027074u;
    ctx->downcount -= 3;
    // 80027074: lwz     r0, 2524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80027078:
    ctx->pc = 0x80027078u;
    // 80027078: cmplwi  r0, 0x0001
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

label_8002707C:
    ctx->pc = 0x8002707Cu;
    // 8002707C: bc    4, 1, 0x800270E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800270E4;
        }
    }

label_80027080:
    ctx->pc = 0x80027080u;
    ctx->downcount -= 4;
    // 80027080: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_80027084:
    ctx->pc = 0x80027084u;
    // 80027084: addi    r3, r29, 2520
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2520);

label_80027088:
    ctx->pc = 0x80027088u;
    // 80027088: addi    r4, r4, 26400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26400);

label_8002708C:
    ctx->pc = 0x8002708Cu;
    // 8002708C: bl      0x8002D6A0
    {
            ctx->lr = 0x80027090u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_80027090:
    ctx->pc = 0x80027090u;
    ctx->downcount -= 2;
    // 80027090: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80027094:
    ctx->pc = 0x80027094u;
    // 80027094: bc    4, 2, 0x800270E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800270E4;
        }
    }

label_80027098:
    ctx->pc = 0x80027098u;
    ctx->downcount -= 3;
    // 80027098: addi    r3, r29, 2520
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2520);

label_8002709C:
    ctx->pc = 0x8002709Cu;
    // 8002709C: addi    r4, r29, 2376
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2376);

label_800270A0:
    ctx->pc = 0x800270A0u;
    // 800270A0: bl      0x8002D6A0
    {
            ctx->lr = 0x800270A4u;
            ctx->pc = 0x8002D6A0u;
            return;
    }

label_800270A4:
    ctx->pc = 0x800270A4u;
    ctx->downcount -= 2;
    // 800270A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800270A8:
    ctx->pc = 0x800270A8u;
    // 800270A8: bc    4, 2, 0x800270E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800270E4;
        }
    }

label_800270AC:
    ctx->pc = 0x800270ACu;
    ctx->downcount -= 4;
    // 800270AC: addi    r3, r29, 2520
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2520);

label_800270B0:
    ctx->pc = 0x800270B0u;
    // 800270B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800270B4:
    ctx->pc = 0x800270B4u;
    // 800270B4: li      r5, 264
    ctx->gpr[5] = (u32)(s32)(264);

label_800270B8:
    ctx->pc = 0x800270B8u;
    // 800270B8: bl      0x80004350
    {
            ctx->lr = 0x800270BCu;
            ctx->pc = 0x80004350u;
            return;
    }

label_800270BC:
    ctx->pc = 0x800270BCu;
    ctx->downcount -= 3;
    // 800270BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800270C0:
    ctx->pc = 0x800270C0u;
    // 800270C0: stw     r0, 2520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800270C4:
    ctx->pc = 0x800270C4u;
    // 800270C4: bl      0x8004F250
    {
            ctx->lr = 0x800270C8u;
            ctx->pc = 0x8004F250u;
            return;
    }

label_800270C8:
    ctx->pc = 0x800270C8u;
    ctx->downcount -= 7;
    // 800270C8: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_800270CC:
    ctx->pc = 0x800270CCu;
    // 800270CC: stb     r0, 2368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2368);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800270D0:
    ctx->pc = 0x800270D0u;
    // 800270D0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_800270D4:
    ctx->pc = 0x800270D4u;
    // 800270D4: stb     r3, 2371(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2371);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800270D8:
    ctx->pc = 0x800270D8u;
    // 800270D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800270DC:
    ctx->pc = 0x800270DCu;
    // 800270DC: sth     r0, 2366(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800270E0:
    ctx->pc = 0x800270E0u;
    // 800270E0: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_800270E4:
    ctx->pc = 0x800270E4u;
    ctx->downcount -= 2;
    // 800270E4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800270E8:
    ctx->pc = 0x800270E8u;
    // 800270E8: bl      0x800261B0
    {
            ctx->lr = 0x800270ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800261B0u;
                return;
            }
            goto label_800261B0;
    }

label_800270EC:
    ctx->pc = 0x800270ECu;
    ctx->downcount -= 1;
    // 800270EC: b       0x80027748
    {
            ctx->pc = 0x80027748u;
            return;
    }

label_800270F0:
    ctx->pc = 0x800270F0u;
    ctx->downcount -= 18;
    // 800270F0: lwzx    r29, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800270F4:
    ctx->pc = 0x800270F4u;
    // 800270F4: lis     r3, 1188
    ctx->gpr[3] = ((u32)(s32)(1188) << 16);

label_800270F8:
    ctx->pc = 0x800270F8u;
    // 800270F8: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800270FC:
    ctx->pc = 0x800270FCu;
    // 800270FC: li      r7, 22
    ctx->gpr[7] = (u32)(s32)(22);

label_80027100:
    ctx->pc = 0x80027100u;
    // 80027100: lbz     r4, 2368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2368);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80027104:
    ctx->pc = 0x80027104u;
    // 80027104: addi    r5, r3, 241
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(241);

label_80027108:
    ctx->pc = 0x80027108u;
    // 80027108: addi    r6, r6, 25808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25808);

label_8002710C:
    ctx->pc = 0x8002710Cu;
    // 8002710C: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80027110:
    ctx->pc = 0x80027110u;
    // 80027110: stb     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80027114:
    ctx->pc = 0x80027114u;
    // 80027114: addi    r3, r1, 244
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(244);

label_80027118:
    ctx->pc = 0x80027118u;
    // 80027118: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_8002711C:
    ctx->pc = 0x8002711Cu;
    // 8002711C: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80027120:
    ctx->pc = 0x80027120u;
    // 80027120: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80027124:
    ctx->pc = 0x80027124u;
    // 80027124: stb     r31, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80027128:
    ctx->pc = 0x80027128u;
    // 80027128: stw     r7, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002712C:
    ctx->pc = 0x8002712Cu;
    // 8002712C: sth     r0, 266(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(266);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80027130:
    ctx->pc = 0x80027130u;
    // 80027130: stw     r6, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80027134:
    ctx->pc = 0x80027134u;
    // 80027134: bl      0x80004000
    {
            ctx->lr = 0x80027138u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80027138:
    ctx->pc = 0x80027138u;
    ctx->downcount -= 4;
    // 80027138: addi    r3, r1, 248
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(248);

label_8002713C:
    ctx->pc = 0x8002713Cu;
    // 8002713C: addi    r4, r1, 9
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(9);

label_80027140:
    ctx->pc = 0x80027140u;
    // 80027140: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80027144:
    ctx->pc = 0x80027144u;
    // 80027144: bl      0x80004000
    {
            ctx->lr = 0x80027148u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80027148:
    ctx->pc = 0x80027148u;
    ctx->downcount -= 4;
    // 80027148: addi    r3, r1, 249
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(249);

label_8002714C:
    ctx->pc = 0x8002714Cu;
    // 8002714C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80027150:
    ctx->pc = 0x80027150u;
    // 80027150: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80027154:
    ctx->pc = 0x80027154u;
    // 80027154: bl      0x80004000
    {
            ctx->lr = 0x80027158u;
            ctx->pc = 0x80004000u;
            return;
    }

label_80027158:
    ctx->pc = 0x80027158u;
    ctx->downcount -= 25;
    // 80027158: lwz     r30, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002715C:
    ctx->pc = 0x8002715Cu;
    // 8002715C: lwz     r12, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80027160:
    ctx->pc = 0x80027160u;
    // 80027160: lwz     r11, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80027164:
    ctx->pc = 0x80027164u;
    // 80027164: lwz     r10, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80027168:
    ctx->pc = 0x80027168u;
    // 80027168: lwz     r9, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8002716C:
    ctx->pc = 0x8002716Cu;
    // 8002716C: lwz     r8, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80027170:
    ctx->pc = 0x80027170u;
    // 80027170: lwz     r7, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80027174:
    ctx->pc = 0x80027174u;
    // 80027174: lwz     r6, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80027178:
    ctx->pc = 0x80027178u;
    // 80027178: lwz     r5, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002717C:
    ctx->pc = 0x8002717Cu;
    // 8002717C: lwz     r4, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80027180:
    ctx->pc = 0x80027180u;
    // 80027180: lwz     r3, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80027184:
    ctx->pc = 0x80027184u;
    // 80027184: lwz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80027188:
    ctx->pc = 0x80027188u;
    // 80027188: stw     r30, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002718C:
    ctx->pc = 0x8002718Cu;
    // 8002718C: stw     r12, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80027190:
    ctx->pc = 0x80027190u;
    // 80027190: stw     r11, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80027194:
    ctx->pc = 0x80027194u;
    // 80027194: stw     r10, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80027198:
    ctx->pc = 0x80027198u;
    // 80027198: stw     r9, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8002719C:
    ctx->pc = 0x8002719Cu;
    // 8002719C: stw     r8, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800271A0:
    ctx->pc = 0x800271A0u;
    // 800271A0: stw     r7, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800271A4:
    ctx->pc = 0x800271A4u;
    // 800271A4: stw     r6, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800271A8:
    ctx->pc = 0x800271A8u;
    // 800271A8: stw     r5, 320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800271AC:
    ctx->pc = 0x800271ACu;
    // 800271AC: stw     r4, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800271B0:
    ctx->pc = 0x800271B0u;
    // 800271B0: stw     r3, 328(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800271B4:
    ctx->pc = 0x800271B4u;
    // 800271B4: stw     r0, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800271B8:
    ctx->pc = 0x800271B8u;
    // 800271B8: bl      0x8004AF10
    {
            ctx->lr = 0x800271BCu;
            ctx->pc = 0x8004AF10u;
            return;
    }

label_800271BC:
    ctx->pc = 0x800271BCu;
    ctx->downcount -= 1;
    // 800271BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

    ctx->pc = 0x800271C0u;
    return;
return_dispatch_800231C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x800231E0u: goto label_800231E0;
    case 0x80023214u: goto label_80023214;
    case 0x80023294u: goto label_80023294;
    case 0x8002329Cu: goto label_8002329C;
    case 0x800232C0u: goto label_800232C0;
    case 0x800232D8u: goto label_800232D8;
    case 0x800232FCu: goto label_800232FC;
    case 0x8002331Cu: goto label_8002331C;
    case 0x80023350u: goto label_80023350;
    case 0x800233C8u: goto label_800233C8;
    case 0x800233D0u: goto label_800233D0;
    case 0x800233F4u: goto label_800233F4;
    case 0x8002340Cu: goto label_8002340C;
    case 0x80023430u: goto label_80023430;
    case 0x80023450u: goto label_80023450;
    case 0x80023484u: goto label_80023484;
    case 0x8002348Cu: goto label_8002348C;
    case 0x800234A0u: goto label_800234A0;
    case 0x800234B0u: goto label_800234B0;
    case 0x800234B8u: goto label_800234B8;
    case 0x800234DCu: goto label_800234DC;
    case 0x80023574u: goto label_80023574;
    case 0x8002357Cu: goto label_8002357C;
    case 0x800235A0u: goto label_800235A0;
    case 0x800235B8u: goto label_800235B8;
    case 0x800235DCu: goto label_800235DC;
    case 0x800235FCu: goto label_800235FC;
    case 0x80023630u: goto label_80023630;
    case 0x800236ACu: goto label_800236AC;
    case 0x800236B4u: goto label_800236B4;
    case 0x800236D8u: goto label_800236D8;
    case 0x800236F0u: goto label_800236F0;
    case 0x80023714u: goto label_80023714;
    case 0x80023734u: goto label_80023734;
    case 0x80023768u: goto label_80023768;
    case 0x800237A8u: goto label_800237A8;
    case 0x800237B8u: goto label_800237B8;
    case 0x800237C8u: goto label_800237C8;
    case 0x8002382Cu: goto label_8002382C;
    case 0x80023834u: goto label_80023834;
    case 0x80023858u: goto label_80023858;
    case 0x80023870u: goto label_80023870;
    case 0x80023894u: goto label_80023894;
    case 0x800238B4u: goto label_800238B4;
    case 0x800238E8u: goto label_800238E8;
    case 0x8002393Cu: goto label_8002393C;
    case 0x8002394Cu: goto label_8002394C;
    case 0x8002395Cu: goto label_8002395C;
    case 0x800239C0u: goto label_800239C0;
    case 0x800239C8u: goto label_800239C8;
    case 0x800239ECu: goto label_800239EC;
    case 0x80023A04u: goto label_80023A04;
    case 0x80023A28u: goto label_80023A28;
    case 0x80023A48u: goto label_80023A48;
    case 0x80023A7Cu: goto label_80023A7C;
    case 0x80023AD0u: goto label_80023AD0;
    case 0x80023AE0u: goto label_80023AE0;
    case 0x80023AF0u: goto label_80023AF0;
    case 0x80023B54u: goto label_80023B54;
    case 0x80023B5Cu: goto label_80023B5C;
    case 0x80023B80u: goto label_80023B80;
    case 0x80023B98u: goto label_80023B98;
    case 0x80023BBCu: goto label_80023BBC;
    case 0x80023BDCu: goto label_80023BDC;
    case 0x80023C10u: goto label_80023C10;
    case 0x80023C50u: goto label_80023C50;
    case 0x80023C60u: goto label_80023C60;
    case 0x80023C70u: goto label_80023C70;
    case 0x80023CD4u: goto label_80023CD4;
    case 0x80023CDCu: goto label_80023CDC;
    case 0x80023D00u: goto label_80023D00;
    case 0x80023D18u: goto label_80023D18;
    case 0x80023D3Cu: goto label_80023D3C;
    case 0x80023D5Cu: goto label_80023D5C;
    case 0x80023D90u: goto label_80023D90;
    case 0x80023DD8u: goto label_80023DD8;
    case 0x80023DE8u: goto label_80023DE8;
    case 0x80023DF8u: goto label_80023DF8;
    case 0x80023E5Cu: goto label_80023E5C;
    case 0x80023E64u: goto label_80023E64;
    case 0x80023E88u: goto label_80023E88;
    case 0x80023EA0u: goto label_80023EA0;
    case 0x80023EC4u: goto label_80023EC4;
    case 0x80023EE4u: goto label_80023EE4;
    case 0x80023F18u: goto label_80023F18;
    case 0x80023F90u: goto label_80023F90;
    case 0x80023F98u: goto label_80023F98;
    case 0x80023FBCu: goto label_80023FBC;
    case 0x80023FD4u: goto label_80023FD4;
    case 0x80023FF8u: goto label_80023FF8;
    case 0x80024018u: goto label_80024018;
    case 0x8002404Cu: goto label_8002404C;
    case 0x80024054u: goto label_80024054;
    case 0x80024068u: goto label_80024068;
    case 0x80024084u: goto label_80024084;
    case 0x80024090u: goto label_80024090;
    case 0x800240B4u: goto label_800240B4;
    case 0x800240D4u: goto label_800240D4;
    case 0x800240E0u: goto label_800240E0;
    case 0x800240F4u: goto label_800240F4;
    case 0x8002412Cu: goto label_8002412C;
    case 0x80024150u: goto label_80024150;
    case 0x80024174u: goto label_80024174;
    case 0x800241A4u: goto label_800241A4;
    case 0x800241C0u: goto label_800241C0;
    case 0x800241DCu: goto label_800241DC;
    case 0x800241F8u: goto label_800241F8;
    case 0x80024200u: goto label_80024200;
    case 0x8002422Cu: goto label_8002422C;
    case 0x80024240u: goto label_80024240;
    case 0x80024264u: goto label_80024264;
    case 0x80024278u: goto label_80024278;
    case 0x8002428Cu: goto label_8002428C;
    case 0x800242A8u: goto label_800242A8;
    case 0x800242B4u: goto label_800242B4;
    case 0x8002430Cu: goto label_8002430C;
    case 0x80024330u: goto label_80024330;
    case 0x80024444u: goto label_80024444;
    case 0x80024454u: goto label_80024454;
    case 0x800244C8u: goto label_800244C8;
    case 0x800244D0u: goto label_800244D0;
    case 0x800244FCu: goto label_800244FC;
    case 0x80024514u: goto label_80024514;
    case 0x8002453Cu: goto label_8002453C;
    case 0x8002455Cu: goto label_8002455C;
    case 0x80024590u: goto label_80024590;
    case 0x8002460Cu: goto label_8002460C;
    case 0x8002461Cu: goto label_8002461C;
    case 0x8002462Cu: goto label_8002462C;
    case 0x80024690u: goto label_80024690;
    case 0x80024698u: goto label_80024698;
    case 0x800246C4u: goto label_800246C4;
    case 0x800246DCu: goto label_800246DC;
    case 0x80024704u: goto label_80024704;
    case 0x80024724u: goto label_80024724;
    case 0x80024758u: goto label_80024758;
    case 0x800247E8u: goto label_800247E8;
    case 0x800247F8u: goto label_800247F8;
    case 0x8002486Cu: goto label_8002486C;
    case 0x80024874u: goto label_80024874;
    case 0x800248A0u: goto label_800248A0;
    case 0x800248B8u: goto label_800248B8;
    case 0x800248E0u: goto label_800248E0;
    case 0x80024900u: goto label_80024900;
    case 0x80024934u: goto label_80024934;
    case 0x800249A0u: goto label_800249A0;
    case 0x800249B0u: goto label_800249B0;
    case 0x800249C0u: goto label_800249C0;
    case 0x80024A24u: goto label_80024A24;
    case 0x80024A2Cu: goto label_80024A2C;
    case 0x80024A58u: goto label_80024A58;
    case 0x80024A70u: goto label_80024A70;
    case 0x80024A98u: goto label_80024A98;
    case 0x80024AB8u: goto label_80024AB8;
    case 0x80024AECu: goto label_80024AEC;
    case 0x80024B88u: goto label_80024B88;
    case 0x80024B98u: goto label_80024B98;
    case 0x80024C0Cu: goto label_80024C0C;
    case 0x80024C14u: goto label_80024C14;
    case 0x80024C40u: goto label_80024C40;
    case 0x80024C58u: goto label_80024C58;
    case 0x80024C80u: goto label_80024C80;
    case 0x80024CA0u: goto label_80024CA0;
    case 0x80024CD4u: goto label_80024CD4;
    case 0x80024D64u: goto label_80024D64;
    case 0x80024D74u: goto label_80024D74;
    case 0x80024D84u: goto label_80024D84;
    case 0x80024DE8u: goto label_80024DE8;
    case 0x80024DF0u: goto label_80024DF0;
    case 0x80024E1Cu: goto label_80024E1C;
    case 0x80024E34u: goto label_80024E34;
    case 0x80024E5Cu: goto label_80024E5C;
    case 0x80024E7Cu: goto label_80024E7C;
    case 0x80024EB0u: goto label_80024EB0;
    case 0x80024F2Cu: goto label_80024F2C;
    case 0x80024F3Cu: goto label_80024F3C;
    case 0x80024F4Cu: goto label_80024F4C;
    case 0x80024FB0u: goto label_80024FB0;
    case 0x80024FB8u: goto label_80024FB8;
    case 0x80024FE4u: goto label_80024FE4;
    case 0x80024FFCu: goto label_80024FFC;
    case 0x80025024u: goto label_80025024;
    case 0x80025044u: goto label_80025044;
    case 0x80025078u: goto label_80025078;
    case 0x80025124u: goto label_80025124;
    case 0x80025134u: goto label_80025134;
    case 0x80025144u: goto label_80025144;
    case 0x800251A8u: goto label_800251A8;
    case 0x800251B0u: goto label_800251B0;
    case 0x800251DCu: goto label_800251DC;
    case 0x800251F4u: goto label_800251F4;
    case 0x8002521Cu: goto label_8002521C;
    case 0x8002523Cu: goto label_8002523C;
    case 0x80025270u: goto label_80025270;
    case 0x800252E8u: goto label_800252E8;
    case 0x800252F8u: goto label_800252F8;
    case 0x8002536Cu: goto label_8002536C;
    case 0x80025374u: goto label_80025374;
    case 0x800253A0u: goto label_800253A0;
    case 0x800253B8u: goto label_800253B8;
    case 0x800253E0u: goto label_800253E0;
    case 0x80025400u: goto label_80025400;
    case 0x80025434u: goto label_80025434;
    case 0x80025494u: goto label_80025494;
    case 0x800254D4u: goto label_800254D4;
    case 0x800254F4u: goto label_800254F4;
    case 0x80025670u: goto label_80025670;
    case 0x80025680u: goto label_80025680;
    case 0x800256F4u: goto label_800256F4;
    case 0x800256FCu: goto label_800256FC;
    case 0x80025720u: goto label_80025720;
    case 0x80025738u: goto label_80025738;
    case 0x80025760u: goto label_80025760;
    case 0x80025780u: goto label_80025780;
    case 0x800257B4u: goto label_800257B4;
    case 0x800257DCu: goto label_800257DC;
    case 0x800257F0u: goto label_800257F0;
    case 0x8002580Cu: goto label_8002580C;
    case 0x80025818u: goto label_80025818;
    case 0x80025864u: goto label_80025864;
    case 0x800258E8u: goto label_800258E8;
    case 0x80025A98u: goto label_80025A98;
    case 0x80025AA0u: goto label_80025AA0;
    case 0x80025AC4u: goto label_80025AC4;
    case 0x80025ADCu: goto label_80025ADC;
    case 0x80025B04u: goto label_80025B04;
    case 0x80025B24u: goto label_80025B24;
    case 0x80025B58u: goto label_80025B58;
    case 0x80025BD0u: goto label_80025BD0;
    case 0x80025BE0u: goto label_80025BE0;
    case 0x80025BF0u: goto label_80025BF0;
    case 0x80025C54u: goto label_80025C54;
    case 0x80025C5Cu: goto label_80025C5C;
    case 0x80025C80u: goto label_80025C80;
    case 0x80025C98u: goto label_80025C98;
    case 0x80025CC0u: goto label_80025CC0;
    case 0x80025CE0u: goto label_80025CE0;
    case 0x80025D14u: goto label_80025D14;
    case 0x80025D94u: goto label_80025D94;
    case 0x80025DA4u: goto label_80025DA4;
    case 0x80025DB4u: goto label_80025DB4;
    case 0x80025E18u: goto label_80025E18;
    case 0x80025E20u: goto label_80025E20;
    case 0x80025E44u: goto label_80025E44;
    case 0x80025E5Cu: goto label_80025E5C;
    case 0x80025E84u: goto label_80025E84;
    case 0x80025EA4u: goto label_80025EA4;
    case 0x80025ED8u: goto label_80025ED8;
    case 0x80025F4Cu: goto label_80025F4C;
    case 0x80025F5Cu: goto label_80025F5C;
    case 0x80025FCCu: goto label_80025FCC;
    case 0x80025FD4u: goto label_80025FD4;
    case 0x80025FF8u: goto label_80025FF8;
    case 0x80026010u: goto label_80026010;
    case 0x80026038u: goto label_80026038;
    case 0x80026058u: goto label_80026058;
    case 0x8002608Cu: goto label_8002608C;
    case 0x800260D4u: goto label_800260D4;
    case 0x800260F8u: goto label_800260F8;
    case 0x8002615Cu: goto label_8002615C;
    case 0x80026180u: goto label_80026180;
    case 0x80026188u: goto label_80026188;
    case 0x80026214u: goto label_80026214;
    case 0x80026224u: goto label_80026224;
    case 0x80026234u: goto label_80026234;
    case 0x80026270u: goto label_80026270;
    case 0x800262A4u: goto label_800262A4;
    case 0x800262B8u: goto label_800262B8;
    case 0x800262C8u: goto label_800262C8;
    case 0x800262E4u: goto label_800262E4;
    case 0x80026300u: goto label_80026300;
    case 0x8002630Cu: goto label_8002630C;
    case 0x80026324u: goto label_80026324;
    case 0x80026334u: goto label_80026334;
    case 0x8002634Cu: goto label_8002634C;
    case 0x8002635Cu: goto label_8002635C;
    case 0x80026364u: goto label_80026364;
    case 0x8002639Cu: goto label_8002639C;
    case 0x800263C4u: goto label_800263C4;
    case 0x800263D8u: goto label_800263D8;
    case 0x800263E8u: goto label_800263E8;
    case 0x80026404u: goto label_80026404;
    case 0x80026420u: goto label_80026420;
    case 0x8002642Cu: goto label_8002642C;
    case 0x80026444u: goto label_80026444;
    case 0x80026454u: goto label_80026454;
    case 0x8002646Cu: goto label_8002646C;
    case 0x8002647Cu: goto label_8002647C;
    case 0x80026484u: goto label_80026484;
    case 0x800264BCu: goto label_800264BC;
    case 0x80026818u: goto label_80026818;
    case 0x80026828u: goto label_80026828;
    case 0x8002689Cu: goto label_8002689C;
    case 0x800268A4u: goto label_800268A4;
    case 0x800268C8u: goto label_800268C8;
    case 0x800268E0u: goto label_800268E0;
    case 0x80026904u: goto label_80026904;
    case 0x80026924u: goto label_80026924;
    case 0x80026958u: goto label_80026958;
    case 0x800269E4u: goto label_800269E4;
    case 0x80026A04u: goto label_80026A04;
    case 0x80026A18u: goto label_80026A18;
    case 0x80026A30u: goto label_80026A30;
    case 0x80026A54u: goto label_80026A54;
    case 0x80026A94u: goto label_80026A94;
    case 0x80026B5Cu: goto label_80026B5C;
    case 0x80026B6Cu: goto label_80026B6C;
    case 0x80026BE0u: goto label_80026BE0;
    case 0x80026BE8u: goto label_80026BE8;
    case 0x80026C0Cu: goto label_80026C0C;
    case 0x80026C24u: goto label_80026C24;
    case 0x80026C48u: goto label_80026C48;
    case 0x80026C68u: goto label_80026C68;
    case 0x80026C9Cu: goto label_80026C9C;
    case 0x80026CFCu: goto label_80026CFC;
    case 0x80026D0Cu: goto label_80026D0C;
    case 0x80026D80u: goto label_80026D80;
    case 0x80026D88u: goto label_80026D88;
    case 0x80026DACu: goto label_80026DAC;
    case 0x80026DC4u: goto label_80026DC4;
    case 0x80026DE8u: goto label_80026DE8;
    case 0x80026E08u: goto label_80026E08;
    case 0x80026E3Cu: goto label_80026E3C;
    case 0x80026E84u: goto label_80026E84;
    case 0x80026EA8u: goto label_80026EA8;
    case 0x80026F08u: goto label_80026F08;
    case 0x80026F18u: goto label_80026F18;
    case 0x80026F8Cu: goto label_80026F8C;
    case 0x80026F94u: goto label_80026F94;
    case 0x80026FB8u: goto label_80026FB8;
    case 0x80026FD0u: goto label_80026FD0;
    case 0x80026FF4u: goto label_80026FF4;
    case 0x80027014u: goto label_80027014;
    case 0x80027048u: goto label_80027048;
    case 0x80027090u: goto label_80027090;
    case 0x800270A4u: goto label_800270A4;
    case 0x800270BCu: goto label_800270BC;
    case 0x800270C8u: goto label_800270C8;
    case 0x800270ECu: goto label_800270EC;
    case 0x80027138u: goto label_80027138;
    case 0x80027148u: goto label_80027148;
    case 0x80027158u: goto label_80027158;
    case 0x800271BCu: goto label_800271BC;
    default: return;
    }
}

