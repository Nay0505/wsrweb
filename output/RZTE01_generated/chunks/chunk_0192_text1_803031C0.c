// DolRecomp output
#include "../RZTE01.h"

static void loop_803038C0(CPUState* ctx) {
label_803038C0:
    ctx->downcount -= 5;
    ctx->pc = 0x803038C0u;
    // 803038C0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803038C4u;
    // 803038C4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x803038C8u;
    // 803038C8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x803038CCu;
    // 803038CC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 803038D0: bc    16, 0, 0x803038C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803038C0u;
                return;
            }
            goto label_803038C0;
        }
    }

    ctx->pc = 0x803038D4u;
}

static void loop_803042A4(CPUState* ctx) {
label_803042A4:
    ctx->downcount -= 26;
    ctx->pc = 0x803042A4u;
    // 803042A4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 803042A8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x803042ACu;
    // 803042AC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803042B0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803042B4u;
    // 803042B4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042B8u;
    // 803042B8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x803042BCu;
    // 803042BC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803042C0u;
    // 803042C0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042C4u;
    // 803042C4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803042C8u;
    // 803042C8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042CCu;
    // 803042CC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803042D0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803042D4u;
    // 803042D4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042D8u;
    // 803042D8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x803042DCu;
    // 803042DC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803042E0u;
    // 803042E0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042E4u;
    // 803042E4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803042E8u;
    // 803042E8: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042ECu;
    // 803042EC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803042F0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803042F4u;
    // 803042F4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803042F8u;
    // 803042F8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 803042FC: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80304300u;
    // 80304300: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80304304u;
    // 80304304: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80304308u;
    // 80304308: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030430Cu;
    // 8030430C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80304310: cmpw    r7, r0
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

    // 80304314: bc    12, 0, 0x803042A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803042A4u;
                return;
            }
            goto label_803042A4;
        }
    }

    ctx->pc = 0x80304318u;
}

static void loop_803067CC(CPUState* ctx) {
label_803067CC:
    ctx->downcount -= 26;
    ctx->pc = 0x803067CCu;
    // 803067CC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 803067D0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x803067D4u;
    // 803067D4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803067D8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803067DCu;
    // 803067DC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803067E0u;
    // 803067E0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x803067E4u;
    // 803067E4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803067E8u;
    // 803067E8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803067ECu;
    // 803067EC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803067F0u;
    // 803067F0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803067F4u;
    // 803067F4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803067F8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803067FCu;
    // 803067FC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80306800u;
    // 80306800: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80306804u;
    // 80306804: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80306808u;
    // 80306808: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030680Cu;
    // 8030680C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80306810u;
    // 80306810: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80306814u;
    // 80306814: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80306818: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030681Cu;
    // 8030681C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80306820u;
    // 80306820: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80306824: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80306828u;
    // 80306828: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030682Cu;
    // 8030682C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80306830u;
    // 80306830: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80306834u;
    // 80306834: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80306838: cmpw    r7, r0
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

    // 8030683C: bc    12, 0, 0x803067CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803067CCu;
                return;
            }
            goto label_803067CC;
        }
    }

    ctx->pc = 0x80306840u;
}

void func_803031C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x803031C0u: goto label_803031C0;
    case 0x803031C4u: goto label_803031C4;
    case 0x803031C8u: goto label_803031C8;
    case 0x803031CCu: goto label_803031CC;
    case 0x803031D0u: goto label_803031D0;
    case 0x803031D4u: goto label_803031D4;
    case 0x803031D8u: goto label_803031D8;
    case 0x803031DCu: goto label_803031DC;
    case 0x803031E0u: goto label_803031E0;
    case 0x803031E4u: goto label_803031E4;
    case 0x803031E8u: goto label_803031E8;
    case 0x803031ECu: goto label_803031EC;
    case 0x803031F0u: goto label_803031F0;
    case 0x803031F4u: goto label_803031F4;
    case 0x803031F8u: goto label_803031F8;
    case 0x803031FCu: goto label_803031FC;
    case 0x80303200u: goto label_80303200;
    case 0x80303204u: goto label_80303204;
    case 0x80303208u: goto label_80303208;
    case 0x8030320Cu: goto label_8030320C;
    case 0x80303210u: goto label_80303210;
    case 0x80303214u: goto label_80303214;
    case 0x80303218u: goto label_80303218;
    case 0x8030321Cu: goto label_8030321C;
    case 0x80303220u: goto label_80303220;
    case 0x80303224u: goto label_80303224;
    case 0x80303228u: goto label_80303228;
    case 0x8030322Cu: goto label_8030322C;
    case 0x80303230u: goto label_80303230;
    case 0x80303234u: goto label_80303234;
    case 0x80303238u: goto label_80303238;
    case 0x8030323Cu: goto label_8030323C;
    case 0x80303240u: goto label_80303240;
    case 0x80303244u: goto label_80303244;
    case 0x80303248u: goto label_80303248;
    case 0x8030324Cu: goto label_8030324C;
    case 0x80303250u: goto label_80303250;
    case 0x80303254u: goto label_80303254;
    case 0x80303258u: goto label_80303258;
    case 0x8030325Cu: goto label_8030325C;
    case 0x80303260u: goto label_80303260;
    case 0x80303264u: goto label_80303264;
    case 0x80303268u: goto label_80303268;
    case 0x8030326Cu: goto label_8030326C;
    case 0x80303270u: goto label_80303270;
    case 0x80303274u: goto label_80303274;
    case 0x80303278u: goto label_80303278;
    case 0x8030327Cu: goto label_8030327C;
    case 0x80303280u: goto label_80303280;
    case 0x80303284u: goto label_80303284;
    case 0x80303288u: goto label_80303288;
    case 0x8030328Cu: goto label_8030328C;
    case 0x80303290u: goto label_80303290;
    case 0x80303294u: goto label_80303294;
    case 0x80303298u: goto label_80303298;
    case 0x8030329Cu: goto label_8030329C;
    case 0x803032A0u: goto label_803032A0;
    case 0x803032A4u: goto label_803032A4;
    case 0x803032A8u: goto label_803032A8;
    case 0x803032ACu: goto label_803032AC;
    case 0x803032B0u: goto label_803032B0;
    case 0x803032B4u: goto label_803032B4;
    case 0x803032B8u: goto label_803032B8;
    case 0x803032BCu: goto label_803032BC;
    case 0x803032C0u: goto label_803032C0;
    case 0x803032C4u: goto label_803032C4;
    case 0x803032C8u: goto label_803032C8;
    case 0x803032CCu: goto label_803032CC;
    case 0x803032D0u: goto label_803032D0;
    case 0x803032D4u: goto label_803032D4;
    case 0x803032D8u: goto label_803032D8;
    case 0x803032DCu: goto label_803032DC;
    case 0x803032E0u: goto label_803032E0;
    case 0x803032E4u: goto label_803032E4;
    case 0x803032E8u: goto label_803032E8;
    case 0x803032ECu: goto label_803032EC;
    case 0x803032F0u: goto label_803032F0;
    case 0x803032F4u: goto label_803032F4;
    case 0x803032F8u: goto label_803032F8;
    case 0x803032FCu: goto label_803032FC;
    case 0x80303300u: goto label_80303300;
    case 0x80303304u: goto label_80303304;
    case 0x80303308u: goto label_80303308;
    case 0x8030330Cu: goto label_8030330C;
    case 0x80303310u: goto label_80303310;
    case 0x80303314u: goto label_80303314;
    case 0x80303318u: goto label_80303318;
    case 0x8030331Cu: goto label_8030331C;
    case 0x80303320u: goto label_80303320;
    case 0x80303324u: goto label_80303324;
    case 0x80303328u: goto label_80303328;
    case 0x8030332Cu: goto label_8030332C;
    case 0x80303330u: goto label_80303330;
    case 0x80303334u: goto label_80303334;
    case 0x80303338u: goto label_80303338;
    case 0x8030333Cu: goto label_8030333C;
    case 0x80303340u: goto label_80303340;
    case 0x80303344u: goto label_80303344;
    case 0x80303348u: goto label_80303348;
    case 0x8030334Cu: goto label_8030334C;
    case 0x80303350u: goto label_80303350;
    case 0x80303354u: goto label_80303354;
    case 0x80303358u: goto label_80303358;
    case 0x8030335Cu: goto label_8030335C;
    case 0x80303360u: goto label_80303360;
    case 0x80303364u: goto label_80303364;
    case 0x80303368u: goto label_80303368;
    case 0x8030336Cu: goto label_8030336C;
    case 0x80303370u: goto label_80303370;
    case 0x80303374u: goto label_80303374;
    case 0x80303378u: goto label_80303378;
    case 0x8030337Cu: goto label_8030337C;
    case 0x80303380u: goto label_80303380;
    case 0x80303384u: goto label_80303384;
    case 0x80303388u: goto label_80303388;
    case 0x8030338Cu: goto label_8030338C;
    case 0x80303390u: goto label_80303390;
    case 0x80303394u: goto label_80303394;
    case 0x80303398u: goto label_80303398;
    case 0x8030339Cu: goto label_8030339C;
    case 0x803033A0u: goto label_803033A0;
    case 0x803033A4u: goto label_803033A4;
    case 0x803033A8u: goto label_803033A8;
    case 0x803033ACu: goto label_803033AC;
    case 0x803033B0u: goto label_803033B0;
    case 0x803033B4u: goto label_803033B4;
    case 0x803033B8u: goto label_803033B8;
    case 0x803033BCu: goto label_803033BC;
    case 0x803033C0u: goto label_803033C0;
    case 0x803033C4u: goto label_803033C4;
    case 0x803033C8u: goto label_803033C8;
    case 0x803033CCu: goto label_803033CC;
    case 0x803033D0u: goto label_803033D0;
    case 0x803033D4u: goto label_803033D4;
    case 0x803033D8u: goto label_803033D8;
    case 0x803033DCu: goto label_803033DC;
    case 0x803033E0u: goto label_803033E0;
    case 0x803033E4u: goto label_803033E4;
    case 0x803033E8u: goto label_803033E8;
    case 0x803033ECu: goto label_803033EC;
    case 0x803033F0u: goto label_803033F0;
    case 0x803033F4u: goto label_803033F4;
    case 0x803033F8u: goto label_803033F8;
    case 0x803033FCu: goto label_803033FC;
    case 0x80303400u: goto label_80303400;
    case 0x80303404u: goto label_80303404;
    case 0x80303408u: goto label_80303408;
    case 0x8030340Cu: goto label_8030340C;
    case 0x80303410u: goto label_80303410;
    case 0x80303414u: goto label_80303414;
    case 0x80303418u: goto label_80303418;
    case 0x8030341Cu: goto label_8030341C;
    case 0x80303420u: goto label_80303420;
    case 0x80303424u: goto label_80303424;
    case 0x80303428u: goto label_80303428;
    case 0x8030342Cu: goto label_8030342C;
    case 0x80303430u: goto label_80303430;
    case 0x80303434u: goto label_80303434;
    case 0x80303438u: goto label_80303438;
    case 0x8030343Cu: goto label_8030343C;
    case 0x80303440u: goto label_80303440;
    case 0x80303444u: goto label_80303444;
    case 0x80303448u: goto label_80303448;
    case 0x8030344Cu: goto label_8030344C;
    case 0x80303450u: goto label_80303450;
    case 0x80303454u: goto label_80303454;
    case 0x80303458u: goto label_80303458;
    case 0x8030345Cu: goto label_8030345C;
    case 0x80303460u: goto label_80303460;
    case 0x80303464u: goto label_80303464;
    case 0x80303468u: goto label_80303468;
    case 0x8030346Cu: goto label_8030346C;
    case 0x80303470u: goto label_80303470;
    case 0x80303474u: goto label_80303474;
    case 0x80303478u: goto label_80303478;
    case 0x8030347Cu: goto label_8030347C;
    case 0x80303480u: goto label_80303480;
    case 0x80303484u: goto label_80303484;
    case 0x80303488u: goto label_80303488;
    case 0x8030348Cu: goto label_8030348C;
    case 0x80303490u: goto label_80303490;
    case 0x80303494u: goto label_80303494;
    case 0x80303498u: goto label_80303498;
    case 0x8030349Cu: goto label_8030349C;
    case 0x803034A0u: goto label_803034A0;
    case 0x803034A4u: goto label_803034A4;
    case 0x803034A8u: goto label_803034A8;
    case 0x803034ACu: goto label_803034AC;
    case 0x803034B0u: goto label_803034B0;
    case 0x803034B4u: goto label_803034B4;
    case 0x803034B8u: goto label_803034B8;
    case 0x803034BCu: goto label_803034BC;
    case 0x803034C0u: goto label_803034C0;
    case 0x803034C4u: goto label_803034C4;
    case 0x803034C8u: goto label_803034C8;
    case 0x803034CCu: goto label_803034CC;
    case 0x803034D0u: goto label_803034D0;
    case 0x803034D4u: goto label_803034D4;
    case 0x803034D8u: goto label_803034D8;
    case 0x803034DCu: goto label_803034DC;
    case 0x803034E0u: goto label_803034E0;
    case 0x803034E4u: goto label_803034E4;
    case 0x803034E8u: goto label_803034E8;
    case 0x803034ECu: goto label_803034EC;
    case 0x803034F0u: goto label_803034F0;
    case 0x803034F4u: goto label_803034F4;
    case 0x803034F8u: goto label_803034F8;
    case 0x803034FCu: goto label_803034FC;
    case 0x80303500u: goto label_80303500;
    case 0x80303504u: goto label_80303504;
    case 0x80303508u: goto label_80303508;
    case 0x8030350Cu: goto label_8030350C;
    case 0x80303510u: goto label_80303510;
    case 0x80303514u: goto label_80303514;
    case 0x80303518u: goto label_80303518;
    case 0x8030351Cu: goto label_8030351C;
    case 0x80303520u: goto label_80303520;
    case 0x80303524u: goto label_80303524;
    case 0x80303528u: goto label_80303528;
    case 0x8030352Cu: goto label_8030352C;
    case 0x80303530u: goto label_80303530;
    case 0x80303534u: goto label_80303534;
    case 0x80303538u: goto label_80303538;
    case 0x8030353Cu: goto label_8030353C;
    case 0x80303540u: goto label_80303540;
    case 0x80303544u: goto label_80303544;
    case 0x80303548u: goto label_80303548;
    case 0x8030354Cu: goto label_8030354C;
    case 0x80303550u: goto label_80303550;
    case 0x80303554u: goto label_80303554;
    case 0x80303558u: goto label_80303558;
    case 0x8030355Cu: goto label_8030355C;
    case 0x80303560u: goto label_80303560;
    case 0x80303564u: goto label_80303564;
    case 0x80303568u: goto label_80303568;
    case 0x8030356Cu: goto label_8030356C;
    case 0x80303570u: goto label_80303570;
    case 0x80303574u: goto label_80303574;
    case 0x80303578u: goto label_80303578;
    case 0x8030357Cu: goto label_8030357C;
    case 0x80303580u: goto label_80303580;
    case 0x80303584u: goto label_80303584;
    case 0x80303588u: goto label_80303588;
    case 0x8030358Cu: goto label_8030358C;
    case 0x80303590u: goto label_80303590;
    case 0x80303594u: goto label_80303594;
    case 0x80303598u: goto label_80303598;
    case 0x8030359Cu: goto label_8030359C;
    case 0x803035A0u: goto label_803035A0;
    case 0x803035A4u: goto label_803035A4;
    case 0x803035A8u: goto label_803035A8;
    case 0x803035ACu: goto label_803035AC;
    case 0x803035B0u: goto label_803035B0;
    case 0x803035B4u: goto label_803035B4;
    case 0x803035B8u: goto label_803035B8;
    case 0x803035BCu: goto label_803035BC;
    case 0x803035C0u: goto label_803035C0;
    case 0x803035C4u: goto label_803035C4;
    case 0x803035C8u: goto label_803035C8;
    case 0x803035CCu: goto label_803035CC;
    case 0x803035D0u: goto label_803035D0;
    case 0x803035D4u: goto label_803035D4;
    case 0x803035D8u: goto label_803035D8;
    case 0x803035DCu: goto label_803035DC;
    case 0x803035E0u: goto label_803035E0;
    case 0x803035E4u: goto label_803035E4;
    case 0x803035E8u: goto label_803035E8;
    case 0x803035ECu: goto label_803035EC;
    case 0x803035F0u: goto label_803035F0;
    case 0x803035F4u: goto label_803035F4;
    case 0x803035F8u: goto label_803035F8;
    case 0x803035FCu: goto label_803035FC;
    case 0x80303600u: goto label_80303600;
    case 0x80303604u: goto label_80303604;
    case 0x80303608u: goto label_80303608;
    case 0x8030360Cu: goto label_8030360C;
    case 0x80303610u: goto label_80303610;
    case 0x80303614u: goto label_80303614;
    case 0x80303618u: goto label_80303618;
    case 0x8030361Cu: goto label_8030361C;
    case 0x80303620u: goto label_80303620;
    case 0x80303624u: goto label_80303624;
    case 0x80303628u: goto label_80303628;
    case 0x8030362Cu: goto label_8030362C;
    case 0x80303630u: goto label_80303630;
    case 0x80303634u: goto label_80303634;
    case 0x80303638u: goto label_80303638;
    case 0x8030363Cu: goto label_8030363C;
    case 0x80303640u: goto label_80303640;
    case 0x80303644u: goto label_80303644;
    case 0x80303648u: goto label_80303648;
    case 0x8030364Cu: goto label_8030364C;
    case 0x80303650u: goto label_80303650;
    case 0x80303654u: goto label_80303654;
    case 0x80303658u: goto label_80303658;
    case 0x8030365Cu: goto label_8030365C;
    case 0x80303660u: goto label_80303660;
    case 0x80303664u: goto label_80303664;
    case 0x80303668u: goto label_80303668;
    case 0x8030366Cu: goto label_8030366C;
    case 0x80303670u: goto label_80303670;
    case 0x80303674u: goto label_80303674;
    case 0x80303678u: goto label_80303678;
    case 0x8030367Cu: goto label_8030367C;
    case 0x80303680u: goto label_80303680;
    case 0x80303684u: goto label_80303684;
    case 0x80303688u: goto label_80303688;
    case 0x8030368Cu: goto label_8030368C;
    case 0x80303690u: goto label_80303690;
    case 0x80303694u: goto label_80303694;
    case 0x80303698u: goto label_80303698;
    case 0x8030369Cu: goto label_8030369C;
    case 0x803036A0u: goto label_803036A0;
    case 0x803036A4u: goto label_803036A4;
    case 0x803036A8u: goto label_803036A8;
    case 0x803036ACu: goto label_803036AC;
    case 0x803036B0u: goto label_803036B0;
    case 0x803036B4u: goto label_803036B4;
    case 0x803036B8u: goto label_803036B8;
    case 0x803036BCu: goto label_803036BC;
    case 0x803036C0u: goto label_803036C0;
    case 0x803036C4u: goto label_803036C4;
    case 0x803036C8u: goto label_803036C8;
    case 0x803036CCu: goto label_803036CC;
    case 0x803036D0u: goto label_803036D0;
    case 0x803036D4u: goto label_803036D4;
    case 0x803036D8u: goto label_803036D8;
    case 0x803036DCu: goto label_803036DC;
    case 0x803036E0u: goto label_803036E0;
    case 0x803036E4u: goto label_803036E4;
    case 0x803036E8u: goto label_803036E8;
    case 0x803036ECu: goto label_803036EC;
    case 0x803036F0u: goto label_803036F0;
    case 0x803036F4u: goto label_803036F4;
    case 0x803036F8u: goto label_803036F8;
    case 0x803036FCu: goto label_803036FC;
    case 0x80303700u: goto label_80303700;
    case 0x80303704u: goto label_80303704;
    case 0x80303708u: goto label_80303708;
    case 0x8030370Cu: goto label_8030370C;
    case 0x80303710u: goto label_80303710;
    case 0x80303714u: goto label_80303714;
    case 0x80303718u: goto label_80303718;
    case 0x8030371Cu: goto label_8030371C;
    case 0x80303720u: goto label_80303720;
    case 0x80303724u: goto label_80303724;
    case 0x80303728u: goto label_80303728;
    case 0x8030372Cu: goto label_8030372C;
    case 0x80303730u: goto label_80303730;
    case 0x80303734u: goto label_80303734;
    case 0x80303738u: goto label_80303738;
    case 0x8030373Cu: goto label_8030373C;
    case 0x80303740u: goto label_80303740;
    case 0x80303744u: goto label_80303744;
    case 0x80303748u: goto label_80303748;
    case 0x8030374Cu: goto label_8030374C;
    case 0x80303750u: goto label_80303750;
    case 0x80303754u: goto label_80303754;
    case 0x80303758u: goto label_80303758;
    case 0x8030375Cu: goto label_8030375C;
    case 0x80303760u: goto label_80303760;
    case 0x80303764u: goto label_80303764;
    case 0x80303768u: goto label_80303768;
    case 0x8030376Cu: goto label_8030376C;
    case 0x80303770u: goto label_80303770;
    case 0x80303774u: goto label_80303774;
    case 0x80303778u: goto label_80303778;
    case 0x8030377Cu: goto label_8030377C;
    case 0x80303780u: goto label_80303780;
    case 0x80303784u: goto label_80303784;
    case 0x80303788u: goto label_80303788;
    case 0x8030378Cu: goto label_8030378C;
    case 0x80303790u: goto label_80303790;
    case 0x80303794u: goto label_80303794;
    case 0x80303798u: goto label_80303798;
    case 0x8030379Cu: goto label_8030379C;
    case 0x803037A0u: goto label_803037A0;
    case 0x803037A4u: goto label_803037A4;
    case 0x803037A8u: goto label_803037A8;
    case 0x803037ACu: goto label_803037AC;
    case 0x803037B0u: goto label_803037B0;
    case 0x803037B4u: goto label_803037B4;
    case 0x803037B8u: goto label_803037B8;
    case 0x803037BCu: goto label_803037BC;
    case 0x803037C0u: goto label_803037C0;
    case 0x803037C4u: goto label_803037C4;
    case 0x803037C8u: goto label_803037C8;
    case 0x803037CCu: goto label_803037CC;
    case 0x803037D0u: goto label_803037D0;
    case 0x803037D4u: goto label_803037D4;
    case 0x803037D8u: goto label_803037D8;
    case 0x803037DCu: goto label_803037DC;
    case 0x803037E0u: goto label_803037E0;
    case 0x803037E4u: goto label_803037E4;
    case 0x803037E8u: goto label_803037E8;
    case 0x803037ECu: goto label_803037EC;
    case 0x803037F0u: goto label_803037F0;
    case 0x803037F4u: goto label_803037F4;
    case 0x803037F8u: goto label_803037F8;
    case 0x803037FCu: goto label_803037FC;
    case 0x80303800u: goto label_80303800;
    case 0x80303804u: goto label_80303804;
    case 0x80303808u: goto label_80303808;
    case 0x8030380Cu: goto label_8030380C;
    case 0x80303810u: goto label_80303810;
    case 0x80303814u: goto label_80303814;
    case 0x80303818u: goto label_80303818;
    case 0x8030381Cu: goto label_8030381C;
    case 0x80303820u: goto label_80303820;
    case 0x80303824u: goto label_80303824;
    case 0x80303828u: goto label_80303828;
    case 0x8030382Cu: goto label_8030382C;
    case 0x80303830u: goto label_80303830;
    case 0x80303834u: goto label_80303834;
    case 0x80303838u: goto label_80303838;
    case 0x8030383Cu: goto label_8030383C;
    case 0x80303840u: goto label_80303840;
    case 0x80303844u: goto label_80303844;
    case 0x80303848u: goto label_80303848;
    case 0x8030384Cu: goto label_8030384C;
    case 0x80303850u: goto label_80303850;
    case 0x80303854u: goto label_80303854;
    case 0x80303858u: goto label_80303858;
    case 0x8030385Cu: goto label_8030385C;
    case 0x80303860u: goto label_80303860;
    case 0x80303864u: goto label_80303864;
    case 0x80303868u: goto label_80303868;
    case 0x8030386Cu: goto label_8030386C;
    case 0x80303870u: goto label_80303870;
    case 0x80303874u: goto label_80303874;
    case 0x80303878u: goto label_80303878;
    case 0x8030387Cu: goto label_8030387C;
    case 0x80303880u: goto label_80303880;
    case 0x80303884u: goto label_80303884;
    case 0x80303888u: goto label_80303888;
    case 0x8030388Cu: goto label_8030388C;
    case 0x80303890u: goto label_80303890;
    case 0x80303894u: goto label_80303894;
    case 0x80303898u: goto label_80303898;
    case 0x8030389Cu: goto label_8030389C;
    case 0x803038A0u: goto label_803038A0;
    case 0x803038A4u: goto label_803038A4;
    case 0x803038A8u: goto label_803038A8;
    case 0x803038ACu: goto label_803038AC;
    case 0x803038B0u: goto label_803038B0;
    case 0x803038B4u: goto label_803038B4;
    case 0x803038B8u: goto label_803038B8;
    case 0x803038BCu: goto label_803038BC;
    case 0x803038C0u: goto label_803038C0;
    case 0x803038C4u: goto label_803038C4;
    case 0x803038C8u: goto label_803038C8;
    case 0x803038CCu: goto label_803038CC;
    case 0x803038D0u: goto label_803038D0;
    case 0x803038D4u: goto label_803038D4;
    case 0x803038D8u: goto label_803038D8;
    case 0x803038DCu: goto label_803038DC;
    case 0x803038E0u: goto label_803038E0;
    case 0x803038E4u: goto label_803038E4;
    case 0x803038E8u: goto label_803038E8;
    case 0x803038ECu: goto label_803038EC;
    case 0x803038F0u: goto label_803038F0;
    case 0x803038F4u: goto label_803038F4;
    case 0x803038F8u: goto label_803038F8;
    case 0x803038FCu: goto label_803038FC;
    case 0x80303900u: goto label_80303900;
    case 0x80303904u: goto label_80303904;
    case 0x80303908u: goto label_80303908;
    case 0x8030390Cu: goto label_8030390C;
    case 0x80303910u: goto label_80303910;
    case 0x80303914u: goto label_80303914;
    case 0x80303918u: goto label_80303918;
    case 0x8030391Cu: goto label_8030391C;
    case 0x80303920u: goto label_80303920;
    case 0x80303924u: goto label_80303924;
    case 0x80303928u: goto label_80303928;
    case 0x8030392Cu: goto label_8030392C;
    case 0x80303930u: goto label_80303930;
    case 0x80303934u: goto label_80303934;
    case 0x80303938u: goto label_80303938;
    case 0x8030393Cu: goto label_8030393C;
    case 0x80303940u: goto label_80303940;
    case 0x80303944u: goto label_80303944;
    case 0x80303948u: goto label_80303948;
    case 0x8030394Cu: goto label_8030394C;
    case 0x80303950u: goto label_80303950;
    case 0x80303954u: goto label_80303954;
    case 0x80303958u: goto label_80303958;
    case 0x8030395Cu: goto label_8030395C;
    case 0x80303960u: goto label_80303960;
    case 0x80303964u: goto label_80303964;
    case 0x80303968u: goto label_80303968;
    case 0x8030396Cu: goto label_8030396C;
    case 0x80303970u: goto label_80303970;
    case 0x80303974u: goto label_80303974;
    case 0x80303978u: goto label_80303978;
    case 0x8030397Cu: goto label_8030397C;
    case 0x80303980u: goto label_80303980;
    case 0x80303984u: goto label_80303984;
    case 0x80303988u: goto label_80303988;
    case 0x8030398Cu: goto label_8030398C;
    case 0x80303990u: goto label_80303990;
    case 0x80303994u: goto label_80303994;
    case 0x80303998u: goto label_80303998;
    case 0x8030399Cu: goto label_8030399C;
    case 0x803039A0u: goto label_803039A0;
    case 0x803039A4u: goto label_803039A4;
    case 0x803039A8u: goto label_803039A8;
    case 0x803039ACu: goto label_803039AC;
    case 0x803039B0u: goto label_803039B0;
    case 0x803039B4u: goto label_803039B4;
    case 0x803039B8u: goto label_803039B8;
    case 0x803039BCu: goto label_803039BC;
    case 0x803039C0u: goto label_803039C0;
    case 0x803039C4u: goto label_803039C4;
    case 0x803039C8u: goto label_803039C8;
    case 0x803039CCu: goto label_803039CC;
    case 0x803039D0u: goto label_803039D0;
    case 0x803039D4u: goto label_803039D4;
    case 0x803039D8u: goto label_803039D8;
    case 0x803039DCu: goto label_803039DC;
    case 0x803039E0u: goto label_803039E0;
    case 0x803039E4u: goto label_803039E4;
    case 0x803039E8u: goto label_803039E8;
    case 0x803039ECu: goto label_803039EC;
    case 0x803039F0u: goto label_803039F0;
    case 0x803039F4u: goto label_803039F4;
    case 0x803039F8u: goto label_803039F8;
    case 0x803039FCu: goto label_803039FC;
    case 0x80303A00u: goto label_80303A00;
    case 0x80303A04u: goto label_80303A04;
    case 0x80303A08u: goto label_80303A08;
    case 0x80303A0Cu: goto label_80303A0C;
    case 0x80303A10u: goto label_80303A10;
    case 0x80303A14u: goto label_80303A14;
    case 0x80303A18u: goto label_80303A18;
    case 0x80303A1Cu: goto label_80303A1C;
    case 0x80303A20u: goto label_80303A20;
    case 0x80303A24u: goto label_80303A24;
    case 0x80303A28u: goto label_80303A28;
    case 0x80303A2Cu: goto label_80303A2C;
    case 0x80303A30u: goto label_80303A30;
    case 0x80303A34u: goto label_80303A34;
    case 0x80303A38u: goto label_80303A38;
    case 0x80303A3Cu: goto label_80303A3C;
    case 0x80303A40u: goto label_80303A40;
    case 0x80303A44u: goto label_80303A44;
    case 0x80303A48u: goto label_80303A48;
    case 0x80303A4Cu: goto label_80303A4C;
    case 0x80303A50u: goto label_80303A50;
    case 0x80303A54u: goto label_80303A54;
    case 0x80303A58u: goto label_80303A58;
    case 0x80303A5Cu: goto label_80303A5C;
    case 0x80303A60u: goto label_80303A60;
    case 0x80303A64u: goto label_80303A64;
    case 0x80303A68u: goto label_80303A68;
    case 0x80303A6Cu: goto label_80303A6C;
    case 0x80303A70u: goto label_80303A70;
    case 0x80303A74u: goto label_80303A74;
    case 0x80303A78u: goto label_80303A78;
    case 0x80303A7Cu: goto label_80303A7C;
    case 0x80303A80u: goto label_80303A80;
    case 0x80303A84u: goto label_80303A84;
    case 0x80303A88u: goto label_80303A88;
    case 0x80303A8Cu: goto label_80303A8C;
    case 0x80303A90u: goto label_80303A90;
    case 0x80303A94u: goto label_80303A94;
    case 0x80303A98u: goto label_80303A98;
    case 0x80303A9Cu: goto label_80303A9C;
    case 0x80303AA0u: goto label_80303AA0;
    case 0x80303AA4u: goto label_80303AA4;
    case 0x80303AA8u: goto label_80303AA8;
    case 0x80303AACu: goto label_80303AAC;
    case 0x80303AB0u: goto label_80303AB0;
    case 0x80303AB4u: goto label_80303AB4;
    case 0x80303AB8u: goto label_80303AB8;
    case 0x80303ABCu: goto label_80303ABC;
    case 0x80303AC0u: goto label_80303AC0;
    case 0x80303AC4u: goto label_80303AC4;
    case 0x80303AC8u: goto label_80303AC8;
    case 0x80303ACCu: goto label_80303ACC;
    case 0x80303AD0u: goto label_80303AD0;
    case 0x80303AD4u: goto label_80303AD4;
    case 0x80303AD8u: goto label_80303AD8;
    case 0x80303ADCu: goto label_80303ADC;
    case 0x80303AE0u: goto label_80303AE0;
    case 0x80303AE4u: goto label_80303AE4;
    case 0x80303AE8u: goto label_80303AE8;
    case 0x80303AECu: goto label_80303AEC;
    case 0x80303AF0u: goto label_80303AF0;
    case 0x80303AF4u: goto label_80303AF4;
    case 0x80303AF8u: goto label_80303AF8;
    case 0x80303AFCu: goto label_80303AFC;
    case 0x80303B00u: goto label_80303B00;
    case 0x80303B04u: goto label_80303B04;
    case 0x80303B08u: goto label_80303B08;
    case 0x80303B0Cu: goto label_80303B0C;
    case 0x80303B10u: goto label_80303B10;
    case 0x80303B14u: goto label_80303B14;
    case 0x80303B18u: goto label_80303B18;
    case 0x80303B1Cu: goto label_80303B1C;
    case 0x80303B20u: goto label_80303B20;
    case 0x80303B24u: goto label_80303B24;
    case 0x80303B28u: goto label_80303B28;
    case 0x80303B2Cu: goto label_80303B2C;
    case 0x80303B30u: goto label_80303B30;
    case 0x80303B34u: goto label_80303B34;
    case 0x80303B38u: goto label_80303B38;
    case 0x80303B3Cu: goto label_80303B3C;
    case 0x80303B40u: goto label_80303B40;
    case 0x80303B44u: goto label_80303B44;
    case 0x80303B48u: goto label_80303B48;
    case 0x80303B4Cu: goto label_80303B4C;
    case 0x80303B50u: goto label_80303B50;
    case 0x80303B54u: goto label_80303B54;
    case 0x80303B58u: goto label_80303B58;
    case 0x80303B5Cu: goto label_80303B5C;
    case 0x80303B60u: goto label_80303B60;
    case 0x80303B64u: goto label_80303B64;
    case 0x80303B68u: goto label_80303B68;
    case 0x80303B6Cu: goto label_80303B6C;
    case 0x80303B70u: goto label_80303B70;
    case 0x80303B74u: goto label_80303B74;
    case 0x80303B78u: goto label_80303B78;
    case 0x80303B7Cu: goto label_80303B7C;
    case 0x80303B80u: goto label_80303B80;
    case 0x80303B84u: goto label_80303B84;
    case 0x80303B88u: goto label_80303B88;
    case 0x80303B8Cu: goto label_80303B8C;
    case 0x80303B90u: goto label_80303B90;
    case 0x80303B94u: goto label_80303B94;
    case 0x80303B98u: goto label_80303B98;
    case 0x80303B9Cu: goto label_80303B9C;
    case 0x80303BA0u: goto label_80303BA0;
    case 0x80303BA4u: goto label_80303BA4;
    case 0x80303BA8u: goto label_80303BA8;
    case 0x80303BACu: goto label_80303BAC;
    case 0x80303BB0u: goto label_80303BB0;
    case 0x80303BB4u: goto label_80303BB4;
    case 0x80303BB8u: goto label_80303BB8;
    case 0x80303BBCu: goto label_80303BBC;
    case 0x80303BC0u: goto label_80303BC0;
    case 0x80303BC4u: goto label_80303BC4;
    case 0x80303BC8u: goto label_80303BC8;
    case 0x80303BCCu: goto label_80303BCC;
    case 0x80303BD0u: goto label_80303BD0;
    case 0x80303BD4u: goto label_80303BD4;
    case 0x80303BD8u: goto label_80303BD8;
    case 0x80303BDCu: goto label_80303BDC;
    case 0x80303BE0u: goto label_80303BE0;
    case 0x80303BE4u: goto label_80303BE4;
    case 0x80303BE8u: goto label_80303BE8;
    case 0x80303BECu: goto label_80303BEC;
    case 0x80303BF0u: goto label_80303BF0;
    case 0x80303BF4u: goto label_80303BF4;
    case 0x80303BF8u: goto label_80303BF8;
    case 0x80303BFCu: goto label_80303BFC;
    case 0x80303C00u: goto label_80303C00;
    case 0x80303C04u: goto label_80303C04;
    case 0x80303C08u: goto label_80303C08;
    case 0x80303C0Cu: goto label_80303C0C;
    case 0x80303C10u: goto label_80303C10;
    case 0x80303C14u: goto label_80303C14;
    case 0x80303C18u: goto label_80303C18;
    case 0x80303C1Cu: goto label_80303C1C;
    case 0x80303C20u: goto label_80303C20;
    case 0x80303C24u: goto label_80303C24;
    case 0x80303C28u: goto label_80303C28;
    case 0x80303C2Cu: goto label_80303C2C;
    case 0x80303C30u: goto label_80303C30;
    case 0x80303C34u: goto label_80303C34;
    case 0x80303C38u: goto label_80303C38;
    case 0x80303C3Cu: goto label_80303C3C;
    case 0x80303C40u: goto label_80303C40;
    case 0x80303C44u: goto label_80303C44;
    case 0x80303C48u: goto label_80303C48;
    case 0x80303C4Cu: goto label_80303C4C;
    case 0x80303C50u: goto label_80303C50;
    case 0x80303C54u: goto label_80303C54;
    case 0x80303C58u: goto label_80303C58;
    case 0x80303C5Cu: goto label_80303C5C;
    case 0x80303C60u: goto label_80303C60;
    case 0x80303C64u: goto label_80303C64;
    case 0x80303C68u: goto label_80303C68;
    case 0x80303C6Cu: goto label_80303C6C;
    case 0x80303C70u: goto label_80303C70;
    case 0x80303C74u: goto label_80303C74;
    case 0x80303C78u: goto label_80303C78;
    case 0x80303C7Cu: goto label_80303C7C;
    case 0x80303C80u: goto label_80303C80;
    case 0x80303C84u: goto label_80303C84;
    case 0x80303C88u: goto label_80303C88;
    case 0x80303C8Cu: goto label_80303C8C;
    case 0x80303C90u: goto label_80303C90;
    case 0x80303C94u: goto label_80303C94;
    case 0x80303C98u: goto label_80303C98;
    case 0x80303C9Cu: goto label_80303C9C;
    case 0x80303CA0u: goto label_80303CA0;
    case 0x80303CA4u: goto label_80303CA4;
    case 0x80303CA8u: goto label_80303CA8;
    case 0x80303CACu: goto label_80303CAC;
    case 0x80303CB0u: goto label_80303CB0;
    case 0x80303CB4u: goto label_80303CB4;
    case 0x80303CB8u: goto label_80303CB8;
    case 0x80303CBCu: goto label_80303CBC;
    case 0x80303CC0u: goto label_80303CC0;
    case 0x80303CC4u: goto label_80303CC4;
    case 0x80303CC8u: goto label_80303CC8;
    case 0x80303CCCu: goto label_80303CCC;
    case 0x80303CD0u: goto label_80303CD0;
    case 0x80303CD4u: goto label_80303CD4;
    case 0x80303CD8u: goto label_80303CD8;
    case 0x80303CDCu: goto label_80303CDC;
    case 0x80303CE0u: goto label_80303CE0;
    case 0x80303CE4u: goto label_80303CE4;
    case 0x80303CE8u: goto label_80303CE8;
    case 0x80303CECu: goto label_80303CEC;
    case 0x80303CF0u: goto label_80303CF0;
    case 0x80303CF4u: goto label_80303CF4;
    case 0x80303CF8u: goto label_80303CF8;
    case 0x80303CFCu: goto label_80303CFC;
    case 0x80303D00u: goto label_80303D00;
    case 0x80303D04u: goto label_80303D04;
    case 0x80303D08u: goto label_80303D08;
    case 0x80303D0Cu: goto label_80303D0C;
    case 0x80303D10u: goto label_80303D10;
    case 0x80303D14u: goto label_80303D14;
    case 0x80303D18u: goto label_80303D18;
    case 0x80303D1Cu: goto label_80303D1C;
    case 0x80303D20u: goto label_80303D20;
    case 0x80303D24u: goto label_80303D24;
    case 0x80303D28u: goto label_80303D28;
    case 0x80303D2Cu: goto label_80303D2C;
    case 0x80303D30u: goto label_80303D30;
    case 0x80303D34u: goto label_80303D34;
    case 0x80303D38u: goto label_80303D38;
    case 0x80303D3Cu: goto label_80303D3C;
    case 0x80303D40u: goto label_80303D40;
    case 0x80303D44u: goto label_80303D44;
    case 0x80303D48u: goto label_80303D48;
    case 0x80303D4Cu: goto label_80303D4C;
    case 0x80303D50u: goto label_80303D50;
    case 0x80303D54u: goto label_80303D54;
    case 0x80303D58u: goto label_80303D58;
    case 0x80303D5Cu: goto label_80303D5C;
    case 0x80303D60u: goto label_80303D60;
    case 0x80303D64u: goto label_80303D64;
    case 0x80303D68u: goto label_80303D68;
    case 0x80303D6Cu: goto label_80303D6C;
    case 0x80303D70u: goto label_80303D70;
    case 0x80303D74u: goto label_80303D74;
    case 0x80303D78u: goto label_80303D78;
    case 0x80303D7Cu: goto label_80303D7C;
    case 0x80303D80u: goto label_80303D80;
    case 0x80303D84u: goto label_80303D84;
    case 0x80303D88u: goto label_80303D88;
    case 0x80303D8Cu: goto label_80303D8C;
    case 0x80303D90u: goto label_80303D90;
    case 0x80303D94u: goto label_80303D94;
    case 0x80303D98u: goto label_80303D98;
    case 0x80303D9Cu: goto label_80303D9C;
    case 0x80303DA0u: goto label_80303DA0;
    case 0x80303DA4u: goto label_80303DA4;
    case 0x80303DA8u: goto label_80303DA8;
    case 0x80303DACu: goto label_80303DAC;
    case 0x80303DB0u: goto label_80303DB0;
    case 0x80303DB4u: goto label_80303DB4;
    case 0x80303DB8u: goto label_80303DB8;
    case 0x80303DBCu: goto label_80303DBC;
    case 0x80303DC0u: goto label_80303DC0;
    case 0x80303DC4u: goto label_80303DC4;
    case 0x80303DC8u: goto label_80303DC8;
    case 0x80303DCCu: goto label_80303DCC;
    case 0x80303DD0u: goto label_80303DD0;
    case 0x80303DD4u: goto label_80303DD4;
    case 0x80303DD8u: goto label_80303DD8;
    case 0x80303DDCu: goto label_80303DDC;
    case 0x80303DE0u: goto label_80303DE0;
    case 0x80303DE4u: goto label_80303DE4;
    case 0x80303DE8u: goto label_80303DE8;
    case 0x80303DECu: goto label_80303DEC;
    case 0x80303DF0u: goto label_80303DF0;
    case 0x80303DF4u: goto label_80303DF4;
    case 0x80303DF8u: goto label_80303DF8;
    case 0x80303DFCu: goto label_80303DFC;
    case 0x80303E00u: goto label_80303E00;
    case 0x80303E04u: goto label_80303E04;
    case 0x80303E08u: goto label_80303E08;
    case 0x80303E0Cu: goto label_80303E0C;
    case 0x80303E10u: goto label_80303E10;
    case 0x80303E14u: goto label_80303E14;
    case 0x80303E18u: goto label_80303E18;
    case 0x80303E1Cu: goto label_80303E1C;
    case 0x80303E20u: goto label_80303E20;
    case 0x80303E24u: goto label_80303E24;
    case 0x80303E28u: goto label_80303E28;
    case 0x80303E2Cu: goto label_80303E2C;
    case 0x80303E30u: goto label_80303E30;
    case 0x80303E34u: goto label_80303E34;
    case 0x80303E38u: goto label_80303E38;
    case 0x80303E3Cu: goto label_80303E3C;
    case 0x80303E40u: goto label_80303E40;
    case 0x80303E44u: goto label_80303E44;
    case 0x80303E48u: goto label_80303E48;
    case 0x80303E4Cu: goto label_80303E4C;
    case 0x80303E50u: goto label_80303E50;
    case 0x80303E54u: goto label_80303E54;
    case 0x80303E58u: goto label_80303E58;
    case 0x80303E5Cu: goto label_80303E5C;
    case 0x80303E60u: goto label_80303E60;
    case 0x80303E64u: goto label_80303E64;
    case 0x80303E68u: goto label_80303E68;
    case 0x80303E6Cu: goto label_80303E6C;
    case 0x80303E70u: goto label_80303E70;
    case 0x80303E74u: goto label_80303E74;
    case 0x80303E78u: goto label_80303E78;
    case 0x80303E7Cu: goto label_80303E7C;
    case 0x80303E80u: goto label_80303E80;
    case 0x80303E84u: goto label_80303E84;
    case 0x80303E88u: goto label_80303E88;
    case 0x80303E8Cu: goto label_80303E8C;
    case 0x80303E90u: goto label_80303E90;
    case 0x80303E94u: goto label_80303E94;
    case 0x80303E98u: goto label_80303E98;
    case 0x80303E9Cu: goto label_80303E9C;
    case 0x80303EA0u: goto label_80303EA0;
    case 0x80303EA4u: goto label_80303EA4;
    case 0x80303EA8u: goto label_80303EA8;
    case 0x80303EACu: goto label_80303EAC;
    case 0x80303EB0u: goto label_80303EB0;
    case 0x80303EB4u: goto label_80303EB4;
    case 0x80303EB8u: goto label_80303EB8;
    case 0x80303EBCu: goto label_80303EBC;
    case 0x80303EC0u: goto label_80303EC0;
    case 0x80303EC4u: goto label_80303EC4;
    case 0x80303EC8u: goto label_80303EC8;
    case 0x80303ECCu: goto label_80303ECC;
    case 0x80303ED0u: goto label_80303ED0;
    case 0x80303ED4u: goto label_80303ED4;
    case 0x80303ED8u: goto label_80303ED8;
    case 0x80303EDCu: goto label_80303EDC;
    case 0x80303EE0u: goto label_80303EE0;
    case 0x80303EE4u: goto label_80303EE4;
    case 0x80303EE8u: goto label_80303EE8;
    case 0x80303EECu: goto label_80303EEC;
    case 0x80303EF0u: goto label_80303EF0;
    case 0x80303EF4u: goto label_80303EF4;
    case 0x80303EF8u: goto label_80303EF8;
    case 0x80303EFCu: goto label_80303EFC;
    case 0x80303F00u: goto label_80303F00;
    case 0x80303F04u: goto label_80303F04;
    case 0x80303F08u: goto label_80303F08;
    case 0x80303F0Cu: goto label_80303F0C;
    case 0x80303F10u: goto label_80303F10;
    case 0x80303F14u: goto label_80303F14;
    case 0x80303F18u: goto label_80303F18;
    case 0x80303F1Cu: goto label_80303F1C;
    case 0x80303F20u: goto label_80303F20;
    case 0x80303F24u: goto label_80303F24;
    case 0x80303F28u: goto label_80303F28;
    case 0x80303F2Cu: goto label_80303F2C;
    case 0x80303F30u: goto label_80303F30;
    case 0x80303F34u: goto label_80303F34;
    case 0x80303F38u: goto label_80303F38;
    case 0x80303F3Cu: goto label_80303F3C;
    case 0x80303F40u: goto label_80303F40;
    case 0x80303F44u: goto label_80303F44;
    case 0x80303F48u: goto label_80303F48;
    case 0x80303F4Cu: goto label_80303F4C;
    case 0x80303F50u: goto label_80303F50;
    case 0x80303F54u: goto label_80303F54;
    case 0x80303F58u: goto label_80303F58;
    case 0x80303F5Cu: goto label_80303F5C;
    case 0x80303F60u: goto label_80303F60;
    case 0x80303F64u: goto label_80303F64;
    case 0x80303F68u: goto label_80303F68;
    case 0x80303F6Cu: goto label_80303F6C;
    case 0x80303F70u: goto label_80303F70;
    case 0x80303F74u: goto label_80303F74;
    case 0x80303F78u: goto label_80303F78;
    case 0x80303F7Cu: goto label_80303F7C;
    case 0x80303F80u: goto label_80303F80;
    case 0x80303F84u: goto label_80303F84;
    case 0x80303F88u: goto label_80303F88;
    case 0x80303F8Cu: goto label_80303F8C;
    case 0x80303F90u: goto label_80303F90;
    case 0x80303F94u: goto label_80303F94;
    case 0x80303F98u: goto label_80303F98;
    case 0x80303F9Cu: goto label_80303F9C;
    case 0x80303FA0u: goto label_80303FA0;
    case 0x80303FA4u: goto label_80303FA4;
    case 0x80303FA8u: goto label_80303FA8;
    case 0x80303FACu: goto label_80303FAC;
    case 0x80303FB0u: goto label_80303FB0;
    case 0x80303FB4u: goto label_80303FB4;
    case 0x80303FB8u: goto label_80303FB8;
    case 0x80303FBCu: goto label_80303FBC;
    case 0x80303FC0u: goto label_80303FC0;
    case 0x80303FC4u: goto label_80303FC4;
    case 0x80303FC8u: goto label_80303FC8;
    case 0x80303FCCu: goto label_80303FCC;
    case 0x80303FD0u: goto label_80303FD0;
    case 0x80303FD4u: goto label_80303FD4;
    case 0x80303FD8u: goto label_80303FD8;
    case 0x80303FDCu: goto label_80303FDC;
    case 0x80303FE0u: goto label_80303FE0;
    case 0x80303FE4u: goto label_80303FE4;
    case 0x80303FE8u: goto label_80303FE8;
    case 0x80303FECu: goto label_80303FEC;
    case 0x80303FF0u: goto label_80303FF0;
    case 0x80303FF4u: goto label_80303FF4;
    case 0x80303FF8u: goto label_80303FF8;
    case 0x80303FFCu: goto label_80303FFC;
    case 0x80304000u: goto label_80304000;
    case 0x80304004u: goto label_80304004;
    case 0x80304008u: goto label_80304008;
    case 0x8030400Cu: goto label_8030400C;
    case 0x80304010u: goto label_80304010;
    case 0x80304014u: goto label_80304014;
    case 0x80304018u: goto label_80304018;
    case 0x8030401Cu: goto label_8030401C;
    case 0x80304020u: goto label_80304020;
    case 0x80304024u: goto label_80304024;
    case 0x80304028u: goto label_80304028;
    case 0x8030402Cu: goto label_8030402C;
    case 0x80304030u: goto label_80304030;
    case 0x80304034u: goto label_80304034;
    case 0x80304038u: goto label_80304038;
    case 0x8030403Cu: goto label_8030403C;
    case 0x80304040u: goto label_80304040;
    case 0x80304044u: goto label_80304044;
    case 0x80304048u: goto label_80304048;
    case 0x8030404Cu: goto label_8030404C;
    case 0x80304050u: goto label_80304050;
    case 0x80304054u: goto label_80304054;
    case 0x80304058u: goto label_80304058;
    case 0x8030405Cu: goto label_8030405C;
    case 0x80304060u: goto label_80304060;
    case 0x80304064u: goto label_80304064;
    case 0x80304068u: goto label_80304068;
    case 0x8030406Cu: goto label_8030406C;
    case 0x80304070u: goto label_80304070;
    case 0x80304074u: goto label_80304074;
    case 0x80304078u: goto label_80304078;
    case 0x8030407Cu: goto label_8030407C;
    case 0x80304080u: goto label_80304080;
    case 0x80304084u: goto label_80304084;
    case 0x80304088u: goto label_80304088;
    case 0x8030408Cu: goto label_8030408C;
    case 0x80304090u: goto label_80304090;
    case 0x80304094u: goto label_80304094;
    case 0x80304098u: goto label_80304098;
    case 0x8030409Cu: goto label_8030409C;
    case 0x803040A0u: goto label_803040A0;
    case 0x803040A4u: goto label_803040A4;
    case 0x803040A8u: goto label_803040A8;
    case 0x803040ACu: goto label_803040AC;
    case 0x803040B0u: goto label_803040B0;
    case 0x803040B4u: goto label_803040B4;
    case 0x803040B8u: goto label_803040B8;
    case 0x803040BCu: goto label_803040BC;
    case 0x803040C0u: goto label_803040C0;
    case 0x803040C4u: goto label_803040C4;
    case 0x803040C8u: goto label_803040C8;
    case 0x803040CCu: goto label_803040CC;
    case 0x803040D0u: goto label_803040D0;
    case 0x803040D4u: goto label_803040D4;
    case 0x803040D8u: goto label_803040D8;
    case 0x803040DCu: goto label_803040DC;
    case 0x803040E0u: goto label_803040E0;
    case 0x803040E4u: goto label_803040E4;
    case 0x803040E8u: goto label_803040E8;
    case 0x803040ECu: goto label_803040EC;
    case 0x803040F0u: goto label_803040F0;
    case 0x803040F4u: goto label_803040F4;
    case 0x803040F8u: goto label_803040F8;
    case 0x803040FCu: goto label_803040FC;
    case 0x80304100u: goto label_80304100;
    case 0x80304104u: goto label_80304104;
    case 0x80304108u: goto label_80304108;
    case 0x8030410Cu: goto label_8030410C;
    case 0x80304110u: goto label_80304110;
    case 0x80304114u: goto label_80304114;
    case 0x80304118u: goto label_80304118;
    case 0x8030411Cu: goto label_8030411C;
    case 0x80304120u: goto label_80304120;
    case 0x80304124u: goto label_80304124;
    case 0x80304128u: goto label_80304128;
    case 0x8030412Cu: goto label_8030412C;
    case 0x80304130u: goto label_80304130;
    case 0x80304134u: goto label_80304134;
    case 0x80304138u: goto label_80304138;
    case 0x8030413Cu: goto label_8030413C;
    case 0x80304140u: goto label_80304140;
    case 0x80304144u: goto label_80304144;
    case 0x80304148u: goto label_80304148;
    case 0x8030414Cu: goto label_8030414C;
    case 0x80304150u: goto label_80304150;
    case 0x80304154u: goto label_80304154;
    case 0x80304158u: goto label_80304158;
    case 0x8030415Cu: goto label_8030415C;
    case 0x80304160u: goto label_80304160;
    case 0x80304164u: goto label_80304164;
    case 0x80304168u: goto label_80304168;
    case 0x8030416Cu: goto label_8030416C;
    case 0x80304170u: goto label_80304170;
    case 0x80304174u: goto label_80304174;
    case 0x80304178u: goto label_80304178;
    case 0x8030417Cu: goto label_8030417C;
    case 0x80304180u: goto label_80304180;
    case 0x80304184u: goto label_80304184;
    case 0x80304188u: goto label_80304188;
    case 0x8030418Cu: goto label_8030418C;
    case 0x80304190u: goto label_80304190;
    case 0x80304194u: goto label_80304194;
    case 0x80304198u: goto label_80304198;
    case 0x8030419Cu: goto label_8030419C;
    case 0x803041A0u: goto label_803041A0;
    case 0x803041A4u: goto label_803041A4;
    case 0x803041A8u: goto label_803041A8;
    case 0x803041ACu: goto label_803041AC;
    case 0x803041B0u: goto label_803041B0;
    case 0x803041B4u: goto label_803041B4;
    case 0x803041B8u: goto label_803041B8;
    case 0x803041BCu: goto label_803041BC;
    case 0x803041C0u: goto label_803041C0;
    case 0x803041C4u: goto label_803041C4;
    case 0x803041C8u: goto label_803041C8;
    case 0x803041CCu: goto label_803041CC;
    case 0x803041D0u: goto label_803041D0;
    case 0x803041D4u: goto label_803041D4;
    case 0x803041D8u: goto label_803041D8;
    case 0x803041DCu: goto label_803041DC;
    case 0x803041E0u: goto label_803041E0;
    case 0x803041E4u: goto label_803041E4;
    case 0x803041E8u: goto label_803041E8;
    case 0x803041ECu: goto label_803041EC;
    case 0x803041F0u: goto label_803041F0;
    case 0x803041F4u: goto label_803041F4;
    case 0x803041F8u: goto label_803041F8;
    case 0x803041FCu: goto label_803041FC;
    case 0x80304200u: goto label_80304200;
    case 0x80304204u: goto label_80304204;
    case 0x80304208u: goto label_80304208;
    case 0x8030420Cu: goto label_8030420C;
    case 0x80304210u: goto label_80304210;
    case 0x80304214u: goto label_80304214;
    case 0x80304218u: goto label_80304218;
    case 0x8030421Cu: goto label_8030421C;
    case 0x80304220u: goto label_80304220;
    case 0x80304224u: goto label_80304224;
    case 0x80304228u: goto label_80304228;
    case 0x8030422Cu: goto label_8030422C;
    case 0x80304230u: goto label_80304230;
    case 0x80304234u: goto label_80304234;
    case 0x80304238u: goto label_80304238;
    case 0x8030423Cu: goto label_8030423C;
    case 0x80304240u: goto label_80304240;
    case 0x80304244u: goto label_80304244;
    case 0x80304248u: goto label_80304248;
    case 0x8030424Cu: goto label_8030424C;
    case 0x80304250u: goto label_80304250;
    case 0x80304254u: goto label_80304254;
    case 0x80304258u: goto label_80304258;
    case 0x8030425Cu: goto label_8030425C;
    case 0x80304260u: goto label_80304260;
    case 0x80304264u: goto label_80304264;
    case 0x80304268u: goto label_80304268;
    case 0x8030426Cu: goto label_8030426C;
    case 0x80304270u: goto label_80304270;
    case 0x80304274u: goto label_80304274;
    case 0x80304278u: goto label_80304278;
    case 0x8030427Cu: goto label_8030427C;
    case 0x80304280u: goto label_80304280;
    case 0x80304284u: goto label_80304284;
    case 0x80304288u: goto label_80304288;
    case 0x8030428Cu: goto label_8030428C;
    case 0x80304290u: goto label_80304290;
    case 0x80304294u: goto label_80304294;
    case 0x80304298u: goto label_80304298;
    case 0x8030429Cu: goto label_8030429C;
    case 0x803042A0u: goto label_803042A0;
    case 0x803042A4u: goto label_803042A4;
    case 0x803042A8u: goto label_803042A8;
    case 0x803042ACu: goto label_803042AC;
    case 0x803042B0u: goto label_803042B0;
    case 0x803042B4u: goto label_803042B4;
    case 0x803042B8u: goto label_803042B8;
    case 0x803042BCu: goto label_803042BC;
    case 0x803042C0u: goto label_803042C0;
    case 0x803042C4u: goto label_803042C4;
    case 0x803042C8u: goto label_803042C8;
    case 0x803042CCu: goto label_803042CC;
    case 0x803042D0u: goto label_803042D0;
    case 0x803042D4u: goto label_803042D4;
    case 0x803042D8u: goto label_803042D8;
    case 0x803042DCu: goto label_803042DC;
    case 0x803042E0u: goto label_803042E0;
    case 0x803042E4u: goto label_803042E4;
    case 0x803042E8u: goto label_803042E8;
    case 0x803042ECu: goto label_803042EC;
    case 0x803042F0u: goto label_803042F0;
    case 0x803042F4u: goto label_803042F4;
    case 0x803042F8u: goto label_803042F8;
    case 0x803042FCu: goto label_803042FC;
    case 0x80304300u: goto label_80304300;
    case 0x80304304u: goto label_80304304;
    case 0x80304308u: goto label_80304308;
    case 0x8030430Cu: goto label_8030430C;
    case 0x80304310u: goto label_80304310;
    case 0x80304314u: goto label_80304314;
    case 0x80304318u: goto label_80304318;
    case 0x8030431Cu: goto label_8030431C;
    case 0x80304320u: goto label_80304320;
    case 0x80304324u: goto label_80304324;
    case 0x80304328u: goto label_80304328;
    case 0x8030432Cu: goto label_8030432C;
    case 0x80304330u: goto label_80304330;
    case 0x80304334u: goto label_80304334;
    case 0x80304338u: goto label_80304338;
    case 0x8030433Cu: goto label_8030433C;
    case 0x80304340u: goto label_80304340;
    case 0x80304344u: goto label_80304344;
    case 0x80304348u: goto label_80304348;
    case 0x8030434Cu: goto label_8030434C;
    case 0x80304350u: goto label_80304350;
    case 0x80304354u: goto label_80304354;
    case 0x80304358u: goto label_80304358;
    case 0x8030435Cu: goto label_8030435C;
    case 0x80304360u: goto label_80304360;
    case 0x80304364u: goto label_80304364;
    case 0x80304368u: goto label_80304368;
    case 0x8030436Cu: goto label_8030436C;
    case 0x80304370u: goto label_80304370;
    case 0x80304374u: goto label_80304374;
    case 0x80304378u: goto label_80304378;
    case 0x8030437Cu: goto label_8030437C;
    case 0x80304380u: goto label_80304380;
    case 0x80304384u: goto label_80304384;
    case 0x80304388u: goto label_80304388;
    case 0x8030438Cu: goto label_8030438C;
    case 0x80304390u: goto label_80304390;
    case 0x80304394u: goto label_80304394;
    case 0x80304398u: goto label_80304398;
    case 0x8030439Cu: goto label_8030439C;
    case 0x803043A0u: goto label_803043A0;
    case 0x803043A4u: goto label_803043A4;
    case 0x803043A8u: goto label_803043A8;
    case 0x803043ACu: goto label_803043AC;
    case 0x803043B0u: goto label_803043B0;
    case 0x803043B4u: goto label_803043B4;
    case 0x803043B8u: goto label_803043B8;
    case 0x803043BCu: goto label_803043BC;
    case 0x803043C0u: goto label_803043C0;
    case 0x803043C4u: goto label_803043C4;
    case 0x803043C8u: goto label_803043C8;
    case 0x803043CCu: goto label_803043CC;
    case 0x803043D0u: goto label_803043D0;
    case 0x803043D4u: goto label_803043D4;
    case 0x803043D8u: goto label_803043D8;
    case 0x803043DCu: goto label_803043DC;
    case 0x803043E0u: goto label_803043E0;
    case 0x803043E4u: goto label_803043E4;
    case 0x803043E8u: goto label_803043E8;
    case 0x803043ECu: goto label_803043EC;
    case 0x803043F0u: goto label_803043F0;
    case 0x803043F4u: goto label_803043F4;
    case 0x803043F8u: goto label_803043F8;
    case 0x803043FCu: goto label_803043FC;
    case 0x80304400u: goto label_80304400;
    case 0x80304404u: goto label_80304404;
    case 0x80304408u: goto label_80304408;
    case 0x8030440Cu: goto label_8030440C;
    case 0x80304410u: goto label_80304410;
    case 0x80304414u: goto label_80304414;
    case 0x80304418u: goto label_80304418;
    case 0x8030441Cu: goto label_8030441C;
    case 0x80304420u: goto label_80304420;
    case 0x80304424u: goto label_80304424;
    case 0x80304428u: goto label_80304428;
    case 0x8030442Cu: goto label_8030442C;
    case 0x80304430u: goto label_80304430;
    case 0x80304434u: goto label_80304434;
    case 0x80304438u: goto label_80304438;
    case 0x8030443Cu: goto label_8030443C;
    case 0x80304440u: goto label_80304440;
    case 0x80304444u: goto label_80304444;
    case 0x80304448u: goto label_80304448;
    case 0x8030444Cu: goto label_8030444C;
    case 0x80304450u: goto label_80304450;
    case 0x80304454u: goto label_80304454;
    case 0x80304458u: goto label_80304458;
    case 0x8030445Cu: goto label_8030445C;
    case 0x80304460u: goto label_80304460;
    case 0x80304464u: goto label_80304464;
    case 0x80304468u: goto label_80304468;
    case 0x8030446Cu: goto label_8030446C;
    case 0x80304470u: goto label_80304470;
    case 0x80304474u: goto label_80304474;
    case 0x80304478u: goto label_80304478;
    case 0x8030447Cu: goto label_8030447C;
    case 0x80304480u: goto label_80304480;
    case 0x80304484u: goto label_80304484;
    case 0x80304488u: goto label_80304488;
    case 0x8030448Cu: goto label_8030448C;
    case 0x80304490u: goto label_80304490;
    case 0x80304494u: goto label_80304494;
    case 0x80304498u: goto label_80304498;
    case 0x8030449Cu: goto label_8030449C;
    case 0x803044A0u: goto label_803044A0;
    case 0x803044A4u: goto label_803044A4;
    case 0x803044A8u: goto label_803044A8;
    case 0x803044ACu: goto label_803044AC;
    case 0x803044B0u: goto label_803044B0;
    case 0x803044B4u: goto label_803044B4;
    case 0x803044B8u: goto label_803044B8;
    case 0x803044BCu: goto label_803044BC;
    case 0x803044C0u: goto label_803044C0;
    case 0x803044C4u: goto label_803044C4;
    case 0x803044C8u: goto label_803044C8;
    case 0x803044CCu: goto label_803044CC;
    case 0x803044D0u: goto label_803044D0;
    case 0x803044D4u: goto label_803044D4;
    case 0x803044D8u: goto label_803044D8;
    case 0x803044DCu: goto label_803044DC;
    case 0x803044E0u: goto label_803044E0;
    case 0x803044E4u: goto label_803044E4;
    case 0x803044E8u: goto label_803044E8;
    case 0x803044ECu: goto label_803044EC;
    case 0x803044F0u: goto label_803044F0;
    case 0x803044F4u: goto label_803044F4;
    case 0x803044F8u: goto label_803044F8;
    case 0x803044FCu: goto label_803044FC;
    case 0x80304500u: goto label_80304500;
    case 0x80304504u: goto label_80304504;
    case 0x80304508u: goto label_80304508;
    case 0x8030450Cu: goto label_8030450C;
    case 0x80304510u: goto label_80304510;
    case 0x80304514u: goto label_80304514;
    case 0x80304518u: goto label_80304518;
    case 0x8030451Cu: goto label_8030451C;
    case 0x80304520u: goto label_80304520;
    case 0x80304524u: goto label_80304524;
    case 0x80304528u: goto label_80304528;
    case 0x8030452Cu: goto label_8030452C;
    case 0x80304530u: goto label_80304530;
    case 0x80304534u: goto label_80304534;
    case 0x80304538u: goto label_80304538;
    case 0x8030453Cu: goto label_8030453C;
    case 0x80304540u: goto label_80304540;
    case 0x80304544u: goto label_80304544;
    case 0x80304548u: goto label_80304548;
    case 0x8030454Cu: goto label_8030454C;
    case 0x80304550u: goto label_80304550;
    case 0x80304554u: goto label_80304554;
    case 0x80304558u: goto label_80304558;
    case 0x8030455Cu: goto label_8030455C;
    case 0x80304560u: goto label_80304560;
    case 0x80304564u: goto label_80304564;
    case 0x80304568u: goto label_80304568;
    case 0x8030456Cu: goto label_8030456C;
    case 0x80304570u: goto label_80304570;
    case 0x80304574u: goto label_80304574;
    case 0x80304578u: goto label_80304578;
    case 0x8030457Cu: goto label_8030457C;
    case 0x80304580u: goto label_80304580;
    case 0x80304584u: goto label_80304584;
    case 0x80304588u: goto label_80304588;
    case 0x8030458Cu: goto label_8030458C;
    case 0x80304590u: goto label_80304590;
    case 0x80304594u: goto label_80304594;
    case 0x80304598u: goto label_80304598;
    case 0x8030459Cu: goto label_8030459C;
    case 0x803045A0u: goto label_803045A0;
    case 0x803045A4u: goto label_803045A4;
    case 0x803045A8u: goto label_803045A8;
    case 0x803045ACu: goto label_803045AC;
    case 0x803045B0u: goto label_803045B0;
    case 0x803045B4u: goto label_803045B4;
    case 0x803045B8u: goto label_803045B8;
    case 0x803045BCu: goto label_803045BC;
    case 0x803045C0u: goto label_803045C0;
    case 0x803045C4u: goto label_803045C4;
    case 0x803045C8u: goto label_803045C8;
    case 0x803045CCu: goto label_803045CC;
    case 0x803045D0u: goto label_803045D0;
    case 0x803045D4u: goto label_803045D4;
    case 0x803045D8u: goto label_803045D8;
    case 0x803045DCu: goto label_803045DC;
    case 0x803045E0u: goto label_803045E0;
    case 0x803045E4u: goto label_803045E4;
    case 0x803045E8u: goto label_803045E8;
    case 0x803045ECu: goto label_803045EC;
    case 0x803045F0u: goto label_803045F0;
    case 0x803045F4u: goto label_803045F4;
    case 0x803045F8u: goto label_803045F8;
    case 0x803045FCu: goto label_803045FC;
    case 0x80304600u: goto label_80304600;
    case 0x80304604u: goto label_80304604;
    case 0x80304608u: goto label_80304608;
    case 0x8030460Cu: goto label_8030460C;
    case 0x80304610u: goto label_80304610;
    case 0x80304614u: goto label_80304614;
    case 0x80304618u: goto label_80304618;
    case 0x8030461Cu: goto label_8030461C;
    case 0x80304620u: goto label_80304620;
    case 0x80304624u: goto label_80304624;
    case 0x80304628u: goto label_80304628;
    case 0x8030462Cu: goto label_8030462C;
    case 0x80304630u: goto label_80304630;
    case 0x80304634u: goto label_80304634;
    case 0x80304638u: goto label_80304638;
    case 0x8030463Cu: goto label_8030463C;
    case 0x80304640u: goto label_80304640;
    case 0x80304644u: goto label_80304644;
    case 0x80304648u: goto label_80304648;
    case 0x8030464Cu: goto label_8030464C;
    case 0x80304650u: goto label_80304650;
    case 0x80304654u: goto label_80304654;
    case 0x80304658u: goto label_80304658;
    case 0x8030465Cu: goto label_8030465C;
    case 0x80304660u: goto label_80304660;
    case 0x80304664u: goto label_80304664;
    case 0x80304668u: goto label_80304668;
    case 0x8030466Cu: goto label_8030466C;
    case 0x80304670u: goto label_80304670;
    case 0x80304674u: goto label_80304674;
    case 0x80304678u: goto label_80304678;
    case 0x8030467Cu: goto label_8030467C;
    case 0x80304680u: goto label_80304680;
    case 0x80304684u: goto label_80304684;
    case 0x80304688u: goto label_80304688;
    case 0x8030468Cu: goto label_8030468C;
    case 0x80304690u: goto label_80304690;
    case 0x80304694u: goto label_80304694;
    case 0x80304698u: goto label_80304698;
    case 0x8030469Cu: goto label_8030469C;
    case 0x803046A0u: goto label_803046A0;
    case 0x803046A4u: goto label_803046A4;
    case 0x803046A8u: goto label_803046A8;
    case 0x803046ACu: goto label_803046AC;
    case 0x803046B0u: goto label_803046B0;
    case 0x803046B4u: goto label_803046B4;
    case 0x803046B8u: goto label_803046B8;
    case 0x803046BCu: goto label_803046BC;
    case 0x803046C0u: goto label_803046C0;
    case 0x803046C4u: goto label_803046C4;
    case 0x803046C8u: goto label_803046C8;
    case 0x803046CCu: goto label_803046CC;
    case 0x803046D0u: goto label_803046D0;
    case 0x803046D4u: goto label_803046D4;
    case 0x803046D8u: goto label_803046D8;
    case 0x803046DCu: goto label_803046DC;
    case 0x803046E0u: goto label_803046E0;
    case 0x803046E4u: goto label_803046E4;
    case 0x803046E8u: goto label_803046E8;
    case 0x803046ECu: goto label_803046EC;
    case 0x803046F0u: goto label_803046F0;
    case 0x803046F4u: goto label_803046F4;
    case 0x803046F8u: goto label_803046F8;
    case 0x803046FCu: goto label_803046FC;
    case 0x80304700u: goto label_80304700;
    case 0x80304704u: goto label_80304704;
    case 0x80304708u: goto label_80304708;
    case 0x8030470Cu: goto label_8030470C;
    case 0x80304710u: goto label_80304710;
    case 0x80304714u: goto label_80304714;
    case 0x80304718u: goto label_80304718;
    case 0x8030471Cu: goto label_8030471C;
    case 0x80304720u: goto label_80304720;
    case 0x80304724u: goto label_80304724;
    case 0x80304728u: goto label_80304728;
    case 0x8030472Cu: goto label_8030472C;
    case 0x80304730u: goto label_80304730;
    case 0x80304734u: goto label_80304734;
    case 0x80304738u: goto label_80304738;
    case 0x8030473Cu: goto label_8030473C;
    case 0x80304740u: goto label_80304740;
    case 0x80304744u: goto label_80304744;
    case 0x80304748u: goto label_80304748;
    case 0x8030474Cu: goto label_8030474C;
    case 0x80304750u: goto label_80304750;
    case 0x80304754u: goto label_80304754;
    case 0x80304758u: goto label_80304758;
    case 0x8030475Cu: goto label_8030475C;
    case 0x80304760u: goto label_80304760;
    case 0x80304764u: goto label_80304764;
    case 0x80304768u: goto label_80304768;
    case 0x8030476Cu: goto label_8030476C;
    case 0x80304770u: goto label_80304770;
    case 0x80304774u: goto label_80304774;
    case 0x80304778u: goto label_80304778;
    case 0x8030477Cu: goto label_8030477C;
    case 0x80304780u: goto label_80304780;
    case 0x80304784u: goto label_80304784;
    case 0x80304788u: goto label_80304788;
    case 0x8030478Cu: goto label_8030478C;
    case 0x80304790u: goto label_80304790;
    case 0x80304794u: goto label_80304794;
    case 0x80304798u: goto label_80304798;
    case 0x8030479Cu: goto label_8030479C;
    case 0x803047A0u: goto label_803047A0;
    case 0x803047A4u: goto label_803047A4;
    case 0x803047A8u: goto label_803047A8;
    case 0x803047ACu: goto label_803047AC;
    case 0x803047B0u: goto label_803047B0;
    case 0x803047B4u: goto label_803047B4;
    case 0x803047B8u: goto label_803047B8;
    case 0x803047BCu: goto label_803047BC;
    case 0x803047C0u: goto label_803047C0;
    case 0x803047C4u: goto label_803047C4;
    case 0x803047C8u: goto label_803047C8;
    case 0x803047CCu: goto label_803047CC;
    case 0x803047D0u: goto label_803047D0;
    case 0x803047D4u: goto label_803047D4;
    case 0x803047D8u: goto label_803047D8;
    case 0x803047DCu: goto label_803047DC;
    case 0x803047E0u: goto label_803047E0;
    case 0x803047E4u: goto label_803047E4;
    case 0x803047E8u: goto label_803047E8;
    case 0x803047ECu: goto label_803047EC;
    case 0x803047F0u: goto label_803047F0;
    case 0x803047F4u: goto label_803047F4;
    case 0x803047F8u: goto label_803047F8;
    case 0x803047FCu: goto label_803047FC;
    case 0x80304800u: goto label_80304800;
    case 0x80304804u: goto label_80304804;
    case 0x80304808u: goto label_80304808;
    case 0x8030480Cu: goto label_8030480C;
    case 0x80304810u: goto label_80304810;
    case 0x80304814u: goto label_80304814;
    case 0x80304818u: goto label_80304818;
    case 0x8030481Cu: goto label_8030481C;
    case 0x80304820u: goto label_80304820;
    case 0x80304824u: goto label_80304824;
    case 0x80304828u: goto label_80304828;
    case 0x8030482Cu: goto label_8030482C;
    case 0x80304830u: goto label_80304830;
    case 0x80304834u: goto label_80304834;
    case 0x80304838u: goto label_80304838;
    case 0x8030483Cu: goto label_8030483C;
    case 0x80304840u: goto label_80304840;
    case 0x80304844u: goto label_80304844;
    case 0x80304848u: goto label_80304848;
    case 0x8030484Cu: goto label_8030484C;
    case 0x80304850u: goto label_80304850;
    case 0x80304854u: goto label_80304854;
    case 0x80304858u: goto label_80304858;
    case 0x8030485Cu: goto label_8030485C;
    case 0x80304860u: goto label_80304860;
    case 0x80304864u: goto label_80304864;
    case 0x80304868u: goto label_80304868;
    case 0x8030486Cu: goto label_8030486C;
    case 0x80304870u: goto label_80304870;
    case 0x80304874u: goto label_80304874;
    case 0x80304878u: goto label_80304878;
    case 0x8030487Cu: goto label_8030487C;
    case 0x80304880u: goto label_80304880;
    case 0x80304884u: goto label_80304884;
    case 0x80304888u: goto label_80304888;
    case 0x8030488Cu: goto label_8030488C;
    case 0x80304890u: goto label_80304890;
    case 0x80304894u: goto label_80304894;
    case 0x80304898u: goto label_80304898;
    case 0x8030489Cu: goto label_8030489C;
    case 0x803048A0u: goto label_803048A0;
    case 0x803048A4u: goto label_803048A4;
    case 0x803048A8u: goto label_803048A8;
    case 0x803048ACu: goto label_803048AC;
    case 0x803048B0u: goto label_803048B0;
    case 0x803048B4u: goto label_803048B4;
    case 0x803048B8u: goto label_803048B8;
    case 0x803048BCu: goto label_803048BC;
    case 0x803048C0u: goto label_803048C0;
    case 0x803048C4u: goto label_803048C4;
    case 0x803048C8u: goto label_803048C8;
    case 0x803048CCu: goto label_803048CC;
    case 0x803048D0u: goto label_803048D0;
    case 0x803048D4u: goto label_803048D4;
    case 0x803048D8u: goto label_803048D8;
    case 0x803048DCu: goto label_803048DC;
    case 0x803048E0u: goto label_803048E0;
    case 0x803048E4u: goto label_803048E4;
    case 0x803048E8u: goto label_803048E8;
    case 0x803048ECu: goto label_803048EC;
    case 0x803048F0u: goto label_803048F0;
    case 0x803048F4u: goto label_803048F4;
    case 0x803048F8u: goto label_803048F8;
    case 0x803048FCu: goto label_803048FC;
    case 0x80304900u: goto label_80304900;
    case 0x80304904u: goto label_80304904;
    case 0x80304908u: goto label_80304908;
    case 0x8030490Cu: goto label_8030490C;
    case 0x80304910u: goto label_80304910;
    case 0x80304914u: goto label_80304914;
    case 0x80304918u: goto label_80304918;
    case 0x8030491Cu: goto label_8030491C;
    case 0x80304920u: goto label_80304920;
    case 0x80304924u: goto label_80304924;
    case 0x80304928u: goto label_80304928;
    case 0x8030492Cu: goto label_8030492C;
    case 0x80304930u: goto label_80304930;
    case 0x80304934u: goto label_80304934;
    case 0x80304938u: goto label_80304938;
    case 0x8030493Cu: goto label_8030493C;
    case 0x80304940u: goto label_80304940;
    case 0x80304944u: goto label_80304944;
    case 0x80304948u: goto label_80304948;
    case 0x8030494Cu: goto label_8030494C;
    case 0x80304950u: goto label_80304950;
    case 0x80304954u: goto label_80304954;
    case 0x80304958u: goto label_80304958;
    case 0x8030495Cu: goto label_8030495C;
    case 0x80304960u: goto label_80304960;
    case 0x80304964u: goto label_80304964;
    case 0x80304968u: goto label_80304968;
    case 0x8030496Cu: goto label_8030496C;
    case 0x80304970u: goto label_80304970;
    case 0x80304974u: goto label_80304974;
    case 0x80304978u: goto label_80304978;
    case 0x8030497Cu: goto label_8030497C;
    case 0x80304980u: goto label_80304980;
    case 0x80304984u: goto label_80304984;
    case 0x80304988u: goto label_80304988;
    case 0x8030498Cu: goto label_8030498C;
    case 0x80304990u: goto label_80304990;
    case 0x80304994u: goto label_80304994;
    case 0x80304998u: goto label_80304998;
    case 0x8030499Cu: goto label_8030499C;
    case 0x803049A0u: goto label_803049A0;
    case 0x803049A4u: goto label_803049A4;
    case 0x803049A8u: goto label_803049A8;
    case 0x803049ACu: goto label_803049AC;
    case 0x803049B0u: goto label_803049B0;
    case 0x803049B4u: goto label_803049B4;
    case 0x803049B8u: goto label_803049B8;
    case 0x803049BCu: goto label_803049BC;
    case 0x803049C0u: goto label_803049C0;
    case 0x803049C4u: goto label_803049C4;
    case 0x803049C8u: goto label_803049C8;
    case 0x803049CCu: goto label_803049CC;
    case 0x803049D0u: goto label_803049D0;
    case 0x803049D4u: goto label_803049D4;
    case 0x803049D8u: goto label_803049D8;
    case 0x803049DCu: goto label_803049DC;
    case 0x803049E0u: goto label_803049E0;
    case 0x803049E4u: goto label_803049E4;
    case 0x803049E8u: goto label_803049E8;
    case 0x803049ECu: goto label_803049EC;
    case 0x803049F0u: goto label_803049F0;
    case 0x803049F4u: goto label_803049F4;
    case 0x803049F8u: goto label_803049F8;
    case 0x803049FCu: goto label_803049FC;
    case 0x80304A00u: goto label_80304A00;
    case 0x80304A04u: goto label_80304A04;
    case 0x80304A08u: goto label_80304A08;
    case 0x80304A0Cu: goto label_80304A0C;
    case 0x80304A10u: goto label_80304A10;
    case 0x80304A14u: goto label_80304A14;
    case 0x80304A18u: goto label_80304A18;
    case 0x80304A1Cu: goto label_80304A1C;
    case 0x80304A20u: goto label_80304A20;
    case 0x80304A24u: goto label_80304A24;
    case 0x80304A28u: goto label_80304A28;
    case 0x80304A2Cu: goto label_80304A2C;
    case 0x80304A30u: goto label_80304A30;
    case 0x80304A34u: goto label_80304A34;
    case 0x80304A38u: goto label_80304A38;
    case 0x80304A3Cu: goto label_80304A3C;
    case 0x80304A40u: goto label_80304A40;
    case 0x80304A44u: goto label_80304A44;
    case 0x80304A48u: goto label_80304A48;
    case 0x80304A4Cu: goto label_80304A4C;
    case 0x80304A50u: goto label_80304A50;
    case 0x80304A54u: goto label_80304A54;
    case 0x80304A58u: goto label_80304A58;
    case 0x80304A5Cu: goto label_80304A5C;
    case 0x80304A60u: goto label_80304A60;
    case 0x80304A64u: goto label_80304A64;
    case 0x80304A68u: goto label_80304A68;
    case 0x80304A6Cu: goto label_80304A6C;
    case 0x80304A70u: goto label_80304A70;
    case 0x80304A74u: goto label_80304A74;
    case 0x80304A78u: goto label_80304A78;
    case 0x80304A7Cu: goto label_80304A7C;
    case 0x80304A80u: goto label_80304A80;
    case 0x80304A84u: goto label_80304A84;
    case 0x80304A88u: goto label_80304A88;
    case 0x80304A8Cu: goto label_80304A8C;
    case 0x80304A90u: goto label_80304A90;
    case 0x80304A94u: goto label_80304A94;
    case 0x80304A98u: goto label_80304A98;
    case 0x80304A9Cu: goto label_80304A9C;
    case 0x80304AA0u: goto label_80304AA0;
    case 0x80304AA4u: goto label_80304AA4;
    case 0x80304AA8u: goto label_80304AA8;
    case 0x80304AACu: goto label_80304AAC;
    case 0x80304AB0u: goto label_80304AB0;
    case 0x80304AB4u: goto label_80304AB4;
    case 0x80304AB8u: goto label_80304AB8;
    case 0x80304ABCu: goto label_80304ABC;
    case 0x80304AC0u: goto label_80304AC0;
    case 0x80304AC4u: goto label_80304AC4;
    case 0x80304AC8u: goto label_80304AC8;
    case 0x80304ACCu: goto label_80304ACC;
    case 0x80304AD0u: goto label_80304AD0;
    case 0x80304AD4u: goto label_80304AD4;
    case 0x80304AD8u: goto label_80304AD8;
    case 0x80304ADCu: goto label_80304ADC;
    case 0x80304AE0u: goto label_80304AE0;
    case 0x80304AE4u: goto label_80304AE4;
    case 0x80304AE8u: goto label_80304AE8;
    case 0x80304AECu: goto label_80304AEC;
    case 0x80304AF0u: goto label_80304AF0;
    case 0x80304AF4u: goto label_80304AF4;
    case 0x80304AF8u: goto label_80304AF8;
    case 0x80304AFCu: goto label_80304AFC;
    case 0x80304B00u: goto label_80304B00;
    case 0x80304B04u: goto label_80304B04;
    case 0x80304B08u: goto label_80304B08;
    case 0x80304B0Cu: goto label_80304B0C;
    case 0x80304B10u: goto label_80304B10;
    case 0x80304B14u: goto label_80304B14;
    case 0x80304B18u: goto label_80304B18;
    case 0x80304B1Cu: goto label_80304B1C;
    case 0x80304B20u: goto label_80304B20;
    case 0x80304B24u: goto label_80304B24;
    case 0x80304B28u: goto label_80304B28;
    case 0x80304B2Cu: goto label_80304B2C;
    case 0x80304B30u: goto label_80304B30;
    case 0x80304B34u: goto label_80304B34;
    case 0x80304B38u: goto label_80304B38;
    case 0x80304B3Cu: goto label_80304B3C;
    case 0x80304B40u: goto label_80304B40;
    case 0x80304B44u: goto label_80304B44;
    case 0x80304B48u: goto label_80304B48;
    case 0x80304B4Cu: goto label_80304B4C;
    case 0x80304B50u: goto label_80304B50;
    case 0x80304B54u: goto label_80304B54;
    case 0x80304B58u: goto label_80304B58;
    case 0x80304B5Cu: goto label_80304B5C;
    case 0x80304B60u: goto label_80304B60;
    case 0x80304B64u: goto label_80304B64;
    case 0x80304B68u: goto label_80304B68;
    case 0x80304B6Cu: goto label_80304B6C;
    case 0x80304B70u: goto label_80304B70;
    case 0x80304B74u: goto label_80304B74;
    case 0x80304B78u: goto label_80304B78;
    case 0x80304B7Cu: goto label_80304B7C;
    case 0x80304B80u: goto label_80304B80;
    case 0x80304B84u: goto label_80304B84;
    case 0x80304B88u: goto label_80304B88;
    case 0x80304B8Cu: goto label_80304B8C;
    case 0x80304B90u: goto label_80304B90;
    case 0x80304B94u: goto label_80304B94;
    case 0x80304B98u: goto label_80304B98;
    case 0x80304B9Cu: goto label_80304B9C;
    case 0x80304BA0u: goto label_80304BA0;
    case 0x80304BA4u: goto label_80304BA4;
    case 0x80304BA8u: goto label_80304BA8;
    case 0x80304BACu: goto label_80304BAC;
    case 0x80304BB0u: goto label_80304BB0;
    case 0x80304BB4u: goto label_80304BB4;
    case 0x80304BB8u: goto label_80304BB8;
    case 0x80304BBCu: goto label_80304BBC;
    case 0x80304BC0u: goto label_80304BC0;
    case 0x80304BC4u: goto label_80304BC4;
    case 0x80304BC8u: goto label_80304BC8;
    case 0x80304BCCu: goto label_80304BCC;
    case 0x80304BD0u: goto label_80304BD0;
    case 0x80304BD4u: goto label_80304BD4;
    case 0x80304BD8u: goto label_80304BD8;
    case 0x80304BDCu: goto label_80304BDC;
    case 0x80304BE0u: goto label_80304BE0;
    case 0x80304BE4u: goto label_80304BE4;
    case 0x80304BE8u: goto label_80304BE8;
    case 0x80304BECu: goto label_80304BEC;
    case 0x80304BF0u: goto label_80304BF0;
    case 0x80304BF4u: goto label_80304BF4;
    case 0x80304BF8u: goto label_80304BF8;
    case 0x80304BFCu: goto label_80304BFC;
    case 0x80304C00u: goto label_80304C00;
    case 0x80304C04u: goto label_80304C04;
    case 0x80304C08u: goto label_80304C08;
    case 0x80304C0Cu: goto label_80304C0C;
    case 0x80304C10u: goto label_80304C10;
    case 0x80304C14u: goto label_80304C14;
    case 0x80304C18u: goto label_80304C18;
    case 0x80304C1Cu: goto label_80304C1C;
    case 0x80304C20u: goto label_80304C20;
    case 0x80304C24u: goto label_80304C24;
    case 0x80304C28u: goto label_80304C28;
    case 0x80304C2Cu: goto label_80304C2C;
    case 0x80304C30u: goto label_80304C30;
    case 0x80304C34u: goto label_80304C34;
    case 0x80304C38u: goto label_80304C38;
    case 0x80304C3Cu: goto label_80304C3C;
    case 0x80304C40u: goto label_80304C40;
    case 0x80304C44u: goto label_80304C44;
    case 0x80304C48u: goto label_80304C48;
    case 0x80304C4Cu: goto label_80304C4C;
    case 0x80304C50u: goto label_80304C50;
    case 0x80304C54u: goto label_80304C54;
    case 0x80304C58u: goto label_80304C58;
    case 0x80304C5Cu: goto label_80304C5C;
    case 0x80304C60u: goto label_80304C60;
    case 0x80304C64u: goto label_80304C64;
    case 0x80304C68u: goto label_80304C68;
    case 0x80304C6Cu: goto label_80304C6C;
    case 0x80304C70u: goto label_80304C70;
    case 0x80304C74u: goto label_80304C74;
    case 0x80304C78u: goto label_80304C78;
    case 0x80304C7Cu: goto label_80304C7C;
    case 0x80304C80u: goto label_80304C80;
    case 0x80304C84u: goto label_80304C84;
    case 0x80304C88u: goto label_80304C88;
    case 0x80304C8Cu: goto label_80304C8C;
    case 0x80304C90u: goto label_80304C90;
    case 0x80304C94u: goto label_80304C94;
    case 0x80304C98u: goto label_80304C98;
    case 0x80304C9Cu: goto label_80304C9C;
    case 0x80304CA0u: goto label_80304CA0;
    case 0x80304CA4u: goto label_80304CA4;
    case 0x80304CA8u: goto label_80304CA8;
    case 0x80304CACu: goto label_80304CAC;
    case 0x80304CB0u: goto label_80304CB0;
    case 0x80304CB4u: goto label_80304CB4;
    case 0x80304CB8u: goto label_80304CB8;
    case 0x80304CBCu: goto label_80304CBC;
    case 0x80304CC0u: goto label_80304CC0;
    case 0x80304CC4u: goto label_80304CC4;
    case 0x80304CC8u: goto label_80304CC8;
    case 0x80304CCCu: goto label_80304CCC;
    case 0x80304CD0u: goto label_80304CD0;
    case 0x80304CD4u: goto label_80304CD4;
    case 0x80304CD8u: goto label_80304CD8;
    case 0x80304CDCu: goto label_80304CDC;
    case 0x80304CE0u: goto label_80304CE0;
    case 0x80304CE4u: goto label_80304CE4;
    case 0x80304CE8u: goto label_80304CE8;
    case 0x80304CECu: goto label_80304CEC;
    case 0x80304CF0u: goto label_80304CF0;
    case 0x80304CF4u: goto label_80304CF4;
    case 0x80304CF8u: goto label_80304CF8;
    case 0x80304CFCu: goto label_80304CFC;
    case 0x80304D00u: goto label_80304D00;
    case 0x80304D04u: goto label_80304D04;
    case 0x80304D08u: goto label_80304D08;
    case 0x80304D0Cu: goto label_80304D0C;
    case 0x80304D10u: goto label_80304D10;
    case 0x80304D14u: goto label_80304D14;
    case 0x80304D18u: goto label_80304D18;
    case 0x80304D1Cu: goto label_80304D1C;
    case 0x80304D20u: goto label_80304D20;
    case 0x80304D24u: goto label_80304D24;
    case 0x80304D28u: goto label_80304D28;
    case 0x80304D2Cu: goto label_80304D2C;
    case 0x80304D30u: goto label_80304D30;
    case 0x80304D34u: goto label_80304D34;
    case 0x80304D38u: goto label_80304D38;
    case 0x80304D3Cu: goto label_80304D3C;
    case 0x80304D40u: goto label_80304D40;
    case 0x80304D44u: goto label_80304D44;
    case 0x80304D48u: goto label_80304D48;
    case 0x80304D4Cu: goto label_80304D4C;
    case 0x80304D50u: goto label_80304D50;
    case 0x80304D54u: goto label_80304D54;
    case 0x80304D58u: goto label_80304D58;
    case 0x80304D5Cu: goto label_80304D5C;
    case 0x80304D60u: goto label_80304D60;
    case 0x80304D64u: goto label_80304D64;
    case 0x80304D68u: goto label_80304D68;
    case 0x80304D6Cu: goto label_80304D6C;
    case 0x80304D70u: goto label_80304D70;
    case 0x80304D74u: goto label_80304D74;
    case 0x80304D78u: goto label_80304D78;
    case 0x80304D7Cu: goto label_80304D7C;
    case 0x80304D80u: goto label_80304D80;
    case 0x80304D84u: goto label_80304D84;
    case 0x80304D88u: goto label_80304D88;
    case 0x80304D8Cu: goto label_80304D8C;
    case 0x80304D90u: goto label_80304D90;
    case 0x80304D94u: goto label_80304D94;
    case 0x80304D98u: goto label_80304D98;
    case 0x80304D9Cu: goto label_80304D9C;
    case 0x80304DA0u: goto label_80304DA0;
    case 0x80304DA4u: goto label_80304DA4;
    case 0x80304DA8u: goto label_80304DA8;
    case 0x80304DACu: goto label_80304DAC;
    case 0x80304DB0u: goto label_80304DB0;
    case 0x80304DB4u: goto label_80304DB4;
    case 0x80304DB8u: goto label_80304DB8;
    case 0x80304DBCu: goto label_80304DBC;
    case 0x80304DC0u: goto label_80304DC0;
    case 0x80304DC4u: goto label_80304DC4;
    case 0x80304DC8u: goto label_80304DC8;
    case 0x80304DCCu: goto label_80304DCC;
    case 0x80304DD0u: goto label_80304DD0;
    case 0x80304DD4u: goto label_80304DD4;
    case 0x80304DD8u: goto label_80304DD8;
    case 0x80304DDCu: goto label_80304DDC;
    case 0x80304DE0u: goto label_80304DE0;
    case 0x80304DE4u: goto label_80304DE4;
    case 0x80304DE8u: goto label_80304DE8;
    case 0x80304DECu: goto label_80304DEC;
    case 0x80304DF0u: goto label_80304DF0;
    case 0x80304DF4u: goto label_80304DF4;
    case 0x80304DF8u: goto label_80304DF8;
    case 0x80304DFCu: goto label_80304DFC;
    case 0x80304E00u: goto label_80304E00;
    case 0x80304E04u: goto label_80304E04;
    case 0x80304E08u: goto label_80304E08;
    case 0x80304E0Cu: goto label_80304E0C;
    case 0x80304E10u: goto label_80304E10;
    case 0x80304E14u: goto label_80304E14;
    case 0x80304E18u: goto label_80304E18;
    case 0x80304E1Cu: goto label_80304E1C;
    case 0x80304E20u: goto label_80304E20;
    case 0x80304E24u: goto label_80304E24;
    case 0x80304E28u: goto label_80304E28;
    case 0x80304E2Cu: goto label_80304E2C;
    case 0x80304E30u: goto label_80304E30;
    case 0x80304E34u: goto label_80304E34;
    case 0x80304E38u: goto label_80304E38;
    case 0x80304E3Cu: goto label_80304E3C;
    case 0x80304E40u: goto label_80304E40;
    case 0x80304E44u: goto label_80304E44;
    case 0x80304E48u: goto label_80304E48;
    case 0x80304E4Cu: goto label_80304E4C;
    case 0x80304E50u: goto label_80304E50;
    case 0x80304E54u: goto label_80304E54;
    case 0x80304E58u: goto label_80304E58;
    case 0x80304E5Cu: goto label_80304E5C;
    case 0x80304E60u: goto label_80304E60;
    case 0x80304E64u: goto label_80304E64;
    case 0x80304E68u: goto label_80304E68;
    case 0x80304E6Cu: goto label_80304E6C;
    case 0x80304E70u: goto label_80304E70;
    case 0x80304E74u: goto label_80304E74;
    case 0x80304E78u: goto label_80304E78;
    case 0x80304E7Cu: goto label_80304E7C;
    case 0x80304E80u: goto label_80304E80;
    case 0x80304E84u: goto label_80304E84;
    case 0x80304E88u: goto label_80304E88;
    case 0x80304E8Cu: goto label_80304E8C;
    case 0x80304E90u: goto label_80304E90;
    case 0x80304E94u: goto label_80304E94;
    case 0x80304E98u: goto label_80304E98;
    case 0x80304E9Cu: goto label_80304E9C;
    case 0x80304EA0u: goto label_80304EA0;
    case 0x80304EA4u: goto label_80304EA4;
    case 0x80304EA8u: goto label_80304EA8;
    case 0x80304EACu: goto label_80304EAC;
    case 0x80304EB0u: goto label_80304EB0;
    case 0x80304EB4u: goto label_80304EB4;
    case 0x80304EB8u: goto label_80304EB8;
    case 0x80304EBCu: goto label_80304EBC;
    case 0x80304EC0u: goto label_80304EC0;
    case 0x80304EC4u: goto label_80304EC4;
    case 0x80304EC8u: goto label_80304EC8;
    case 0x80304ECCu: goto label_80304ECC;
    case 0x80304ED0u: goto label_80304ED0;
    case 0x80304ED4u: goto label_80304ED4;
    case 0x80304ED8u: goto label_80304ED8;
    case 0x80304EDCu: goto label_80304EDC;
    case 0x80304EE0u: goto label_80304EE0;
    case 0x80304EE4u: goto label_80304EE4;
    case 0x80304EE8u: goto label_80304EE8;
    case 0x80304EECu: goto label_80304EEC;
    case 0x80304EF0u: goto label_80304EF0;
    case 0x80304EF4u: goto label_80304EF4;
    case 0x80304EF8u: goto label_80304EF8;
    case 0x80304EFCu: goto label_80304EFC;
    case 0x80304F00u: goto label_80304F00;
    case 0x80304F04u: goto label_80304F04;
    case 0x80304F08u: goto label_80304F08;
    case 0x80304F0Cu: goto label_80304F0C;
    case 0x80304F10u: goto label_80304F10;
    case 0x80304F14u: goto label_80304F14;
    case 0x80304F18u: goto label_80304F18;
    case 0x80304F1Cu: goto label_80304F1C;
    case 0x80304F20u: goto label_80304F20;
    case 0x80304F24u: goto label_80304F24;
    case 0x80304F28u: goto label_80304F28;
    case 0x80304F2Cu: goto label_80304F2C;
    case 0x80304F30u: goto label_80304F30;
    case 0x80304F34u: goto label_80304F34;
    case 0x80304F38u: goto label_80304F38;
    case 0x80304F3Cu: goto label_80304F3C;
    case 0x80304F40u: goto label_80304F40;
    case 0x80304F44u: goto label_80304F44;
    case 0x80304F48u: goto label_80304F48;
    case 0x80304F4Cu: goto label_80304F4C;
    case 0x80304F50u: goto label_80304F50;
    case 0x80304F54u: goto label_80304F54;
    case 0x80304F58u: goto label_80304F58;
    case 0x80304F5Cu: goto label_80304F5C;
    case 0x80304F60u: goto label_80304F60;
    case 0x80304F64u: goto label_80304F64;
    case 0x80304F68u: goto label_80304F68;
    case 0x80304F6Cu: goto label_80304F6C;
    case 0x80304F70u: goto label_80304F70;
    case 0x80304F74u: goto label_80304F74;
    case 0x80304F78u: goto label_80304F78;
    case 0x80304F7Cu: goto label_80304F7C;
    case 0x80304F80u: goto label_80304F80;
    case 0x80304F84u: goto label_80304F84;
    case 0x80304F88u: goto label_80304F88;
    case 0x80304F8Cu: goto label_80304F8C;
    case 0x80304F90u: goto label_80304F90;
    case 0x80304F94u: goto label_80304F94;
    case 0x80304F98u: goto label_80304F98;
    case 0x80304F9Cu: goto label_80304F9C;
    case 0x80304FA0u: goto label_80304FA0;
    case 0x80304FA4u: goto label_80304FA4;
    case 0x80304FA8u: goto label_80304FA8;
    case 0x80304FACu: goto label_80304FAC;
    case 0x80304FB0u: goto label_80304FB0;
    case 0x80304FB4u: goto label_80304FB4;
    case 0x80304FB8u: goto label_80304FB8;
    case 0x80304FBCu: goto label_80304FBC;
    case 0x80304FC0u: goto label_80304FC0;
    case 0x80304FC4u: goto label_80304FC4;
    case 0x80304FC8u: goto label_80304FC8;
    case 0x80304FCCu: goto label_80304FCC;
    case 0x80304FD0u: goto label_80304FD0;
    case 0x80304FD4u: goto label_80304FD4;
    case 0x80304FD8u: goto label_80304FD8;
    case 0x80304FDCu: goto label_80304FDC;
    case 0x80304FE0u: goto label_80304FE0;
    case 0x80304FE4u: goto label_80304FE4;
    case 0x80304FE8u: goto label_80304FE8;
    case 0x80304FECu: goto label_80304FEC;
    case 0x80304FF0u: goto label_80304FF0;
    case 0x80304FF4u: goto label_80304FF4;
    case 0x80304FF8u: goto label_80304FF8;
    case 0x80304FFCu: goto label_80304FFC;
    case 0x80305000u: goto label_80305000;
    case 0x80305004u: goto label_80305004;
    case 0x80305008u: goto label_80305008;
    case 0x8030500Cu: goto label_8030500C;
    case 0x80305010u: goto label_80305010;
    case 0x80305014u: goto label_80305014;
    case 0x80305018u: goto label_80305018;
    case 0x8030501Cu: goto label_8030501C;
    case 0x80305020u: goto label_80305020;
    case 0x80305024u: goto label_80305024;
    case 0x80305028u: goto label_80305028;
    case 0x8030502Cu: goto label_8030502C;
    case 0x80305030u: goto label_80305030;
    case 0x80305034u: goto label_80305034;
    case 0x80305038u: goto label_80305038;
    case 0x8030503Cu: goto label_8030503C;
    case 0x80305040u: goto label_80305040;
    case 0x80305044u: goto label_80305044;
    case 0x80305048u: goto label_80305048;
    case 0x8030504Cu: goto label_8030504C;
    case 0x80305050u: goto label_80305050;
    case 0x80305054u: goto label_80305054;
    case 0x80305058u: goto label_80305058;
    case 0x8030505Cu: goto label_8030505C;
    case 0x80305060u: goto label_80305060;
    case 0x80305064u: goto label_80305064;
    case 0x80305068u: goto label_80305068;
    case 0x8030506Cu: goto label_8030506C;
    case 0x80305070u: goto label_80305070;
    case 0x80305074u: goto label_80305074;
    case 0x80305078u: goto label_80305078;
    case 0x8030507Cu: goto label_8030507C;
    case 0x80305080u: goto label_80305080;
    case 0x80305084u: goto label_80305084;
    case 0x80305088u: goto label_80305088;
    case 0x8030508Cu: goto label_8030508C;
    case 0x80305090u: goto label_80305090;
    case 0x80305094u: goto label_80305094;
    case 0x80305098u: goto label_80305098;
    case 0x8030509Cu: goto label_8030509C;
    case 0x803050A0u: goto label_803050A0;
    case 0x803050A4u: goto label_803050A4;
    case 0x803050A8u: goto label_803050A8;
    case 0x803050ACu: goto label_803050AC;
    case 0x803050B0u: goto label_803050B0;
    case 0x803050B4u: goto label_803050B4;
    case 0x803050B8u: goto label_803050B8;
    case 0x803050BCu: goto label_803050BC;
    case 0x803050C0u: goto label_803050C0;
    case 0x803050C4u: goto label_803050C4;
    case 0x803050C8u: goto label_803050C8;
    case 0x803050CCu: goto label_803050CC;
    case 0x803050D0u: goto label_803050D0;
    case 0x803050D4u: goto label_803050D4;
    case 0x803050D8u: goto label_803050D8;
    case 0x803050DCu: goto label_803050DC;
    case 0x803050E0u: goto label_803050E0;
    case 0x803050E4u: goto label_803050E4;
    case 0x803050E8u: goto label_803050E8;
    case 0x803050ECu: goto label_803050EC;
    case 0x803050F0u: goto label_803050F0;
    case 0x803050F4u: goto label_803050F4;
    case 0x803050F8u: goto label_803050F8;
    case 0x803050FCu: goto label_803050FC;
    case 0x80305100u: goto label_80305100;
    case 0x80305104u: goto label_80305104;
    case 0x80305108u: goto label_80305108;
    case 0x8030510Cu: goto label_8030510C;
    case 0x80305110u: goto label_80305110;
    case 0x80305114u: goto label_80305114;
    case 0x80305118u: goto label_80305118;
    case 0x8030511Cu: goto label_8030511C;
    case 0x80305120u: goto label_80305120;
    case 0x80305124u: goto label_80305124;
    case 0x80305128u: goto label_80305128;
    case 0x8030512Cu: goto label_8030512C;
    case 0x80305130u: goto label_80305130;
    case 0x80305134u: goto label_80305134;
    case 0x80305138u: goto label_80305138;
    case 0x8030513Cu: goto label_8030513C;
    case 0x80305140u: goto label_80305140;
    case 0x80305144u: goto label_80305144;
    case 0x80305148u: goto label_80305148;
    case 0x8030514Cu: goto label_8030514C;
    case 0x80305150u: goto label_80305150;
    case 0x80305154u: goto label_80305154;
    case 0x80305158u: goto label_80305158;
    case 0x8030515Cu: goto label_8030515C;
    case 0x80305160u: goto label_80305160;
    case 0x80305164u: goto label_80305164;
    case 0x80305168u: goto label_80305168;
    case 0x8030516Cu: goto label_8030516C;
    case 0x80305170u: goto label_80305170;
    case 0x80305174u: goto label_80305174;
    case 0x80305178u: goto label_80305178;
    case 0x8030517Cu: goto label_8030517C;
    case 0x80305180u: goto label_80305180;
    case 0x80305184u: goto label_80305184;
    case 0x80305188u: goto label_80305188;
    case 0x8030518Cu: goto label_8030518C;
    case 0x80305190u: goto label_80305190;
    case 0x80305194u: goto label_80305194;
    case 0x80305198u: goto label_80305198;
    case 0x8030519Cu: goto label_8030519C;
    case 0x803051A0u: goto label_803051A0;
    case 0x803051A4u: goto label_803051A4;
    case 0x803051A8u: goto label_803051A8;
    case 0x803051ACu: goto label_803051AC;
    case 0x803051B0u: goto label_803051B0;
    case 0x803051B4u: goto label_803051B4;
    case 0x803051B8u: goto label_803051B8;
    case 0x803051BCu: goto label_803051BC;
    case 0x803051C0u: goto label_803051C0;
    case 0x803051C4u: goto label_803051C4;
    case 0x803051C8u: goto label_803051C8;
    case 0x803051CCu: goto label_803051CC;
    case 0x803051D0u: goto label_803051D0;
    case 0x803051D4u: goto label_803051D4;
    case 0x803051D8u: goto label_803051D8;
    case 0x803051DCu: goto label_803051DC;
    case 0x803051E0u: goto label_803051E0;
    case 0x803051E4u: goto label_803051E4;
    case 0x803051E8u: goto label_803051E8;
    case 0x803051ECu: goto label_803051EC;
    case 0x803051F0u: goto label_803051F0;
    case 0x803051F4u: goto label_803051F4;
    case 0x803051F8u: goto label_803051F8;
    case 0x803051FCu: goto label_803051FC;
    case 0x80305200u: goto label_80305200;
    case 0x80305204u: goto label_80305204;
    case 0x80305208u: goto label_80305208;
    case 0x8030520Cu: goto label_8030520C;
    case 0x80305210u: goto label_80305210;
    case 0x80305214u: goto label_80305214;
    case 0x80305218u: goto label_80305218;
    case 0x8030521Cu: goto label_8030521C;
    case 0x80305220u: goto label_80305220;
    case 0x80305224u: goto label_80305224;
    case 0x80305228u: goto label_80305228;
    case 0x8030522Cu: goto label_8030522C;
    case 0x80305230u: goto label_80305230;
    case 0x80305234u: goto label_80305234;
    case 0x80305238u: goto label_80305238;
    case 0x8030523Cu: goto label_8030523C;
    case 0x80305240u: goto label_80305240;
    case 0x80305244u: goto label_80305244;
    case 0x80305248u: goto label_80305248;
    case 0x8030524Cu: goto label_8030524C;
    case 0x80305250u: goto label_80305250;
    case 0x80305254u: goto label_80305254;
    case 0x80305258u: goto label_80305258;
    case 0x8030525Cu: goto label_8030525C;
    case 0x80305260u: goto label_80305260;
    case 0x80305264u: goto label_80305264;
    case 0x80305268u: goto label_80305268;
    case 0x8030526Cu: goto label_8030526C;
    case 0x80305270u: goto label_80305270;
    case 0x80305274u: goto label_80305274;
    case 0x80305278u: goto label_80305278;
    case 0x8030527Cu: goto label_8030527C;
    case 0x80305280u: goto label_80305280;
    case 0x80305284u: goto label_80305284;
    case 0x80305288u: goto label_80305288;
    case 0x8030528Cu: goto label_8030528C;
    case 0x80305290u: goto label_80305290;
    case 0x80305294u: goto label_80305294;
    case 0x80305298u: goto label_80305298;
    case 0x8030529Cu: goto label_8030529C;
    case 0x803052A0u: goto label_803052A0;
    case 0x803052A4u: goto label_803052A4;
    case 0x803052A8u: goto label_803052A8;
    case 0x803052ACu: goto label_803052AC;
    case 0x803052B0u: goto label_803052B0;
    case 0x803052B4u: goto label_803052B4;
    case 0x803052B8u: goto label_803052B8;
    case 0x803052BCu: goto label_803052BC;
    case 0x803052C0u: goto label_803052C0;
    case 0x803052C4u: goto label_803052C4;
    case 0x803052C8u: goto label_803052C8;
    case 0x803052CCu: goto label_803052CC;
    case 0x803052D0u: goto label_803052D0;
    case 0x803052D4u: goto label_803052D4;
    case 0x803052D8u: goto label_803052D8;
    case 0x803052DCu: goto label_803052DC;
    case 0x803052E0u: goto label_803052E0;
    case 0x803052E4u: goto label_803052E4;
    case 0x803052E8u: goto label_803052E8;
    case 0x803052ECu: goto label_803052EC;
    case 0x803052F0u: goto label_803052F0;
    case 0x803052F4u: goto label_803052F4;
    case 0x803052F8u: goto label_803052F8;
    case 0x803052FCu: goto label_803052FC;
    case 0x80305300u: goto label_80305300;
    case 0x80305304u: goto label_80305304;
    case 0x80305308u: goto label_80305308;
    case 0x8030530Cu: goto label_8030530C;
    case 0x80305310u: goto label_80305310;
    case 0x80305314u: goto label_80305314;
    case 0x80305318u: goto label_80305318;
    case 0x8030531Cu: goto label_8030531C;
    case 0x80305320u: goto label_80305320;
    case 0x80305324u: goto label_80305324;
    case 0x80305328u: goto label_80305328;
    case 0x8030532Cu: goto label_8030532C;
    case 0x80305330u: goto label_80305330;
    case 0x80305334u: goto label_80305334;
    case 0x80305338u: goto label_80305338;
    case 0x8030533Cu: goto label_8030533C;
    case 0x80305340u: goto label_80305340;
    case 0x80305344u: goto label_80305344;
    case 0x80305348u: goto label_80305348;
    case 0x8030534Cu: goto label_8030534C;
    case 0x80305350u: goto label_80305350;
    case 0x80305354u: goto label_80305354;
    case 0x80305358u: goto label_80305358;
    case 0x8030535Cu: goto label_8030535C;
    case 0x80305360u: goto label_80305360;
    case 0x80305364u: goto label_80305364;
    case 0x80305368u: goto label_80305368;
    case 0x8030536Cu: goto label_8030536C;
    case 0x80305370u: goto label_80305370;
    case 0x80305374u: goto label_80305374;
    case 0x80305378u: goto label_80305378;
    case 0x8030537Cu: goto label_8030537C;
    case 0x80305380u: goto label_80305380;
    case 0x80305384u: goto label_80305384;
    case 0x80305388u: goto label_80305388;
    case 0x8030538Cu: goto label_8030538C;
    case 0x80305390u: goto label_80305390;
    case 0x80305394u: goto label_80305394;
    case 0x80305398u: goto label_80305398;
    case 0x8030539Cu: goto label_8030539C;
    case 0x803053A0u: goto label_803053A0;
    case 0x803053A4u: goto label_803053A4;
    case 0x803053A8u: goto label_803053A8;
    case 0x803053ACu: goto label_803053AC;
    case 0x803053B0u: goto label_803053B0;
    case 0x803053B4u: goto label_803053B4;
    case 0x803053B8u: goto label_803053B8;
    case 0x803053BCu: goto label_803053BC;
    case 0x803053C0u: goto label_803053C0;
    case 0x803053C4u: goto label_803053C4;
    case 0x803053C8u: goto label_803053C8;
    case 0x803053CCu: goto label_803053CC;
    case 0x803053D0u: goto label_803053D0;
    case 0x803053D4u: goto label_803053D4;
    case 0x803053D8u: goto label_803053D8;
    case 0x803053DCu: goto label_803053DC;
    case 0x803053E0u: goto label_803053E0;
    case 0x803053E4u: goto label_803053E4;
    case 0x803053E8u: goto label_803053E8;
    case 0x803053ECu: goto label_803053EC;
    case 0x803053F0u: goto label_803053F0;
    case 0x803053F4u: goto label_803053F4;
    case 0x803053F8u: goto label_803053F8;
    case 0x803053FCu: goto label_803053FC;
    case 0x80305400u: goto label_80305400;
    case 0x80305404u: goto label_80305404;
    case 0x80305408u: goto label_80305408;
    case 0x8030540Cu: goto label_8030540C;
    case 0x80305410u: goto label_80305410;
    case 0x80305414u: goto label_80305414;
    case 0x80305418u: goto label_80305418;
    case 0x8030541Cu: goto label_8030541C;
    case 0x80305420u: goto label_80305420;
    case 0x80305424u: goto label_80305424;
    case 0x80305428u: goto label_80305428;
    case 0x8030542Cu: goto label_8030542C;
    case 0x80305430u: goto label_80305430;
    case 0x80305434u: goto label_80305434;
    case 0x80305438u: goto label_80305438;
    case 0x8030543Cu: goto label_8030543C;
    case 0x80305440u: goto label_80305440;
    case 0x80305444u: goto label_80305444;
    case 0x80305448u: goto label_80305448;
    case 0x8030544Cu: goto label_8030544C;
    case 0x80305450u: goto label_80305450;
    case 0x80305454u: goto label_80305454;
    case 0x80305458u: goto label_80305458;
    case 0x8030545Cu: goto label_8030545C;
    case 0x80305460u: goto label_80305460;
    case 0x80305464u: goto label_80305464;
    case 0x80305468u: goto label_80305468;
    case 0x8030546Cu: goto label_8030546C;
    case 0x80305470u: goto label_80305470;
    case 0x80305474u: goto label_80305474;
    case 0x80305478u: goto label_80305478;
    case 0x8030547Cu: goto label_8030547C;
    case 0x80305480u: goto label_80305480;
    case 0x80305484u: goto label_80305484;
    case 0x80305488u: goto label_80305488;
    case 0x8030548Cu: goto label_8030548C;
    case 0x80305490u: goto label_80305490;
    case 0x80305494u: goto label_80305494;
    case 0x80305498u: goto label_80305498;
    case 0x8030549Cu: goto label_8030549C;
    case 0x803054A0u: goto label_803054A0;
    case 0x803054A4u: goto label_803054A4;
    case 0x803054A8u: goto label_803054A8;
    case 0x803054ACu: goto label_803054AC;
    case 0x803054B0u: goto label_803054B0;
    case 0x803054B4u: goto label_803054B4;
    case 0x803054B8u: goto label_803054B8;
    case 0x803054BCu: goto label_803054BC;
    case 0x803054C0u: goto label_803054C0;
    case 0x803054C4u: goto label_803054C4;
    case 0x803054C8u: goto label_803054C8;
    case 0x803054CCu: goto label_803054CC;
    case 0x803054D0u: goto label_803054D0;
    case 0x803054D4u: goto label_803054D4;
    case 0x803054D8u: goto label_803054D8;
    case 0x803054DCu: goto label_803054DC;
    case 0x803054E0u: goto label_803054E0;
    case 0x803054E4u: goto label_803054E4;
    case 0x803054E8u: goto label_803054E8;
    case 0x803054ECu: goto label_803054EC;
    case 0x803054F0u: goto label_803054F0;
    case 0x803054F4u: goto label_803054F4;
    case 0x803054F8u: goto label_803054F8;
    case 0x803054FCu: goto label_803054FC;
    case 0x80305500u: goto label_80305500;
    case 0x80305504u: goto label_80305504;
    case 0x80305508u: goto label_80305508;
    case 0x8030550Cu: goto label_8030550C;
    case 0x80305510u: goto label_80305510;
    case 0x80305514u: goto label_80305514;
    case 0x80305518u: goto label_80305518;
    case 0x8030551Cu: goto label_8030551C;
    case 0x80305520u: goto label_80305520;
    case 0x80305524u: goto label_80305524;
    case 0x80305528u: goto label_80305528;
    case 0x8030552Cu: goto label_8030552C;
    case 0x80305530u: goto label_80305530;
    case 0x80305534u: goto label_80305534;
    case 0x80305538u: goto label_80305538;
    case 0x8030553Cu: goto label_8030553C;
    case 0x80305540u: goto label_80305540;
    case 0x80305544u: goto label_80305544;
    case 0x80305548u: goto label_80305548;
    case 0x8030554Cu: goto label_8030554C;
    case 0x80305550u: goto label_80305550;
    case 0x80305554u: goto label_80305554;
    case 0x80305558u: goto label_80305558;
    case 0x8030555Cu: goto label_8030555C;
    case 0x80305560u: goto label_80305560;
    case 0x80305564u: goto label_80305564;
    case 0x80305568u: goto label_80305568;
    case 0x8030556Cu: goto label_8030556C;
    case 0x80305570u: goto label_80305570;
    case 0x80305574u: goto label_80305574;
    case 0x80305578u: goto label_80305578;
    case 0x8030557Cu: goto label_8030557C;
    case 0x80305580u: goto label_80305580;
    case 0x80305584u: goto label_80305584;
    case 0x80305588u: goto label_80305588;
    case 0x8030558Cu: goto label_8030558C;
    case 0x80305590u: goto label_80305590;
    case 0x80305594u: goto label_80305594;
    case 0x80305598u: goto label_80305598;
    case 0x8030559Cu: goto label_8030559C;
    case 0x803055A0u: goto label_803055A0;
    case 0x803055A4u: goto label_803055A4;
    case 0x803055A8u: goto label_803055A8;
    case 0x803055ACu: goto label_803055AC;
    case 0x803055B0u: goto label_803055B0;
    case 0x803055B4u: goto label_803055B4;
    case 0x803055B8u: goto label_803055B8;
    case 0x803055BCu: goto label_803055BC;
    case 0x803055C0u: goto label_803055C0;
    case 0x803055C4u: goto label_803055C4;
    case 0x803055C8u: goto label_803055C8;
    case 0x803055CCu: goto label_803055CC;
    case 0x803055D0u: goto label_803055D0;
    case 0x803055D4u: goto label_803055D4;
    case 0x803055D8u: goto label_803055D8;
    case 0x803055DCu: goto label_803055DC;
    case 0x803055E0u: goto label_803055E0;
    case 0x803055E4u: goto label_803055E4;
    case 0x803055E8u: goto label_803055E8;
    case 0x803055ECu: goto label_803055EC;
    case 0x803055F0u: goto label_803055F0;
    case 0x803055F4u: goto label_803055F4;
    case 0x803055F8u: goto label_803055F8;
    case 0x803055FCu: goto label_803055FC;
    case 0x80305600u: goto label_80305600;
    case 0x80305604u: goto label_80305604;
    case 0x80305608u: goto label_80305608;
    case 0x8030560Cu: goto label_8030560C;
    case 0x80305610u: goto label_80305610;
    case 0x80305614u: goto label_80305614;
    case 0x80305618u: goto label_80305618;
    case 0x8030561Cu: goto label_8030561C;
    case 0x80305620u: goto label_80305620;
    case 0x80305624u: goto label_80305624;
    case 0x80305628u: goto label_80305628;
    case 0x8030562Cu: goto label_8030562C;
    case 0x80305630u: goto label_80305630;
    case 0x80305634u: goto label_80305634;
    case 0x80305638u: goto label_80305638;
    case 0x8030563Cu: goto label_8030563C;
    case 0x80305640u: goto label_80305640;
    case 0x80305644u: goto label_80305644;
    case 0x80305648u: goto label_80305648;
    case 0x8030564Cu: goto label_8030564C;
    case 0x80305650u: goto label_80305650;
    case 0x80305654u: goto label_80305654;
    case 0x80305658u: goto label_80305658;
    case 0x8030565Cu: goto label_8030565C;
    case 0x80305660u: goto label_80305660;
    case 0x80305664u: goto label_80305664;
    case 0x80305668u: goto label_80305668;
    case 0x8030566Cu: goto label_8030566C;
    case 0x80305670u: goto label_80305670;
    case 0x80305674u: goto label_80305674;
    case 0x80305678u: goto label_80305678;
    case 0x8030567Cu: goto label_8030567C;
    case 0x80305680u: goto label_80305680;
    case 0x80305684u: goto label_80305684;
    case 0x80305688u: goto label_80305688;
    case 0x8030568Cu: goto label_8030568C;
    case 0x80305690u: goto label_80305690;
    case 0x80305694u: goto label_80305694;
    case 0x80305698u: goto label_80305698;
    case 0x8030569Cu: goto label_8030569C;
    case 0x803056A0u: goto label_803056A0;
    case 0x803056A4u: goto label_803056A4;
    case 0x803056A8u: goto label_803056A8;
    case 0x803056ACu: goto label_803056AC;
    case 0x803056B0u: goto label_803056B0;
    case 0x803056B4u: goto label_803056B4;
    case 0x803056B8u: goto label_803056B8;
    case 0x803056BCu: goto label_803056BC;
    case 0x803056C0u: goto label_803056C0;
    case 0x803056C4u: goto label_803056C4;
    case 0x803056C8u: goto label_803056C8;
    case 0x803056CCu: goto label_803056CC;
    case 0x803056D0u: goto label_803056D0;
    case 0x803056D4u: goto label_803056D4;
    case 0x803056D8u: goto label_803056D8;
    case 0x803056DCu: goto label_803056DC;
    case 0x803056E0u: goto label_803056E0;
    case 0x803056E4u: goto label_803056E4;
    case 0x803056E8u: goto label_803056E8;
    case 0x803056ECu: goto label_803056EC;
    case 0x803056F0u: goto label_803056F0;
    case 0x803056F4u: goto label_803056F4;
    case 0x803056F8u: goto label_803056F8;
    case 0x803056FCu: goto label_803056FC;
    case 0x80305700u: goto label_80305700;
    case 0x80305704u: goto label_80305704;
    case 0x80305708u: goto label_80305708;
    case 0x8030570Cu: goto label_8030570C;
    case 0x80305710u: goto label_80305710;
    case 0x80305714u: goto label_80305714;
    case 0x80305718u: goto label_80305718;
    case 0x8030571Cu: goto label_8030571C;
    case 0x80305720u: goto label_80305720;
    case 0x80305724u: goto label_80305724;
    case 0x80305728u: goto label_80305728;
    case 0x8030572Cu: goto label_8030572C;
    case 0x80305730u: goto label_80305730;
    case 0x80305734u: goto label_80305734;
    case 0x80305738u: goto label_80305738;
    case 0x8030573Cu: goto label_8030573C;
    case 0x80305740u: goto label_80305740;
    case 0x80305744u: goto label_80305744;
    case 0x80305748u: goto label_80305748;
    case 0x8030574Cu: goto label_8030574C;
    case 0x80305750u: goto label_80305750;
    case 0x80305754u: goto label_80305754;
    case 0x80305758u: goto label_80305758;
    case 0x8030575Cu: goto label_8030575C;
    case 0x80305760u: goto label_80305760;
    case 0x80305764u: goto label_80305764;
    case 0x80305768u: goto label_80305768;
    case 0x8030576Cu: goto label_8030576C;
    case 0x80305770u: goto label_80305770;
    case 0x80305774u: goto label_80305774;
    case 0x80305778u: goto label_80305778;
    case 0x8030577Cu: goto label_8030577C;
    case 0x80305780u: goto label_80305780;
    case 0x80305784u: goto label_80305784;
    case 0x80305788u: goto label_80305788;
    case 0x8030578Cu: goto label_8030578C;
    case 0x80305790u: goto label_80305790;
    case 0x80305794u: goto label_80305794;
    case 0x80305798u: goto label_80305798;
    case 0x8030579Cu: goto label_8030579C;
    case 0x803057A0u: goto label_803057A0;
    case 0x803057A4u: goto label_803057A4;
    case 0x803057A8u: goto label_803057A8;
    case 0x803057ACu: goto label_803057AC;
    case 0x803057B0u: goto label_803057B0;
    case 0x803057B4u: goto label_803057B4;
    case 0x803057B8u: goto label_803057B8;
    case 0x803057BCu: goto label_803057BC;
    case 0x803057C0u: goto label_803057C0;
    case 0x803057C4u: goto label_803057C4;
    case 0x803057C8u: goto label_803057C8;
    case 0x803057CCu: goto label_803057CC;
    case 0x803057D0u: goto label_803057D0;
    case 0x803057D4u: goto label_803057D4;
    case 0x803057D8u: goto label_803057D8;
    case 0x803057DCu: goto label_803057DC;
    case 0x803057E0u: goto label_803057E0;
    case 0x803057E4u: goto label_803057E4;
    case 0x803057E8u: goto label_803057E8;
    case 0x803057ECu: goto label_803057EC;
    case 0x803057F0u: goto label_803057F0;
    case 0x803057F4u: goto label_803057F4;
    case 0x803057F8u: goto label_803057F8;
    case 0x803057FCu: goto label_803057FC;
    case 0x80305800u: goto label_80305800;
    case 0x80305804u: goto label_80305804;
    case 0x80305808u: goto label_80305808;
    case 0x8030580Cu: goto label_8030580C;
    case 0x80305810u: goto label_80305810;
    case 0x80305814u: goto label_80305814;
    case 0x80305818u: goto label_80305818;
    case 0x8030581Cu: goto label_8030581C;
    case 0x80305820u: goto label_80305820;
    case 0x80305824u: goto label_80305824;
    case 0x80305828u: goto label_80305828;
    case 0x8030582Cu: goto label_8030582C;
    case 0x80305830u: goto label_80305830;
    case 0x80305834u: goto label_80305834;
    case 0x80305838u: goto label_80305838;
    case 0x8030583Cu: goto label_8030583C;
    case 0x80305840u: goto label_80305840;
    case 0x80305844u: goto label_80305844;
    case 0x80305848u: goto label_80305848;
    case 0x8030584Cu: goto label_8030584C;
    case 0x80305850u: goto label_80305850;
    case 0x80305854u: goto label_80305854;
    case 0x80305858u: goto label_80305858;
    case 0x8030585Cu: goto label_8030585C;
    case 0x80305860u: goto label_80305860;
    case 0x80305864u: goto label_80305864;
    case 0x80305868u: goto label_80305868;
    case 0x8030586Cu: goto label_8030586C;
    case 0x80305870u: goto label_80305870;
    case 0x80305874u: goto label_80305874;
    case 0x80305878u: goto label_80305878;
    case 0x8030587Cu: goto label_8030587C;
    case 0x80305880u: goto label_80305880;
    case 0x80305884u: goto label_80305884;
    case 0x80305888u: goto label_80305888;
    case 0x8030588Cu: goto label_8030588C;
    case 0x80305890u: goto label_80305890;
    case 0x80305894u: goto label_80305894;
    case 0x80305898u: goto label_80305898;
    case 0x8030589Cu: goto label_8030589C;
    case 0x803058A0u: goto label_803058A0;
    case 0x803058A4u: goto label_803058A4;
    case 0x803058A8u: goto label_803058A8;
    case 0x803058ACu: goto label_803058AC;
    case 0x803058B0u: goto label_803058B0;
    case 0x803058B4u: goto label_803058B4;
    case 0x803058B8u: goto label_803058B8;
    case 0x803058BCu: goto label_803058BC;
    case 0x803058C0u: goto label_803058C0;
    case 0x803058C4u: goto label_803058C4;
    case 0x803058C8u: goto label_803058C8;
    case 0x803058CCu: goto label_803058CC;
    case 0x803058D0u: goto label_803058D0;
    case 0x803058D4u: goto label_803058D4;
    case 0x803058D8u: goto label_803058D8;
    case 0x803058DCu: goto label_803058DC;
    case 0x803058E0u: goto label_803058E0;
    case 0x803058E4u: goto label_803058E4;
    case 0x803058E8u: goto label_803058E8;
    case 0x803058ECu: goto label_803058EC;
    case 0x803058F0u: goto label_803058F0;
    case 0x803058F4u: goto label_803058F4;
    case 0x803058F8u: goto label_803058F8;
    case 0x803058FCu: goto label_803058FC;
    case 0x80305900u: goto label_80305900;
    case 0x80305904u: goto label_80305904;
    case 0x80305908u: goto label_80305908;
    case 0x8030590Cu: goto label_8030590C;
    case 0x80305910u: goto label_80305910;
    case 0x80305914u: goto label_80305914;
    case 0x80305918u: goto label_80305918;
    case 0x8030591Cu: goto label_8030591C;
    case 0x80305920u: goto label_80305920;
    case 0x80305924u: goto label_80305924;
    case 0x80305928u: goto label_80305928;
    case 0x8030592Cu: goto label_8030592C;
    case 0x80305930u: goto label_80305930;
    case 0x80305934u: goto label_80305934;
    case 0x80305938u: goto label_80305938;
    case 0x8030593Cu: goto label_8030593C;
    case 0x80305940u: goto label_80305940;
    case 0x80305944u: goto label_80305944;
    case 0x80305948u: goto label_80305948;
    case 0x8030594Cu: goto label_8030594C;
    case 0x80305950u: goto label_80305950;
    case 0x80305954u: goto label_80305954;
    case 0x80305958u: goto label_80305958;
    case 0x8030595Cu: goto label_8030595C;
    case 0x80305960u: goto label_80305960;
    case 0x80305964u: goto label_80305964;
    case 0x80305968u: goto label_80305968;
    case 0x8030596Cu: goto label_8030596C;
    case 0x80305970u: goto label_80305970;
    case 0x80305974u: goto label_80305974;
    case 0x80305978u: goto label_80305978;
    case 0x8030597Cu: goto label_8030597C;
    case 0x80305980u: goto label_80305980;
    case 0x80305984u: goto label_80305984;
    case 0x80305988u: goto label_80305988;
    case 0x8030598Cu: goto label_8030598C;
    case 0x80305990u: goto label_80305990;
    case 0x80305994u: goto label_80305994;
    case 0x80305998u: goto label_80305998;
    case 0x8030599Cu: goto label_8030599C;
    case 0x803059A0u: goto label_803059A0;
    case 0x803059A4u: goto label_803059A4;
    case 0x803059A8u: goto label_803059A8;
    case 0x803059ACu: goto label_803059AC;
    case 0x803059B0u: goto label_803059B0;
    case 0x803059B4u: goto label_803059B4;
    case 0x803059B8u: goto label_803059B8;
    case 0x803059BCu: goto label_803059BC;
    case 0x803059C0u: goto label_803059C0;
    case 0x803059C4u: goto label_803059C4;
    case 0x803059C8u: goto label_803059C8;
    case 0x803059CCu: goto label_803059CC;
    case 0x803059D0u: goto label_803059D0;
    case 0x803059D4u: goto label_803059D4;
    case 0x803059D8u: goto label_803059D8;
    case 0x803059DCu: goto label_803059DC;
    case 0x803059E0u: goto label_803059E0;
    case 0x803059E4u: goto label_803059E4;
    case 0x803059E8u: goto label_803059E8;
    case 0x803059ECu: goto label_803059EC;
    case 0x803059F0u: goto label_803059F0;
    case 0x803059F4u: goto label_803059F4;
    case 0x803059F8u: goto label_803059F8;
    case 0x803059FCu: goto label_803059FC;
    case 0x80305A00u: goto label_80305A00;
    case 0x80305A04u: goto label_80305A04;
    case 0x80305A08u: goto label_80305A08;
    case 0x80305A0Cu: goto label_80305A0C;
    case 0x80305A10u: goto label_80305A10;
    case 0x80305A14u: goto label_80305A14;
    case 0x80305A18u: goto label_80305A18;
    case 0x80305A1Cu: goto label_80305A1C;
    case 0x80305A20u: goto label_80305A20;
    case 0x80305A24u: goto label_80305A24;
    case 0x80305A28u: goto label_80305A28;
    case 0x80305A2Cu: goto label_80305A2C;
    case 0x80305A30u: goto label_80305A30;
    case 0x80305A34u: goto label_80305A34;
    case 0x80305A38u: goto label_80305A38;
    case 0x80305A3Cu: goto label_80305A3C;
    case 0x80305A40u: goto label_80305A40;
    case 0x80305A44u: goto label_80305A44;
    case 0x80305A48u: goto label_80305A48;
    case 0x80305A4Cu: goto label_80305A4C;
    case 0x80305A50u: goto label_80305A50;
    case 0x80305A54u: goto label_80305A54;
    case 0x80305A58u: goto label_80305A58;
    case 0x80305A5Cu: goto label_80305A5C;
    case 0x80305A60u: goto label_80305A60;
    case 0x80305A64u: goto label_80305A64;
    case 0x80305A68u: goto label_80305A68;
    case 0x80305A6Cu: goto label_80305A6C;
    case 0x80305A70u: goto label_80305A70;
    case 0x80305A74u: goto label_80305A74;
    case 0x80305A78u: goto label_80305A78;
    case 0x80305A7Cu: goto label_80305A7C;
    case 0x80305A80u: goto label_80305A80;
    case 0x80305A84u: goto label_80305A84;
    case 0x80305A88u: goto label_80305A88;
    case 0x80305A8Cu: goto label_80305A8C;
    case 0x80305A90u: goto label_80305A90;
    case 0x80305A94u: goto label_80305A94;
    case 0x80305A98u: goto label_80305A98;
    case 0x80305A9Cu: goto label_80305A9C;
    case 0x80305AA0u: goto label_80305AA0;
    case 0x80305AA4u: goto label_80305AA4;
    case 0x80305AA8u: goto label_80305AA8;
    case 0x80305AACu: goto label_80305AAC;
    case 0x80305AB0u: goto label_80305AB0;
    case 0x80305AB4u: goto label_80305AB4;
    case 0x80305AB8u: goto label_80305AB8;
    case 0x80305ABCu: goto label_80305ABC;
    case 0x80305AC0u: goto label_80305AC0;
    case 0x80305AC4u: goto label_80305AC4;
    case 0x80305AC8u: goto label_80305AC8;
    case 0x80305ACCu: goto label_80305ACC;
    case 0x80305AD0u: goto label_80305AD0;
    case 0x80305AD4u: goto label_80305AD4;
    case 0x80305AD8u: goto label_80305AD8;
    case 0x80305ADCu: goto label_80305ADC;
    case 0x80305AE0u: goto label_80305AE0;
    case 0x80305AE4u: goto label_80305AE4;
    case 0x80305AE8u: goto label_80305AE8;
    case 0x80305AECu: goto label_80305AEC;
    case 0x80305AF0u: goto label_80305AF0;
    case 0x80305AF4u: goto label_80305AF4;
    case 0x80305AF8u: goto label_80305AF8;
    case 0x80305AFCu: goto label_80305AFC;
    case 0x80305B00u: goto label_80305B00;
    case 0x80305B04u: goto label_80305B04;
    case 0x80305B08u: goto label_80305B08;
    case 0x80305B0Cu: goto label_80305B0C;
    case 0x80305B10u: goto label_80305B10;
    case 0x80305B14u: goto label_80305B14;
    case 0x80305B18u: goto label_80305B18;
    case 0x80305B1Cu: goto label_80305B1C;
    case 0x80305B20u: goto label_80305B20;
    case 0x80305B24u: goto label_80305B24;
    case 0x80305B28u: goto label_80305B28;
    case 0x80305B2Cu: goto label_80305B2C;
    case 0x80305B30u: goto label_80305B30;
    case 0x80305B34u: goto label_80305B34;
    case 0x80305B38u: goto label_80305B38;
    case 0x80305B3Cu: goto label_80305B3C;
    case 0x80305B40u: goto label_80305B40;
    case 0x80305B44u: goto label_80305B44;
    case 0x80305B48u: goto label_80305B48;
    case 0x80305B4Cu: goto label_80305B4C;
    case 0x80305B50u: goto label_80305B50;
    case 0x80305B54u: goto label_80305B54;
    case 0x80305B58u: goto label_80305B58;
    case 0x80305B5Cu: goto label_80305B5C;
    case 0x80305B60u: goto label_80305B60;
    case 0x80305B64u: goto label_80305B64;
    case 0x80305B68u: goto label_80305B68;
    case 0x80305B6Cu: goto label_80305B6C;
    case 0x80305B70u: goto label_80305B70;
    case 0x80305B74u: goto label_80305B74;
    case 0x80305B78u: goto label_80305B78;
    case 0x80305B7Cu: goto label_80305B7C;
    case 0x80305B80u: goto label_80305B80;
    case 0x80305B84u: goto label_80305B84;
    case 0x80305B88u: goto label_80305B88;
    case 0x80305B8Cu: goto label_80305B8C;
    case 0x80305B90u: goto label_80305B90;
    case 0x80305B94u: goto label_80305B94;
    case 0x80305B98u: goto label_80305B98;
    case 0x80305B9Cu: goto label_80305B9C;
    case 0x80305BA0u: goto label_80305BA0;
    case 0x80305BA4u: goto label_80305BA4;
    case 0x80305BA8u: goto label_80305BA8;
    case 0x80305BACu: goto label_80305BAC;
    case 0x80305BB0u: goto label_80305BB0;
    case 0x80305BB4u: goto label_80305BB4;
    case 0x80305BB8u: goto label_80305BB8;
    case 0x80305BBCu: goto label_80305BBC;
    case 0x80305BC0u: goto label_80305BC0;
    case 0x80305BC4u: goto label_80305BC4;
    case 0x80305BC8u: goto label_80305BC8;
    case 0x80305BCCu: goto label_80305BCC;
    case 0x80305BD0u: goto label_80305BD0;
    case 0x80305BD4u: goto label_80305BD4;
    case 0x80305BD8u: goto label_80305BD8;
    case 0x80305BDCu: goto label_80305BDC;
    case 0x80305BE0u: goto label_80305BE0;
    case 0x80305BE4u: goto label_80305BE4;
    case 0x80305BE8u: goto label_80305BE8;
    case 0x80305BECu: goto label_80305BEC;
    case 0x80305BF0u: goto label_80305BF0;
    case 0x80305BF4u: goto label_80305BF4;
    case 0x80305BF8u: goto label_80305BF8;
    case 0x80305BFCu: goto label_80305BFC;
    case 0x80305C00u: goto label_80305C00;
    case 0x80305C04u: goto label_80305C04;
    case 0x80305C08u: goto label_80305C08;
    case 0x80305C0Cu: goto label_80305C0C;
    case 0x80305C10u: goto label_80305C10;
    case 0x80305C14u: goto label_80305C14;
    case 0x80305C18u: goto label_80305C18;
    case 0x80305C1Cu: goto label_80305C1C;
    case 0x80305C20u: goto label_80305C20;
    case 0x80305C24u: goto label_80305C24;
    case 0x80305C28u: goto label_80305C28;
    case 0x80305C2Cu: goto label_80305C2C;
    case 0x80305C30u: goto label_80305C30;
    case 0x80305C34u: goto label_80305C34;
    case 0x80305C38u: goto label_80305C38;
    case 0x80305C3Cu: goto label_80305C3C;
    case 0x80305C40u: goto label_80305C40;
    case 0x80305C44u: goto label_80305C44;
    case 0x80305C48u: goto label_80305C48;
    case 0x80305C4Cu: goto label_80305C4C;
    case 0x80305C50u: goto label_80305C50;
    case 0x80305C54u: goto label_80305C54;
    case 0x80305C58u: goto label_80305C58;
    case 0x80305C5Cu: goto label_80305C5C;
    case 0x80305C60u: goto label_80305C60;
    case 0x80305C64u: goto label_80305C64;
    case 0x80305C68u: goto label_80305C68;
    case 0x80305C6Cu: goto label_80305C6C;
    case 0x80305C70u: goto label_80305C70;
    case 0x80305C74u: goto label_80305C74;
    case 0x80305C78u: goto label_80305C78;
    case 0x80305C7Cu: goto label_80305C7C;
    case 0x80305C80u: goto label_80305C80;
    case 0x80305C84u: goto label_80305C84;
    case 0x80305C88u: goto label_80305C88;
    case 0x80305C8Cu: goto label_80305C8C;
    case 0x80305C90u: goto label_80305C90;
    case 0x80305C94u: goto label_80305C94;
    case 0x80305C98u: goto label_80305C98;
    case 0x80305C9Cu: goto label_80305C9C;
    case 0x80305CA0u: goto label_80305CA0;
    case 0x80305CA4u: goto label_80305CA4;
    case 0x80305CA8u: goto label_80305CA8;
    case 0x80305CACu: goto label_80305CAC;
    case 0x80305CB0u: goto label_80305CB0;
    case 0x80305CB4u: goto label_80305CB4;
    case 0x80305CB8u: goto label_80305CB8;
    case 0x80305CBCu: goto label_80305CBC;
    case 0x80305CC0u: goto label_80305CC0;
    case 0x80305CC4u: goto label_80305CC4;
    case 0x80305CC8u: goto label_80305CC8;
    case 0x80305CCCu: goto label_80305CCC;
    case 0x80305CD0u: goto label_80305CD0;
    case 0x80305CD4u: goto label_80305CD4;
    case 0x80305CD8u: goto label_80305CD8;
    case 0x80305CDCu: goto label_80305CDC;
    case 0x80305CE0u: goto label_80305CE0;
    case 0x80305CE4u: goto label_80305CE4;
    case 0x80305CE8u: goto label_80305CE8;
    case 0x80305CECu: goto label_80305CEC;
    case 0x80305CF0u: goto label_80305CF0;
    case 0x80305CF4u: goto label_80305CF4;
    case 0x80305CF8u: goto label_80305CF8;
    case 0x80305CFCu: goto label_80305CFC;
    case 0x80305D00u: goto label_80305D00;
    case 0x80305D04u: goto label_80305D04;
    case 0x80305D08u: goto label_80305D08;
    case 0x80305D0Cu: goto label_80305D0C;
    case 0x80305D10u: goto label_80305D10;
    case 0x80305D14u: goto label_80305D14;
    case 0x80305D18u: goto label_80305D18;
    case 0x80305D1Cu: goto label_80305D1C;
    case 0x80305D20u: goto label_80305D20;
    case 0x80305D24u: goto label_80305D24;
    case 0x80305D28u: goto label_80305D28;
    case 0x80305D2Cu: goto label_80305D2C;
    case 0x80305D30u: goto label_80305D30;
    case 0x80305D34u: goto label_80305D34;
    case 0x80305D38u: goto label_80305D38;
    case 0x80305D3Cu: goto label_80305D3C;
    case 0x80305D40u: goto label_80305D40;
    case 0x80305D44u: goto label_80305D44;
    case 0x80305D48u: goto label_80305D48;
    case 0x80305D4Cu: goto label_80305D4C;
    case 0x80305D50u: goto label_80305D50;
    case 0x80305D54u: goto label_80305D54;
    case 0x80305D58u: goto label_80305D58;
    case 0x80305D5Cu: goto label_80305D5C;
    case 0x80305D60u: goto label_80305D60;
    case 0x80305D64u: goto label_80305D64;
    case 0x80305D68u: goto label_80305D68;
    case 0x80305D6Cu: goto label_80305D6C;
    case 0x80305D70u: goto label_80305D70;
    case 0x80305D74u: goto label_80305D74;
    case 0x80305D78u: goto label_80305D78;
    case 0x80305D7Cu: goto label_80305D7C;
    case 0x80305D80u: goto label_80305D80;
    case 0x80305D84u: goto label_80305D84;
    case 0x80305D88u: goto label_80305D88;
    case 0x80305D8Cu: goto label_80305D8C;
    case 0x80305D90u: goto label_80305D90;
    case 0x80305D94u: goto label_80305D94;
    case 0x80305D98u: goto label_80305D98;
    case 0x80305D9Cu: goto label_80305D9C;
    case 0x80305DA0u: goto label_80305DA0;
    case 0x80305DA4u: goto label_80305DA4;
    case 0x80305DA8u: goto label_80305DA8;
    case 0x80305DACu: goto label_80305DAC;
    case 0x80305DB0u: goto label_80305DB0;
    case 0x80305DB4u: goto label_80305DB4;
    case 0x80305DB8u: goto label_80305DB8;
    case 0x80305DBCu: goto label_80305DBC;
    case 0x80305DC0u: goto label_80305DC0;
    case 0x80305DC4u: goto label_80305DC4;
    case 0x80305DC8u: goto label_80305DC8;
    case 0x80305DCCu: goto label_80305DCC;
    case 0x80305DD0u: goto label_80305DD0;
    case 0x80305DD4u: goto label_80305DD4;
    case 0x80305DD8u: goto label_80305DD8;
    case 0x80305DDCu: goto label_80305DDC;
    case 0x80305DE0u: goto label_80305DE0;
    case 0x80305DE4u: goto label_80305DE4;
    case 0x80305DE8u: goto label_80305DE8;
    case 0x80305DECu: goto label_80305DEC;
    case 0x80305DF0u: goto label_80305DF0;
    case 0x80305DF4u: goto label_80305DF4;
    case 0x80305DF8u: goto label_80305DF8;
    case 0x80305DFCu: goto label_80305DFC;
    case 0x80305E00u: goto label_80305E00;
    case 0x80305E04u: goto label_80305E04;
    case 0x80305E08u: goto label_80305E08;
    case 0x80305E0Cu: goto label_80305E0C;
    case 0x80305E10u: goto label_80305E10;
    case 0x80305E14u: goto label_80305E14;
    case 0x80305E18u: goto label_80305E18;
    case 0x80305E1Cu: goto label_80305E1C;
    case 0x80305E20u: goto label_80305E20;
    case 0x80305E24u: goto label_80305E24;
    case 0x80305E28u: goto label_80305E28;
    case 0x80305E2Cu: goto label_80305E2C;
    case 0x80305E30u: goto label_80305E30;
    case 0x80305E34u: goto label_80305E34;
    case 0x80305E38u: goto label_80305E38;
    case 0x80305E3Cu: goto label_80305E3C;
    case 0x80305E40u: goto label_80305E40;
    case 0x80305E44u: goto label_80305E44;
    case 0x80305E48u: goto label_80305E48;
    case 0x80305E4Cu: goto label_80305E4C;
    case 0x80305E50u: goto label_80305E50;
    case 0x80305E54u: goto label_80305E54;
    case 0x80305E58u: goto label_80305E58;
    case 0x80305E5Cu: goto label_80305E5C;
    case 0x80305E60u: goto label_80305E60;
    case 0x80305E64u: goto label_80305E64;
    case 0x80305E68u: goto label_80305E68;
    case 0x80305E6Cu: goto label_80305E6C;
    case 0x80305E70u: goto label_80305E70;
    case 0x80305E74u: goto label_80305E74;
    case 0x80305E78u: goto label_80305E78;
    case 0x80305E7Cu: goto label_80305E7C;
    case 0x80305E80u: goto label_80305E80;
    case 0x80305E84u: goto label_80305E84;
    case 0x80305E88u: goto label_80305E88;
    case 0x80305E8Cu: goto label_80305E8C;
    case 0x80305E90u: goto label_80305E90;
    case 0x80305E94u: goto label_80305E94;
    case 0x80305E98u: goto label_80305E98;
    case 0x80305E9Cu: goto label_80305E9C;
    case 0x80305EA0u: goto label_80305EA0;
    case 0x80305EA4u: goto label_80305EA4;
    case 0x80305EA8u: goto label_80305EA8;
    case 0x80305EACu: goto label_80305EAC;
    case 0x80305EB0u: goto label_80305EB0;
    case 0x80305EB4u: goto label_80305EB4;
    case 0x80305EB8u: goto label_80305EB8;
    case 0x80305EBCu: goto label_80305EBC;
    case 0x80305EC0u: goto label_80305EC0;
    case 0x80305EC4u: goto label_80305EC4;
    case 0x80305EC8u: goto label_80305EC8;
    case 0x80305ECCu: goto label_80305ECC;
    case 0x80305ED0u: goto label_80305ED0;
    case 0x80305ED4u: goto label_80305ED4;
    case 0x80305ED8u: goto label_80305ED8;
    case 0x80305EDCu: goto label_80305EDC;
    case 0x80305EE0u: goto label_80305EE0;
    case 0x80305EE4u: goto label_80305EE4;
    case 0x80305EE8u: goto label_80305EE8;
    case 0x80305EECu: goto label_80305EEC;
    case 0x80305EF0u: goto label_80305EF0;
    case 0x80305EF4u: goto label_80305EF4;
    case 0x80305EF8u: goto label_80305EF8;
    case 0x80305EFCu: goto label_80305EFC;
    case 0x80305F00u: goto label_80305F00;
    case 0x80305F04u: goto label_80305F04;
    case 0x80305F08u: goto label_80305F08;
    case 0x80305F0Cu: goto label_80305F0C;
    case 0x80305F10u: goto label_80305F10;
    case 0x80305F14u: goto label_80305F14;
    case 0x80305F18u: goto label_80305F18;
    case 0x80305F1Cu: goto label_80305F1C;
    case 0x80305F20u: goto label_80305F20;
    case 0x80305F24u: goto label_80305F24;
    case 0x80305F28u: goto label_80305F28;
    case 0x80305F2Cu: goto label_80305F2C;
    case 0x80305F30u: goto label_80305F30;
    case 0x80305F34u: goto label_80305F34;
    case 0x80305F38u: goto label_80305F38;
    case 0x80305F3Cu: goto label_80305F3C;
    case 0x80305F40u: goto label_80305F40;
    case 0x80305F44u: goto label_80305F44;
    case 0x80305F48u: goto label_80305F48;
    case 0x80305F4Cu: goto label_80305F4C;
    case 0x80305F50u: goto label_80305F50;
    case 0x80305F54u: goto label_80305F54;
    case 0x80305F58u: goto label_80305F58;
    case 0x80305F5Cu: goto label_80305F5C;
    case 0x80305F60u: goto label_80305F60;
    case 0x80305F64u: goto label_80305F64;
    case 0x80305F68u: goto label_80305F68;
    case 0x80305F6Cu: goto label_80305F6C;
    case 0x80305F70u: goto label_80305F70;
    case 0x80305F74u: goto label_80305F74;
    case 0x80305F78u: goto label_80305F78;
    case 0x80305F7Cu: goto label_80305F7C;
    case 0x80305F80u: goto label_80305F80;
    case 0x80305F84u: goto label_80305F84;
    case 0x80305F88u: goto label_80305F88;
    case 0x80305F8Cu: goto label_80305F8C;
    case 0x80305F90u: goto label_80305F90;
    case 0x80305F94u: goto label_80305F94;
    case 0x80305F98u: goto label_80305F98;
    case 0x80305F9Cu: goto label_80305F9C;
    case 0x80305FA0u: goto label_80305FA0;
    case 0x80305FA4u: goto label_80305FA4;
    case 0x80305FA8u: goto label_80305FA8;
    case 0x80305FACu: goto label_80305FAC;
    case 0x80305FB0u: goto label_80305FB0;
    case 0x80305FB4u: goto label_80305FB4;
    case 0x80305FB8u: goto label_80305FB8;
    case 0x80305FBCu: goto label_80305FBC;
    case 0x80305FC0u: goto label_80305FC0;
    case 0x80305FC4u: goto label_80305FC4;
    case 0x80305FC8u: goto label_80305FC8;
    case 0x80305FCCu: goto label_80305FCC;
    case 0x80305FD0u: goto label_80305FD0;
    case 0x80305FD4u: goto label_80305FD4;
    case 0x80305FD8u: goto label_80305FD8;
    case 0x80305FDCu: goto label_80305FDC;
    case 0x80305FE0u: goto label_80305FE0;
    case 0x80305FE4u: goto label_80305FE4;
    case 0x80305FE8u: goto label_80305FE8;
    case 0x80305FECu: goto label_80305FEC;
    case 0x80305FF0u: goto label_80305FF0;
    case 0x80305FF4u: goto label_80305FF4;
    case 0x80305FF8u: goto label_80305FF8;
    case 0x80305FFCu: goto label_80305FFC;
    case 0x80306000u: goto label_80306000;
    case 0x80306004u: goto label_80306004;
    case 0x80306008u: goto label_80306008;
    case 0x8030600Cu: goto label_8030600C;
    case 0x80306010u: goto label_80306010;
    case 0x80306014u: goto label_80306014;
    case 0x80306018u: goto label_80306018;
    case 0x8030601Cu: goto label_8030601C;
    case 0x80306020u: goto label_80306020;
    case 0x80306024u: goto label_80306024;
    case 0x80306028u: goto label_80306028;
    case 0x8030602Cu: goto label_8030602C;
    case 0x80306030u: goto label_80306030;
    case 0x80306034u: goto label_80306034;
    case 0x80306038u: goto label_80306038;
    case 0x8030603Cu: goto label_8030603C;
    case 0x80306040u: goto label_80306040;
    case 0x80306044u: goto label_80306044;
    case 0x80306048u: goto label_80306048;
    case 0x8030604Cu: goto label_8030604C;
    case 0x80306050u: goto label_80306050;
    case 0x80306054u: goto label_80306054;
    case 0x80306058u: goto label_80306058;
    case 0x8030605Cu: goto label_8030605C;
    case 0x80306060u: goto label_80306060;
    case 0x80306064u: goto label_80306064;
    case 0x80306068u: goto label_80306068;
    case 0x8030606Cu: goto label_8030606C;
    case 0x80306070u: goto label_80306070;
    case 0x80306074u: goto label_80306074;
    case 0x80306078u: goto label_80306078;
    case 0x8030607Cu: goto label_8030607C;
    case 0x80306080u: goto label_80306080;
    case 0x80306084u: goto label_80306084;
    case 0x80306088u: goto label_80306088;
    case 0x8030608Cu: goto label_8030608C;
    case 0x80306090u: goto label_80306090;
    case 0x80306094u: goto label_80306094;
    case 0x80306098u: goto label_80306098;
    case 0x8030609Cu: goto label_8030609C;
    case 0x803060A0u: goto label_803060A0;
    case 0x803060A4u: goto label_803060A4;
    case 0x803060A8u: goto label_803060A8;
    case 0x803060ACu: goto label_803060AC;
    case 0x803060B0u: goto label_803060B0;
    case 0x803060B4u: goto label_803060B4;
    case 0x803060B8u: goto label_803060B8;
    case 0x803060BCu: goto label_803060BC;
    case 0x803060C0u: goto label_803060C0;
    case 0x803060C4u: goto label_803060C4;
    case 0x803060C8u: goto label_803060C8;
    case 0x803060CCu: goto label_803060CC;
    case 0x803060D0u: goto label_803060D0;
    case 0x803060D4u: goto label_803060D4;
    case 0x803060D8u: goto label_803060D8;
    case 0x803060DCu: goto label_803060DC;
    case 0x803060E0u: goto label_803060E0;
    case 0x803060E4u: goto label_803060E4;
    case 0x803060E8u: goto label_803060E8;
    case 0x803060ECu: goto label_803060EC;
    case 0x803060F0u: goto label_803060F0;
    case 0x803060F4u: goto label_803060F4;
    case 0x803060F8u: goto label_803060F8;
    case 0x803060FCu: goto label_803060FC;
    case 0x80306100u: goto label_80306100;
    case 0x80306104u: goto label_80306104;
    case 0x80306108u: goto label_80306108;
    case 0x8030610Cu: goto label_8030610C;
    case 0x80306110u: goto label_80306110;
    case 0x80306114u: goto label_80306114;
    case 0x80306118u: goto label_80306118;
    case 0x8030611Cu: goto label_8030611C;
    case 0x80306120u: goto label_80306120;
    case 0x80306124u: goto label_80306124;
    case 0x80306128u: goto label_80306128;
    case 0x8030612Cu: goto label_8030612C;
    case 0x80306130u: goto label_80306130;
    case 0x80306134u: goto label_80306134;
    case 0x80306138u: goto label_80306138;
    case 0x8030613Cu: goto label_8030613C;
    case 0x80306140u: goto label_80306140;
    case 0x80306144u: goto label_80306144;
    case 0x80306148u: goto label_80306148;
    case 0x8030614Cu: goto label_8030614C;
    case 0x80306150u: goto label_80306150;
    case 0x80306154u: goto label_80306154;
    case 0x80306158u: goto label_80306158;
    case 0x8030615Cu: goto label_8030615C;
    case 0x80306160u: goto label_80306160;
    case 0x80306164u: goto label_80306164;
    case 0x80306168u: goto label_80306168;
    case 0x8030616Cu: goto label_8030616C;
    case 0x80306170u: goto label_80306170;
    case 0x80306174u: goto label_80306174;
    case 0x80306178u: goto label_80306178;
    case 0x8030617Cu: goto label_8030617C;
    case 0x80306180u: goto label_80306180;
    case 0x80306184u: goto label_80306184;
    case 0x80306188u: goto label_80306188;
    case 0x8030618Cu: goto label_8030618C;
    case 0x80306190u: goto label_80306190;
    case 0x80306194u: goto label_80306194;
    case 0x80306198u: goto label_80306198;
    case 0x8030619Cu: goto label_8030619C;
    case 0x803061A0u: goto label_803061A0;
    case 0x803061A4u: goto label_803061A4;
    case 0x803061A8u: goto label_803061A8;
    case 0x803061ACu: goto label_803061AC;
    case 0x803061B0u: goto label_803061B0;
    case 0x803061B4u: goto label_803061B4;
    case 0x803061B8u: goto label_803061B8;
    case 0x803061BCu: goto label_803061BC;
    case 0x803061C0u: goto label_803061C0;
    case 0x803061C4u: goto label_803061C4;
    case 0x803061C8u: goto label_803061C8;
    case 0x803061CCu: goto label_803061CC;
    case 0x803061D0u: goto label_803061D0;
    case 0x803061D4u: goto label_803061D4;
    case 0x803061D8u: goto label_803061D8;
    case 0x803061DCu: goto label_803061DC;
    case 0x803061E0u: goto label_803061E0;
    case 0x803061E4u: goto label_803061E4;
    case 0x803061E8u: goto label_803061E8;
    case 0x803061ECu: goto label_803061EC;
    case 0x803061F0u: goto label_803061F0;
    case 0x803061F4u: goto label_803061F4;
    case 0x803061F8u: goto label_803061F8;
    case 0x803061FCu: goto label_803061FC;
    case 0x80306200u: goto label_80306200;
    case 0x80306204u: goto label_80306204;
    case 0x80306208u: goto label_80306208;
    case 0x8030620Cu: goto label_8030620C;
    case 0x80306210u: goto label_80306210;
    case 0x80306214u: goto label_80306214;
    case 0x80306218u: goto label_80306218;
    case 0x8030621Cu: goto label_8030621C;
    case 0x80306220u: goto label_80306220;
    case 0x80306224u: goto label_80306224;
    case 0x80306228u: goto label_80306228;
    case 0x8030622Cu: goto label_8030622C;
    case 0x80306230u: goto label_80306230;
    case 0x80306234u: goto label_80306234;
    case 0x80306238u: goto label_80306238;
    case 0x8030623Cu: goto label_8030623C;
    case 0x80306240u: goto label_80306240;
    case 0x80306244u: goto label_80306244;
    case 0x80306248u: goto label_80306248;
    case 0x8030624Cu: goto label_8030624C;
    case 0x80306250u: goto label_80306250;
    case 0x80306254u: goto label_80306254;
    case 0x80306258u: goto label_80306258;
    case 0x8030625Cu: goto label_8030625C;
    case 0x80306260u: goto label_80306260;
    case 0x80306264u: goto label_80306264;
    case 0x80306268u: goto label_80306268;
    case 0x8030626Cu: goto label_8030626C;
    case 0x80306270u: goto label_80306270;
    case 0x80306274u: goto label_80306274;
    case 0x80306278u: goto label_80306278;
    case 0x8030627Cu: goto label_8030627C;
    case 0x80306280u: goto label_80306280;
    case 0x80306284u: goto label_80306284;
    case 0x80306288u: goto label_80306288;
    case 0x8030628Cu: goto label_8030628C;
    case 0x80306290u: goto label_80306290;
    case 0x80306294u: goto label_80306294;
    case 0x80306298u: goto label_80306298;
    case 0x8030629Cu: goto label_8030629C;
    case 0x803062A0u: goto label_803062A0;
    case 0x803062A4u: goto label_803062A4;
    case 0x803062A8u: goto label_803062A8;
    case 0x803062ACu: goto label_803062AC;
    case 0x803062B0u: goto label_803062B0;
    case 0x803062B4u: goto label_803062B4;
    case 0x803062B8u: goto label_803062B8;
    case 0x803062BCu: goto label_803062BC;
    case 0x803062C0u: goto label_803062C0;
    case 0x803062C4u: goto label_803062C4;
    case 0x803062C8u: goto label_803062C8;
    case 0x803062CCu: goto label_803062CC;
    case 0x803062D0u: goto label_803062D0;
    case 0x803062D4u: goto label_803062D4;
    case 0x803062D8u: goto label_803062D8;
    case 0x803062DCu: goto label_803062DC;
    case 0x803062E0u: goto label_803062E0;
    case 0x803062E4u: goto label_803062E4;
    case 0x803062E8u: goto label_803062E8;
    case 0x803062ECu: goto label_803062EC;
    case 0x803062F0u: goto label_803062F0;
    case 0x803062F4u: goto label_803062F4;
    case 0x803062F8u: goto label_803062F8;
    case 0x803062FCu: goto label_803062FC;
    case 0x80306300u: goto label_80306300;
    case 0x80306304u: goto label_80306304;
    case 0x80306308u: goto label_80306308;
    case 0x8030630Cu: goto label_8030630C;
    case 0x80306310u: goto label_80306310;
    case 0x80306314u: goto label_80306314;
    case 0x80306318u: goto label_80306318;
    case 0x8030631Cu: goto label_8030631C;
    case 0x80306320u: goto label_80306320;
    case 0x80306324u: goto label_80306324;
    case 0x80306328u: goto label_80306328;
    case 0x8030632Cu: goto label_8030632C;
    case 0x80306330u: goto label_80306330;
    case 0x80306334u: goto label_80306334;
    case 0x80306338u: goto label_80306338;
    case 0x8030633Cu: goto label_8030633C;
    case 0x80306340u: goto label_80306340;
    case 0x80306344u: goto label_80306344;
    case 0x80306348u: goto label_80306348;
    case 0x8030634Cu: goto label_8030634C;
    case 0x80306350u: goto label_80306350;
    case 0x80306354u: goto label_80306354;
    case 0x80306358u: goto label_80306358;
    case 0x8030635Cu: goto label_8030635C;
    case 0x80306360u: goto label_80306360;
    case 0x80306364u: goto label_80306364;
    case 0x80306368u: goto label_80306368;
    case 0x8030636Cu: goto label_8030636C;
    case 0x80306370u: goto label_80306370;
    case 0x80306374u: goto label_80306374;
    case 0x80306378u: goto label_80306378;
    case 0x8030637Cu: goto label_8030637C;
    case 0x80306380u: goto label_80306380;
    case 0x80306384u: goto label_80306384;
    case 0x80306388u: goto label_80306388;
    case 0x8030638Cu: goto label_8030638C;
    case 0x80306390u: goto label_80306390;
    case 0x80306394u: goto label_80306394;
    case 0x80306398u: goto label_80306398;
    case 0x8030639Cu: goto label_8030639C;
    case 0x803063A0u: goto label_803063A0;
    case 0x803063A4u: goto label_803063A4;
    case 0x803063A8u: goto label_803063A8;
    case 0x803063ACu: goto label_803063AC;
    case 0x803063B0u: goto label_803063B0;
    case 0x803063B4u: goto label_803063B4;
    case 0x803063B8u: goto label_803063B8;
    case 0x803063BCu: goto label_803063BC;
    case 0x803063C0u: goto label_803063C0;
    case 0x803063C4u: goto label_803063C4;
    case 0x803063C8u: goto label_803063C8;
    case 0x803063CCu: goto label_803063CC;
    case 0x803063D0u: goto label_803063D0;
    case 0x803063D4u: goto label_803063D4;
    case 0x803063D8u: goto label_803063D8;
    case 0x803063DCu: goto label_803063DC;
    case 0x803063E0u: goto label_803063E0;
    case 0x803063E4u: goto label_803063E4;
    case 0x803063E8u: goto label_803063E8;
    case 0x803063ECu: goto label_803063EC;
    case 0x803063F0u: goto label_803063F0;
    case 0x803063F4u: goto label_803063F4;
    case 0x803063F8u: goto label_803063F8;
    case 0x803063FCu: goto label_803063FC;
    case 0x80306400u: goto label_80306400;
    case 0x80306404u: goto label_80306404;
    case 0x80306408u: goto label_80306408;
    case 0x8030640Cu: goto label_8030640C;
    case 0x80306410u: goto label_80306410;
    case 0x80306414u: goto label_80306414;
    case 0x80306418u: goto label_80306418;
    case 0x8030641Cu: goto label_8030641C;
    case 0x80306420u: goto label_80306420;
    case 0x80306424u: goto label_80306424;
    case 0x80306428u: goto label_80306428;
    case 0x8030642Cu: goto label_8030642C;
    case 0x80306430u: goto label_80306430;
    case 0x80306434u: goto label_80306434;
    case 0x80306438u: goto label_80306438;
    case 0x8030643Cu: goto label_8030643C;
    case 0x80306440u: goto label_80306440;
    case 0x80306444u: goto label_80306444;
    case 0x80306448u: goto label_80306448;
    case 0x8030644Cu: goto label_8030644C;
    case 0x80306450u: goto label_80306450;
    case 0x80306454u: goto label_80306454;
    case 0x80306458u: goto label_80306458;
    case 0x8030645Cu: goto label_8030645C;
    case 0x80306460u: goto label_80306460;
    case 0x80306464u: goto label_80306464;
    case 0x80306468u: goto label_80306468;
    case 0x8030646Cu: goto label_8030646C;
    case 0x80306470u: goto label_80306470;
    case 0x80306474u: goto label_80306474;
    case 0x80306478u: goto label_80306478;
    case 0x8030647Cu: goto label_8030647C;
    case 0x80306480u: goto label_80306480;
    case 0x80306484u: goto label_80306484;
    case 0x80306488u: goto label_80306488;
    case 0x8030648Cu: goto label_8030648C;
    case 0x80306490u: goto label_80306490;
    case 0x80306494u: goto label_80306494;
    case 0x80306498u: goto label_80306498;
    case 0x8030649Cu: goto label_8030649C;
    case 0x803064A0u: goto label_803064A0;
    case 0x803064A4u: goto label_803064A4;
    case 0x803064A8u: goto label_803064A8;
    case 0x803064ACu: goto label_803064AC;
    case 0x803064B0u: goto label_803064B0;
    case 0x803064B4u: goto label_803064B4;
    case 0x803064B8u: goto label_803064B8;
    case 0x803064BCu: goto label_803064BC;
    case 0x803064C0u: goto label_803064C0;
    case 0x803064C4u: goto label_803064C4;
    case 0x803064C8u: goto label_803064C8;
    case 0x803064CCu: goto label_803064CC;
    case 0x803064D0u: goto label_803064D0;
    case 0x803064D4u: goto label_803064D4;
    case 0x803064D8u: goto label_803064D8;
    case 0x803064DCu: goto label_803064DC;
    case 0x803064E0u: goto label_803064E0;
    case 0x803064E4u: goto label_803064E4;
    case 0x803064E8u: goto label_803064E8;
    case 0x803064ECu: goto label_803064EC;
    case 0x803064F0u: goto label_803064F0;
    case 0x803064F4u: goto label_803064F4;
    case 0x803064F8u: goto label_803064F8;
    case 0x803064FCu: goto label_803064FC;
    case 0x80306500u: goto label_80306500;
    case 0x80306504u: goto label_80306504;
    case 0x80306508u: goto label_80306508;
    case 0x8030650Cu: goto label_8030650C;
    case 0x80306510u: goto label_80306510;
    case 0x80306514u: goto label_80306514;
    case 0x80306518u: goto label_80306518;
    case 0x8030651Cu: goto label_8030651C;
    case 0x80306520u: goto label_80306520;
    case 0x80306524u: goto label_80306524;
    case 0x80306528u: goto label_80306528;
    case 0x8030652Cu: goto label_8030652C;
    case 0x80306530u: goto label_80306530;
    case 0x80306534u: goto label_80306534;
    case 0x80306538u: goto label_80306538;
    case 0x8030653Cu: goto label_8030653C;
    case 0x80306540u: goto label_80306540;
    case 0x80306544u: goto label_80306544;
    case 0x80306548u: goto label_80306548;
    case 0x8030654Cu: goto label_8030654C;
    case 0x80306550u: goto label_80306550;
    case 0x80306554u: goto label_80306554;
    case 0x80306558u: goto label_80306558;
    case 0x8030655Cu: goto label_8030655C;
    case 0x80306560u: goto label_80306560;
    case 0x80306564u: goto label_80306564;
    case 0x80306568u: goto label_80306568;
    case 0x8030656Cu: goto label_8030656C;
    case 0x80306570u: goto label_80306570;
    case 0x80306574u: goto label_80306574;
    case 0x80306578u: goto label_80306578;
    case 0x8030657Cu: goto label_8030657C;
    case 0x80306580u: goto label_80306580;
    case 0x80306584u: goto label_80306584;
    case 0x80306588u: goto label_80306588;
    case 0x8030658Cu: goto label_8030658C;
    case 0x80306590u: goto label_80306590;
    case 0x80306594u: goto label_80306594;
    case 0x80306598u: goto label_80306598;
    case 0x8030659Cu: goto label_8030659C;
    case 0x803065A0u: goto label_803065A0;
    case 0x803065A4u: goto label_803065A4;
    case 0x803065A8u: goto label_803065A8;
    case 0x803065ACu: goto label_803065AC;
    case 0x803065B0u: goto label_803065B0;
    case 0x803065B4u: goto label_803065B4;
    case 0x803065B8u: goto label_803065B8;
    case 0x803065BCu: goto label_803065BC;
    case 0x803065C0u: goto label_803065C0;
    case 0x803065C4u: goto label_803065C4;
    case 0x803065C8u: goto label_803065C8;
    case 0x803065CCu: goto label_803065CC;
    case 0x803065D0u: goto label_803065D0;
    case 0x803065D4u: goto label_803065D4;
    case 0x803065D8u: goto label_803065D8;
    case 0x803065DCu: goto label_803065DC;
    case 0x803065E0u: goto label_803065E0;
    case 0x803065E4u: goto label_803065E4;
    case 0x803065E8u: goto label_803065E8;
    case 0x803065ECu: goto label_803065EC;
    case 0x803065F0u: goto label_803065F0;
    case 0x803065F4u: goto label_803065F4;
    case 0x803065F8u: goto label_803065F8;
    case 0x803065FCu: goto label_803065FC;
    case 0x80306600u: goto label_80306600;
    case 0x80306604u: goto label_80306604;
    case 0x80306608u: goto label_80306608;
    case 0x8030660Cu: goto label_8030660C;
    case 0x80306610u: goto label_80306610;
    case 0x80306614u: goto label_80306614;
    case 0x80306618u: goto label_80306618;
    case 0x8030661Cu: goto label_8030661C;
    case 0x80306620u: goto label_80306620;
    case 0x80306624u: goto label_80306624;
    case 0x80306628u: goto label_80306628;
    case 0x8030662Cu: goto label_8030662C;
    case 0x80306630u: goto label_80306630;
    case 0x80306634u: goto label_80306634;
    case 0x80306638u: goto label_80306638;
    case 0x8030663Cu: goto label_8030663C;
    case 0x80306640u: goto label_80306640;
    case 0x80306644u: goto label_80306644;
    case 0x80306648u: goto label_80306648;
    case 0x8030664Cu: goto label_8030664C;
    case 0x80306650u: goto label_80306650;
    case 0x80306654u: goto label_80306654;
    case 0x80306658u: goto label_80306658;
    case 0x8030665Cu: goto label_8030665C;
    case 0x80306660u: goto label_80306660;
    case 0x80306664u: goto label_80306664;
    case 0x80306668u: goto label_80306668;
    case 0x8030666Cu: goto label_8030666C;
    case 0x80306670u: goto label_80306670;
    case 0x80306674u: goto label_80306674;
    case 0x80306678u: goto label_80306678;
    case 0x8030667Cu: goto label_8030667C;
    case 0x80306680u: goto label_80306680;
    case 0x80306684u: goto label_80306684;
    case 0x80306688u: goto label_80306688;
    case 0x8030668Cu: goto label_8030668C;
    case 0x80306690u: goto label_80306690;
    case 0x80306694u: goto label_80306694;
    case 0x80306698u: goto label_80306698;
    case 0x8030669Cu: goto label_8030669C;
    case 0x803066A0u: goto label_803066A0;
    case 0x803066A4u: goto label_803066A4;
    case 0x803066A8u: goto label_803066A8;
    case 0x803066ACu: goto label_803066AC;
    case 0x803066B0u: goto label_803066B0;
    case 0x803066B4u: goto label_803066B4;
    case 0x803066B8u: goto label_803066B8;
    case 0x803066BCu: goto label_803066BC;
    case 0x803066C0u: goto label_803066C0;
    case 0x803066C4u: goto label_803066C4;
    case 0x803066C8u: goto label_803066C8;
    case 0x803066CCu: goto label_803066CC;
    case 0x803066D0u: goto label_803066D0;
    case 0x803066D4u: goto label_803066D4;
    case 0x803066D8u: goto label_803066D8;
    case 0x803066DCu: goto label_803066DC;
    case 0x803066E0u: goto label_803066E0;
    case 0x803066E4u: goto label_803066E4;
    case 0x803066E8u: goto label_803066E8;
    case 0x803066ECu: goto label_803066EC;
    case 0x803066F0u: goto label_803066F0;
    case 0x803066F4u: goto label_803066F4;
    case 0x803066F8u: goto label_803066F8;
    case 0x803066FCu: goto label_803066FC;
    case 0x80306700u: goto label_80306700;
    case 0x80306704u: goto label_80306704;
    case 0x80306708u: goto label_80306708;
    case 0x8030670Cu: goto label_8030670C;
    case 0x80306710u: goto label_80306710;
    case 0x80306714u: goto label_80306714;
    case 0x80306718u: goto label_80306718;
    case 0x8030671Cu: goto label_8030671C;
    case 0x80306720u: goto label_80306720;
    case 0x80306724u: goto label_80306724;
    case 0x80306728u: goto label_80306728;
    case 0x8030672Cu: goto label_8030672C;
    case 0x80306730u: goto label_80306730;
    case 0x80306734u: goto label_80306734;
    case 0x80306738u: goto label_80306738;
    case 0x8030673Cu: goto label_8030673C;
    case 0x80306740u: goto label_80306740;
    case 0x80306744u: goto label_80306744;
    case 0x80306748u: goto label_80306748;
    case 0x8030674Cu: goto label_8030674C;
    case 0x80306750u: goto label_80306750;
    case 0x80306754u: goto label_80306754;
    case 0x80306758u: goto label_80306758;
    case 0x8030675Cu: goto label_8030675C;
    case 0x80306760u: goto label_80306760;
    case 0x80306764u: goto label_80306764;
    case 0x80306768u: goto label_80306768;
    case 0x8030676Cu: goto label_8030676C;
    case 0x80306770u: goto label_80306770;
    case 0x80306774u: goto label_80306774;
    case 0x80306778u: goto label_80306778;
    case 0x8030677Cu: goto label_8030677C;
    case 0x80306780u: goto label_80306780;
    case 0x80306784u: goto label_80306784;
    case 0x80306788u: goto label_80306788;
    case 0x8030678Cu: goto label_8030678C;
    case 0x80306790u: goto label_80306790;
    case 0x80306794u: goto label_80306794;
    case 0x80306798u: goto label_80306798;
    case 0x8030679Cu: goto label_8030679C;
    case 0x803067A0u: goto label_803067A0;
    case 0x803067A4u: goto label_803067A4;
    case 0x803067A8u: goto label_803067A8;
    case 0x803067ACu: goto label_803067AC;
    case 0x803067B0u: goto label_803067B0;
    case 0x803067B4u: goto label_803067B4;
    case 0x803067B8u: goto label_803067B8;
    case 0x803067BCu: goto label_803067BC;
    case 0x803067C0u: goto label_803067C0;
    case 0x803067C4u: goto label_803067C4;
    case 0x803067C8u: goto label_803067C8;
    case 0x803067CCu: goto label_803067CC;
    case 0x803067D0u: goto label_803067D0;
    case 0x803067D4u: goto label_803067D4;
    case 0x803067D8u: goto label_803067D8;
    case 0x803067DCu: goto label_803067DC;
    case 0x803067E0u: goto label_803067E0;
    case 0x803067E4u: goto label_803067E4;
    case 0x803067E8u: goto label_803067E8;
    case 0x803067ECu: goto label_803067EC;
    case 0x803067F0u: goto label_803067F0;
    case 0x803067F4u: goto label_803067F4;
    case 0x803067F8u: goto label_803067F8;
    case 0x803067FCu: goto label_803067FC;
    case 0x80306800u: goto label_80306800;
    case 0x80306804u: goto label_80306804;
    case 0x80306808u: goto label_80306808;
    case 0x8030680Cu: goto label_8030680C;
    case 0x80306810u: goto label_80306810;
    case 0x80306814u: goto label_80306814;
    case 0x80306818u: goto label_80306818;
    case 0x8030681Cu: goto label_8030681C;
    case 0x80306820u: goto label_80306820;
    case 0x80306824u: goto label_80306824;
    case 0x80306828u: goto label_80306828;
    case 0x8030682Cu: goto label_8030682C;
    case 0x80306830u: goto label_80306830;
    case 0x80306834u: goto label_80306834;
    case 0x80306838u: goto label_80306838;
    case 0x8030683Cu: goto label_8030683C;
    case 0x80306840u: goto label_80306840;
    case 0x80306844u: goto label_80306844;
    case 0x80306848u: goto label_80306848;
    case 0x8030684Cu: goto label_8030684C;
    case 0x80306850u: goto label_80306850;
    case 0x80306854u: goto label_80306854;
    case 0x80306858u: goto label_80306858;
    case 0x8030685Cu: goto label_8030685C;
    case 0x80306860u: goto label_80306860;
    case 0x80306864u: goto label_80306864;
    case 0x80306868u: goto label_80306868;
    case 0x8030686Cu: goto label_8030686C;
    case 0x80306870u: goto label_80306870;
    case 0x80306874u: goto label_80306874;
    case 0x80306878u: goto label_80306878;
    case 0x8030687Cu: goto label_8030687C;
    case 0x80306880u: goto label_80306880;
    case 0x80306884u: goto label_80306884;
    case 0x80306888u: goto label_80306888;
    case 0x8030688Cu: goto label_8030688C;
    case 0x80306890u: goto label_80306890;
    case 0x80306894u: goto label_80306894;
    case 0x80306898u: goto label_80306898;
    case 0x8030689Cu: goto label_8030689C;
    case 0x803068A0u: goto label_803068A0;
    case 0x803068A4u: goto label_803068A4;
    case 0x803068A8u: goto label_803068A8;
    case 0x803068ACu: goto label_803068AC;
    case 0x803068B0u: goto label_803068B0;
    case 0x803068B4u: goto label_803068B4;
    case 0x803068B8u: goto label_803068B8;
    case 0x803068BCu: goto label_803068BC;
    case 0x803068C0u: goto label_803068C0;
    case 0x803068C4u: goto label_803068C4;
    case 0x803068C8u: goto label_803068C8;
    case 0x803068CCu: goto label_803068CC;
    case 0x803068D0u: goto label_803068D0;
    case 0x803068D4u: goto label_803068D4;
    case 0x803068D8u: goto label_803068D8;
    case 0x803068DCu: goto label_803068DC;
    case 0x803068E0u: goto label_803068E0;
    case 0x803068E4u: goto label_803068E4;
    case 0x803068E8u: goto label_803068E8;
    case 0x803068ECu: goto label_803068EC;
    case 0x803068F0u: goto label_803068F0;
    case 0x803068F4u: goto label_803068F4;
    case 0x803068F8u: goto label_803068F8;
    case 0x803068FCu: goto label_803068FC;
    case 0x80306900u: goto label_80306900;
    case 0x80306904u: goto label_80306904;
    case 0x80306908u: goto label_80306908;
    case 0x8030690Cu: goto label_8030690C;
    case 0x80306910u: goto label_80306910;
    case 0x80306914u: goto label_80306914;
    case 0x80306918u: goto label_80306918;
    case 0x8030691Cu: goto label_8030691C;
    case 0x80306920u: goto label_80306920;
    case 0x80306924u: goto label_80306924;
    case 0x80306928u: goto label_80306928;
    case 0x8030692Cu: goto label_8030692C;
    case 0x80306930u: goto label_80306930;
    case 0x80306934u: goto label_80306934;
    case 0x80306938u: goto label_80306938;
    case 0x8030693Cu: goto label_8030693C;
    case 0x80306940u: goto label_80306940;
    case 0x80306944u: goto label_80306944;
    case 0x80306948u: goto label_80306948;
    case 0x8030694Cu: goto label_8030694C;
    case 0x80306950u: goto label_80306950;
    case 0x80306954u: goto label_80306954;
    case 0x80306958u: goto label_80306958;
    case 0x8030695Cu: goto label_8030695C;
    case 0x80306960u: goto label_80306960;
    case 0x80306964u: goto label_80306964;
    case 0x80306968u: goto label_80306968;
    case 0x8030696Cu: goto label_8030696C;
    case 0x80306970u: goto label_80306970;
    case 0x80306974u: goto label_80306974;
    case 0x80306978u: goto label_80306978;
    case 0x8030697Cu: goto label_8030697C;
    case 0x80306980u: goto label_80306980;
    case 0x80306984u: goto label_80306984;
    case 0x80306988u: goto label_80306988;
    case 0x8030698Cu: goto label_8030698C;
    case 0x80306990u: goto label_80306990;
    case 0x80306994u: goto label_80306994;
    case 0x80306998u: goto label_80306998;
    case 0x8030699Cu: goto label_8030699C;
    case 0x803069A0u: goto label_803069A0;
    case 0x803069A4u: goto label_803069A4;
    case 0x803069A8u: goto label_803069A8;
    case 0x803069ACu: goto label_803069AC;
    case 0x803069B0u: goto label_803069B0;
    case 0x803069B4u: goto label_803069B4;
    case 0x803069B8u: goto label_803069B8;
    case 0x803069BCu: goto label_803069BC;
    case 0x803069C0u: goto label_803069C0;
    case 0x803069C4u: goto label_803069C4;
    case 0x803069C8u: goto label_803069C8;
    case 0x803069CCu: goto label_803069CC;
    case 0x803069D0u: goto label_803069D0;
    case 0x803069D4u: goto label_803069D4;
    case 0x803069D8u: goto label_803069D8;
    case 0x803069DCu: goto label_803069DC;
    case 0x803069E0u: goto label_803069E0;
    case 0x803069E4u: goto label_803069E4;
    case 0x803069E8u: goto label_803069E8;
    case 0x803069ECu: goto label_803069EC;
    case 0x803069F0u: goto label_803069F0;
    case 0x803069F4u: goto label_803069F4;
    case 0x803069F8u: goto label_803069F8;
    case 0x803069FCu: goto label_803069FC;
    case 0x80306A00u: goto label_80306A00;
    case 0x80306A04u: goto label_80306A04;
    case 0x80306A08u: goto label_80306A08;
    case 0x80306A0Cu: goto label_80306A0C;
    case 0x80306A10u: goto label_80306A10;
    case 0x80306A14u: goto label_80306A14;
    case 0x80306A18u: goto label_80306A18;
    case 0x80306A1Cu: goto label_80306A1C;
    case 0x80306A20u: goto label_80306A20;
    case 0x80306A24u: goto label_80306A24;
    case 0x80306A28u: goto label_80306A28;
    case 0x80306A2Cu: goto label_80306A2C;
    case 0x80306A30u: goto label_80306A30;
    case 0x80306A34u: goto label_80306A34;
    case 0x80306A38u: goto label_80306A38;
    case 0x80306A3Cu: goto label_80306A3C;
    case 0x80306A40u: goto label_80306A40;
    case 0x80306A44u: goto label_80306A44;
    case 0x80306A48u: goto label_80306A48;
    case 0x80306A4Cu: goto label_80306A4C;
    case 0x80306A50u: goto label_80306A50;
    case 0x80306A54u: goto label_80306A54;
    case 0x80306A58u: goto label_80306A58;
    case 0x80306A5Cu: goto label_80306A5C;
    case 0x80306A60u: goto label_80306A60;
    case 0x80306A64u: goto label_80306A64;
    case 0x80306A68u: goto label_80306A68;
    case 0x80306A6Cu: goto label_80306A6C;
    case 0x80306A70u: goto label_80306A70;
    case 0x80306A74u: goto label_80306A74;
    case 0x80306A78u: goto label_80306A78;
    case 0x80306A7Cu: goto label_80306A7C;
    case 0x80306A80u: goto label_80306A80;
    case 0x80306A84u: goto label_80306A84;
    case 0x80306A88u: goto label_80306A88;
    case 0x80306A8Cu: goto label_80306A8C;
    case 0x80306A90u: goto label_80306A90;
    case 0x80306A94u: goto label_80306A94;
    case 0x80306A98u: goto label_80306A98;
    case 0x80306A9Cu: goto label_80306A9C;
    case 0x80306AA0u: goto label_80306AA0;
    case 0x80306AA4u: goto label_80306AA4;
    case 0x80306AA8u: goto label_80306AA8;
    case 0x80306AACu: goto label_80306AAC;
    case 0x80306AB0u: goto label_80306AB0;
    case 0x80306AB4u: goto label_80306AB4;
    case 0x80306AB8u: goto label_80306AB8;
    case 0x80306ABCu: goto label_80306ABC;
    case 0x80306AC0u: goto label_80306AC0;
    case 0x80306AC4u: goto label_80306AC4;
    case 0x80306AC8u: goto label_80306AC8;
    case 0x80306ACCu: goto label_80306ACC;
    case 0x80306AD0u: goto label_80306AD0;
    case 0x80306AD4u: goto label_80306AD4;
    case 0x80306AD8u: goto label_80306AD8;
    case 0x80306ADCu: goto label_80306ADC;
    case 0x80306AE0u: goto label_80306AE0;
    case 0x80306AE4u: goto label_80306AE4;
    case 0x80306AE8u: goto label_80306AE8;
    case 0x80306AECu: goto label_80306AEC;
    case 0x80306AF0u: goto label_80306AF0;
    case 0x80306AF4u: goto label_80306AF4;
    case 0x80306AF8u: goto label_80306AF8;
    case 0x80306AFCu: goto label_80306AFC;
    case 0x80306B00u: goto label_80306B00;
    case 0x80306B04u: goto label_80306B04;
    case 0x80306B08u: goto label_80306B08;
    case 0x80306B0Cu: goto label_80306B0C;
    case 0x80306B10u: goto label_80306B10;
    case 0x80306B14u: goto label_80306B14;
    case 0x80306B18u: goto label_80306B18;
    case 0x80306B1Cu: goto label_80306B1C;
    case 0x80306B20u: goto label_80306B20;
    case 0x80306B24u: goto label_80306B24;
    case 0x80306B28u: goto label_80306B28;
    case 0x80306B2Cu: goto label_80306B2C;
    case 0x80306B30u: goto label_80306B30;
    case 0x80306B34u: goto label_80306B34;
    case 0x80306B38u: goto label_80306B38;
    case 0x80306B3Cu: goto label_80306B3C;
    case 0x80306B40u: goto label_80306B40;
    case 0x80306B44u: goto label_80306B44;
    case 0x80306B48u: goto label_80306B48;
    case 0x80306B4Cu: goto label_80306B4C;
    case 0x80306B50u: goto label_80306B50;
    case 0x80306B54u: goto label_80306B54;
    case 0x80306B58u: goto label_80306B58;
    case 0x80306B5Cu: goto label_80306B5C;
    case 0x80306B60u: goto label_80306B60;
    case 0x80306B64u: goto label_80306B64;
    case 0x80306B68u: goto label_80306B68;
    case 0x80306B6Cu: goto label_80306B6C;
    case 0x80306B70u: goto label_80306B70;
    case 0x80306B74u: goto label_80306B74;
    case 0x80306B78u: goto label_80306B78;
    case 0x80306B7Cu: goto label_80306B7C;
    case 0x80306B80u: goto label_80306B80;
    case 0x80306B84u: goto label_80306B84;
    case 0x80306B88u: goto label_80306B88;
    case 0x80306B8Cu: goto label_80306B8C;
    case 0x80306B90u: goto label_80306B90;
    case 0x80306B94u: goto label_80306B94;
    case 0x80306B98u: goto label_80306B98;
    case 0x80306B9Cu: goto label_80306B9C;
    case 0x80306BA0u: goto label_80306BA0;
    case 0x80306BA4u: goto label_80306BA4;
    case 0x80306BA8u: goto label_80306BA8;
    case 0x80306BACu: goto label_80306BAC;
    case 0x80306BB0u: goto label_80306BB0;
    case 0x80306BB4u: goto label_80306BB4;
    case 0x80306BB8u: goto label_80306BB8;
    case 0x80306BBCu: goto label_80306BBC;
    case 0x80306BC0u: goto label_80306BC0;
    case 0x80306BC4u: goto label_80306BC4;
    case 0x80306BC8u: goto label_80306BC8;
    case 0x80306BCCu: goto label_80306BCC;
    case 0x80306BD0u: goto label_80306BD0;
    case 0x80306BD4u: goto label_80306BD4;
    case 0x80306BD8u: goto label_80306BD8;
    case 0x80306BDCu: goto label_80306BDC;
    case 0x80306BE0u: goto label_80306BE0;
    case 0x80306BE4u: goto label_80306BE4;
    case 0x80306BE8u: goto label_80306BE8;
    case 0x80306BECu: goto label_80306BEC;
    case 0x80306BF0u: goto label_80306BF0;
    case 0x80306BF4u: goto label_80306BF4;
    case 0x80306BF8u: goto label_80306BF8;
    case 0x80306BFCu: goto label_80306BFC;
    case 0x80306C00u: goto label_80306C00;
    case 0x80306C04u: goto label_80306C04;
    case 0x80306C08u: goto label_80306C08;
    case 0x80306C0Cu: goto label_80306C0C;
    case 0x80306C10u: goto label_80306C10;
    case 0x80306C14u: goto label_80306C14;
    case 0x80306C18u: goto label_80306C18;
    case 0x80306C1Cu: goto label_80306C1C;
    case 0x80306C20u: goto label_80306C20;
    case 0x80306C24u: goto label_80306C24;
    case 0x80306C28u: goto label_80306C28;
    case 0x80306C2Cu: goto label_80306C2C;
    case 0x80306C30u: goto label_80306C30;
    case 0x80306C34u: goto label_80306C34;
    case 0x80306C38u: goto label_80306C38;
    case 0x80306C3Cu: goto label_80306C3C;
    case 0x80306C40u: goto label_80306C40;
    case 0x80306C44u: goto label_80306C44;
    case 0x80306C48u: goto label_80306C48;
    case 0x80306C4Cu: goto label_80306C4C;
    case 0x80306C50u: goto label_80306C50;
    case 0x80306C54u: goto label_80306C54;
    case 0x80306C58u: goto label_80306C58;
    case 0x80306C5Cu: goto label_80306C5C;
    case 0x80306C60u: goto label_80306C60;
    case 0x80306C64u: goto label_80306C64;
    case 0x80306C68u: goto label_80306C68;
    case 0x80306C6Cu: goto label_80306C6C;
    case 0x80306C70u: goto label_80306C70;
    case 0x80306C74u: goto label_80306C74;
    case 0x80306C78u: goto label_80306C78;
    case 0x80306C7Cu: goto label_80306C7C;
    case 0x80306C80u: goto label_80306C80;
    case 0x80306C84u: goto label_80306C84;
    case 0x80306C88u: goto label_80306C88;
    case 0x80306C8Cu: goto label_80306C8C;
    case 0x80306C90u: goto label_80306C90;
    case 0x80306C94u: goto label_80306C94;
    case 0x80306C98u: goto label_80306C98;
    case 0x80306C9Cu: goto label_80306C9C;
    case 0x80306CA0u: goto label_80306CA0;
    case 0x80306CA4u: goto label_80306CA4;
    case 0x80306CA8u: goto label_80306CA8;
    case 0x80306CACu: goto label_80306CAC;
    case 0x80306CB0u: goto label_80306CB0;
    case 0x80306CB4u: goto label_80306CB4;
    case 0x80306CB8u: goto label_80306CB8;
    case 0x80306CBCu: goto label_80306CBC;
    case 0x80306CC0u: goto label_80306CC0;
    case 0x80306CC4u: goto label_80306CC4;
    case 0x80306CC8u: goto label_80306CC8;
    case 0x80306CCCu: goto label_80306CCC;
    case 0x80306CD0u: goto label_80306CD0;
    case 0x80306CD4u: goto label_80306CD4;
    case 0x80306CD8u: goto label_80306CD8;
    case 0x80306CDCu: goto label_80306CDC;
    case 0x80306CE0u: goto label_80306CE0;
    case 0x80306CE4u: goto label_80306CE4;
    case 0x80306CE8u: goto label_80306CE8;
    case 0x80306CECu: goto label_80306CEC;
    case 0x80306CF0u: goto label_80306CF0;
    case 0x80306CF4u: goto label_80306CF4;
    case 0x80306CF8u: goto label_80306CF8;
    case 0x80306CFCu: goto label_80306CFC;
    case 0x80306D00u: goto label_80306D00;
    case 0x80306D04u: goto label_80306D04;
    case 0x80306D08u: goto label_80306D08;
    case 0x80306D0Cu: goto label_80306D0C;
    case 0x80306D10u: goto label_80306D10;
    case 0x80306D14u: goto label_80306D14;
    case 0x80306D18u: goto label_80306D18;
    case 0x80306D1Cu: goto label_80306D1C;
    case 0x80306D20u: goto label_80306D20;
    case 0x80306D24u: goto label_80306D24;
    case 0x80306D28u: goto label_80306D28;
    case 0x80306D2Cu: goto label_80306D2C;
    case 0x80306D30u: goto label_80306D30;
    case 0x80306D34u: goto label_80306D34;
    case 0x80306D38u: goto label_80306D38;
    case 0x80306D3Cu: goto label_80306D3C;
    case 0x80306D40u: goto label_80306D40;
    case 0x80306D44u: goto label_80306D44;
    case 0x80306D48u: goto label_80306D48;
    case 0x80306D4Cu: goto label_80306D4C;
    case 0x80306D50u: goto label_80306D50;
    case 0x80306D54u: goto label_80306D54;
    case 0x80306D58u: goto label_80306D58;
    case 0x80306D5Cu: goto label_80306D5C;
    case 0x80306D60u: goto label_80306D60;
    case 0x80306D64u: goto label_80306D64;
    case 0x80306D68u: goto label_80306D68;
    case 0x80306D6Cu: goto label_80306D6C;
    case 0x80306D70u: goto label_80306D70;
    case 0x80306D74u: goto label_80306D74;
    case 0x80306D78u: goto label_80306D78;
    case 0x80306D7Cu: goto label_80306D7C;
    case 0x80306D80u: goto label_80306D80;
    case 0x80306D84u: goto label_80306D84;
    case 0x80306D88u: goto label_80306D88;
    case 0x80306D8Cu: goto label_80306D8C;
    case 0x80306D90u: goto label_80306D90;
    case 0x80306D94u: goto label_80306D94;
    case 0x80306D98u: goto label_80306D98;
    case 0x80306D9Cu: goto label_80306D9C;
    case 0x80306DA0u: goto label_80306DA0;
    case 0x80306DA4u: goto label_80306DA4;
    case 0x80306DA8u: goto label_80306DA8;
    case 0x80306DACu: goto label_80306DAC;
    case 0x80306DB0u: goto label_80306DB0;
    case 0x80306DB4u: goto label_80306DB4;
    case 0x80306DB8u: goto label_80306DB8;
    case 0x80306DBCu: goto label_80306DBC;
    case 0x80306DC0u: goto label_80306DC0;
    case 0x80306DC4u: goto label_80306DC4;
    case 0x80306DC8u: goto label_80306DC8;
    case 0x80306DCCu: goto label_80306DCC;
    case 0x80306DD0u: goto label_80306DD0;
    case 0x80306DD4u: goto label_80306DD4;
    case 0x80306DD8u: goto label_80306DD8;
    case 0x80306DDCu: goto label_80306DDC;
    case 0x80306DE0u: goto label_80306DE0;
    case 0x80306DE4u: goto label_80306DE4;
    case 0x80306DE8u: goto label_80306DE8;
    case 0x80306DECu: goto label_80306DEC;
    case 0x80306DF0u: goto label_80306DF0;
    case 0x80306DF4u: goto label_80306DF4;
    case 0x80306DF8u: goto label_80306DF8;
    case 0x80306DFCu: goto label_80306DFC;
    case 0x80306E00u: goto label_80306E00;
    case 0x80306E04u: goto label_80306E04;
    case 0x80306E08u: goto label_80306E08;
    case 0x80306E0Cu: goto label_80306E0C;
    case 0x80306E10u: goto label_80306E10;
    case 0x80306E14u: goto label_80306E14;
    case 0x80306E18u: goto label_80306E18;
    case 0x80306E1Cu: goto label_80306E1C;
    case 0x80306E20u: goto label_80306E20;
    case 0x80306E24u: goto label_80306E24;
    case 0x80306E28u: goto label_80306E28;
    case 0x80306E2Cu: goto label_80306E2C;
    case 0x80306E30u: goto label_80306E30;
    case 0x80306E34u: goto label_80306E34;
    case 0x80306E38u: goto label_80306E38;
    case 0x80306E3Cu: goto label_80306E3C;
    case 0x80306E40u: goto label_80306E40;
    case 0x80306E44u: goto label_80306E44;
    case 0x80306E48u: goto label_80306E48;
    case 0x80306E4Cu: goto label_80306E4C;
    case 0x80306E50u: goto label_80306E50;
    case 0x80306E54u: goto label_80306E54;
    case 0x80306E58u: goto label_80306E58;
    case 0x80306E5Cu: goto label_80306E5C;
    case 0x80306E60u: goto label_80306E60;
    case 0x80306E64u: goto label_80306E64;
    case 0x80306E68u: goto label_80306E68;
    case 0x80306E6Cu: goto label_80306E6C;
    case 0x80306E70u: goto label_80306E70;
    case 0x80306E74u: goto label_80306E74;
    case 0x80306E78u: goto label_80306E78;
    case 0x80306E7Cu: goto label_80306E7C;
    case 0x80306E80u: goto label_80306E80;
    case 0x80306E84u: goto label_80306E84;
    case 0x80306E88u: goto label_80306E88;
    case 0x80306E8Cu: goto label_80306E8C;
    case 0x80306E90u: goto label_80306E90;
    case 0x80306E94u: goto label_80306E94;
    case 0x80306E98u: goto label_80306E98;
    case 0x80306E9Cu: goto label_80306E9C;
    case 0x80306EA0u: goto label_80306EA0;
    case 0x80306EA4u: goto label_80306EA4;
    case 0x80306EA8u: goto label_80306EA8;
    case 0x80306EACu: goto label_80306EAC;
    case 0x80306EB0u: goto label_80306EB0;
    case 0x80306EB4u: goto label_80306EB4;
    case 0x80306EB8u: goto label_80306EB8;
    case 0x80306EBCu: goto label_80306EBC;
    case 0x80306EC0u: goto label_80306EC0;
    case 0x80306EC4u: goto label_80306EC4;
    case 0x80306EC8u: goto label_80306EC8;
    case 0x80306ECCu: goto label_80306ECC;
    case 0x80306ED0u: goto label_80306ED0;
    case 0x80306ED4u: goto label_80306ED4;
    case 0x80306ED8u: goto label_80306ED8;
    case 0x80306EDCu: goto label_80306EDC;
    case 0x80306EE0u: goto label_80306EE0;
    case 0x80306EE4u: goto label_80306EE4;
    case 0x80306EE8u: goto label_80306EE8;
    case 0x80306EECu: goto label_80306EEC;
    case 0x80306EF0u: goto label_80306EF0;
    case 0x80306EF4u: goto label_80306EF4;
    case 0x80306EF8u: goto label_80306EF8;
    case 0x80306EFCu: goto label_80306EFC;
    case 0x80306F00u: goto label_80306F00;
    case 0x80306F04u: goto label_80306F04;
    case 0x80306F08u: goto label_80306F08;
    case 0x80306F0Cu: goto label_80306F0C;
    case 0x80306F10u: goto label_80306F10;
    case 0x80306F14u: goto label_80306F14;
    case 0x80306F18u: goto label_80306F18;
    case 0x80306F1Cu: goto label_80306F1C;
    case 0x80306F20u: goto label_80306F20;
    case 0x80306F24u: goto label_80306F24;
    case 0x80306F28u: goto label_80306F28;
    case 0x80306F2Cu: goto label_80306F2C;
    case 0x80306F30u: goto label_80306F30;
    case 0x80306F34u: goto label_80306F34;
    case 0x80306F38u: goto label_80306F38;
    case 0x80306F3Cu: goto label_80306F3C;
    case 0x80306F40u: goto label_80306F40;
    case 0x80306F44u: goto label_80306F44;
    case 0x80306F48u: goto label_80306F48;
    case 0x80306F4Cu: goto label_80306F4C;
    case 0x80306F50u: goto label_80306F50;
    case 0x80306F54u: goto label_80306F54;
    case 0x80306F58u: goto label_80306F58;
    case 0x80306F5Cu: goto label_80306F5C;
    case 0x80306F60u: goto label_80306F60;
    case 0x80306F64u: goto label_80306F64;
    case 0x80306F68u: goto label_80306F68;
    case 0x80306F6Cu: goto label_80306F6C;
    case 0x80306F70u: goto label_80306F70;
    case 0x80306F74u: goto label_80306F74;
    case 0x80306F78u: goto label_80306F78;
    case 0x80306F7Cu: goto label_80306F7C;
    case 0x80306F80u: goto label_80306F80;
    case 0x80306F84u: goto label_80306F84;
    case 0x80306F88u: goto label_80306F88;
    case 0x80306F8Cu: goto label_80306F8C;
    case 0x80306F90u: goto label_80306F90;
    case 0x80306F94u: goto label_80306F94;
    case 0x80306F98u: goto label_80306F98;
    case 0x80306F9Cu: goto label_80306F9C;
    case 0x80306FA0u: goto label_80306FA0;
    case 0x80306FA4u: goto label_80306FA4;
    case 0x80306FA8u: goto label_80306FA8;
    case 0x80306FACu: goto label_80306FAC;
    case 0x80306FB0u: goto label_80306FB0;
    case 0x80306FB4u: goto label_80306FB4;
    case 0x80306FB8u: goto label_80306FB8;
    case 0x80306FBCu: goto label_80306FBC;
    case 0x80306FC0u: goto label_80306FC0;
    case 0x80306FC4u: goto label_80306FC4;
    case 0x80306FC8u: goto label_80306FC8;
    case 0x80306FCCu: goto label_80306FCC;
    case 0x80306FD0u: goto label_80306FD0;
    case 0x80306FD4u: goto label_80306FD4;
    case 0x80306FD8u: goto label_80306FD8;
    case 0x80306FDCu: goto label_80306FDC;
    case 0x80306FE0u: goto label_80306FE0;
    case 0x80306FE4u: goto label_80306FE4;
    case 0x80306FE8u: goto label_80306FE8;
    case 0x80306FECu: goto label_80306FEC;
    case 0x80306FF0u: goto label_80306FF0;
    case 0x80306FF4u: goto label_80306FF4;
    case 0x80306FF8u: goto label_80306FF8;
    case 0x80306FFCu: goto label_80306FFC;
    case 0x80307000u: goto label_80307000;
    case 0x80307004u: goto label_80307004;
    case 0x80307008u: goto label_80307008;
    case 0x8030700Cu: goto label_8030700C;
    case 0x80307010u: goto label_80307010;
    case 0x80307014u: goto label_80307014;
    case 0x80307018u: goto label_80307018;
    case 0x8030701Cu: goto label_8030701C;
    case 0x80307020u: goto label_80307020;
    case 0x80307024u: goto label_80307024;
    case 0x80307028u: goto label_80307028;
    case 0x8030702Cu: goto label_8030702C;
    case 0x80307030u: goto label_80307030;
    case 0x80307034u: goto label_80307034;
    case 0x80307038u: goto label_80307038;
    case 0x8030703Cu: goto label_8030703C;
    case 0x80307040u: goto label_80307040;
    case 0x80307044u: goto label_80307044;
    case 0x80307048u: goto label_80307048;
    case 0x8030704Cu: goto label_8030704C;
    case 0x80307050u: goto label_80307050;
    case 0x80307054u: goto label_80307054;
    case 0x80307058u: goto label_80307058;
    case 0x8030705Cu: goto label_8030705C;
    case 0x80307060u: goto label_80307060;
    case 0x80307064u: goto label_80307064;
    case 0x80307068u: goto label_80307068;
    case 0x8030706Cu: goto label_8030706C;
    case 0x80307070u: goto label_80307070;
    case 0x80307074u: goto label_80307074;
    case 0x80307078u: goto label_80307078;
    case 0x8030707Cu: goto label_8030707C;
    case 0x80307080u: goto label_80307080;
    case 0x80307084u: goto label_80307084;
    case 0x80307088u: goto label_80307088;
    case 0x8030708Cu: goto label_8030708C;
    case 0x80307090u: goto label_80307090;
    case 0x80307094u: goto label_80307094;
    case 0x80307098u: goto label_80307098;
    case 0x8030709Cu: goto label_8030709C;
    case 0x803070A0u: goto label_803070A0;
    case 0x803070A4u: goto label_803070A4;
    case 0x803070A8u: goto label_803070A8;
    case 0x803070ACu: goto label_803070AC;
    case 0x803070B0u: goto label_803070B0;
    case 0x803070B4u: goto label_803070B4;
    case 0x803070B8u: goto label_803070B8;
    case 0x803070BCu: goto label_803070BC;
    case 0x803070C0u: goto label_803070C0;
    case 0x803070C4u: goto label_803070C4;
    case 0x803070C8u: goto label_803070C8;
    case 0x803070CCu: goto label_803070CC;
    case 0x803070D0u: goto label_803070D0;
    case 0x803070D4u: goto label_803070D4;
    case 0x803070D8u: goto label_803070D8;
    case 0x803070DCu: goto label_803070DC;
    case 0x803070E0u: goto label_803070E0;
    case 0x803070E4u: goto label_803070E4;
    case 0x803070E8u: goto label_803070E8;
    case 0x803070ECu: goto label_803070EC;
    case 0x803070F0u: goto label_803070F0;
    case 0x803070F4u: goto label_803070F4;
    case 0x803070F8u: goto label_803070F8;
    case 0x803070FCu: goto label_803070FC;
    case 0x80307100u: goto label_80307100;
    case 0x80307104u: goto label_80307104;
    case 0x80307108u: goto label_80307108;
    case 0x8030710Cu: goto label_8030710C;
    case 0x80307110u: goto label_80307110;
    case 0x80307114u: goto label_80307114;
    case 0x80307118u: goto label_80307118;
    case 0x8030711Cu: goto label_8030711C;
    case 0x80307120u: goto label_80307120;
    case 0x80307124u: goto label_80307124;
    case 0x80307128u: goto label_80307128;
    case 0x8030712Cu: goto label_8030712C;
    case 0x80307130u: goto label_80307130;
    case 0x80307134u: goto label_80307134;
    case 0x80307138u: goto label_80307138;
    case 0x8030713Cu: goto label_8030713C;
    case 0x80307140u: goto label_80307140;
    case 0x80307144u: goto label_80307144;
    case 0x80307148u: goto label_80307148;
    case 0x8030714Cu: goto label_8030714C;
    case 0x80307150u: goto label_80307150;
    case 0x80307154u: goto label_80307154;
    case 0x80307158u: goto label_80307158;
    case 0x8030715Cu: goto label_8030715C;
    case 0x80307160u: goto label_80307160;
    case 0x80307164u: goto label_80307164;
    case 0x80307168u: goto label_80307168;
    case 0x8030716Cu: goto label_8030716C;
    case 0x80307170u: goto label_80307170;
    case 0x80307174u: goto label_80307174;
    case 0x80307178u: goto label_80307178;
    case 0x8030717Cu: goto label_8030717C;
    case 0x80307180u: goto label_80307180;
    case 0x80307184u: goto label_80307184;
    case 0x80307188u: goto label_80307188;
    case 0x8030718Cu: goto label_8030718C;
    case 0x80307190u: goto label_80307190;
    case 0x80307194u: goto label_80307194;
    case 0x80307198u: goto label_80307198;
    case 0x8030719Cu: goto label_8030719C;
    case 0x803071A0u: goto label_803071A0;
    case 0x803071A4u: goto label_803071A4;
    case 0x803071A8u: goto label_803071A8;
    case 0x803071ACu: goto label_803071AC;
    case 0x803071B0u: goto label_803071B0;
    case 0x803071B4u: goto label_803071B4;
    case 0x803071B8u: goto label_803071B8;
    case 0x803071BCu: goto label_803071BC;
    default: return;
    }
label_803031C0:
    ctx->pc = 0x803031C0u;
    ctx->downcount -= 1;
    // 803031C0: bl      0x8026F6AC
    {
            ctx->lr = 0x803031C4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803031C4:
    ctx->pc = 0x803031C4u;
    ctx->downcount -= 1;
    // 803031C4: bl      0x8025EC94
    {
            ctx->lr = 0x803031C8u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_803031C8:
    ctx->pc = 0x803031C8u;
    ctx->downcount -= 9;
    // 803031C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803031CC:
    ctx->pc = 0x803031CCu;
    // 803031CC: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803031D0:
    ctx->pc = 0x803031D0u;
    // 803031D0: stb     r0, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803031D4:
    ctx->pc = 0x803031D4u;
    // 803031D4: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803031D8:
    ctx->pc = 0x803031D8u;
    // 803031D8: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803031DC:
    ctx->pc = 0x803031DCu;
    // 803031DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803031E0:
    ctx->pc = 0x803031E0u;
    // 803031E0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_803031E4:
    ctx->pc = 0x803031E4u;
    // 803031E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803031E8:
    ctx->pc = 0x803031E8u;
    ctx->downcount -= 8;
    // 803031E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803031EC:
    ctx->pc = 0x803031ECu;
    // 803031EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803031F0:
    ctx->pc = 0x803031F0u;
    // 803031F0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803031F4:
    ctx->pc = 0x803031F4u;
    // 803031F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803031F8:
    ctx->pc = 0x803031F8u;
    // 803031F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803031FC:
    ctx->pc = 0x803031FCu;
    // 803031FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80303200:
    ctx->pc = 0x80303200u;
    // 80303200: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303204:
    ctx->pc = 0x80303204u;
    // 80303204: bl      0x803715C0
    {
            ctx->lr = 0x80303208u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_80303208:
    ctx->pc = 0x80303208u;
    ctx->downcount -= 15;
    // 80303208: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_8030320C:
    ctx->pc = 0x8030320Cu;
    // 8030320C: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80303210:
    ctx->pc = 0x80303210u;
    // 80303210: addi    r5, r5, 26280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26280);

label_80303214:
    ctx->pc = 0x80303214u;
    // 80303214: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80303218:
    ctx->pc = 0x80303218u;
    // 80303218: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_8030321C:
    ctx->pc = 0x8030321Cu;
    // 8030321C: addi    r3, r3, 17000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(17000);

label_80303220:
    ctx->pc = 0x80303220u;
    // 80303220: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_80303224:
    ctx->pc = 0x80303224u;
    // 80303224: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_80303228:
    ctx->pc = 0x80303228u;
    // 80303228: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030322C:
    ctx->pc = 0x8030322Cu;
    // 8030322C: addi    r4, r3, 169
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(169);

label_80303230:
    ctx->pc = 0x80303230u;
    // 80303230: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_80303234:
    ctx->pc = 0x80303234u;
    // 80303234: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80303238:
    ctx->pc = 0x80303238u;
    // 80303238: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030323C:
    ctx->pc = 0x8030323Cu;
    // 8030323C: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303240:
    ctx->pc = 0x80303240u;
    // 80303240: bl      0x8000E7F4
    {
            ctx->lr = 0x80303244u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80303244:
    ctx->pc = 0x80303244u;
    ctx->downcount -= 2;
    // 80303244: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80303248:
    ctx->pc = 0x80303248u;
    // 80303248: bl      0x80270188
    {
            ctx->lr = 0x8030324Cu;
            ctx->pc = 0x80270188u;
            return;
    }

label_8030324C:
    ctx->pc = 0x8030324Cu;
    ctx->downcount -= 16;
    // 8030324C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303250:
    ctx->pc = 0x80303250u;
    // 80303250: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_80303254:
    ctx->pc = 0x80303254u;
    // 80303254: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80303258:
    ctx->pc = 0x80303258u;
    // 80303258: stw     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030325C:
    ctx->pc = 0x8030325Cu;
    // 8030325C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303260:
    ctx->pc = 0x80303260u;
    // 80303260: stw     r5, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80303264:
    ctx->pc = 0x80303264u;
    // 80303264: stw     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303268:
    ctx->pc = 0x80303268u;
    // 80303268: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030326C:
    ctx->pc = 0x8030326Cu;
    // 8030326C: stb     r5, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80303270:
    ctx->pc = 0x80303270u;
    // 80303270: stb     r5, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80303274:
    ctx->pc = 0x80303274u;
    // 80303274: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303278:
    ctx->pc = 0x80303278u;
    // 80303278: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030327C:
    ctx->pc = 0x8030327Cu;
    // 8030327C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303280:
    ctx->pc = 0x80303280u;
    // 80303280: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303284:
    ctx->pc = 0x80303284u;
    // 80303284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303288:
    ctx->pc = 0x80303288u;
    ctx->downcount -= 1;
    // 80303288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030328C:
    ctx->pc = 0x8030328Cu;
    ctx->downcount -= 18;
    // 8030328C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303290:
    ctx->pc = 0x80303290u;
    // 80303290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303294:
    // 80303294: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303298:
    ctx->pc = 0x80303298u;
    // 80303298: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030329C:
    ctx->pc = 0x8030329Cu;
    // 8030329C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803032A0:
    // 803032A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803032A4:
    // 803032A4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803032A8:
    // 803032A8: bc    12, 2, 0x803032DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803032DC;
        }
    }

label_803032AC:
    ctx->downcount -= 1;
    // 803032AC: bc    12, 2, 0x803032CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803032CC;
        }
    }

label_803032B0:
    ctx->downcount -= 1;
    // 803032B0: bc    12, 2, 0x803032CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803032CC;
        }
    }

label_803032B4:
    ctx->downcount -= 3;
    // 803032B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803032B8:
    // 803032B8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803032BC:
    // 803032BC: bl      0x801F5C24
    {
            ctx->lr = 0x803032C0u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_803032C0:
    ctx->downcount -= 3;
    // 803032C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803032C4:
    // 803032C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803032C8:
    // 803032C8: bl      0x801F9C70
    {
            ctx->lr = 0x803032CCu;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_803032CC:
    ctx->downcount -= 2;
    // 803032CC: cmpwi   r31, 0
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

label_803032D0:
    // 803032D0: bc    4, 1, 0x803032DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803032DC;
        }
    }

label_803032D4:
    ctx->downcount -= 2;
    // 803032D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803032D8:
    // 803032D8: bl      0x801C1C90
    {
            ctx->lr = 0x803032DCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803032DC:
    ctx->downcount -= 17;
    // 803032DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803032E0:
    ctx->pc = 0x803032E0u;
    // 803032E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803032E4:
    ctx->pc = 0x803032E4u;
    // 803032E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803032E8:
    ctx->pc = 0x803032E8u;
    // 803032E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803032EC:
    // 803032EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803032F0:
    ctx->pc = 0x803032F0u;
    // 803032F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803032F4:
    ctx->downcount -= 2;
    // 803032F4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803032F8:
    // 803032F8: b       0x8030328C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030328Cu;
                return;
            }
            goto label_8030328C;
    }

label_803032FC:
    ctx->downcount -= 2;
    // 803032FC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80303300:
    // 80303300: b       0x80302E2C
    {
            ctx->pc = 0x80302E2Cu;
            return;
    }

label_80303304:
    ctx->downcount -= 2;
    // 80303304: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80303308:
    // 80303308: b       0x8030328C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030328Cu;
                return;
            }
            goto label_8030328C;
    }

label_8030330C:
    ctx->pc = 0x8030330Cu;
    ctx->downcount -= 21;
    // 8030330C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303310:
    ctx->pc = 0x80303310u;
    // 80303310: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303314:
    ctx->pc = 0x80303314u;
    // 80303314: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303318:
    ctx->pc = 0x80303318u;
    // 80303318: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030331C:
    ctx->pc = 0x8030331Cu;
    // 8030331C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303320:
    ctx->pc = 0x80303320u;
    // 80303320: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303324:
    ctx->pc = 0x80303324u;
    // 80303324: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303328:
    ctx->pc = 0x80303328u;
    // 80303328: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030332C:
    ctx->pc = 0x8030332Cu;
    // 8030332C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303330:
    ctx->pc = 0x80303330u;
    // 80303330: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303334u;
            ctx->pc = target;
            return;
        }
    }

label_80303334:
    ctx->pc = 0x80303334u;
    ctx->downcount -= 2;
    // 80303334: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303338:
    ctx->pc = 0x80303338u;
    // 80303338: bc    12, 2, 0x803033A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803033A8;
        }
    }

label_8030333C:
    ctx->pc = 0x8030333Cu;
    ctx->downcount -= 6;
    // 8030333C: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303340:
    ctx->pc = 0x80303340u;
    // 80303340: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303344:
    ctx->pc = 0x80303344u;
    // 80303344: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303348:
    ctx->pc = 0x80303348u;
    // 80303348: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030334C:
    ctx->pc = 0x8030334Cu;
    // 8030334C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303350u;
            ctx->pc = target;
            return;
        }
    }

label_80303350:
    ctx->pc = 0x80303350u;
    ctx->downcount -= 2;
    // 80303350: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303354:
    ctx->pc = 0x80303354u;
    // 80303354: bc    12, 2, 0x803033A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803033A8;
        }
    }

label_80303358:
    ctx->pc = 0x80303358u;
    ctx->downcount -= 3;
    // 80303358: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030335C:
    ctx->pc = 0x8030335Cu;
    // 8030335C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303360:
    ctx->pc = 0x80303360u;
    // 80303360: b       0x80303378
    {
            goto label_80303378;
    }

label_80303364:
    ctx->downcount -= 3;
    // 80303364: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80303368:
    ctx->pc = 0x80303368u;
    // 80303368: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030336C:
    // 8030336C: bl      0x8036B2DC
    {
            ctx->lr = 0x80303370u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_80303370:
    ctx->downcount -= 2;
    // 80303370: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80303374:
    // 80303374: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80303378:
    ctx->pc = 0x80303378u;
    ctx->downcount -= 3;
    // 80303378: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030337C:
    // 8030337C: cmpw    r30, r0
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

label_80303380:
    // 80303380: bc    12, 0, 0x80303364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303364u;
                return;
            }
            goto label_80303364;
        }
    }

label_80303384:
    ctx->pc = 0x80303384u;
    ctx->downcount -= 2;
    // 80303384: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303388:
    ctx->pc = 0x80303388u;
    // 80303388: bl      0x8036E8D0
    {
            ctx->lr = 0x8030338Cu;
            ctx->pc = 0x8036E8D0u;
            return;
    }

label_8030338C:
    ctx->pc = 0x8030338Cu;
    ctx->downcount -= 2;
    // 8030338C: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303390:
    ctx->pc = 0x80303390u;
    // 80303390: bl      0x8026EEE8
    {
            ctx->lr = 0x80303394u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_80303394:
    ctx->pc = 0x80303394u;
    ctx->downcount -= 6;
    // 80303394: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303398:
    ctx->pc = 0x80303398u;
    // 80303398: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030339C:
    ctx->pc = 0x8030339Cu;
    // 8030339C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803033A0:
    ctx->pc = 0x803033A0u;
    // 803033A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803033A4:
    ctx->pc = 0x803033A4u;
    // 803033A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803033A8u;
            ctx->pc = target;
            return;
        }
    }

label_803033A8:
    ctx->pc = 0x803033A8u;
    ctx->downcount -= 6;
    // 803033A8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803033AC:
    ctx->pc = 0x803033ACu;
    // 803033AC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_803033B0:
    ctx->pc = 0x803033B0u;
    // 803033B0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803033B4:
    ctx->pc = 0x803033B4u;
    // 803033B4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803033B8:
    ctx->pc = 0x803033B8u;
    // 803033B8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803033BC:
    ctx->pc = 0x803033BCu;
    // 803033BC: bl      0x80370BD4
    {
            ctx->lr = 0x803033C0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803033C0:
    ctx->pc = 0x803033C0u;
    ctx->downcount -= 3;
    // 803033C0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803033C4:
    ctx->pc = 0x803033C4u;
    // 803033C4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803033C8:
    ctx->pc = 0x803033C8u;
    // 803033C8: bl      0x80263ABC
    {
            ctx->lr = 0x803033CCu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803033CC:
    ctx->pc = 0x803033CCu;
    ctx->downcount -= 16;
    // 803033CC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803033D0:
    ctx->pc = 0x803033D0u;
    // 803033D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803033D4:
    ctx->pc = 0x803033D4u;
    // 803033D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803033D8:
    ctx->pc = 0x803033D8u;
    // 803033D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803033DC:
    ctx->pc = 0x803033DCu;
    // 803033DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803033E0:
    ctx->pc = 0x803033E0u;
    ctx->downcount -= 11;
    // 803033E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803033E4:
    ctx->pc = 0x803033E4u;
    // 803033E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803033E8:
    ctx->pc = 0x803033E8u;
    // 803033E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803033EC:
    ctx->pc = 0x803033ECu;
    // 803033EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803033F0:
    ctx->pc = 0x803033F0u;
    // 803033F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803033F4:
    ctx->pc = 0x803033F4u;
    // 803033F4: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803033F8:
    ctx->pc = 0x803033F8u;
    // 803033F8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803033FC:
    ctx->pc = 0x803033FCu;
    // 803033FC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303400:
    ctx->pc = 0x80303400u;
    // 80303400: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303404:
    ctx->pc = 0x80303404u;
    // 80303404: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303408u;
            ctx->pc = target;
            return;
        }
    }

label_80303408:
    ctx->pc = 0x80303408u;
    ctx->downcount -= 6;
    // 80303408: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030340C:
    ctx->pc = 0x8030340Cu;
    // 8030340C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303410:
    ctx->pc = 0x80303410u;
    // 80303410: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303414:
    ctx->pc = 0x80303414u;
    // 80303414: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303418:
    ctx->pc = 0x80303418u;
    // 80303418: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030341Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030341C:
    ctx->pc = 0x8030341Cu;
    ctx->downcount -= 6;
    // 8030341C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303420:
    ctx->pc = 0x80303420u;
    // 80303420: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303424:
    ctx->pc = 0x80303424u;
    // 80303424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303428:
    ctx->pc = 0x80303428u;
    // 80303428: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030342C:
    ctx->pc = 0x8030342Cu;
    // 8030342C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303430:
    ctx->pc = 0x80303430u;
    ctx->downcount -= 19;
    // 80303430: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303434:
    ctx->pc = 0x80303434u;
    // 80303434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303438:
    ctx->pc = 0x80303438u;
    // 80303438: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030343C:
    ctx->pc = 0x8030343Cu;
    // 8030343C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303440:
    ctx->pc = 0x80303440u;
    // 80303440: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303444:
    ctx->pc = 0x80303444u;
    // 80303444: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303448:
    ctx->pc = 0x80303448u;
    // 80303448: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030344C:
    ctx->pc = 0x8030344Cu;
    // 8030344C: cmpwi   r0, 0
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

label_80303450:
    ctx->pc = 0x80303450u;
    // 80303450: bc    12, 2, 0x8030346C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030346C;
        }
    }

label_80303454:
    ctx->pc = 0x80303454u;
    ctx->downcount -= 3;
    // 80303454: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303458:
    ctx->pc = 0x80303458u;
    // 80303458: cmpwi   r0, 0
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

label_8030345C:
    ctx->pc = 0x8030345Cu;
    // 8030345C: bc    12, 2, 0x8030346C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030346C;
        }
    }

label_80303460:
    ctx->pc = 0x80303460u;
    ctx->downcount -= 3;
    // 80303460: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80303464:
    ctx->pc = 0x80303464u;
    // 80303464: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80303468:
    ctx->pc = 0x80303468u;
    // 80303468: bl      0x803457B8
    {
            ctx->lr = 0x8030346Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030346C:
    ctx->pc = 0x8030346Cu;
    ctx->downcount -= 4;
    // 8030346C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80303470:
    ctx->pc = 0x80303470u;
    // 80303470: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303474:
    ctx->pc = 0x80303474u;
    // 80303474: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_80303478:
    ctx->pc = 0x80303478u;
    // 80303478: b       0x803034F0
    {
            goto label_803034F0;
    }

label_8030347C:
    ctx->downcount -= 5;
    // 8030347C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80303480:
    ctx->pc = 0x80303480u;
    // 80303480: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303484:
    ctx->pc = 0x80303484u;
    // 80303484: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303488:
    // 80303488: cmpwi   r0, 0
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

label_8030348C:
    // 8030348C: bc    12, 2, 0x803034E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803034E8;
        }
    }

label_80303490:
    ctx->pc = 0x80303490u;
    ctx->downcount -= 3;
    // 80303490: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303494:
    // 80303494: cmpwi   r0, 0
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

label_80303498:
    // 80303498: bc    12, 2, 0x803034E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803034E8;
        }
    }

label_8030349C:
    ctx->pc = 0x8030349Cu;
    ctx->downcount -= 3;
    // 8030349C: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803034A0:
    // 803034A0: cmpwi   r0, 2
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

label_803034A4:
    // 803034A4: bc    12, 2, 0x803034CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803034CC;
        }
    }

label_803034A8:
    ctx->pc = 0x803034A8u;
    ctx->downcount -= 8;
    // 803034A8: lwz     r0, 180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803034AC:
    // 803034AC: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803034B0:
    ctx->pc = 0x803034B0u;
    // 803034B0: stw     r30, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_803034B4:
    // 803034B4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803034B8:
    ctx->pc = 0x803034B8u;
    // 803034B8: stw     r29, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_803034BC:
    ctx->pc = 0x803034BCu;
    // 803034BC: stw     r0, 188(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803034C0:
    ctx->pc = 0x803034C0u;
    // 803034C0: stw     r29, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_803034C4:
    // 803034C4: bl      0x803457B8
    {
            ctx->lr = 0x803034C8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803034C8:
    ctx->downcount -= 1;
    // 803034C8: b       0x803034E8
    {
            goto label_803034E8;
    }

label_803034CC:
    ctx->pc = 0x803034CCu;
    ctx->downcount -= 5;
    // 803034CC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803034D0:
    ctx->pc = 0x803034D0u;
    // 803034D0: lwz     r12, 252(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(252);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803034D4:
    ctx->pc = 0x803034D4u;
    // 803034D4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803034D8:
    ctx->pc = 0x803034D8u;
    // 803034D8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803034DCu;
            ctx->pc = target;
            return;
        }
    }

label_803034DC:
    ctx->downcount -= 3;
    // 803034DC: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803034E0:
    // 803034E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_803034E4:
    // 803034E4: bl      0x803457B8
    {
            ctx->lr = 0x803034E8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803034E8:
    ctx->downcount -= 2;
    // 803034E8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_803034EC:
    // 803034EC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_803034F0:
    ctx->pc = 0x803034F0u;
    ctx->downcount -= 3;
    // 803034F0: lwz     r0, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803034F4:
    // 803034F4: cmpw    r29, r0
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

label_803034F8:
    // 803034F8: bc    12, 0, 0x8030347C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030347Cu;
                return;
            }
            goto label_8030347C;
        }
    }

label_803034FC:
    ctx->pc = 0x803034FCu;
    ctx->downcount -= 6;
    // 803034FC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303500:
    ctx->pc = 0x80303500u;
    // 80303500: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80303504:
    ctx->pc = 0x80303504u;
    // 80303504: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80303508:
    ctx->pc = 0x80303508u;
    // 80303508: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030350C:
    ctx->pc = 0x8030350Cu;
    // 8030350C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303510:
    ctx->pc = 0x80303510u;
    // 80303510: bl      0x80370BD4
    {
            ctx->lr = 0x80303514u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303514:
    ctx->pc = 0x80303514u;
    ctx->downcount -= 3;
    // 80303514: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303518:
    ctx->pc = 0x80303518u;
    // 80303518: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030351C:
    ctx->pc = 0x8030351Cu;
    // 8030351C: bl      0x80263ABC
    {
            ctx->lr = 0x80303520u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80303520:
    ctx->pc = 0x80303520u;
    ctx->downcount -= 16;
    // 80303520: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303524:
    ctx->pc = 0x80303524u;
    // 80303524: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303528:
    ctx->pc = 0x80303528u;
    // 80303528: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030352C:
    ctx->pc = 0x8030352Cu;
    // 8030352C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80303530:
    ctx->pc = 0x80303530u;
    // 80303530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303534:
    ctx->pc = 0x80303534u;
    ctx->downcount -= 1;
    // 80303534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303538:
    ctx->pc = 0x80303538u;
    ctx->downcount -= 10;
    // 80303538: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030353C:
    ctx->pc = 0x8030353Cu;
    // 8030353C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303540:
    ctx->pc = 0x80303540u;
    // 80303540: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80303544:
    ctx->pc = 0x80303544u;
    // 80303544: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303548:
    ctx->pc = 0x80303548u;
    // 80303548: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030354C:
    ctx->pc = 0x8030354Cu;
    // 8030354C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303550:
    ctx->pc = 0x80303550u;
    // 80303550: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303554:
    ctx->pc = 0x80303554u;
    // 80303554: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303558:
    ctx->pc = 0x80303558u;
    // 80303558: cmpwi   r0, 0
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

label_8030355C:
    ctx->pc = 0x8030355Cu;
    // 8030355C: bc    12, 2, 0x8030356C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030356C;
        }
    }

label_80303560:
    ctx->pc = 0x80303560u;
    ctx->downcount -= 3;
    // 80303560: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80303564:
    ctx->pc = 0x80303564u;
    // 80303564: stw     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303568:
    ctx->pc = 0x80303568u;
    // 80303568: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030356C:
    ctx->pc = 0x8030356Cu;
    ctx->downcount -= 6;
    // 8030356C: lwz     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303570:
    ctx->pc = 0x80303570u;
    // 80303570: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303574:
    ctx->pc = 0x80303574u;
    // 80303574: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80303578:
    ctx->pc = 0x80303578u;
    // 80303578: cmpwi   r0, 0
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

label_8030357C:
    ctx->pc = 0x8030357Cu;
    // 8030357C: bc    4, 1, 0x803035A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803035A0;
        }
    }

label_80303580:
    ctx->downcount -= 5;
    // 80303580: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80303584:
    ctx->pc = 0x80303584u;
    // 80303584: lwz     r5, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80303588:
    ctx->pc = 0x80303588u;
    // 80303588: lbz     r0, 209(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030358C:
    // 8030358C: cmpwi   r0, 0
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

label_80303590:
    // 80303590: bc    12, 2, 0x80303598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303598;
        }
    }

label_80303594:
    ctx->downcount -= 1;
    // 80303594: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80303598:
    ctx->downcount -= 2;
    // 80303598: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8030359C:
    // 8030359C: bc    16, 0, 0x80303580
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303580u;
                return;
            }
            goto label_80303580;
        }
    }

label_803035A0:
    ctx->pc = 0x803035A0u;
    ctx->downcount -= 2;
    // 803035A0: cmpwi   r6, 0
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

label_803035A4:
    ctx->pc = 0x803035A4u;
    // 803035A4: bc    12, 2, 0x803035D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803035D8;
        }
    }

label_803035A8:
    ctx->pc = 0x803035A8u;
    ctx->downcount -= 6;
    // 803035A8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803035AC:
    ctx->pc = 0x803035ACu;
    // 803035AC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_803035B0:
    ctx->pc = 0x803035B0u;
    // 803035B0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803035B4:
    ctx->pc = 0x803035B4u;
    // 803035B4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803035B8:
    ctx->pc = 0x803035B8u;
    // 803035B8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803035BC:
    ctx->pc = 0x803035BCu;
    // 803035BC: bl      0x80370BD4
    {
            ctx->lr = 0x803035C0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803035C0:
    ctx->pc = 0x803035C0u;
    ctx->downcount -= 3;
    // 803035C0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803035C4:
    ctx->pc = 0x803035C4u;
    // 803035C4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803035C8:
    ctx->pc = 0x803035C8u;
    // 803035C8: bl      0x80263ABC
    {
            ctx->lr = 0x803035CCu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803035CC:
    ctx->pc = 0x803035CCu;
    ctx->downcount -= 3;
    // 803035CC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803035D0:
    ctx->pc = 0x803035D0u;
    // 803035D0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803035D4:
    ctx->pc = 0x803035D4u;
    // 803035D4: bl      0x803457B8
    {
            ctx->lr = 0x803035D8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803035D8:
    ctx->pc = 0x803035D8u;
    ctx->downcount -= 2;
    // 803035D8: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803035DC:
    ctx->pc = 0x803035DCu;
    // 803035DC: bl      0x8026EE88
    {
            ctx->lr = 0x803035E0u;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_803035E0:
    ctx->pc = 0x803035E0u;
    ctx->downcount -= 6;
    // 803035E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803035E4:
    ctx->pc = 0x803035E4u;
    // 803035E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803035E8:
    ctx->pc = 0x803035E8u;
    // 803035E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803035EC:
    ctx->pc = 0x803035ECu;
    // 803035EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803035F0:
    ctx->pc = 0x803035F0u;
    // 803035F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803035F4:
    ctx->pc = 0x803035F4u;
    ctx->downcount -= 2;
    // 803035F4: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803035F8:
    ctx->pc = 0x803035F8u;
    // 803035F8: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_803035FC:
    ctx->pc = 0x803035FCu;
    ctx->downcount -= 7;
    // 803035FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303600:
    ctx->pc = 0x80303600u;
    // 80303600: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303604:
    ctx->pc = 0x80303604u;
    // 80303604: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303608:
    ctx->pc = 0x80303608u;
    // 80303608: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030360C:
    ctx->pc = 0x8030360Cu;
    // 8030360C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303610:
    ctx->pc = 0x80303610u;
    // 80303610: cmpwi   r0, 0
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

label_80303614:
    ctx->pc = 0x80303614u;
    // 80303614: bc    12, 2, 0x80303634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303634;
        }
    }

label_80303618:
    ctx->pc = 0x80303618u;
    ctx->downcount -= 4;
    // 80303618: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030361C:
    ctx->pc = 0x8030361Cu;
    // 8030361C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80303620:
    ctx->pc = 0x80303620u;
    // 80303620: cmpwi   r0, 0
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

label_80303624:
    ctx->pc = 0x80303624u;
    // 80303624: bc    12, 2, 0x80303634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303634;
        }
    }

label_80303628:
    ctx->pc = 0x80303628u;
    ctx->downcount -= 3;
    // 80303628: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030362C:
    ctx->pc = 0x8030362Cu;
    // 8030362C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80303630:
    ctx->pc = 0x80303630u;
    // 80303630: bl      0x803457B8
    {
            ctx->lr = 0x80303634u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80303634:
    ctx->pc = 0x80303634u;
    ctx->downcount -= 6;
    // 80303634: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303638:
    ctx->pc = 0x80303638u;
    // 80303638: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030363C:
    ctx->pc = 0x8030363Cu;
    // 8030363C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80303640:
    ctx->pc = 0x80303640u;
    // 80303640: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303644:
    ctx->pc = 0x80303644u;
    // 80303644: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303648:
    ctx->pc = 0x80303648u;
    // 80303648: bl      0x80370BD4
    {
            ctx->lr = 0x8030364Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030364C:
    ctx->pc = 0x8030364Cu;
    ctx->downcount -= 3;
    // 8030364C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303650:
    ctx->pc = 0x80303650u;
    // 80303650: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80303654:
    ctx->pc = 0x80303654u;
    // 80303654: bl      0x80263ABC
    {
            ctx->lr = 0x80303658u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80303658:
    ctx->pc = 0x80303658u;
    ctx->downcount -= 5;
    // 80303658: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030365C:
    ctx->pc = 0x8030365Cu;
    // 8030365C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303660:
    ctx->pc = 0x80303660u;
    // 80303660: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303664:
    ctx->pc = 0x80303664u;
    // 80303664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303668:
    ctx->pc = 0x80303668u;
    ctx->downcount -= 19;
    // 80303668: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030366C:
    ctx->pc = 0x8030366Cu;
    // 8030366C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303670:
    ctx->pc = 0x80303670u;
    // 80303670: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80303674:
    ctx->pc = 0x80303674u;
    // 80303674: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303678:
    ctx->pc = 0x80303678u;
    // 80303678: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030367C:
    ctx->pc = 0x8030367Cu;
    // 8030367C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303680:
    ctx->pc = 0x80303680u;
    // 80303680: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303684:
    ctx->pc = 0x80303684u;
    // 80303684: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303688:
    ctx->pc = 0x80303688u;
    // 80303688: bl      0x803554B8
    {
            ctx->lr = 0x8030368Cu;
            ctx->pc = 0x803554B8u;
            return;
    }

label_8030368C:
    ctx->pc = 0x8030368Cu;
    ctx->downcount -= 6;
    // 8030368C: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303690:
    ctx->pc = 0x80303690u;
    // 80303690: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303694:
    ctx->pc = 0x80303694u;
    // 80303694: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303698:
    ctx->pc = 0x80303698u;
    // 80303698: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030369C:
    ctx->pc = 0x8030369Cu;
    // 8030369C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803036A0u;
            ctx->pc = target;
            return;
        }
    }

label_803036A0:
    ctx->pc = 0x803036A0u;
    ctx->downcount -= 3;
    // 803036A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_803036A4:
    ctx->pc = 0x803036A4u;
    // 803036A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_803036A8:
    ctx->pc = 0x803036A8u;
    // 803036A8: b       0x803036D0
    {
            goto label_803036D0;
    }

label_803036AC:
    ctx->downcount -= 3;
    // 803036AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803036B0:
    // 803036B0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803036B4:
    // 803036B4: bl      0x80303890
    {
            ctx->lr = 0x803036B8u;
            goto label_80303890;
    }

label_803036B8:
    ctx->downcount -= 4;
    // 803036B8: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803036BC:
    // 803036BC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803036C0:
    ctx->pc = 0x803036C0u;
    // 803036C0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803036C4:
    // 803036C4: bl      0x8036B330
    {
            ctx->lr = 0x803036C8u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_803036C8:
    ctx->downcount -= 2;
    // 803036C8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_803036CC:
    // 803036CC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_803036D0:
    ctx->pc = 0x803036D0u;
    ctx->downcount -= 3;
    // 803036D0: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803036D4:
    // 803036D4: cmpw    r30, r0
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

label_803036D8:
    // 803036D8: bc    12, 0, 0x803036AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803036ACu;
                return;
            }
            goto label_803036AC;
        }
    }

label_803036DC:
    ctx->pc = 0x803036DCu;
    ctx->downcount -= 2;
    // 803036DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803036E0:
    ctx->pc = 0x803036E0u;
    // 803036E0: bl      0x80303834
    {
            ctx->lr = 0x803036E4u;
            goto label_80303834;
    }

label_803036E4:
    ctx->pc = 0x803036E4u;
    ctx->downcount -= 2;
    // 803036E4: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803036E8:
    ctx->pc = 0x803036E8u;
    // 803036E8: bl      0x8036E924
    {
            ctx->lr = 0x803036ECu;
            ctx->pc = 0x8036E924u;
            return;
    }

label_803036EC:
    ctx->pc = 0x803036ECu;
    ctx->downcount -= 2;
    // 803036EC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803036F0:
    ctx->pc = 0x803036F0u;
    // 803036F0: bl      0x80303800
    {
            ctx->lr = 0x803036F4u;
            goto label_80303800;
    }

label_803036F4:
    ctx->pc = 0x803036F4u;
    ctx->downcount -= 8;
    // 803036F4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803036F8:
    ctx->pc = 0x803036F8u;
    // 803036F8: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803036FC:
    ctx->pc = 0x803036FCu;
    // 803036FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80303700:
    ctx->pc = 0x80303700u;
    // 80303700: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303704:
    ctx->pc = 0x80303704u;
    // 80303704: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303708:
    ctx->pc = 0x80303708u;
    // 80303708: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030370C:
    ctx->pc = 0x8030370Cu;
    // 8030370C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303710u;
            ctx->pc = target;
            return;
        }
    }

label_80303710:
    ctx->pc = 0x80303710u;
    ctx->downcount -= 16;
    // 80303710: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303714:
    ctx->pc = 0x80303714u;
    // 80303714: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303718:
    ctx->pc = 0x80303718u;
    // 80303718: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030371C:
    ctx->pc = 0x8030371Cu;
    // 8030371C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80303720:
    ctx->pc = 0x80303720u;
    // 80303720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303724:
    ctx->pc = 0x80303724u;
    ctx->downcount -= 5;
    // 80303724: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303728:
    ctx->pc = 0x80303728u;
    // 80303728: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030372C:
    ctx->pc = 0x8030372Cu;
    // 8030372C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303730:
    ctx->pc = 0x80303730u;
    // 80303730: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80303734:
    ctx->pc = 0x80303734u;
    // 80303734: bl      0x80007858
    {
            ctx->lr = 0x80303738u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80303738:
    ctx->pc = 0x80303738u;
    ctx->downcount -= 3;
    // 80303738: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030373C:
    ctx->pc = 0x8030373Cu;
    // 8030373C: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303740:
    ctx->pc = 0x80303740u;
    // 80303740: bl      0x8036E67C
    {
            ctx->lr = 0x80303744u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_80303744:
    ctx->pc = 0x80303744u;
    ctx->downcount -= 4;
    // 80303744: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303748:
    ctx->pc = 0x80303748u;
    // 80303748: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030374C:
    ctx->pc = 0x8030374Cu;
    // 8030374C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303750:
    ctx->pc = 0x80303750u;
    // 80303750: b       0x803037A0
    {
            goto label_803037A0;
    }

label_80303754:
    ctx->pc = 0x80303754u;
    ctx->downcount -= 4;
    // 80303754: lwz     r4, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303758:
    // 80303758: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030375C:
    // 8030375C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80303760:
    // 80303760: bl      0x803045E8
    {
            ctx->lr = 0x80303764u;
            goto label_803045E8;
    }

label_80303764:
    ctx->pc = 0x80303764u;
    ctx->downcount -= 10;
    // 80303764: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80303764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80303768:
    // 80303768: add   r29, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8030376C:
    ctx->pc = 0x8030376Cu;
    // 8030376C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030376Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80303770:
    // 80303770: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80303774:
    ctx->pc = 0x80303774u;
    // 80303774: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80303774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80303778:
    ctx->pc = 0x80303778u;
    // 80303778: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80303778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8030377C:
    ctx->pc = 0x8030377Cu;
    // 8030377C: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030377Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80303780:
    ctx->pc = 0x80303780u;
    // 80303780: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80303780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80303784:
    ctx->pc = 0x80303784u;
    // 80303784: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303788:
    // 80303788: bl      0x8036B284
    {
            ctx->lr = 0x8030378Cu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_8030378C:
    ctx->pc = 0x8030378Cu;
    ctx->downcount -= 3;
    // 8030378C: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303790:
    // 80303790: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80303794:
    // 80303794: bl      0x8036B244
    {
            ctx->lr = 0x80303798u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_80303798:
    ctx->downcount -= 2;
    // 80303798: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030379C:
    // 8030379C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_803037A0:
    ctx->pc = 0x803037A0u;
    ctx->downcount -= 3;
    // 803037A0: lwz     r5, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803037A4:
    // 803037A4: cmpw    r28, r5
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

label_803037A8:
    // 803037A8: bc    12, 0, 0x80303754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303754u;
                return;
            }
            goto label_80303754;
        }
    }

label_803037AC:
    ctx->pc = 0x803037ACu;
    ctx->downcount -= 3;
    // 803037AC: lwz     r4, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803037B0:
    ctx->pc = 0x803037B0u;
    // 803037B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803037B4:
    ctx->pc = 0x803037B4u;
    // 803037B4: bl      0x80304588
    {
            ctx->lr = 0x803037B8u;
            goto label_80304588;
    }

label_803037B8:
    ctx->pc = 0x803037B8u;
    ctx->downcount -= 9;
    // 803037B8: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_803037BC:
    ctx->pc = 0x803037BCu;
    // 803037BC: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_803037C0:
    ctx->pc = 0x803037C0u;
    // 803037C0: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_803037C4:
    ctx->pc = 0x803037C4u;
    // 803037C4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803037C8:
    ctx->pc = 0x803037C8u;
    // 803037C8: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_803037CC:
    ctx->pc = 0x803037CCu;
    // 803037CC: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_803037D0:
    ctx->pc = 0x803037D0u;
    // 803037D0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x803037D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803037D4:
    ctx->pc = 0x803037D4u;
    // 803037D4: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803037D8:
    ctx->pc = 0x803037D8u;
    // 803037D8: bl      0x8036E884
    {
            ctx->lr = 0x803037DCu;
            ctx->pc = 0x8036E884u;
            return;
    }

label_803037DC:
    ctx->pc = 0x803037DCu;
    ctx->downcount -= 3;
    // 803037DC: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803037E0:
    ctx->pc = 0x803037E0u;
    // 803037E0: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_803037E4:
    ctx->pc = 0x803037E4u;
    // 803037E4: bl      0x8036E848
    {
            ctx->lr = 0x803037E8u;
            ctx->pc = 0x8036E848u;
            return;
    }

label_803037E8:
    ctx->pc = 0x803037E8u;
    ctx->downcount -= 2;
    // 803037E8: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_803037EC:
    ctx->pc = 0x803037ECu;
    // 803037EC: bl      0x800078A4
    {
            ctx->lr = 0x803037F0u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_803037F0:
    ctx->pc = 0x803037F0u;
    ctx->downcount -= 5;
    // 803037F0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803037F4:
    ctx->pc = 0x803037F4u;
    // 803037F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803037F8:
    ctx->pc = 0x803037F8u;
    // 803037F8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_803037FC:
    ctx->pc = 0x803037FCu;
    // 803037FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303800:
    ctx->pc = 0x80303800u;
    ctx->downcount -= 5;
    // 80303800: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303804:
    ctx->pc = 0x80303804u;
    // 80303804: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303808:
    ctx->pc = 0x80303808u;
    // 80303808: lwz     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030380C:
    ctx->pc = 0x8030380Cu;
    // 8030380C: cmpw    r4, r0
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

label_80303810:
    ctx->pc = 0x80303810u;
    // 80303810: bc    4, 2, 0x80303818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303818;
        }
    }

label_80303814:
    ctx->pc = 0x80303814u;
    ctx->downcount -= 1;
    // 80303814: lwz     r5, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80303818:
    ctx->pc = 0x80303818u;
    ctx->downcount -= 3;
    // 80303818: lwz     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030381C:
    ctx->pc = 0x8030381Cu;
    // 8030381C: cmpwi   r0, 3
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

label_80303820:
    ctx->pc = 0x80303820u;
    // 80303820: bc    4, 2, 0x8030382C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030382C;
        }
    }

label_80303824:
    ctx->pc = 0x80303824u;
    ctx->downcount -= 2;
    // 80303824: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_80303828:
    ctx->pc = 0x80303828u;
    // 80303828: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030382C:
    ctx->pc = 0x8030382Cu;
    ctx->downcount -= 2;
    // 8030382C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80303830:
    ctx->pc = 0x80303830u;
    // 80303830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303834:
    ctx->pc = 0x80303834u;
    ctx->downcount -= 9;
    // 80303834: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303838:
    ctx->pc = 0x80303838u;
    // 80303838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030383C:
    ctx->pc = 0x8030383Cu;
    // 8030383C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80303840:
    ctx->pc = 0x80303840u;
    // 80303840: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303844:
    ctx->pc = 0x80303844u;
    // 80303844: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80303848:
    ctx->pc = 0x80303848u;
    // 80303848: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030384C:
    ctx->pc = 0x8030384Cu;
    // 8030384C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303850:
    ctx->pc = 0x80303850u;
    // 80303850: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303854:
    ctx->pc = 0x80303854u;
    // 80303854: bl      0x80300EE8
    {
            ctx->lr = 0x80303858u;
            ctx->pc = 0x80300EE8u;
            return;
    }

label_80303858:
    ctx->pc = 0x80303858u;
    ctx->downcount -= 3;
    // 80303858: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030385C:
    ctx->pc = 0x8030385Cu;
    // 8030385C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80303860:
    ctx->pc = 0x80303860u;
    // 80303860: bl      0x80304CCC
    {
            ctx->lr = 0x80303864u;
            goto label_80304CCC;
    }

label_80303864:
    ctx->pc = 0x80303864u;
    ctx->downcount -= 2;
    // 80303864: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303868:
    ctx->pc = 0x80303868u;
    // 80303868: bl      0x80300F58
    {
            ctx->lr = 0x8030386Cu;
            ctx->pc = 0x80300F58u;
            return;
    }

label_8030386C:
    ctx->pc = 0x8030386Cu;
    ctx->downcount -= 4;
    // 8030386C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303870:
    ctx->pc = 0x80303870u;
    // 80303870: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303874:
    ctx->pc = 0x80303874u;
    // 80303874: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303878:
    ctx->pc = 0x80303878u;
    // 80303878: bl      0x80304C64
    {
            ctx->lr = 0x8030387Cu;
            goto label_80304C64;
    }

label_8030387C:
    ctx->pc = 0x8030387Cu;
    ctx->downcount -= 6;
    // 8030387C: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303880:
    ctx->pc = 0x80303880u;
    // 80303880: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303884:
    ctx->pc = 0x80303884u;
    // 80303884: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303888:
    ctx->pc = 0x80303888u;
    // 80303888: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_8030388C:
    ctx->pc = 0x8030388Cu;
    // 8030388C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303890:
    ctx->pc = 0x80303890u;
    ctx->downcount -= 18;
    // 80303890: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303894:
    ctx->pc = 0x80303894u;
    // 80303894: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303898:
    ctx->pc = 0x80303898u;
    // 80303898: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030389C:
    ctx->pc = 0x8030389Cu;
    // 8030389C: stmw     r26, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803038A0:
    ctx->pc = 0x803038A0u;
    // 803038A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803038A4:
    ctx->pc = 0x803038A4u;
    // 803038A4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803038A8:
    ctx->pc = 0x803038A8u;
    // 803038A8: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803038AC:
    ctx->pc = 0x803038ACu;
    // 803038AC: bl      0x80300F58
    {
            ctx->lr = 0x803038B0u;
            ctx->pc = 0x80300F58u;
            return;
    }

label_803038B0:
    ctx->pc = 0x803038B0u;
    ctx->downcount -= 5;
    // 803038B0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_803038B4:
    ctx->pc = 0x803038B4u;
    // 803038B4: addi    r5, r1, 132
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(132);

label_803038B8:
    ctx->pc = 0x803038B8u;
    // 803038B8: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_803038BC:
    ctx->pc = 0x803038BCu;
    // 803038BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_803038C0:
    loop_803038C0(ctx);
    if (ctx->pc == 0x803038D4u) goto label_803038D4;
    return;
label_803038C4:
    ctx->pc = 0x803038C4u;
    // 803038C4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_803038C8:
    ctx->pc = 0x803038C8u;
    // 803038C8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803038CC:
    ctx->pc = 0x803038CCu;
    // 803038CC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_803038D0:
    // 803038D0: bc    16, 0, 0x803038C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803038C0u;
                return;
            }
            goto label_803038C0;
        }
    }

label_803038D4:
    ctx->pc = 0x803038D4u;
    ctx->downcount -= 11;
    // 803038D4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803038D8:
    ctx->pc = 0x803038D8u;
    // 803038D8: rlwinm r6, r29, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[29], 3u) & 0xFFFFFFF8u;
    }

label_803038DC:
    ctx->pc = 0x803038DCu;
    // 803038DC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803038E0:
    ctx->pc = 0x803038E0u;
    // 803038E0: addi    r5, r1, 148
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(148);

label_803038E4:
    ctx->pc = 0x803038E4u;
    // 803038E4: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_803038E8:
    ctx->pc = 0x803038E8u;
    // 803038E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803038EC:
    ctx->pc = 0x803038ECu;
    // 803038EC: lwzx    r28, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_803038F0:
    ctx->pc = 0x803038F0u;
    // 803038F0: lwzx    r27, r4, r6
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[6];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_803038F4:
    ctx->pc = 0x803038F4u;
    // 803038F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803038F8:
    ctx->pc = 0x803038F8u;
    // 803038F8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_803038FC:
    ctx->pc = 0x803038FCu;
    // 803038FC: bl      0x80276A5C
    {
            ctx->lr = 0x80303900u;
            ctx->pc = 0x80276A5Cu;
            return;
    }

label_80303900:
    ctx->pc = 0x80303900u;
    ctx->downcount -= 3;
    // 80303900: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303904:
    ctx->pc = 0x80303904u;
    // 80303904: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303908:
    ctx->pc = 0x80303908u;
    // 80303908: bl      0x80234544
    {
            ctx->lr = 0x8030390Cu;
            ctx->pc = 0x80234544u;
            return;
    }

label_8030390C:
    ctx->pc = 0x8030390Cu;
    ctx->downcount -= 2;
    // 8030390C: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80303910:
    ctx->pc = 0x80303910u;
    // 80303910: bl      0x80261F84
    {
            ctx->lr = 0x80303914u;
            ctx->pc = 0x80261F84u;
            return;
    }

label_80303914:
    ctx->pc = 0x80303914u;
    ctx->downcount -= 4;
    // 80303914: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303918:
    ctx->pc = 0x80303918u;
    // 80303918: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030391C:
    ctx->pc = 0x8030391Cu;
    // 8030391C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80303920:
    ctx->pc = 0x80303920u;
    // 80303920: bl      0x80300CE8
    {
            ctx->lr = 0x80303924u;
            ctx->pc = 0x80300CE8u;
            return;
    }

label_80303924:
    ctx->pc = 0x80303924u;
    ctx->downcount -= 6;
    // 80303924: rlwinm r29, r29, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80303928:
    ctx->pc = 0x80303928u;
    // 80303928: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030392C:
    ctx->pc = 0x8030392Cu;
    // 8030392C: add   r30, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_80303930:
    ctx->pc = 0x80303930u;
    // 80303930: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80303934:
    ctx->pc = 0x80303934u;
    // 80303934: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303938:
    ctx->pc = 0x80303938u;
    // 80303938: bl      0x80304ADC
    {
            ctx->lr = 0x8030393Cu;
            goto label_80304ADC;
    }

label_8030393C:
    ctx->pc = 0x8030393Cu;
    ctx->downcount -= 6;
    // 8030393C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80303940:
    ctx->pc = 0x80303940u;
    // 80303940: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80303944:
    ctx->pc = 0x80303944u;
    // 80303944: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80303948:
    ctx->pc = 0x80303948u;
    // 80303948: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8030394C:
    ctx->pc = 0x8030394Cu;
    // 8030394C: li      r7, 64
    ctx->gpr[7] = (u32)(s32)(64);

label_80303950:
    ctx->pc = 0x80303950u;
    // 80303950: bl      0x802C3574
    {
            ctx->lr = 0x80303954u;
            ctx->pc = 0x802C3574u;
            return;
    }

label_80303954:
    ctx->pc = 0x80303954u;
    ctx->downcount -= 3;
    // 80303954: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303958:
    ctx->pc = 0x80303958u;
    // 80303958: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030395C:
    ctx->pc = 0x8030395Cu;
    // 8030395C: bl      0x80304A58
    {
            ctx->lr = 0x80303960u;
            goto label_80304A58;
    }

label_80303960:
    ctx->pc = 0x80303960u;
    ctx->downcount -= 2;
    // 80303960: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303964:
    ctx->pc = 0x80303964u;
    // 80303964: bl      0x803039FC
    {
            ctx->lr = 0x80303968u;
            goto label_803039FC;
    }

label_80303968:
    ctx->pc = 0x80303968u;
    ctx->downcount -= 5;
    // 80303968: addi    r4, r1, 172
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(172);

label_8030396C:
    ctx->pc = 0x8030396Cu;
    // 8030396C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303970:
    ctx->pc = 0x80303970u;
    // 80303970: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303974:
    ctx->pc = 0x80303974u;
    // 80303974: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303978:
    ctx->pc = 0x80303978u;
    // 80303978: bl      0x80317314
    {
            ctx->lr = 0x8030397Cu;
            ctx->pc = 0x80317314u;
            return;
    }

label_8030397C:
    ctx->pc = 0x8030397Cu;
    ctx->downcount -= 3;
    // 8030397C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303980:
    ctx->pc = 0x80303980u;
    // 80303980: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303984:
    ctx->pc = 0x80303984u;
    // 80303984: bc    12, 2, 0x80303990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303990;
        }
    }

label_80303988:
    ctx->pc = 0x80303988u;
    ctx->downcount -= 2;
    // 80303988: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030398C:
    ctx->pc = 0x8030398Cu;
    // 8030398C: bl      0x80304A14
    {
            ctx->lr = 0x80303990u;
            goto label_80304A14;
    }

label_80303990:
    ctx->pc = 0x80303990u;
    ctx->downcount -= 3;
    // 80303990: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80303994:
    ctx->pc = 0x80303994u;
    // 80303994: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80303998:
    ctx->pc = 0x80303998u;
    // 80303998: bl      0x80276B6C
    {
            ctx->lr = 0x8030399Cu;
            ctx->pc = 0x80276B6Cu;
            return;
    }

label_8030399C:
    ctx->pc = 0x8030399Cu;
    ctx->downcount -= 4;
    // 8030399C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803039A0:
    ctx->pc = 0x803039A0u;
    // 803039A0: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803039A4:
    ctx->pc = 0x803039A4u;
    // 803039A4: lbz     r4, 341(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(341);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_803039A8:
    ctx->pc = 0x803039A8u;
    // 803039A8: bl      0x80304994
    {
            ctx->lr = 0x803039ACu;
            goto label_80304994;
    }

label_803039AC:
    ctx->pc = 0x803039ACu;
    ctx->downcount -= 3;
    // 803039AC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_803039B0:
    ctx->pc = 0x803039B0u;
    // 803039B0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_803039B4:
    ctx->pc = 0x803039B4u;
    // 803039B4: b       0x803039DC
    {
            goto label_803039DC;
    }

label_803039B8:
    ctx->pc = 0x803039B8u;
    ctx->downcount -= 3;
    // 803039B8: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803039BC:
    // 803039BC: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_803039C0:
    // 803039C0: bl      0x80304534
    {
            ctx->lr = 0x803039C4u;
            goto label_80304534;
    }

label_803039C4:
    ctx->downcount -= 4;
    // 803039C4: add   r5, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803039C8:
    // 803039C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803039CC:
    ctx->pc = 0x803039CCu;
    // 803039CC: lwz     r3, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803039D0:
    // 803039D0: bl      0x8036B234
    {
            ctx->lr = 0x803039D4u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_803039D4:
    ctx->downcount -= 2;
    // 803039D4: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_803039D8:
    // 803039D8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_803039DC:
    ctx->pc = 0x803039DCu;
    ctx->downcount -= 3;
    // 803039DC: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803039E0:
    // 803039E0: cmpw    r26, r4
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803039E4:
    // 803039E4: bc    12, 0, 0x803039B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803039B8u;
                return;
            }
            goto label_803039B8;
        }
    }

label_803039E8:
    ctx->pc = 0x803039E8u;
    ctx->downcount -= 16;
    // 803039E8: lmw     r26, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803039EC:
    ctx->pc = 0x803039ECu;
    // 803039EC: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803039F0:
    ctx->pc = 0x803039F0u;
    // 803039F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803039F4:
    ctx->pc = 0x803039F4u;
    // 803039F4: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_803039F8:
    ctx->pc = 0x803039F8u;
    // 803039F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803039FC:
    ctx->pc = 0x803039FCu;
    ctx->downcount -= 2;
    // 803039FC: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303A00:
    ctx->pc = 0x80303A00u;
    // 80303A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303A04:
    ctx->pc = 0x80303A04u;
    ctx->downcount -= 16;
    // 80303A04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303A08:
    ctx->pc = 0x80303A08u;
    // 80303A08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303A0C:
    ctx->pc = 0x80303A0Cu;
    // 80303A0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303A10:
    ctx->pc = 0x80303A10u;
    // 80303A10: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303A14:
    ctx->pc = 0x80303A14u;
    // 80303A14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303A18:
    ctx->pc = 0x80303A18u;
    // 80303A18: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303A1C:
    ctx->pc = 0x80303A1Cu;
    ctx->downcount -= 4;
    // 80303A1C: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303A20:
    // 80303A20: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303A24:
    // 80303A24: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80303A28:
    // 80303A28: bl      0x80304534
    {
            ctx->lr = 0x80303A2Cu;
            goto label_80304534;
    }

label_80303A2C:
    ctx->downcount -= 4;
    // 80303A2C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303A30:
    ctx->pc = 0x80303A30u;
    // 80303A30: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303A34:
    // 80303A34: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303A38:
    // 80303A38: bl      0x80304E64
    {
            ctx->lr = 0x80303A3Cu;
            goto label_80304E64;
    }

label_80303A3C:
    ctx->downcount -= 3;
    // 80303A3C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80303A40:
    // 80303A40: cmpwi   r31, 2
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

label_80303A44:
    // 80303A44: bc    12, 0, 0x80303A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303A1Cu;
                return;
            }
            goto label_80303A1C;
        }
    }

label_80303A48:
    ctx->pc = 0x80303A48u;
    ctx->downcount -= 1;
    // 80303A48: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303A4C:
    ctx->pc = 0x80303A4Cu;
    ctx->downcount -= 4;
    // 80303A4C: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303A50:
    // 80303A50: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303A54:
    // 80303A54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80303A58:
    // 80303A58: bl      0x80304534
    {
            ctx->lr = 0x80303A5Cu;
            goto label_80304534;
    }

label_80303A5C:
    ctx->downcount -= 4;
    // 80303A5C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303A60:
    ctx->pc = 0x80303A60u;
    // 80303A60: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303A64:
    // 80303A64: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_80303A68:
    // 80303A68: bl      0x80304E64
    {
            ctx->lr = 0x80303A6Cu;
            goto label_80304E64;
    }

label_80303A6C:
    ctx->downcount -= 3;
    // 80303A6C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80303A70:
    // 80303A70: cmpwi   r31, 3
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

label_80303A74:
    // 80303A74: bc    12, 0, 0x80303A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303A4Cu;
                return;
            }
            goto label_80303A4C;
        }
    }

label_80303A78:
    ctx->pc = 0x80303A78u;
    ctx->downcount -= 16;
    // 80303A78: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303A7C:
    ctx->pc = 0x80303A7Cu;
    // 80303A7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303A80:
    ctx->pc = 0x80303A80u;
    // 80303A80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303A84:
    ctx->pc = 0x80303A84u;
    // 80303A84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303A88:
    ctx->pc = 0x80303A88u;
    // 80303A88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303A8C:
    ctx->pc = 0x80303A8Cu;
    ctx->downcount -= 21;
    // 80303A8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303A90:
    ctx->pc = 0x80303A90u;
    // 80303A90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303A94:
    ctx->pc = 0x80303A94u;
    // 80303A94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303A98:
    ctx->pc = 0x80303A98u;
    // 80303A98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303A9C:
    ctx->pc = 0x80303A9Cu;
    // 80303A9C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303AA0:
    ctx->pc = 0x80303AA0u;
    // 80303AA0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303AA4:
    ctx->pc = 0x80303AA4u;
    // 80303AA4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303AA8:
    ctx->pc = 0x80303AA8u;
    // 80303AA8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303AAC:
    ctx->pc = 0x80303AACu;
    // 80303AAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303AB0:
    ctx->pc = 0x80303AB0u;
    // 80303AB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303AB4u;
            ctx->pc = target;
            return;
        }
    }

label_80303AB4:
    ctx->pc = 0x80303AB4u;
    ctx->downcount -= 2;
    // 80303AB4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303AB8:
    ctx->pc = 0x80303AB8u;
    // 80303AB8: bc    4, 2, 0x80303AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303AE8;
        }
    }

label_80303ABC:
    ctx->pc = 0x80303ABCu;
    ctx->downcount -= 3;
    // 80303ABC: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303AC0:
    ctx->pc = 0x80303AC0u;
    // 80303AC0: cmpwi   r0, 0
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

label_80303AC4:
    ctx->pc = 0x80303AC4u;
    // 80303AC4: bc    12, 2, 0x80303AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303AE8;
        }
    }

label_80303AC8:
    ctx->pc = 0x80303AC8u;
    ctx->downcount -= 4;
    // 80303AC8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80303ACC:
    ctx->pc = 0x80303ACCu;
    // 80303ACC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303AD0:
    ctx->pc = 0x80303AD0u;
    // 80303AD0: addi    r4, r4, 17192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17192);

label_80303AD4:
    ctx->pc = 0x80303AD4u;
    // 80303AD4: bl      0x8000E8B0
    {
            ctx->lr = 0x80303AD8u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_80303AD8:
    ctx->pc = 0x80303AD8u;
    ctx->downcount -= 2;
    // 80303AD8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303ADC:
    ctx->pc = 0x80303ADCu;
    // 80303ADC: bc    4, 2, 0x80303AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303AE8;
        }
    }

label_80303AE0:
    ctx->pc = 0x80303AE0u;
    ctx->downcount -= 2;
    // 80303AE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303AE4:
    ctx->pc = 0x80303AE4u;
    // 80303AE4: bl      0x80303724
    {
            ctx->lr = 0x80303AE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303724u;
                return;
            }
            goto label_80303724;
    }

label_80303AE8:
    ctx->pc = 0x80303AE8u;
    ctx->downcount -= 16;
    // 80303AE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303AEC:
    ctx->pc = 0x80303AECu;
    // 80303AEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303AF0:
    ctx->pc = 0x80303AF0u;
    // 80303AF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303AF4:
    ctx->pc = 0x80303AF4u;
    // 80303AF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303AF8:
    ctx->pc = 0x80303AF8u;
    // 80303AF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303AFC:
    ctx->pc = 0x80303AFCu;
    ctx->downcount -= 21;
    // 80303AFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303B00:
    ctx->pc = 0x80303B00u;
    // 80303B00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303B04:
    ctx->pc = 0x80303B04u;
    // 80303B04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303B08:
    ctx->pc = 0x80303B08u;
    // 80303B08: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303B0C:
    ctx->pc = 0x80303B0Cu;
    // 80303B0C: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_80303B10:
    ctx->pc = 0x80303B10u;
    // 80303B10: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303B14:
    ctx->pc = 0x80303B14u;
    // 80303B14: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80303B18:
    ctx->pc = 0x80303B18u;
    // 80303B18: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80303B1C:
    ctx->pc = 0x80303B1Cu;
    // 80303B1C: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303B20:
    ctx->pc = 0x80303B20u;
    // 80303B20: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303B24:
    ctx->pc = 0x80303B24u;
    // 80303B24: bl      0x80370BD4
    {
            ctx->lr = 0x80303B28u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303B28:
    ctx->pc = 0x80303B28u;
    ctx->downcount -= 7;
    // 80303B28: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303B2C:
    ctx->pc = 0x80303B2Cu;
    // 80303B2C: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303B30:
    ctx->pc = 0x80303B30u;
    // 80303B30: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303B34:
    ctx->pc = 0x80303B34u;
    // 80303B34: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303B38:
    ctx->pc = 0x80303B38u;
    // 80303B38: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303B3C:
    ctx->pc = 0x80303B3Cu;
    // 80303B3C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303B40u;
            ctx->pc = target;
            return;
        }
    }

label_80303B40:
    ctx->pc = 0x80303B40u;
    ctx->downcount -= 5;
    // 80303B40: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303B44:
    ctx->pc = 0x80303B44u;
    // 80303B44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303B48:
    ctx->pc = 0x80303B48u;
    // 80303B48: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80303B4C:
    ctx->pc = 0x80303B4Cu;
    // 80303B4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80303B50:
    ctx->pc = 0x80303B50u;
    // 80303B50: bl      0x8027714C
    {
            ctx->lr = 0x80303B54u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80303B54:
    ctx->pc = 0x80303B54u;
    ctx->downcount -= 2;
    // 80303B54: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80303B58:
    ctx->pc = 0x80303B58u;
    // 80303B58: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80303B5C:
    ctx->pc = 0x80303B5Cu;
    ctx->downcount -= 5;
    // 80303B5C: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303B60:
    // 80303B60: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80303B64:
    // 80303B64: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303B68:
    // 80303B68: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303B6C:
    // 80303B6C: bl      0x80370BD4
    {
            ctx->lr = 0x80303B70u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303B70:
    ctx->downcount -= 8;
    // 80303B70: add   r3, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80303B74:
    ctx->pc = 0x80303B74u;
    // 80303B74: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80303B78:
    ctx->pc = 0x80303B78u;
    // 80303B78: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303B7C:
    ctx->pc = 0x80303B7Cu;
    // 80303B7C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303B80:
    ctx->pc = 0x80303B80u;
    // 80303B80: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303B84:
    ctx->pc = 0x80303B84u;
    // 80303B84: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303B88:
    ctx->pc = 0x80303B88u;
    // 80303B88: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303B8Cu;
            ctx->pc = target;
            return;
        }
    }

label_80303B8C:
    ctx->downcount -= 5;
    // 80303B8C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303B90:
    // 80303B90: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80303B94:
    // 80303B94: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80303B98:
    // 80303B98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80303B9C:
    // 80303B9C: bl      0x8027714C
    {
            ctx->lr = 0x80303BA0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80303BA0:
    ctx->downcount -= 4;
    // 80303BA0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80303BA4:
    // 80303BA4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80303BA8:
    // 80303BA8: cmpwi   r28, 3
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

label_80303BAC:
    // 80303BAC: bc    12, 0, 0x80303B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303B5Cu;
                return;
            }
            goto label_80303B5C;
        }
    }

label_80303BB0:
    ctx->pc = 0x80303BB0u;
    ctx->downcount -= 6;
    // 80303BB0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303BB4:
    ctx->pc = 0x80303BB4u;
    // 80303BB4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80303BB8:
    ctx->pc = 0x80303BB8u;
    // 80303BB8: addi    r4, r4, 22792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22792);

label_80303BBC:
    ctx->pc = 0x80303BBCu;
    // 80303BBC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303BC0:
    ctx->pc = 0x80303BC0u;
    // 80303BC0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303BC4:
    ctx->pc = 0x80303BC4u;
    // 80303BC4: bl      0x80370BD4
    {
            ctx->lr = 0x80303BC8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303BC8:
    ctx->pc = 0x80303BC8u;
    ctx->downcount -= 7;
    // 80303BC8: lwz     r3, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303BCC:
    ctx->pc = 0x80303BCCu;
    // 80303BCC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80303BD0:
    ctx->pc = 0x80303BD0u;
    // 80303BD0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303BD4:
    ctx->pc = 0x80303BD4u;
    // 80303BD4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80303BD8:
    ctx->pc = 0x80303BD8u;
    // 80303BD8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80303BDC:
    ctx->pc = 0x80303BDCu;
    // 80303BDC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80303BE0u;
            ctx->pc = target;
            return;
        }
    }

label_80303BE0:
    ctx->pc = 0x80303BE0u;
    ctx->downcount -= 5;
    // 80303BE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303BE4:
    ctx->pc = 0x80303BE4u;
    // 80303BE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80303BE8:
    ctx->pc = 0x80303BE8u;
    // 80303BE8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80303BEC:
    ctx->pc = 0x80303BECu;
    // 80303BEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80303BF0:
    ctx->pc = 0x80303BF0u;
    // 80303BF0: bl      0x8027714C
    {
            ctx->lr = 0x80303BF4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80303BF4:
    ctx->pc = 0x80303BF4u;
    ctx->downcount -= 2;
    // 80303BF4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80303BF8:
    ctx->pc = 0x80303BF8u;
    // 80303BF8: bl      0x80303A04
    {
            ctx->lr = 0x80303BFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303A04u;
                return;
            }
            goto label_80303A04;
    }

label_80303BFC:
    ctx->pc = 0x80303BFCu;
    ctx->downcount -= 16;
    // 80303BFC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303C00:
    ctx->pc = 0x80303C00u;
    // 80303C00: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303C04:
    ctx->pc = 0x80303C04u;
    // 80303C04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303C08:
    ctx->pc = 0x80303C08u;
    // 80303C08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80303C0C:
    ctx->pc = 0x80303C0Cu;
    // 80303C0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303C10:
    ctx->pc = 0x80303C10u;
    ctx->downcount -= 8;
    // 80303C10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303C14:
    ctx->pc = 0x80303C14u;
    // 80303C14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303C18:
    ctx->pc = 0x80303C18u;
    // 80303C18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303C1C:
    ctx->pc = 0x80303C1Cu;
    // 80303C1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80303C20:
    ctx->pc = 0x80303C20u;
    // 80303C20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303C24:
    ctx->pc = 0x80303C24u;
    // 80303C24: stw     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303C28:
    ctx->pc = 0x80303C28u;
    // 80303C28: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303C2C:
    ctx->pc = 0x80303C2Cu;
    // 80303C2C: bl      0x80300F58
    {
            ctx->lr = 0x80303C30u;
            ctx->pc = 0x80300F58u;
            return;
    }

label_80303C30:
    ctx->pc = 0x80303C30u;
    ctx->downcount -= 9;
    // 80303C30: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303C34:
    ctx->pc = 0x80303C34u;
    // 80303C34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303C38:
    ctx->pc = 0x80303C38u;
    // 80303C38: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80303C3C:
    ctx->pc = 0x80303C3Cu;
    // 80303C3C: stw     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303C40:
    ctx->pc = 0x80303C40u;
    // 80303C40: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303C44:
    ctx->pc = 0x80303C44u;
    // 80303C44: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80303C48:
    ctx->pc = 0x80303C48u;
    // 80303C48: stw     r5, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80303C4C:
    ctx->pc = 0x80303C4Cu;
    // 80303C4C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303C50:
    ctx->pc = 0x80303C50u;
    // 80303C50: bl      0x8026F12C
    {
            ctx->lr = 0x80303C54u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_80303C54:
    ctx->pc = 0x80303C54u;
    ctx->downcount -= 3;
    // 80303C54: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80303C58:
    ctx->pc = 0x80303C58u;
    // 80303C58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303C5C:
    ctx->pc = 0x80303C5Cu;
    // 80303C5C: bl      0x803457B8
    {
            ctx->lr = 0x80303C60u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80303C60:
    ctx->pc = 0x80303C60u;
    ctx->downcount -= 6;
    // 80303C60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303C64:
    ctx->pc = 0x80303C64u;
    // 80303C64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303C68:
    ctx->pc = 0x80303C68u;
    // 80303C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303C6C:
    ctx->pc = 0x80303C6Cu;
    // 80303C6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303C70:
    ctx->pc = 0x80303C70u;
    // 80303C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303C74:
    ctx->pc = 0x80303C74u;
    ctx->downcount -= 20;
    // 80303C74: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303C78:
    ctx->pc = 0x80303C78u;
    // 80303C78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303C7C:
    ctx->pc = 0x80303C7Cu;
    // 80303C7C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80303C80:
    ctx->pc = 0x80303C80u;
    // 80303C80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80303C84:
    ctx->pc = 0x80303C84u;
    // 80303C84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303C88:
    ctx->pc = 0x80303C88u;
    // 80303C88: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303C8C:
    ctx->pc = 0x80303C8Cu;
    // 80303C8C: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_80303C90:
    ctx->pc = 0x80303C90u;
    // 80303C90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303C94:
    ctx->pc = 0x80303C94u;
    // 80303C94: addi    r30, r30, 26576
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(26576);

label_80303C98:
    ctx->pc = 0x80303C98u;
    // 80303C98: bl      0x80304090
    {
            ctx->lr = 0x80303C9Cu;
            goto label_80304090;
    }

label_80303C9C:
    ctx->pc = 0x80303C9Cu;
    ctx->downcount -= 10;
    // 80303C9C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80303CA0:
    ctx->pc = 0x80303CA0u;
    // 80303CA0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80303CA4:
    ctx->pc = 0x80303CA4u;
    // 80303CA4: addi    r4, r4, 26712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26712);

label_80303CA8:
    ctx->pc = 0x80303CA8u;
    // 80303CA8: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303CAC:
    ctx->pc = 0x80303CACu;
    // 80303CAC: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80303CB0:
    ctx->pc = 0x80303CB0u;
    // 80303CB0: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_80303CB4:
    ctx->pc = 0x80303CB4u;
    // 80303CB4: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303CB8:
    ctx->pc = 0x80303CB8u;
    // 80303CB8: addi    r4, r30, 36
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(36);

label_80303CBC:
    ctx->pc = 0x80303CBCu;
    // 80303CBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80303CC0:
    ctx->pc = 0x80303CC0u;
    // 80303CC0: bl      0x80303FB0
    {
            ctx->lr = 0x80303CC4u;
            goto label_80303FB0;
    }

label_80303CC4:
    ctx->pc = 0x80303CC4u;
    ctx->downcount -= 5;
    // 80303CC4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80303CC8:
    ctx->pc = 0x80303CC8u;
    // 80303CC8: addi    r4, r30, 60
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(60);

label_80303CCC:
    ctx->pc = 0x80303CCCu;
    // 80303CCC: addi    r5, r30, 72
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(72);

label_80303CD0:
    ctx->pc = 0x80303CD0u;
    // 80303CD0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80303CD4:
    ctx->pc = 0x80303CD4u;
    // 80303CD4: bl      0x80303FB0
    {
            ctx->lr = 0x80303CD8u;
            goto label_80303FB0;
    }

label_80303CD8:
    ctx->pc = 0x80303CD8u;
    ctx->downcount -= 5;
    // 80303CD8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80303CDC:
    ctx->pc = 0x80303CDCu;
    // 80303CDC: addi    r4, r30, 84
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(84);

label_80303CE0:
    ctx->pc = 0x80303CE0u;
    // 80303CE0: addi    r5, r30, 96
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(96);

label_80303CE4:
    ctx->pc = 0x80303CE4u;
    // 80303CE4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80303CE8:
    ctx->pc = 0x80303CE8u;
    // 80303CE8: bl      0x80303FB0
    {
            ctx->lr = 0x80303CECu;
            goto label_80303FB0;
    }

label_80303CEC:
    ctx->pc = 0x80303CECu;
    ctx->downcount -= 5;
    // 80303CEC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80303CF0:
    ctx->pc = 0x80303CF0u;
    // 80303CF0: addi    r4, r30, 108
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(108);

label_80303CF4:
    ctx->pc = 0x80303CF4u;
    // 80303CF4: addi    r5, r30, 120
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(120);

label_80303CF8:
    ctx->pc = 0x80303CF8u;
    // 80303CF8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80303CFC:
    ctx->pc = 0x80303CFCu;
    // 80303CFC: bl      0x80303FB0
    {
            ctx->lr = 0x80303D00u;
            goto label_80303FB0;
    }

label_80303D00:
    ctx->pc = 0x80303D00u;
    ctx->downcount -= 2;
    // 80303D00: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_80303D04:
    ctx->pc = 0x80303D04u;
    // 80303D04: bl      0x801C1C48
    {
            ctx->lr = 0x80303D08u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80303D08:
    ctx->pc = 0x80303D08u;
    ctx->downcount -= 2;
    // 80303D08: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303D0C:
    ctx->pc = 0x80303D0Cu;
    // 80303D0C: bc    12, 2, 0x80303D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303D18;
        }
    }

label_80303D10:
    ctx->pc = 0x80303D10u;
    ctx->downcount -= 2;
    // 80303D10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303D14:
    ctx->pc = 0x80303D14u;
    // 80303D14: bl      0x803554FC
    {
            ctx->lr = 0x80303D18u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_80303D18:
    ctx->pc = 0x80303D18u;
    ctx->downcount -= 3;
    // 80303D18: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303D1C:
    ctx->pc = 0x80303D1Cu;
    // 80303D1C: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_80303D20:
    ctx->pc = 0x80303D20u;
    // 80303D20: bl      0x801C1C48
    {
            ctx->lr = 0x80303D24u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80303D24:
    ctx->pc = 0x80303D24u;
    ctx->downcount -= 2;
    // 80303D24: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303D28:
    ctx->pc = 0x80303D28u;
    // 80303D28: bc    12, 2, 0x80303D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303D30;
        }
    }

label_80303D2C:
    ctx->pc = 0x80303D2Cu;
    ctx->downcount -= 1;
    // 80303D2C: bl      0x80304668
    {
            ctx->lr = 0x80303D30u;
            goto label_80304668;
    }

label_80303D30:
    ctx->pc = 0x80303D30u;
    ctx->downcount -= 3;
    // 80303D30: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303D34:
    ctx->pc = 0x80303D34u;
    // 80303D34: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80303D38:
    ctx->pc = 0x80303D38u;
    // 80303D38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80303D3C:
    ctx->downcount -= 2;
    // 80303D3C: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_80303D40:
    // 80303D40: bl      0x801C1C48
    {
            ctx->lr = 0x80303D44u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80303D44:
    ctx->downcount -= 2;
    // 80303D44: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303D48:
    // 80303D48: bc    12, 2, 0x80303D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303D54;
        }
    }

label_80303D4C:
    ctx->downcount -= 2;
    // 80303D4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303D50:
    // 80303D50: bl      0x80304B68
    {
            ctx->lr = 0x80303D54u;
            goto label_80304B68;
    }

label_80303D54:
    ctx->downcount -= 6;
    // 80303D54: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80303D58:
    // 80303D58: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80303D5C:
    // 80303D5C: cmpwi   r29, 3
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

label_80303D60:
    ctx->pc = 0x80303D60u;
    // 80303D60: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303D64:
    // 80303D64: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80303D68:
    // 80303D68: bc    12, 0, 0x80303D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303D3Cu;
                return;
            }
            goto label_80303D3C;
        }
    }

label_80303D6C:
    ctx->pc = 0x80303D6Cu;
    ctx->downcount -= 2;
    // 80303D6C: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_80303D70:
    ctx->pc = 0x80303D70u;
    // 80303D70: bl      0x801C1C48
    {
            ctx->lr = 0x80303D74u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80303D74:
    ctx->pc = 0x80303D74u;
    ctx->downcount -= 2;
    // 80303D74: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303D78:
    ctx->pc = 0x80303D78u;
    // 80303D78: bc    12, 2, 0x80303D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303D80;
        }
    }

label_80303D7C:
    ctx->pc = 0x80303D7Cu;
    ctx->downcount -= 1;
    // 80303D7C: bl      0x80304D30
    {
            ctx->lr = 0x80303D80u;
            goto label_80304D30;
    }

label_80303D80:
    ctx->pc = 0x80303D80u;
    ctx->downcount -= 4;
    // 80303D80: stw     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303D84:
    ctx->pc = 0x80303D84u;
    // 80303D84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303D88:
    ctx->pc = 0x80303D88u;
    // 80303D88: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303D8C:
    ctx->pc = 0x80303D8Cu;
    // 80303D8C: bl      0x802A6408
    {
            ctx->lr = 0x80303D90u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80303D90:
    ctx->pc = 0x80303D90u;
    ctx->downcount -= 3;
    // 80303D90: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303D94:
    ctx->pc = 0x80303D94u;
    // 80303D94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303D98:
    ctx->pc = 0x80303D98u;
    // 80303D98: bl      0x802A6408
    {
            ctx->lr = 0x80303D9Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80303D9C:
    ctx->pc = 0x80303D9Cu;
    ctx->downcount -= 2;
    // 80303D9C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80303DA0:
    ctx->pc = 0x80303DA0u;
    // 80303DA0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80303DA4:
    ctx->downcount -= 4;
    // 80303DA4: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80303DA8:
    // 80303DA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303DAC:
    ctx->pc = 0x80303DACu;
    // 80303DAC: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303DB0:
    // 80303DB0: bl      0x802A6408
    {
            ctx->lr = 0x80303DB4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80303DB4:
    ctx->downcount -= 4;
    // 80303DB4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80303DB8:
    // 80303DB8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80303DBC:
    // 80303DBC: cmpwi   r29, 3
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

label_80303DC0:
    // 80303DC0: bc    12, 0, 0x80303DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303DA4u;
                return;
            }
            goto label_80303DA4;
        }
    }

label_80303DC4:
    ctx->pc = 0x80303DC4u;
    ctx->downcount -= 3;
    // 80303DC4: lwz     r4, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303DC8:
    ctx->pc = 0x80303DC8u;
    // 80303DC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303DCC:
    ctx->pc = 0x80303DCCu;
    // 80303DCC: bl      0x802A6408
    {
            ctx->lr = 0x80303DD0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80303DD0:
    ctx->pc = 0x80303DD0u;
    ctx->downcount -= 2;
    // 80303DD0: li      r3, 44
    ctx->gpr[3] = (u32)(s32)(44);

label_80303DD4:
    ctx->pc = 0x80303DD4u;
    // 80303DD4: bl      0x801C1C48
    {
            ctx->lr = 0x80303DD8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80303DD8:
    ctx->pc = 0x80303DD8u;
    ctx->downcount -= 2;
    // 80303DD8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303DDC:
    ctx->pc = 0x80303DDCu;
    // 80303DDC: bc    12, 2, 0x80303DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303DE4;
        }
    }

label_80303DE0:
    ctx->pc = 0x80303DE0u;
    ctx->downcount -= 1;
    // 80303DE0: bl      0x80304E78
    {
            ctx->lr = 0x80303DE4u;
            goto label_80304E78;
    }

label_80303DE4:
    ctx->pc = 0x80303DE4u;
    ctx->downcount -= 3;
    // 80303DE4: stw     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303DE8:
    ctx->pc = 0x80303DE8u;
    // 80303DE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80303DEC:
    ctx->pc = 0x80303DECu;
    // 80303DEC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80303DF0:
    ctx->downcount -= 4;
    // 80303DF0: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80303DF4:
    ctx->pc = 0x80303DF4u;
    // 80303DF4: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303DF8:
    // 80303DF8: cmpwi   r4, 0
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

label_80303DFC:
    // 80303DFC: bc    12, 2, 0x80303E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303E04;
        }
    }

label_80303E00:
    ctx->downcount -= 1;
    // 80303E00: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_80303E04:
    ctx->pc = 0x80303E04u;
    ctx->downcount -= 2;
    // 80303E04: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303E08:
    // 80303E08: bl      0x8026F1B0
    {
            ctx->lr = 0x80303E0Cu;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_80303E0C:
    ctx->downcount -= 4;
    // 80303E0C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80303E10:
    // 80303E10: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80303E14:
    // 80303E14: cmpwi   r29, 3
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

label_80303E18:
    // 80303E18: bc    12, 0, 0x80303DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303DF0u;
                return;
            }
            goto label_80303DF0;
        }
    }

label_80303E1C:
    ctx->pc = 0x80303E1Cu;
    ctx->downcount -= 6;
    // 80303E1C: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303E20:
    ctx->pc = 0x80303E20u;
    // 80303E20: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_80303E24:
    ctx->pc = 0x80303E24u;
    // 80303E24: addi    r4, r30, 22184
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22184);

label_80303E28:
    ctx->pc = 0x80303E28u;
    // 80303E28: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303E2C:
    ctx->pc = 0x80303E2Cu;
    // 80303E2C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303E30:
    ctx->pc = 0x80303E30u;
    // 80303E30: bl      0x80370BD4
    {
            ctx->lr = 0x80303E34u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303E34:
    ctx->pc = 0x80303E34u;
    ctx->downcount -= 6;
    // 80303E34: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303E38:
    ctx->pc = 0x80303E38u;
    // 80303E38: addi    r4, r30, 22184
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22184);

label_80303E3C:
    ctx->pc = 0x80303E3Cu;
    // 80303E3C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80303E40:
    ctx->pc = 0x80303E40u;
    // 80303E40: lwz     r30, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80303E44:
    ctx->pc = 0x80303E44u;
    // 80303E44: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80303E48:
    ctx->pc = 0x80303E48u;
    // 80303E48: bl      0x80370BD4
    {
            ctx->lr = 0x80303E4Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80303E4C:
    ctx->pc = 0x80303E4Cu;
    ctx->downcount -= 5;
    // 80303E4C: lwz     r4, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303E50:
    ctx->pc = 0x80303E50u;
    // 80303E50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303E54:
    ctx->pc = 0x80303E54u;
    // 80303E54: lwz     r29, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80303E58:
    ctx->pc = 0x80303E58u;
    // 80303E58: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80303E5C:
    ctx->pc = 0x80303E5Cu;
    // 80303E5C: bl      0x80300C14
    {
            ctx->lr = 0x80303E60u;
            ctx->pc = 0x80300C14u;
            return;
    }

label_80303E60:
    ctx->pc = 0x80303E60u;
    ctx->downcount -= 4;
    // 80303E60: stw     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303E64:
    ctx->pc = 0x80303E64u;
    // 80303E64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303E68:
    ctx->pc = 0x80303E68u;
    // 80303E68: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80303E6C:
    ctx->pc = 0x80303E6Cu;
    // 80303E6C: bl      0x80300BA0
    {
            ctx->lr = 0x80303E70u;
            ctx->pc = 0x80300BA0u;
            return;
    }

label_80303E70:
    ctx->pc = 0x80303E70u;
    ctx->downcount -= 24;
    // 80303E70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303E74:
    ctx->pc = 0x80303E74u;
    // 80303E74: stw     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303E78:
    ctx->pc = 0x80303E78u;
    // 80303E78: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80303E7C:
    ctx->pc = 0x80303E7Cu;
    // 80303E7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303E80:
    ctx->pc = 0x80303E80u;
    // 80303E80: stw     r4, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303E84:
    ctx->pc = 0x80303E84u;
    // 80303E84: stw     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303E88:
    ctx->pc = 0x80303E88u;
    // 80303E88: stw     r4, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303E8C:
    ctx->pc = 0x80303E8Cu;
    // 80303E8C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303E90:
    ctx->pc = 0x80303E90u;
    // 80303E90: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303E94:
    ctx->pc = 0x80303E94u;
    // 80303E94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303E98:
    ctx->pc = 0x80303E98u;
    // 80303E98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303E9C:
    ctx->pc = 0x80303E9Cu;
    // 80303E9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80303EA0:
    ctx->pc = 0x80303EA0u;
    // 80303EA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303EA4:
    ctx->pc = 0x80303EA4u;
    ctx->downcount -= 18;
    // 80303EA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303EA8:
    ctx->pc = 0x80303EA8u;
    // 80303EA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303EAC:
    // 80303EAC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303EB0:
    ctx->pc = 0x80303EB0u;
    // 80303EB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303EB4:
    ctx->pc = 0x80303EB4u;
    // 80303EB4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303EB8:
    // 80303EB8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303EBC:
    // 80303EBC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303EC0:
    // 80303EC0: bc    12, 2, 0x80303EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303EF0;
        }
    }

label_80303EC4:
    ctx->downcount -= 1;
    // 80303EC4: bc    12, 2, 0x80303EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303EE0;
        }
    }

label_80303EC8:
    ctx->downcount -= 3;
    // 80303EC8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80303ECC:
    // 80303ECC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80303ED0:
    // 80303ED0: bl      0x80303F70
    {
            ctx->lr = 0x80303ED4u;
            goto label_80303F70;
    }

label_80303ED4:
    ctx->downcount -= 3;
    // 80303ED4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303ED8:
    // 80303ED8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303EDC:
    // 80303EDC: bl      0x801ED118
    {
            ctx->lr = 0x80303EE0u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80303EE0:
    ctx->downcount -= 2;
    // 80303EE0: cmpwi   r31, 0
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

label_80303EE4:
    // 80303EE4: bc    4, 1, 0x80303EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303EF0;
        }
    }

label_80303EE8:
    ctx->downcount -= 2;
    // 80303EE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303EEC:
    // 80303EEC: bl      0x801C1C90
    {
            ctx->lr = 0x80303EF0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80303EF0:
    ctx->downcount -= 17;
    // 80303EF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303EF4:
    ctx->pc = 0x80303EF4u;
    // 80303EF4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303EF8:
    ctx->pc = 0x80303EF8u;
    // 80303EF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303EFC:
    ctx->pc = 0x80303EFCu;
    // 80303EFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303F00:
    // 80303F00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303F04:
    ctx->pc = 0x80303F04u;
    // 80303F04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303F08:
    ctx->pc = 0x80303F08u;
    ctx->downcount -= 18;
    // 80303F08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303F0C:
    ctx->pc = 0x80303F0Cu;
    // 80303F0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303F10:
    // 80303F10: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303F14:
    ctx->pc = 0x80303F14u;
    // 80303F14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303F18:
    ctx->pc = 0x80303F18u;
    // 80303F18: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303F1C:
    // 80303F1C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303F20:
    // 80303F20: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303F24:
    // 80303F24: bc    12, 2, 0x80303F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303F58;
        }
    }

label_80303F28:
    ctx->downcount -= 1;
    // 80303F28: bc    12, 2, 0x80303F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303F48;
        }
    }

label_80303F2C:
    ctx->downcount -= 1;
    // 80303F2C: bc    12, 2, 0x80303F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303F48;
        }
    }

label_80303F30:
    ctx->downcount -= 3;
    // 80303F30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303F34:
    // 80303F34: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80303F38:
    // 80303F38: bl      0x801ED098
    {
            ctx->lr = 0x80303F3Cu;
            ctx->pc = 0x801ED098u;
            return;
    }

label_80303F3C:
    ctx->downcount -= 3;
    // 80303F3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303F40:
    // 80303F40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80303F44:
    // 80303F44: bl      0x801ED058
    {
            ctx->lr = 0x80303F48u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_80303F48:
    ctx->downcount -= 2;
    // 80303F48: cmpwi   r31, 0
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

label_80303F4C:
    // 80303F4C: bc    4, 1, 0x80303F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303F58;
        }
    }

label_80303F50:
    ctx->downcount -= 2;
    // 80303F50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303F54:
    // 80303F54: bl      0x801C1C90
    {
            ctx->lr = 0x80303F58u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80303F58:
    ctx->downcount -= 17;
    // 80303F58: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303F5C:
    ctx->pc = 0x80303F5Cu;
    // 80303F5C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303F60:
    ctx->pc = 0x80303F60u;
    // 80303F60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303F64:
    ctx->pc = 0x80303F64u;
    // 80303F64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303F68:
    // 80303F68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303F6C:
    ctx->pc = 0x80303F6Cu;
    // 80303F6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303F70:
    ctx->pc = 0x80303F70u;
    ctx->downcount -= 7;
    // 80303F70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303F74:
    ctx->pc = 0x80303F74u;
    // 80303F74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303F78:
    // 80303F78: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303F7C:
    ctx->pc = 0x80303F7Cu;
    // 80303F7C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303F80:
    ctx->pc = 0x80303F80u;
    // 80303F80: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80303F84:
    // 80303F84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303F88:
    // 80303F88: bc    12, 2, 0x80303F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80303F98;
        }
    }

label_80303F8C:
    ctx->downcount -= 2;
    // 80303F8C: cmpwi   r4, 0
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

label_80303F90:
    // 80303F90: bc    4, 1, 0x80303F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303F98;
        }
    }

label_80303F94:
    ctx->downcount -= 1;
    // 80303F94: bl      0x801C1C90
    {
            ctx->lr = 0x80303F98u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80303F98:
    ctx->downcount -= 7;
    // 80303F98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303F9C:
    ctx->pc = 0x80303F9Cu;
    // 80303F9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80303FA0:
    ctx->pc = 0x80303FA0u;
    // 80303FA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303FA4:
    ctx->pc = 0x80303FA4u;
    // 80303FA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303FA8:
    // 80303FA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80303FAC:
    ctx->pc = 0x80303FACu;
    // 80303FAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80303FB0:
    ctx->pc = 0x80303FB0u;
    ctx->downcount -= 20;
    // 80303FB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303FB4:
    ctx->pc = 0x80303FB4u;
    // 80303FB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303FB8:
    ctx->pc = 0x80303FB8u;
    // 80303FB8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303FBC:
    ctx->pc = 0x80303FBCu;
    // 80303FBC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80303FC0:
    // 80303FC0: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80303FC4:
    // 80303FC4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303FC8:
    // 80303FC8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303FCC:
    // 80303FCC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80303FD0:
    // 80303FD0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303FD4:
    // 80303FD4: bl      0x803456D0
    {
            ctx->lr = 0x80303FD8u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80303FD8:
    ctx->downcount -= 34;
    // 80303FD8: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80303FDC:
    ctx->pc = 0x80303FDCu;
    // 80303FDC: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303FE0:
    ctx->pc = 0x80303FE0u;
    // 80303FE0: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303FE4:
    ctx->pc = 0x80303FE4u;
    // 80303FE4: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80303FE8:
    // 80303FE8: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80303FEC:
    ctx->pc = 0x80303FECu;
    // 80303FEC: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303FF0:
    ctx->pc = 0x80303FF0u;
    // 80303FF0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303FF4:
    ctx->pc = 0x80303FF4u;
    // 80303FF4: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80303FF8:
    ctx->pc = 0x80303FF8u;
    // 80303FF8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303FFC:
    ctx->pc = 0x80303FFCu;
    // 80303FFC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304000:
    ctx->pc = 0x80304000u;
    // 80304000: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304004:
    ctx->pc = 0x80304004u;
    // 80304004: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304008:
    ctx->pc = 0x80304008u;
    // 80304008: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030400C:
    ctx->pc = 0x8030400Cu;
    // 8030400C: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_80304010:
    ctx->pc = 0x80304010u;
    // 80304010: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304014:
    ctx->pc = 0x80304014u;
    // 80304014: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304018:
    ctx->pc = 0x80304018u;
    // 80304018: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030401C:
    ctx->pc = 0x8030401Cu;
    // 8030401C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304020:
    ctx->pc = 0x80304020u;
    // 80304020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304024:
    // 80304024: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304028:
    ctx->pc = 0x80304028u;
    // 80304028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030402C:
    ctx->downcount -= 2;
    // 8030402C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80304030:
    ctx->pc = 0x80304030u;
    // 80304030: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304034:
    ctx->downcount -= 2;
    // 80304034: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80304038:
    ctx->pc = 0x80304038u;
    // 80304038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030403C:
    ctx->pc = 0x8030403Cu;
    ctx->downcount -= 10;
    // 8030403C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304040:
    ctx->pc = 0x80304040u;
    // 80304040: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304044:
    ctx->pc = 0x80304044u;
    // 80304044: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304048:
    ctx->pc = 0x80304048u;
    // 80304048: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030404C:
    // 8030404C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304050:
    ctx->pc = 0x80304050u;
    // 80304050: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80304054:
    ctx->pc = 0x80304054u;
    // 80304054: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80304058:
    ctx->pc = 0x80304058u;
    // 80304058: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030405C:
    ctx->pc = 0x8030405Cu;
    // 8030405C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80304060u;
            ctx->pc = target;
            return;
        }
    }

label_80304060:
    ctx->downcount -= 2;
    // 80304060: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80304064:
    // 80304064: bl      0x80304398
    {
            ctx->lr = 0x80304068u;
            goto label_80304398;
    }

label_80304068:
    ctx->pc = 0x80304068u;
    ctx->downcount -= 6;
    // 80304068: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030406C:
    // 8030406C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304070:
    ctx->pc = 0x80304070u;
    // 80304070: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80304074:
    ctx->pc = 0x80304074u;
    // 80304074: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80304078:
    ctx->pc = 0x80304078u;
    // 80304078: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030407Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030407C:
    ctx->pc = 0x8030407Cu;
    ctx->downcount -= 6;
    // 8030407C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304080:
    ctx->pc = 0x80304080u;
    // 80304080: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304084:
    ctx->pc = 0x80304084u;
    // 80304084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304088:
    // 80304088: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030408C:
    ctx->pc = 0x8030408Cu;
    // 8030408C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304090:
    ctx->pc = 0x80304090u;
    ctx->downcount -= 21;
    // 80304090: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304094:
    ctx->pc = 0x80304094u;
    // 80304094: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304098:
    ctx->pc = 0x80304098u;
    // 80304098: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030409C:
    ctx->pc = 0x8030409Cu;
    // 8030409C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803040A0:
    // 803040A0: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_803040A4:
    // 803040A4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803040A8:
    // 803040A8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803040AC:
    // 803040AC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803040B0:
    // 803040B0: addi    r30, r30, 26576
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(26576);

label_803040B4:
    // 803040B4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803040B8:
    // 803040B8: bl      0x802A6748
    {
            ctx->lr = 0x803040BCu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_803040BC:
    ctx->downcount -= 7;
    // 803040BC: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_803040C0:
    // 803040C0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803040C4:
    // 803040C4: addi    r4, r4, 27024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27024);

label_803040C8:
    ctx->pc = 0x803040C8u;
    // 803040C8: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803040CC:
    // 803040CC: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_803040D0:
    ctx->pc = 0x803040D0u;
    // 803040D0: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803040D4:
    // 803040D4: bl      0x801ED17C
    {
            ctx->lr = 0x803040D8u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_803040D8:
    ctx->downcount -= 6;
    // 803040D8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803040DC:
    // 803040DC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803040E0:
    // 803040E0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803040E4:
    // 803040E4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803040E8:
    // 803040E8: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803040EC:
    // 803040EC: bl      0x8030421C
    {
            ctx->lr = 0x803040F0u;
            goto label_8030421C;
    }

label_803040F0:
    ctx->downcount -= 3;
    // 803040F0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803040F4:
    // 803040F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803040F8:
    // 803040F8: bl      0x802A5D48
    {
            ctx->lr = 0x803040FCu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803040FC:
    ctx->downcount -= 6;
    // 803040FC: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304100:
    // 80304100: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80304104:
    // 80304104: addi    r4, r30, 292
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(292);

label_80304108:
    // 80304108: addi    r5, r30, 304
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(304);

label_8030410C:
    // 8030410C: addi    r6, r30, 316
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(316);

label_80304110:
    // 80304110: bl      0x8030433C
    {
            ctx->lr = 0x80304114u;
            goto label_8030433C;
    }

label_80304114:
    ctx->downcount -= 2;
    // 80304114: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80304118:
    // 80304118: bl      0x802A609C
    {
            ctx->lr = 0x8030411Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_8030411C:
    ctx->downcount -= 10;
    // 8030411C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80304120:
    // 80304120: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80304124:
    // 80304124: addi    r3, r3, 26904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26904);

label_80304128:
    ctx->pc = 0x80304128u;
    // 80304128: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030412C:
    // 8030412C: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_80304130:
    ctx->pc = 0x80304130u;
    // 80304130: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304134:
    // 80304134: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80304138:
    // 80304138: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030413C:
    ctx->pc = 0x8030413Cu;
    // 8030413C: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304140:
    // 80304140: bl      0x802A5D48
    {
            ctx->lr = 0x80304144u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80304144:
    ctx->downcount -= 6;
    // 80304144: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_80304148:
    // 80304148: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030414C:
    // 8030414C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80304150:
    // 80304150: addi    r5, r30, 256
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(256);

label_80304154:
    // 80304154: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_80304158:
    // 80304158: bl      0x80303FB0
    {
            ctx->lr = 0x8030415Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303FB0u;
                return;
            }
            goto label_80303FB0;
    }

label_8030415C:
    ctx->downcount -= 3;
    // 8030415C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80304160:
    // 80304160: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80304164:
    // 80304164: bl      0x802A5D48
    {
            ctx->lr = 0x80304168u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80304168:
    ctx->downcount -= 5;
    // 80304168: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030416C:
    // 8030416C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80304170:
    // 80304170: addi    r4, r30, 268
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(268);

label_80304174:
    // 80304174: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_80304178:
    // 80304178: bl      0x80303FB0
    {
            ctx->lr = 0x8030417Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303FB0u;
                return;
            }
            goto label_80303FB0;
    }

label_8030417C:
    ctx->downcount -= 3;
    // 8030417C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80304180:
    // 80304180: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80304184:
    // 80304184: bl      0x802A5D48
    {
            ctx->lr = 0x80304188u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80304188:
    ctx->downcount -= 5;
    // 80304188: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030418C:
    // 8030418C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80304190:
    // 80304190: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_80304194:
    // 80304194: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_80304198:
    // 80304198: bl      0x80303FB0
    {
            ctx->lr = 0x8030419Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303FB0u;
                return;
            }
            goto label_80303FB0;
    }

label_8030419C:
    ctx->downcount -= 17;
    // 8030419C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803041A0:
    ctx->pc = 0x803041A0u;
    // 803041A0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803041A4:
    ctx->pc = 0x803041A4u;
    // 803041A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803041A8:
    ctx->pc = 0x803041A8u;
    // 803041A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803041AC:
    // 803041AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803041B0:
    ctx->pc = 0x803041B0u;
    // 803041B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803041B4:
    ctx->pc = 0x803041B4u;
    ctx->downcount -= 18;
    // 803041B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803041B8:
    ctx->pc = 0x803041B8u;
    // 803041B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803041BC:
    // 803041BC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803041C0:
    ctx->pc = 0x803041C0u;
    // 803041C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803041C4:
    ctx->pc = 0x803041C4u;
    // 803041C4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803041C8:
    // 803041C8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803041CC:
    // 803041CC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803041D0:
    // 803041D0: bc    12, 2, 0x80304204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304204;
        }
    }

label_803041D4:
    ctx->downcount -= 1;
    // 803041D4: bc    12, 2, 0x803041F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803041F4;
        }
    }

label_803041D8:
    ctx->downcount -= 1;
    // 803041D8: bc    12, 2, 0x803041F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803041F4;
        }
    }

label_803041DC:
    ctx->downcount -= 3;
    // 803041DC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803041E0:
    // 803041E0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803041E4:
    // 803041E4: bl      0x80303F70
    {
            ctx->lr = 0x803041E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303F70u;
                return;
            }
            goto label_80303F70;
    }

label_803041E8:
    ctx->downcount -= 3;
    // 803041E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803041EC:
    // 803041EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803041F0:
    // 803041F0: bl      0x801ED118
    {
            ctx->lr = 0x803041F4u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_803041F4:
    ctx->downcount -= 2;
    // 803041F4: cmpwi   r31, 0
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

label_803041F8:
    // 803041F8: bc    4, 1, 0x80304204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304204;
        }
    }

label_803041FC:
    ctx->downcount -= 2;
    // 803041FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304200:
    // 80304200: bl      0x801C1C90
    {
            ctx->lr = 0x80304204u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80304204:
    ctx->downcount -= 17;
    // 80304204: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304208:
    ctx->pc = 0x80304208u;
    // 80304208: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030420C:
    ctx->pc = 0x8030420Cu;
    // 8030420C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304210:
    ctx->pc = 0x80304210u;
    // 80304210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304214:
    // 80304214: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304218:
    ctx->pc = 0x80304218u;
    // 80304218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030421C:
    ctx->pc = 0x8030421Cu;
    ctx->downcount -= 17;
    // 8030421C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304220:
    ctx->pc = 0x80304220u;
    // 80304220: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304224:
    ctx->pc = 0x80304224u;
    // 80304224: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304228:
    ctx->pc = 0x80304228u;
    // 80304228: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030422C:
    // 8030422C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304230:
    // 80304230: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304234:
    // 80304234: bl      0x803457F4
    {
            ctx->lr = 0x80304238u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_80304238:
    ctx->pc = 0x80304238u;
    ctx->downcount -= 11;
    // 80304238: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030423C:
    // 8030423C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80304240:
    // 80304240: addi    r3, r3, 27144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27144);

label_80304244:
    ctx->pc = 0x80304244u;
    // 80304244: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304248:
    // 80304248: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030424C:
    ctx->pc = 0x8030424Cu;
    // 8030424C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80304250:
    ctx->pc = 0x80304250u;
    // 80304250: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80304254:
    // 80304254: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80304258:
    // 80304258: bl      0x801C1C80
    {
            ctx->lr = 0x8030425Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030425C:
    ctx->pc = 0x8030425Cu;
    ctx->downcount -= 8;
    // 8030425C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304260:
    // 80304260: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80304264:
    ctx->pc = 0x80304264u;
    // 80304264: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304268:
    // 80304268: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030426C:
    ctx->pc = 0x8030426Cu;
    // 8030426C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80304270:
    // 80304270: bl      0x801C1C80
    {
            ctx->lr = 0x80304274u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80304274:
    ctx->pc = 0x80304274u;
    ctx->downcount -= 8;
    // 80304274: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304278:
    // 80304278: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030427C:
    ctx->pc = 0x8030427Cu;
    // 8030427C: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304280:
    // 80304280: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80304284:
    ctx->pc = 0x80304284u;
    // 80304284: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80304288:
    // 80304288: bl      0x801C1C80
    {
            ctx->lr = 0x8030428Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030428C:
    ctx->downcount -= 6;
    // 8030428C: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_80304290:
    ctx->pc = 0x80304290u;
    // 80304290: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304294:
    // 80304294: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_80304298:
    // 80304298: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030429C:
    // 8030429C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803042A0:
    // 803042A0: b       0x8030430C
    {
            goto label_8030430C;
    }

label_803042A4:
    loop_803042A4(ctx);
    if (ctx->pc == 0x80304318u) goto label_80304318;
    return;
label_803042A8:
    // 803042A8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_803042AC:
    ctx->pc = 0x803042ACu;
    // 803042AC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803042B0:
    // 803042B0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803042B4:
    ctx->pc = 0x803042B4u;
    // 803042B4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803042B8:
    ctx->pc = 0x803042B8u;
    // 803042B8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803042BC:
    ctx->pc = 0x803042BCu;
    // 803042BC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803042C0:
    ctx->pc = 0x803042C0u;
    // 803042C0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803042C4:
    ctx->pc = 0x803042C4u;
    // 803042C4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803042C8:
    ctx->pc = 0x803042C8u;
    // 803042C8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803042CC:
    ctx->pc = 0x803042CCu;
    // 803042CC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803042D0:
    // 803042D0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803042D4:
    ctx->pc = 0x803042D4u;
    // 803042D4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803042D8:
    ctx->pc = 0x803042D8u;
    // 803042D8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803042DC:
    ctx->pc = 0x803042DCu;
    // 803042DC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803042E0:
    ctx->pc = 0x803042E0u;
    // 803042E0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803042E4:
    ctx->pc = 0x803042E4u;
    // 803042E4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803042E8:
    ctx->pc = 0x803042E8u;
    // 803042E8: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803042EC:
    ctx->pc = 0x803042ECu;
    // 803042EC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803042F0:
    // 803042F0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803042F4:
    ctx->pc = 0x803042F4u;
    // 803042F4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803042F8:
    ctx->pc = 0x803042F8u;
    // 803042F8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803042FC:
    // 803042FC: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80304300:
    ctx->pc = 0x80304300u;
    // 80304300: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304304:
    ctx->pc = 0x80304304u;
    // 80304304: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304308:
    ctx->pc = 0x80304308u;
    // 80304308: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030430C:
    ctx->pc = 0x8030430Cu;
    ctx->downcount -= 3;
    // 8030430C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304310:
    // 80304310: cmpw    r7, r0
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

label_80304314:
    // 80304314: bc    12, 0, 0x803042A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803042A4u;
                return;
            }
            goto label_803042A4;
        }
    }

label_80304318:
    ctx->downcount -= 3;
    // 80304318: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030431C:
    // 8030431C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304320:
    // 80304320: bl      0x803457CC
    {
            ctx->lr = 0x80304324u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80304324:
    ctx->downcount -= 17;
    // 80304324: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304328:
    ctx->pc = 0x80304328u;
    // 80304328: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030432C:
    ctx->pc = 0x8030432Cu;
    // 8030432C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304330:
    ctx->pc = 0x80304330u;
    // 80304330: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304334:
    // 80304334: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304338:
    ctx->pc = 0x80304338u;
    // 80304338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030433C:
    ctx->pc = 0x8030433Cu;
    ctx->downcount -= 19;
    // 8030433C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304340:
    ctx->pc = 0x80304340u;
    // 80304340: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304344:
    ctx->pc = 0x80304344u;
    // 80304344: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304348:
    ctx->pc = 0x80304348u;
    // 80304348: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030434C:
    // 8030434C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80304350:
    // 80304350: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80304354:
    // 80304354: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304358:
    // 80304358: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030435C:
    // 8030435C: bl      0x80303FB0
    {
            ctx->lr = 0x80304360u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303FB0u;
                return;
            }
            goto label_80303FB0;
    }

label_80304360:
    ctx->downcount -= 27;
    // 80304360: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80304364:
    ctx->pc = 0x80304364u;
    // 80304364: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80304368:
    ctx->pc = 0x80304368u;
    // 80304368: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030436C:
    ctx->pc = 0x8030436Cu;
    // 8030436C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304370:
    // 80304370: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80304374:
    ctx->pc = 0x80304374u;
    // 80304374: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304378:
    ctx->pc = 0x80304378u;
    // 80304378: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030437C:
    ctx->pc = 0x8030437Cu;
    // 8030437C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304380:
    ctx->pc = 0x80304380u;
    // 80304380: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304384:
    ctx->pc = 0x80304384u;
    // 80304384: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304388:
    ctx->pc = 0x80304388u;
    // 80304388: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030438C:
    ctx->pc = 0x8030438Cu;
    // 8030438C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304390:
    // 80304390: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304394:
    ctx->pc = 0x80304394u;
    // 80304394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304398:
    ctx->pc = 0x80304398u;
    ctx->downcount -= 8;
    // 80304398: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030439C:
    ctx->pc = 0x8030439Cu;
    // 8030439C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803043A0:
    ctx->pc = 0x803043A0u;
    // 803043A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803043A4:
    ctx->pc = 0x803043A4u;
    // 803043A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803043A8:
    // 803043A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803043AC:
    ctx->pc = 0x803043ACu;
    // 803043AC: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803043B0:
    // 803043B0: cmpwi   r0, 0
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

label_803043B4:
    // 803043B4: bc    12, 2, 0x803043D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803043D8;
        }
    }

label_803043B8:
    ctx->pc = 0x803043B8u;
    ctx->downcount -= 3;
    // 803043B8: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803043BC:
    // 803043BC: cmpwi   r0, 0
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

label_803043C0:
    // 803043C0: bc    12, 2, 0x803043C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803043C8;
        }
    }

label_803043C4:
    ctx->downcount -= 1;
    // 803043C4: bl      0x803044BC
    {
            ctx->lr = 0x803043C8u;
            goto label_803044BC;
    }

label_803043C8:
    ctx->downcount -= 2;
    // 803043C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803043CC:
    // 803043CC: bl      0x803456D4
    {
            ctx->lr = 0x803043D0u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_803043D0:
    ctx->downcount -= 2;
    // 803043D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803043D4:
    // 803043D4: bl      0x803043FC
    {
            ctx->lr = 0x803043D8u;
            goto label_803043FC;
    }

label_803043D8:
    ctx->downcount -= 2;
    // 803043D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803043DC:
    // 803043DC: bl      0x8030445C
    {
            ctx->lr = 0x803043E0u;
            goto label_8030445C;
    }

label_803043E0:
    ctx->downcount -= 2;
    // 803043E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803043E4:
    // 803043E4: bl      0x803456F8
    {
            ctx->lr = 0x803043E8u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_803043E8:
    ctx->pc = 0x803043E8u;
    ctx->downcount -= 6;
    // 803043E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803043EC:
    ctx->pc = 0x803043ECu;
    // 803043EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803043F0:
    ctx->pc = 0x803043F0u;
    // 803043F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803043F4:
    // 803043F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803043F8:
    ctx->pc = 0x803043F8u;
    // 803043F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803043FC:
    ctx->pc = 0x803043FCu;
    ctx->downcount -= 12;
    // 803043FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304400:
    ctx->pc = 0x80304400u;
    // 80304400: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304404:
    ctx->pc = 0x80304404u;
    // 80304404: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304408:
    ctx->pc = 0x80304408u;
    // 80304408: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030440C:
    // 8030440C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304410:
    ctx->pc = 0x80304410u;
    // 80304410: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304414:
    ctx->pc = 0x80304414u;
    // 80304414: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304418:
    // 80304418: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030441C:
    // 8030441C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80304420:
    // 80304420: bl      0x800076B4
    {
            ctx->lr = 0x80304424u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80304424:
    ctx->downcount -= 2;
    // 80304424: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80304428:
    // 80304428: bc    12, 2, 0x80304448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304448;
        }
    }

label_8030442C:
    ctx->pc = 0x8030442Cu;
    ctx->downcount -= 8;
    // 8030442C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304430:
    ctx->pc = 0x80304430u;
    // 80304430: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80304434:
    // 80304434: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80304438:
    ctx->pc = 0x80304438u;
    // 80304438: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030443C:
    // 8030443C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80304440:
    // 80304440: bl      0x800076E4
    {
            ctx->lr = 0x80304444u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80304444:
    ctx->downcount -= 1;
    // 80304444: nop
    // nop

label_80304448:
    ctx->pc = 0x80304448u;
    ctx->downcount -= 6;
    // 80304448: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030444C:
    ctx->pc = 0x8030444Cu;
    // 8030444C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304450:
    ctx->pc = 0x80304450u;
    // 80304450: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304454:
    // 80304454: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304458:
    ctx->pc = 0x80304458u;
    // 80304458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030445C:
    ctx->pc = 0x8030445Cu;
    ctx->downcount -= 12;
    // 8030445C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304460:
    ctx->pc = 0x80304460u;
    // 80304460: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304464:
    ctx->pc = 0x80304464u;
    // 80304464: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304468:
    ctx->pc = 0x80304468u;
    // 80304468: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030446C:
    // 8030446C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304470:
    ctx->pc = 0x80304470u;
    // 80304470: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304474:
    ctx->pc = 0x80304474u;
    // 80304474: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304478:
    // 80304478: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030447C:
    // 8030447C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80304480:
    // 80304480: bl      0x800076B4
    {
            ctx->lr = 0x80304484u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80304484:
    ctx->downcount -= 2;
    // 80304484: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80304488:
    // 80304488: bc    12, 2, 0x803044A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803044A8;
        }
    }

label_8030448C:
    ctx->pc = 0x8030448Cu;
    ctx->downcount -= 8;
    // 8030448C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304490:
    ctx->pc = 0x80304490u;
    // 80304490: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80304494:
    // 80304494: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80304498:
    ctx->pc = 0x80304498u;
    // 80304498: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030449C:
    // 8030449C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_803044A0:
    // 803044A0: bl      0x800076E4
    {
            ctx->lr = 0x803044A4u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_803044A4:
    ctx->downcount -= 1;
    // 803044A4: nop
    // nop

label_803044A8:
    ctx->pc = 0x803044A8u;
    ctx->downcount -= 6;
    // 803044A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803044AC:
    ctx->pc = 0x803044ACu;
    // 803044AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803044B0:
    ctx->pc = 0x803044B0u;
    // 803044B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803044B4:
    // 803044B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803044B8:
    ctx->pc = 0x803044B8u;
    // 803044B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803044BC:
    ctx->pc = 0x803044BCu;
    ctx->downcount -= 12;
    // 803044BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803044C0:
    ctx->pc = 0x803044C0u;
    // 803044C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803044C4:
    ctx->pc = 0x803044C4u;
    // 803044C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803044C8:
    ctx->pc = 0x803044C8u;
    // 803044C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803044CC:
    // 803044CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803044D0:
    ctx->pc = 0x803044D0u;
    // 803044D0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803044D4:
    ctx->pc = 0x803044D4u;
    // 803044D4: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803044D8:
    // 803044D8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803044DC:
    // 803044DC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803044E0:
    // 803044E0: bl      0x800076B4
    {
            ctx->lr = 0x803044E4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_803044E4:
    ctx->downcount -= 2;
    // 803044E4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803044E8:
    // 803044E8: bc    12, 2, 0x80304508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304508;
        }
    }

label_803044EC:
    ctx->pc = 0x803044ECu;
    ctx->downcount -= 8;
    // 803044EC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803044F0:
    ctx->pc = 0x803044F0u;
    // 803044F0: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803044F4:
    // 803044F4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803044F8:
    ctx->pc = 0x803044F8u;
    // 803044F8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803044FC:
    // 803044FC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80304500:
    // 80304500: bl      0x800076E4
    {
            ctx->lr = 0x80304504u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80304504:
    ctx->downcount -= 1;
    // 80304504: nop
    // nop

label_80304508:
    ctx->pc = 0x80304508u;
    ctx->downcount -= 6;
    // 80304508: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030450C:
    ctx->pc = 0x8030450Cu;
    // 8030450C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304510:
    ctx->pc = 0x80304510u;
    // 80304510: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304514:
    // 80304514: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304518:
    ctx->pc = 0x80304518u;
    // 80304518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030451C:
    ctx->downcount -= 2;
    // 8030451C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304520:
    // 80304520: b       0x80303F08
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303F08u;
                return;
            }
            goto label_80303F08;
    }

label_80304524:
    ctx->downcount -= 2;
    // 80304524: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304528:
    // 80304528: b       0x80303EA4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303EA4u;
                return;
            }
            goto label_80303EA4;
    }

label_8030452C:
    ctx->downcount -= 2;
    // 8030452C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304530:
    // 80304530: b       0x803041B4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803041B4u;
                return;
            }
            goto label_803041B4;
    }

label_80304534:
    ctx->pc = 0x80304534u;
    ctx->downcount -= 13;
    // 80304534: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304538:
    ctx->pc = 0x80304538u;
    // 80304538: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030453C:
    ctx->pc = 0x8030453Cu;
    // 8030453C: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304540:
    ctx->pc = 0x80304540u;
    // 80304540: lis     r8, -32665
    ctx->gpr[8] = ((u32)(s32)(-32665) << 16);

label_80304544:
    ctx->pc = 0x80304544u;
    // 80304544: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304548:
    ctx->pc = 0x80304548u;
    // 80304548: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030454C:
    ctx->pc = 0x8030454Cu;
    // 8030454C: addi    r5, r8, 17224
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(17224);

label_80304550:
    ctx->pc = 0x80304550u;
    // 80304550: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80304554:
    ctx->pc = 0x80304554u;
    // 80304554: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304558:
    ctx->pc = 0x80304558u;
    // 80304558: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030455C:
    ctx->pc = 0x8030455Cu;
    // 8030455C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80304560:
    ctx->pc = 0x80304560u;
    // 80304560: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304564:
    ctx->pc = 0x80304564u;
    // 80304564: bl      0x8000D074
    {
            ctx->lr = 0x80304568u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80304568:
    ctx->pc = 0x80304568u;
    ctx->downcount -= 3;
    // 80304568: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030456C:
    ctx->pc = 0x8030456Cu;
    // 8030456C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80304570:
    ctx->pc = 0x80304570u;
    // 80304570: bl      0x8026F970
    {
            ctx->lr = 0x80304574u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304574:
    ctx->pc = 0x80304574u;
    ctx->downcount -= 6;
    // 80304574: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304578:
    ctx->pc = 0x80304578u;
    // 80304578: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030457C:
    ctx->pc = 0x8030457Cu;
    // 8030457C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304580:
    ctx->pc = 0x80304580u;
    // 80304580: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304584:
    ctx->pc = 0x80304584u;
    // 80304584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304588:
    ctx->pc = 0x80304588u;
    ctx->downcount -= 7;
    // 80304588: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030458C:
    ctx->pc = 0x8030458Cu;
    // 8030458C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304590:
    ctx->pc = 0x80304590u;
    // 80304590: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304594:
    ctx->pc = 0x80304594u;
    // 80304594: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304598:
    ctx->pc = 0x80304598u;
    // 80304598: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030459C:
    ctx->pc = 0x8030459Cu;
    // 8030459C: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_803045A0:
    ctx->pc = 0x803045A0u;
    // 803045A0: bl      0x8026F6CC
    {
            ctx->lr = 0x803045A4u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_803045A4:
    ctx->pc = 0x803045A4u;
    ctx->downcount -= 6;
    // 803045A4: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_803045A8:
    ctx->pc = 0x803045A8u;
    // 803045A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803045AC:
    ctx->pc = 0x803045ACu;
    // 803045AC: addi    r5, r5, 17224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17224);

label_803045B0:
    ctx->pc = 0x803045B0u;
    // 803045B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803045B4:
    ctx->pc = 0x803045B4u;
    // 803045B4: addi    r5, r5, 17
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17);

label_803045B8:
    ctx->pc = 0x803045B8u;
    // 803045B8: bl      0x8025D62C
    {
            ctx->lr = 0x803045BCu;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_803045BC:
    ctx->pc = 0x803045BCu;
    ctx->downcount -= 12;
    // 803045BC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803045C0:
    ctx->pc = 0x803045C0u;
    // 803045C0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803045C4:
    ctx->pc = 0x803045C4u;
    // 803045C4: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803045C8:
    ctx->pc = 0x803045C8u;
    // 803045C8: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803045CC:
    ctx->pc = 0x803045CCu;
    // 803045CC: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803045D0:
    ctx->pc = 0x803045D0u;
    // 803045D0: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803045D4:
    ctx->pc = 0x803045D4u;
    // 803045D4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803045D8:
    ctx->pc = 0x803045D8u;
    // 803045D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803045DC:
    ctx->pc = 0x803045DCu;
    // 803045DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803045E0:
    ctx->pc = 0x803045E0u;
    // 803045E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803045E4:
    ctx->pc = 0x803045E4u;
    // 803045E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803045E8:
    ctx->pc = 0x803045E8u;
    ctx->downcount -= 25;
    // 803045E8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803045EC:
    ctx->pc = 0x803045ECu;
    // 803045EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803045F0:
    ctx->pc = 0x803045F0u;
    // 803045F0: lis     r8, -32665
    ctx->gpr[8] = ((u32)(s32)(-32665) << 16);

label_803045F4:
    ctx->pc = 0x803045F4u;
    // 803045F4: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_803045F8:
    ctx->pc = 0x803045F8u;
    // 803045F8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803045FC:
    ctx->pc = 0x803045FCu;
    // 803045FC: addi    r8, r8, 17224
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(17224);

label_80304600:
    ctx->pc = 0x80304600u;
    // 80304600: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80304604:
    ctx->pc = 0x80304604u;
    // 80304604: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304608:
    ctx->pc = 0x80304608u;
    // 80304608: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030460C:
    ctx->pc = 0x8030460Cu;
    // 8030460C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304610:
    ctx->pc = 0x80304610u;
    // 80304610: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80304614:
    ctx->pc = 0x80304614u;
    // 80304614: addi    r5, r8, 29
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(29);

label_80304618:
    ctx->pc = 0x80304618u;
    // 80304618: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030461C:
    ctx->pc = 0x8030461Cu;
    // 8030461C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304620:
    ctx->pc = 0x80304620u;
    // 80304620: bl      0x8000D074
    {
            ctx->lr = 0x80304624u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80304624:
    ctx->pc = 0x80304624u;
    ctx->downcount -= 2;
    // 80304624: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80304628:
    ctx->pc = 0x80304628u;
    // 80304628: bl      0x8026F6CC
    {
            ctx->lr = 0x8030462Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030462C:
    ctx->pc = 0x8030462Cu;
    ctx->downcount -= 4;
    // 8030462C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304630:
    ctx->pc = 0x80304630u;
    // 80304630: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80304634:
    ctx->pc = 0x80304634u;
    // 80304634: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_80304638:
    ctx->pc = 0x80304638u;
    // 80304638: bl      0x8025D62C
    {
            ctx->lr = 0x8030463Cu;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030463C:
    ctx->pc = 0x8030463Cu;
    ctx->downcount -= 22;
    // 8030463C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304640:
    ctx->pc = 0x80304640u;
    // 80304640: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304644:
    ctx->pc = 0x80304644u;
    // 80304644: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304648:
    ctx->pc = 0x80304648u;
    // 80304648: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030464C:
    ctx->pc = 0x8030464Cu;
    // 8030464C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304650:
    ctx->pc = 0x80304650u;
    // 80304650: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304654:
    ctx->pc = 0x80304654u;
    // 80304654: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304658:
    ctx->pc = 0x80304658u;
    // 80304658: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030465C:
    ctx->pc = 0x8030465Cu;
    // 8030465C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304660:
    ctx->pc = 0x80304660u;
    // 80304660: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80304664:
    ctx->pc = 0x80304664u;
    // 80304664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304668:
    ctx->pc = 0x80304668u;
    ctx->downcount -= 23;
    // 80304668: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030466C:
    ctx->pc = 0x8030466Cu;
    // 8030466C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304670:
    ctx->pc = 0x80304670u;
    // 80304670: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80304674:
    ctx->pc = 0x80304674u;
    // 80304674: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80304678:
    ctx->pc = 0x80304678u;
    // 80304678: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030467C:
    ctx->pc = 0x8030467Cu;
    // 8030467C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80304680:
    ctx->pc = 0x80304680u;
    // 80304680: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304684:
    ctx->pc = 0x80304684u;
    // 80304684: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80304688:
    ctx->pc = 0x80304688u;
    // 80304688: addi    r31, r31, 17224
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17224);

label_8030468C:
    ctx->pc = 0x8030468Cu;
    // 8030468C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304690:
    ctx->pc = 0x80304690u;
    // 80304690: addi    r4, r31, 43
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(43);

label_80304694:
    ctx->pc = 0x80304694u;
    // 80304694: addi    r5, r31, 58
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(58);

label_80304698:
    ctx->pc = 0x80304698u;
    // 80304698: bl      0x8036E758
    {
            ctx->lr = 0x8030469Cu;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8030469C:
    ctx->pc = 0x8030469Cu;
    ctx->downcount -= 13;
    // 8030469C: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_803046A0:
    ctx->pc = 0x803046A0u;
    // 803046A0: addi    r4, r31, 88
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(88);

label_803046A4:
    ctx->pc = 0x803046A4u;
    // 803046A4: addi    r7, r7, 27200
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(27200);

label_803046A8:
    ctx->pc = 0x803046A8u;
    // 803046A8: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_803046AC:
    ctx->pc = 0x803046ACu;
    // 803046AC: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_803046B0:
    ctx->pc = 0x803046B0u;
    // 803046B0: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_803046B4:
    ctx->pc = 0x803046B4u;
    // 803046B4: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_803046B8:
    ctx->pc = 0x803046B8u;
    // 803046B8: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_803046BC:
    ctx->pc = 0x803046BCu;
    // 803046BC: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803046C0:
    ctx->pc = 0x803046C0u;
    // 803046C0: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_803046C4:
    ctx->pc = 0x803046C4u;
    // 803046C4: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_803046C8:
    ctx->pc = 0x803046C8u;
    // 803046C8: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803046CC:
    ctx->pc = 0x803046CCu;
    // 803046CC: bl      0x8000E7F4
    {
            ctx->lr = 0x803046D0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_803046D0:
    ctx->pc = 0x803046D0u;
    ctx->downcount -= 2;
    // 803046D0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803046D4:
    ctx->pc = 0x803046D4u;
    // 803046D4: bl      0x80270188
    {
            ctx->lr = 0x803046D8u;
            ctx->pc = 0x80270188u;
            return;
    }

label_803046D8:
    ctx->pc = 0x803046D8u;
    ctx->downcount -= 17;
    // 803046D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803046DC:
    ctx->pc = 0x803046DCu;
    // 803046DC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803046E0:
    ctx->pc = 0x803046E0u;
    // 803046E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803046E4:
    ctx->pc = 0x803046E4u;
    // 803046E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803046E8:
    ctx->pc = 0x803046E8u;
    // 803046E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803046EC:
    ctx->pc = 0x803046ECu;
    // 803046EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803046F0:
    ctx->pc = 0x803046F0u;
    ctx->downcount -= 18;
    // 803046F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803046F4:
    ctx->pc = 0x803046F4u;
    // 803046F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803046F8:
    // 803046F8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803046FC:
    ctx->pc = 0x803046FCu;
    // 803046FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304700:
    ctx->pc = 0x80304700u;
    // 80304700: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304704:
    // 80304704: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304708:
    // 80304708: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030470C:
    // 8030470C: bc    12, 2, 0x8030472C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030472C;
        }
    }

label_80304710:
    ctx->downcount -= 1;
    // 80304710: bc    12, 2, 0x8030471C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030471C;
        }
    }

label_80304714:
    ctx->downcount -= 2;
    // 80304714: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304718:
    // 80304718: bl      0x801F9B68
    {
            ctx->lr = 0x8030471Cu;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8030471C:
    ctx->downcount -= 2;
    // 8030471C: cmpwi   r31, 0
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

label_80304720:
    // 80304720: bc    4, 1, 0x8030472C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030472C;
        }
    }

label_80304724:
    ctx->downcount -= 2;
    // 80304724: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304728:
    // 80304728: bl      0x801C1C90
    {
            ctx->lr = 0x8030472Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030472C:
    ctx->downcount -= 17;
    // 8030472C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304730:
    ctx->pc = 0x80304730u;
    // 80304730: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304734:
    ctx->pc = 0x80304734u;
    // 80304734: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304738:
    ctx->pc = 0x80304738u;
    // 80304738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030473C:
    // 8030473C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304740:
    ctx->pc = 0x80304740u;
    // 80304740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304744:
    ctx->downcount -= 2;
    // 80304744: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304748:
    // 80304748: b       0x803046F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803046F0u;
                return;
            }
            goto label_803046F0;
    }

label_8030474C:
    ctx->downcount -= 2;
    // 8030474C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304750:
    // 80304750: b       0x803046F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803046F0u;
                return;
            }
            goto label_803046F0;
    }

label_80304754:
    ctx->pc = 0x80304754u;
    ctx->downcount -= 20;
    // 80304754: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304758:
    ctx->pc = 0x80304758u;
    // 80304758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030475C:
    ctx->pc = 0x8030475Cu;
    // 8030475C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304760:
    ctx->pc = 0x80304760u;
    // 80304760: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304764:
    ctx->pc = 0x80304764u;
    // 80304764: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304768:
    ctx->pc = 0x80304768u;
    // 80304768: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_8030476C:
    ctx->pc = 0x8030476Cu;
    // 8030476C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304770:
    ctx->pc = 0x80304770u;
    // 80304770: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304774:
    ctx->pc = 0x80304774u;
    // 80304774: addi    r4, r30, 17344
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(17344);

label_80304778:
    ctx->pc = 0x80304778u;
    // 80304778: bl      0x8026F970
    {
            ctx->lr = 0x8030477Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030477C:
    ctx->pc = 0x8030477Cu;
    ctx->downcount -= 8;
    // 8030477C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80304780:
    ctx->pc = 0x80304780u;
    // 80304780: addi    r30, r30, 17344
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(17344);

label_80304784:
    ctx->pc = 0x80304784u;
    // 80304784: addi    r4, r30, 12
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(12);

label_80304788:
    ctx->pc = 0x80304788u;
    // 80304788: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030478C:
    ctx->pc = 0x8030478Cu;
    // 8030478C: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_80304790:
    ctx->pc = 0x80304790u;
    // 80304790: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80304794:
    ctx->pc = 0x80304794u;
    // 80304794: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80304798:
    ctx->pc = 0x80304798u;
    // 80304798: bl      0x8026F970
    {
            ctx->lr = 0x8030479Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030479C:
    ctx->pc = 0x8030479Cu;
    ctx->downcount -= 9;
    // 8030479C: cntlzw r0, r29
    {
        u32 v = ctx->gpr[29];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803047A0:
    ctx->pc = 0x803047A0u;
    // 803047A0: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_803047A4:
    ctx->pc = 0x803047A4u;
    // 803047A4: rlwinm r29, r0, 27, 5, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803047A8:
    ctx->pc = 0x803047A8u;
    // 803047A8: addi    r4, r30, 22
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22);

label_803047AC:
    ctx->pc = 0x803047ACu;
    // 803047AC: or   r0, r29, r29
    {
        ctx->gpr[0] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803047B0:
    ctx->pc = 0x803047B0u;
    // 803047B0: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_803047B4:
    ctx->pc = 0x803047B4u;
    // 803047B4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803047B8:
    ctx->pc = 0x803047B8u;
    // 803047B8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803047BC:
    ctx->pc = 0x803047BCu;
    // 803047BC: bl      0x8026F970
    {
            ctx->lr = 0x803047C0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803047C0:
    ctx->pc = 0x803047C0u;
    ctx->downcount -= 7;
    // 803047C0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803047C4:
    ctx->pc = 0x803047C4u;
    // 803047C4: addi    r4, r30, 39
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(39);

label_803047C8:
    ctx->pc = 0x803047C8u;
    // 803047C8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_803047CC:
    ctx->pc = 0x803047CCu;
    // 803047CC: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_803047D0:
    ctx->pc = 0x803047D0u;
    // 803047D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803047D4:
    ctx->pc = 0x803047D4u;
    // 803047D4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803047D8:
    ctx->pc = 0x803047D8u;
    // 803047D8: bl      0x8026F970
    {
            ctx->lr = 0x803047DCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803047DC:
    ctx->pc = 0x803047DCu;
    ctx->downcount -= 7;
    // 803047DC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803047E0:
    ctx->pc = 0x803047E0u;
    // 803047E0: addi    r4, r30, 53
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(53);

label_803047E4:
    ctx->pc = 0x803047E4u;
    // 803047E4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_803047E8:
    ctx->pc = 0x803047E8u;
    // 803047E8: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_803047EC:
    ctx->pc = 0x803047ECu;
    // 803047EC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803047F0:
    ctx->pc = 0x803047F0u;
    // 803047F0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803047F4:
    ctx->pc = 0x803047F4u;
    // 803047F4: bl      0x8026F970
    {
            ctx->lr = 0x803047F8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803047F8:
    ctx->pc = 0x803047F8u;
    ctx->downcount -= 7;
    // 803047F8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803047FC:
    ctx->pc = 0x803047FCu;
    // 803047FC: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_80304800:
    ctx->pc = 0x80304800u;
    // 80304800: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80304804:
    ctx->pc = 0x80304804u;
    // 80304804: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_80304808:
    ctx->pc = 0x80304808u;
    // 80304808: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030480C:
    ctx->pc = 0x8030480Cu;
    // 8030480C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80304810:
    ctx->pc = 0x80304810u;
    // 80304810: bl      0x8026F970
    {
            ctx->lr = 0x80304814u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304814:
    ctx->pc = 0x80304814u;
    ctx->downcount -= 20;
    // 80304814: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80304818:
    ctx->pc = 0x80304818u;
    // 80304818: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030481C:
    ctx->pc = 0x8030481Cu;
    // 8030481C: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_80304820:
    ctx->pc = 0x80304820u;
    // 80304820: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80304824:
    ctx->pc = 0x80304824u;
    // 80304824: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304828:
    ctx->pc = 0x80304828u;
    // 80304828: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030482C:
    ctx->pc = 0x8030482Cu;
    // 8030482C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304830:
    ctx->pc = 0x80304830u;
    // 80304830: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304834:
    ctx->pc = 0x80304834u;
    // 80304834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304838:
    ctx->pc = 0x80304838u;
    ctx->downcount -= 8;
    // 80304838: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030483C:
    ctx->pc = 0x8030483Cu;
    // 8030483C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304840:
    // 80304840: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80304844:
    ctx->pc = 0x80304844u;
    // 80304844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304848:
    ctx->pc = 0x80304848u;
    // 80304848: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030484C:
    // 8030484C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304850:
    // 80304850: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304854:
    // 80304854: bl      0x8026F5F4
    {
            ctx->lr = 0x80304858u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80304858:
    ctx->pc = 0x80304858u;
    ctx->downcount -= 4;
    // 80304858: lwz     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030485C:
    // 8030485C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304860:
    // 80304860: cmplwi  r0, 0x0001
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

label_80304864:
    // 80304864: bc    4, 1, 0x80304874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304874;
        }
    }

label_80304868:
    ctx->downcount -= 2;
    // 80304868: cmpwi   r0, 2
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

label_8030486C:
    // 8030486C: bc    12, 2, 0x80304890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304890;
        }
    }

label_80304870:
    ctx->downcount -= 1;
    // 80304870: b       0x803048A0
    {
            goto label_803048A0;
    }

label_80304874:
    ctx->downcount -= 2;
    // 80304874: li      r3, 132
    ctx->gpr[3] = (u32)(s32)(132);

label_80304878:
    // 80304878: bl      0x802B73BC
    {
            ctx->lr = 0x8030487Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8030487C:
    ctx->downcount -= 4;
    // 8030487C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80304880:
    // 80304880: li      r3, 133
    ctx->gpr[3] = (u32)(s32)(133);

label_80304884:
    // 80304884: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80304888:
    // 80304888: bl      0x802B735C
    {
            ctx->lr = 0x8030488Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030488C:
    ctx->downcount -= 1;
    // 8030488C: b       0x803048A0
    {
            goto label_803048A0;
    }

label_80304890:
    ctx->downcount -= 4;
    // 80304890: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80304894:
    // 80304894: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_80304898:
    // 80304898: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030489C:
    // 8030489C: bl      0x802B735C
    {
            ctx->lr = 0x803048A0u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_803048A0:
    ctx->pc = 0x803048A0u;
    ctx->downcount -= 6;
    // 803048A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803048A4:
    ctx->pc = 0x803048A4u;
    // 803048A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803048A8:
    ctx->pc = 0x803048A8u;
    // 803048A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803048AC:
    // 803048AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803048B0:
    ctx->pc = 0x803048B0u;
    // 803048B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803048B4:
    ctx->pc = 0x803048B4u;
    ctx->downcount -= 4;
    // 803048B4: lfs     f2, -12048(r2)
    if (!ppc_fp_available_inline(ctx, 0x803048B4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_803048B8:
    // 803048B8: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_803048BC:
    // 803048BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803048C0:
    // 803048C0: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_803048C4:
    ctx->pc = 0x803048C4u;
    ctx->downcount -= 6;
    // 803048C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803048C8:
    ctx->pc = 0x803048C8u;
    // 803048C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803048CC:
    ctx->pc = 0x803048CCu;
    // 803048CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803048D0:
    ctx->pc = 0x803048D0u;
    // 803048D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803048D4:
    // 803048D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803048D8:
    // 803048D8: bl      0x80371C34
    {
            ctx->lr = 0x803048DCu;
            ctx->pc = 0x80371C34u;
            return;
    }

label_803048DC:
    ctx->downcount -= 4;
    // 803048DC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803048E0:
    // 803048E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803048E4:
    // 803048E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803048E8:
    // 803048E8: bl      0x8026FEF0
    {
            ctx->lr = 0x803048ECu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_803048EC:
    ctx->downcount -= 3;
    // 803048EC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803048F0:
    // 803048F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803048F4:
    // 803048F4: bl      0x8026F6AC
    {
            ctx->lr = 0x803048F8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803048F8:
    ctx->downcount -= 1;
    // 803048F8: bl      0x8025EC94
    {
            ctx->lr = 0x803048FCu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_803048FC:
    ctx->pc = 0x803048FCu;
    ctx->downcount -= 6;
    // 803048FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304900:
    ctx->pc = 0x80304900u;
    // 80304900: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304904:
    ctx->pc = 0x80304904u;
    // 80304904: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304908:
    // 80304908: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030490C:
    ctx->pc = 0x8030490Cu;
    // 8030490C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304910:
    ctx->downcount -= 8;
    // 80304910: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_80304914:
    // 80304914: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304918:
    // 80304918: addi    r6, r6, 17344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17344);

label_8030491C:
    // 8030491C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80304920:
    // 80304920: addi    r5, r6, 84
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(84);

label_80304924:
    // 80304924: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304928:
    // 80304928: addi    r6, r6, 94
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(94);

label_8030492C:
    // 8030492C: b       0x8027035C
    {
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80304930:
    ctx->pc = 0x80304930u;
    ctx->downcount -= 7;
    // 80304930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304934:
    ctx->pc = 0x80304934u;
    // 80304934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304938:
    ctx->pc = 0x80304938u;
    // 80304938: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030493C:
    ctx->pc = 0x8030493Cu;
    // 8030493C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304940:
    // 80304940: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304944:
    // 80304944: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304948:
    // 80304948: bl      0x8026F6CC
    {
            ctx->lr = 0x8030494Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030494C:
    ctx->downcount -= 2;
    // 8030494C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80304950:
    // 80304950: bl      0x8025CE30
    {
            ctx->lr = 0x80304954u;
            ctx->pc = 0x8025CE30u;
            return;
    }

label_80304954:
    ctx->downcount -= 5;
    // 80304954: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80304958:
    // 80304958: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030495C:
    // 8030495C: addi    r4, r4, 17344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17344);

label_80304960:
    // 80304960: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_80304964:
    // 80304964: bl      0x8026F970
    {
            ctx->lr = 0x80304968u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304968:
    ctx->pc = 0x80304968u;
    ctx->downcount -= 6;
    // 80304968: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030496C:
    // 8030496C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304970:
    // 80304970: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80304974:
    ctx->pc = 0x80304974u;
    // 80304974: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80304978:
    // 80304978: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030497C:
    // 8030497C: bl      0x80304754
    {
            ctx->lr = 0x80304980u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304754u;
                return;
            }
            goto label_80304754;
    }

label_80304980:
    ctx->pc = 0x80304980u;
    ctx->downcount -= 6;
    // 80304980: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304984:
    ctx->pc = 0x80304984u;
    // 80304984: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304988:
    ctx->pc = 0x80304988u;
    // 80304988: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030498C:
    // 8030498C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304990:
    ctx->pc = 0x80304990u;
    // 80304990: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304994:
    ctx->pc = 0x80304994u;
    ctx->downcount -= 19;
    // 80304994: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304998:
    ctx->pc = 0x80304998u;
    // 80304998: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030499C:
    ctx->pc = 0x8030499Cu;
    // 8030499C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803049A0:
    ctx->pc = 0x803049A0u;
    // 803049A0: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803049A4:
    // 803049A4: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_803049A8:
    // 803049A8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803049AC:
    // 803049AC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803049B0:
    // 803049B0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_803049B4:
    // 803049B4: addi    r31, r31, 17344
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17344);

label_803049B8:
    ctx->downcount -= 6;
    // 803049B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803049BC:
    // 803049BC: addi    r5, r31, 103
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(103);

label_803049C0:
    // 803049C0: rlwinm r6, r30, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_803049C4:
    // 803049C4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_803049C8:
    // 803049C8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803049CC:
    // 803049CC: bl      0x8000D074
    {
            ctx->lr = 0x803049D0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_803049D0:
    ctx->downcount -= 3;
    // 803049D0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803049D4:
    // 803049D4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_803049D8:
    // 803049D8: bl      0x8026F970
    {
            ctx->lr = 0x803049DCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803049DC:
    ctx->downcount -= 9;
    // 803049DC: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_803049E0:
    // 803049E0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_803049E4:
    // 803049E4: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_803049E8:
    ctx->pc = 0x803049E8u;
    // 803049E8: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_803049EC:
    // 803049EC: rlwinm r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_803049F0:
    // 803049F0: cmplwi  r30, 0x0004
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

label_803049F4:
    // 803049F4: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_803049F8:
    ctx->pc = 0x803049F8u;
    // 803049F8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803049FC:
    // 803049FC: bc    12, 0, 0x803049B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803049B8u;
                return;
            }
            goto label_803049B8;
        }
    }

label_80304A00:
    ctx->pc = 0x80304A00u;
    ctx->downcount -= 16;
    // 80304A00: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304A04:
    ctx->pc = 0x80304A04u;
    // 80304A04: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304A08:
    ctx->pc = 0x80304A08u;
    // 80304A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304A0C:
    // 80304A0C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80304A10:
    ctx->pc = 0x80304A10u;
    // 80304A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304A14:
    ctx->pc = 0x80304A14u;
    ctx->downcount -= 10;
    // 80304A14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304A18:
    ctx->pc = 0x80304A18u;
    // 80304A18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304A1C:
    // 80304A1C: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80304A20:
    // 80304A20: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304A24:
    ctx->pc = 0x80304A24u;
    // 80304A24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304A28:
    // 80304A28: addi    r5, r5, 17344
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17344);

label_80304A2C:
    ctx->pc = 0x80304A2Cu;
    // 80304A2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304A30:
    // 80304A30: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304A34:
    // 80304A34: addi    r4, r5, 122
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(122);

label_80304A38:
    // 80304A38: bl      0x8026F960
    {
            ctx->lr = 0x80304A3Cu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80304A3C:
    ctx->downcount -= 2;
    // 80304A3C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304A40:
    // 80304A40: bl      0x80260AA4
    {
            ctx->lr = 0x80304A44u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_80304A44:
    ctx->pc = 0x80304A44u;
    ctx->downcount -= 6;
    // 80304A44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304A48:
    ctx->pc = 0x80304A48u;
    // 80304A48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304A4C:
    ctx->pc = 0x80304A4Cu;
    // 80304A4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304A50:
    // 80304A50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304A54:
    ctx->pc = 0x80304A54u;
    // 80304A54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304A58:
    ctx->pc = 0x80304A58u;
    ctx->downcount -= 21;
    // 80304A58: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304A5C:
    ctx->pc = 0x80304A5Cu;
    // 80304A5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304A60:
    ctx->pc = 0x80304A60u;
    // 80304A60: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304A64:
    ctx->pc = 0x80304A64u;
    // 80304A64: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304A68:
    // 80304A68: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80304A6C:
    // 80304A6C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304A70:
    // 80304A70: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304A74:
    // 80304A74: addi    r31, r31, 17344
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17344);

label_80304A78:
    // 80304A78: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304A7C:
    // 80304A7C: addi    r4, r31, 22
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22);

label_80304A80:
    // 80304A80: bl      0x8026F968
    {
            ctx->lr = 0x80304A84u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80304A84:
    ctx->downcount -= 7;
    // 80304A84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304A88:
    // 80304A88: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304A8C:
    // 80304A8C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304A90:
    // 80304A90: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80304A94:
    // 80304A94: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80304A98:
    // 80304A98: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304A9C:
    // 80304A9C: bl      0x8026F8C0
    {
            ctx->lr = 0x80304AA0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80304AA0:
    ctx->downcount -= 3;
    // 80304AA0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304AA4:
    // 80304AA4: addi    r4, r31, 131
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(131);

label_80304AA8:
    // 80304AA8: bl      0x8026F968
    {
            ctx->lr = 0x80304AACu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80304AAC:
    ctx->downcount -= 7;
    // 80304AAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304AB0:
    // 80304AB0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304AB4:
    // 80304AB4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304AB8:
    // 80304AB8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80304ABC:
    // 80304ABC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80304AC0:
    // 80304AC0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304AC4:
    // 80304AC4: bl      0x8026F8C0
    {
            ctx->lr = 0x80304AC8u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80304AC8:
    ctx->pc = 0x80304AC8u;
    ctx->downcount -= 16;
    // 80304AC8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304ACC:
    ctx->pc = 0x80304ACCu;
    // 80304ACC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304AD0:
    ctx->pc = 0x80304AD0u;
    // 80304AD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304AD4:
    // 80304AD4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304AD8:
    ctx->pc = 0x80304AD8u;
    // 80304AD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304ADC:
    ctx->pc = 0x80304ADCu;
    ctx->downcount -= 21;
    // 80304ADC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304AE0:
    ctx->pc = 0x80304AE0u;
    // 80304AE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304AE4:
    ctx->pc = 0x80304AE4u;
    // 80304AE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304AE8:
    // 80304AE8: addi    r0, r4, -2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-2);

label_80304AEC:
    // 80304AEC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80304AF0:
    ctx->pc = 0x80304AF0u;
    // 80304AF0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304AF4:
    // 80304AF4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304AF8:
    // 80304AF8: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80304AFC:
    ctx->pc = 0x80304AFCu;
    // 80304AFC: stw     r4, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304B00:
    // 80304B00: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80304B04:
    // 80304B04: bl      0x80304754
    {
            ctx->lr = 0x80304B08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304754u;
                return;
            }
            goto label_80304754;
    }

label_80304B08:
    ctx->pc = 0x80304B08u;
    ctx->downcount -= 4;
    // 80304B08: lwz     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304B0C:
    // 80304B0C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80304B10:
    // 80304B10: cmpwi   r0, 1
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

label_80304B14:
    // 80304B14: bc    4, 2, 0x80304B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304B1C;
        }
    }

label_80304B18:
    ctx->downcount -= 1;
    // 80304B18: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80304B1C:
    ctx->downcount -= 2;
    // 80304B1C: cmpwi   r0, 0
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

label_80304B20:
    // 80304B20: bc    4, 2, 0x80304B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304B30;
        }
    }

label_80304B24:
    ctx->downcount -= 2;
    // 80304B24: cmpwi   r30, 0
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

label_80304B28:
    // 80304B28: bc    12, 2, 0x80304B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304B30;
        }
    }

label_80304B2C:
    ctx->downcount -= 1;
    // 80304B2C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80304B30:
    ctx->downcount -= 5;
    // 80304B30: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80304B34:
    // 80304B34: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304B38:
    // 80304B38: addi    r4, r4, 17344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17344);

label_80304B3C:
    // 80304B3C: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_80304B40:
    // 80304B40: bl      0x8026F970
    {
            ctx->lr = 0x80304B44u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304B44:
    ctx->pc = 0x80304B44u;
    ctx->downcount -= 20;
    // 80304B44: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80304B48:
    // 80304B48: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80304B4C:
    // 80304B4C: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_80304B50:
    ctx->pc = 0x80304B50u;
    // 80304B50: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80304B54:
    ctx->pc = 0x80304B54u;
    // 80304B54: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304B58:
    ctx->pc = 0x80304B58u;
    // 80304B58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304B5C:
    ctx->pc = 0x80304B5Cu;
    // 80304B5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304B60:
    // 80304B60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304B64:
    ctx->pc = 0x80304B64u;
    // 80304B64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304B68:
    ctx->pc = 0x80304B68u;
    ctx->downcount -= 14;
    // 80304B68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304B6C:
    ctx->pc = 0x80304B6Cu;
    // 80304B6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304B70:
    // 80304B70: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_80304B74:
    // 80304B74: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304B78:
    ctx->pc = 0x80304B78u;
    // 80304B78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304B7C:
    // 80304B7C: addi    r6, r6, 17344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17344);

label_80304B80:
    // 80304B80: addi    r5, r6, 147
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(147);

label_80304B84:
    // 80304B84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80304B88:
    ctx->pc = 0x80304B88u;
    // 80304B88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304B8C:
    // 80304B8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304B90:
    // 80304B90: addi    r6, r6, 162
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(162);

label_80304B94:
    // 80304B94: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80304B98:
    // 80304B98: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80304B9C:
    // 80304B9C: bl      0x8036B3A4
    {
            ctx->lr = 0x80304BA0u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_80304BA0:
    ctx->downcount -= 18;
    // 80304BA0: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80304BA4:
    // 80304BA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80304BA8:
    // 80304BA8: addi    r4, r4, 27496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27496);

label_80304BAC:
    ctx->pc = 0x80304BACu;
    // 80304BAC: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304BB0:
    // 80304BB0: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80304BB4:
    // 80304BB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304BB8:
    // 80304BB8: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_80304BBC:
    // 80304BBC: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80304BC0:
    ctx->pc = 0x80304BC0u;
    // 80304BC0: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80304BC4:
    ctx->pc = 0x80304BC4u;
    // 80304BC4: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80304BC8:
    ctx->pc = 0x80304BC8u;
    // 80304BC8: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304BCC:
    ctx->pc = 0x80304BCCu;
    // 80304BCC: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304BD0:
    ctx->pc = 0x80304BD0u;
    // 80304BD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304BD4:
    ctx->pc = 0x80304BD4u;
    // 80304BD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304BD8:
    ctx->pc = 0x80304BD8u;
    // 80304BD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304BDC:
    // 80304BDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304BE0:
    ctx->pc = 0x80304BE0u;
    // 80304BE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304BE4:
    ctx->pc = 0x80304BE4u;
    ctx->downcount -= 18;
    // 80304BE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304BE8:
    ctx->pc = 0x80304BE8u;
    // 80304BE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304BEC:
    // 80304BEC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80304BF0:
    ctx->pc = 0x80304BF0u;
    // 80304BF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304BF4:
    ctx->pc = 0x80304BF4u;
    // 80304BF4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304BF8:
    // 80304BF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304BFC:
    // 80304BFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304C00:
    // 80304C00: bc    12, 2, 0x80304C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304C20;
        }
    }

label_80304C04:
    ctx->downcount -= 1;
    // 80304C04: bc    12, 2, 0x80304C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304C10;
        }
    }

label_80304C08:
    ctx->downcount -= 2;
    // 80304C08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304C0C:
    // 80304C0C: bl      0x801F5A74
    {
            ctx->lr = 0x80304C10u;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_80304C10:
    ctx->downcount -= 2;
    // 80304C10: cmpwi   r31, 0
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

label_80304C14:
    // 80304C14: bc    4, 1, 0x80304C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304C20;
        }
    }

label_80304C18:
    ctx->downcount -= 2;
    // 80304C18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304C1C:
    // 80304C1C: bl      0x801C1C90
    {
            ctx->lr = 0x80304C20u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80304C20:
    ctx->downcount -= 17;
    // 80304C20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304C24:
    ctx->pc = 0x80304C24u;
    // 80304C24: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304C28:
    ctx->pc = 0x80304C28u;
    // 80304C28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304C2C:
    ctx->pc = 0x80304C2Cu;
    // 80304C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304C30:
    // 80304C30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304C34:
    ctx->pc = 0x80304C34u;
    // 80304C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304C38:
    ctx->downcount -= 2;
    // 80304C38: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304C3C:
    // 80304C3C: b       0x80304BE4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304BE4u;
                return;
            }
            goto label_80304BE4;
    }

label_80304C40:
    ctx->downcount -= 2;
    // 80304C40: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304C44:
    // 80304C44: b       0x80304838
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304838u;
                return;
            }
            goto label_80304838;
    }

label_80304C48:
    ctx->downcount -= 2;
    // 80304C48: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304C4C:
    // 80304C4C: b       0x803048B4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803048B4u;
                return;
            }
            goto label_803048B4;
    }

label_80304C50:
    ctx->downcount -= 2;
    // 80304C50: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304C54:
    // 80304C54: b       0x80304BE4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304BE4u;
                return;
            }
            goto label_80304BE4;
    }

label_80304C58:
    ctx->downcount -= 2;
    // 80304C58: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304C5C:
    // 80304C5C: b       0x803048C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803048C4u;
                return;
            }
            goto label_803048C4;
    }

label_80304C60:
    ctx->pc = 0x80304C60u;
    ctx->downcount -= 1;
    // 80304C60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304C64:
    ctx->pc = 0x80304C64u;
    ctx->downcount -= 17;
    // 80304C64: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304C68:
    ctx->pc = 0x80304C68u;
    // 80304C68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304C6C:
    ctx->pc = 0x80304C6Cu;
    // 80304C6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304C70:
    ctx->pc = 0x80304C70u;
    // 80304C70: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304C74:
    // 80304C74: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304C78:
    // 80304C78: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80304C7C:
    // 80304C7C: bl      0x8026F960
    {
            ctx->lr = 0x80304C80u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80304C80:
    ctx->downcount -= 5;
    // 80304C80: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80304C84:
    // 80304C84: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304C88:
    // 80304C88: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304C8C:
    // 80304C8C: addi    r4, r31, 17528
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17528);

label_80304C90:
    // 80304C90: bl      0x8026F960
    {
            ctx->lr = 0x80304C94u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80304C94:
    ctx->downcount -= 2;
    // 80304C94: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304C98:
    // 80304C98: bl      0x80260AA4
    {
            ctx->lr = 0x80304C9Cu;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_80304C9C:
    ctx->downcount -= 4;
    // 80304C9C: addi    r4, r31, 17528
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17528);

label_80304CA0:
    // 80304CA0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80304CA4:
    // 80304CA4: addi    r4, r4, 10
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10);

label_80304CA8:
    // 80304CA8: bl      0x8026F970
    {
            ctx->lr = 0x80304CACu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304CAC:
    ctx->pc = 0x80304CACu;
    ctx->downcount -= 19;
    // 80304CAC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80304CB0:
    // 80304CB0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80304CB4:
    ctx->pc = 0x80304CB4u;
    // 80304CB4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80304CB8:
    ctx->pc = 0x80304CB8u;
    // 80304CB8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304CBC:
    ctx->pc = 0x80304CBCu;
    // 80304CBC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304CC0:
    ctx->pc = 0x80304CC0u;
    // 80304CC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304CC4:
    // 80304CC4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304CC8:
    ctx->pc = 0x80304CC8u;
    // 80304CC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304CCC:
    ctx->pc = 0x80304CCCu;
    ctx->downcount -= 18;
    // 80304CCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304CD0:
    ctx->pc = 0x80304CD0u;
    // 80304CD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304CD4:
    ctx->pc = 0x80304CD4u;
    // 80304CD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304CD8:
    ctx->pc = 0x80304CD8u;
    // 80304CD8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304CDC:
    // 80304CDC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304CE0:
    // 80304CE0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304CE4:
    // 80304CE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304CE8:
    // 80304CE8: bl      0x8034DAF0
    {
            ctx->lr = 0x80304CECu;
            ctx->pc = 0x8034DAF0u;
            return;
    }

label_80304CEC:
    ctx->downcount -= 5;
    // 80304CEC: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80304CF0:
    // 80304CF0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80304CF4:
    // 80304CF4: addi    r4, r4, 17528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17528);

label_80304CF8:
    // 80304CF8: addi    r4, r4, 20
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20);

label_80304CFC:
    // 80304CFC: bl      0x8026F968
    {
            ctx->lr = 0x80304D00u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80304D00:
    ctx->downcount -= 7;
    // 80304D00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304D04:
    // 80304D04: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304D08:
    // 80304D08: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80304D0C:
    // 80304D0C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80304D10:
    // 80304D10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80304D14:
    // 80304D14: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304D18:
    // 80304D18: bl      0x8026F8C0
    {
            ctx->lr = 0x80304D1Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80304D1C:
    ctx->pc = 0x80304D1Cu;
    ctx->downcount -= 16;
    // 80304D1C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304D20:
    ctx->pc = 0x80304D20u;
    // 80304D20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304D24:
    ctx->pc = 0x80304D24u;
    // 80304D24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304D28:
    // 80304D28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304D2C:
    ctx->pc = 0x80304D2Cu;
    // 80304D2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304D30:
    ctx->pc = 0x80304D30u;
    ctx->downcount -= 14;
    // 80304D30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304D34:
    ctx->pc = 0x80304D34u;
    // 80304D34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304D38:
    // 80304D38: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_80304D3C:
    // 80304D3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304D40:
    ctx->pc = 0x80304D40u;
    // 80304D40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304D44:
    // 80304D44: addi    r6, r6, 17528
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17528);

label_80304D48:
    // 80304D48: addi    r5, r6, 32
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(32);

label_80304D4C:
    // 80304D4C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80304D50:
    ctx->pc = 0x80304D50u;
    // 80304D50: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304D54:
    // 80304D54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304D58:
    // 80304D58: addi    r6, r6, 47
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(47);

label_80304D5C:
    // 80304D5C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80304D60:
    // 80304D60: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80304D64:
    // 80304D64: bl      0x8036E994
    {
            ctx->lr = 0x80304D68u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_80304D68:
    ctx->downcount -= 16;
    // 80304D68: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_80304D6C:
    // 80304D6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304D70:
    // 80304D70: addi    r6, r6, 27792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(27792);

label_80304D74:
    ctx->pc = 0x80304D74u;
    // 80304D74: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80304D78:
    // 80304D78: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80304D7C:
    // 80304D7C: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_80304D80:
    // 80304D80: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80304D84:
    ctx->pc = 0x80304D84u;
    // 80304D84: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80304D88:
    ctx->pc = 0x80304D88u;
    // 80304D88: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304D8C:
    ctx->pc = 0x80304D8Cu;
    // 80304D8C: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304D90:
    ctx->pc = 0x80304D90u;
    // 80304D90: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304D94:
    ctx->pc = 0x80304D94u;
    // 80304D94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304D98:
    ctx->pc = 0x80304D98u;
    // 80304D98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304D9C:
    // 80304D9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304DA0:
    ctx->pc = 0x80304DA0u;
    // 80304DA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304DA4:
    ctx->pc = 0x80304DA4u;
    ctx->downcount -= 18;
    // 80304DA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304DA8:
    ctx->pc = 0x80304DA8u;
    // 80304DA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304DAC:
    // 80304DAC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80304DB0:
    ctx->pc = 0x80304DB0u;
    // 80304DB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304DB4:
    ctx->pc = 0x80304DB4u;
    // 80304DB4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304DB8:
    // 80304DB8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304DBC:
    // 80304DBC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304DC0:
    // 80304DC0: bc    12, 2, 0x80304DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304DE0;
        }
    }

label_80304DC4:
    ctx->downcount -= 1;
    // 80304DC4: bc    12, 2, 0x80304DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304DD0;
        }
    }

label_80304DC8:
    ctx->downcount -= 2;
    // 80304DC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80304DCC:
    // 80304DCC: bl      0x801F9B68
    {
            ctx->lr = 0x80304DD0u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_80304DD0:
    ctx->downcount -= 2;
    // 80304DD0: cmpwi   r31, 0
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

label_80304DD4:
    // 80304DD4: bc    4, 1, 0x80304DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304DE0;
        }
    }

label_80304DD8:
    ctx->downcount -= 2;
    // 80304DD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304DDC:
    // 80304DDC: bl      0x801C1C90
    {
            ctx->lr = 0x80304DE0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80304DE0:
    ctx->downcount -= 17;
    // 80304DE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80304DE4:
    ctx->pc = 0x80304DE4u;
    // 80304DE4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80304DE8:
    ctx->pc = 0x80304DE8u;
    // 80304DE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304DEC:
    ctx->pc = 0x80304DECu;
    // 80304DEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304DF0:
    // 80304DF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304DF4:
    ctx->pc = 0x80304DF4u;
    // 80304DF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304DF8:
    ctx->downcount -= 2;
    // 80304DF8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80304DFC:
    // 80304DFC: b       0x80304DA4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304DA4u;
                return;
            }
            goto label_80304DA4;
    }

label_80304E00:
    ctx->downcount -= 2;
    // 80304E00: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304E04:
    // 80304E04: b       0x80304C60
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304C60u;
                return;
            }
            goto label_80304C60;
    }

label_80304E08:
    ctx->downcount -= 2;
    // 80304E08: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80304E0C:
    // 80304E0C: b       0x80304DA4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304DA4u;
                return;
            }
            goto label_80304DA4;
    }

label_80304E10:
    ctx->pc = 0x80304E10u;
    ctx->downcount -= 2;
    // 80304E10: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80304E14:
    ctx->pc = 0x80304E14u;
    // 80304E14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E18:
    ctx->pc = 0x80304E18u;
    ctx->downcount -= 2;
    // 80304E18: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80304E1C:
    ctx->pc = 0x80304E1Cu;
    // 80304E1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E20:
    ctx->pc = 0x80304E20u;
    ctx->downcount -= 2;
    // 80304E20: cmpwi   r4, 1
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

label_80304E24:
    ctx->pc = 0x80304E24u;
    // 80304E24: bc    12, 2, 0x80304E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304E38;
        }
    }

label_80304E28:
    ctx->pc = 0x80304E28u;
    ctx->downcount -= 2;
    // 80304E28: cmpwi   r4, 4
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

label_80304E2C:
    ctx->pc = 0x80304E2Cu;
    // 80304E2C: bc    12, 2, 0x80304E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304E38;
        }
    }

label_80304E30:
    ctx->pc = 0x80304E30u;
    ctx->downcount -= 2;
    // 80304E30: addi    r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1);

label_80304E34:
    ctx->pc = 0x80304E34u;
    // 80304E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E38:
    ctx->pc = 0x80304E38u;
    ctx->downcount -= 2;
    // 80304E38: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80304E3C:
    ctx->pc = 0x80304E3Cu;
    // 80304E3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E40:
    ctx->pc = 0x80304E40u;
    ctx->downcount -= 2;
    // 80304E40: cmpwi   r4, 0
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

label_80304E44:
    ctx->pc = 0x80304E44u;
    // 80304E44: bc    12, 2, 0x80304E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304E58;
        }
    }

label_80304E48:
    ctx->pc = 0x80304E48u;
    ctx->downcount -= 2;
    // 80304E48: cmpwi   r4, 2
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

label_80304E4C:
    ctx->pc = 0x80304E4Cu;
    // 80304E4C: bc    12, 2, 0x80304E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304E58;
        }
    }

label_80304E50:
    ctx->pc = 0x80304E50u;
    ctx->downcount -= 2;
    // 80304E50: addi    r3, r4, -1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1);

label_80304E54:
    ctx->pc = 0x80304E54u;
    // 80304E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E58:
    ctx->pc = 0x80304E58u;
    ctx->downcount -= 2;
    // 80304E58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80304E5C:
    ctx->pc = 0x80304E5Cu;
    // 80304E5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304E60:
    ctx->pc = 0x80304E60u;
    ctx->downcount -= 1;
    // 80304E60: b       0x8026F00C
    {
            ctx->pc = 0x8026F00Cu;
            return;
    }

label_80304E64:
    ctx->pc = 0x80304E64u;
    ctx->downcount -= 5;
    // 80304E64: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_80304E68:
    ctx->pc = 0x80304E68u;
    // 80304E68: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_80304E6C:
    ctx->pc = 0x80304E6Cu;
    // 80304E6C: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_80304E70:
    ctx->pc = 0x80304E70u;
    // 80304E70: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_80304E74:
    ctx->pc = 0x80304E74u;
    // 80304E74: b       0x8026F158
    {
            ctx->pc = 0x8026F158u;
            return;
    }

label_80304E78:
    ctx->pc = 0x80304E78u;
    ctx->downcount -= 8;
    // 80304E78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304E7C:
    ctx->pc = 0x80304E7Cu;
    // 80304E7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304E80:
    ctx->pc = 0x80304E80u;
    // 80304E80: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80304E84:
    ctx->pc = 0x80304E84u;
    // 80304E84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80304E88:
    ctx->pc = 0x80304E88u;
    // 80304E88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304E8C:
    ctx->pc = 0x80304E8Cu;
    // 80304E8C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304E90:
    ctx->pc = 0x80304E90u;
    // 80304E90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304E94:
    ctx->pc = 0x80304E94u;
    // 80304E94: bl      0x8026F1B8
    {
            ctx->lr = 0x80304E98u;
            ctx->pc = 0x8026F1B8u;
            return;
    }

label_80304E98:
    ctx->pc = 0x80304E98u;
    ctx->downcount -= 10;
    // 80304E98: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80304E9C:
    ctx->pc = 0x80304E9Cu;
    // 80304E9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304EA0:
    ctx->pc = 0x80304EA0u;
    // 80304EA0: addi    r4, r4, 28096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28096);

label_80304EA4:
    ctx->pc = 0x80304EA4u;
    // 80304EA4: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80304EA8:
    ctx->pc = 0x80304EA8u;
    // 80304EA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304EAC:
    ctx->pc = 0x80304EACu;
    // 80304EAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304EB0:
    ctx->pc = 0x80304EB0u;
    // 80304EB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304EB4:
    ctx->pc = 0x80304EB4u;
    // 80304EB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304EB8:
    ctx->pc = 0x80304EB8u;
    // 80304EB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304EBC:
    ctx->pc = 0x80304EBCu;
    ctx->downcount -= 7;
    // 80304EBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304EC0:
    ctx->pc = 0x80304EC0u;
    // 80304EC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304EC4:
    ctx->pc = 0x80304EC4u;
    // 80304EC4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80304EC8:
    ctx->pc = 0x80304EC8u;
    // 80304EC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304ECC:
    ctx->pc = 0x80304ECCu;
    // 80304ECC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304ED0:
    ctx->pc = 0x80304ED0u;
    // 80304ED0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304ED4:
    ctx->pc = 0x80304ED4u;
    // 80304ED4: bc    12, 2, 0x80304EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80304EE4;
        }
    }

label_80304ED8:
    ctx->pc = 0x80304ED8u;
    ctx->downcount -= 2;
    // 80304ED8: cmpwi   r4, 0
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

label_80304EDC:
    ctx->pc = 0x80304EDCu;
    // 80304EDC: bc    4, 1, 0x80304EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80304EE4;
        }
    }

label_80304EE0:
    ctx->pc = 0x80304EE0u;
    ctx->downcount -= 1;
    // 80304EE0: bl      0x801C1C90
    {
            ctx->lr = 0x80304EE4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80304EE4:
    ctx->pc = 0x80304EE4u;
    ctx->downcount -= 7;
    // 80304EE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80304EE8:
    ctx->pc = 0x80304EE8u;
    // 80304EE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304EEC:
    ctx->pc = 0x80304EECu;
    // 80304EEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304EF0:
    ctx->pc = 0x80304EF0u;
    // 80304EF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304EF4:
    ctx->pc = 0x80304EF4u;
    // 80304EF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80304EF8:
    ctx->pc = 0x80304EF8u;
    // 80304EF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304EFC:
    ctx->pc = 0x80304EFCu;
    ctx->downcount -= 12;
    // 80304EFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304F00:
    ctx->pc = 0x80304F00u;
    // 80304F00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304F04:
    ctx->pc = 0x80304F04u;
    // 80304F04: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80304F08:
    ctx->pc = 0x80304F08u;
    // 80304F08: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304F0C:
    ctx->pc = 0x80304F0Cu;
    // 80304F0C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304F10:
    ctx->pc = 0x80304F10u;
    // 80304F10: addi    r5, r5, 17608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17608);

label_80304F14:
    ctx->pc = 0x80304F14u;
    // 80304F14: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80304F18:
    ctx->pc = 0x80304F18u;
    // 80304F18: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304F1C:
    ctx->pc = 0x80304F1Cu;
    // 80304F1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304F20:
    ctx->pc = 0x80304F20u;
    // 80304F20: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80304F24:
    ctx->pc = 0x80304F24u;
    // 80304F24: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304F28:
    ctx->pc = 0x80304F28u;
    // 80304F28: bl      0x8000D074
    {
            ctx->lr = 0x80304F2Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80304F2C:
    ctx->pc = 0x80304F2Cu;
    ctx->downcount -= 3;
    // 80304F2C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80304F30:
    ctx->pc = 0x80304F30u;
    // 80304F30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80304F34:
    ctx->pc = 0x80304F34u;
    // 80304F34: bl      0x8026F970
    {
            ctx->lr = 0x80304F38u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80304F38:
    ctx->pc = 0x80304F38u;
    ctx->downcount -= 6;
    // 80304F38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304F3C:
    ctx->pc = 0x80304F3Cu;
    // 80304F3C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304F40:
    ctx->pc = 0x80304F40u;
    // 80304F40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304F44:
    ctx->pc = 0x80304F44u;
    // 80304F44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304F48:
    ctx->pc = 0x80304F48u;
    // 80304F48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304F4C:
    ctx->pc = 0x80304F4Cu;
    ctx->downcount -= 7;
    // 80304F4C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304F50:
    ctx->pc = 0x80304F50u;
    // 80304F50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304F54:
    ctx->pc = 0x80304F54u;
    // 80304F54: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304F58:
    ctx->pc = 0x80304F58u;
    // 80304F58: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80304F5C:
    ctx->pc = 0x80304F5Cu;
    // 80304F5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304F60:
    ctx->pc = 0x80304F60u;
    // 80304F60: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_80304F64:
    ctx->pc = 0x80304F64u;
    // 80304F64: bl      0x8026F6CC
    {
            ctx->lr = 0x80304F68u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80304F68:
    ctx->pc = 0x80304F68u;
    ctx->downcount -= 6;
    // 80304F68: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80304F6C:
    ctx->pc = 0x80304F6Cu;
    // 80304F6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304F70:
    ctx->pc = 0x80304F70u;
    // 80304F70: addi    r5, r5, 17608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17608);

label_80304F74:
    ctx->pc = 0x80304F74u;
    // 80304F74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80304F78:
    ctx->pc = 0x80304F78u;
    // 80304F78: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_80304F7C:
    ctx->pc = 0x80304F7Cu;
    // 80304F7C: bl      0x8025D62C
    {
            ctx->lr = 0x80304F80u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_80304F80:
    ctx->pc = 0x80304F80u;
    ctx->downcount -= 12;
    // 80304F80: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80304F84:
    ctx->pc = 0x80304F84u;
    // 80304F84: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304F88:
    ctx->pc = 0x80304F88u;
    // 80304F88: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304F8C:
    ctx->pc = 0x80304F8Cu;
    // 80304F8C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80304F90:
    ctx->pc = 0x80304F90u;
    // 80304F90: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304F94:
    ctx->pc = 0x80304F94u;
    // 80304F94: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304F98:
    ctx->pc = 0x80304F98u;
    // 80304F98: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80304F9C:
    ctx->pc = 0x80304F9Cu;
    // 80304F9C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80304FA0:
    ctx->pc = 0x80304FA0u;
    // 80304FA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80304FA4:
    ctx->pc = 0x80304FA4u;
    // 80304FA4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80304FA8:
    ctx->pc = 0x80304FA8u;
    // 80304FA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80304FAC:
    ctx->pc = 0x80304FACu;
    ctx->downcount -= 24;
    // 80304FAC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80304FB0:
    ctx->pc = 0x80304FB0u;
    // 80304FB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80304FB4:
    ctx->pc = 0x80304FB4u;
    // 80304FB4: lis     r7, -32665
    ctx->gpr[7] = ((u32)(s32)(-32665) << 16);

label_80304FB8:
    ctx->pc = 0x80304FB8u;
    // 80304FB8: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80304FBC:
    ctx->pc = 0x80304FBCu;
    // 80304FBC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80304FC0:
    ctx->pc = 0x80304FC0u;
    // 80304FC0: addi    r7, r7, 17608
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17608);

label_80304FC4:
    ctx->pc = 0x80304FC4u;
    // 80304FC4: addi    r5, r7, 33
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(33);

label_80304FC8:
    ctx->pc = 0x80304FC8u;
    // 80304FC8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80304FCC:
    ctx->pc = 0x80304FCCu;
    // 80304FCC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304FD0:
    ctx->pc = 0x80304FD0u;
    // 80304FD0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80304FD4:
    ctx->pc = 0x80304FD4u;
    // 80304FD4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80304FD8:
    ctx->pc = 0x80304FD8u;
    // 80304FD8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80304FDC:
    ctx->pc = 0x80304FDCu;
    // 80304FDC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80304FE0:
    ctx->pc = 0x80304FE0u;
    // 80304FE0: bl      0x8000D074
    {
            ctx->lr = 0x80304FE4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80304FE4:
    ctx->pc = 0x80304FE4u;
    ctx->downcount -= 2;
    // 80304FE4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80304FE8:
    ctx->pc = 0x80304FE8u;
    // 80304FE8: bl      0x8026F6CC
    {
            ctx->lr = 0x80304FECu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80304FEC:
    ctx->pc = 0x80304FECu;
    ctx->downcount -= 4;
    // 80304FEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80304FF0:
    ctx->pc = 0x80304FF0u;
    // 80304FF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80304FF4:
    ctx->pc = 0x80304FF4u;
    // 80304FF4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_80304FF8:
    ctx->pc = 0x80304FF8u;
    // 80304FF8: bl      0x8025D62C
    {
            ctx->lr = 0x80304FFCu;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_80304FFC:
    ctx->pc = 0x80304FFCu;
    ctx->downcount -= 22;
    // 80304FFC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305000:
    ctx->pc = 0x80305000u;
    // 80305000: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305004:
    ctx->pc = 0x80305004u;
    // 80305004: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305008:
    ctx->pc = 0x80305008u;
    // 80305008: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030500C:
    ctx->pc = 0x8030500Cu;
    // 8030500C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305010:
    ctx->pc = 0x80305010u;
    // 80305010: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305014:
    ctx->pc = 0x80305014u;
    // 80305014: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305018:
    ctx->pc = 0x80305018u;
    // 80305018: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030501C:
    ctx->pc = 0x8030501Cu;
    // 8030501C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305020:
    ctx->pc = 0x80305020u;
    // 80305020: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80305024:
    ctx->pc = 0x80305024u;
    // 80305024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305028:
    ctx->pc = 0x80305028u;
    ctx->downcount -= 23;
    // 80305028: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030502C:
    ctx->pc = 0x8030502Cu;
    // 8030502C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305030:
    ctx->pc = 0x80305030u;
    // 80305030: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80305034:
    ctx->pc = 0x80305034u;
    // 80305034: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80305038:
    ctx->pc = 0x80305038u;
    // 80305038: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030503C:
    ctx->pc = 0x8030503Cu;
    // 8030503C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80305040:
    ctx->pc = 0x80305040u;
    // 80305040: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305044:
    ctx->pc = 0x80305044u;
    // 80305044: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80305048:
    ctx->pc = 0x80305048u;
    // 80305048: addi    r31, r31, 17608
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17608);

label_8030504C:
    ctx->pc = 0x8030504Cu;
    // 8030504C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305050:
    ctx->pc = 0x80305050u;
    // 80305050: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_80305054:
    ctx->pc = 0x80305054u;
    // 80305054: addi    r5, r31, 63
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(63);

label_80305058:
    ctx->pc = 0x80305058u;
    // 80305058: bl      0x8036E758
    {
            ctx->lr = 0x8030505Cu;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8030505C:
    ctx->pc = 0x8030505Cu;
    ctx->downcount -= 13;
    // 8030505C: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_80305060:
    ctx->pc = 0x80305060u;
    // 80305060: addi    r4, r31, 89
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(89);

label_80305064:
    ctx->pc = 0x80305064u;
    // 80305064: addi    r7, r7, 28136
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(28136);

label_80305068:
    ctx->pc = 0x80305068u;
    // 80305068: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8030506C:
    ctx->pc = 0x8030506Cu;
    // 8030506C: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_80305070:
    ctx->pc = 0x80305070u;
    // 80305070: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_80305074:
    ctx->pc = 0x80305074u;
    // 80305074: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_80305078:
    ctx->pc = 0x80305078u;
    // 80305078: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8030507C:
    ctx->pc = 0x8030507Cu;
    // 8030507C: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80305080:
    ctx->pc = 0x80305080u;
    // 80305080: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80305084:
    ctx->pc = 0x80305084u;
    // 80305084: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80305088:
    ctx->pc = 0x80305088u;
    // 80305088: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030508C:
    ctx->pc = 0x8030508Cu;
    // 8030508C: bl      0x8000E7F4
    {
            ctx->lr = 0x80305090u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80305090:
    ctx->pc = 0x80305090u;
    ctx->downcount -= 17;
    // 80305090: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305094:
    ctx->pc = 0x80305094u;
    // 80305094: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305098:
    ctx->pc = 0x80305098u;
    // 80305098: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030509C:
    ctx->pc = 0x8030509Cu;
    // 8030509C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803050A0:
    ctx->pc = 0x803050A0u;
    // 803050A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803050A4:
    ctx->pc = 0x803050A4u;
    // 803050A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803050A8:
    ctx->pc = 0x803050A8u;
    ctx->downcount -= 18;
    // 803050A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803050AC:
    ctx->pc = 0x803050ACu;
    // 803050AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803050B0:
    // 803050B0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803050B4:
    ctx->pc = 0x803050B4u;
    // 803050B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803050B8:
    ctx->pc = 0x803050B8u;
    // 803050B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803050BC:
    // 803050BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803050C0:
    // 803050C0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803050C4:
    // 803050C4: bc    12, 2, 0x803050E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803050E4;
        }
    }

label_803050C8:
    ctx->downcount -= 1;
    // 803050C8: bc    12, 2, 0x803050D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803050D4;
        }
    }

label_803050CC:
    ctx->downcount -= 2;
    // 803050CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803050D0:
    // 803050D0: bl      0x801F9B68
    {
            ctx->lr = 0x803050D4u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_803050D4:
    ctx->downcount -= 2;
    // 803050D4: cmpwi   r31, 0
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

label_803050D8:
    // 803050D8: bc    4, 1, 0x803050E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803050E4;
        }
    }

label_803050DC:
    ctx->downcount -= 2;
    // 803050DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803050E0:
    // 803050E0: bl      0x801C1C90
    {
            ctx->lr = 0x803050E4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803050E4:
    ctx->downcount -= 17;
    // 803050E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803050E8:
    ctx->pc = 0x803050E8u;
    // 803050E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803050EC:
    ctx->pc = 0x803050ECu;
    // 803050EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803050F0:
    ctx->pc = 0x803050F0u;
    // 803050F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803050F4:
    // 803050F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803050F8:
    ctx->pc = 0x803050F8u;
    // 803050F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803050FC:
    ctx->downcount -= 2;
    // 803050FC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80305100:
    // 80305100: b       0x803050A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803050A8u;
                return;
            }
            goto label_803050A8;
    }

label_80305104:
    ctx->downcount -= 2;
    // 80305104: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80305108:
    // 80305108: b       0x803050A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803050A8u;
                return;
            }
            goto label_803050A8;
    }

label_8030510C:
    ctx->pc = 0x8030510Cu;
    ctx->downcount -= 19;
    // 8030510C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305110:
    ctx->pc = 0x80305110u;
    // 80305110: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305114:
    ctx->pc = 0x80305114u;
    // 80305114: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305118:
    ctx->pc = 0x80305118u;
    // 80305118: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030511C:
    // 8030511C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80305120:
    // 80305120: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305124:
    // 80305124: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80305128:
    // 80305128: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030512C:
    // 8030512C: bl      0x80305208
    {
            ctx->lr = 0x80305130u;
            goto label_80305208;
    }

label_80305130:
    ctx->pc = 0x80305130u;
    ctx->downcount -= 6;
    // 80305130: lwz     r4, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305134:
    // 80305134: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305138:
    // 80305138: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030513C:
    // 8030513C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80305140:
    // 80305140: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80305144:
    // 80305144: bl      0x8026F8C0
    {
            ctx->lr = 0x80305148u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80305148:
    ctx->pc = 0x80305148u;
    ctx->downcount -= 6;
    // 80305148: lwz     r4, 292(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030514C:
    // 8030514C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305150:
    // 80305150: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80305154:
    // 80305154: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80305158:
    // 80305158: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030515C:
    // 8030515C: bl      0x8026F8C0
    {
            ctx->lr = 0x80305160u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80305160:
    ctx->pc = 0x80305160u;
    ctx->downcount -= 6;
    // 80305160: lwz     r4, 296(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305164:
    // 80305164: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305168:
    // 80305168: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030516C:
    // 8030516C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80305170:
    // 80305170: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80305174:
    // 80305174: bl      0x8026F8C0
    {
            ctx->lr = 0x80305178u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80305178:
    ctx->pc = 0x80305178u;
    ctx->downcount -= 6;
    // 80305178: lwz     r4, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030517C:
    // 8030517C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305180:
    // 80305180: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80305184:
    // 80305184: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80305188:
    // 80305188: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030518C:
    // 8030518C: bl      0x8026F8C0
    {
            ctx->lr = 0x80305190u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80305190:
    ctx->pc = 0x80305190u;
    ctx->downcount -= 16;
    // 80305190: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305194:
    ctx->pc = 0x80305194u;
    // 80305194: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305198:
    ctx->pc = 0x80305198u;
    // 80305198: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030519C:
    // 8030519C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803051A0:
    ctx->pc = 0x803051A0u;
    // 803051A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803051A4:
    ctx->pc = 0x803051A4u;
    ctx->downcount -= 18;
    // 803051A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803051A8:
    ctx->pc = 0x803051A8u;
    // 803051A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803051AC:
    ctx->pc = 0x803051ACu;
    // 803051AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803051B0:
    ctx->pc = 0x803051B0u;
    // 803051B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803051B4:
    // 803051B4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803051B8:
    // 803051B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803051BC:
    // 803051BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803051C0:
    // 803051C0: bl      0x80305208
    {
            ctx->lr = 0x803051C4u;
            goto label_80305208;
    }

label_803051C4:
    ctx->pc = 0x803051C4u;
    ctx->downcount -= 6;
    // 803051C4: lwz     r4, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803051C8:
    // 803051C8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803051CC:
    // 803051CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803051D0:
    // 803051D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803051D4:
    // 803051D4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803051D8:
    // 803051D8: bl      0x8026F8C0
    {
            ctx->lr = 0x803051DCu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_803051DC:
    ctx->pc = 0x803051DCu;
    ctx->downcount -= 6;
    // 803051DC: lwz     r4, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803051E0:
    // 803051E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803051E4:
    // 803051E4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803051E8:
    // 803051E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803051EC:
    // 803051EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803051F0:
    // 803051F0: bl      0x8026F8C0
    {
            ctx->lr = 0x803051F4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_803051F4:
    ctx->pc = 0x803051F4u;
    ctx->downcount -= 16;
    // 803051F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803051F8:
    ctx->pc = 0x803051F8u;
    // 803051F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803051FC:
    ctx->pc = 0x803051FCu;
    // 803051FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305200:
    // 80305200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305204:
    ctx->pc = 0x80305204u;
    // 80305204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305208:
    ctx->pc = 0x80305208u;
    ctx->downcount -= 27;
    // 80305208: lwz     r7, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8030520C:
    // 8030520C: cntlzw r5, r4
    {
        u32 v = ctx->gpr[4];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[5] = n;
    }

label_80305210:
    // 80305210: rlwinm r0, r5, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
    }

label_80305214:
    ctx->pc = 0x80305214u;
    // 80305214: lbz     r6, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80305218:
    // 80305218: rlwinm r6, r6, 0, 24, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FEu;
    }

label_8030521C:
    // 8030521C: or   r6, r6, r4
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[4];
    }

label_80305220:
    ctx->pc = 0x80305220u;
    // 80305220: stb     r6, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80305224:
    ctx->pc = 0x80305224u;
    // 80305224: lwz     r7, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80305228:
    ctx->pc = 0x80305228u;
    // 80305228: lbz     r6, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8030522C:
    // 8030522C: rlwinm r6, r6, 0, 24, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FEu;
    }

label_80305230:
    // 80305230: or   r6, r6, r4
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[4];
    }

label_80305234:
    ctx->pc = 0x80305234u;
    // 80305234: stb     r6, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80305238:
    ctx->pc = 0x80305238u;
    // 80305238: lwz     r7, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8030523C:
    ctx->pc = 0x8030523Cu;
    // 8030523C: lbz     r6, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80305240:
    // 80305240: rlwinm r6, r6, 0, 24, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FEu;
    }

label_80305244:
    // 80305244: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_80305248:
    ctx->pc = 0x80305248u;
    // 80305248: stb     r4, 187(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8030524C:
    ctx->pc = 0x8030524Cu;
    // 8030524C: lwz     r6, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80305250:
    ctx->pc = 0x80305250u;
    // 80305250: lbz     r4, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80305254:
    // 80305254: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80305258:
    ctx->pc = 0x80305258u;
    // 80305258: stb     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030525C:
    ctx->pc = 0x8030525Cu;
    // 8030525C: lwz     r3, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305260:
    ctx->pc = 0x80305260u;
    // 80305260: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305264:
    // 80305264: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80305268:
    // 80305268: rlwimi r0, r5, 27, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 27u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8030526C:
    ctx->pc = 0x8030526Cu;
    // 8030526C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80305270:
    ctx->pc = 0x80305270u;
    // 80305270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305274:
    ctx->pc = 0x80305274u;
    ctx->downcount -= 7;
    // 80305274: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305278:
    ctx->pc = 0x80305278u;
    // 80305278: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030527C:
    // 8030527C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80305280:
    // 80305280: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80305284:
    ctx->pc = 0x80305284u;
    // 80305284: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305288:
    ctx->pc = 0x80305288u;
    // 80305288: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030528C:
    // 8030528C: bl      0x8026F5F4
    {
            ctx->lr = 0x80305290u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80305290:
    ctx->downcount -= 3;
    // 80305290: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305294:
    // 80305294: li      r3, 132
    ctx->gpr[3] = (u32)(s32)(132);

label_80305298:
    // 80305298: bl      0x802B73BC
    {
            ctx->lr = 0x8030529Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8030529C:
    ctx->downcount -= 4;
    // 8030529C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_803052A0:
    // 803052A0: li      r3, 133
    ctx->gpr[3] = (u32)(s32)(133);

label_803052A4:
    // 803052A4: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_803052A8:
    // 803052A8: bl      0x802B735C
    {
            ctx->lr = 0x803052ACu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_803052AC:
    ctx->pc = 0x803052ACu;
    ctx->downcount -= 6;
    // 803052AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803052B0:
    ctx->pc = 0x803052B0u;
    // 803052B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803052B4:
    ctx->pc = 0x803052B4u;
    // 803052B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803052B8:
    // 803052B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803052BC:
    ctx->pc = 0x803052BCu;
    // 803052BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803052C0:
    ctx->pc = 0x803052C0u;
    ctx->downcount -= 4;
    // 803052C0: lfs     f2, -12040(r2)
    if (!ppc_fp_available_inline(ctx, 0x803052C0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_803052C4:
    // 803052C4: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_803052C8:
    // 803052C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803052CC:
    // 803052CC: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_803052D0:
    ctx->downcount -= 1;
    // 803052D0: b       0x80371C34
    {
            ctx->pc = 0x80371C34u;
            return;
    }

label_803052D4:
    ctx->pc = 0x803052D4u;
    ctx->downcount -= 1;
    // 803052D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803052D8:
    ctx->pc = 0x803052D8u;
    ctx->downcount -= 19;
    // 803052D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803052DC:
    ctx->pc = 0x803052DCu;
    // 803052DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803052E0:
    ctx->pc = 0x803052E0u;
    // 803052E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803052E4:
    ctx->pc = 0x803052E4u;
    // 803052E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803052E8:
    // 803052E8: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_803052EC:
    // 803052EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803052F0:
    // 803052F0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803052F4:
    // 803052F4: addi    r4, r31, 17720
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17720);

label_803052F8:
    // 803052F8: bl      0x8026F970
    {
            ctx->lr = 0x803052FCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803052FC:
    ctx->pc = 0x803052FCu;
    ctx->downcount -= 5;
    // 803052FC: stw     r3, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305300:
    // 80305300: addi    r31, r31, 17720
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17720);

label_80305304:
    // 80305304: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305308:
    // 80305308: addi    r4, r31, 11
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(11);

label_8030530C:
    // 8030530C: bl      0x8026F968
    {
            ctx->lr = 0x80305310u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305310:
    ctx->pc = 0x80305310u;
    ctx->downcount -= 4;
    // 80305310: stw     r3, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305314:
    // 80305314: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305318:
    // 80305318: addi    r4, r31, 26
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(26);

label_8030531C:
    // 8030531C: bl      0x8026F968
    {
            ctx->lr = 0x80305320u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305320:
    ctx->pc = 0x80305320u;
    ctx->downcount -= 4;
    // 80305320: stw     r3, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305324:
    // 80305324: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305328:
    // 80305328: addi    r4, r31, 41
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(41);

label_8030532C:
    // 8030532C: bl      0x8026F968
    {
            ctx->lr = 0x80305330u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305330:
    ctx->pc = 0x80305330u;
    ctx->downcount -= 4;
    // 80305330: stw     r3, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305334:
    // 80305334: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305338:
    // 80305338: addi    r4, r31, 58
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(58);

label_8030533C:
    // 8030533C: bl      0x8026F968
    {
            ctx->lr = 0x80305340u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305340:
    ctx->pc = 0x80305340u;
    ctx->downcount -= 4;
    // 80305340: stw     r3, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305344:
    // 80305344: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305348:
    // 80305348: addi    r4, r31, 75
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(75);

label_8030534C:
    // 8030534C: bl      0x8026F968
    {
            ctx->lr = 0x80305350u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305350:
    ctx->pc = 0x80305350u;
    ctx->downcount -= 4;
    // 80305350: stw     r3, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305354:
    // 80305354: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80305358:
    // 80305358: addi    r4, r31, 90
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(90);

label_8030535C:
    // 8030535C: bl      0x8026F968
    {
            ctx->lr = 0x80305360u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80305360:
    ctx->pc = 0x80305360u;
    ctx->downcount -= 17;
    // 80305360: stw     r3, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80305364:
    ctx->pc = 0x80305364u;
    // 80305364: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305368:
    ctx->pc = 0x80305368u;
    // 80305368: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030536C:
    ctx->pc = 0x8030536Cu;
    // 8030536C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305370:
    // 80305370: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305374:
    ctx->pc = 0x80305374u;
    // 80305374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305378:
    ctx->downcount -= 6;
    // 80305378: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030537C:
    // 8030537C: li      r4, 54
    ctx->gpr[4] = (u32)(s32)(54);

label_80305380:
    // 80305380: subfic  r0, r0, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305384:
    // 80305384: subfe   r5, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305388:
    // 80305388: addi    r5, r5, 56
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(56);

label_8030538C:
    // 8030538C: b       0x8030510C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030510Cu;
                return;
            }
            goto label_8030510C;
    }

label_80305390:
    ctx->downcount -= 7;
    // 80305390: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80305394:
    // 80305394: li      r4, 51
    ctx->gpr[4] = (u32)(s32)(51);

label_80305398:
    // 80305398: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_8030539C:
    // 8030539C: addic   r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803053A0:
    // 803053A0: subfe   r5, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803053A4:
    // 803053A4: addi    r5, r5, 53
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(53);

label_803053A8:
    // 803053A8: b       0x8030510C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030510Cu;
                return;
            }
            goto label_8030510C;
    }

label_803053AC:
    ctx->downcount -= 2;
    // 803053AC: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_803053B0:
    // 803053B0: b       0x803051A4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803051A4u;
                return;
            }
            goto label_803051A4;
    }

label_803053B4:
    ctx->pc = 0x803053B4u;
    ctx->downcount -= 14;
    // 803053B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803053B8:
    ctx->pc = 0x803053B8u;
    // 803053B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803053BC:
    // 803053BC: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_803053C0:
    // 803053C0: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803053C4:
    ctx->pc = 0x803053C4u;
    // 803053C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803053C8:
    // 803053C8: addi    r6, r6, 17720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17720);

label_803053CC:
    // 803053CC: addi    r5, r6, 107
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(107);

label_803053D0:
    // 803053D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803053D4:
    ctx->pc = 0x803053D4u;
    // 803053D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803053D8:
    // 803053D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803053DC:
    // 803053DC: addi    r6, r6, 122
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(122);

label_803053E0:
    // 803053E0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_803053E4:
    // 803053E4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_803053E8:
    // 803053E8: bl      0x8036B3A4
    {
            ctx->lr = 0x803053ECu;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_803053EC:
    ctx->downcount -= 24;
    // 803053EC: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_803053F0:
    // 803053F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803053F4:
    // 803053F4: addi    r4, r4, 28432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28432);

label_803053F8:
    ctx->pc = 0x803053F8u;
    // 803053F8: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803053FC:
    // 803053FC: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80305400:
    // 80305400: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305404:
    // 80305404: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_80305408:
    // 80305408: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_8030540C:
    ctx->pc = 0x8030540Cu;
    // 8030540C: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80305410:
    ctx->pc = 0x80305410u;
    // 80305410: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80305414:
    ctx->pc = 0x80305414u;
    // 80305414: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80305418:
    ctx->pc = 0x80305418u;
    // 80305418: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030541C:
    ctx->pc = 0x8030541Cu;
    // 8030541C: stw     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305420:
    ctx->pc = 0x80305420u;
    // 80305420: stw     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305424:
    ctx->pc = 0x80305424u;
    // 80305424: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305428:
    ctx->pc = 0x80305428u;
    // 80305428: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030542C:
    ctx->pc = 0x8030542Cu;
    // 8030542C: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305430:
    ctx->pc = 0x80305430u;
    // 80305430: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305434:
    ctx->pc = 0x80305434u;
    // 80305434: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305438:
    ctx->pc = 0x80305438u;
    // 80305438: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030543C:
    ctx->pc = 0x8030543Cu;
    // 8030543C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305440:
    // 80305440: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305444:
    ctx->pc = 0x80305444u;
    // 80305444: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305448:
    ctx->pc = 0x80305448u;
    ctx->downcount -= 18;
    // 80305448: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030544C:
    ctx->pc = 0x8030544Cu;
    // 8030544C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305450:
    // 80305450: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305454:
    ctx->pc = 0x80305454u;
    // 80305454: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305458:
    ctx->pc = 0x80305458u;
    // 80305458: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030545C:
    // 8030545C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305460:
    // 80305460: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80305464:
    // 80305464: bc    12, 2, 0x80305484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305484;
        }
    }

label_80305468:
    ctx->downcount -= 1;
    // 80305468: bc    12, 2, 0x80305474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305474;
        }
    }

label_8030546C:
    ctx->downcount -= 2;
    // 8030546C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80305470:
    // 80305470: bl      0x801F5A74
    {
            ctx->lr = 0x80305474u;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_80305474:
    ctx->downcount -= 2;
    // 80305474: cmpwi   r31, 0
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

label_80305478:
    // 80305478: bc    4, 1, 0x80305484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305484;
        }
    }

label_8030547C:
    ctx->downcount -= 2;
    // 8030547C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305480:
    // 80305480: bl      0x801C1C90
    {
            ctx->lr = 0x80305484u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80305484:
    ctx->downcount -= 17;
    // 80305484: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305488:
    ctx->pc = 0x80305488u;
    // 80305488: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030548C:
    ctx->pc = 0x8030548Cu;
    // 8030548C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305490:
    ctx->pc = 0x80305490u;
    // 80305490: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305494:
    // 80305494: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305498:
    ctx->pc = 0x80305498u;
    // 80305498: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030549C:
    ctx->downcount -= 2;
    // 8030549C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803054A0:
    // 803054A0: b       0x80305448
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305448u;
                return;
            }
            goto label_80305448;
    }

label_803054A4:
    ctx->downcount -= 2;
    // 803054A4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803054A8:
    // 803054A8: b       0x80305274
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305274u;
                return;
            }
            goto label_80305274;
    }

label_803054AC:
    ctx->downcount -= 2;
    // 803054AC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803054B0:
    // 803054B0: b       0x803052C0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803052C0u;
                return;
            }
            goto label_803052C0;
    }

label_803054B4:
    ctx->downcount -= 2;
    // 803054B4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803054B8:
    // 803054B8: b       0x80305448
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305448u;
                return;
            }
            goto label_80305448;
    }

label_803054BC:
    ctx->downcount -= 2;
    // 803054BC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803054C0:
    // 803054C0: b       0x803052D0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803052D0u;
                return;
            }
            goto label_803052D0;
    }

label_803054C4:
    ctx->pc = 0x803054C4u;
    ctx->downcount -= 13;
    // 803054C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803054C8:
    ctx->pc = 0x803054C8u;
    // 803054C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803054CC:
    ctx->pc = 0x803054CCu;
    // 803054CC: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_803054D0:
    ctx->pc = 0x803054D0u;
    // 803054D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803054D4:
    ctx->pc = 0x803054D4u;
    // 803054D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803054D8:
    ctx->pc = 0x803054D8u;
    // 803054D8: addi    r5, r5, 17872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17872);

label_803054DC:
    ctx->pc = 0x803054DCu;
    // 803054DC: addi    r6, r5, 15
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(15);

label_803054E0:
    ctx->pc = 0x803054E0u;
    // 803054E0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_803054E4:
    ctx->pc = 0x803054E4u;
    // 803054E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803054E8:
    ctx->pc = 0x803054E8u;
    // 803054E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803054EC:
    ctx->pc = 0x803054ECu;
    // 803054EC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_803054F0:
    ctx->pc = 0x803054F0u;
    // 803054F0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_803054F4:
    ctx->pc = 0x803054F4u;
    // 803054F4: bl      0x8036E994
    {
            ctx->lr = 0x803054F8u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_803054F8:
    ctx->pc = 0x803054F8u;
    ctx->downcount -= 16;
    // 803054F8: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_803054FC:
    ctx->pc = 0x803054FCu;
    // 803054FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305500:
    ctx->pc = 0x80305500u;
    // 80305500: addi    r6, r6, 28728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28728);

label_80305504:
    ctx->pc = 0x80305504u;
    // 80305504: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80305508:
    ctx->pc = 0x80305508u;
    // 80305508: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_8030550C:
    ctx->pc = 0x8030550Cu;
    // 8030550C: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_80305510:
    ctx->pc = 0x80305510u;
    // 80305510: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80305514:
    ctx->pc = 0x80305514u;
    // 80305514: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80305518:
    ctx->pc = 0x80305518u;
    // 80305518: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030551C:
    ctx->pc = 0x8030551Cu;
    // 8030551C: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305520:
    ctx->pc = 0x80305520u;
    // 80305520: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305524:
    ctx->pc = 0x80305524u;
    // 80305524: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305528:
    ctx->pc = 0x80305528u;
    // 80305528: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030552C:
    ctx->pc = 0x8030552Cu;
    // 8030552C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305530:
    ctx->pc = 0x80305530u;
    // 80305530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305534:
    ctx->pc = 0x80305534u;
    ctx->downcount -= 18;
    // 80305534: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305538:
    ctx->pc = 0x80305538u;
    // 80305538: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030553C:
    // 8030553C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305540:
    ctx->pc = 0x80305540u;
    // 80305540: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305544:
    ctx->pc = 0x80305544u;
    // 80305544: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305548:
    // 80305548: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030554C:
    // 8030554C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80305550:
    // 80305550: bc    12, 2, 0x80305570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305570;
        }
    }

label_80305554:
    ctx->downcount -= 1;
    // 80305554: bc    12, 2, 0x80305560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305560;
        }
    }

label_80305558:
    ctx->downcount -= 2;
    // 80305558: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030555C:
    // 8030555C: bl      0x801F9B68
    {
            ctx->lr = 0x80305560u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_80305560:
    ctx->downcount -= 2;
    // 80305560: cmpwi   r31, 0
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

label_80305564:
    // 80305564: bc    4, 1, 0x80305570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305570;
        }
    }

label_80305568:
    ctx->downcount -= 2;
    // 80305568: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030556C:
    // 8030556C: bl      0x801C1C90
    {
            ctx->lr = 0x80305570u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80305570:
    ctx->downcount -= 17;
    // 80305570: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305574:
    ctx->pc = 0x80305574u;
    // 80305574: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305578:
    ctx->pc = 0x80305578u;
    // 80305578: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030557C:
    ctx->pc = 0x8030557Cu;
    // 8030557C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305580:
    // 80305580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305584:
    ctx->pc = 0x80305584u;
    // 80305584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305588:
    ctx->downcount -= 2;
    // 80305588: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030558C:
    // 8030558C: b       0x80305534
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305534u;
                return;
            }
            goto label_80305534;
    }

label_80305590:
    ctx->downcount -= 2;
    // 80305590: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80305594:
    // 80305594: b       0x80305534
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305534u;
                return;
            }
            goto label_80305534;
    }

label_80305598:
    ctx->pc = 0x80305598u;
    ctx->downcount -= 2;
    // 80305598: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8030559C:
    ctx->pc = 0x8030559Cu;
    // 8030559C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055A0:
    ctx->pc = 0x803055A0u;
    ctx->downcount -= 2;
    // 803055A0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_803055A4:
    ctx->pc = 0x803055A4u;
    // 803055A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055A8:
    ctx->pc = 0x803055A8u;
    ctx->downcount -= 3;
    // 803055A8: cmpwi   r4, 2
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

label_803055AC:
    ctx->pc = 0x803055ACu;
    // 803055AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_803055B0:
    ctx->pc = 0x803055B0u;
    // 803055B0: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055B4:
    ctx->pc = 0x803055B4u;
    ctx->downcount -= 2;
    // 803055B4: addi    r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1);

label_803055B8:
    ctx->pc = 0x803055B8u;
    // 803055B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055BC:
    ctx->pc = 0x803055BCu;
    ctx->downcount -= 3;
    // 803055BC: cmpwi   r4, 0
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

label_803055C0:
    ctx->pc = 0x803055C0u;
    // 803055C0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_803055C4:
    ctx->pc = 0x803055C4u;
    // 803055C4: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055C8:
    ctx->pc = 0x803055C8u;
    ctx->downcount -= 2;
    // 803055C8: addi    r3, r4, -1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1);

label_803055CC:
    ctx->pc = 0x803055CCu;
    // 803055CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803055D0:
    ctx->pc = 0x803055D0u;
    ctx->downcount -= 1;
    // 803055D0: b       0x8026F00C
    {
            ctx->pc = 0x8026F00Cu;
            return;
    }

label_803055D4:
    ctx->pc = 0x803055D4u;
    ctx->downcount -= 5;
    // 803055D4: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_803055D8:
    ctx->pc = 0x803055D8u;
    // 803055D8: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_803055DC:
    ctx->pc = 0x803055DCu;
    // 803055DC: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_803055E0:
    ctx->pc = 0x803055E0u;
    // 803055E0: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_803055E4:
    ctx->pc = 0x803055E4u;
    // 803055E4: b       0x8026F158
    {
            ctx->pc = 0x8026F158u;
            return;
    }

label_803055E8:
    ctx->pc = 0x803055E8u;
    ctx->downcount -= 8;
    // 803055E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803055EC:
    ctx->pc = 0x803055ECu;
    // 803055EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803055F0:
    ctx->pc = 0x803055F0u;
    // 803055F0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803055F4:
    ctx->pc = 0x803055F4u;
    // 803055F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803055F8:
    ctx->pc = 0x803055F8u;
    // 803055F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803055FC:
    ctx->pc = 0x803055FCu;
    // 803055FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80305600:
    ctx->pc = 0x80305600u;
    // 80305600: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305604:
    ctx->pc = 0x80305604u;
    // 80305604: bl      0x8026F1B8
    {
            ctx->lr = 0x80305608u;
            ctx->pc = 0x8026F1B8u;
            return;
    }

label_80305608:
    ctx->pc = 0x80305608u;
    ctx->downcount -= 10;
    // 80305608: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_8030560C:
    ctx->pc = 0x8030560Cu;
    // 8030560C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305610:
    ctx->pc = 0x80305610u;
    // 80305610: addi    r4, r4, 29032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29032);

label_80305614:
    ctx->pc = 0x80305614u;
    // 80305614: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80305618:
    ctx->pc = 0x80305618u;
    // 80305618: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030561C:
    ctx->pc = 0x8030561Cu;
    // 8030561C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305620:
    ctx->pc = 0x80305620u;
    // 80305620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305624:
    ctx->pc = 0x80305624u;
    // 80305624: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305628:
    ctx->pc = 0x80305628u;
    // 80305628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030562C:
    ctx->pc = 0x8030562Cu;
    ctx->downcount -= 7;
    // 8030562C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305630:
    ctx->pc = 0x80305630u;
    // 80305630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305634:
    ctx->pc = 0x80305634u;
    // 80305634: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305638:
    ctx->pc = 0x80305638u;
    // 80305638: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030563C:
    ctx->pc = 0x8030563Cu;
    // 8030563C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80305640:
    ctx->pc = 0x80305640u;
    // 80305640: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305644:
    ctx->pc = 0x80305644u;
    // 80305644: bc    12, 2, 0x80305654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305654;
        }
    }

label_80305648:
    ctx->pc = 0x80305648u;
    ctx->downcount -= 2;
    // 80305648: cmpwi   r4, 0
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

label_8030564C:
    ctx->pc = 0x8030564Cu;
    // 8030564C: bc    4, 1, 0x80305654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305654;
        }
    }

label_80305650:
    ctx->pc = 0x80305650u;
    ctx->downcount -= 1;
    // 80305650: bl      0x801C1C90
    {
            ctx->lr = 0x80305654u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80305654:
    ctx->pc = 0x80305654u;
    ctx->downcount -= 7;
    // 80305654: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305658:
    ctx->pc = 0x80305658u;
    // 80305658: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030565C:
    ctx->pc = 0x8030565Cu;
    // 8030565C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305660:
    ctx->pc = 0x80305660u;
    // 80305660: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305664:
    ctx->pc = 0x80305664u;
    // 80305664: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305668:
    ctx->pc = 0x80305668u;
    // 80305668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030566C:
    ctx->pc = 0x8030566Cu;
    ctx->downcount -= 8;
    // 8030566C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305670:
    ctx->pc = 0x80305670u;
    // 80305670: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305674:
    ctx->pc = 0x80305674u;
    // 80305674: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305678:
    ctx->pc = 0x80305678u;
    // 80305678: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030567C:
    ctx->pc = 0x8030567Cu;
    // 8030567C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305680:
    ctx->pc = 0x80305680u;
    // 80305680: lbz     r0, 193(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(193);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305684:
    ctx->pc = 0x80305684u;
    // 80305684: cmpwi   r0, 0
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

label_80305688:
    ctx->pc = 0x80305688u;
    // 80305688: bc    4, 2, 0x8030569C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030569C;
        }
    }

label_8030568C:
    ctx->pc = 0x8030568Cu;
    ctx->downcount -= 2;
    // 8030568C: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305690:
    ctx->pc = 0x80305690u;
    // 80305690: bl      0x802339CC
    {
            ctx->lr = 0x80305694u;
            ctx->pc = 0x802339CCu;
            return;
    }

label_80305694:
    ctx->pc = 0x80305694u;
    ctx->downcount -= 2;
    // 80305694: stb     r3, 193(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(193);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80305698:
    ctx->pc = 0x80305698u;
    // 80305698: b       0x803056B8
    {
            goto label_803056B8;
    }

label_8030569C:
    ctx->pc = 0x8030569Cu;
    ctx->downcount -= 2;
    // 8030569C: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803056A0:
    ctx->pc = 0x803056A0u;
    // 803056A0: bl      0x802339AC
    {
            ctx->lr = 0x803056A4u;
            ctx->pc = 0x802339ACu;
            return;
    }

label_803056A4:
    ctx->pc = 0x803056A4u;
    ctx->downcount -= 2;
    // 803056A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803056A8:
    ctx->pc = 0x803056A8u;
    // 803056A8: bc    12, 2, 0x803056B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803056B8;
        }
    }

label_803056AC:
    ctx->pc = 0x803056ACu;
    ctx->downcount -= 3;
    // 803056AC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803056B0:
    ctx->pc = 0x803056B0u;
    // 803056B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803056B4:
    ctx->pc = 0x803056B4u;
    // 803056B4: bl      0x803457B8
    {
            ctx->lr = 0x803056B8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803056B8:
    ctx->pc = 0x803056B8u;
    ctx->downcount -= 6;
    // 803056B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803056BC:
    ctx->pc = 0x803056BCu;
    // 803056BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803056C0:
    ctx->pc = 0x803056C0u;
    // 803056C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803056C4:
    ctx->pc = 0x803056C4u;
    // 803056C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803056C8:
    ctx->pc = 0x803056C8u;
    // 803056C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803056CC:
    ctx->pc = 0x803056CCu;
    ctx->downcount -= 7;
    // 803056CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803056D0:
    ctx->pc = 0x803056D0u;
    // 803056D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803056D4:
    ctx->pc = 0x803056D4u;
    // 803056D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803056D8:
    ctx->pc = 0x803056D8u;
    // 803056D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803056DC:
    ctx->pc = 0x803056DCu;
    // 803056DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803056E0:
    ctx->pc = 0x803056E0u;
    // 803056E0: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803056E4:
    ctx->pc = 0x803056E4u;
    // 803056E4: bl      0x80234544
    {
            ctx->lr = 0x803056E8u;
            ctx->pc = 0x80234544u;
            return;
    }

label_803056E8:
    ctx->pc = 0x803056E8u;
    ctx->downcount -= 10;
    // 803056E8: lbz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_803056EC:
    ctx->pc = 0x803056ECu;
    // 803056EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803056F0:
    ctx->pc = 0x803056F0u;
    // 803056F0: stb     r4, 31400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31400);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_803056F4:
    ctx->pc = 0x803056F4u;
    // 803056F4: stb     r0, 193(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(193);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803056F8:
    ctx->pc = 0x803056F8u;
    // 803056F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803056FC:
    ctx->pc = 0x803056FCu;
    // 803056FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305700:
    ctx->pc = 0x80305700u;
    // 80305700: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305704:
    ctx->pc = 0x80305704u;
    // 80305704: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305708:
    ctx->pc = 0x80305708u;
    // 80305708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030570C:
    ctx->pc = 0x8030570Cu;
    ctx->downcount -= 6;
    // 8030570C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305710:
    ctx->pc = 0x80305710u;
    // 80305710: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305714:
    ctx->pc = 0x80305714u;
    // 80305714: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305718:
    ctx->pc = 0x80305718u;
    // 80305718: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030571C:
    ctx->pc = 0x8030571Cu;
    // 8030571C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305720:
    ctx->pc = 0x80305720u;
    // 80305720: bl      0x80305780
    {
            ctx->lr = 0x80305724u;
            goto label_80305780;
    }

label_80305724:
    ctx->pc = 0x80305724u;
    ctx->downcount -= 6;
    // 80305724: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305728:
    ctx->pc = 0x80305728u;
    // 80305728: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030572C:
    ctx->pc = 0x8030572Cu;
    // 8030572C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305730:
    ctx->pc = 0x80305730u;
    // 80305730: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305734:
    ctx->pc = 0x80305734u;
    // 80305734: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305738u;
            ctx->pc = target;
            return;
        }
    }

label_80305738:
    ctx->pc = 0x80305738u;
    ctx->downcount -= 2;
    // 80305738: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030573C:
    ctx->pc = 0x8030573Cu;
    // 8030573C: bc    12, 2, 0x8030576C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030576C;
        }
    }

label_80305740:
    ctx->pc = 0x80305740u;
    ctx->downcount -= 2;
    // 80305740: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305744:
    ctx->pc = 0x80305744u;
    // 80305744: bl      0x80305780
    {
            ctx->lr = 0x80305748u;
            goto label_80305780;
    }

label_80305748:
    ctx->pc = 0x80305748u;
    ctx->downcount -= 2;
    // 80305748: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030574C:
    ctx->pc = 0x8030574Cu;
    // 8030574C: bl      0x80271AE8
    {
            ctx->lr = 0x80305750u;
            ctx->pc = 0x80271AE8u;
            return;
    }

label_80305750:
    ctx->pc = 0x80305750u;
    ctx->downcount -= 7;
    // 80305750: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80305754:
    ctx->pc = 0x80305754u;
    // 80305754: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80305758:
    ctx->pc = 0x80305758u;
    // 80305758: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030575C:
    ctx->pc = 0x8030575Cu;
    // 8030575C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80305760:
    ctx->pc = 0x80305760u;
    // 80305760: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80305764:
    ctx->pc = 0x80305764u;
    // 80305764: stb     r0, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80305768:
    ctx->pc = 0x80305768u;
    // 80305768: bl      0x803457B8
    {
            ctx->lr = 0x8030576Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030576C:
    ctx->pc = 0x8030576Cu;
    ctx->downcount -= 6;
    // 8030576C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305770:
    ctx->pc = 0x80305770u;
    // 80305770: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305774:
    ctx->pc = 0x80305774u;
    // 80305774: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305778:
    ctx->pc = 0x80305778u;
    // 80305778: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030577C:
    ctx->pc = 0x8030577Cu;
    // 8030577C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305780:
    ctx->pc = 0x80305780u;
    ctx->downcount -= 2;
    // 80305780: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305784:
    ctx->pc = 0x80305784u;
    // 80305784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305788:
    ctx->pc = 0x80305788u;
    ctx->downcount -= 4;
    // 80305788: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030578C:
    ctx->pc = 0x8030578Cu;
    // 8030578C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305790:
    ctx->pc = 0x80305790u;
    // 80305790: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305794:
    ctx->pc = 0x80305794u;
    // 80305794: bl      0x80305780
    {
            ctx->lr = 0x80305798u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305780u;
                return;
            }
            goto label_80305780;
    }

label_80305798:
    ctx->pc = 0x80305798u;
    ctx->downcount -= 5;
    // 80305798: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030579C:
    ctx->pc = 0x8030579Cu;
    // 8030579C: li      r4, 11311
    ctx->gpr[4] = (u32)(s32)(11311);

label_803057A0:
    ctx->pc = 0x803057A0u;
    // 803057A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803057A4:
    ctx->pc = 0x803057A4u;
    // 803057A4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803057A8:
    ctx->pc = 0x803057A8u;
    // 803057A8: bl      0x80271DE4
    {
            ctx->lr = 0x803057ACu;
            ctx->pc = 0x80271DE4u;
            return;
    }

label_803057AC:
    ctx->pc = 0x803057ACu;
    ctx->downcount -= 5;
    // 803057AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803057B0:
    ctx->pc = 0x803057B0u;
    // 803057B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803057B4:
    ctx->pc = 0x803057B4u;
    // 803057B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803057B8:
    ctx->pc = 0x803057B8u;
    // 803057B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803057BC:
    ctx->pc = 0x803057BCu;
    ctx->downcount -= 6;
    // 803057BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803057C0:
    ctx->pc = 0x803057C0u;
    // 803057C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803057C4:
    ctx->pc = 0x803057C4u;
    // 803057C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803057C8:
    ctx->pc = 0x803057C8u;
    // 803057C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803057CC:
    ctx->pc = 0x803057CCu;
    // 803057CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803057D0:
    ctx->pc = 0x803057D0u;
    // 803057D0: bl      0x80305780
    {
            ctx->lr = 0x803057D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305780u;
                return;
            }
            goto label_80305780;
    }

label_803057D4:
    ctx->pc = 0x803057D4u;
    ctx->downcount -= 6;
    // 803057D4: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803057D8:
    ctx->pc = 0x803057D8u;
    // 803057D8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803057DC:
    ctx->pc = 0x803057DCu;
    // 803057DC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803057E0:
    ctx->pc = 0x803057E0u;
    // 803057E0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803057E4:
    ctx->pc = 0x803057E4u;
    // 803057E4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803057E8u;
            ctx->pc = target;
            return;
        }
    }

label_803057E8:
    ctx->pc = 0x803057E8u;
    ctx->downcount -= 2;
    // 803057E8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803057EC:
    ctx->pc = 0x803057ECu;
    // 803057EC: bc    12, 2, 0x803057FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803057FC;
        }
    }

label_803057F0:
    ctx->pc = 0x803057F0u;
    ctx->downcount -= 3;
    // 803057F0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803057F4:
    ctx->pc = 0x803057F4u;
    // 803057F4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_803057F8:
    ctx->pc = 0x803057F8u;
    // 803057F8: bl      0x803457B8
    {
            ctx->lr = 0x803057FCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803057FC:
    ctx->pc = 0x803057FCu;
    ctx->downcount -= 6;
    // 803057FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305800:
    ctx->pc = 0x80305800u;
    // 80305800: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305804:
    ctx->pc = 0x80305804u;
    // 80305804: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305808:
    ctx->pc = 0x80305808u;
    // 80305808: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030580C:
    ctx->pc = 0x8030580Cu;
    // 8030580C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305810:
    ctx->pc = 0x80305810u;
    ctx->downcount -= 4;
    // 80305810: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305814:
    ctx->pc = 0x80305814u;
    // 80305814: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305818:
    ctx->pc = 0x80305818u;
    // 80305818: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030581C:
    ctx->pc = 0x8030581Cu;
    // 8030581C: bl      0x80305780
    {
            ctx->lr = 0x80305820u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305780u;
                return;
            }
            goto label_80305780;
    }

label_80305820:
    ctx->pc = 0x80305820u;
    ctx->downcount -= 5;
    // 80305820: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305824:
    ctx->pc = 0x80305824u;
    // 80305824: li      r4, 11310
    ctx->gpr[4] = (u32)(s32)(11310);

label_80305828:
    ctx->pc = 0x80305828u;
    // 80305828: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030582C:
    ctx->pc = 0x8030582Cu;
    // 8030582C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80305830:
    ctx->pc = 0x80305830u;
    // 80305830: bl      0x80271DE4
    {
            ctx->lr = 0x80305834u;
            ctx->pc = 0x80271DE4u;
            return;
    }

label_80305834:
    ctx->pc = 0x80305834u;
    ctx->downcount -= 5;
    // 80305834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305838:
    ctx->pc = 0x80305838u;
    // 80305838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030583C:
    ctx->pc = 0x8030583Cu;
    // 8030583C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305840:
    ctx->pc = 0x80305840u;
    // 80305840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305844:
    ctx->pc = 0x80305844u;
    ctx->downcount -= 11;
    // 80305844: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305848:
    ctx->pc = 0x80305848u;
    // 80305848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030584C:
    ctx->pc = 0x8030584Cu;
    // 8030584C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305850:
    ctx->pc = 0x80305850u;
    // 80305850: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80305854:
    ctx->pc = 0x80305854u;
    // 80305854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305858:
    ctx->pc = 0x80305858u;
    // 80305858: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030585C:
    ctx->pc = 0x8030585Cu;
    // 8030585C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305860:
    ctx->pc = 0x80305860u;
    // 80305860: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305864:
    ctx->pc = 0x80305864u;
    // 80305864: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305868:
    ctx->pc = 0x80305868u;
    // 80305868: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030586Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030586C:
    ctx->pc = 0x8030586Cu;
    ctx->downcount -= 2;
    // 8030586C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305870:
    ctx->pc = 0x80305870u;
    // 80305870: bc    12, 2, 0x80305890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305890;
        }
    }

label_80305874:
    ctx->pc = 0x80305874u;
    ctx->downcount -= 2;
    // 80305874: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305878:
    ctx->pc = 0x80305878u;
    // 80305878: bl      0x80234544
    {
            ctx->lr = 0x8030587Cu;
            ctx->pc = 0x80234544u;
            return;
    }

label_8030587C:
    ctx->pc = 0x8030587Cu;
    ctx->downcount -= 5;
    // 8030587C: lwz     r0, 31396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305880:
    ctx->pc = 0x80305880u;
    // 80305880: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80305884:
    ctx->pc = 0x80305884u;
    // 80305884: stw     r0, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305888:
    ctx->pc = 0x80305888u;
    // 80305888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030588C:
    ctx->pc = 0x8030588Cu;
    // 8030588C: bl      0x803457B8
    {
            ctx->lr = 0x80305890u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305890:
    ctx->pc = 0x80305890u;
    ctx->downcount -= 6;
    // 80305890: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305894:
    ctx->pc = 0x80305894u;
    // 80305894: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305898:
    ctx->pc = 0x80305898u;
    // 80305898: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030589C:
    ctx->pc = 0x8030589Cu;
    // 8030589C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803058A0:
    ctx->pc = 0x803058A0u;
    // 803058A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803058A4:
    ctx->pc = 0x803058A4u;
    ctx->downcount -= 3;
    // 803058A4: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803058A8:
    ctx->pc = 0x803058A8u;
    // 803058A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803058AC:
    ctx->pc = 0x803058ACu;
    // 803058AC: b       0x802E87DC
    {
            ctx->pc = 0x802E87DCu;
            return;
    }

label_803058B0:
    ctx->pc = 0x803058B0u;
    ctx->downcount -= 6;
    // 803058B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803058B4:
    ctx->pc = 0x803058B4u;
    // 803058B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803058B8:
    ctx->pc = 0x803058B8u;
    // 803058B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803058BC:
    ctx->pc = 0x803058BCu;
    // 803058BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803058C0:
    ctx->pc = 0x803058C0u;
    // 803058C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803058C4:
    ctx->pc = 0x803058C4u;
    // 803058C4: bl      0x80305780
    {
            ctx->lr = 0x803058C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305780u;
                return;
            }
            goto label_80305780;
    }

label_803058C8:
    ctx->pc = 0x803058C8u;
    ctx->downcount -= 6;
    // 803058C8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803058CC:
    ctx->pc = 0x803058CCu;
    // 803058CC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803058D0:
    ctx->pc = 0x803058D0u;
    // 803058D0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803058D4:
    ctx->pc = 0x803058D4u;
    // 803058D4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803058D8:
    ctx->pc = 0x803058D8u;
    // 803058D8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803058DCu;
            ctx->pc = target;
            return;
        }
    }

label_803058DC:
    ctx->pc = 0x803058DCu;
    ctx->downcount -= 2;
    // 803058DC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803058E0:
    ctx->pc = 0x803058E0u;
    // 803058E0: bc    12, 2, 0x803058F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803058F0;
        }
    }

label_803058E4:
    ctx->pc = 0x803058E4u;
    ctx->downcount -= 3;
    // 803058E4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803058E8:
    ctx->pc = 0x803058E8u;
    // 803058E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803058EC:
    ctx->pc = 0x803058ECu;
    // 803058EC: bl      0x803457B8
    {
            ctx->lr = 0x803058F0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803058F0:
    ctx->pc = 0x803058F0u;
    ctx->downcount -= 6;
    // 803058F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803058F4:
    ctx->pc = 0x803058F4u;
    // 803058F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803058F8:
    ctx->pc = 0x803058F8u;
    // 803058F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803058FC:
    ctx->pc = 0x803058FCu;
    // 803058FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305900:
    ctx->pc = 0x80305900u;
    // 80305900: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305904:
    ctx->pc = 0x80305904u;
    ctx->downcount -= 4;
    // 80305904: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305908:
    ctx->pc = 0x80305908u;
    // 80305908: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030590C:
    ctx->pc = 0x8030590Cu;
    // 8030590C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305910:
    ctx->pc = 0x80305910u;
    // 80305910: bl      0x80305780
    {
            ctx->lr = 0x80305914u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305780u;
                return;
            }
            goto label_80305780;
    }

label_80305914:
    ctx->pc = 0x80305914u;
    ctx->downcount -= 5;
    // 80305914: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305918:
    ctx->pc = 0x80305918u;
    // 80305918: li      r4, 11305
    ctx->gpr[4] = (u32)(s32)(11305);

label_8030591C:
    ctx->pc = 0x8030591Cu;
    // 8030591C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80305920:
    ctx->pc = 0x80305920u;
    // 80305920: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80305924:
    ctx->pc = 0x80305924u;
    // 80305924: bl      0x80271DE4
    {
            ctx->lr = 0x80305928u;
            ctx->pc = 0x80271DE4u;
            return;
    }

label_80305928:
    ctx->pc = 0x80305928u;
    ctx->downcount -= 5;
    // 80305928: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030592C:
    ctx->pc = 0x8030592Cu;
    // 8030592C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305930:
    ctx->pc = 0x80305930u;
    // 80305930: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305934:
    ctx->pc = 0x80305934u;
    // 80305934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305938:
    ctx->pc = 0x80305938u;
    ctx->downcount -= 21;
    // 80305938: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030593C:
    ctx->pc = 0x8030593Cu;
    // 8030593C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305940:
    ctx->pc = 0x80305940u;
    // 80305940: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305944:
    ctx->pc = 0x80305944u;
    // 80305944: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305948:
    ctx->pc = 0x80305948u;
    // 80305948: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030594C:
    ctx->pc = 0x8030594Cu;
    // 8030594C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305950:
    ctx->pc = 0x80305950u;
    // 80305950: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305954:
    ctx->pc = 0x80305954u;
    // 80305954: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305958:
    ctx->pc = 0x80305958u;
    // 80305958: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030595C:
    ctx->pc = 0x8030595Cu;
    // 8030595C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305960u;
            ctx->pc = target;
            return;
        }
    }

label_80305960:
    ctx->pc = 0x80305960u;
    ctx->downcount -= 2;
    // 80305960: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305964:
    ctx->pc = 0x80305964u;
    // 80305964: bc    12, 2, 0x80305A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305A54;
        }
    }

label_80305968:
    ctx->pc = 0x80305968u;
    ctx->downcount -= 6;
    // 80305968: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030596C:
    ctx->pc = 0x8030596Cu;
    // 8030596C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305970:
    ctx->pc = 0x80305970u;
    // 80305970: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305974:
    ctx->pc = 0x80305974u;
    // 80305974: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305978:
    ctx->pc = 0x80305978u;
    // 80305978: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030597Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030597C:
    ctx->pc = 0x8030597Cu;
    ctx->downcount -= 2;
    // 8030597C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305980:
    ctx->pc = 0x80305980u;
    // 80305980: bc    12, 2, 0x80305A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305A54;
        }
    }

label_80305984:
    ctx->pc = 0x80305984u;
    ctx->downcount -= 2;
    // 80305984: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80305988:
    ctx->pc = 0x80305988u;
    // 80305988: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030598C:
    ctx->downcount -= 3;
    // 8030598C: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80305990:
    ctx->pc = 0x80305990u;
    // 80305990: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305994:
    // 80305994: bl      0x8036B2DC
    {
            ctx->lr = 0x80305998u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_80305998:
    ctx->downcount -= 4;
    // 80305998: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030599C:
    // 8030599C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_803059A0:
    // 803059A0: cmpwi   r30, 3
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

label_803059A4:
    // 803059A4: bc    12, 0, 0x8030598C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030598Cu;
                return;
            }
            goto label_8030598C;
        }
    }

label_803059A8:
    ctx->pc = 0x803059A8u;
    ctx->downcount -= 2;
    // 803059A8: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803059AC:
    ctx->pc = 0x803059ACu;
    // 803059AC: bl      0x8036E8D0
    {
            ctx->lr = 0x803059B0u;
            ctx->pc = 0x8036E8D0u;
            return;
    }

label_803059B0:
    ctx->pc = 0x803059B0u;
    ctx->downcount -= 2;
    // 803059B0: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803059B4:
    ctx->pc = 0x803059B4u;
    // 803059B4: bl      0x8026EEE8
    {
            ctx->lr = 0x803059B8u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_803059B8:
    ctx->pc = 0x803059B8u;
    ctx->downcount -= 3;
    // 803059B8: lwz     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803059BC:
    ctx->pc = 0x803059BCu;
    // 803059BC: cmpwi   r0, 1
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

label_803059C0:
    ctx->pc = 0x803059C0u;
    // 803059C0: bc    4, 2, 0x803059DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803059DC;
        }
    }

label_803059C4:
    ctx->pc = 0x803059C4u;
    ctx->downcount -= 6;
    // 803059C4: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803059C8:
    ctx->pc = 0x803059C8u;
    // 803059C8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803059CC:
    ctx->pc = 0x803059CCu;
    // 803059CC: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803059D0:
    ctx->pc = 0x803059D0u;
    // 803059D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803059D4:
    ctx->pc = 0x803059D4u;
    // 803059D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803059D8u;
            ctx->pc = target;
            return;
        }
    }

label_803059D8:
    ctx->pc = 0x803059D8u;
    ctx->downcount -= 1;
    // 803059D8: b       0x80305A54
    {
            goto label_80305A54;
    }

label_803059DC:
    ctx->pc = 0x803059DCu;
    ctx->downcount -= 3;
    // 803059DC: lwz     r0, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803059E0:
    ctx->pc = 0x803059E0u;
    // 803059E0: cmpwi   r0, 0
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

label_803059E4:
    ctx->pc = 0x803059E4u;
    // 803059E4: bc    12, 2, 0x803059FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803059FC;
        }
    }

label_803059E8:
    ctx->pc = 0x803059E8u;
    ctx->downcount -= 2;
    // 803059E8: cmpwi   r0, 1
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

label_803059EC:
    ctx->pc = 0x803059ECu;
    // 803059EC: bc    12, 2, 0x80305A38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305A38;
        }
    }

label_803059F0:
    ctx->pc = 0x803059F0u;
    ctx->downcount -= 2;
    // 803059F0: cmpwi   r0, 2
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

label_803059F4:
    ctx->pc = 0x803059F4u;
    // 803059F4: bc    12, 2, 0x80305A48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305A48;
        }
    }

label_803059F8:
    ctx->pc = 0x803059F8u;
    ctx->downcount -= 1;
    // 803059F8: b       0x80305A54
    {
            goto label_80305A54;
    }

label_803059FC:
    ctx->pc = 0x803059FCu;
    ctx->downcount -= 3;
    // 803059FC: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305A00:
    ctx->pc = 0x80305A00u;
    // 80305A00: cmpwi   r0, 0
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

label_80305A04:
    ctx->pc = 0x80305A04u;
    // 80305A04: bc    4, 2, 0x80305A18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305A18;
        }
    }

label_80305A08:
    ctx->pc = 0x80305A08u;
    ctx->downcount -= 3;
    // 80305A08: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80305A0C:
    ctx->pc = 0x80305A0Cu;
    // 80305A0C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80305A10:
    ctx->pc = 0x80305A10u;
    // 80305A10: bl      0x803457B8
    {
            ctx->lr = 0x80305A14u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305A14:
    ctx->pc = 0x80305A14u;
    ctx->downcount -= 1;
    // 80305A14: b       0x80305A54
    {
            goto label_80305A54;
    }

label_80305A18:
    ctx->pc = 0x80305A18u;
    ctx->downcount -= 8;
    // 80305A18: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80305A1C:
    ctx->pc = 0x80305A1Cu;
    // 80305A1C: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305A20:
    ctx->pc = 0x80305A20u;
    // 80305A20: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80305A24:
    ctx->pc = 0x80305A24u;
    // 80305A24: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305A28:
    ctx->pc = 0x80305A28u;
    // 80305A28: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305A2C:
    ctx->pc = 0x80305A2Cu;
    // 80305A2C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305A30:
    ctx->pc = 0x80305A30u;
    // 80305A30: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305A34u;
            ctx->pc = target;
            return;
        }
    }

label_80305A34:
    ctx->pc = 0x80305A34u;
    ctx->downcount -= 1;
    // 80305A34: b       0x80305A54
    {
            goto label_80305A54;
    }

label_80305A38:
    ctx->pc = 0x80305A38u;
    ctx->downcount -= 3;
    // 80305A38: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80305A3C:
    ctx->pc = 0x80305A3Cu;
    // 80305A3C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80305A40:
    ctx->pc = 0x80305A40u;
    // 80305A40: bl      0x803457B8
    {
            ctx->lr = 0x80305A44u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305A44:
    ctx->pc = 0x80305A44u;
    ctx->downcount -= 1;
    // 80305A44: b       0x80305A54
    {
            goto label_80305A54;
    }

label_80305A48:
    ctx->pc = 0x80305A48u;
    ctx->downcount -= 3;
    // 80305A48: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80305A4C:
    ctx->pc = 0x80305A4Cu;
    // 80305A4C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80305A50:
    ctx->pc = 0x80305A50u;
    // 80305A50: bl      0x803457B8
    {
            ctx->lr = 0x80305A54u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305A54:
    ctx->pc = 0x80305A54u;
    ctx->downcount -= 6;
    // 80305A54: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305A58:
    ctx->pc = 0x80305A58u;
    // 80305A58: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80305A5C:
    ctx->pc = 0x80305A5Cu;
    // 80305A5C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80305A60:
    ctx->pc = 0x80305A60u;
    // 80305A60: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305A64:
    ctx->pc = 0x80305A64u;
    // 80305A64: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305A68:
    ctx->pc = 0x80305A68u;
    // 80305A68: bl      0x80370BD4
    {
            ctx->lr = 0x80305A6Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80305A6C:
    ctx->pc = 0x80305A6Cu;
    ctx->downcount -= 3;
    // 80305A6C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305A70:
    ctx->pc = 0x80305A70u;
    // 80305A70: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305A74:
    ctx->pc = 0x80305A74u;
    // 80305A74: bl      0x80263ABC
    {
            ctx->lr = 0x80305A78u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80305A78:
    ctx->pc = 0x80305A78u;
    ctx->downcount -= 16;
    // 80305A78: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305A7C:
    ctx->pc = 0x80305A7Cu;
    // 80305A7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305A80:
    ctx->pc = 0x80305A80u;
    // 80305A80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305A84:
    ctx->pc = 0x80305A84u;
    // 80305A84: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80305A88:
    ctx->pc = 0x80305A88u;
    // 80305A88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305A8C:
    ctx->pc = 0x80305A8Cu;
    ctx->downcount -= 11;
    // 80305A8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305A90:
    ctx->pc = 0x80305A90u;
    // 80305A90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305A94:
    ctx->pc = 0x80305A94u;
    // 80305A94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305A98:
    ctx->pc = 0x80305A98u;
    // 80305A98: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80305A9C:
    ctx->pc = 0x80305A9Cu;
    // 80305A9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305AA0:
    ctx->pc = 0x80305AA0u;
    // 80305AA0: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305AA4:
    ctx->pc = 0x80305AA4u;
    // 80305AA4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305AA8:
    ctx->pc = 0x80305AA8u;
    // 80305AA8: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305AAC:
    ctx->pc = 0x80305AACu;
    // 80305AAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305AB0:
    ctx->pc = 0x80305AB0u;
    // 80305AB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305AB4u;
            ctx->pc = target;
            return;
        }
    }

label_80305AB4:
    ctx->pc = 0x80305AB4u;
    ctx->downcount -= 6;
    // 80305AB4: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305AB8:
    ctx->pc = 0x80305AB8u;
    // 80305AB8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305ABC:
    ctx->pc = 0x80305ABCu;
    // 80305ABC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305AC0:
    ctx->pc = 0x80305AC0u;
    // 80305AC0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305AC4:
    ctx->pc = 0x80305AC4u;
    // 80305AC4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305AC8u;
            ctx->pc = target;
            return;
        }
    }

label_80305AC8:
    ctx->pc = 0x80305AC8u;
    ctx->downcount -= 6;
    // 80305AC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305ACC:
    ctx->pc = 0x80305ACCu;
    // 80305ACC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305AD0:
    ctx->pc = 0x80305AD0u;
    // 80305AD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305AD4:
    ctx->pc = 0x80305AD4u;
    // 80305AD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305AD8:
    ctx->pc = 0x80305AD8u;
    // 80305AD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305ADC:
    ctx->pc = 0x80305ADCu;
    ctx->downcount -= 19;
    // 80305ADC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305AE0:
    ctx->pc = 0x80305AE0u;
    // 80305AE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305AE4:
    ctx->pc = 0x80305AE4u;
    // 80305AE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305AE8:
    ctx->pc = 0x80305AE8u;
    // 80305AE8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305AEC:
    ctx->pc = 0x80305AECu;
    // 80305AEC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305AF0:
    ctx->pc = 0x80305AF0u;
    // 80305AF0: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305AF4:
    ctx->pc = 0x80305AF4u;
    // 80305AF4: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305AF8:
    ctx->pc = 0x80305AF8u;
    // 80305AF8: cmpwi   r0, 0
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

label_80305AFC:
    ctx->pc = 0x80305AFCu;
    // 80305AFC: bc    12, 2, 0x80305B18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305B18;
        }
    }

label_80305B00:
    ctx->pc = 0x80305B00u;
    ctx->downcount -= 3;
    // 80305B00: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305B04:
    ctx->pc = 0x80305B04u;
    // 80305B04: cmpwi   r0, 0
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

label_80305B08:
    ctx->pc = 0x80305B08u;
    // 80305B08: bc    12, 2, 0x80305B18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305B18;
        }
    }

label_80305B0C:
    ctx->pc = 0x80305B0Cu;
    ctx->downcount -= 3;
    // 80305B0C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80305B10:
    ctx->pc = 0x80305B10u;
    // 80305B10: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80305B14:
    ctx->pc = 0x80305B14u;
    // 80305B14: bl      0x803457B8
    {
            ctx->lr = 0x80305B18u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305B18:
    ctx->pc = 0x80305B18u;
    ctx->downcount -= 2;
    // 80305B18: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80305B1C:
    ctx->pc = 0x80305B1Cu;
    // 80305B1C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305B20:
    ctx->downcount -= 5;
    // 80305B20: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80305B24:
    ctx->pc = 0x80305B24u;
    // 80305B24: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305B28:
    ctx->pc = 0x80305B28u;
    // 80305B28: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305B2C:
    // 80305B2C: cmpwi   r0, 0
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

label_80305B30:
    // 80305B30: bc    12, 2, 0x80305B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305B4C;
        }
    }

label_80305B34:
    ctx->pc = 0x80305B34u;
    ctx->downcount -= 3;
    // 80305B34: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305B38:
    // 80305B38: cmpwi   r0, 0
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

label_80305B3C:
    // 80305B3C: bc    12, 2, 0x80305B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305B4C;
        }
    }

label_80305B40:
    ctx->downcount -= 3;
    // 80305B40: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80305B44:
    // 80305B44: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80305B48:
    // 80305B48: bl      0x803457B8
    {
            ctx->lr = 0x80305B4Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305B4C:
    ctx->downcount -= 4;
    // 80305B4C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80305B50:
    // 80305B50: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80305B54:
    // 80305B54: cmpwi   r30, 3
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

label_80305B58:
    // 80305B58: bc    12, 0, 0x80305B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305B20u;
                return;
            }
            goto label_80305B20;
        }
    }

label_80305B5C:
    ctx->pc = 0x80305B5Cu;
    ctx->downcount -= 6;
    // 80305B5C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305B60:
    ctx->pc = 0x80305B60u;
    // 80305B60: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80305B64:
    ctx->pc = 0x80305B64u;
    // 80305B64: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80305B68:
    ctx->pc = 0x80305B68u;
    // 80305B68: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305B6C:
    ctx->pc = 0x80305B6Cu;
    // 80305B6C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305B70:
    ctx->pc = 0x80305B70u;
    // 80305B70: bl      0x80370BD4
    {
            ctx->lr = 0x80305B74u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80305B74:
    ctx->pc = 0x80305B74u;
    ctx->downcount -= 3;
    // 80305B74: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305B78:
    ctx->pc = 0x80305B78u;
    // 80305B78: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305B7C:
    ctx->pc = 0x80305B7Cu;
    // 80305B7C: bl      0x80263ABC
    {
            ctx->lr = 0x80305B80u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80305B80:
    ctx->pc = 0x80305B80u;
    ctx->downcount -= 16;
    // 80305B80: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305B84:
    ctx->pc = 0x80305B84u;
    // 80305B84: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305B88:
    ctx->pc = 0x80305B88u;
    // 80305B88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305B8C:
    ctx->pc = 0x80305B8Cu;
    // 80305B8C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80305B90:
    ctx->pc = 0x80305B90u;
    // 80305B90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305B94:
    ctx->pc = 0x80305B94u;
    ctx->downcount -= 1;
    // 80305B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305B98:
    ctx->pc = 0x80305B98u;
    ctx->downcount -= 7;
    // 80305B98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305B9C:
    ctx->pc = 0x80305B9Cu;
    // 80305B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305BA0:
    ctx->pc = 0x80305BA0u;
    // 80305BA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305BA4:
    ctx->pc = 0x80305BA4u;
    // 80305BA4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80305BA8:
    ctx->pc = 0x80305BA8u;
    // 80305BA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305BAC:
    ctx->pc = 0x80305BACu;
    // 80305BAC: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305BB0:
    ctx->pc = 0x80305BB0u;
    // 80305BB0: bl      0x8026EE88
    {
            ctx->lr = 0x80305BB4u;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_80305BB4:
    ctx->pc = 0x80305BB4u;
    ctx->downcount -= 5;
    // 80305BB4: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305BB8:
    ctx->pc = 0x80305BB8u;
    // 80305BB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80305BBC:
    ctx->pc = 0x80305BBCu;
    // 80305BBC: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305BC0:
    ctx->pc = 0x80305BC0u;
    // 80305BC0: cmpwi   r0, 0
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

label_80305BC4:
    ctx->pc = 0x80305BC4u;
    // 80305BC4: bc    12, 2, 0x80305BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305BD4;
        }
    }

label_80305BC8:
    ctx->pc = 0x80305BC8u;
    ctx->downcount -= 3;
    // 80305BC8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80305BCC:
    ctx->pc = 0x80305BCCu;
    // 80305BCC: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305BD0:
    ctx->pc = 0x80305BD0u;
    // 80305BD0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80305BD4:
    ctx->pc = 0x80305BD4u;
    ctx->downcount -= 5;
    // 80305BD4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80305BD8:
    ctx->pc = 0x80305BD8u;
    // 80305BD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80305BDC:
    ctx->pc = 0x80305BDCu;
    // 80305BDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80305BE0:
    ctx->pc = 0x80305BE0u;
    // 80305BE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80305BE4:
    ctx->downcount -= 5;
    // 80305BE4: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80305BE8:
    ctx->pc = 0x80305BE8u;
    // 80305BE8: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305BEC:
    ctx->pc = 0x80305BECu;
    // 80305BEC: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305BF0:
    // 80305BF0: cmpwi   r0, 0
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

label_80305BF4:
    // 80305BF4: bc    12, 2, 0x80305C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305C00;
        }
    }

label_80305BF8:
    ctx->pc = 0x80305BF8u;
    ctx->downcount -= 2;
    // 80305BF8: stw     r6, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80305BFC:
    // 80305BFC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80305C00:
    ctx->downcount -= 3;
    // 80305C00: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_80305C04:
    // 80305C04: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_80305C08:
    // 80305C08: bc    16, 0, 0x80305BE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305BE4u;
                return;
            }
            goto label_80305BE4;
        }
    }

label_80305C0C:
    ctx->pc = 0x80305C0Cu;
    ctx->downcount -= 2;
    // 80305C0C: cmpwi   r5, 0
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

label_80305C10:
    ctx->pc = 0x80305C10u;
    // 80305C10: bc    12, 2, 0x80305C44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305C44;
        }
    }

label_80305C14:
    ctx->pc = 0x80305C14u;
    ctx->downcount -= 6;
    // 80305C14: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305C18:
    ctx->pc = 0x80305C18u;
    // 80305C18: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80305C1C:
    ctx->pc = 0x80305C1Cu;
    // 80305C1C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80305C20:
    ctx->pc = 0x80305C20u;
    // 80305C20: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305C24:
    ctx->pc = 0x80305C24u;
    // 80305C24: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305C28:
    ctx->pc = 0x80305C28u;
    // 80305C28: bl      0x80370BD4
    {
            ctx->lr = 0x80305C2Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80305C2C:
    ctx->pc = 0x80305C2Cu;
    ctx->downcount -= 3;
    // 80305C2C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305C30:
    ctx->pc = 0x80305C30u;
    // 80305C30: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305C34:
    ctx->pc = 0x80305C34u;
    // 80305C34: bl      0x80263ABC
    {
            ctx->lr = 0x80305C38u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80305C38:
    ctx->pc = 0x80305C38u;
    ctx->downcount -= 3;
    // 80305C38: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80305C3C:
    ctx->pc = 0x80305C3Cu;
    // 80305C3C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80305C40:
    ctx->pc = 0x80305C40u;
    // 80305C40: bl      0x803457B8
    {
            ctx->lr = 0x80305C44u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305C44:
    ctx->pc = 0x80305C44u;
    ctx->downcount -= 6;
    // 80305C44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305C48:
    ctx->pc = 0x80305C48u;
    // 80305C48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80305C4C:
    ctx->pc = 0x80305C4Cu;
    // 80305C4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305C50:
    ctx->pc = 0x80305C50u;
    // 80305C50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305C54:
    ctx->pc = 0x80305C54u;
    // 80305C54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305C58:
    ctx->pc = 0x80305C58u;
    ctx->downcount -= 2;
    // 80305C58: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305C5C:
    ctx->pc = 0x80305C5Cu;
    // 80305C5C: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_80305C60:
    ctx->pc = 0x80305C60u;
    ctx->downcount -= 7;
    // 80305C60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305C64:
    ctx->pc = 0x80305C64u;
    // 80305C64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305C68:
    ctx->pc = 0x80305C68u;
    // 80305C68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305C6C:
    ctx->pc = 0x80305C6Cu;
    // 80305C6C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305C70:
    ctx->pc = 0x80305C70u;
    // 80305C70: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305C74:
    ctx->pc = 0x80305C74u;
    // 80305C74: cmpwi   r0, 0
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

label_80305C78:
    ctx->pc = 0x80305C78u;
    // 80305C78: bc    12, 2, 0x80305C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305C98;
        }
    }

label_80305C7C:
    ctx->pc = 0x80305C7Cu;
    ctx->downcount -= 4;
    // 80305C7C: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305C80:
    ctx->pc = 0x80305C80u;
    // 80305C80: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305C84:
    ctx->pc = 0x80305C84u;
    // 80305C84: cmpwi   r0, 0
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

label_80305C88:
    ctx->pc = 0x80305C88u;
    // 80305C88: bc    12, 2, 0x80305C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305C98;
        }
    }

label_80305C8C:
    ctx->pc = 0x80305C8Cu;
    ctx->downcount -= 3;
    // 80305C8C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80305C90:
    ctx->pc = 0x80305C90u;
    // 80305C90: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80305C94:
    ctx->pc = 0x80305C94u;
    // 80305C94: bl      0x803457B8
    {
            ctx->lr = 0x80305C98u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80305C98:
    ctx->pc = 0x80305C98u;
    ctx->downcount -= 6;
    // 80305C98: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305C9C:
    ctx->pc = 0x80305C9Cu;
    // 80305C9C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80305CA0:
    ctx->pc = 0x80305CA0u;
    // 80305CA0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80305CA4:
    ctx->pc = 0x80305CA4u;
    // 80305CA4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305CA8:
    ctx->pc = 0x80305CA8u;
    // 80305CA8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305CAC:
    ctx->pc = 0x80305CACu;
    // 80305CAC: bl      0x80370BD4
    {
            ctx->lr = 0x80305CB0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80305CB0:
    ctx->pc = 0x80305CB0u;
    ctx->downcount -= 3;
    // 80305CB0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305CB4:
    ctx->pc = 0x80305CB4u;
    // 80305CB4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305CB8:
    ctx->pc = 0x80305CB8u;
    // 80305CB8: bl      0x80263ABC
    {
            ctx->lr = 0x80305CBCu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80305CBC:
    ctx->pc = 0x80305CBCu;
    ctx->downcount -= 5;
    // 80305CBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305CC0:
    ctx->pc = 0x80305CC0u;
    // 80305CC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305CC4:
    ctx->pc = 0x80305CC4u;
    // 80305CC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305CC8:
    ctx->pc = 0x80305CC8u;
    // 80305CC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305CCC:
    ctx->pc = 0x80305CCCu;
    ctx->downcount -= 19;
    // 80305CCC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305CD0:
    ctx->pc = 0x80305CD0u;
    // 80305CD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305CD4:
    ctx->pc = 0x80305CD4u;
    // 80305CD4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305CD8:
    ctx->pc = 0x80305CD8u;
    // 80305CD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80305CDC:
    ctx->pc = 0x80305CDCu;
    // 80305CDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305CE0:
    ctx->pc = 0x80305CE0u;
    // 80305CE0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305CE4:
    ctx->pc = 0x80305CE4u;
    // 80305CE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305CE8:
    ctx->pc = 0x80305CE8u;
    // 80305CE8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305CEC:
    ctx->pc = 0x80305CECu;
    // 80305CEC: bl      0x803554B8
    {
            ctx->lr = 0x80305CF0u;
            ctx->pc = 0x803554B8u;
            return;
    }

label_80305CF0:
    ctx->pc = 0x80305CF0u;
    ctx->downcount -= 6;
    // 80305CF0: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305CF4:
    ctx->pc = 0x80305CF4u;
    // 80305CF4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305CF8:
    ctx->pc = 0x80305CF8u;
    // 80305CF8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305CFC:
    ctx->pc = 0x80305CFCu;
    // 80305CFC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305D00:
    ctx->pc = 0x80305D00u;
    // 80305D00: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305D04u;
            ctx->pc = target;
            return;
        }
    }

label_80305D04:
    ctx->pc = 0x80305D04u;
    ctx->downcount -= 2;
    // 80305D04: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D08:
    ctx->pc = 0x80305D08u;
    // 80305D08: bl      0x803053AC
    {
            ctx->lr = 0x80305D0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803053ACu;
                return;
            }
            goto label_803053AC;
    }

label_80305D0C:
    ctx->pc = 0x80305D0Cu;
    ctx->downcount -= 3;
    // 80305D0C: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D10:
    ctx->pc = 0x80305D10u;
    // 80305D10: lwz     r4, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305D14:
    ctx->pc = 0x80305D14u;
    // 80305D14: bl      0x80305390
    {
            ctx->lr = 0x80305D18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305390u;
                return;
            }
            goto label_80305390;
    }

label_80305D18:
    ctx->pc = 0x80305D18u;
    ctx->downcount -= 3;
    // 80305D18: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D1C:
    ctx->pc = 0x80305D1Cu;
    // 80305D1C: lbz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80305D20:
    ctx->pc = 0x80305D20u;
    // 80305D20: bl      0x80305378
    {
            ctx->lr = 0x80305D24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305378u;
                return;
            }
            goto label_80305378;
    }

label_80305D24:
    ctx->pc = 0x80305D24u;
    ctx->downcount -= 2;
    // 80305D24: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80305D28:
    ctx->pc = 0x80305D28u;
    // 80305D28: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305D2C:
    ctx->downcount -= 4;
    // 80305D2C: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80305D30:
    // 80305D30: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80305D34:
    ctx->pc = 0x80305D34u;
    // 80305D34: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D38:
    // 80305D38: bl      0x8036B330
    {
            ctx->lr = 0x80305D3Cu;
            ctx->pc = 0x8036B330u;
            return;
    }

label_80305D3C:
    ctx->downcount -= 4;
    // 80305D3C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80305D40:
    // 80305D40: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80305D44:
    // 80305D44: cmpwi   r30, 3
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

label_80305D48:
    // 80305D48: bc    12, 0, 0x80305D2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305D2Cu;
                return;
            }
            goto label_80305D2C;
        }
    }

label_80305D4C:
    ctx->pc = 0x80305D4Cu;
    ctx->downcount -= 2;
    // 80305D4C: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D50:
    ctx->pc = 0x80305D50u;
    // 80305D50: bl      0x8036E924
    {
            ctx->lr = 0x80305D54u;
            ctx->pc = 0x8036E924u;
            return;
    }

label_80305D54:
    ctx->pc = 0x80305D54u;
    ctx->downcount -= 8;
    // 80305D54: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305D58:
    ctx->pc = 0x80305D58u;
    // 80305D58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80305D5C:
    ctx->pc = 0x80305D5Cu;
    // 80305D5C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80305D60:
    ctx->pc = 0x80305D60u;
    // 80305D60: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305D64:
    ctx->pc = 0x80305D64u;
    // 80305D64: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305D68:
    ctx->pc = 0x80305D68u;
    // 80305D68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305D6C:
    ctx->pc = 0x80305D6Cu;
    // 80305D6C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305D70u;
            ctx->pc = target;
            return;
        }
    }

label_80305D70:
    ctx->pc = 0x80305D70u;
    ctx->downcount -= 16;
    // 80305D70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305D74:
    ctx->pc = 0x80305D74u;
    // 80305D74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305D78:
    ctx->pc = 0x80305D78u;
    // 80305D78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305D7C:
    ctx->pc = 0x80305D7Cu;
    // 80305D7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80305D80:
    ctx->pc = 0x80305D80u;
    // 80305D80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305D84:
    ctx->pc = 0x80305D84u;
    ctx->downcount -= 5;
    // 80305D84: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305D88:
    ctx->pc = 0x80305D88u;
    // 80305D88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305D8C:
    ctx->pc = 0x80305D8Cu;
    // 80305D8C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305D90:
    ctx->pc = 0x80305D90u;
    // 80305D90: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80305D94:
    ctx->pc = 0x80305D94u;
    // 80305D94: bl      0x80007858
    {
            ctx->lr = 0x80305D98u;
            ctx->pc = 0x80007858u;
            return;
    }

label_80305D98:
    ctx->pc = 0x80305D98u;
    ctx->downcount -= 3;
    // 80305D98: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305D9C:
    ctx->pc = 0x80305D9Cu;
    // 80305D9C: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305DA0:
    ctx->pc = 0x80305DA0u;
    // 80305DA0: bl      0x8036E67C
    {
            ctx->lr = 0x80305DA4u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_80305DA4:
    ctx->pc = 0x80305DA4u;
    ctx->downcount -= 3;
    // 80305DA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305DA8:
    ctx->pc = 0x80305DA8u;
    // 80305DA8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80305DAC:
    ctx->pc = 0x80305DACu;
    // 80305DAC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305DB0:
    ctx->pc = 0x80305DB0u;
    ctx->downcount -= 4;
    // 80305DB0: lwz     r4, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305DB4:
    // 80305DB4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80305DB8:
    // 80305DB8: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80305DBC:
    // 80305DBC: bl      0x80304FAC
    {
            ctx->lr = 0x80305DC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304FACu;
                return;
            }
            goto label_80304FAC;
    }

label_80305DC0:
    ctx->pc = 0x80305DC0u;
    ctx->downcount -= 10;
    // 80305DC0: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80305DC4:
    // 80305DC4: add   r29, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80305DC8:
    ctx->pc = 0x80305DC8u;
    // 80305DC8: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80305DCC:
    // 80305DCC: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80305DD0:
    ctx->pc = 0x80305DD0u;
    // 80305DD0: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80305DD4:
    ctx->pc = 0x80305DD4u;
    // 80305DD4: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80305DD8:
    ctx->pc = 0x80305DD8u;
    // 80305DD8: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80305DDC:
    ctx->pc = 0x80305DDCu;
    // 80305DDC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305DDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80305DE0:
    ctx->pc = 0x80305DE0u;
    // 80305DE0: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305DE4:
    // 80305DE4: bl      0x8036B284
    {
            ctx->lr = 0x80305DE8u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_80305DE8:
    ctx->pc = 0x80305DE8u;
    ctx->downcount -= 3;
    // 80305DE8: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305DEC:
    // 80305DEC: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80305DF0:
    // 80305DF0: bl      0x8036B244
    {
            ctx->lr = 0x80305DF4u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_80305DF4:
    ctx->downcount -= 4;
    // 80305DF4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80305DF8:
    // 80305DF8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80305DFC:
    // 80305DFC: cmpwi   r28, 3
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

label_80305E00:
    // 80305E00: bc    12, 0, 0x80305DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305DB0u;
                return;
            }
            goto label_80305DB0;
        }
    }

label_80305E04:
    ctx->pc = 0x80305E04u;
    ctx->downcount -= 3;
    // 80305E04: lwz     r4, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80305E08:
    ctx->pc = 0x80305E08u;
    // 80305E08: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80305E0C:
    ctx->pc = 0x80305E0Cu;
    // 80305E0C: bl      0x80304F4C
    {
            ctx->lr = 0x80305E10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304F4Cu;
                return;
            }
            goto label_80304F4C;
    }

label_80305E10:
    ctx->pc = 0x80305E10u;
    ctx->downcount -= 9;
    // 80305E10: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80305E14:
    ctx->pc = 0x80305E14u;
    // 80305E14: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80305E18:
    ctx->pc = 0x80305E18u;
    // 80305E18: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80305E1C:
    ctx->pc = 0x80305E1Cu;
    // 80305E1C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80305E20:
    ctx->pc = 0x80305E20u;
    // 80305E20: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80305E24:
    ctx->pc = 0x80305E24u;
    // 80305E24: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80305E28:
    ctx->pc = 0x80305E28u;
    // 80305E28: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80305E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80305E2C:
    ctx->pc = 0x80305E2Cu;
    // 80305E2C: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305E30:
    ctx->pc = 0x80305E30u;
    // 80305E30: bl      0x8036E884
    {
            ctx->lr = 0x80305E34u;
            ctx->pc = 0x8036E884u;
            return;
    }

label_80305E34:
    ctx->pc = 0x80305E34u;
    ctx->downcount -= 3;
    // 80305E34: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305E38:
    ctx->pc = 0x80305E38u;
    // 80305E38: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80305E3C:
    ctx->pc = 0x80305E3Cu;
    // 80305E3C: bl      0x8036E848
    {
            ctx->lr = 0x80305E40u;
            ctx->pc = 0x8036E848u;
            return;
    }

label_80305E40:
    ctx->pc = 0x80305E40u;
    ctx->downcount -= 2;
    // 80305E40: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80305E44:
    ctx->pc = 0x80305E44u;
    // 80305E44: bl      0x800078A4
    {
            ctx->lr = 0x80305E48u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_80305E48:
    ctx->pc = 0x80305E48u;
    ctx->downcount -= 5;
    // 80305E48: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305E4C:
    ctx->pc = 0x80305E4Cu;
    // 80305E4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305E50:
    ctx->pc = 0x80305E50u;
    // 80305E50: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80305E54:
    ctx->pc = 0x80305E54u;
    // 80305E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305E58:
    ctx->pc = 0x80305E58u;
    ctx->downcount -= 16;
    // 80305E58: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305E5C:
    ctx->pc = 0x80305E5Cu;
    // 80305E5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305E60:
    ctx->pc = 0x80305E60u;
    // 80305E60: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305E64:
    ctx->pc = 0x80305E64u;
    // 80305E64: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305E68:
    ctx->pc = 0x80305E68u;
    // 80305E68: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305E6C:
    ctx->pc = 0x80305E6Cu;
    // 80305E6C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305E70:
    ctx->pc = 0x80305E70u;
    ctx->downcount -= 3;
    // 80305E70: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305E74:
    // 80305E74: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305E78:
    // 80305E78: bl      0x80304EFC
    {
            ctx->lr = 0x80305E7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304EFCu;
                return;
            }
            goto label_80304EFC;
    }

label_80305E7C:
    ctx->downcount -= 4;
    // 80305E7C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305E80:
    ctx->pc = 0x80305E80u;
    // 80305E80: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305E84:
    // 80305E84: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305E88:
    // 80305E88: bl      0x803055D4
    {
            ctx->lr = 0x80305E8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803055D4u;
                return;
            }
            goto label_803055D4;
    }

label_80305E8C:
    ctx->downcount -= 3;
    // 80305E8C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80305E90:
    // 80305E90: cmpwi   r31, 3
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

label_80305E94:
    // 80305E94: bc    12, 0, 0x80305E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305E70u;
                return;
            }
            goto label_80305E70;
        }
    }

label_80305E98:
    ctx->pc = 0x80305E98u;
    ctx->downcount -= 2;
    // 80305E98: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80305E9C:
    ctx->pc = 0x80305E9Cu;
    // 80305E9C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305EA0:
    ctx->pc = 0x80305EA0u;
    ctx->downcount -= 3;
    // 80305EA0: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305EA4:
    // 80305EA4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305EA8:
    // 80305EA8: bl      0x80304EFC
    {
            ctx->lr = 0x80305EACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80304EFCu;
                return;
            }
            goto label_80304EFC;
    }

label_80305EAC:
    ctx->downcount -= 4;
    // 80305EAC: add   r5, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80305EB0:
    // 80305EB0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305EB4:
    ctx->pc = 0x80305EB4u;
    // 80305EB4: lwz     r3, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305EB8:
    // 80305EB8: bl      0x8036B234
    {
            ctx->lr = 0x80305EBCu;
            ctx->pc = 0x8036B234u;
            return;
    }

label_80305EBC:
    ctx->downcount -= 4;
    // 80305EBC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80305EC0:
    // 80305EC0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80305EC4:
    // 80305EC4: cmpwi   r30, 3
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

label_80305EC8:
    // 80305EC8: bc    12, 0, 0x80305EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305EA0u;
                return;
            }
            goto label_80305EA0;
        }
    }

label_80305ECC:
    ctx->pc = 0x80305ECCu;
    ctx->downcount -= 16;
    // 80305ECC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305ED0:
    ctx->pc = 0x80305ED0u;
    // 80305ED0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305ED4:
    ctx->pc = 0x80305ED4u;
    // 80305ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305ED8:
    ctx->pc = 0x80305ED8u;
    // 80305ED8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80305EDC:
    ctx->pc = 0x80305EDCu;
    // 80305EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305EE0:
    ctx->pc = 0x80305EE0u;
    ctx->downcount -= 16;
    // 80305EE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305EE4:
    ctx->pc = 0x80305EE4u;
    // 80305EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305EE8:
    ctx->pc = 0x80305EE8u;
    // 80305EE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305EEC:
    ctx->pc = 0x80305EECu;
    // 80305EEC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305EF0:
    ctx->pc = 0x80305EF0u;
    // 80305EF0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305EF4:
    ctx->pc = 0x80305EF4u;
    // 80305EF4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80305EF8:
    ctx->pc = 0x80305EF8u;
    ctx->downcount -= 3;
    // 80305EF8: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305EFC:
    // 80305EFC: rlwinm r4, r30, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_80305F00:
    // 80305F00: bl      0x8023439C
    {
            ctx->lr = 0x80305F04u;
            ctx->pc = 0x8023439Cu;
            return;
    }

label_80305F04:
    ctx->pc = 0x80305F04u;
    ctx->downcount -= 3;
    // 80305F04: lbz     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80305F08:
    // 80305F08: cmpwi   r0, 0
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

label_80305F0C:
    // 80305F0C: bc    12, 2, 0x80305F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305F24;
        }
    }

label_80305F10:
    ctx->downcount -= 2;
    // 80305F10: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_80305F14:
    // 80305F14: bl      0x802470BC
    {
            ctx->lr = 0x80305F18u;
            ctx->pc = 0x802470BCu;
            return;
    }

label_80305F18:
    ctx->downcount -= 2;
    // 80305F18: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305F1C:
    // 80305F1C: bc    4, 2, 0x80305F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305F24;
        }
    }

label_80305F20:
    ctx->downcount -= 1;
    // 80305F20: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80305F24:
    ctx->downcount -= 3;
    // 80305F24: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80305F28:
    // 80305F28: cmplwi  r30, 0x0064
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0064u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305F2C:
    // 80305F2C: bc    12, 0, 0x80305EF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305EF8u;
                return;
            }
            goto label_80305EF8;
        }
    }

label_80305F30:
    ctx->pc = 0x80305F30u;
    ctx->downcount -= 17;
    // 80305F30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305F34:
    ctx->pc = 0x80305F34u;
    // 80305F34: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305F38:
    ctx->pc = 0x80305F38u;
    // 80305F38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305F3C:
    ctx->pc = 0x80305F3Cu;
    // 80305F3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305F40:
    ctx->pc = 0x80305F40u;
    // 80305F40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305F44:
    ctx->pc = 0x80305F44u;
    // 80305F44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305F48:
    ctx->pc = 0x80305F48u;
    ctx->downcount -= 21;
    // 80305F48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305F4C:
    ctx->pc = 0x80305F4Cu;
    // 80305F4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305F50:
    ctx->pc = 0x80305F50u;
    // 80305F50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305F54:
    ctx->pc = 0x80305F54u;
    // 80305F54: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305F58:
    ctx->pc = 0x80305F58u;
    // 80305F58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305F5C:
    ctx->pc = 0x80305F5Cu;
    // 80305F5C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80305F60:
    ctx->pc = 0x80305F60u;
    // 80305F60: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305F64:
    ctx->pc = 0x80305F64u;
    // 80305F64: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305F68:
    ctx->pc = 0x80305F68u;
    // 80305F68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80305F6C:
    ctx->pc = 0x80305F6Cu;
    // 80305F6C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80305F70u;
            ctx->pc = target;
            return;
        }
    }

label_80305F70:
    ctx->pc = 0x80305F70u;
    ctx->downcount -= 2;
    // 80305F70: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305F74:
    ctx->pc = 0x80305F74u;
    // 80305F74: bc    4, 2, 0x80305FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305FA4;
        }
    }

label_80305F78:
    ctx->pc = 0x80305F78u;
    ctx->downcount -= 3;
    // 80305F78: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305F7C:
    ctx->pc = 0x80305F7Cu;
    // 80305F7C: cmpwi   r0, 0
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

label_80305F80:
    ctx->pc = 0x80305F80u;
    // 80305F80: bc    12, 2, 0x80305FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80305FA4;
        }
    }

label_80305F84:
    ctx->pc = 0x80305F84u;
    ctx->downcount -= 4;
    // 80305F84: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80305F88:
    ctx->pc = 0x80305F88u;
    // 80305F88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80305F8C:
    ctx->pc = 0x80305F8Cu;
    // 80305F8C: addi    r4, r4, 17912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17912);

label_80305F90:
    ctx->pc = 0x80305F90u;
    // 80305F90: bl      0x8000E8B0
    {
            ctx->lr = 0x80305F94u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_80305F94:
    ctx->pc = 0x80305F94u;
    ctx->downcount -= 2;
    // 80305F94: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80305F98:
    ctx->pc = 0x80305F98u;
    // 80305F98: bc    4, 2, 0x80305FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80305FA4;
        }
    }

label_80305F9C:
    ctx->pc = 0x80305F9Cu;
    ctx->downcount -= 2;
    // 80305F9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80305FA0:
    ctx->pc = 0x80305FA0u;
    // 80305FA0: bl      0x80305D84
    {
            ctx->lr = 0x80305FA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305D84u;
                return;
            }
            goto label_80305D84;
    }

label_80305FA4:
    ctx->pc = 0x80305FA4u;
    ctx->downcount -= 16;
    // 80305FA4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80305FA8:
    ctx->pc = 0x80305FA8u;
    // 80305FA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80305FAC:
    ctx->pc = 0x80305FACu;
    // 80305FAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80305FB0:
    ctx->pc = 0x80305FB0u;
    // 80305FB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80305FB4:
    ctx->pc = 0x80305FB4u;
    // 80305FB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80305FB8:
    ctx->pc = 0x80305FB8u;
    ctx->downcount -= 18;
    // 80305FB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80305FBC:
    ctx->pc = 0x80305FBCu;
    // 80305FBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80305FC0:
    ctx->pc = 0x80305FC0u;
    // 80305FC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80305FC4:
    ctx->pc = 0x80305FC4u;
    // 80305FC4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80305FC8:
    ctx->pc = 0x80305FC8u;
    // 80305FC8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80305FCC:
    ctx->pc = 0x80305FCCu;
    // 80305FCC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80305FD0:
    ctx->pc = 0x80305FD0u;
    // 80305FD0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80305FD4:
    ctx->pc = 0x80305FD4u;
    // 80305FD4: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_80305FD8:
    ctx->pc = 0x80305FD8u;
    ctx->downcount -= 5;
    // 80305FD8: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305FDC:
    // 80305FDC: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80305FE0:
    // 80305FE0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80305FE4:
    // 80305FE4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80305FE8:
    // 80305FE8: bl      0x80370BD4
    {
            ctx->lr = 0x80305FECu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80305FEC:
    ctx->downcount -= 8;
    // 80305FEC: add   r3, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80305FF0:
    ctx->pc = 0x80305FF0u;
    // 80305FF0: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80305FF4:
    ctx->pc = 0x80305FF4u;
    // 80305FF4: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80305FF8:
    ctx->pc = 0x80305FF8u;
    // 80305FF8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80305FFC:
    ctx->pc = 0x80305FFCu;
    // 80305FFC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306000:
    ctx->pc = 0x80306000u;
    // 80306000: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80306004:
    ctx->pc = 0x80306004u;
    // 80306004: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80306008u;
            ctx->pc = target;
            return;
        }
    }

label_80306008:
    ctx->downcount -= 5;
    // 80306008: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030600C:
    // 8030600C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306010:
    // 80306010: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80306014:
    // 80306014: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80306018:
    // 80306018: bl      0x8027714C
    {
            ctx->lr = 0x8030601Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030601C:
    ctx->downcount -= 4;
    // 8030601C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80306020:
    // 80306020: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80306024:
    // 80306024: cmpwi   r28, 3
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

label_80306028:
    // 80306028: bc    12, 0, 0x80305FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305FD8u;
                return;
            }
            goto label_80305FD8;
        }
    }

label_8030602C:
    ctx->pc = 0x8030602Cu;
    ctx->downcount -= 6;
    // 8030602C: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306030:
    ctx->pc = 0x80306030u;
    // 80306030: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_80306034:
    ctx->pc = 0x80306034u;
    // 80306034: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80306038:
    ctx->pc = 0x80306038u;
    // 80306038: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030603C:
    ctx->pc = 0x8030603Cu;
    // 8030603C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306040:
    ctx->pc = 0x80306040u;
    // 80306040: bl      0x80370BD4
    {
            ctx->lr = 0x80306044u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306044:
    ctx->pc = 0x80306044u;
    ctx->downcount -= 7;
    // 80306044: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306048:
    ctx->pc = 0x80306048u;
    // 80306048: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8030604C:
    ctx->pc = 0x8030604Cu;
    // 8030604C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306050:
    ctx->pc = 0x80306050u;
    // 80306050: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306054:
    ctx->pc = 0x80306054u;
    // 80306054: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80306058:
    ctx->pc = 0x80306058u;
    // 80306058: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030605Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030605C:
    ctx->pc = 0x8030605Cu;
    ctx->downcount -= 5;
    // 8030605C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306060:
    ctx->pc = 0x80306060u;
    // 80306060: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306064:
    ctx->pc = 0x80306064u;
    // 80306064: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80306068:
    ctx->pc = 0x80306068u;
    // 80306068: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030606C:
    ctx->pc = 0x8030606Cu;
    // 8030606C: bl      0x8027714C
    {
            ctx->lr = 0x80306070u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80306070:
    ctx->pc = 0x80306070u;
    ctx->downcount -= 5;
    // 80306070: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306074:
    ctx->pc = 0x80306074u;
    // 80306074: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80306078:
    ctx->pc = 0x80306078u;
    // 80306078: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030607C:
    ctx->pc = 0x8030607Cu;
    // 8030607C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306080:
    ctx->pc = 0x80306080u;
    // 80306080: bl      0x80370BD4
    {
            ctx->lr = 0x80306084u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306084:
    ctx->pc = 0x80306084u;
    ctx->downcount -= 7;
    // 80306084: lwz     r3, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306088:
    ctx->pc = 0x80306088u;
    // 80306088: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8030608C:
    ctx->pc = 0x8030608Cu;
    // 8030608C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306090:
    ctx->pc = 0x80306090u;
    // 80306090: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306094:
    ctx->pc = 0x80306094u;
    // 80306094: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80306098:
    ctx->pc = 0x80306098u;
    // 80306098: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030609Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030609C:
    ctx->pc = 0x8030609Cu;
    ctx->downcount -= 5;
    // 8030609C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803060A0:
    ctx->pc = 0x803060A0u;
    // 803060A0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803060A4:
    ctx->pc = 0x803060A4u;
    // 803060A4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_803060A8:
    ctx->pc = 0x803060A8u;
    // 803060A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803060AC:
    ctx->pc = 0x803060ACu;
    // 803060AC: bl      0x8027714C
    {
            ctx->lr = 0x803060B0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_803060B0:
    ctx->pc = 0x803060B0u;
    ctx->downcount -= 2;
    // 803060B0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_803060B4:
    ctx->pc = 0x803060B4u;
    // 803060B4: bl      0x80305E58
    {
            ctx->lr = 0x803060B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305E58u;
                return;
            }
            goto label_80305E58;
    }

label_803060B8:
    ctx->pc = 0x803060B8u;
    ctx->downcount -= 16;
    // 803060B8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803060BC:
    ctx->pc = 0x803060BCu;
    // 803060BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803060C0:
    ctx->pc = 0x803060C0u;
    // 803060C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803060C4:
    ctx->pc = 0x803060C4u;
    // 803060C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803060C8:
    ctx->pc = 0x803060C8u;
    // 803060C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803060CC:
    ctx->pc = 0x803060CCu;
    ctx->downcount -= 10;
    // 803060CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803060D0:
    ctx->pc = 0x803060D0u;
    // 803060D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803060D4:
    ctx->pc = 0x803060D4u;
    // 803060D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803060D8:
    ctx->pc = 0x803060D8u;
    // 803060D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803060DC:
    ctx->pc = 0x803060DCu;
    // 803060DC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803060E0:
    ctx->pc = 0x803060E0u;
    // 803060E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803060E4:
    ctx->pc = 0x803060E4u;
    // 803060E4: stw     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803060E8:
    ctx->pc = 0x803060E8u;
    // 803060E8: stw     r0, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803060EC:
    ctx->pc = 0x803060ECu;
    // 803060EC: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803060F0:
    ctx->pc = 0x803060F0u;
    // 803060F0: bl      0x80234544
    {
            ctx->lr = 0x803060F4u;
            ctx->pc = 0x80234544u;
            return;
    }

label_803060F4:
    ctx->pc = 0x803060F4u;
    ctx->downcount -= 7;
    // 803060F4: lwz     r0, 31396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803060F8:
    ctx->pc = 0x803060F8u;
    // 803060F8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803060FC:
    ctx->pc = 0x803060FCu;
    // 803060FC: stw     r0, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306100:
    ctx->pc = 0x80306100u;
    // 80306100: lbz     r0, 31400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31400);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80306104:
    ctx->pc = 0x80306104u;
    // 80306104: stb     r0, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80306108:
    ctx->pc = 0x80306108u;
    // 80306108: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030610C:
    ctx->pc = 0x8030610Cu;
    // 8030610C: bl      0x8026F12C
    {
            ctx->lr = 0x80306110u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_80306110:
    ctx->pc = 0x80306110u;
    ctx->downcount -= 3;
    // 80306110: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80306114:
    ctx->pc = 0x80306114u;
    // 80306114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306118:
    ctx->pc = 0x80306118u;
    // 80306118: bl      0x803457B8
    {
            ctx->lr = 0x8030611Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030611C:
    ctx->pc = 0x8030611Cu;
    ctx->downcount -= 1;
    // 8030611C: bl      0x802B71D8
    {
            ctx->lr = 0x80306120u;
            ctx->pc = 0x802B71D8u;
            return;
    }

label_80306120:
    ctx->pc = 0x80306120u;
    ctx->downcount -= 2;
    // 80306120: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306124:
    ctx->pc = 0x80306124u;
    // 80306124: bc    4, 2, 0x80306140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80306140;
        }
    }

label_80306128:
    ctx->pc = 0x80306128u;
    ctx->downcount -= 2;
    // 80306128: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8030612C:
    ctx->pc = 0x8030612Cu;
    // 8030612C: bl      0x802B7228
    {
            ctx->lr = 0x80306130u;
            ctx->pc = 0x802B7228u;
            return;
    }

label_80306130:
    ctx->pc = 0x80306130u;
    ctx->downcount -= 3;
    // 80306130: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80306134:
    ctx->pc = 0x80306134u;
    // 80306134: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80306138:
    ctx->pc = 0x80306138u;
    // 80306138: bl      0x802B71BC
    {
            ctx->lr = 0x8030613Cu;
            ctx->pc = 0x802B71BCu;
            return;
    }

label_8030613C:
    ctx->pc = 0x8030613Cu;
    ctx->downcount -= 1;
    // 8030613C: b       0x8030614C
    {
            goto label_8030614C;
    }

label_80306140:
    ctx->pc = 0x80306140u;
    ctx->downcount -= 3;
    // 80306140: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80306144:
    ctx->pc = 0x80306144u;
    // 80306144: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80306148:
    ctx->pc = 0x80306148u;
    // 80306148: bl      0x802B71BC
    {
            ctx->lr = 0x8030614Cu;
            ctx->pc = 0x802B71BCu;
            return;
    }

label_8030614C:
    ctx->pc = 0x8030614Cu;
    ctx->downcount -= 6;
    // 8030614C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306150:
    ctx->pc = 0x80306150u;
    // 80306150: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306154:
    ctx->pc = 0x80306154u;
    // 80306154: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306158:
    ctx->pc = 0x80306158u;
    // 80306158: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030615C:
    ctx->pc = 0x8030615Cu;
    // 8030615C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306160:
    ctx->pc = 0x80306160u;
    ctx->downcount -= 20;
    // 80306160: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306164:
    ctx->pc = 0x80306164u;
    // 80306164: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306168:
    ctx->pc = 0x80306168u;
    // 80306168: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_8030616C:
    ctx->pc = 0x8030616Cu;
    // 8030616C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80306170:
    ctx->pc = 0x80306170u;
    // 80306170: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306174:
    ctx->pc = 0x80306174u;
    // 80306174: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306178:
    ctx->pc = 0x80306178u;
    // 80306178: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_8030617C:
    ctx->pc = 0x8030617Cu;
    // 8030617C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306180:
    ctx->pc = 0x80306180u;
    // 80306180: addi    r31, r31, 29072
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(29072);

label_80306184:
    ctx->pc = 0x80306184u;
    // 80306184: bl      0x803065B8
    {
            ctx->lr = 0x80306188u;
            goto label_803065B8;
    }

label_80306188:
    ctx->pc = 0x80306188u;
    ctx->downcount -= 10;
    // 80306188: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_8030618C:
    ctx->pc = 0x8030618Cu;
    // 8030618C: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80306190:
    ctx->pc = 0x80306190u;
    // 80306190: addi    r4, r4, 29328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29328);

label_80306194:
    ctx->pc = 0x80306194u;
    // 80306194: stw     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306198:
    ctx->pc = 0x80306198u;
    // 80306198: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030619C:
    ctx->pc = 0x8030619Cu;
    // 8030619C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_803061A0:
    ctx->pc = 0x803061A0u;
    // 803061A0: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803061A4:
    ctx->pc = 0x803061A4u;
    // 803061A4: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_803061A8:
    ctx->pc = 0x803061A8u;
    // 803061A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803061AC:
    ctx->pc = 0x803061ACu;
    // 803061AC: bl      0x803064D8
    {
            ctx->lr = 0x803061B0u;
            goto label_803064D8;
    }

label_803061B0:
    ctx->pc = 0x803061B0u;
    ctx->downcount -= 5;
    // 803061B0: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_803061B4:
    ctx->pc = 0x803061B4u;
    // 803061B4: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_803061B8:
    ctx->pc = 0x803061B8u;
    // 803061B8: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_803061BC:
    ctx->pc = 0x803061BCu;
    // 803061BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_803061C0:
    ctx->pc = 0x803061C0u;
    // 803061C0: bl      0x803064D8
    {
            ctx->lr = 0x803061C4u;
            goto label_803064D8;
    }

label_803061C4:
    ctx->pc = 0x803061C4u;
    ctx->downcount -= 5;
    // 803061C4: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_803061C8:
    ctx->pc = 0x803061C8u;
    // 803061C8: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_803061CC:
    ctx->pc = 0x803061CCu;
    // 803061CC: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_803061D0:
    ctx->pc = 0x803061D0u;
    // 803061D0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_803061D4:
    ctx->pc = 0x803061D4u;
    // 803061D4: bl      0x803064D8
    {
            ctx->lr = 0x803061D8u;
            goto label_803064D8;
    }

label_803061D8:
    ctx->pc = 0x803061D8u;
    ctx->downcount -= 5;
    // 803061D8: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_803061DC:
    ctx->pc = 0x803061DCu;
    // 803061DC: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_803061E0:
    ctx->pc = 0x803061E0u;
    // 803061E0: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_803061E4:
    ctx->pc = 0x803061E4u;
    // 803061E4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_803061E8:
    ctx->pc = 0x803061E8u;
    // 803061E8: bl      0x803064D8
    {
            ctx->lr = 0x803061ECu;
            goto label_803064D8;
    }

label_803061EC:
    ctx->pc = 0x803061ECu;
    ctx->downcount -= 5;
    // 803061EC: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_803061F0:
    ctx->pc = 0x803061F0u;
    // 803061F0: addi    r4, r31, 132
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(132);

label_803061F4:
    ctx->pc = 0x803061F4u;
    // 803061F4: addi    r5, r31, 144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(144);

label_803061F8:
    ctx->pc = 0x803061F8u;
    // 803061F8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_803061FC:
    ctx->pc = 0x803061FCu;
    // 803061FC: bl      0x803064D8
    {
            ctx->lr = 0x80306200u;
            goto label_803064D8;
    }

label_80306200:
    ctx->pc = 0x80306200u;
    ctx->downcount -= 5;
    // 80306200: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80306204:
    ctx->pc = 0x80306204u;
    // 80306204: addi    r4, r31, 156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(156);

label_80306208:
    ctx->pc = 0x80306208u;
    // 80306208: addi    r5, r31, 168
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(168);

label_8030620C:
    ctx->pc = 0x8030620Cu;
    // 8030620C: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80306210:
    ctx->pc = 0x80306210u;
    // 80306210: bl      0x803064D8
    {
            ctx->lr = 0x80306214u;
            goto label_803064D8;
    }

label_80306214:
    ctx->pc = 0x80306214u;
    ctx->downcount -= 5;
    // 80306214: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80306218:
    ctx->pc = 0x80306218u;
    // 80306218: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_8030621C:
    ctx->pc = 0x8030621Cu;
    // 8030621C: addi    r5, r31, 192
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(192);

label_80306220:
    ctx->pc = 0x80306220u;
    // 80306220: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_80306224:
    ctx->pc = 0x80306224u;
    // 80306224: bl      0x803064D8
    {
            ctx->lr = 0x80306228u;
            goto label_803064D8;
    }

label_80306228:
    ctx->pc = 0x80306228u;
    ctx->downcount -= 5;
    // 80306228: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_8030622C:
    ctx->pc = 0x8030622Cu;
    // 8030622C: addi    r4, r31, 204
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(204);

label_80306230:
    ctx->pc = 0x80306230u;
    // 80306230: addi    r5, r31, 216
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(216);

label_80306234:
    ctx->pc = 0x80306234u;
    // 80306234: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80306238:
    ctx->pc = 0x80306238u;
    // 80306238: bl      0x803064D8
    {
            ctx->lr = 0x8030623Cu;
            goto label_803064D8;
    }

label_8030623C:
    ctx->pc = 0x8030623Cu;
    ctx->downcount -= 5;
    // 8030623C: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80306240:
    ctx->pc = 0x80306240u;
    // 80306240: addi    r4, r31, 228
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(228);

label_80306244:
    ctx->pc = 0x80306244u;
    // 80306244: addi    r5, r31, 240
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(240);

label_80306248:
    ctx->pc = 0x80306248u;
    // 80306248: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_8030624C:
    ctx->pc = 0x8030624Cu;
    // 8030624C: bl      0x803064D8
    {
            ctx->lr = 0x80306250u;
            goto label_803064D8;
    }

label_80306250:
    ctx->pc = 0x80306250u;
    ctx->downcount -= 2;
    // 80306250: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_80306254:
    ctx->pc = 0x80306254u;
    // 80306254: bl      0x801C1C48
    {
            ctx->lr = 0x80306258u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80306258:
    ctx->pc = 0x80306258u;
    ctx->downcount -= 2;
    // 80306258: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030625C:
    ctx->pc = 0x8030625Cu;
    // 8030625C: bc    12, 2, 0x80306268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306268;
        }
    }

label_80306260:
    ctx->pc = 0x80306260u;
    ctx->downcount -= 2;
    // 80306260: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306264:
    ctx->pc = 0x80306264u;
    // 80306264: bl      0x803554FC
    {
            ctx->lr = 0x80306268u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_80306268:
    ctx->pc = 0x80306268u;
    ctx->downcount -= 3;
    // 80306268: stw     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030626C:
    ctx->pc = 0x8030626Cu;
    // 8030626C: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_80306270:
    ctx->pc = 0x80306270u;
    // 80306270: bl      0x801C1C48
    {
            ctx->lr = 0x80306274u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80306274:
    ctx->pc = 0x80306274u;
    ctx->downcount -= 2;
    // 80306274: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306278:
    ctx->pc = 0x80306278u;
    // 80306278: bc    12, 2, 0x80306280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306280;
        }
    }

label_8030627C:
    ctx->pc = 0x8030627Cu;
    ctx->downcount -= 1;
    // 8030627C: bl      0x80305028
    {
            ctx->lr = 0x80306280u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305028u;
                return;
            }
            goto label_80305028;
    }

label_80306280:
    ctx->pc = 0x80306280u;
    ctx->downcount -= 3;
    // 80306280: stw     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306284:
    ctx->pc = 0x80306284u;
    // 80306284: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80306288:
    ctx->pc = 0x80306288u;
    // 80306288: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030628C:
    ctx->downcount -= 2;
    // 8030628C: li      r3, 312
    ctx->gpr[3] = (u32)(s32)(312);

label_80306290:
    // 80306290: bl      0x801C1C48
    {
            ctx->lr = 0x80306294u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80306294:
    ctx->downcount -= 2;
    // 80306294: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306298:
    // 80306298: bc    12, 2, 0x803062A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803062A4;
        }
    }

label_8030629C:
    ctx->downcount -= 2;
    // 8030629C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803062A0:
    // 803062A0: bl      0x803053B4
    {
            ctx->lr = 0x803062A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803053B4u;
                return;
            }
            goto label_803053B4;
    }

label_803062A4:
    ctx->downcount -= 6;
    // 803062A4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_803062A8:
    // 803062A8: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803062AC:
    // 803062AC: cmpwi   r30, 3
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

label_803062B0:
    ctx->pc = 0x803062B0u;
    // 803062B0: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803062B4:
    // 803062B4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_803062B8:
    // 803062B8: bc    12, 0, 0x8030628C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030628Cu;
                return;
            }
            goto label_8030628C;
        }
    }

label_803062BC:
    ctx->pc = 0x803062BCu;
    ctx->downcount -= 2;
    // 803062BC: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_803062C0:
    ctx->pc = 0x803062C0u;
    // 803062C0: bl      0x801C1C48
    {
            ctx->lr = 0x803062C4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_803062C4:
    ctx->pc = 0x803062C4u;
    ctx->downcount -= 2;
    // 803062C4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803062C8:
    ctx->pc = 0x803062C8u;
    // 803062C8: bc    12, 2, 0x803062D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803062D0;
        }
    }

label_803062CC:
    ctx->pc = 0x803062CCu;
    ctx->downcount -= 1;
    // 803062CC: bl      0x803054C4
    {
            ctx->lr = 0x803062D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803054C4u;
                return;
            }
            goto label_803054C4;
    }

label_803062D0:
    ctx->pc = 0x803062D0u;
    ctx->downcount -= 3;
    // 803062D0: stw     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803062D4:
    ctx->pc = 0x803062D4u;
    // 803062D4: li      r3, 172
    ctx->gpr[3] = (u32)(s32)(172);

label_803062D8:
    ctx->pc = 0x803062D8u;
    // 803062D8: bl      0x801C1C48
    {
            ctx->lr = 0x803062DCu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_803062DC:
    ctx->pc = 0x803062DCu;
    ctx->downcount -= 2;
    // 803062DC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803062E0:
    ctx->pc = 0x803062E0u;
    // 803062E0: bc    12, 2, 0x803062E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803062E8;
        }
    }

label_803062E4:
    ctx->pc = 0x803062E4u;
    ctx->downcount -= 1;
    // 803062E4: bl      0x802E88B0
    {
            ctx->lr = 0x803062E8u;
            ctx->pc = 0x802E88B0u;
            return;
    }

label_803062E8:
    ctx->pc = 0x803062E8u;
    ctx->downcount -= 4;
    // 803062E8: stw     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803062EC:
    ctx->pc = 0x803062ECu;
    // 803062EC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803062F0:
    ctx->pc = 0x803062F0u;
    // 803062F0: lwz     r4, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803062F4:
    ctx->pc = 0x803062F4u;
    // 803062F4: bl      0x802A6408
    {
            ctx->lr = 0x803062F8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803062F8:
    ctx->pc = 0x803062F8u;
    ctx->downcount -= 3;
    // 803062F8: lwz     r4, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803062FC:
    ctx->pc = 0x803062FCu;
    // 803062FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306300:
    ctx->pc = 0x80306300u;
    // 80306300: bl      0x802A6408
    {
            ctx->lr = 0x80306304u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80306304:
    ctx->pc = 0x80306304u;
    ctx->downcount -= 2;
    // 80306304: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80306308:
    ctx->pc = 0x80306308u;
    // 80306308: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030630C:
    ctx->downcount -= 4;
    // 8030630C: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306310:
    // 80306310: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306314:
    ctx->pc = 0x80306314u;
    // 80306314: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306318:
    // 80306318: bl      0x802A6408
    {
            ctx->lr = 0x8030631Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030631C:
    ctx->downcount -= 4;
    // 8030631C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80306320:
    // 80306320: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80306324:
    // 80306324: cmpwi   r30, 3
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

label_80306328:
    // 80306328: bc    12, 0, 0x8030630C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030630Cu;
                return;
            }
            goto label_8030630C;
        }
    }

label_8030632C:
    ctx->pc = 0x8030632Cu;
    ctx->downcount -= 3;
    // 8030632C: lwz     r4, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306330:
    ctx->pc = 0x80306330u;
    // 80306330: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306334:
    ctx->pc = 0x80306334u;
    // 80306334: bl      0x802A6408
    {
            ctx->lr = 0x80306338u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80306338:
    ctx->pc = 0x80306338u;
    ctx->downcount -= 3;
    // 80306338: lwz     r4, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030633C:
    ctx->pc = 0x8030633Cu;
    // 8030633C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306340:
    ctx->pc = 0x80306340u;
    // 80306340: bl      0x802A6408
    {
            ctx->lr = 0x80306344u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80306344:
    ctx->pc = 0x80306344u;
    ctx->downcount -= 2;
    // 80306344: li      r3, 44
    ctx->gpr[3] = (u32)(s32)(44);

label_80306348:
    ctx->pc = 0x80306348u;
    // 80306348: bl      0x801C1C48
    {
            ctx->lr = 0x8030634Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8030634C:
    ctx->pc = 0x8030634Cu;
    ctx->downcount -= 2;
    // 8030634C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306350:
    ctx->pc = 0x80306350u;
    // 80306350: bc    12, 2, 0x80306358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306358;
        }
    }

label_80306354:
    ctx->pc = 0x80306354u;
    ctx->downcount -= 1;
    // 80306354: bl      0x803055E8
    {
            ctx->lr = 0x80306358u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803055E8u;
                return;
            }
            goto label_803055E8;
    }

label_80306358:
    ctx->pc = 0x80306358u;
    ctx->downcount -= 3;
    // 80306358: stw     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030635C:
    ctx->pc = 0x8030635Cu;
    // 8030635C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80306360:
    ctx->pc = 0x80306360u;
    // 80306360: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80306364:
    ctx->downcount -= 4;
    // 80306364: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306368:
    ctx->pc = 0x80306368u;
    // 80306368: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030636C:
    // 8030636C: cmpwi   r4, 0
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

label_80306370:
    // 80306370: bc    12, 2, 0x80306378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306378;
        }
    }

label_80306374:
    ctx->downcount -= 1;
    // 80306374: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_80306378:
    ctx->pc = 0x80306378u;
    ctx->downcount -= 2;
    // 80306378: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030637C:
    // 8030637C: bl      0x8026F1B0
    {
            ctx->lr = 0x80306380u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_80306380:
    ctx->downcount -= 4;
    // 80306380: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80306384:
    // 80306384: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80306388:
    // 80306388: cmpwi   r30, 3
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

label_8030638C:
    // 8030638C: bc    12, 0, 0x80306364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306364u;
                return;
            }
            goto label_80306364;
        }
    }

label_80306390:
    ctx->pc = 0x80306390u;
    ctx->downcount -= 2;
    // 80306390: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306394:
    ctx->pc = 0x80306394u;
    // 80306394: bl      0x80305EE0
    {
            ctx->lr = 0x80306398u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80305EE0u;
                return;
            }
            goto label_80305EE0;
    }

label_80306398:
    ctx->pc = 0x80306398u;
    ctx->downcount -= 24;
    // 80306398: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030639C:
    ctx->pc = 0x8030639Cu;
    // 8030639C: stw     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803063A0:
    ctx->pc = 0x803063A0u;
    // 803063A0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803063A4:
    ctx->pc = 0x803063A4u;
    // 803063A4: stw     r0, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803063A8:
    ctx->pc = 0x803063A8u;
    // 803063A8: stb     r0, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803063AC:
    ctx->pc = 0x803063ACu;
    // 803063AC: stb     r0, 193(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(193);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803063B0:
    ctx->pc = 0x803063B0u;
    // 803063B0: stw     r0, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803063B4:
    ctx->pc = 0x803063B4u;
    // 803063B4: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803063B8:
    ctx->pc = 0x803063B8u;
    // 803063B8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803063BC:
    ctx->pc = 0x803063BCu;
    // 803063BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803063C0:
    ctx->pc = 0x803063C0u;
    // 803063C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803063C4:
    ctx->pc = 0x803063C4u;
    // 803063C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803063C8:
    ctx->pc = 0x803063C8u;
    // 803063C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803063CC:
    ctx->pc = 0x803063CCu;
    ctx->downcount -= 18;
    // 803063CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803063D0:
    ctx->pc = 0x803063D0u;
    // 803063D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803063D4:
    // 803063D4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803063D8:
    ctx->pc = 0x803063D8u;
    // 803063D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803063DC:
    ctx->pc = 0x803063DCu;
    // 803063DC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803063E0:
    // 803063E0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803063E4:
    // 803063E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803063E8:
    // 803063E8: bc    12, 2, 0x80306418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306418;
        }
    }

label_803063EC:
    ctx->downcount -= 1;
    // 803063EC: bc    12, 2, 0x80306408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306408;
        }
    }

label_803063F0:
    ctx->downcount -= 3;
    // 803063F0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803063F4:
    // 803063F4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803063F8:
    // 803063F8: bl      0x80306498
    {
            ctx->lr = 0x803063FCu;
            goto label_80306498;
    }

label_803063FC:
    ctx->downcount -= 3;
    // 803063FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306400:
    // 80306400: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306404:
    // 80306404: bl      0x801ED118
    {
            ctx->lr = 0x80306408u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80306408:
    ctx->downcount -= 2;
    // 80306408: cmpwi   r31, 0
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

label_8030640C:
    // 8030640C: bc    4, 1, 0x80306418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80306418;
        }
    }

label_80306410:
    ctx->downcount -= 2;
    // 80306410: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306414:
    // 80306414: bl      0x801C1C90
    {
            ctx->lr = 0x80306418u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80306418:
    ctx->downcount -= 17;
    // 80306418: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030641C:
    ctx->pc = 0x8030641Cu;
    // 8030641C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306420:
    ctx->pc = 0x80306420u;
    // 80306420: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306424:
    ctx->pc = 0x80306424u;
    // 80306424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306428:
    // 80306428: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030642C:
    ctx->pc = 0x8030642Cu;
    // 8030642C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306430:
    ctx->pc = 0x80306430u;
    ctx->downcount -= 18;
    // 80306430: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306434:
    ctx->pc = 0x80306434u;
    // 80306434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306438:
    // 80306438: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030643C:
    ctx->pc = 0x8030643Cu;
    // 8030643C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306440:
    ctx->pc = 0x80306440u;
    // 80306440: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306444:
    // 80306444: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306448:
    // 80306448: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030644C:
    // 8030644C: bc    12, 2, 0x80306480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306480;
        }
    }

label_80306450:
    ctx->downcount -= 1;
    // 80306450: bc    12, 2, 0x80306470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306470;
        }
    }

label_80306454:
    ctx->downcount -= 1;
    // 80306454: bc    12, 2, 0x80306470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306470;
        }
    }

label_80306458:
    ctx->downcount -= 3;
    // 80306458: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030645C:
    // 8030645C: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80306460:
    // 80306460: bl      0x801ED098
    {
            ctx->lr = 0x80306464u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_80306464:
    ctx->downcount -= 3;
    // 80306464: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306468:
    // 80306468: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030646C:
    // 8030646C: bl      0x801ED058
    {
            ctx->lr = 0x80306470u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_80306470:
    ctx->downcount -= 2;
    // 80306470: cmpwi   r31, 0
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

label_80306474:
    // 80306474: bc    4, 1, 0x80306480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80306480;
        }
    }

label_80306478:
    ctx->downcount -= 2;
    // 80306478: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030647C:
    // 8030647C: bl      0x801C1C90
    {
            ctx->lr = 0x80306480u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80306480:
    ctx->downcount -= 17;
    // 80306480: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306484:
    ctx->pc = 0x80306484u;
    // 80306484: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306488:
    ctx->pc = 0x80306488u;
    // 80306488: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030648C:
    ctx->pc = 0x8030648Cu;
    // 8030648C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306490:
    // 80306490: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306494:
    ctx->pc = 0x80306494u;
    // 80306494: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306498:
    ctx->pc = 0x80306498u;
    ctx->downcount -= 7;
    // 80306498: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030649C:
    ctx->pc = 0x8030649Cu;
    // 8030649C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803064A0:
    // 803064A0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803064A4:
    ctx->pc = 0x803064A4u;
    // 803064A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803064A8:
    ctx->pc = 0x803064A8u;
    // 803064A8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803064AC:
    // 803064AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803064B0:
    // 803064B0: bc    12, 2, 0x803064C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803064C0;
        }
    }

label_803064B4:
    ctx->downcount -= 2;
    // 803064B4: cmpwi   r4, 0
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

label_803064B8:
    // 803064B8: bc    4, 1, 0x803064C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803064C0;
        }
    }

label_803064BC:
    ctx->downcount -= 1;
    // 803064BC: bl      0x801C1C90
    {
            ctx->lr = 0x803064C0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803064C0:
    ctx->downcount -= 7;
    // 803064C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803064C4:
    ctx->pc = 0x803064C4u;
    // 803064C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803064C8:
    ctx->pc = 0x803064C8u;
    // 803064C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803064CC:
    ctx->pc = 0x803064CCu;
    // 803064CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803064D0:
    // 803064D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803064D4:
    ctx->pc = 0x803064D4u;
    // 803064D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803064D8:
    ctx->pc = 0x803064D8u;
    ctx->downcount -= 20;
    // 803064D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803064DC:
    ctx->pc = 0x803064DCu;
    // 803064DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803064E0:
    ctx->pc = 0x803064E0u;
    // 803064E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803064E4:
    ctx->pc = 0x803064E4u;
    // 803064E4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803064E8:
    // 803064E8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_803064EC:
    // 803064EC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803064F0:
    // 803064F0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803064F4:
    // 803064F4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803064F8:
    // 803064F8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803064FC:
    // 803064FC: bl      0x803456D0
    {
            ctx->lr = 0x80306500u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80306500:
    ctx->downcount -= 34;
    // 80306500: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80306504:
    ctx->pc = 0x80306504u;
    // 80306504: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306508:
    ctx->pc = 0x80306508u;
    // 80306508: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030650C:
    ctx->pc = 0x8030650Cu;
    // 8030650C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306510:
    // 80306510: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80306514:
    ctx->pc = 0x80306514u;
    // 80306514: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306518:
    ctx->pc = 0x80306518u;
    // 80306518: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030651C:
    ctx->pc = 0x8030651Cu;
    // 8030651C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306520:
    ctx->pc = 0x80306520u;
    // 80306520: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306524:
    ctx->pc = 0x80306524u;
    // 80306524: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306528:
    ctx->pc = 0x80306528u;
    // 80306528: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030652C:
    ctx->pc = 0x8030652Cu;
    // 8030652C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306530:
    ctx->pc = 0x80306530u;
    // 80306530: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80306534:
    ctx->pc = 0x80306534u;
    // 80306534: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_80306538:
    ctx->pc = 0x80306538u;
    // 80306538: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030653C:
    ctx->pc = 0x8030653Cu;
    // 8030653C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306540:
    ctx->pc = 0x80306540u;
    // 80306540: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306544:
    ctx->pc = 0x80306544u;
    // 80306544: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306548:
    ctx->pc = 0x80306548u;
    // 80306548: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030654C:
    // 8030654C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80306550:
    ctx->pc = 0x80306550u;
    // 80306550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306554:
    ctx->downcount -= 2;
    // 80306554: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80306558:
    ctx->pc = 0x80306558u;
    // 80306558: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_8030655C:
    ctx->downcount -= 2;
    // 8030655C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80306560:
    ctx->pc = 0x80306560u;
    // 80306560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306564:
    ctx->pc = 0x80306564u;
    ctx->downcount -= 10;
    // 80306564: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306568:
    ctx->pc = 0x80306568u;
    // 80306568: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030656C:
    ctx->pc = 0x8030656Cu;
    // 8030656C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306570:
    ctx->pc = 0x80306570u;
    // 80306570: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80306574:
    // 80306574: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306578:
    ctx->pc = 0x80306578u;
    // 80306578: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030657C:
    ctx->pc = 0x8030657Cu;
    // 8030657C: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306580:
    ctx->pc = 0x80306580u;
    // 80306580: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80306584:
    ctx->pc = 0x80306584u;
    // 80306584: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80306588u;
            ctx->pc = target;
            return;
        }
    }

label_80306588:
    ctx->downcount -= 2;
    // 80306588: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030658C:
    // 8030658C: bl      0x803068C0
    {
            ctx->lr = 0x80306590u;
            goto label_803068C0;
    }

label_80306590:
    ctx->pc = 0x80306590u;
    ctx->downcount -= 6;
    // 80306590: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80306594:
    // 80306594: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306598:
    ctx->pc = 0x80306598u;
    // 80306598: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030659C:
    ctx->pc = 0x8030659Cu;
    // 8030659C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803065A0:
    ctx->pc = 0x803065A0u;
    // 803065A0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803065A4u;
            ctx->pc = target;
            return;
        }
    }

label_803065A4:
    ctx->pc = 0x803065A4u;
    ctx->downcount -= 6;
    // 803065A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803065A8:
    ctx->pc = 0x803065A8u;
    // 803065A8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803065AC:
    ctx->pc = 0x803065ACu;
    // 803065AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803065B0:
    // 803065B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803065B4:
    ctx->pc = 0x803065B4u;
    // 803065B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803065B8:
    ctx->pc = 0x803065B8u;
    ctx->downcount -= 21;
    // 803065B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803065BC:
    ctx->pc = 0x803065BCu;
    // 803065BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803065C0:
    ctx->pc = 0x803065C0u;
    // 803065C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803065C4:
    ctx->pc = 0x803065C4u;
    // 803065C4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803065C8:
    // 803065C8: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_803065CC:
    // 803065CC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803065D0:
    // 803065D0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803065D4:
    // 803065D4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803065D8:
    // 803065D8: addi    r30, r30, 29072
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(29072);

label_803065DC:
    // 803065DC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803065E0:
    // 803065E0: bl      0x802A6748
    {
            ctx->lr = 0x803065E4u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_803065E4:
    ctx->downcount -= 7;
    // 803065E4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_803065E8:
    // 803065E8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803065EC:
    // 803065EC: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_803065F0:
    ctx->pc = 0x803065F0u;
    // 803065F0: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803065F4:
    // 803065F4: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_803065F8:
    ctx->pc = 0x803065F8u;
    // 803065F8: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803065FC:
    // 803065FC: bl      0x801ED17C
    {
            ctx->lr = 0x80306600u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_80306600:
    ctx->downcount -= 6;
    // 80306600: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306604:
    // 80306604: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306608:
    // 80306608: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030660C:
    // 8030660C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80306610:
    // 80306610: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80306614:
    // 80306614: bl      0x80306744
    {
            ctx->lr = 0x80306618u;
            goto label_80306744;
    }

label_80306618:
    ctx->downcount -= 3;
    // 80306618: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030661C:
    // 8030661C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306620:
    // 80306620: bl      0x802A5D48
    {
            ctx->lr = 0x80306624u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80306624:
    ctx->downcount -= 6;
    // 80306624: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306628:
    // 80306628: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030662C:
    // 8030662C: addi    r4, r30, 412
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(412);

label_80306630:
    // 80306630: addi    r5, r30, 424
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(424);

label_80306634:
    // 80306634: addi    r6, r30, 436
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(436);

label_80306638:
    // 80306638: bl      0x80306864
    {
            ctx->lr = 0x8030663Cu;
            goto label_80306864;
    }

label_8030663C:
    ctx->downcount -= 2;
    // 8030663C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306640:
    // 80306640: bl      0x802A609C
    {
            ctx->lr = 0x80306644u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_80306644:
    ctx->downcount -= 10;
    // 80306644: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80306648:
    // 80306648: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030664C:
    // 8030664C: addi    r3, r3, 29520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29520);

label_80306650:
    ctx->pc = 0x80306650u;
    // 80306650: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306654:
    // 80306654: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_80306658:
    ctx->pc = 0x80306658u;
    // 80306658: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030665C:
    // 8030665C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306660:
    // 80306660: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80306664:
    ctx->pc = 0x80306664u;
    // 80306664: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306668:
    // 80306668: bl      0x802A5D48
    {
            ctx->lr = 0x8030666Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030666C:
    ctx->downcount -= 6;
    // 8030666C: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_80306670:
    // 80306670: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306674:
    // 80306674: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80306678:
    // 80306678: addi    r5, r30, 376
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(376);

label_8030667C:
    // 8030667C: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_80306680:
    // 80306680: bl      0x803064D8
    {
            ctx->lr = 0x80306684u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803064D8u;
                return;
            }
            goto label_803064D8;
    }

label_80306684:
    ctx->downcount -= 3;
    // 80306684: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306688:
    // 80306688: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030668C:
    // 8030668C: bl      0x802A5D48
    {
            ctx->lr = 0x80306690u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80306690:
    ctx->downcount -= 5;
    // 80306690: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306694:
    // 80306694: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80306698:
    // 80306698: addi    r4, r30, 388
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(388);

label_8030669C:
    // 8030669C: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_803066A0:
    // 803066A0: bl      0x803064D8
    {
            ctx->lr = 0x803066A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803064D8u;
                return;
            }
            goto label_803064D8;
    }

label_803066A4:
    ctx->downcount -= 3;
    // 803066A4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803066A8:
    // 803066A8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803066AC:
    // 803066AC: bl      0x802A5D48
    {
            ctx->lr = 0x803066B0u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803066B0:
    ctx->downcount -= 5;
    // 803066B0: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803066B4:
    // 803066B4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803066B8:
    // 803066B8: addi    r4, r30, 400
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(400);

label_803066BC:
    // 803066BC: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_803066C0:
    // 803066C0: bl      0x803064D8
    {
            ctx->lr = 0x803066C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803064D8u;
                return;
            }
            goto label_803064D8;
    }

label_803066C4:
    ctx->downcount -= 17;
    // 803066C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803066C8:
    ctx->pc = 0x803066C8u;
    // 803066C8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803066CC:
    ctx->pc = 0x803066CCu;
    // 803066CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803066D0:
    ctx->pc = 0x803066D0u;
    // 803066D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803066D4:
    // 803066D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803066D8:
    ctx->pc = 0x803066D8u;
    // 803066D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803066DC:
    ctx->pc = 0x803066DCu;
    ctx->downcount -= 18;
    // 803066DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803066E0:
    ctx->pc = 0x803066E0u;
    // 803066E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803066E4:
    // 803066E4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803066E8:
    ctx->pc = 0x803066E8u;
    // 803066E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803066EC:
    ctx->pc = 0x803066ECu;
    // 803066EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803066F0:
    // 803066F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803066F4:
    // 803066F4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803066F8:
    // 803066F8: bc    12, 2, 0x8030672C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030672C;
        }
    }

label_803066FC:
    ctx->downcount -= 1;
    // 803066FC: bc    12, 2, 0x8030671C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030671C;
        }
    }

label_80306700:
    ctx->downcount -= 1;
    // 80306700: bc    12, 2, 0x8030671C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030671C;
        }
    }

label_80306704:
    ctx->downcount -= 3;
    // 80306704: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80306708:
    // 80306708: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030670C:
    // 8030670C: bl      0x80306498
    {
            ctx->lr = 0x80306710u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306498u;
                return;
            }
            goto label_80306498;
    }

label_80306710:
    ctx->downcount -= 3;
    // 80306710: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306714:
    // 80306714: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306718:
    // 80306718: bl      0x801ED118
    {
            ctx->lr = 0x8030671Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8030671C:
    ctx->downcount -= 2;
    // 8030671C: cmpwi   r31, 0
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

label_80306720:
    // 80306720: bc    4, 1, 0x8030672C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030672C;
        }
    }

label_80306724:
    ctx->downcount -= 2;
    // 80306724: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306728:
    // 80306728: bl      0x801C1C90
    {
            ctx->lr = 0x8030672Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030672C:
    ctx->downcount -= 17;
    // 8030672C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306730:
    ctx->pc = 0x80306730u;
    // 80306730: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306734:
    ctx->pc = 0x80306734u;
    // 80306734: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306738:
    ctx->pc = 0x80306738u;
    // 80306738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030673C:
    // 8030673C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306740:
    ctx->pc = 0x80306740u;
    // 80306740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306744:
    ctx->pc = 0x80306744u;
    ctx->downcount -= 17;
    // 80306744: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306748:
    ctx->pc = 0x80306748u;
    // 80306748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030674C:
    ctx->pc = 0x8030674Cu;
    // 8030674C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306750:
    ctx->pc = 0x80306750u;
    // 80306750: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306754:
    // 80306754: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306758:
    // 80306758: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030675C:
    // 8030675C: bl      0x803457F4
    {
            ctx->lr = 0x80306760u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_80306760:
    ctx->pc = 0x80306760u;
    ctx->downcount -= 11;
    // 80306760: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306764:
    // 80306764: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80306768:
    // 80306768: addi    r3, r3, 29760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29760);

label_8030676C:
    ctx->pc = 0x8030676Cu;
    // 8030676C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306770:
    // 80306770: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306774:
    ctx->pc = 0x80306774u;
    // 80306774: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306778:
    ctx->pc = 0x80306778u;
    // 80306778: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030677C:
    // 8030677C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80306780:
    // 80306780: bl      0x801C1C80
    {
            ctx->lr = 0x80306784u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80306784:
    ctx->pc = 0x80306784u;
    ctx->downcount -= 8;
    // 80306784: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306788:
    // 80306788: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030678C:
    ctx->pc = 0x8030678Cu;
    // 8030678C: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306790:
    // 80306790: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306794:
    ctx->pc = 0x80306794u;
    // 80306794: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306798:
    // 80306798: bl      0x801C1C80
    {
            ctx->lr = 0x8030679Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030679C:
    ctx->pc = 0x8030679Cu;
    ctx->downcount -= 8;
    // 8030679C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803067A0:
    // 803067A0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803067A4:
    ctx->pc = 0x803067A4u;
    // 803067A4: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803067A8:
    // 803067A8: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803067AC:
    ctx->pc = 0x803067ACu;
    // 803067AC: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803067B0:
    // 803067B0: bl      0x801C1C80
    {
            ctx->lr = 0x803067B4u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803067B4:
    ctx->downcount -= 6;
    // 803067B4: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_803067B8:
    ctx->pc = 0x803067B8u;
    // 803067B8: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803067BC:
    // 803067BC: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_803067C0:
    // 803067C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_803067C4:
    // 803067C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803067C8:
    // 803067C8: b       0x80306834
    {
            goto label_80306834;
    }

label_803067CC:
    loop_803067CC(ctx);
    if (ctx->pc == 0x80306840u) goto label_80306840;
    return;
label_803067D0:
    // 803067D0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_803067D4:
    ctx->pc = 0x803067D4u;
    // 803067D4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803067D8:
    // 803067D8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803067DC:
    ctx->pc = 0x803067DCu;
    // 803067DC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803067E0:
    ctx->pc = 0x803067E0u;
    // 803067E0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803067E4:
    ctx->pc = 0x803067E4u;
    // 803067E4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803067E8:
    ctx->pc = 0x803067E8u;
    // 803067E8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803067EC:
    ctx->pc = 0x803067ECu;
    // 803067EC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803067F0:
    ctx->pc = 0x803067F0u;
    // 803067F0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803067F4:
    ctx->pc = 0x803067F4u;
    // 803067F4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803067F8:
    // 803067F8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803067FC:
    ctx->pc = 0x803067FCu;
    // 803067FC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306800:
    ctx->pc = 0x80306800u;
    // 80306800: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306804:
    ctx->pc = 0x80306804u;
    // 80306804: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306808:
    ctx->pc = 0x80306808u;
    // 80306808: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030680C:
    ctx->pc = 0x8030680Cu;
    // 8030680C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306810:
    ctx->pc = 0x80306810u;
    // 80306810: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306814:
    ctx->pc = 0x80306814u;
    // 80306814: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306818:
    // 80306818: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030681C:
    ctx->pc = 0x8030681Cu;
    // 8030681C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306820:
    ctx->pc = 0x80306820u;
    // 80306820: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306824:
    // 80306824: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80306828:
    ctx->pc = 0x80306828u;
    // 80306828: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030682C:
    ctx->pc = 0x8030682Cu;
    // 8030682C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306830:
    ctx->pc = 0x80306830u;
    // 80306830: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306834:
    ctx->pc = 0x80306834u;
    ctx->downcount -= 3;
    // 80306834: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306838:
    // 80306838: cmpw    r7, r0
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

label_8030683C:
    // 8030683C: bc    12, 0, 0x803067CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803067CCu;
                return;
            }
            goto label_803067CC;
        }
    }

label_80306840:
    ctx->downcount -= 3;
    // 80306840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306844:
    // 80306844: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306848:
    // 80306848: bl      0x803457CC
    {
            ctx->lr = 0x8030684Cu;
            ctx->pc = 0x803457CCu;
            return;
    }

label_8030684C:
    ctx->downcount -= 17;
    // 8030684C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306850:
    ctx->pc = 0x80306850u;
    // 80306850: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306854:
    ctx->pc = 0x80306854u;
    // 80306854: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306858:
    ctx->pc = 0x80306858u;
    // 80306858: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030685C:
    // 8030685C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306860:
    ctx->pc = 0x80306860u;
    // 80306860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306864:
    ctx->pc = 0x80306864u;
    ctx->downcount -= 19;
    // 80306864: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306868:
    ctx->pc = 0x80306868u;
    // 80306868: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030686C:
    ctx->pc = 0x8030686Cu;
    // 8030686C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306870:
    ctx->pc = 0x80306870u;
    // 80306870: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306874:
    // 80306874: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80306878:
    // 80306878: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030687C:
    // 8030687C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306880:
    // 80306880: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306884:
    // 80306884: bl      0x803064D8
    {
            ctx->lr = 0x80306888u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803064D8u;
                return;
            }
            goto label_803064D8;
    }

label_80306888:
    ctx->downcount -= 27;
    // 80306888: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030688C:
    ctx->pc = 0x8030688Cu;
    // 8030688C: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80306890:
    ctx->pc = 0x80306890u;
    // 80306890: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306894:
    ctx->pc = 0x80306894u;
    // 80306894: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306898:
    // 80306898: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030689C:
    ctx->pc = 0x8030689Cu;
    // 8030689C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803068A0:
    ctx->pc = 0x803068A0u;
    // 803068A0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803068A4:
    ctx->pc = 0x803068A4u;
    // 803068A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803068A8:
    ctx->pc = 0x803068A8u;
    // 803068A8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803068AC:
    ctx->pc = 0x803068ACu;
    // 803068AC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803068B0:
    ctx->pc = 0x803068B0u;
    // 803068B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803068B4:
    ctx->pc = 0x803068B4u;
    // 803068B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803068B8:
    // 803068B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803068BC:
    ctx->pc = 0x803068BCu;
    // 803068BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803068C0:
    ctx->pc = 0x803068C0u;
    ctx->downcount -= 8;
    // 803068C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803068C4:
    ctx->pc = 0x803068C4u;
    // 803068C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803068C8:
    ctx->pc = 0x803068C8u;
    // 803068C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803068CC:
    ctx->pc = 0x803068CCu;
    // 803068CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803068D0:
    // 803068D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803068D4:
    ctx->pc = 0x803068D4u;
    // 803068D4: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803068D8:
    // 803068D8: cmpwi   r0, 0
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

label_803068DC:
    // 803068DC: bc    12, 2, 0x80306900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306900;
        }
    }

label_803068E0:
    ctx->pc = 0x803068E0u;
    ctx->downcount -= 3;
    // 803068E0: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803068E4:
    // 803068E4: cmpwi   r0, 0
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

label_803068E8:
    // 803068E8: bc    12, 2, 0x803068F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803068F0;
        }
    }

label_803068EC:
    ctx->downcount -= 1;
    // 803068EC: bl      0x803069E4
    {
            ctx->lr = 0x803068F0u;
            goto label_803069E4;
    }

label_803068F0:
    ctx->downcount -= 2;
    // 803068F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803068F4:
    // 803068F4: bl      0x803456D4
    {
            ctx->lr = 0x803068F8u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_803068F8:
    ctx->downcount -= 2;
    // 803068F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803068FC:
    // 803068FC: bl      0x80306924
    {
            ctx->lr = 0x80306900u;
            goto label_80306924;
    }

label_80306900:
    ctx->downcount -= 2;
    // 80306900: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306904:
    // 80306904: bl      0x80306984
    {
            ctx->lr = 0x80306908u;
            goto label_80306984;
    }

label_80306908:
    ctx->downcount -= 2;
    // 80306908: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030690C:
    // 8030690C: bl      0x803456F8
    {
            ctx->lr = 0x80306910u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_80306910:
    ctx->pc = 0x80306910u;
    ctx->downcount -= 6;
    // 80306910: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306914:
    ctx->pc = 0x80306914u;
    // 80306914: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306918:
    ctx->pc = 0x80306918u;
    // 80306918: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030691C:
    // 8030691C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306920:
    ctx->pc = 0x80306920u;
    // 80306920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306924:
    ctx->pc = 0x80306924u;
    ctx->downcount -= 12;
    // 80306924: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306928:
    ctx->pc = 0x80306928u;
    // 80306928: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030692C:
    ctx->pc = 0x8030692Cu;
    // 8030692C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306930:
    ctx->pc = 0x80306930u;
    // 80306930: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80306934:
    // 80306934: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306938:
    ctx->pc = 0x80306938u;
    // 80306938: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030693C:
    ctx->pc = 0x8030693Cu;
    // 8030693C: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306940:
    // 80306940: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306944:
    // 80306944: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306948:
    // 80306948: bl      0x800076B4
    {
            ctx->lr = 0x8030694Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030694C:
    ctx->downcount -= 2;
    // 8030694C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306950:
    // 80306950: bc    12, 2, 0x80306970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306970;
        }
    }

label_80306954:
    ctx->pc = 0x80306954u;
    ctx->downcount -= 8;
    // 80306954: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306958:
    ctx->pc = 0x80306958u;
    // 80306958: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030695C:
    // 8030695C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306960:
    ctx->pc = 0x80306960u;
    // 80306960: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306964:
    // 80306964: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80306968:
    // 80306968: bl      0x800076E4
    {
            ctx->lr = 0x8030696Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030696C:
    ctx->downcount -= 1;
    // 8030696C: nop
    // nop

label_80306970:
    ctx->pc = 0x80306970u;
    ctx->downcount -= 6;
    // 80306970: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306974:
    ctx->pc = 0x80306974u;
    // 80306974: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306978:
    ctx->pc = 0x80306978u;
    // 80306978: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030697C:
    // 8030697C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306980:
    ctx->pc = 0x80306980u;
    // 80306980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306984:
    ctx->pc = 0x80306984u;
    ctx->downcount -= 12;
    // 80306984: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306988:
    ctx->pc = 0x80306988u;
    // 80306988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030698C:
    ctx->pc = 0x8030698Cu;
    // 8030698C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306990:
    ctx->pc = 0x80306990u;
    // 80306990: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80306994:
    // 80306994: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306998:
    ctx->pc = 0x80306998u;
    // 80306998: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030699C:
    ctx->pc = 0x8030699Cu;
    // 8030699C: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803069A0:
    // 803069A0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803069A4:
    // 803069A4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803069A8:
    // 803069A8: bl      0x800076B4
    {
            ctx->lr = 0x803069ACu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_803069AC:
    ctx->downcount -= 2;
    // 803069AC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803069B0:
    // 803069B0: bc    12, 2, 0x803069D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803069D0;
        }
    }

label_803069B4:
    ctx->pc = 0x803069B4u;
    ctx->downcount -= 8;
    // 803069B4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803069B8:
    ctx->pc = 0x803069B8u;
    // 803069B8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803069BC:
    // 803069BC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803069C0:
    ctx->pc = 0x803069C0u;
    // 803069C0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803069C4:
    // 803069C4: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_803069C8:
    // 803069C8: bl      0x800076E4
    {
            ctx->lr = 0x803069CCu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_803069CC:
    ctx->downcount -= 1;
    // 803069CC: nop
    // nop

label_803069D0:
    ctx->pc = 0x803069D0u;
    ctx->downcount -= 6;
    // 803069D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803069D4:
    ctx->pc = 0x803069D4u;
    // 803069D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803069D8:
    ctx->pc = 0x803069D8u;
    // 803069D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803069DC:
    // 803069DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803069E0:
    ctx->pc = 0x803069E0u;
    // 803069E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_803069E4:
    ctx->pc = 0x803069E4u;
    ctx->downcount -= 12;
    // 803069E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803069E8:
    ctx->pc = 0x803069E8u;
    // 803069E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803069EC:
    ctx->pc = 0x803069ECu;
    // 803069EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803069F0:
    ctx->pc = 0x803069F0u;
    // 803069F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803069F4:
    // 803069F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803069F8:
    ctx->pc = 0x803069F8u;
    // 803069F8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803069FC:
    ctx->pc = 0x803069FCu;
    // 803069FC: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306A00:
    // 80306A00: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306A04:
    // 80306A04: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306A08:
    // 80306A08: bl      0x800076B4
    {
            ctx->lr = 0x80306A0Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80306A0C:
    ctx->downcount -= 2;
    // 80306A0C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306A10:
    // 80306A10: bc    12, 2, 0x80306A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306A30;
        }
    }

label_80306A14:
    ctx->pc = 0x80306A14u;
    ctx->downcount -= 8;
    // 80306A14: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306A18:
    ctx->pc = 0x80306A18u;
    // 80306A18: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306A1C:
    // 80306A1C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80306A20:
    ctx->pc = 0x80306A20u;
    // 80306A20: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306A24:
    // 80306A24: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80306A28:
    // 80306A28: bl      0x800076E4
    {
            ctx->lr = 0x80306A2Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80306A2C:
    ctx->downcount -= 1;
    // 80306A2C: nop
    // nop

label_80306A30:
    ctx->pc = 0x80306A30u;
    ctx->downcount -= 6;
    // 80306A30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306A34:
    ctx->pc = 0x80306A34u;
    // 80306A34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306A38:
    ctx->pc = 0x80306A38u;
    // 80306A38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306A3C:
    // 80306A3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306A40:
    ctx->pc = 0x80306A40u;
    // 80306A40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306A44:
    ctx->downcount -= 2;
    // 80306A44: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80306A48:
    // 80306A48: b       0x80306430
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306430u;
                return;
            }
            goto label_80306430;
    }

label_80306A4C:
    ctx->downcount -= 2;
    // 80306A4C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80306A50:
    // 80306A50: b       0x803063CC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803063CCu;
                return;
            }
            goto label_803063CC;
    }

label_80306A54:
    ctx->downcount -= 2;
    // 80306A54: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80306A58:
    // 80306A58: b       0x803066DC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803066DCu;
                return;
            }
            goto label_803066DC;
    }

label_80306A5C:
    ctx->pc = 0x80306A5Cu;
    ctx->downcount -= 20;
    // 80306A5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306A60:
    ctx->pc = 0x80306A60u;
    // 80306A60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306A64:
    ctx->pc = 0x80306A64u;
    // 80306A64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306A68:
    ctx->pc = 0x80306A68u;
    // 80306A68: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306A6C:
    ctx->pc = 0x80306A6Cu;
    // 80306A6C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306A70:
    ctx->pc = 0x80306A70u;
    // 80306A70: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80306A74:
    ctx->pc = 0x80306A74u;
    // 80306A74: lwz     r5, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80306A78:
    ctx->pc = 0x80306A78u;
    // 80306A78: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306A7C:
    ctx->pc = 0x80306A7Cu;
    // 80306A7C: cmpwi   r0, 1
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

label_80306A80:
    ctx->pc = 0x80306A80u;
    // 80306A80: bc    4, 1, 0x80306ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80306ADC;
        }
    }

label_80306A84:
    ctx->pc = 0x80306A84u;
    ctx->downcount -= 2;
    // 80306A84: cmpwi   r4, -1
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

label_80306A88:
    ctx->pc = 0x80306A88u;
    // 80306A88: bc    12, 2, 0x80306AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306AD8;
        }
    }

label_80306A8C:
    ctx->pc = 0x80306A8Cu;
    ctx->downcount -= 3;
    // 80306A8C: lwz     r0, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306A90:
    ctx->pc = 0x80306A90u;
    // 80306A90: cmpw    r4, r0
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

label_80306A94:
    ctx->pc = 0x80306A94u;
    // 80306A94: bc    12, 2, 0x80306AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306AD8;
        }
    }

label_80306A98:
    ctx->pc = 0x80306A98u;
    ctx->downcount -= 6;
    // 80306A98: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306A9C:
    ctx->pc = 0x80306A9Cu;
    // 80306A9C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80306AA0:
    ctx->pc = 0x80306AA0u;
    // 80306AA0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80306AA4:
    ctx->pc = 0x80306AA4u;
    // 80306AA4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80306AA8:
    ctx->pc = 0x80306AA8u;
    // 80306AA8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306AAC:
    ctx->pc = 0x80306AACu;
    // 80306AAC: bl      0x80370BD4
    {
            ctx->lr = 0x80306AB0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306AB0:
    ctx->pc = 0x80306AB0u;
    ctx->downcount -= 3;
    // 80306AB0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306AB4:
    ctx->pc = 0x80306AB4u;
    // 80306AB4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306AB8:
    ctx->pc = 0x80306AB8u;
    // 80306AB8: bl      0x802639CC
    {
            ctx->lr = 0x80306ABCu;
            ctx->pc = 0x802639CCu;
            return;
    }

label_80306ABC:
    ctx->pc = 0x80306ABCu;
    ctx->downcount -= 3;
    // 80306ABC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306AC0:
    ctx->pc = 0x80306AC0u;
    // 80306AC0: li      r3, 135
    ctx->gpr[3] = (u32)(s32)(135);

label_80306AC4:
    ctx->pc = 0x80306AC4u;
    // 80306AC4: bl      0x802B73BC
    {
            ctx->lr = 0x80306AC8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80306AC8:
    ctx->pc = 0x80306AC8u;
    ctx->downcount -= 4;
    // 80306AC8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80306ACC:
    ctx->pc = 0x80306ACCu;
    // 80306ACC: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_80306AD0:
    ctx->pc = 0x80306AD0u;
    // 80306AD0: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80306AD4:
    ctx->pc = 0x80306AD4u;
    // 80306AD4: bl      0x802B735C
    {
            ctx->lr = 0x80306AD8u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80306AD8:
    ctx->pc = 0x80306AD8u;
    ctx->downcount -= 1;
    // 80306AD8: stw     r30, 244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80306ADC:
    ctx->pc = 0x80306ADCu;
    ctx->downcount -= 16;
    // 80306ADC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306AE0:
    ctx->pc = 0x80306AE0u;
    // 80306AE0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306AE4:
    ctx->pc = 0x80306AE4u;
    // 80306AE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306AE8:
    ctx->pc = 0x80306AE8u;
    // 80306AE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80306AEC:
    ctx->pc = 0x80306AECu;
    // 80306AEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306AF0:
    ctx->pc = 0x80306AF0u;
    ctx->downcount -= 20;
    // 80306AF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306AF4:
    ctx->pc = 0x80306AF4u;
    // 80306AF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306AF8:
    ctx->pc = 0x80306AF8u;
    // 80306AF8: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80306AFC:
    ctx->pc = 0x80306AFCu;
    // 80306AFC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306B00:
    ctx->pc = 0x80306B00u;
    // 80306B00: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_80306B04:
    ctx->pc = 0x80306B04u;
    // 80306B04: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306B08:
    ctx->pc = 0x80306B08u;
    // 80306B08: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306B0C:
    ctx->pc = 0x80306B0Cu;
    // 80306B0C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80306B10:
    ctx->pc = 0x80306B10u;
    // 80306B10: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306B14:
    ctx->pc = 0x80306B14u;
    // 80306B14: bl      0x80370BD4
    {
            ctx->lr = 0x80306B18u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306B18:
    ctx->pc = 0x80306B18u;
    ctx->downcount -= 4;
    // 80306B18: lwz     r29, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80306B1C:
    ctx->pc = 0x80306B1Cu;
    // 80306B1C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80306B20:
    ctx->pc = 0x80306B20u;
    // 80306B20: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_80306B24:
    ctx->pc = 0x80306B24u;
    // 80306B24: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80306B28:
    ctx->downcount -= 6;
    // 80306B28: srawi r5, r28, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[28];
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

label_80306B2C:
    // 80306B2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306B30:
    // 80306B30: subfc   r0, r30, r28
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306B34:
    // 80306B34: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306B38:
    // 80306B38: adde   r5, r5, r31
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[31];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306B3C:
    // 80306B3C: bl      0x8026A30C
    {
            ctx->lr = 0x80306B40u;
            ctx->pc = 0x8026A30Cu;
            return;
    }

label_80306B40:
    ctx->downcount -= 3;
    // 80306B40: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80306B44:
    // 80306B44: cmpwi   r28, 4
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

label_80306B48:
    // 80306B48: bc    12, 0, 0x80306B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306B28u;
                return;
            }
            goto label_80306B28;
        }
    }

label_80306B4C:
    ctx->pc = 0x80306B4Cu;
    ctx->downcount -= 16;
    // 80306B4C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306B50:
    ctx->pc = 0x80306B50u;
    // 80306B50: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306B54:
    ctx->pc = 0x80306B54u;
    // 80306B54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306B58:
    ctx->pc = 0x80306B58u;
    // 80306B58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80306B5C:
    ctx->pc = 0x80306B5Cu;
    // 80306B5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306B60:
    ctx->pc = 0x80306B60u;
    ctx->downcount -= 9;
    // 80306B60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306B64:
    ctx->pc = 0x80306B64u;
    // 80306B64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306B68:
    ctx->pc = 0x80306B68u;
    // 80306B68: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80306B6C:
    ctx->pc = 0x80306B6Cu;
    // 80306B6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306B70:
    ctx->pc = 0x80306B70u;
    // 80306B70: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_80306B74:
    ctx->pc = 0x80306B74u;
    // 80306B74: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306B78:
    ctx->pc = 0x80306B78u;
    // 80306B78: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80306B7C:
    ctx->pc = 0x80306B7Cu;
    // 80306B7C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306B80:
    ctx->pc = 0x80306B80u;
    // 80306B80: bl      0x80370BD4
    {
            ctx->lr = 0x80306B84u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306B84:
    ctx->pc = 0x80306B84u;
    ctx->downcount -= 10;
    // 80306B84: lwz     r4, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80306B88:
    ctx->pc = 0x80306B88u;
    // 80306B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80306B8C:
    ctx->pc = 0x80306B8Cu;
    // 80306B8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80306B90:
    ctx->pc = 0x80306B90u;
    // 80306B90: stw     r3, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306B94:
    ctx->pc = 0x80306B94u;
    // 80306B94: stw     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306B98:
    ctx->pc = 0x80306B98u;
    // 80306B98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306B9C:
    ctx->pc = 0x80306B9Cu;
    // 80306B9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306BA0:
    ctx->pc = 0x80306BA0u;
    // 80306BA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306BA4:
    ctx->pc = 0x80306BA4u;
    // 80306BA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306BA8:
    ctx->pc = 0x80306BA8u;
    ctx->downcount -= 18;
    // 80306BA8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306BAC:
    ctx->pc = 0x80306BACu;
    // 80306BAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306BB0:
    ctx->pc = 0x80306BB0u;
    // 80306BB0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306BB4:
    ctx->pc = 0x80306BB4u;
    // 80306BB4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306BB8:
    ctx->pc = 0x80306BB8u;
    // 80306BB8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80306BBC:
    ctx->pc = 0x80306BBCu;
    // 80306BBC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306BC0:
    ctx->pc = 0x80306BC0u;
    // 80306BC0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80306BC4:
    ctx->pc = 0x80306BC4u;
    // 80306BC4: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306BC8:
    ctx->downcount -= 2;
    // 80306BC8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306BCC:
    // 80306BCC: bl      0x80306C20
    {
            ctx->lr = 0x80306BD0u;
            goto label_80306C20;
    }

label_80306BD0:
    ctx->pc = 0x80306BD0u;
    ctx->downcount -= 3;
    // 80306BD0: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306BD4:
    // 80306BD4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306BD8:
    // 80306BD8: bl      0x802D29B0
    {
            ctx->lr = 0x80306BDCu;
            ctx->pc = 0x802D29B0u;
            return;
    }

label_80306BDC:
    ctx->downcount -= 10;
    // 80306BDC: add   r3, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306BE0:
    // 80306BE0: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306BE4:
    ctx->pc = 0x80306BE4u;
    // 80306BE4: stb     r30, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80306BE8:
    // 80306BE8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80306BEC:
    // 80306BEC: cmpwi   r29, 4
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

label_80306BF0:
    // 80306BF0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80306BF4:
    ctx->pc = 0x80306BF4u;
    // 80306BF4: stw     r30, 200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80306BF8:
    ctx->pc = 0x80306BF8u;
    // 80306BF8: stb     r30, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80306BFC:
    ctx->pc = 0x80306BFCu;
    // 80306BFC: stw     r30, 220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80306C00:
    // 80306C00: bc    12, 0, 0x80306BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306BC8u;
                return;
            }
            goto label_80306BC8;
        }
    }

label_80306C04:
    ctx->pc = 0x80306C04u;
    ctx->downcount -= 18;
    // 80306C04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80306C08:
    ctx->pc = 0x80306C08u;
    // 80306C08: stw     r0, 188(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306C0C:
    ctx->pc = 0x80306C0Cu;
    // 80306C0C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306C10:
    ctx->pc = 0x80306C10u;
    // 80306C10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306C14:
    ctx->pc = 0x80306C14u;
    // 80306C14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306C18:
    ctx->pc = 0x80306C18u;
    // 80306C18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80306C1C:
    ctx->pc = 0x80306C1Cu;
    // 80306C1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306C20:
    ctx->pc = 0x80306C20u;
    ctx->downcount -= 2;
    // 80306C20: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306C24:
    ctx->pc = 0x80306C24u;
    // 80306C24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306C28:
    ctx->pc = 0x80306C28u;
    ctx->downcount -= 10;
    // 80306C28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306C2C:
    ctx->pc = 0x80306C2Cu;
    // 80306C2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306C30:
    ctx->pc = 0x80306C30u;
    // 80306C30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306C34:
    ctx->pc = 0x80306C34u;
    // 80306C34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80306C38:
    ctx->pc = 0x80306C38u;
    // 80306C38: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_80306C3C:
    ctx->pc = 0x80306C3Cu;
    // 80306C3C: addi    r4, r31, 22184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22184);

label_80306C40:
    ctx->pc = 0x80306C40u;
    // 80306C40: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306C44:
    ctx->pc = 0x80306C44u;
    // 80306C44: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80306C48:
    ctx->pc = 0x80306C48u;
    // 80306C48: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306C4C:
    ctx->pc = 0x80306C4Cu;
    // 80306C4C: bl      0x80370BD4
    {
            ctx->lr = 0x80306C50u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306C50:
    ctx->pc = 0x80306C50u;
    ctx->downcount -= 6;
    // 80306C50: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306C54:
    ctx->pc = 0x80306C54u;
    // 80306C54: addi    r4, r31, 22184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22184);

label_80306C58:
    ctx->pc = 0x80306C58u;
    // 80306C58: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80306C5C:
    ctx->pc = 0x80306C5Cu;
    // 80306C5C: lwz     r31, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306C60:
    ctx->pc = 0x80306C60u;
    // 80306C60: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80306C64:
    ctx->pc = 0x80306C64u;
    // 80306C64: bl      0x80370BD4
    {
            ctx->lr = 0x80306C68u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80306C68:
    ctx->pc = 0x80306C68u;
    ctx->downcount -= 5;
    // 80306C68: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80306C6C:
    ctx->pc = 0x80306C6Cu;
    // 80306C6C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306C70:
    ctx->pc = 0x80306C70u;
    // 80306C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80306C74:
    ctx->pc = 0x80306C74u;
    // 80306C74: lwz     r5, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80306C78:
    ctx->pc = 0x80306C78u;
    // 80306C78: bl      0x80276A5C
    {
            ctx->lr = 0x80306C7Cu;
            ctx->pc = 0x80276A5Cu;
            return;
    }

label_80306C7C:
    ctx->pc = 0x80306C7Cu;
    ctx->downcount -= 3;
    // 80306C7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306C80:
    ctx->pc = 0x80306C80u;
    // 80306C80: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306C84:
    ctx->pc = 0x80306C84u;
    // 80306C84: bl      0x80234544
    {
            ctx->lr = 0x80306C88u;
            ctx->pc = 0x80234544u;
            return;
    }

label_80306C88:
    ctx->pc = 0x80306C88u;
    ctx->downcount -= 2;
    // 80306C88: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80306C8C:
    ctx->pc = 0x80306C8Cu;
    // 80306C8C: bl      0x80261E7C
    {
            ctx->lr = 0x80306C90u;
            ctx->pc = 0x80261E7Cu;
            return;
    }

label_80306C90:
    ctx->pc = 0x80306C90u;
    ctx->downcount -= 6;
    // 80306C90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306C94:
    ctx->pc = 0x80306C94u;
    // 80306C94: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306C98:
    ctx->pc = 0x80306C98u;
    // 80306C98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306C9C:
    ctx->pc = 0x80306C9Cu;
    // 80306C9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80306CA0:
    ctx->pc = 0x80306CA0u;
    // 80306CA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306CA4:
    ctx->pc = 0x80306CA4u;
    ctx->downcount -= 16;
    // 80306CA4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306CA8:
    ctx->pc = 0x80306CA8u;
    // 80306CA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306CAC:
    ctx->pc = 0x80306CACu;
    // 80306CAC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306CB0:
    ctx->pc = 0x80306CB0u;
    // 80306CB0: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306CB4:
    ctx->pc = 0x80306CB4u;
    // 80306CB4: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306CB8:
    ctx->pc = 0x80306CB8u;
    // 80306CB8: bl      0x80306C20
    {
            ctx->lr = 0x80306CBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306CBC:
    ctx->pc = 0x80306CBCu;
    ctx->downcount -= 4;
    // 80306CBC: lwz     r27, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80306CC0:
    ctx->pc = 0x80306CC0u;
    // 80306CC0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80306CC4:
    ctx->pc = 0x80306CC4u;
    // 80306CC4: lwz     r31, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306CC8:
    ctx->pc = 0x80306CC8u;
    // 80306CC8: bl      0x80306C20
    {
            ctx->lr = 0x80306CCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306CCC:
    ctx->pc = 0x80306CCCu;
    ctx->downcount -= 8;
    // 80306CCC: lwz     r29, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80306CD0:
    ctx->pc = 0x80306CD0u;
    // 80306CD0: addi    r30, r1, 16
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(16);

label_80306CD4:
    ctx->pc = 0x80306CD4u;
    // 80306CD4: lwz     r28, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80306CD8:
    ctx->pc = 0x80306CD8u;
    // 80306CD8: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_80306CDC:
    ctx->pc = 0x80306CDCu;
    // 80306CDC: stb     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_80306CE0:
    ctx->pc = 0x80306CE0u;
    // 80306CE0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80306CE4:
    ctx->pc = 0x80306CE4u;
    // 80306CE4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80306CE8:
    ctx->pc = 0x80306CE8u;
    // 80306CE8: b       0x80306D30
    {
            goto label_80306D30;
    }

label_80306CEC:
    ctx->downcount -= 3;
    // 80306CEC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80306CF0:
    // 80306CF0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80306CF4:
    // 80306CF4: bl      0x802D2958
    {
            ctx->lr = 0x80306CF8u;
            ctx->pc = 0x802D2958u;
            return;
    }

label_80306CF8:
    ctx->downcount -= 2;
    // 80306CF8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306CFC:
    // 80306CFC: bl      0x802F3B7C
    {
            ctx->lr = 0x80306D00u;
            ctx->pc = 0x802F3B7Cu;
            return;
    }

label_80306D00:
    ctx->downcount -= 2;
    // 80306D00: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306D04:
    // 80306D04: bc    12, 2, 0x80306D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306D0C;
        }
    }

label_80306D08:
    ctx->downcount -= 1;
    // 80306D08: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80306D0C:
    ctx->downcount -= 2;
    // 80306D0C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80306D10:
    // 80306D10: bl      0x802F3B64
    {
            ctx->lr = 0x80306D14u;
            ctx->pc = 0x802F3B64u;
            return;
    }

label_80306D14:
    ctx->downcount -= 7;
    // 80306D14: add   r5, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80306D18:
    ctx->pc = 0x80306D18u;
    // 80306D18: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306D1C:
    // 80306D1C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80306D20:
    // 80306D20: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_80306D24:
    ctx->pc = 0x80306D24u;
    // 80306D24: stw     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306D28:
    ctx->pc = 0x80306D28u;
    // 80306D28: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306D2C:
    ctx->pc = 0x80306D2Cu;
    // 80306D2C: stw     r4, 5(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306D30:
    ctx->downcount -= 2;
    // 80306D30: cmpw    r25, r28
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306D34:
    // 80306D34: bc    12, 0, 0x80306CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306CECu;
                return;
            }
            goto label_80306CEC;
        }
    }

label_80306D38:
    ctx->pc = 0x80306D38u;
    ctx->downcount -= 2;
    // 80306D38: cmpwi   r26, 0
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

label_80306D3C:
    ctx->pc = 0x80306D3Cu;
    // 80306D3C: bc    12, 2, 0x80306D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306D4C;
        }
    }

label_80306D40:
    ctx->pc = 0x80306D40u;
    ctx->downcount -= 3;
    // 80306D40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306D44:
    ctx->pc = 0x80306D44u;
    // 80306D44: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80306D48:
    ctx->pc = 0x80306D48u;
    // 80306D48: bl      0x802E5F98
    {
            ctx->lr = 0x80306D4Cu;
            ctx->pc = 0x802E5F98u;
            return;
    }

label_80306D4C:
    ctx->pc = 0x80306D4Cu;
    ctx->downcount -= 16;
    // 80306D4C: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306D50:
    ctx->pc = 0x80306D50u;
    // 80306D50: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306D54:
    ctx->pc = 0x80306D54u;
    // 80306D54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306D58:
    ctx->pc = 0x80306D58u;
    // 80306D58: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80306D5C:
    ctx->pc = 0x80306D5Cu;
    // 80306D5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306D60:
    ctx->pc = 0x80306D60u;
    ctx->downcount -= 16;
    // 80306D60: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306D64:
    ctx->pc = 0x80306D64u;
    // 80306D64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306D68:
    ctx->pc = 0x80306D68u;
    // 80306D68: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306D6C:
    ctx->pc = 0x80306D6Cu;
    // 80306D6C: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306D70:
    ctx->pc = 0x80306D70u;
    // 80306D70: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306D74:
    ctx->pc = 0x80306D74u;
    // 80306D74: bl      0x80306C20
    {
            ctx->lr = 0x80306D78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306D78:
    ctx->pc = 0x80306D78u;
    ctx->downcount -= 4;
    // 80306D78: lwz     r29, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80306D7C:
    ctx->pc = 0x80306D7Cu;
    // 80306D7C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80306D80:
    ctx->pc = 0x80306D80u;
    // 80306D80: lwz     r28, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80306D84:
    ctx->pc = 0x80306D84u;
    // 80306D84: bl      0x80306C20
    {
            ctx->lr = 0x80306D88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306D88:
    ctx->pc = 0x80306D88u;
    ctx->downcount -= 4;
    // 80306D88: lwz     r27, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80306D8C:
    ctx->pc = 0x80306D8Cu;
    // 80306D8C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80306D90:
    ctx->pc = 0x80306D90u;
    // 80306D90: lwz     r26, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_80306D94:
    ctx->pc = 0x80306D94u;
    // 80306D94: b       0x80306E08
    {
            goto label_80306E08;
    }

label_80306D98:
    ctx->downcount -= 3;
    // 80306D98: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306D9C:
    // 80306D9C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80306DA0:
    // 80306DA0: bl      0x802D2958
    {
            ctx->lr = 0x80306DA4u;
            ctx->pc = 0x802D2958u;
            return;
    }

label_80306DA4:
    ctx->downcount -= 2;
    // 80306DA4: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306DA8:
    // 80306DA8: bl      0x802F3B7C
    {
            ctx->lr = 0x80306DACu;
            ctx->pc = 0x802F3B7Cu;
            return;
    }

label_80306DAC:
    ctx->downcount -= 3;
    // 80306DAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306DB0:
    // 80306DB0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80306DB4:
    // 80306DB4: bl      0x802F3B74
    {
            ctx->lr = 0x80306DB8u;
            ctx->pc = 0x802F3B74u;
            return;
    }

label_80306DB8:
    ctx->downcount -= 4;
    // 80306DB8: cmpwi   r30, 0
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

label_80306DBC:
    // 80306DBC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306DC0:
    // 80306DC0: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80306DC4:
    // 80306DC4: bc    4, 2, 0x80306DE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80306DE8;
        }
    }

label_80306DC8:
    ctx->downcount -= 2;
    // 80306DC8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80306DCC:
    // 80306DCC: bl      0x802F3B64
    {
            ctx->lr = 0x80306DD0u;
            ctx->pc = 0x802F3B64u;
            return;
    }

label_80306DD0:
    ctx->pc = 0x80306DD0u;
    ctx->downcount -= 5;
    // 80306DD0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306DD4:
    // 80306DD4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80306DD8:
    ctx->pc = 0x80306DD8u;
    // 80306DD8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306DDC:
    // 80306DDC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80306DE0:
    // 80306DE0: bl      0x802E5C3C
    {
            ctx->lr = 0x80306DE4u;
            ctx->pc = 0x802E5C3Cu;
            return;
    }

label_80306DE4:
    ctx->downcount -= 1;
    // 80306DE4: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306DE8:
    ctx->downcount -= 3;
    // 80306DE8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306DEC:
    // 80306DEC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80306DF0:
    // 80306DF0: bl      0x80235850
    {
            ctx->lr = 0x80306DF4u;
            ctx->pc = 0x80235850u;
            return;
    }

label_80306DF4:
    ctx->downcount -= 4;
    // 80306DF4: extsb r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[30];
    }

label_80306DF8:
    // 80306DF8: rlwinm r5, r31, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000FFFFu;
    }

label_80306DFC:
    // 80306DFC: rlwinm r6, r23, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[23], 0u) & 0x0000FFFFu;
    }

label_80306E00:
    // 80306E00: bl      0x80235BC0
    {
            ctx->lr = 0x80306E04u;
            ctx->pc = 0x80235BC0u;
            return;
    }

label_80306E04:
    ctx->downcount -= 1;
    // 80306E04: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80306E08:
    ctx->downcount -= 2;
    // 80306E08: cmpw    r25, r26
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306E0C:
    // 80306E0C: bc    12, 0, 0x80306D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306D98u;
                return;
            }
            goto label_80306D98;
        }
    }

label_80306E10:
    ctx->pc = 0x80306E10u;
    ctx->downcount -= 16;
    // 80306E10: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80306E14:
    ctx->pc = 0x80306E14u;
    // 80306E14: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306E18:
    ctx->pc = 0x80306E18u;
    // 80306E18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80306E1C:
    ctx->pc = 0x80306E1Cu;
    // 80306E1C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80306E20:
    ctx->pc = 0x80306E20u;
    // 80306E20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80306E24:
    ctx->pc = 0x80306E24u;
    ctx->downcount -= 16;
    // 80306E24: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80306E28:
    ctx->pc = 0x80306E28u;
    // 80306E28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80306E2C:
    ctx->pc = 0x80306E2Cu;
    // 80306E2C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80306E30:
    ctx->pc = 0x80306E30u;
    // 80306E30: stmw     r22, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80306E34:
    ctx->pc = 0x80306E34u;
    // 80306E34: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306E38:
    ctx->pc = 0x80306E38u;
    // 80306E38: bl      0x80306C20
    {
            ctx->lr = 0x80306E3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306E3C:
    ctx->pc = 0x80306E3Cu;
    ctx->downcount -= 4;
    // 80306E3C: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80306E40:
    ctx->pc = 0x80306E40u;
    // 80306E40: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80306E44:
    ctx->pc = 0x80306E44u;
    // 80306E44: lwz     r25, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_80306E48:
    ctx->pc = 0x80306E48u;
    // 80306E48: bl      0x80306C20
    {
            ctx->lr = 0x80306E4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_80306E4C:
    ctx->pc = 0x80306E4Cu;
    ctx->downcount -= 3;
    // 80306E4C: lwz     r30, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80306E50:
    ctx->pc = 0x80306E50u;
    // 80306E50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306E54:
    ctx->pc = 0x80306E54u;
    // 80306E54: bl      0x802E5B84
    {
            ctx->lr = 0x80306E58u;
            ctx->pc = 0x802E5B84u;
            return;
    }

label_80306E58:
    ctx->pc = 0x80306E58u;
    ctx->downcount -= 4;
    // 80306E58: lwz     r3, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80306E5C:
    ctx->pc = 0x80306E5Cu;
    // 80306E5C: addi    r29, r3, -1
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-1);

label_80306E60:
    ctx->pc = 0x80306E60u;
    // 80306E60: rlwinm r26, r29, 2, 0, 29
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80306E64:
    ctx->pc = 0x80306E64u;
    // 80306E64: b       0x8030704C
    {
            goto label_8030704C;
    }

label_80306E68:
    ctx->downcount -= 3;
    // 80306E68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306E6C:
    // 80306E6C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306E70:
    // 80306E70: bl      0x802D2958
    {
            ctx->lr = 0x80306E74u;
            ctx->pc = 0x802D2958u;
            return;
    }

label_80306E74:
    ctx->downcount -= 7;
    // 80306E74: add   r22, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_80306E78:
    // 80306E78: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306E7C:
    ctx->pc = 0x80306E7Cu;
    // 80306E7C: lbz     r0, 196(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80306E80:
    // 80306E80: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80306E84:
    // 80306E84: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80306E88:
    // 80306E88: cmpwi   r0, 0
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

label_80306E8C:
    // 80306E8C: bc    12, 2, 0x80306EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EA4;
        }
    }

label_80306E90:
    ctx->downcount -= 1;
    // 80306E90: bl      0x802C38B4
    {
            ctx->lr = 0x80306E94u;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_80306E94:
    ctx->pc = 0x80306E94u;
    ctx->downcount -= 3;
    // 80306E94: lbz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80306E98:
    // 80306E98: cmpwi   r0, 0
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

label_80306E9C:
    // 80306E9C: bc    12, 2, 0x80306EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EA4;
        }
    }

label_80306EA0:
    ctx->downcount -= 1;
    // 80306EA0: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_80306EA4:
    ctx->downcount -= 2;
    // 80306EA4: cmpwi   r25, 0
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

label_80306EA8:
    // 80306EA8: bc    12, 2, 0x80306EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EC0;
        }
    }

label_80306EAC:
    ctx->downcount -= 4;
    // 80306EAC: add   r3, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306EB0:
    ctx->pc = 0x80306EB0u;
    // 80306EB0: lwz     r0, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306EB4:
    // 80306EB4: cmpwi   r0, 0
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

label_80306EB8:
    // 80306EB8: bc    12, 2, 0x80306EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EC0;
        }
    }

label_80306EBC:
    ctx->downcount -= 1;
    // 80306EBC: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_80306EC0:
    ctx->pc = 0x80306EC0u;
    ctx->downcount -= 5;
    // 80306EC0: lbz     r0, 216(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80306EC4:
    // 80306EC4: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80306EC8:
    // 80306EC8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80306ECC:
    // 80306ECC: cmpwi   r0, 0
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

label_80306ED0:
    // 80306ED0: bc    12, 2, 0x80306EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EE8;
        }
    }

label_80306ED4:
    ctx->downcount -= 1;
    // 80306ED4: bl      0x802C38B4
    {
            ctx->lr = 0x80306ED8u;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_80306ED8:
    ctx->downcount -= 1;
    // 80306ED8: bl      0x80276C0C
    {
            ctx->lr = 0x80306EDCu;
            ctx->pc = 0x80276C0Cu;
            return;
    }

label_80306EDC:
    ctx->downcount -= 2;
    // 80306EDC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80306EE0:
    // 80306EE0: bc    12, 2, 0x80306EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306EE8;
        }
    }

label_80306EE4:
    ctx->downcount -= 1;
    // 80306EE4: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_80306EE8:
    ctx->downcount -= 2;
    // 80306EE8: cmpwi   r25, 0
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

label_80306EEC:
    // 80306EEC: bc    12, 2, 0x80306F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306F04;
        }
    }

label_80306EF0:
    ctx->downcount -= 4;
    // 80306EF0: add   r3, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80306EF4:
    ctx->pc = 0x80306EF4u;
    // 80306EF4: lwz     r0, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80306EF8:
    // 80306EF8: cmpwi   r0, 0
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

label_80306EFC:
    // 80306EFC: bc    12, 2, 0x80306F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306F04;
        }
    }

label_80306F00:
    ctx->downcount -= 1;
    // 80306F00: li      r23, 1
    ctx->gpr[23] = (u32)(s32)(1);

label_80306F04:
    ctx->downcount -= 3;
    // 80306F04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80306F08:
    // 80306F08: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80306F0C:
    // 80306F0C: bl      0x802D296C
    {
            ctx->lr = 0x80306F10u;
            ctx->pc = 0x802D296Cu;
            return;
    }

label_80306F10:
    ctx->downcount -= 2;
    // 80306F10: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80306F14:
    // 80306F14: bl      0x802C38B4
    {
            ctx->lr = 0x80306F18u;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_80306F18:
    ctx->downcount -= 3;
    // 80306F18: cmpwi   r25, 0
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

label_80306F1C:
    ctx->pc = 0x80306F1Cu;
    // 80306F1C: lwz     r22, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_80306F20:
    // 80306F20: bc    12, 2, 0x80306F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306F38;
        }
    }

label_80306F24:
    ctx->downcount -= 2;
    // 80306F24: cmpwi   r25, 2
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

label_80306F28:
    // 80306F28: bc    12, 2, 0x80306F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306F98;
        }
    }

label_80306F2C:
    ctx->downcount -= 2;
    // 80306F2C: cmpwi   r25, 3
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

label_80306F30:
    // 80306F30: bc    12, 2, 0x80306FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306FF4;
        }
    }

label_80306F34:
    ctx->downcount -= 1;
    // 80306F34: b       0x80307044
    {
            goto label_80307044;
    }

label_80306F38:
    ctx->downcount -= 2;
    // 80306F38: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306F3C:
    // 80306F3C: bl      0x802F3B64
    {
            ctx->lr = 0x80306F40u;
            ctx->pc = 0x802F3B64u;
            return;
    }

label_80306F40:
    ctx->pc = 0x80306F40u;
    ctx->downcount -= 5;
    // 80306F40: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80306F44:
    // 80306F44: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80306F48:
    ctx->pc = 0x80306F48u;
    // 80306F48: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80306F4C:
    // 80306F4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306F50:
    // 80306F50: bl      0x802E5874
    {
            ctx->lr = 0x80306F54u;
            ctx->pc = 0x802E5874u;
            return;
    }

label_80306F54:
    ctx->downcount -= 2;
    // 80306F54: cmpwi   r24, 0
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

label_80306F58:
    // 80306F58: bc    12, 2, 0x80306F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306F74;
        }
    }

label_80306F5C:
    ctx->downcount -= 6;
    // 80306F5C: add   r4, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306F60:
    // 80306F60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306F64:
    ctx->pc = 0x80306F64u;
    // 80306F64: lwz     r6, 200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80306F68:
    // 80306F68: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80306F6C:
    // 80306F6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306F70:
    // 80306F70: bl      0x802E53BC
    {
            ctx->lr = 0x80306F74u;
            ctx->pc = 0x802E53BCu;
            return;
    }

label_80306F74:
    ctx->downcount -= 2;
    // 80306F74: cmpwi   r23, 0
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

label_80306F78:
    // 80306F78: bc    12, 2, 0x80307044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80307044;
        }
    }

label_80306F7C:
    ctx->downcount -= 6;
    // 80306F7C: add   r4, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306F80:
    // 80306F80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306F84:
    ctx->pc = 0x80306F84u;
    // 80306F84: lwz     r6, 220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(220);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80306F88:
    // 80306F88: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80306F8C:
    // 80306F8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306F90:
    // 80306F90: bl      0x802E4D0C
    {
            ctx->lr = 0x80306F94u;
            ctx->pc = 0x802E4D0Cu;
            return;
    }

label_80306F94:
    ctx->downcount -= 1;
    // 80306F94: b       0x80307044
    {
            goto label_80307044;
    }

label_80306F98:
    ctx->downcount -= 3;
    // 80306F98: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80306F9C:
    // 80306F9C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80306FA0:
    // 80306FA0: bl      0x802F3B34
    {
            ctx->lr = 0x80306FA4u;
            ctx->pc = 0x802F3B34u;
            return;
    }

label_80306FA4:
    ctx->downcount -= 3;
    // 80306FA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306FA8:
    // 80306FA8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80306FAC:
    // 80306FAC: bl      0x802E5AD8
    {
            ctx->lr = 0x80306FB0u;
            ctx->pc = 0x802E5AD8u;
            return;
    }

label_80306FB0:
    ctx->downcount -= 2;
    // 80306FB0: cmpwi   r24, 0
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

label_80306FB4:
    // 80306FB4: bc    12, 2, 0x80306FD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80306FD0;
        }
    }

label_80306FB8:
    ctx->downcount -= 6;
    // 80306FB8: add   r4, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306FBC:
    // 80306FBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306FC0:
    ctx->pc = 0x80306FC0u;
    // 80306FC0: lwz     r6, 200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80306FC4:
    // 80306FC4: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80306FC8:
    // 80306FC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306FCC:
    // 80306FCC: bl      0x802E53BC
    {
            ctx->lr = 0x80306FD0u;
            ctx->pc = 0x802E53BCu;
            return;
    }

label_80306FD0:
    ctx->downcount -= 2;
    // 80306FD0: cmpwi   r23, 0
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

label_80306FD4:
    // 80306FD4: bc    12, 2, 0x80307044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80307044;
        }
    }

label_80306FD8:
    ctx->downcount -= 6;
    // 80306FD8: add   r4, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80306FDC:
    // 80306FDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80306FE0:
    ctx->pc = 0x80306FE0u;
    // 80306FE0: lwz     r6, 220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(220);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80306FE4:
    // 80306FE4: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80306FE8:
    // 80306FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80306FEC:
    // 80306FEC: bl      0x802E4D0C
    {
            ctx->lr = 0x80306FF0u;
            ctx->pc = 0x802E4D0Cu;
            return;
    }

label_80306FF0:
    ctx->downcount -= 1;
    // 80306FF0: b       0x80307044
    {
            goto label_80307044;
    }

label_80306FF4:
    ctx->downcount -= 2;
    // 80306FF4: cmpwi   r24, 0
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

label_80306FF8:
    // 80306FF8: bc    12, 2, 0x8030701C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030701C;
        }
    }

label_80306FFC:
    ctx->downcount -= 2;
    // 80306FFC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80307000:
    // 80307000: bl      0x802F3B74
    {
            ctx->lr = 0x80307004u;
            ctx->pc = 0x802F3B74u;
            return;
    }

label_80307004:
    ctx->downcount -= 6;
    // 80307004: add   r5, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80307008:
    // 80307008: rlwinm r4, r3, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8030700C:
    ctx->pc = 0x8030700Cu;
    // 8030700C: lwz     r6, 200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(200);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80307010:
    // 80307010: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80307014:
    // 80307014: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80307018:
    // 80307018: bl      0x802E5164
    {
            ctx->lr = 0x8030701Cu;
            ctx->pc = 0x802E5164u;
            return;
    }

label_8030701C:
    ctx->downcount -= 2;
    // 8030701C: cmpwi   r23, 0
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

label_80307020:
    // 80307020: bc    12, 2, 0x80307044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80307044;
        }
    }

label_80307024:
    ctx->downcount -= 2;
    // 80307024: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80307028:
    // 80307028: bl      0x802F3B74
    {
            ctx->lr = 0x8030702Cu;
            ctx->pc = 0x802F3B74u;
            return;
    }

label_8030702C:
    ctx->downcount -= 6;
    // 8030702C: add   r5, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80307030:
    // 80307030: rlwinm r4, r3, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80307034:
    ctx->pc = 0x80307034u;
    // 80307034: lwz     r6, 220(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(220);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80307038:
    // 80307038: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030703C:
    // 8030703C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80307040:
    // 80307040: bl      0x802E4AB4
    {
            ctx->lr = 0x80307044u;
            ctx->pc = 0x802E4AB4u;
            return;
    }

label_80307044:
    ctx->downcount -= 2;
    // 80307044: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_80307048:
    // 80307048: addi    r26, r26, -4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-4);

label_8030704C:
    ctx->downcount -= 2;
    // 8030704C: cmpwi   r29, 0
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

label_80307050:
    // 80307050: bc    4, 0, 0x80306E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306E68u;
                return;
            }
            goto label_80306E68;
        }
    }

label_80307054:
    ctx->pc = 0x80307054u;
    ctx->downcount -= 16;
    // 80307054: lmw     r22, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80307058:
    ctx->pc = 0x80307058u;
    // 80307058: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030705C:
    ctx->pc = 0x8030705Cu;
    // 8030705C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80307060:
    ctx->pc = 0x80307060u;
    // 80307060: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80307064:
    ctx->pc = 0x80307064u;
    // 80307064: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80307068:
    ctx->pc = 0x80307068u;
    ctx->downcount -= 6;
    // 80307068: lwz     r4, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030706C:
    ctx->pc = 0x8030706Cu;
    // 8030706C: lwz     r5, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80307070:
    ctx->pc = 0x80307070u;
    // 80307070: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80307074:
    ctx->pc = 0x80307074u;
    // 80307074: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80307078:
    ctx->pc = 0x80307078u;
    // 80307078: cmpw    r5, r0
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

label_8030707C:
    ctx->pc = 0x8030707Cu;
    // 8030707C: bc    4, 2, 0x8030708C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030708C;
        }
    }

label_80307080:
    ctx->pc = 0x80307080u;
    ctx->downcount -= 3;
    // 80307080: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80307084:
    ctx->pc = 0x80307084u;
    // 80307084: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80307088:
    ctx->pc = 0x80307088u;
    // 80307088: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030708C:
    ctx->pc = 0x8030708Cu;
    ctx->downcount -= 5;
    // 8030708C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80307090:
    ctx->pc = 0x80307090u;
    // 80307090: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80307094:
    ctx->pc = 0x80307094u;
    // 80307094: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80307098:
    ctx->pc = 0x80307098u;
    // 80307098: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030709C:
    ctx->pc = 0x8030709Cu;
    // 8030709C: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_803070A0:
    ctx->pc = 0x803070A0u;
    ctx->downcount -= 6;
    // 803070A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803070A4:
    ctx->pc = 0x803070A4u;
    // 803070A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803070A8:
    ctx->pc = 0x803070A8u;
    // 803070A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803070AC:
    ctx->pc = 0x803070ACu;
    // 803070AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803070B0:
    ctx->pc = 0x803070B0u;
    // 803070B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803070B4:
    ctx->pc = 0x803070B4u;
    // 803070B4: bl      0x80306C20
    {
            ctx->lr = 0x803070B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_803070B8:
    ctx->pc = 0x803070B8u;
    ctx->downcount -= 3;
    // 803070B8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803070BC:
    ctx->pc = 0x803070BCu;
    // 803070BC: lwz     r4, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803070C0:
    ctx->pc = 0x803070C0u;
    // 803070C0: bl      0x802D296C
    {
            ctx->lr = 0x803070C4u;
            ctx->pc = 0x802D296Cu;
            return;
    }

label_803070C4:
    ctx->pc = 0x803070C4u;
    ctx->downcount -= 2;
    // 803070C4: cmpwi   r3, 2
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

label_803070C8:
    ctx->pc = 0x803070C8u;
    // 803070C8: bc    4, 2, 0x803070E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803070E4;
        }
    }

label_803070CC:
    ctx->pc = 0x803070CCu;
    ctx->downcount -= 5;
    // 803070CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803070D0:
    ctx->pc = 0x803070D0u;
    // 803070D0: stw     r0, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803070D4:
    ctx->pc = 0x803070D4u;
    // 803070D4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803070D8:
    ctx->pc = 0x803070D8u;
    // 803070D8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_803070DC:
    ctx->pc = 0x803070DCu;
    // 803070DC: bl      0x803457B8
    {
            ctx->lr = 0x803070E0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803070E0:
    ctx->pc = 0x803070E0u;
    ctx->downcount -= 1;
    // 803070E0: b       0x803070EC
    {
            goto label_803070EC;
    }

label_803070E4:
    ctx->pc = 0x803070E4u;
    ctx->downcount -= 2;
    // 803070E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803070E8:
    ctx->pc = 0x803070E8u;
    // 803070E8: bl      0x80307068
    {
            ctx->lr = 0x803070ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80307068u;
                return;
            }
            goto label_80307068;
    }

label_803070EC:
    ctx->pc = 0x803070ECu;
    ctx->downcount -= 6;
    // 803070EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803070F0:
    ctx->pc = 0x803070F0u;
    // 803070F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803070F4:
    ctx->pc = 0x803070F4u;
    // 803070F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803070F8:
    ctx->pc = 0x803070F8u;
    // 803070F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803070FC:
    ctx->pc = 0x803070FCu;
    // 803070FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80307100:
    ctx->pc = 0x80307100u;
    ctx->downcount -= 4;
    // 80307100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80307104:
    ctx->pc = 0x80307104u;
    // 80307104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80307108:
    ctx->pc = 0x80307108u;
    // 80307108: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030710C:
    ctx->pc = 0x8030710Cu;
    // 8030710C: bl      0x802C38B4
    {
            ctx->lr = 0x80307110u;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_80307110:
    ctx->pc = 0x80307110u;
    ctx->downcount -= 1;
    // 80307110: bl      0x80276C0C
    {
            ctx->lr = 0x80307114u;
            ctx->pc = 0x80276C0Cu;
            return;
    }

label_80307114:
    ctx->pc = 0x80307114u;
    ctx->downcount -= 5;
    // 80307114: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80307118:
    ctx->pc = 0x80307118u;
    // 80307118: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030711C:
    ctx->pc = 0x8030711Cu;
    // 8030711C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80307120:
    ctx->pc = 0x80307120u;
    // 80307120: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80307124:
    ctx->pc = 0x80307124u;
    ctx->downcount -= 4;
    // 80307124: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80307128:
    ctx->pc = 0x80307128u;
    // 80307128: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030712C:
    ctx->pc = 0x8030712Cu;
    // 8030712C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80307130:
    ctx->pc = 0x80307130u;
    // 80307130: bl      0x802C38B4
    {
            ctx->lr = 0x80307134u;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_80307134:
    ctx->pc = 0x80307134u;
    ctx->downcount -= 6;
    // 80307134: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80307138:
    ctx->pc = 0x80307138u;
    // 80307138: lbz     r3, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8030713C:
    ctx->pc = 0x8030713Cu;
    // 8030713C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80307140:
    ctx->pc = 0x80307140u;
    // 80307140: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80307144:
    ctx->pc = 0x80307144u;
    // 80307144: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803031C0;
        }
    }

label_80307148:
    ctx->pc = 0x80307148u;
    ctx->downcount -= 15;
    // 80307148: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030714C:
    ctx->pc = 0x8030714Cu;
    // 8030714C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80307150:
    ctx->pc = 0x80307150u;
    // 80307150: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80307154:
    ctx->pc = 0x80307154u;
    // 80307154: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80307158:
    ctx->pc = 0x80307158u;
    // 80307158: bl      0x80306C20
    {
            ctx->lr = 0x8030715Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80306C20u;
                return;
            }
            goto label_80306C20;
    }

label_8030715C:
    ctx->pc = 0x8030715Cu;
    ctx->downcount -= 5;
    // 8030715C: lwz     r29, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80307160:
    ctx->pc = 0x80307160u;
    // 80307160: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80307164:
    ctx->pc = 0x80307164u;
    // 80307164: lwz     r30, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80307168:
    ctx->pc = 0x80307168u;
    // 80307168: lwz     r28, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8030716C:
    ctx->pc = 0x8030716Cu;
    // 8030716C: b       0x803071BC
    {
            goto label_803071BC;
    }

label_80307170:
    ctx->pc = 0x80307170u;
    ctx->downcount -= 3;
    // 80307170: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80307174:
    ctx->pc = 0x80307174u;
    // 80307174: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80307178:
    ctx->pc = 0x80307178u;
    // 80307178: bl      0x80235850
    {
            ctx->lr = 0x8030717Cu;
            ctx->pc = 0x80235850u;
            return;
    }

label_8030717C:
    ctx->pc = 0x8030717Cu;
    ctx->downcount -= 5;
    // 8030717C: lbz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80307180:
    ctx->pc = 0x80307180u;
    // 80307180: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80307184:
    ctx->pc = 0x80307184u;
    // 80307184: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80307188:
    ctx->pc = 0x80307188u;
    // 80307188: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8030718C:
    ctx->pc = 0x8030718Cu;
    // 8030718C: bl      0x80235850
    {
            ctx->lr = 0x80307190u;
            ctx->pc = 0x80235850u;
            return;
    }

label_80307190:
    ctx->pc = 0x80307190u;
    ctx->downcount -= 6;
    // 80307190: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80307194:
    ctx->pc = 0x80307194u;
    // 80307194: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80307198:
    ctx->pc = 0x80307198u;
    // 80307198: lhz     r6, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8030719C:
    ctx->pc = 0x8030719Cu;
    // 8030719C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_803071A0:
    ctx->pc = 0x803071A0u;
    // 803071A0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803071A4:
    ctx->pc = 0x803071A4u;
    // 803071A4: bl      0x802D2ACC
    {
            ctx->lr = 0x803071A8u;
            ctx->pc = 0x802D2ACCu;
            return;
    }

label_803071A8:
    ctx->pc = 0x803071A8u;
    ctx->downcount -= 2;
    // 803071A8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803071AC:
    ctx->pc = 0x803071ACu;
    // 803071AC: bc    4, 2, 0x803071B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803071B8;
        }
    }

label_803071B0:
    ctx->pc = 0x803071B0u;
    ctx->downcount -= 2;
    // 803071B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803071B4:
    ctx->pc = 0x803071B4u;
    // 803071B4: b       0x803071C8
    {
            ctx->pc = 0x803071C8u;
            return;
    }

label_803071B8:
    ctx->pc = 0x803071B8u;
    ctx->downcount -= 1;
    // 803071B8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_803071BC:
    ctx->pc = 0x803071BCu;
    ctx->downcount -= 1;
    // 803071BC: cmpw    r27, r28
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    ctx->pc = 0x803071C0u;
    return;
return_dispatch_803031C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x803031C4u: goto label_803031C4;
    case 0x803031C8u: goto label_803031C8;
    case 0x80303208u: goto label_80303208;
    case 0x80303244u: goto label_80303244;
    case 0x8030324Cu: goto label_8030324C;
    case 0x803032C0u: goto label_803032C0;
    case 0x803032CCu: goto label_803032CC;
    case 0x803032DCu: goto label_803032DC;
    case 0x80303334u: goto label_80303334;
    case 0x80303350u: goto label_80303350;
    case 0x80303370u: goto label_80303370;
    case 0x8030338Cu: goto label_8030338C;
    case 0x80303394u: goto label_80303394;
    case 0x803033A8u: goto label_803033A8;
    case 0x803033C0u: goto label_803033C0;
    case 0x803033CCu: goto label_803033CC;
    case 0x80303408u: goto label_80303408;
    case 0x8030341Cu: goto label_8030341C;
    case 0x8030346Cu: goto label_8030346C;
    case 0x803034C8u: goto label_803034C8;
    case 0x803034DCu: goto label_803034DC;
    case 0x803034E8u: goto label_803034E8;
    case 0x80303514u: goto label_80303514;
    case 0x80303520u: goto label_80303520;
    case 0x803035C0u: goto label_803035C0;
    case 0x803035CCu: goto label_803035CC;
    case 0x803035D8u: goto label_803035D8;
    case 0x803035E0u: goto label_803035E0;
    case 0x80303634u: goto label_80303634;
    case 0x8030364Cu: goto label_8030364C;
    case 0x80303658u: goto label_80303658;
    case 0x8030368Cu: goto label_8030368C;
    case 0x803036A0u: goto label_803036A0;
    case 0x803036B8u: goto label_803036B8;
    case 0x803036C8u: goto label_803036C8;
    case 0x803036E4u: goto label_803036E4;
    case 0x803036ECu: goto label_803036EC;
    case 0x803036F4u: goto label_803036F4;
    case 0x80303710u: goto label_80303710;
    case 0x80303738u: goto label_80303738;
    case 0x80303744u: goto label_80303744;
    case 0x80303764u: goto label_80303764;
    case 0x8030378Cu: goto label_8030378C;
    case 0x80303798u: goto label_80303798;
    case 0x803037B8u: goto label_803037B8;
    case 0x803037DCu: goto label_803037DC;
    case 0x803037E8u: goto label_803037E8;
    case 0x803037F0u: goto label_803037F0;
    case 0x80303858u: goto label_80303858;
    case 0x80303864u: goto label_80303864;
    case 0x8030386Cu: goto label_8030386C;
    case 0x8030387Cu: goto label_8030387C;
    case 0x803038B0u: goto label_803038B0;
    case 0x80303900u: goto label_80303900;
    case 0x8030390Cu: goto label_8030390C;
    case 0x80303914u: goto label_80303914;
    case 0x80303924u: goto label_80303924;
    case 0x8030393Cu: goto label_8030393C;
    case 0x80303954u: goto label_80303954;
    case 0x80303960u: goto label_80303960;
    case 0x80303968u: goto label_80303968;
    case 0x8030397Cu: goto label_8030397C;
    case 0x80303990u: goto label_80303990;
    case 0x8030399Cu: goto label_8030399C;
    case 0x803039ACu: goto label_803039AC;
    case 0x803039C4u: goto label_803039C4;
    case 0x803039D4u: goto label_803039D4;
    case 0x80303A2Cu: goto label_80303A2C;
    case 0x80303A3Cu: goto label_80303A3C;
    case 0x80303A5Cu: goto label_80303A5C;
    case 0x80303A6Cu: goto label_80303A6C;
    case 0x80303AB4u: goto label_80303AB4;
    case 0x80303AD8u: goto label_80303AD8;
    case 0x80303AE8u: goto label_80303AE8;
    case 0x80303B28u: goto label_80303B28;
    case 0x80303B40u: goto label_80303B40;
    case 0x80303B54u: goto label_80303B54;
    case 0x80303B70u: goto label_80303B70;
    case 0x80303B8Cu: goto label_80303B8C;
    case 0x80303BA0u: goto label_80303BA0;
    case 0x80303BC8u: goto label_80303BC8;
    case 0x80303BE0u: goto label_80303BE0;
    case 0x80303BF4u: goto label_80303BF4;
    case 0x80303BFCu: goto label_80303BFC;
    case 0x80303C30u: goto label_80303C30;
    case 0x80303C54u: goto label_80303C54;
    case 0x80303C60u: goto label_80303C60;
    case 0x80303C9Cu: goto label_80303C9C;
    case 0x80303CC4u: goto label_80303CC4;
    case 0x80303CD8u: goto label_80303CD8;
    case 0x80303CECu: goto label_80303CEC;
    case 0x80303D00u: goto label_80303D00;
    case 0x80303D08u: goto label_80303D08;
    case 0x80303D18u: goto label_80303D18;
    case 0x80303D24u: goto label_80303D24;
    case 0x80303D30u: goto label_80303D30;
    case 0x80303D44u: goto label_80303D44;
    case 0x80303D54u: goto label_80303D54;
    case 0x80303D74u: goto label_80303D74;
    case 0x80303D80u: goto label_80303D80;
    case 0x80303D90u: goto label_80303D90;
    case 0x80303D9Cu: goto label_80303D9C;
    case 0x80303DB4u: goto label_80303DB4;
    case 0x80303DD0u: goto label_80303DD0;
    case 0x80303DD8u: goto label_80303DD8;
    case 0x80303DE4u: goto label_80303DE4;
    case 0x80303E0Cu: goto label_80303E0C;
    case 0x80303E34u: goto label_80303E34;
    case 0x80303E4Cu: goto label_80303E4C;
    case 0x80303E60u: goto label_80303E60;
    case 0x80303E70u: goto label_80303E70;
    case 0x80303ED4u: goto label_80303ED4;
    case 0x80303EE0u: goto label_80303EE0;
    case 0x80303EF0u: goto label_80303EF0;
    case 0x80303F3Cu: goto label_80303F3C;
    case 0x80303F48u: goto label_80303F48;
    case 0x80303F58u: goto label_80303F58;
    case 0x80303F98u: goto label_80303F98;
    case 0x80303FD8u: goto label_80303FD8;
    case 0x80304060u: goto label_80304060;
    case 0x80304068u: goto label_80304068;
    case 0x8030407Cu: goto label_8030407C;
    case 0x803040BCu: goto label_803040BC;
    case 0x803040D8u: goto label_803040D8;
    case 0x803040F0u: goto label_803040F0;
    case 0x803040FCu: goto label_803040FC;
    case 0x80304114u: goto label_80304114;
    case 0x8030411Cu: goto label_8030411C;
    case 0x80304144u: goto label_80304144;
    case 0x8030415Cu: goto label_8030415C;
    case 0x80304168u: goto label_80304168;
    case 0x8030417Cu: goto label_8030417C;
    case 0x80304188u: goto label_80304188;
    case 0x8030419Cu: goto label_8030419C;
    case 0x803041E8u: goto label_803041E8;
    case 0x803041F4u: goto label_803041F4;
    case 0x80304204u: goto label_80304204;
    case 0x80304238u: goto label_80304238;
    case 0x8030425Cu: goto label_8030425C;
    case 0x80304274u: goto label_80304274;
    case 0x8030428Cu: goto label_8030428C;
    case 0x80304324u: goto label_80304324;
    case 0x80304360u: goto label_80304360;
    case 0x803043C8u: goto label_803043C8;
    case 0x803043D0u: goto label_803043D0;
    case 0x803043D8u: goto label_803043D8;
    case 0x803043E0u: goto label_803043E0;
    case 0x803043E8u: goto label_803043E8;
    case 0x80304424u: goto label_80304424;
    case 0x80304444u: goto label_80304444;
    case 0x80304484u: goto label_80304484;
    case 0x803044A4u: goto label_803044A4;
    case 0x803044E4u: goto label_803044E4;
    case 0x80304504u: goto label_80304504;
    case 0x80304568u: goto label_80304568;
    case 0x80304574u: goto label_80304574;
    case 0x803045A4u: goto label_803045A4;
    case 0x803045BCu: goto label_803045BC;
    case 0x80304624u: goto label_80304624;
    case 0x8030462Cu: goto label_8030462C;
    case 0x8030463Cu: goto label_8030463C;
    case 0x8030469Cu: goto label_8030469C;
    case 0x803046D0u: goto label_803046D0;
    case 0x803046D8u: goto label_803046D8;
    case 0x8030471Cu: goto label_8030471C;
    case 0x8030472Cu: goto label_8030472C;
    case 0x8030477Cu: goto label_8030477C;
    case 0x8030479Cu: goto label_8030479C;
    case 0x803047C0u: goto label_803047C0;
    case 0x803047DCu: goto label_803047DC;
    case 0x803047F8u: goto label_803047F8;
    case 0x80304814u: goto label_80304814;
    case 0x80304858u: goto label_80304858;
    case 0x8030487Cu: goto label_8030487C;
    case 0x8030488Cu: goto label_8030488C;
    case 0x803048A0u: goto label_803048A0;
    case 0x803048DCu: goto label_803048DC;
    case 0x803048ECu: goto label_803048EC;
    case 0x803048F8u: goto label_803048F8;
    case 0x803048FCu: goto label_803048FC;
    case 0x8030494Cu: goto label_8030494C;
    case 0x80304954u: goto label_80304954;
    case 0x80304968u: goto label_80304968;
    case 0x80304980u: goto label_80304980;
    case 0x803049D0u: goto label_803049D0;
    case 0x803049DCu: goto label_803049DC;
    case 0x80304A3Cu: goto label_80304A3C;
    case 0x80304A44u: goto label_80304A44;
    case 0x80304A84u: goto label_80304A84;
    case 0x80304AA0u: goto label_80304AA0;
    case 0x80304AACu: goto label_80304AAC;
    case 0x80304AC8u: goto label_80304AC8;
    case 0x80304B08u: goto label_80304B08;
    case 0x80304B44u: goto label_80304B44;
    case 0x80304BA0u: goto label_80304BA0;
    case 0x80304C10u: goto label_80304C10;
    case 0x80304C20u: goto label_80304C20;
    case 0x80304C80u: goto label_80304C80;
    case 0x80304C94u: goto label_80304C94;
    case 0x80304C9Cu: goto label_80304C9C;
    case 0x80304CACu: goto label_80304CAC;
    case 0x80304CECu: goto label_80304CEC;
    case 0x80304D00u: goto label_80304D00;
    case 0x80304D1Cu: goto label_80304D1C;
    case 0x80304D68u: goto label_80304D68;
    case 0x80304DD0u: goto label_80304DD0;
    case 0x80304DE0u: goto label_80304DE0;
    case 0x80304E98u: goto label_80304E98;
    case 0x80304EE4u: goto label_80304EE4;
    case 0x80304F2Cu: goto label_80304F2C;
    case 0x80304F38u: goto label_80304F38;
    case 0x80304F68u: goto label_80304F68;
    case 0x80304F80u: goto label_80304F80;
    case 0x80304FE4u: goto label_80304FE4;
    case 0x80304FECu: goto label_80304FEC;
    case 0x80304FFCu: goto label_80304FFC;
    case 0x8030505Cu: goto label_8030505C;
    case 0x80305090u: goto label_80305090;
    case 0x803050D4u: goto label_803050D4;
    case 0x803050E4u: goto label_803050E4;
    case 0x80305130u: goto label_80305130;
    case 0x80305148u: goto label_80305148;
    case 0x80305160u: goto label_80305160;
    case 0x80305178u: goto label_80305178;
    case 0x80305190u: goto label_80305190;
    case 0x803051C4u: goto label_803051C4;
    case 0x803051DCu: goto label_803051DC;
    case 0x803051F4u: goto label_803051F4;
    case 0x80305290u: goto label_80305290;
    case 0x8030529Cu: goto label_8030529C;
    case 0x803052ACu: goto label_803052AC;
    case 0x803052FCu: goto label_803052FC;
    case 0x80305310u: goto label_80305310;
    case 0x80305320u: goto label_80305320;
    case 0x80305330u: goto label_80305330;
    case 0x80305340u: goto label_80305340;
    case 0x80305350u: goto label_80305350;
    case 0x80305360u: goto label_80305360;
    case 0x803053ECu: goto label_803053EC;
    case 0x80305474u: goto label_80305474;
    case 0x80305484u: goto label_80305484;
    case 0x803054F8u: goto label_803054F8;
    case 0x80305560u: goto label_80305560;
    case 0x80305570u: goto label_80305570;
    case 0x80305608u: goto label_80305608;
    case 0x80305654u: goto label_80305654;
    case 0x80305694u: goto label_80305694;
    case 0x803056A4u: goto label_803056A4;
    case 0x803056B8u: goto label_803056B8;
    case 0x803056E8u: goto label_803056E8;
    case 0x80305724u: goto label_80305724;
    case 0x80305738u: goto label_80305738;
    case 0x80305748u: goto label_80305748;
    case 0x80305750u: goto label_80305750;
    case 0x8030576Cu: goto label_8030576C;
    case 0x80305798u: goto label_80305798;
    case 0x803057ACu: goto label_803057AC;
    case 0x803057D4u: goto label_803057D4;
    case 0x803057E8u: goto label_803057E8;
    case 0x803057FCu: goto label_803057FC;
    case 0x80305820u: goto label_80305820;
    case 0x80305834u: goto label_80305834;
    case 0x8030586Cu: goto label_8030586C;
    case 0x8030587Cu: goto label_8030587C;
    case 0x80305890u: goto label_80305890;
    case 0x803058C8u: goto label_803058C8;
    case 0x803058DCu: goto label_803058DC;
    case 0x803058F0u: goto label_803058F0;
    case 0x80305914u: goto label_80305914;
    case 0x80305928u: goto label_80305928;
    case 0x80305960u: goto label_80305960;
    case 0x8030597Cu: goto label_8030597C;
    case 0x80305998u: goto label_80305998;
    case 0x803059B0u: goto label_803059B0;
    case 0x803059B8u: goto label_803059B8;
    case 0x803059D8u: goto label_803059D8;
    case 0x80305A14u: goto label_80305A14;
    case 0x80305A34u: goto label_80305A34;
    case 0x80305A44u: goto label_80305A44;
    case 0x80305A54u: goto label_80305A54;
    case 0x80305A6Cu: goto label_80305A6C;
    case 0x80305A78u: goto label_80305A78;
    case 0x80305AB4u: goto label_80305AB4;
    case 0x80305AC8u: goto label_80305AC8;
    case 0x80305B18u: goto label_80305B18;
    case 0x80305B4Cu: goto label_80305B4C;
    case 0x80305B74u: goto label_80305B74;
    case 0x80305B80u: goto label_80305B80;
    case 0x80305BB4u: goto label_80305BB4;
    case 0x80305C2Cu: goto label_80305C2C;
    case 0x80305C38u: goto label_80305C38;
    case 0x80305C44u: goto label_80305C44;
    case 0x80305C98u: goto label_80305C98;
    case 0x80305CB0u: goto label_80305CB0;
    case 0x80305CBCu: goto label_80305CBC;
    case 0x80305CF0u: goto label_80305CF0;
    case 0x80305D04u: goto label_80305D04;
    case 0x80305D0Cu: goto label_80305D0C;
    case 0x80305D18u: goto label_80305D18;
    case 0x80305D24u: goto label_80305D24;
    case 0x80305D3Cu: goto label_80305D3C;
    case 0x80305D54u: goto label_80305D54;
    case 0x80305D70u: goto label_80305D70;
    case 0x80305D98u: goto label_80305D98;
    case 0x80305DA4u: goto label_80305DA4;
    case 0x80305DC0u: goto label_80305DC0;
    case 0x80305DE8u: goto label_80305DE8;
    case 0x80305DF4u: goto label_80305DF4;
    case 0x80305E10u: goto label_80305E10;
    case 0x80305E34u: goto label_80305E34;
    case 0x80305E40u: goto label_80305E40;
    case 0x80305E48u: goto label_80305E48;
    case 0x80305E7Cu: goto label_80305E7C;
    case 0x80305E8Cu: goto label_80305E8C;
    case 0x80305EACu: goto label_80305EAC;
    case 0x80305EBCu: goto label_80305EBC;
    case 0x80305F04u: goto label_80305F04;
    case 0x80305F18u: goto label_80305F18;
    case 0x80305F70u: goto label_80305F70;
    case 0x80305F94u: goto label_80305F94;
    case 0x80305FA4u: goto label_80305FA4;
    case 0x80305FECu: goto label_80305FEC;
    case 0x80306008u: goto label_80306008;
    case 0x8030601Cu: goto label_8030601C;
    case 0x80306044u: goto label_80306044;
    case 0x8030605Cu: goto label_8030605C;
    case 0x80306070u: goto label_80306070;
    case 0x80306084u: goto label_80306084;
    case 0x8030609Cu: goto label_8030609C;
    case 0x803060B0u: goto label_803060B0;
    case 0x803060B8u: goto label_803060B8;
    case 0x803060F4u: goto label_803060F4;
    case 0x80306110u: goto label_80306110;
    case 0x8030611Cu: goto label_8030611C;
    case 0x80306120u: goto label_80306120;
    case 0x80306130u: goto label_80306130;
    case 0x8030613Cu: goto label_8030613C;
    case 0x8030614Cu: goto label_8030614C;
    case 0x80306188u: goto label_80306188;
    case 0x803061B0u: goto label_803061B0;
    case 0x803061C4u: goto label_803061C4;
    case 0x803061D8u: goto label_803061D8;
    case 0x803061ECu: goto label_803061EC;
    case 0x80306200u: goto label_80306200;
    case 0x80306214u: goto label_80306214;
    case 0x80306228u: goto label_80306228;
    case 0x8030623Cu: goto label_8030623C;
    case 0x80306250u: goto label_80306250;
    case 0x80306258u: goto label_80306258;
    case 0x80306268u: goto label_80306268;
    case 0x80306274u: goto label_80306274;
    case 0x80306280u: goto label_80306280;
    case 0x80306294u: goto label_80306294;
    case 0x803062A4u: goto label_803062A4;
    case 0x803062C4u: goto label_803062C4;
    case 0x803062D0u: goto label_803062D0;
    case 0x803062DCu: goto label_803062DC;
    case 0x803062E8u: goto label_803062E8;
    case 0x803062F8u: goto label_803062F8;
    case 0x80306304u: goto label_80306304;
    case 0x8030631Cu: goto label_8030631C;
    case 0x80306338u: goto label_80306338;
    case 0x80306344u: goto label_80306344;
    case 0x8030634Cu: goto label_8030634C;
    case 0x80306358u: goto label_80306358;
    case 0x80306380u: goto label_80306380;
    case 0x80306398u: goto label_80306398;
    case 0x803063FCu: goto label_803063FC;
    case 0x80306408u: goto label_80306408;
    case 0x80306418u: goto label_80306418;
    case 0x80306464u: goto label_80306464;
    case 0x80306470u: goto label_80306470;
    case 0x80306480u: goto label_80306480;
    case 0x803064C0u: goto label_803064C0;
    case 0x80306500u: goto label_80306500;
    case 0x80306588u: goto label_80306588;
    case 0x80306590u: goto label_80306590;
    case 0x803065A4u: goto label_803065A4;
    case 0x803065E4u: goto label_803065E4;
    case 0x80306600u: goto label_80306600;
    case 0x80306618u: goto label_80306618;
    case 0x80306624u: goto label_80306624;
    case 0x8030663Cu: goto label_8030663C;
    case 0x80306644u: goto label_80306644;
    case 0x8030666Cu: goto label_8030666C;
    case 0x80306684u: goto label_80306684;
    case 0x80306690u: goto label_80306690;
    case 0x803066A4u: goto label_803066A4;
    case 0x803066B0u: goto label_803066B0;
    case 0x803066C4u: goto label_803066C4;
    case 0x80306710u: goto label_80306710;
    case 0x8030671Cu: goto label_8030671C;
    case 0x8030672Cu: goto label_8030672C;
    case 0x80306760u: goto label_80306760;
    case 0x80306784u: goto label_80306784;
    case 0x8030679Cu: goto label_8030679C;
    case 0x803067B4u: goto label_803067B4;
    case 0x8030684Cu: goto label_8030684C;
    case 0x80306888u: goto label_80306888;
    case 0x803068F0u: goto label_803068F0;
    case 0x803068F8u: goto label_803068F8;
    case 0x80306900u: goto label_80306900;
    case 0x80306908u: goto label_80306908;
    case 0x80306910u: goto label_80306910;
    case 0x8030694Cu: goto label_8030694C;
    case 0x8030696Cu: goto label_8030696C;
    case 0x803069ACu: goto label_803069AC;
    case 0x803069CCu: goto label_803069CC;
    case 0x80306A0Cu: goto label_80306A0C;
    case 0x80306A2Cu: goto label_80306A2C;
    case 0x80306AB0u: goto label_80306AB0;
    case 0x80306ABCu: goto label_80306ABC;
    case 0x80306AC8u: goto label_80306AC8;
    case 0x80306AD8u: goto label_80306AD8;
    case 0x80306B18u: goto label_80306B18;
    case 0x80306B40u: goto label_80306B40;
    case 0x80306B84u: goto label_80306B84;
    case 0x80306BD0u: goto label_80306BD0;
    case 0x80306BDCu: goto label_80306BDC;
    case 0x80306C50u: goto label_80306C50;
    case 0x80306C68u: goto label_80306C68;
    case 0x80306C7Cu: goto label_80306C7C;
    case 0x80306C88u: goto label_80306C88;
    case 0x80306C90u: goto label_80306C90;
    case 0x80306CBCu: goto label_80306CBC;
    case 0x80306CCCu: goto label_80306CCC;
    case 0x80306CF8u: goto label_80306CF8;
    case 0x80306D00u: goto label_80306D00;
    case 0x80306D14u: goto label_80306D14;
    case 0x80306D4Cu: goto label_80306D4C;
    case 0x80306D78u: goto label_80306D78;
    case 0x80306D88u: goto label_80306D88;
    case 0x80306DA4u: goto label_80306DA4;
    case 0x80306DACu: goto label_80306DAC;
    case 0x80306DB8u: goto label_80306DB8;
    case 0x80306DD0u: goto label_80306DD0;
    case 0x80306DE4u: goto label_80306DE4;
    case 0x80306DF4u: goto label_80306DF4;
    case 0x80306E04u: goto label_80306E04;
    case 0x80306E3Cu: goto label_80306E3C;
    case 0x80306E4Cu: goto label_80306E4C;
    case 0x80306E58u: goto label_80306E58;
    case 0x80306E74u: goto label_80306E74;
    case 0x80306E94u: goto label_80306E94;
    case 0x80306ED8u: goto label_80306ED8;
    case 0x80306EDCu: goto label_80306EDC;
    case 0x80306F10u: goto label_80306F10;
    case 0x80306F18u: goto label_80306F18;
    case 0x80306F40u: goto label_80306F40;
    case 0x80306F54u: goto label_80306F54;
    case 0x80306F74u: goto label_80306F74;
    case 0x80306F94u: goto label_80306F94;
    case 0x80306FA4u: goto label_80306FA4;
    case 0x80306FB0u: goto label_80306FB0;
    case 0x80306FD0u: goto label_80306FD0;
    case 0x80306FF0u: goto label_80306FF0;
    case 0x80307004u: goto label_80307004;
    case 0x8030701Cu: goto label_8030701C;
    case 0x8030702Cu: goto label_8030702C;
    case 0x80307044u: goto label_80307044;
    case 0x803070B8u: goto label_803070B8;
    case 0x803070C4u: goto label_803070C4;
    case 0x803070E0u: goto label_803070E0;
    case 0x803070ECu: goto label_803070EC;
    case 0x80307110u: goto label_80307110;
    case 0x80307114u: goto label_80307114;
    case 0x80307134u: goto label_80307134;
    case 0x8030715Cu: goto label_8030715C;
    case 0x8030717Cu: goto label_8030717C;
    case 0x80307190u: goto label_80307190;
    case 0x803071A8u: goto label_803071A8;
    default: return;
    }
}

