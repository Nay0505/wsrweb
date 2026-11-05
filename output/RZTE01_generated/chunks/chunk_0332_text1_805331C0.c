// DolRecomp output
#include "../RZTE01.h"

static void loop_805343DC(CPUState* ctx) {
label_805343DC:
    ctx->downcount -= 26;
    ctx->pc = 0x805343DCu;
    // 805343DC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 805343E0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x805343E4u;
    // 805343E4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805343E8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805343ECu;
    // 805343EC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805343F0u;
    // 805343F0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805343F4u;
    // 805343F4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805343F8u;
    // 805343F8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805343FCu;
    // 805343FC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80534400u;
    // 80534400: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80534404u;
    // 80534404: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80534408: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8053440Cu;
    // 8053440C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80534410u;
    // 80534410: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80534414u;
    // 80534414: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80534418u;
    // 80534418: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8053441Cu;
    // 8053441C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80534420u;
    // 80534420: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80534424u;
    // 80534424: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80534428: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8053442Cu;
    // 8053442C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80534430u;
    // 80534430: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80534434: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80534438u;
    // 80534438: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8053443Cu;
    // 8053443C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80534440u;
    // 80534440: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80534444u;
    // 80534444: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80534448: cmpw    r7, r0
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

    // 8053444C: bc    12, 0, 0x805343DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805343DCu;
                return;
            }
            goto label_805343DC;
        }
    }

    ctx->pc = 0x80534450u;
}

static void loop_8053630C(CPUState* ctx) {
label_8053630C:
    ctx->downcount -= 5;
    // 8053630C: add   r4, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 80536310: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x80536314u;
    // 80536314: stw     r5, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x80536318u;
    // 80536318: stw     r5, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8053631C: bc    16, 0, 0x8053630C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053630Cu;
                return;
            }
            goto label_8053630C;
        }
    }

    ctx->pc = 0x80536320u;
}

static void loop_805363E4(CPUState* ctx) {
label_805363E4:
    ctx->downcount -= 4;
    // 805363E4: add   r4, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 805363E8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x805363ECu;
    // 805363EC: stw     r5, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 805363F0: bc    16, 0, 0x805363E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805363E4u;
                return;
            }
            goto label_805363E4;
        }
    }

    ctx->pc = 0x805363F4u;
}

static void loop_805365A8(CPUState* ctx) {
label_805365A8:
    ctx->downcount -= 26;
    ctx->pc = 0x805365A8u;
    // 805365A8: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 805365AC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x805365B0u;
    // 805365B0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805365B4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805365B8u;
    // 805365B8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365BCu;
    // 805365BC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805365C0u;
    // 805365C0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805365C4u;
    // 805365C4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365C8u;
    // 805365C8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805365CCu;
    // 805365CC: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365D0u;
    // 805365D0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805365D4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805365D8u;
    // 805365D8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365DCu;
    // 805365DC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805365E0u;
    // 805365E0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805365E4u;
    // 805365E4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365E8u;
    // 805365E8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805365ECu;
    // 805365EC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365F0u;
    // 805365F0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805365F4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805365F8u;
    // 805365F8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805365FCu;
    // 805365FC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80536600: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80536604u;
    // 80536604: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80536608u;
    // 80536608: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8053660Cu;
    // 8053660C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80536610u;
    // 80536610: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80536614: cmpw    r7, r0
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

    // 80536618: bc    12, 0, 0x805365A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805365A8u;
                return;
            }
            goto label_805365A8;
        }
    }

    ctx->pc = 0x8053661Cu;
}

void func_805331C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x805331C0u: goto label_805331C0;
    case 0x805331C4u: goto label_805331C4;
    case 0x805331C8u: goto label_805331C8;
    case 0x805331CCu: goto label_805331CC;
    case 0x805331D0u: goto label_805331D0;
    case 0x805331D4u: goto label_805331D4;
    case 0x805331D8u: goto label_805331D8;
    case 0x805331DCu: goto label_805331DC;
    case 0x805331E0u: goto label_805331E0;
    case 0x805331E4u: goto label_805331E4;
    case 0x805331E8u: goto label_805331E8;
    case 0x805331ECu: goto label_805331EC;
    case 0x805331F0u: goto label_805331F0;
    case 0x805331F4u: goto label_805331F4;
    case 0x805331F8u: goto label_805331F8;
    case 0x805331FCu: goto label_805331FC;
    case 0x80533200u: goto label_80533200;
    case 0x80533204u: goto label_80533204;
    case 0x80533208u: goto label_80533208;
    case 0x8053320Cu: goto label_8053320C;
    case 0x80533210u: goto label_80533210;
    case 0x80533214u: goto label_80533214;
    case 0x80533218u: goto label_80533218;
    case 0x8053321Cu: goto label_8053321C;
    case 0x80533220u: goto label_80533220;
    case 0x80533224u: goto label_80533224;
    case 0x80533228u: goto label_80533228;
    case 0x8053322Cu: goto label_8053322C;
    case 0x80533230u: goto label_80533230;
    case 0x80533234u: goto label_80533234;
    case 0x80533238u: goto label_80533238;
    case 0x8053323Cu: goto label_8053323C;
    case 0x80533240u: goto label_80533240;
    case 0x80533244u: goto label_80533244;
    case 0x80533248u: goto label_80533248;
    case 0x8053324Cu: goto label_8053324C;
    case 0x80533250u: goto label_80533250;
    case 0x80533254u: goto label_80533254;
    case 0x80533258u: goto label_80533258;
    case 0x8053325Cu: goto label_8053325C;
    case 0x80533260u: goto label_80533260;
    case 0x80533264u: goto label_80533264;
    case 0x80533268u: goto label_80533268;
    case 0x8053326Cu: goto label_8053326C;
    case 0x80533270u: goto label_80533270;
    case 0x80533274u: goto label_80533274;
    case 0x80533278u: goto label_80533278;
    case 0x8053327Cu: goto label_8053327C;
    case 0x80533280u: goto label_80533280;
    case 0x80533284u: goto label_80533284;
    case 0x80533288u: goto label_80533288;
    case 0x8053328Cu: goto label_8053328C;
    case 0x80533290u: goto label_80533290;
    case 0x80533294u: goto label_80533294;
    case 0x80533298u: goto label_80533298;
    case 0x8053329Cu: goto label_8053329C;
    case 0x805332A0u: goto label_805332A0;
    case 0x805332A4u: goto label_805332A4;
    case 0x805332A8u: goto label_805332A8;
    case 0x805332ACu: goto label_805332AC;
    case 0x805332B0u: goto label_805332B0;
    case 0x805332B4u: goto label_805332B4;
    case 0x805332B8u: goto label_805332B8;
    case 0x805332BCu: goto label_805332BC;
    case 0x805332C0u: goto label_805332C0;
    case 0x805332C4u: goto label_805332C4;
    case 0x805332C8u: goto label_805332C8;
    case 0x805332CCu: goto label_805332CC;
    case 0x805332D0u: goto label_805332D0;
    case 0x805332D4u: goto label_805332D4;
    case 0x805332D8u: goto label_805332D8;
    case 0x805332DCu: goto label_805332DC;
    case 0x805332E0u: goto label_805332E0;
    case 0x805332E4u: goto label_805332E4;
    case 0x805332E8u: goto label_805332E8;
    case 0x805332ECu: goto label_805332EC;
    case 0x805332F0u: goto label_805332F0;
    case 0x805332F4u: goto label_805332F4;
    case 0x805332F8u: goto label_805332F8;
    case 0x805332FCu: goto label_805332FC;
    case 0x80533300u: goto label_80533300;
    case 0x80533304u: goto label_80533304;
    case 0x80533308u: goto label_80533308;
    case 0x8053330Cu: goto label_8053330C;
    case 0x80533310u: goto label_80533310;
    case 0x80533314u: goto label_80533314;
    case 0x80533318u: goto label_80533318;
    case 0x8053331Cu: goto label_8053331C;
    case 0x80533320u: goto label_80533320;
    case 0x80533324u: goto label_80533324;
    case 0x80533328u: goto label_80533328;
    case 0x8053332Cu: goto label_8053332C;
    case 0x80533330u: goto label_80533330;
    case 0x80533334u: goto label_80533334;
    case 0x80533338u: goto label_80533338;
    case 0x8053333Cu: goto label_8053333C;
    case 0x80533340u: goto label_80533340;
    case 0x80533344u: goto label_80533344;
    case 0x80533348u: goto label_80533348;
    case 0x8053334Cu: goto label_8053334C;
    case 0x80533350u: goto label_80533350;
    case 0x80533354u: goto label_80533354;
    case 0x80533358u: goto label_80533358;
    case 0x8053335Cu: goto label_8053335C;
    case 0x80533360u: goto label_80533360;
    case 0x80533364u: goto label_80533364;
    case 0x80533368u: goto label_80533368;
    case 0x8053336Cu: goto label_8053336C;
    case 0x80533370u: goto label_80533370;
    case 0x80533374u: goto label_80533374;
    case 0x80533378u: goto label_80533378;
    case 0x8053337Cu: goto label_8053337C;
    case 0x80533380u: goto label_80533380;
    case 0x80533384u: goto label_80533384;
    case 0x80533388u: goto label_80533388;
    case 0x8053338Cu: goto label_8053338C;
    case 0x80533390u: goto label_80533390;
    case 0x80533394u: goto label_80533394;
    case 0x80533398u: goto label_80533398;
    case 0x8053339Cu: goto label_8053339C;
    case 0x805333A0u: goto label_805333A0;
    case 0x805333A4u: goto label_805333A4;
    case 0x805333A8u: goto label_805333A8;
    case 0x805333ACu: goto label_805333AC;
    case 0x805333B0u: goto label_805333B0;
    case 0x805333B4u: goto label_805333B4;
    case 0x805333B8u: goto label_805333B8;
    case 0x805333BCu: goto label_805333BC;
    case 0x805333C0u: goto label_805333C0;
    case 0x805333C4u: goto label_805333C4;
    case 0x805333C8u: goto label_805333C8;
    case 0x805333CCu: goto label_805333CC;
    case 0x805333D0u: goto label_805333D0;
    case 0x805333D4u: goto label_805333D4;
    case 0x805333D8u: goto label_805333D8;
    case 0x805333DCu: goto label_805333DC;
    case 0x805333E0u: goto label_805333E0;
    case 0x805333E4u: goto label_805333E4;
    case 0x805333E8u: goto label_805333E8;
    case 0x805333ECu: goto label_805333EC;
    case 0x805333F0u: goto label_805333F0;
    case 0x805333F4u: goto label_805333F4;
    case 0x805333F8u: goto label_805333F8;
    case 0x805333FCu: goto label_805333FC;
    case 0x80533400u: goto label_80533400;
    case 0x80533404u: goto label_80533404;
    case 0x80533408u: goto label_80533408;
    case 0x8053340Cu: goto label_8053340C;
    case 0x80533410u: goto label_80533410;
    case 0x80533414u: goto label_80533414;
    case 0x80533418u: goto label_80533418;
    case 0x8053341Cu: goto label_8053341C;
    case 0x80533420u: goto label_80533420;
    case 0x80533424u: goto label_80533424;
    case 0x80533428u: goto label_80533428;
    case 0x8053342Cu: goto label_8053342C;
    case 0x80533430u: goto label_80533430;
    case 0x80533434u: goto label_80533434;
    case 0x80533438u: goto label_80533438;
    case 0x8053343Cu: goto label_8053343C;
    case 0x80533440u: goto label_80533440;
    case 0x80533444u: goto label_80533444;
    case 0x80533448u: goto label_80533448;
    case 0x8053344Cu: goto label_8053344C;
    case 0x80533450u: goto label_80533450;
    case 0x80533454u: goto label_80533454;
    case 0x80533458u: goto label_80533458;
    case 0x8053345Cu: goto label_8053345C;
    case 0x80533460u: goto label_80533460;
    case 0x80533464u: goto label_80533464;
    case 0x80533468u: goto label_80533468;
    case 0x8053346Cu: goto label_8053346C;
    case 0x80533470u: goto label_80533470;
    case 0x80533474u: goto label_80533474;
    case 0x80533478u: goto label_80533478;
    case 0x8053347Cu: goto label_8053347C;
    case 0x80533480u: goto label_80533480;
    case 0x80533484u: goto label_80533484;
    case 0x80533488u: goto label_80533488;
    case 0x8053348Cu: goto label_8053348C;
    case 0x80533490u: goto label_80533490;
    case 0x80533494u: goto label_80533494;
    case 0x80533498u: goto label_80533498;
    case 0x8053349Cu: goto label_8053349C;
    case 0x805334A0u: goto label_805334A0;
    case 0x805334A4u: goto label_805334A4;
    case 0x805334A8u: goto label_805334A8;
    case 0x805334ACu: goto label_805334AC;
    case 0x805334B0u: goto label_805334B0;
    case 0x805334B4u: goto label_805334B4;
    case 0x805334B8u: goto label_805334B8;
    case 0x805334BCu: goto label_805334BC;
    case 0x805334C0u: goto label_805334C0;
    case 0x805334C4u: goto label_805334C4;
    case 0x805334C8u: goto label_805334C8;
    case 0x805334CCu: goto label_805334CC;
    case 0x805334D0u: goto label_805334D0;
    case 0x805334D4u: goto label_805334D4;
    case 0x805334D8u: goto label_805334D8;
    case 0x805334DCu: goto label_805334DC;
    case 0x805334E0u: goto label_805334E0;
    case 0x805334E4u: goto label_805334E4;
    case 0x805334E8u: goto label_805334E8;
    case 0x805334ECu: goto label_805334EC;
    case 0x805334F0u: goto label_805334F0;
    case 0x805334F4u: goto label_805334F4;
    case 0x805334F8u: goto label_805334F8;
    case 0x805334FCu: goto label_805334FC;
    case 0x80533500u: goto label_80533500;
    case 0x80533504u: goto label_80533504;
    case 0x80533508u: goto label_80533508;
    case 0x8053350Cu: goto label_8053350C;
    case 0x80533510u: goto label_80533510;
    case 0x80533514u: goto label_80533514;
    case 0x80533518u: goto label_80533518;
    case 0x8053351Cu: goto label_8053351C;
    case 0x80533520u: goto label_80533520;
    case 0x80533524u: goto label_80533524;
    case 0x80533528u: goto label_80533528;
    case 0x8053352Cu: goto label_8053352C;
    case 0x80533530u: goto label_80533530;
    case 0x80533534u: goto label_80533534;
    case 0x80533538u: goto label_80533538;
    case 0x8053353Cu: goto label_8053353C;
    case 0x80533540u: goto label_80533540;
    case 0x80533544u: goto label_80533544;
    case 0x80533548u: goto label_80533548;
    case 0x8053354Cu: goto label_8053354C;
    case 0x80533550u: goto label_80533550;
    case 0x80533554u: goto label_80533554;
    case 0x80533558u: goto label_80533558;
    case 0x8053355Cu: goto label_8053355C;
    case 0x80533560u: goto label_80533560;
    case 0x80533564u: goto label_80533564;
    case 0x80533568u: goto label_80533568;
    case 0x8053356Cu: goto label_8053356C;
    case 0x80533570u: goto label_80533570;
    case 0x80533574u: goto label_80533574;
    case 0x80533578u: goto label_80533578;
    case 0x8053357Cu: goto label_8053357C;
    case 0x80533580u: goto label_80533580;
    case 0x80533584u: goto label_80533584;
    case 0x80533588u: goto label_80533588;
    case 0x8053358Cu: goto label_8053358C;
    case 0x80533590u: goto label_80533590;
    case 0x80533594u: goto label_80533594;
    case 0x80533598u: goto label_80533598;
    case 0x8053359Cu: goto label_8053359C;
    case 0x805335A0u: goto label_805335A0;
    case 0x805335A4u: goto label_805335A4;
    case 0x805335A8u: goto label_805335A8;
    case 0x805335ACu: goto label_805335AC;
    case 0x805335B0u: goto label_805335B0;
    case 0x805335B4u: goto label_805335B4;
    case 0x805335B8u: goto label_805335B8;
    case 0x805335BCu: goto label_805335BC;
    case 0x805335C0u: goto label_805335C0;
    case 0x805335C4u: goto label_805335C4;
    case 0x805335C8u: goto label_805335C8;
    case 0x805335CCu: goto label_805335CC;
    case 0x805335D0u: goto label_805335D0;
    case 0x805335D4u: goto label_805335D4;
    case 0x805335D8u: goto label_805335D8;
    case 0x805335DCu: goto label_805335DC;
    case 0x805335E0u: goto label_805335E0;
    case 0x805335E4u: goto label_805335E4;
    case 0x805335E8u: goto label_805335E8;
    case 0x805335ECu: goto label_805335EC;
    case 0x805335F0u: goto label_805335F0;
    case 0x805335F4u: goto label_805335F4;
    case 0x805335F8u: goto label_805335F8;
    case 0x805335FCu: goto label_805335FC;
    case 0x80533600u: goto label_80533600;
    case 0x80533604u: goto label_80533604;
    case 0x80533608u: goto label_80533608;
    case 0x8053360Cu: goto label_8053360C;
    case 0x80533610u: goto label_80533610;
    case 0x80533614u: goto label_80533614;
    case 0x80533618u: goto label_80533618;
    case 0x8053361Cu: goto label_8053361C;
    case 0x80533620u: goto label_80533620;
    case 0x80533624u: goto label_80533624;
    case 0x80533628u: goto label_80533628;
    case 0x8053362Cu: goto label_8053362C;
    case 0x80533630u: goto label_80533630;
    case 0x80533634u: goto label_80533634;
    case 0x80533638u: goto label_80533638;
    case 0x8053363Cu: goto label_8053363C;
    case 0x80533640u: goto label_80533640;
    case 0x80533644u: goto label_80533644;
    case 0x80533648u: goto label_80533648;
    case 0x8053364Cu: goto label_8053364C;
    case 0x80533650u: goto label_80533650;
    case 0x80533654u: goto label_80533654;
    case 0x80533658u: goto label_80533658;
    case 0x8053365Cu: goto label_8053365C;
    case 0x80533660u: goto label_80533660;
    case 0x80533664u: goto label_80533664;
    case 0x80533668u: goto label_80533668;
    case 0x8053366Cu: goto label_8053366C;
    case 0x80533670u: goto label_80533670;
    case 0x80533674u: goto label_80533674;
    case 0x80533678u: goto label_80533678;
    case 0x8053367Cu: goto label_8053367C;
    case 0x80533680u: goto label_80533680;
    case 0x80533684u: goto label_80533684;
    case 0x80533688u: goto label_80533688;
    case 0x8053368Cu: goto label_8053368C;
    case 0x80533690u: goto label_80533690;
    case 0x80533694u: goto label_80533694;
    case 0x80533698u: goto label_80533698;
    case 0x8053369Cu: goto label_8053369C;
    case 0x805336A0u: goto label_805336A0;
    case 0x805336A4u: goto label_805336A4;
    case 0x805336A8u: goto label_805336A8;
    case 0x805336ACu: goto label_805336AC;
    case 0x805336B0u: goto label_805336B0;
    case 0x805336B4u: goto label_805336B4;
    case 0x805336B8u: goto label_805336B8;
    case 0x805336BCu: goto label_805336BC;
    case 0x805336C0u: goto label_805336C0;
    case 0x805336C4u: goto label_805336C4;
    case 0x805336C8u: goto label_805336C8;
    case 0x805336CCu: goto label_805336CC;
    case 0x805336D0u: goto label_805336D0;
    case 0x805336D4u: goto label_805336D4;
    case 0x805336D8u: goto label_805336D8;
    case 0x805336DCu: goto label_805336DC;
    case 0x805336E0u: goto label_805336E0;
    case 0x805336E4u: goto label_805336E4;
    case 0x805336E8u: goto label_805336E8;
    case 0x805336ECu: goto label_805336EC;
    case 0x805336F0u: goto label_805336F0;
    case 0x805336F4u: goto label_805336F4;
    case 0x805336F8u: goto label_805336F8;
    case 0x805336FCu: goto label_805336FC;
    case 0x80533700u: goto label_80533700;
    case 0x80533704u: goto label_80533704;
    case 0x80533708u: goto label_80533708;
    case 0x8053370Cu: goto label_8053370C;
    case 0x80533710u: goto label_80533710;
    case 0x80533714u: goto label_80533714;
    case 0x80533718u: goto label_80533718;
    case 0x8053371Cu: goto label_8053371C;
    case 0x80533720u: goto label_80533720;
    case 0x80533724u: goto label_80533724;
    case 0x80533728u: goto label_80533728;
    case 0x8053372Cu: goto label_8053372C;
    case 0x80533730u: goto label_80533730;
    case 0x80533734u: goto label_80533734;
    case 0x80533738u: goto label_80533738;
    case 0x8053373Cu: goto label_8053373C;
    case 0x80533740u: goto label_80533740;
    case 0x80533744u: goto label_80533744;
    case 0x80533748u: goto label_80533748;
    case 0x8053374Cu: goto label_8053374C;
    case 0x80533750u: goto label_80533750;
    case 0x80533754u: goto label_80533754;
    case 0x80533758u: goto label_80533758;
    case 0x8053375Cu: goto label_8053375C;
    case 0x80533760u: goto label_80533760;
    case 0x80533764u: goto label_80533764;
    case 0x80533768u: goto label_80533768;
    case 0x8053376Cu: goto label_8053376C;
    case 0x80533770u: goto label_80533770;
    case 0x80533774u: goto label_80533774;
    case 0x80533778u: goto label_80533778;
    case 0x8053377Cu: goto label_8053377C;
    case 0x80533780u: goto label_80533780;
    case 0x80533784u: goto label_80533784;
    case 0x80533788u: goto label_80533788;
    case 0x8053378Cu: goto label_8053378C;
    case 0x80533790u: goto label_80533790;
    case 0x80533794u: goto label_80533794;
    case 0x80533798u: goto label_80533798;
    case 0x8053379Cu: goto label_8053379C;
    case 0x805337A0u: goto label_805337A0;
    case 0x805337A4u: goto label_805337A4;
    case 0x805337A8u: goto label_805337A8;
    case 0x805337ACu: goto label_805337AC;
    case 0x805337B0u: goto label_805337B0;
    case 0x805337B4u: goto label_805337B4;
    case 0x805337B8u: goto label_805337B8;
    case 0x805337BCu: goto label_805337BC;
    case 0x805337C0u: goto label_805337C0;
    case 0x805337C4u: goto label_805337C4;
    case 0x805337C8u: goto label_805337C8;
    case 0x805337CCu: goto label_805337CC;
    case 0x805337D0u: goto label_805337D0;
    case 0x805337D4u: goto label_805337D4;
    case 0x805337D8u: goto label_805337D8;
    case 0x805337DCu: goto label_805337DC;
    case 0x805337E0u: goto label_805337E0;
    case 0x805337E4u: goto label_805337E4;
    case 0x805337E8u: goto label_805337E8;
    case 0x805337ECu: goto label_805337EC;
    case 0x805337F0u: goto label_805337F0;
    case 0x805337F4u: goto label_805337F4;
    case 0x805337F8u: goto label_805337F8;
    case 0x805337FCu: goto label_805337FC;
    case 0x80533800u: goto label_80533800;
    case 0x80533804u: goto label_80533804;
    case 0x80533808u: goto label_80533808;
    case 0x8053380Cu: goto label_8053380C;
    case 0x80533810u: goto label_80533810;
    case 0x80533814u: goto label_80533814;
    case 0x80533818u: goto label_80533818;
    case 0x8053381Cu: goto label_8053381C;
    case 0x80533820u: goto label_80533820;
    case 0x80533824u: goto label_80533824;
    case 0x80533828u: goto label_80533828;
    case 0x8053382Cu: goto label_8053382C;
    case 0x80533830u: goto label_80533830;
    case 0x80533834u: goto label_80533834;
    case 0x80533838u: goto label_80533838;
    case 0x8053383Cu: goto label_8053383C;
    case 0x80533840u: goto label_80533840;
    case 0x80533844u: goto label_80533844;
    case 0x80533848u: goto label_80533848;
    case 0x8053384Cu: goto label_8053384C;
    case 0x80533850u: goto label_80533850;
    case 0x80533854u: goto label_80533854;
    case 0x80533858u: goto label_80533858;
    case 0x8053385Cu: goto label_8053385C;
    case 0x80533860u: goto label_80533860;
    case 0x80533864u: goto label_80533864;
    case 0x80533868u: goto label_80533868;
    case 0x8053386Cu: goto label_8053386C;
    case 0x80533870u: goto label_80533870;
    case 0x80533874u: goto label_80533874;
    case 0x80533878u: goto label_80533878;
    case 0x8053387Cu: goto label_8053387C;
    case 0x80533880u: goto label_80533880;
    case 0x80533884u: goto label_80533884;
    case 0x80533888u: goto label_80533888;
    case 0x8053388Cu: goto label_8053388C;
    case 0x80533890u: goto label_80533890;
    case 0x80533894u: goto label_80533894;
    case 0x80533898u: goto label_80533898;
    case 0x8053389Cu: goto label_8053389C;
    case 0x805338A0u: goto label_805338A0;
    case 0x805338A4u: goto label_805338A4;
    case 0x805338A8u: goto label_805338A8;
    case 0x805338ACu: goto label_805338AC;
    case 0x805338B0u: goto label_805338B0;
    case 0x805338B4u: goto label_805338B4;
    case 0x805338B8u: goto label_805338B8;
    case 0x805338BCu: goto label_805338BC;
    case 0x805338C0u: goto label_805338C0;
    case 0x805338C4u: goto label_805338C4;
    case 0x805338C8u: goto label_805338C8;
    case 0x805338CCu: goto label_805338CC;
    case 0x805338D0u: goto label_805338D0;
    case 0x805338D4u: goto label_805338D4;
    case 0x805338D8u: goto label_805338D8;
    case 0x805338DCu: goto label_805338DC;
    case 0x805338E0u: goto label_805338E0;
    case 0x805338E4u: goto label_805338E4;
    case 0x805338E8u: goto label_805338E8;
    case 0x805338ECu: goto label_805338EC;
    case 0x805338F0u: goto label_805338F0;
    case 0x805338F4u: goto label_805338F4;
    case 0x805338F8u: goto label_805338F8;
    case 0x805338FCu: goto label_805338FC;
    case 0x80533900u: goto label_80533900;
    case 0x80533904u: goto label_80533904;
    case 0x80533908u: goto label_80533908;
    case 0x8053390Cu: goto label_8053390C;
    case 0x80533910u: goto label_80533910;
    case 0x80533914u: goto label_80533914;
    case 0x80533918u: goto label_80533918;
    case 0x8053391Cu: goto label_8053391C;
    case 0x80533920u: goto label_80533920;
    case 0x80533924u: goto label_80533924;
    case 0x80533928u: goto label_80533928;
    case 0x8053392Cu: goto label_8053392C;
    case 0x80533930u: goto label_80533930;
    case 0x80533934u: goto label_80533934;
    case 0x80533938u: goto label_80533938;
    case 0x8053393Cu: goto label_8053393C;
    case 0x80533940u: goto label_80533940;
    case 0x80533944u: goto label_80533944;
    case 0x80533948u: goto label_80533948;
    case 0x8053394Cu: goto label_8053394C;
    case 0x80533950u: goto label_80533950;
    case 0x80533954u: goto label_80533954;
    case 0x80533958u: goto label_80533958;
    case 0x8053395Cu: goto label_8053395C;
    case 0x80533960u: goto label_80533960;
    case 0x80533964u: goto label_80533964;
    case 0x80533968u: goto label_80533968;
    case 0x8053396Cu: goto label_8053396C;
    case 0x80533970u: goto label_80533970;
    case 0x80533974u: goto label_80533974;
    case 0x80533978u: goto label_80533978;
    case 0x8053397Cu: goto label_8053397C;
    case 0x80533980u: goto label_80533980;
    case 0x80533984u: goto label_80533984;
    case 0x80533988u: goto label_80533988;
    case 0x8053398Cu: goto label_8053398C;
    case 0x80533990u: goto label_80533990;
    case 0x80533994u: goto label_80533994;
    case 0x80533998u: goto label_80533998;
    case 0x8053399Cu: goto label_8053399C;
    case 0x805339A0u: goto label_805339A0;
    case 0x805339A4u: goto label_805339A4;
    case 0x805339A8u: goto label_805339A8;
    case 0x805339ACu: goto label_805339AC;
    case 0x805339B0u: goto label_805339B0;
    case 0x805339B4u: goto label_805339B4;
    case 0x805339B8u: goto label_805339B8;
    case 0x805339BCu: goto label_805339BC;
    case 0x805339C0u: goto label_805339C0;
    case 0x805339C4u: goto label_805339C4;
    case 0x805339C8u: goto label_805339C8;
    case 0x805339CCu: goto label_805339CC;
    case 0x805339D0u: goto label_805339D0;
    case 0x805339D4u: goto label_805339D4;
    case 0x805339D8u: goto label_805339D8;
    case 0x805339DCu: goto label_805339DC;
    case 0x805339E0u: goto label_805339E0;
    case 0x805339E4u: goto label_805339E4;
    case 0x805339E8u: goto label_805339E8;
    case 0x805339ECu: goto label_805339EC;
    case 0x805339F0u: goto label_805339F0;
    case 0x805339F4u: goto label_805339F4;
    case 0x805339F8u: goto label_805339F8;
    case 0x805339FCu: goto label_805339FC;
    case 0x80533A00u: goto label_80533A00;
    case 0x80533A04u: goto label_80533A04;
    case 0x80533A08u: goto label_80533A08;
    case 0x80533A0Cu: goto label_80533A0C;
    case 0x80533A10u: goto label_80533A10;
    case 0x80533A14u: goto label_80533A14;
    case 0x80533A18u: goto label_80533A18;
    case 0x80533A1Cu: goto label_80533A1C;
    case 0x80533A20u: goto label_80533A20;
    case 0x80533A24u: goto label_80533A24;
    case 0x80533A28u: goto label_80533A28;
    case 0x80533A2Cu: goto label_80533A2C;
    case 0x80533A30u: goto label_80533A30;
    case 0x80533A34u: goto label_80533A34;
    case 0x80533A38u: goto label_80533A38;
    case 0x80533A3Cu: goto label_80533A3C;
    case 0x80533A40u: goto label_80533A40;
    case 0x80533A44u: goto label_80533A44;
    case 0x80533A48u: goto label_80533A48;
    case 0x80533A4Cu: goto label_80533A4C;
    case 0x80533A50u: goto label_80533A50;
    case 0x80533A54u: goto label_80533A54;
    case 0x80533A58u: goto label_80533A58;
    case 0x80533A5Cu: goto label_80533A5C;
    case 0x80533A60u: goto label_80533A60;
    case 0x80533A64u: goto label_80533A64;
    case 0x80533A68u: goto label_80533A68;
    case 0x80533A6Cu: goto label_80533A6C;
    case 0x80533A70u: goto label_80533A70;
    case 0x80533A74u: goto label_80533A74;
    case 0x80533A78u: goto label_80533A78;
    case 0x80533A7Cu: goto label_80533A7C;
    case 0x80533A80u: goto label_80533A80;
    case 0x80533A84u: goto label_80533A84;
    case 0x80533A88u: goto label_80533A88;
    case 0x80533A8Cu: goto label_80533A8C;
    case 0x80533A90u: goto label_80533A90;
    case 0x80533A94u: goto label_80533A94;
    case 0x80533A98u: goto label_80533A98;
    case 0x80533A9Cu: goto label_80533A9C;
    case 0x80533AA0u: goto label_80533AA0;
    case 0x80533AA4u: goto label_80533AA4;
    case 0x80533AA8u: goto label_80533AA8;
    case 0x80533AACu: goto label_80533AAC;
    case 0x80533AB0u: goto label_80533AB0;
    case 0x80533AB4u: goto label_80533AB4;
    case 0x80533AB8u: goto label_80533AB8;
    case 0x80533ABCu: goto label_80533ABC;
    case 0x80533AC0u: goto label_80533AC0;
    case 0x80533AC4u: goto label_80533AC4;
    case 0x80533AC8u: goto label_80533AC8;
    case 0x80533ACCu: goto label_80533ACC;
    case 0x80533AD0u: goto label_80533AD0;
    case 0x80533AD4u: goto label_80533AD4;
    case 0x80533AD8u: goto label_80533AD8;
    case 0x80533ADCu: goto label_80533ADC;
    case 0x80533AE0u: goto label_80533AE0;
    case 0x80533AE4u: goto label_80533AE4;
    case 0x80533AE8u: goto label_80533AE8;
    case 0x80533AECu: goto label_80533AEC;
    case 0x80533AF0u: goto label_80533AF0;
    case 0x80533AF4u: goto label_80533AF4;
    case 0x80533AF8u: goto label_80533AF8;
    case 0x80533AFCu: goto label_80533AFC;
    case 0x80533B00u: goto label_80533B00;
    case 0x80533B04u: goto label_80533B04;
    case 0x80533B08u: goto label_80533B08;
    case 0x80533B0Cu: goto label_80533B0C;
    case 0x80533B10u: goto label_80533B10;
    case 0x80533B14u: goto label_80533B14;
    case 0x80533B18u: goto label_80533B18;
    case 0x80533B1Cu: goto label_80533B1C;
    case 0x80533B20u: goto label_80533B20;
    case 0x80533B24u: goto label_80533B24;
    case 0x80533B28u: goto label_80533B28;
    case 0x80533B2Cu: goto label_80533B2C;
    case 0x80533B30u: goto label_80533B30;
    case 0x80533B34u: goto label_80533B34;
    case 0x80533B38u: goto label_80533B38;
    case 0x80533B3Cu: goto label_80533B3C;
    case 0x80533B40u: goto label_80533B40;
    case 0x80533B44u: goto label_80533B44;
    case 0x80533B48u: goto label_80533B48;
    case 0x80533B4Cu: goto label_80533B4C;
    case 0x80533B50u: goto label_80533B50;
    case 0x80533B54u: goto label_80533B54;
    case 0x80533B58u: goto label_80533B58;
    case 0x80533B5Cu: goto label_80533B5C;
    case 0x80533B60u: goto label_80533B60;
    case 0x80533B64u: goto label_80533B64;
    case 0x80533B68u: goto label_80533B68;
    case 0x80533B6Cu: goto label_80533B6C;
    case 0x80533B70u: goto label_80533B70;
    case 0x80533B74u: goto label_80533B74;
    case 0x80533B78u: goto label_80533B78;
    case 0x80533B7Cu: goto label_80533B7C;
    case 0x80533B80u: goto label_80533B80;
    case 0x80533B84u: goto label_80533B84;
    case 0x80533B88u: goto label_80533B88;
    case 0x80533B8Cu: goto label_80533B8C;
    case 0x80533B90u: goto label_80533B90;
    case 0x80533B94u: goto label_80533B94;
    case 0x80533B98u: goto label_80533B98;
    case 0x80533B9Cu: goto label_80533B9C;
    case 0x80533BA0u: goto label_80533BA0;
    case 0x80533BA4u: goto label_80533BA4;
    case 0x80533BA8u: goto label_80533BA8;
    case 0x80533BACu: goto label_80533BAC;
    case 0x80533BB0u: goto label_80533BB0;
    case 0x80533BB4u: goto label_80533BB4;
    case 0x80533BB8u: goto label_80533BB8;
    case 0x80533BBCu: goto label_80533BBC;
    case 0x80533BC0u: goto label_80533BC0;
    case 0x80533BC4u: goto label_80533BC4;
    case 0x80533BC8u: goto label_80533BC8;
    case 0x80533BCCu: goto label_80533BCC;
    case 0x80533BD0u: goto label_80533BD0;
    case 0x80533BD4u: goto label_80533BD4;
    case 0x80533BD8u: goto label_80533BD8;
    case 0x80533BDCu: goto label_80533BDC;
    case 0x80533BE0u: goto label_80533BE0;
    case 0x80533BE4u: goto label_80533BE4;
    case 0x80533BE8u: goto label_80533BE8;
    case 0x80533BECu: goto label_80533BEC;
    case 0x80533BF0u: goto label_80533BF0;
    case 0x80533BF4u: goto label_80533BF4;
    case 0x80533BF8u: goto label_80533BF8;
    case 0x80533BFCu: goto label_80533BFC;
    case 0x80533C00u: goto label_80533C00;
    case 0x80533C04u: goto label_80533C04;
    case 0x80533C08u: goto label_80533C08;
    case 0x80533C0Cu: goto label_80533C0C;
    case 0x80533C10u: goto label_80533C10;
    case 0x80533C14u: goto label_80533C14;
    case 0x80533C18u: goto label_80533C18;
    case 0x80533C1Cu: goto label_80533C1C;
    case 0x80533C20u: goto label_80533C20;
    case 0x80533C24u: goto label_80533C24;
    case 0x80533C28u: goto label_80533C28;
    case 0x80533C2Cu: goto label_80533C2C;
    case 0x80533C30u: goto label_80533C30;
    case 0x80533C34u: goto label_80533C34;
    case 0x80533C38u: goto label_80533C38;
    case 0x80533C3Cu: goto label_80533C3C;
    case 0x80533C40u: goto label_80533C40;
    case 0x80533C44u: goto label_80533C44;
    case 0x80533C48u: goto label_80533C48;
    case 0x80533C4Cu: goto label_80533C4C;
    case 0x80533C50u: goto label_80533C50;
    case 0x80533C54u: goto label_80533C54;
    case 0x80533C58u: goto label_80533C58;
    case 0x80533C5Cu: goto label_80533C5C;
    case 0x80533C60u: goto label_80533C60;
    case 0x80533C64u: goto label_80533C64;
    case 0x80533C68u: goto label_80533C68;
    case 0x80533C6Cu: goto label_80533C6C;
    case 0x80533C70u: goto label_80533C70;
    case 0x80533C74u: goto label_80533C74;
    case 0x80533C78u: goto label_80533C78;
    case 0x80533C7Cu: goto label_80533C7C;
    case 0x80533C80u: goto label_80533C80;
    case 0x80533C84u: goto label_80533C84;
    case 0x80533C88u: goto label_80533C88;
    case 0x80533C8Cu: goto label_80533C8C;
    case 0x80533C90u: goto label_80533C90;
    case 0x80533C94u: goto label_80533C94;
    case 0x80533C98u: goto label_80533C98;
    case 0x80533C9Cu: goto label_80533C9C;
    case 0x80533CA0u: goto label_80533CA0;
    case 0x80533CA4u: goto label_80533CA4;
    case 0x80533CA8u: goto label_80533CA8;
    case 0x80533CACu: goto label_80533CAC;
    case 0x80533CB0u: goto label_80533CB0;
    case 0x80533CB4u: goto label_80533CB4;
    case 0x80533CB8u: goto label_80533CB8;
    case 0x80533CBCu: goto label_80533CBC;
    case 0x80533CC0u: goto label_80533CC0;
    case 0x80533CC4u: goto label_80533CC4;
    case 0x80533CC8u: goto label_80533CC8;
    case 0x80533CCCu: goto label_80533CCC;
    case 0x80533CD0u: goto label_80533CD0;
    case 0x80533CD4u: goto label_80533CD4;
    case 0x80533CD8u: goto label_80533CD8;
    case 0x80533CDCu: goto label_80533CDC;
    case 0x80533CE0u: goto label_80533CE0;
    case 0x80533CE4u: goto label_80533CE4;
    case 0x80533CE8u: goto label_80533CE8;
    case 0x80533CECu: goto label_80533CEC;
    case 0x80533CF0u: goto label_80533CF0;
    case 0x80533CF4u: goto label_80533CF4;
    case 0x80533CF8u: goto label_80533CF8;
    case 0x80533CFCu: goto label_80533CFC;
    case 0x80533D00u: goto label_80533D00;
    case 0x80533D04u: goto label_80533D04;
    case 0x80533D08u: goto label_80533D08;
    case 0x80533D0Cu: goto label_80533D0C;
    case 0x80533D10u: goto label_80533D10;
    case 0x80533D14u: goto label_80533D14;
    case 0x80533D18u: goto label_80533D18;
    case 0x80533D1Cu: goto label_80533D1C;
    case 0x80533D20u: goto label_80533D20;
    case 0x80533D24u: goto label_80533D24;
    case 0x80533D28u: goto label_80533D28;
    case 0x80533D2Cu: goto label_80533D2C;
    case 0x80533D30u: goto label_80533D30;
    case 0x80533D34u: goto label_80533D34;
    case 0x80533D38u: goto label_80533D38;
    case 0x80533D3Cu: goto label_80533D3C;
    case 0x80533D40u: goto label_80533D40;
    case 0x80533D44u: goto label_80533D44;
    case 0x80533D48u: goto label_80533D48;
    case 0x80533D4Cu: goto label_80533D4C;
    case 0x80533D50u: goto label_80533D50;
    case 0x80533D54u: goto label_80533D54;
    case 0x80533D58u: goto label_80533D58;
    case 0x80533D5Cu: goto label_80533D5C;
    case 0x80533D60u: goto label_80533D60;
    case 0x80533D64u: goto label_80533D64;
    case 0x80533D68u: goto label_80533D68;
    case 0x80533D6Cu: goto label_80533D6C;
    case 0x80533D70u: goto label_80533D70;
    case 0x80533D74u: goto label_80533D74;
    case 0x80533D78u: goto label_80533D78;
    case 0x80533D7Cu: goto label_80533D7C;
    case 0x80533D80u: goto label_80533D80;
    case 0x80533D84u: goto label_80533D84;
    case 0x80533D88u: goto label_80533D88;
    case 0x80533D8Cu: goto label_80533D8C;
    case 0x80533D90u: goto label_80533D90;
    case 0x80533D94u: goto label_80533D94;
    case 0x80533D98u: goto label_80533D98;
    case 0x80533D9Cu: goto label_80533D9C;
    case 0x80533DA0u: goto label_80533DA0;
    case 0x80533DA4u: goto label_80533DA4;
    case 0x80533DA8u: goto label_80533DA8;
    case 0x80533DACu: goto label_80533DAC;
    case 0x80533DB0u: goto label_80533DB0;
    case 0x80533DB4u: goto label_80533DB4;
    case 0x80533DB8u: goto label_80533DB8;
    case 0x80533DBCu: goto label_80533DBC;
    case 0x80533DC0u: goto label_80533DC0;
    case 0x80533DC4u: goto label_80533DC4;
    case 0x80533DC8u: goto label_80533DC8;
    case 0x80533DCCu: goto label_80533DCC;
    case 0x80533DD0u: goto label_80533DD0;
    case 0x80533DD4u: goto label_80533DD4;
    case 0x80533DD8u: goto label_80533DD8;
    case 0x80533DDCu: goto label_80533DDC;
    case 0x80533DE0u: goto label_80533DE0;
    case 0x80533DE4u: goto label_80533DE4;
    case 0x80533DE8u: goto label_80533DE8;
    case 0x80533DECu: goto label_80533DEC;
    case 0x80533DF0u: goto label_80533DF0;
    case 0x80533DF4u: goto label_80533DF4;
    case 0x80533DF8u: goto label_80533DF8;
    case 0x80533DFCu: goto label_80533DFC;
    case 0x80533E00u: goto label_80533E00;
    case 0x80533E04u: goto label_80533E04;
    case 0x80533E08u: goto label_80533E08;
    case 0x80533E0Cu: goto label_80533E0C;
    case 0x80533E10u: goto label_80533E10;
    case 0x80533E14u: goto label_80533E14;
    case 0x80533E18u: goto label_80533E18;
    case 0x80533E1Cu: goto label_80533E1C;
    case 0x80533E20u: goto label_80533E20;
    case 0x80533E24u: goto label_80533E24;
    case 0x80533E28u: goto label_80533E28;
    case 0x80533E2Cu: goto label_80533E2C;
    case 0x80533E30u: goto label_80533E30;
    case 0x80533E34u: goto label_80533E34;
    case 0x80533E38u: goto label_80533E38;
    case 0x80533E3Cu: goto label_80533E3C;
    case 0x80533E40u: goto label_80533E40;
    case 0x80533E44u: goto label_80533E44;
    case 0x80533E48u: goto label_80533E48;
    case 0x80533E4Cu: goto label_80533E4C;
    case 0x80533E50u: goto label_80533E50;
    case 0x80533E54u: goto label_80533E54;
    case 0x80533E58u: goto label_80533E58;
    case 0x80533E5Cu: goto label_80533E5C;
    case 0x80533E60u: goto label_80533E60;
    case 0x80533E64u: goto label_80533E64;
    case 0x80533E68u: goto label_80533E68;
    case 0x80533E6Cu: goto label_80533E6C;
    case 0x80533E70u: goto label_80533E70;
    case 0x80533E74u: goto label_80533E74;
    case 0x80533E78u: goto label_80533E78;
    case 0x80533E7Cu: goto label_80533E7C;
    case 0x80533E80u: goto label_80533E80;
    case 0x80533E84u: goto label_80533E84;
    case 0x80533E88u: goto label_80533E88;
    case 0x80533E8Cu: goto label_80533E8C;
    case 0x80533E90u: goto label_80533E90;
    case 0x80533E94u: goto label_80533E94;
    case 0x80533E98u: goto label_80533E98;
    case 0x80533E9Cu: goto label_80533E9C;
    case 0x80533EA0u: goto label_80533EA0;
    case 0x80533EA4u: goto label_80533EA4;
    case 0x80533EA8u: goto label_80533EA8;
    case 0x80533EACu: goto label_80533EAC;
    case 0x80533EB0u: goto label_80533EB0;
    case 0x80533EB4u: goto label_80533EB4;
    case 0x80533EB8u: goto label_80533EB8;
    case 0x80533EBCu: goto label_80533EBC;
    case 0x80533EC0u: goto label_80533EC0;
    case 0x80533EC4u: goto label_80533EC4;
    case 0x80533EC8u: goto label_80533EC8;
    case 0x80533ECCu: goto label_80533ECC;
    case 0x80533ED0u: goto label_80533ED0;
    case 0x80533ED4u: goto label_80533ED4;
    case 0x80533ED8u: goto label_80533ED8;
    case 0x80533EDCu: goto label_80533EDC;
    case 0x80533EE0u: goto label_80533EE0;
    case 0x80533EE4u: goto label_80533EE4;
    case 0x80533EE8u: goto label_80533EE8;
    case 0x80533EECu: goto label_80533EEC;
    case 0x80533EF0u: goto label_80533EF0;
    case 0x80533EF4u: goto label_80533EF4;
    case 0x80533EF8u: goto label_80533EF8;
    case 0x80533EFCu: goto label_80533EFC;
    case 0x80533F00u: goto label_80533F00;
    case 0x80533F04u: goto label_80533F04;
    case 0x80533F08u: goto label_80533F08;
    case 0x80533F0Cu: goto label_80533F0C;
    case 0x80533F10u: goto label_80533F10;
    case 0x80533F14u: goto label_80533F14;
    case 0x80533F18u: goto label_80533F18;
    case 0x80533F1Cu: goto label_80533F1C;
    case 0x80533F20u: goto label_80533F20;
    case 0x80533F24u: goto label_80533F24;
    case 0x80533F28u: goto label_80533F28;
    case 0x80533F2Cu: goto label_80533F2C;
    case 0x80533F30u: goto label_80533F30;
    case 0x80533F34u: goto label_80533F34;
    case 0x80533F38u: goto label_80533F38;
    case 0x80533F3Cu: goto label_80533F3C;
    case 0x80533F40u: goto label_80533F40;
    case 0x80533F44u: goto label_80533F44;
    case 0x80533F48u: goto label_80533F48;
    case 0x80533F4Cu: goto label_80533F4C;
    case 0x80533F50u: goto label_80533F50;
    case 0x80533F54u: goto label_80533F54;
    case 0x80533F58u: goto label_80533F58;
    case 0x80533F5Cu: goto label_80533F5C;
    case 0x80533F60u: goto label_80533F60;
    case 0x80533F64u: goto label_80533F64;
    case 0x80533F68u: goto label_80533F68;
    case 0x80533F6Cu: goto label_80533F6C;
    case 0x80533F70u: goto label_80533F70;
    case 0x80533F74u: goto label_80533F74;
    case 0x80533F78u: goto label_80533F78;
    case 0x80533F7Cu: goto label_80533F7C;
    case 0x80533F80u: goto label_80533F80;
    case 0x80533F84u: goto label_80533F84;
    case 0x80533F88u: goto label_80533F88;
    case 0x80533F8Cu: goto label_80533F8C;
    case 0x80533F90u: goto label_80533F90;
    case 0x80533F94u: goto label_80533F94;
    case 0x80533F98u: goto label_80533F98;
    case 0x80533F9Cu: goto label_80533F9C;
    case 0x80533FA0u: goto label_80533FA0;
    case 0x80533FA4u: goto label_80533FA4;
    case 0x80533FA8u: goto label_80533FA8;
    case 0x80533FACu: goto label_80533FAC;
    case 0x80533FB0u: goto label_80533FB0;
    case 0x80533FB4u: goto label_80533FB4;
    case 0x80533FB8u: goto label_80533FB8;
    case 0x80533FBCu: goto label_80533FBC;
    case 0x80533FC0u: goto label_80533FC0;
    case 0x80533FC4u: goto label_80533FC4;
    case 0x80533FC8u: goto label_80533FC8;
    case 0x80533FCCu: goto label_80533FCC;
    case 0x80533FD0u: goto label_80533FD0;
    case 0x80533FD4u: goto label_80533FD4;
    case 0x80533FD8u: goto label_80533FD8;
    case 0x80533FDCu: goto label_80533FDC;
    case 0x80533FE0u: goto label_80533FE0;
    case 0x80533FE4u: goto label_80533FE4;
    case 0x80533FE8u: goto label_80533FE8;
    case 0x80533FECu: goto label_80533FEC;
    case 0x80533FF0u: goto label_80533FF0;
    case 0x80533FF4u: goto label_80533FF4;
    case 0x80533FF8u: goto label_80533FF8;
    case 0x80533FFCu: goto label_80533FFC;
    case 0x80534000u: goto label_80534000;
    case 0x80534004u: goto label_80534004;
    case 0x80534008u: goto label_80534008;
    case 0x8053400Cu: goto label_8053400C;
    case 0x80534010u: goto label_80534010;
    case 0x80534014u: goto label_80534014;
    case 0x80534018u: goto label_80534018;
    case 0x8053401Cu: goto label_8053401C;
    case 0x80534020u: goto label_80534020;
    case 0x80534024u: goto label_80534024;
    case 0x80534028u: goto label_80534028;
    case 0x8053402Cu: goto label_8053402C;
    case 0x80534030u: goto label_80534030;
    case 0x80534034u: goto label_80534034;
    case 0x80534038u: goto label_80534038;
    case 0x8053403Cu: goto label_8053403C;
    case 0x80534040u: goto label_80534040;
    case 0x80534044u: goto label_80534044;
    case 0x80534048u: goto label_80534048;
    case 0x8053404Cu: goto label_8053404C;
    case 0x80534050u: goto label_80534050;
    case 0x80534054u: goto label_80534054;
    case 0x80534058u: goto label_80534058;
    case 0x8053405Cu: goto label_8053405C;
    case 0x80534060u: goto label_80534060;
    case 0x80534064u: goto label_80534064;
    case 0x80534068u: goto label_80534068;
    case 0x8053406Cu: goto label_8053406C;
    case 0x80534070u: goto label_80534070;
    case 0x80534074u: goto label_80534074;
    case 0x80534078u: goto label_80534078;
    case 0x8053407Cu: goto label_8053407C;
    case 0x80534080u: goto label_80534080;
    case 0x80534084u: goto label_80534084;
    case 0x80534088u: goto label_80534088;
    case 0x8053408Cu: goto label_8053408C;
    case 0x80534090u: goto label_80534090;
    case 0x80534094u: goto label_80534094;
    case 0x80534098u: goto label_80534098;
    case 0x8053409Cu: goto label_8053409C;
    case 0x805340A0u: goto label_805340A0;
    case 0x805340A4u: goto label_805340A4;
    case 0x805340A8u: goto label_805340A8;
    case 0x805340ACu: goto label_805340AC;
    case 0x805340B0u: goto label_805340B0;
    case 0x805340B4u: goto label_805340B4;
    case 0x805340B8u: goto label_805340B8;
    case 0x805340BCu: goto label_805340BC;
    case 0x805340C0u: goto label_805340C0;
    case 0x805340C4u: goto label_805340C4;
    case 0x805340C8u: goto label_805340C8;
    case 0x805340CCu: goto label_805340CC;
    case 0x805340D0u: goto label_805340D0;
    case 0x805340D4u: goto label_805340D4;
    case 0x805340D8u: goto label_805340D8;
    case 0x805340DCu: goto label_805340DC;
    case 0x805340E0u: goto label_805340E0;
    case 0x805340E4u: goto label_805340E4;
    case 0x805340E8u: goto label_805340E8;
    case 0x805340ECu: goto label_805340EC;
    case 0x805340F0u: goto label_805340F0;
    case 0x805340F4u: goto label_805340F4;
    case 0x805340F8u: goto label_805340F8;
    case 0x805340FCu: goto label_805340FC;
    case 0x80534100u: goto label_80534100;
    case 0x80534104u: goto label_80534104;
    case 0x80534108u: goto label_80534108;
    case 0x8053410Cu: goto label_8053410C;
    case 0x80534110u: goto label_80534110;
    case 0x80534114u: goto label_80534114;
    case 0x80534118u: goto label_80534118;
    case 0x8053411Cu: goto label_8053411C;
    case 0x80534120u: goto label_80534120;
    case 0x80534124u: goto label_80534124;
    case 0x80534128u: goto label_80534128;
    case 0x8053412Cu: goto label_8053412C;
    case 0x80534130u: goto label_80534130;
    case 0x80534134u: goto label_80534134;
    case 0x80534138u: goto label_80534138;
    case 0x8053413Cu: goto label_8053413C;
    case 0x80534140u: goto label_80534140;
    case 0x80534144u: goto label_80534144;
    case 0x80534148u: goto label_80534148;
    case 0x8053414Cu: goto label_8053414C;
    case 0x80534150u: goto label_80534150;
    case 0x80534154u: goto label_80534154;
    case 0x80534158u: goto label_80534158;
    case 0x8053415Cu: goto label_8053415C;
    case 0x80534160u: goto label_80534160;
    case 0x80534164u: goto label_80534164;
    case 0x80534168u: goto label_80534168;
    case 0x8053416Cu: goto label_8053416C;
    case 0x80534170u: goto label_80534170;
    case 0x80534174u: goto label_80534174;
    case 0x80534178u: goto label_80534178;
    case 0x8053417Cu: goto label_8053417C;
    case 0x80534180u: goto label_80534180;
    case 0x80534184u: goto label_80534184;
    case 0x80534188u: goto label_80534188;
    case 0x8053418Cu: goto label_8053418C;
    case 0x80534190u: goto label_80534190;
    case 0x80534194u: goto label_80534194;
    case 0x80534198u: goto label_80534198;
    case 0x8053419Cu: goto label_8053419C;
    case 0x805341A0u: goto label_805341A0;
    case 0x805341A4u: goto label_805341A4;
    case 0x805341A8u: goto label_805341A8;
    case 0x805341ACu: goto label_805341AC;
    case 0x805341B0u: goto label_805341B0;
    case 0x805341B4u: goto label_805341B4;
    case 0x805341B8u: goto label_805341B8;
    case 0x805341BCu: goto label_805341BC;
    case 0x805341C0u: goto label_805341C0;
    case 0x805341C4u: goto label_805341C4;
    case 0x805341C8u: goto label_805341C8;
    case 0x805341CCu: goto label_805341CC;
    case 0x805341D0u: goto label_805341D0;
    case 0x805341D4u: goto label_805341D4;
    case 0x805341D8u: goto label_805341D8;
    case 0x805341DCu: goto label_805341DC;
    case 0x805341E0u: goto label_805341E0;
    case 0x805341E4u: goto label_805341E4;
    case 0x805341E8u: goto label_805341E8;
    case 0x805341ECu: goto label_805341EC;
    case 0x805341F0u: goto label_805341F0;
    case 0x805341F4u: goto label_805341F4;
    case 0x805341F8u: goto label_805341F8;
    case 0x805341FCu: goto label_805341FC;
    case 0x80534200u: goto label_80534200;
    case 0x80534204u: goto label_80534204;
    case 0x80534208u: goto label_80534208;
    case 0x8053420Cu: goto label_8053420C;
    case 0x80534210u: goto label_80534210;
    case 0x80534214u: goto label_80534214;
    case 0x80534218u: goto label_80534218;
    case 0x8053421Cu: goto label_8053421C;
    case 0x80534220u: goto label_80534220;
    case 0x80534224u: goto label_80534224;
    case 0x80534228u: goto label_80534228;
    case 0x8053422Cu: goto label_8053422C;
    case 0x80534230u: goto label_80534230;
    case 0x80534234u: goto label_80534234;
    case 0x80534238u: goto label_80534238;
    case 0x8053423Cu: goto label_8053423C;
    case 0x80534240u: goto label_80534240;
    case 0x80534244u: goto label_80534244;
    case 0x80534248u: goto label_80534248;
    case 0x8053424Cu: goto label_8053424C;
    case 0x80534250u: goto label_80534250;
    case 0x80534254u: goto label_80534254;
    case 0x80534258u: goto label_80534258;
    case 0x8053425Cu: goto label_8053425C;
    case 0x80534260u: goto label_80534260;
    case 0x80534264u: goto label_80534264;
    case 0x80534268u: goto label_80534268;
    case 0x8053426Cu: goto label_8053426C;
    case 0x80534270u: goto label_80534270;
    case 0x80534274u: goto label_80534274;
    case 0x80534278u: goto label_80534278;
    case 0x8053427Cu: goto label_8053427C;
    case 0x80534280u: goto label_80534280;
    case 0x80534284u: goto label_80534284;
    case 0x80534288u: goto label_80534288;
    case 0x8053428Cu: goto label_8053428C;
    case 0x80534290u: goto label_80534290;
    case 0x80534294u: goto label_80534294;
    case 0x80534298u: goto label_80534298;
    case 0x8053429Cu: goto label_8053429C;
    case 0x805342A0u: goto label_805342A0;
    case 0x805342A4u: goto label_805342A4;
    case 0x805342A8u: goto label_805342A8;
    case 0x805342ACu: goto label_805342AC;
    case 0x805342B0u: goto label_805342B0;
    case 0x805342B4u: goto label_805342B4;
    case 0x805342B8u: goto label_805342B8;
    case 0x805342BCu: goto label_805342BC;
    case 0x805342C0u: goto label_805342C0;
    case 0x805342C4u: goto label_805342C4;
    case 0x805342C8u: goto label_805342C8;
    case 0x805342CCu: goto label_805342CC;
    case 0x805342D0u: goto label_805342D0;
    case 0x805342D4u: goto label_805342D4;
    case 0x805342D8u: goto label_805342D8;
    case 0x805342DCu: goto label_805342DC;
    case 0x805342E0u: goto label_805342E0;
    case 0x805342E4u: goto label_805342E4;
    case 0x805342E8u: goto label_805342E8;
    case 0x805342ECu: goto label_805342EC;
    case 0x805342F0u: goto label_805342F0;
    case 0x805342F4u: goto label_805342F4;
    case 0x805342F8u: goto label_805342F8;
    case 0x805342FCu: goto label_805342FC;
    case 0x80534300u: goto label_80534300;
    case 0x80534304u: goto label_80534304;
    case 0x80534308u: goto label_80534308;
    case 0x8053430Cu: goto label_8053430C;
    case 0x80534310u: goto label_80534310;
    case 0x80534314u: goto label_80534314;
    case 0x80534318u: goto label_80534318;
    case 0x8053431Cu: goto label_8053431C;
    case 0x80534320u: goto label_80534320;
    case 0x80534324u: goto label_80534324;
    case 0x80534328u: goto label_80534328;
    case 0x8053432Cu: goto label_8053432C;
    case 0x80534330u: goto label_80534330;
    case 0x80534334u: goto label_80534334;
    case 0x80534338u: goto label_80534338;
    case 0x8053433Cu: goto label_8053433C;
    case 0x80534340u: goto label_80534340;
    case 0x80534344u: goto label_80534344;
    case 0x80534348u: goto label_80534348;
    case 0x8053434Cu: goto label_8053434C;
    case 0x80534350u: goto label_80534350;
    case 0x80534354u: goto label_80534354;
    case 0x80534358u: goto label_80534358;
    case 0x8053435Cu: goto label_8053435C;
    case 0x80534360u: goto label_80534360;
    case 0x80534364u: goto label_80534364;
    case 0x80534368u: goto label_80534368;
    case 0x8053436Cu: goto label_8053436C;
    case 0x80534370u: goto label_80534370;
    case 0x80534374u: goto label_80534374;
    case 0x80534378u: goto label_80534378;
    case 0x8053437Cu: goto label_8053437C;
    case 0x80534380u: goto label_80534380;
    case 0x80534384u: goto label_80534384;
    case 0x80534388u: goto label_80534388;
    case 0x8053438Cu: goto label_8053438C;
    case 0x80534390u: goto label_80534390;
    case 0x80534394u: goto label_80534394;
    case 0x80534398u: goto label_80534398;
    case 0x8053439Cu: goto label_8053439C;
    case 0x805343A0u: goto label_805343A0;
    case 0x805343A4u: goto label_805343A4;
    case 0x805343A8u: goto label_805343A8;
    case 0x805343ACu: goto label_805343AC;
    case 0x805343B0u: goto label_805343B0;
    case 0x805343B4u: goto label_805343B4;
    case 0x805343B8u: goto label_805343B8;
    case 0x805343BCu: goto label_805343BC;
    case 0x805343C0u: goto label_805343C0;
    case 0x805343C4u: goto label_805343C4;
    case 0x805343C8u: goto label_805343C8;
    case 0x805343CCu: goto label_805343CC;
    case 0x805343D0u: goto label_805343D0;
    case 0x805343D4u: goto label_805343D4;
    case 0x805343D8u: goto label_805343D8;
    case 0x805343DCu: goto label_805343DC;
    case 0x805343E0u: goto label_805343E0;
    case 0x805343E4u: goto label_805343E4;
    case 0x805343E8u: goto label_805343E8;
    case 0x805343ECu: goto label_805343EC;
    case 0x805343F0u: goto label_805343F0;
    case 0x805343F4u: goto label_805343F4;
    case 0x805343F8u: goto label_805343F8;
    case 0x805343FCu: goto label_805343FC;
    case 0x80534400u: goto label_80534400;
    case 0x80534404u: goto label_80534404;
    case 0x80534408u: goto label_80534408;
    case 0x8053440Cu: goto label_8053440C;
    case 0x80534410u: goto label_80534410;
    case 0x80534414u: goto label_80534414;
    case 0x80534418u: goto label_80534418;
    case 0x8053441Cu: goto label_8053441C;
    case 0x80534420u: goto label_80534420;
    case 0x80534424u: goto label_80534424;
    case 0x80534428u: goto label_80534428;
    case 0x8053442Cu: goto label_8053442C;
    case 0x80534430u: goto label_80534430;
    case 0x80534434u: goto label_80534434;
    case 0x80534438u: goto label_80534438;
    case 0x8053443Cu: goto label_8053443C;
    case 0x80534440u: goto label_80534440;
    case 0x80534444u: goto label_80534444;
    case 0x80534448u: goto label_80534448;
    case 0x8053444Cu: goto label_8053444C;
    case 0x80534450u: goto label_80534450;
    case 0x80534454u: goto label_80534454;
    case 0x80534458u: goto label_80534458;
    case 0x8053445Cu: goto label_8053445C;
    case 0x80534460u: goto label_80534460;
    case 0x80534464u: goto label_80534464;
    case 0x80534468u: goto label_80534468;
    case 0x8053446Cu: goto label_8053446C;
    case 0x80534470u: goto label_80534470;
    case 0x80534474u: goto label_80534474;
    case 0x80534478u: goto label_80534478;
    case 0x8053447Cu: goto label_8053447C;
    case 0x80534480u: goto label_80534480;
    case 0x80534484u: goto label_80534484;
    case 0x80534488u: goto label_80534488;
    case 0x8053448Cu: goto label_8053448C;
    case 0x80534490u: goto label_80534490;
    case 0x80534494u: goto label_80534494;
    case 0x80534498u: goto label_80534498;
    case 0x8053449Cu: goto label_8053449C;
    case 0x805344A0u: goto label_805344A0;
    case 0x805344A4u: goto label_805344A4;
    case 0x805344A8u: goto label_805344A8;
    case 0x805344ACu: goto label_805344AC;
    case 0x805344B0u: goto label_805344B0;
    case 0x805344B4u: goto label_805344B4;
    case 0x805344B8u: goto label_805344B8;
    case 0x805344BCu: goto label_805344BC;
    case 0x805344C0u: goto label_805344C0;
    case 0x805344C4u: goto label_805344C4;
    case 0x805344C8u: goto label_805344C8;
    case 0x805344CCu: goto label_805344CC;
    case 0x805344D0u: goto label_805344D0;
    case 0x805344D4u: goto label_805344D4;
    case 0x805344D8u: goto label_805344D8;
    case 0x805344DCu: goto label_805344DC;
    case 0x805344E0u: goto label_805344E0;
    case 0x805344E4u: goto label_805344E4;
    case 0x805344E8u: goto label_805344E8;
    case 0x805344ECu: goto label_805344EC;
    case 0x805344F0u: goto label_805344F0;
    case 0x805344F4u: goto label_805344F4;
    case 0x805344F8u: goto label_805344F8;
    case 0x805344FCu: goto label_805344FC;
    case 0x80534500u: goto label_80534500;
    case 0x80534504u: goto label_80534504;
    case 0x80534508u: goto label_80534508;
    case 0x8053450Cu: goto label_8053450C;
    case 0x80534510u: goto label_80534510;
    case 0x80534514u: goto label_80534514;
    case 0x80534518u: goto label_80534518;
    case 0x8053451Cu: goto label_8053451C;
    case 0x80534520u: goto label_80534520;
    case 0x80534524u: goto label_80534524;
    case 0x80534528u: goto label_80534528;
    case 0x8053452Cu: goto label_8053452C;
    case 0x80534530u: goto label_80534530;
    case 0x80534534u: goto label_80534534;
    case 0x80534538u: goto label_80534538;
    case 0x8053453Cu: goto label_8053453C;
    case 0x80534540u: goto label_80534540;
    case 0x80534544u: goto label_80534544;
    case 0x80534548u: goto label_80534548;
    case 0x8053454Cu: goto label_8053454C;
    case 0x80534550u: goto label_80534550;
    case 0x80534554u: goto label_80534554;
    case 0x80534558u: goto label_80534558;
    case 0x8053455Cu: goto label_8053455C;
    case 0x80534560u: goto label_80534560;
    case 0x80534564u: goto label_80534564;
    case 0x80534568u: goto label_80534568;
    case 0x8053456Cu: goto label_8053456C;
    case 0x80534570u: goto label_80534570;
    case 0x80534574u: goto label_80534574;
    case 0x80534578u: goto label_80534578;
    case 0x8053457Cu: goto label_8053457C;
    case 0x80534580u: goto label_80534580;
    case 0x80534584u: goto label_80534584;
    case 0x80534588u: goto label_80534588;
    case 0x8053458Cu: goto label_8053458C;
    case 0x80534590u: goto label_80534590;
    case 0x80534594u: goto label_80534594;
    case 0x80534598u: goto label_80534598;
    case 0x8053459Cu: goto label_8053459C;
    case 0x805345A0u: goto label_805345A0;
    case 0x805345A4u: goto label_805345A4;
    case 0x805345A8u: goto label_805345A8;
    case 0x805345ACu: goto label_805345AC;
    case 0x805345B0u: goto label_805345B0;
    case 0x805345B4u: goto label_805345B4;
    case 0x805345B8u: goto label_805345B8;
    case 0x805345BCu: goto label_805345BC;
    case 0x805345C0u: goto label_805345C0;
    case 0x805345C4u: goto label_805345C4;
    case 0x805345C8u: goto label_805345C8;
    case 0x805345CCu: goto label_805345CC;
    case 0x805345D0u: goto label_805345D0;
    case 0x805345D4u: goto label_805345D4;
    case 0x805345D8u: goto label_805345D8;
    case 0x805345DCu: goto label_805345DC;
    case 0x805345E0u: goto label_805345E0;
    case 0x805345E4u: goto label_805345E4;
    case 0x805345E8u: goto label_805345E8;
    case 0x805345ECu: goto label_805345EC;
    case 0x805345F0u: goto label_805345F0;
    case 0x805345F4u: goto label_805345F4;
    case 0x805345F8u: goto label_805345F8;
    case 0x805345FCu: goto label_805345FC;
    case 0x80534600u: goto label_80534600;
    case 0x80534604u: goto label_80534604;
    case 0x80534608u: goto label_80534608;
    case 0x8053460Cu: goto label_8053460C;
    case 0x80534610u: goto label_80534610;
    case 0x80534614u: goto label_80534614;
    case 0x80534618u: goto label_80534618;
    case 0x8053461Cu: goto label_8053461C;
    case 0x80534620u: goto label_80534620;
    case 0x80534624u: goto label_80534624;
    case 0x80534628u: goto label_80534628;
    case 0x8053462Cu: goto label_8053462C;
    case 0x80534630u: goto label_80534630;
    case 0x80534634u: goto label_80534634;
    case 0x80534638u: goto label_80534638;
    case 0x8053463Cu: goto label_8053463C;
    case 0x80534640u: goto label_80534640;
    case 0x80534644u: goto label_80534644;
    case 0x80534648u: goto label_80534648;
    case 0x8053464Cu: goto label_8053464C;
    case 0x80534650u: goto label_80534650;
    case 0x80534654u: goto label_80534654;
    case 0x80534658u: goto label_80534658;
    case 0x8053465Cu: goto label_8053465C;
    case 0x80534660u: goto label_80534660;
    case 0x80534664u: goto label_80534664;
    case 0x80534668u: goto label_80534668;
    case 0x8053466Cu: goto label_8053466C;
    case 0x80534670u: goto label_80534670;
    case 0x80534674u: goto label_80534674;
    case 0x80534678u: goto label_80534678;
    case 0x8053467Cu: goto label_8053467C;
    case 0x80534680u: goto label_80534680;
    case 0x80534684u: goto label_80534684;
    case 0x80534688u: goto label_80534688;
    case 0x8053468Cu: goto label_8053468C;
    case 0x80534690u: goto label_80534690;
    case 0x80534694u: goto label_80534694;
    case 0x80534698u: goto label_80534698;
    case 0x8053469Cu: goto label_8053469C;
    case 0x805346A0u: goto label_805346A0;
    case 0x805346A4u: goto label_805346A4;
    case 0x805346A8u: goto label_805346A8;
    case 0x805346ACu: goto label_805346AC;
    case 0x805346B0u: goto label_805346B0;
    case 0x805346B4u: goto label_805346B4;
    case 0x805346B8u: goto label_805346B8;
    case 0x805346BCu: goto label_805346BC;
    case 0x805346C0u: goto label_805346C0;
    case 0x805346C4u: goto label_805346C4;
    case 0x805346C8u: goto label_805346C8;
    case 0x805346CCu: goto label_805346CC;
    case 0x805346D0u: goto label_805346D0;
    case 0x805346D4u: goto label_805346D4;
    case 0x805346D8u: goto label_805346D8;
    case 0x805346DCu: goto label_805346DC;
    case 0x805346E0u: goto label_805346E0;
    case 0x805346E4u: goto label_805346E4;
    case 0x805346E8u: goto label_805346E8;
    case 0x805346ECu: goto label_805346EC;
    case 0x805346F0u: goto label_805346F0;
    case 0x805346F4u: goto label_805346F4;
    case 0x805346F8u: goto label_805346F8;
    case 0x805346FCu: goto label_805346FC;
    case 0x80534700u: goto label_80534700;
    case 0x80534704u: goto label_80534704;
    case 0x80534708u: goto label_80534708;
    case 0x8053470Cu: goto label_8053470C;
    case 0x80534710u: goto label_80534710;
    case 0x80534714u: goto label_80534714;
    case 0x80534718u: goto label_80534718;
    case 0x8053471Cu: goto label_8053471C;
    case 0x80534720u: goto label_80534720;
    case 0x80534724u: goto label_80534724;
    case 0x80534728u: goto label_80534728;
    case 0x8053472Cu: goto label_8053472C;
    case 0x80534730u: goto label_80534730;
    case 0x80534734u: goto label_80534734;
    case 0x80534738u: goto label_80534738;
    case 0x8053473Cu: goto label_8053473C;
    case 0x80534740u: goto label_80534740;
    case 0x80534744u: goto label_80534744;
    case 0x80534748u: goto label_80534748;
    case 0x8053474Cu: goto label_8053474C;
    case 0x80534750u: goto label_80534750;
    case 0x80534754u: goto label_80534754;
    case 0x80534758u: goto label_80534758;
    case 0x8053475Cu: goto label_8053475C;
    case 0x80534760u: goto label_80534760;
    case 0x80534764u: goto label_80534764;
    case 0x80534768u: goto label_80534768;
    case 0x8053476Cu: goto label_8053476C;
    case 0x80534770u: goto label_80534770;
    case 0x80534774u: goto label_80534774;
    case 0x80534778u: goto label_80534778;
    case 0x8053477Cu: goto label_8053477C;
    case 0x80534780u: goto label_80534780;
    case 0x80534784u: goto label_80534784;
    case 0x80534788u: goto label_80534788;
    case 0x8053478Cu: goto label_8053478C;
    case 0x80534790u: goto label_80534790;
    case 0x80534794u: goto label_80534794;
    case 0x80534798u: goto label_80534798;
    case 0x8053479Cu: goto label_8053479C;
    case 0x805347A0u: goto label_805347A0;
    case 0x805347A4u: goto label_805347A4;
    case 0x805347A8u: goto label_805347A8;
    case 0x805347ACu: goto label_805347AC;
    case 0x805347B0u: goto label_805347B0;
    case 0x805347B4u: goto label_805347B4;
    case 0x805347B8u: goto label_805347B8;
    case 0x805347BCu: goto label_805347BC;
    case 0x805347C0u: goto label_805347C0;
    case 0x805347C4u: goto label_805347C4;
    case 0x805347C8u: goto label_805347C8;
    case 0x805347CCu: goto label_805347CC;
    case 0x805347D0u: goto label_805347D0;
    case 0x805347D4u: goto label_805347D4;
    case 0x805347D8u: goto label_805347D8;
    case 0x805347DCu: goto label_805347DC;
    case 0x805347E0u: goto label_805347E0;
    case 0x805347E4u: goto label_805347E4;
    case 0x805347E8u: goto label_805347E8;
    case 0x805347ECu: goto label_805347EC;
    case 0x805347F0u: goto label_805347F0;
    case 0x805347F4u: goto label_805347F4;
    case 0x805347F8u: goto label_805347F8;
    case 0x805347FCu: goto label_805347FC;
    case 0x80534800u: goto label_80534800;
    case 0x80534804u: goto label_80534804;
    case 0x80534808u: goto label_80534808;
    case 0x8053480Cu: goto label_8053480C;
    case 0x80534810u: goto label_80534810;
    case 0x80534814u: goto label_80534814;
    case 0x80534818u: goto label_80534818;
    case 0x8053481Cu: goto label_8053481C;
    case 0x80534820u: goto label_80534820;
    case 0x80534824u: goto label_80534824;
    case 0x80534828u: goto label_80534828;
    case 0x8053482Cu: goto label_8053482C;
    case 0x80534830u: goto label_80534830;
    case 0x80534834u: goto label_80534834;
    case 0x80534838u: goto label_80534838;
    case 0x8053483Cu: goto label_8053483C;
    case 0x80534840u: goto label_80534840;
    case 0x80534844u: goto label_80534844;
    case 0x80534848u: goto label_80534848;
    case 0x8053484Cu: goto label_8053484C;
    case 0x80534850u: goto label_80534850;
    case 0x80534854u: goto label_80534854;
    case 0x80534858u: goto label_80534858;
    case 0x8053485Cu: goto label_8053485C;
    case 0x80534860u: goto label_80534860;
    case 0x80534864u: goto label_80534864;
    case 0x80534868u: goto label_80534868;
    case 0x8053486Cu: goto label_8053486C;
    case 0x80534870u: goto label_80534870;
    case 0x80534874u: goto label_80534874;
    case 0x80534878u: goto label_80534878;
    case 0x8053487Cu: goto label_8053487C;
    case 0x80534880u: goto label_80534880;
    case 0x80534884u: goto label_80534884;
    case 0x80534888u: goto label_80534888;
    case 0x8053488Cu: goto label_8053488C;
    case 0x80534890u: goto label_80534890;
    case 0x80534894u: goto label_80534894;
    case 0x80534898u: goto label_80534898;
    case 0x8053489Cu: goto label_8053489C;
    case 0x805348A0u: goto label_805348A0;
    case 0x805348A4u: goto label_805348A4;
    case 0x805348A8u: goto label_805348A8;
    case 0x805348ACu: goto label_805348AC;
    case 0x805348B0u: goto label_805348B0;
    case 0x805348B4u: goto label_805348B4;
    case 0x805348B8u: goto label_805348B8;
    case 0x805348BCu: goto label_805348BC;
    case 0x805348C0u: goto label_805348C0;
    case 0x805348C4u: goto label_805348C4;
    case 0x805348C8u: goto label_805348C8;
    case 0x805348CCu: goto label_805348CC;
    case 0x805348D0u: goto label_805348D0;
    case 0x805348D4u: goto label_805348D4;
    case 0x805348D8u: goto label_805348D8;
    case 0x805348DCu: goto label_805348DC;
    case 0x805348E0u: goto label_805348E0;
    case 0x805348E4u: goto label_805348E4;
    case 0x805348E8u: goto label_805348E8;
    case 0x805348ECu: goto label_805348EC;
    case 0x805348F0u: goto label_805348F0;
    case 0x805348F4u: goto label_805348F4;
    case 0x805348F8u: goto label_805348F8;
    case 0x805348FCu: goto label_805348FC;
    case 0x80534900u: goto label_80534900;
    case 0x80534904u: goto label_80534904;
    case 0x80534908u: goto label_80534908;
    case 0x8053490Cu: goto label_8053490C;
    case 0x80534910u: goto label_80534910;
    case 0x80534914u: goto label_80534914;
    case 0x80534918u: goto label_80534918;
    case 0x8053491Cu: goto label_8053491C;
    case 0x80534920u: goto label_80534920;
    case 0x80534924u: goto label_80534924;
    case 0x80534928u: goto label_80534928;
    case 0x8053492Cu: goto label_8053492C;
    case 0x80534930u: goto label_80534930;
    case 0x80534934u: goto label_80534934;
    case 0x80534938u: goto label_80534938;
    case 0x8053493Cu: goto label_8053493C;
    case 0x80534940u: goto label_80534940;
    case 0x80534944u: goto label_80534944;
    case 0x80534948u: goto label_80534948;
    case 0x8053494Cu: goto label_8053494C;
    case 0x80534950u: goto label_80534950;
    case 0x80534954u: goto label_80534954;
    case 0x80534958u: goto label_80534958;
    case 0x8053495Cu: goto label_8053495C;
    case 0x80534960u: goto label_80534960;
    case 0x80534964u: goto label_80534964;
    case 0x80534968u: goto label_80534968;
    case 0x8053496Cu: goto label_8053496C;
    case 0x80534970u: goto label_80534970;
    case 0x80534974u: goto label_80534974;
    case 0x80534978u: goto label_80534978;
    case 0x8053497Cu: goto label_8053497C;
    case 0x80534980u: goto label_80534980;
    case 0x80534984u: goto label_80534984;
    case 0x80534988u: goto label_80534988;
    case 0x8053498Cu: goto label_8053498C;
    case 0x80534990u: goto label_80534990;
    case 0x80534994u: goto label_80534994;
    case 0x80534998u: goto label_80534998;
    case 0x8053499Cu: goto label_8053499C;
    case 0x805349A0u: goto label_805349A0;
    case 0x805349A4u: goto label_805349A4;
    case 0x805349A8u: goto label_805349A8;
    case 0x805349ACu: goto label_805349AC;
    case 0x805349B0u: goto label_805349B0;
    case 0x805349B4u: goto label_805349B4;
    case 0x805349B8u: goto label_805349B8;
    case 0x805349BCu: goto label_805349BC;
    case 0x805349C0u: goto label_805349C0;
    case 0x805349C4u: goto label_805349C4;
    case 0x805349C8u: goto label_805349C8;
    case 0x805349CCu: goto label_805349CC;
    case 0x805349D0u: goto label_805349D0;
    case 0x805349D4u: goto label_805349D4;
    case 0x805349D8u: goto label_805349D8;
    case 0x805349DCu: goto label_805349DC;
    case 0x805349E0u: goto label_805349E0;
    case 0x805349E4u: goto label_805349E4;
    case 0x805349E8u: goto label_805349E8;
    case 0x805349ECu: goto label_805349EC;
    case 0x805349F0u: goto label_805349F0;
    case 0x805349F4u: goto label_805349F4;
    case 0x805349F8u: goto label_805349F8;
    case 0x805349FCu: goto label_805349FC;
    case 0x80534A00u: goto label_80534A00;
    case 0x80534A04u: goto label_80534A04;
    case 0x80534A08u: goto label_80534A08;
    case 0x80534A0Cu: goto label_80534A0C;
    case 0x80534A10u: goto label_80534A10;
    case 0x80534A14u: goto label_80534A14;
    case 0x80534A18u: goto label_80534A18;
    case 0x80534A1Cu: goto label_80534A1C;
    case 0x80534A20u: goto label_80534A20;
    case 0x80534A24u: goto label_80534A24;
    case 0x80534A28u: goto label_80534A28;
    case 0x80534A2Cu: goto label_80534A2C;
    case 0x80534A30u: goto label_80534A30;
    case 0x80534A34u: goto label_80534A34;
    case 0x80534A38u: goto label_80534A38;
    case 0x80534A3Cu: goto label_80534A3C;
    case 0x80534A40u: goto label_80534A40;
    case 0x80534A44u: goto label_80534A44;
    case 0x80534A48u: goto label_80534A48;
    case 0x80534A4Cu: goto label_80534A4C;
    case 0x80534A50u: goto label_80534A50;
    case 0x80534A54u: goto label_80534A54;
    case 0x80534A58u: goto label_80534A58;
    case 0x80534A5Cu: goto label_80534A5C;
    case 0x80534A60u: goto label_80534A60;
    case 0x80534A64u: goto label_80534A64;
    case 0x80534A68u: goto label_80534A68;
    case 0x80534A6Cu: goto label_80534A6C;
    case 0x80534A70u: goto label_80534A70;
    case 0x80534A74u: goto label_80534A74;
    case 0x80534A78u: goto label_80534A78;
    case 0x80534A7Cu: goto label_80534A7C;
    case 0x80534A80u: goto label_80534A80;
    case 0x80534A84u: goto label_80534A84;
    case 0x80534A88u: goto label_80534A88;
    case 0x80534A8Cu: goto label_80534A8C;
    case 0x80534A90u: goto label_80534A90;
    case 0x80534A94u: goto label_80534A94;
    case 0x80534A98u: goto label_80534A98;
    case 0x80534A9Cu: goto label_80534A9C;
    case 0x80534AA0u: goto label_80534AA0;
    case 0x80534AA4u: goto label_80534AA4;
    case 0x80534AA8u: goto label_80534AA8;
    case 0x80534AACu: goto label_80534AAC;
    case 0x80534AB0u: goto label_80534AB0;
    case 0x80534AB4u: goto label_80534AB4;
    case 0x80534AB8u: goto label_80534AB8;
    case 0x80534ABCu: goto label_80534ABC;
    case 0x80534AC0u: goto label_80534AC0;
    case 0x80534AC4u: goto label_80534AC4;
    case 0x80534AC8u: goto label_80534AC8;
    case 0x80534ACCu: goto label_80534ACC;
    case 0x80534AD0u: goto label_80534AD0;
    case 0x80534AD4u: goto label_80534AD4;
    case 0x80534AD8u: goto label_80534AD8;
    case 0x80534ADCu: goto label_80534ADC;
    case 0x80534AE0u: goto label_80534AE0;
    case 0x80534AE4u: goto label_80534AE4;
    case 0x80534AE8u: goto label_80534AE8;
    case 0x80534AECu: goto label_80534AEC;
    case 0x80534AF0u: goto label_80534AF0;
    case 0x80534AF4u: goto label_80534AF4;
    case 0x80534AF8u: goto label_80534AF8;
    case 0x80534AFCu: goto label_80534AFC;
    case 0x80534B00u: goto label_80534B00;
    case 0x80534B04u: goto label_80534B04;
    case 0x80534B08u: goto label_80534B08;
    case 0x80534B0Cu: goto label_80534B0C;
    case 0x80534B10u: goto label_80534B10;
    case 0x80534B14u: goto label_80534B14;
    case 0x80534B18u: goto label_80534B18;
    case 0x80534B1Cu: goto label_80534B1C;
    case 0x80534B20u: goto label_80534B20;
    case 0x80534B24u: goto label_80534B24;
    case 0x80534B28u: goto label_80534B28;
    case 0x80534B2Cu: goto label_80534B2C;
    case 0x80534B30u: goto label_80534B30;
    case 0x80534B34u: goto label_80534B34;
    case 0x80534B38u: goto label_80534B38;
    case 0x80534B3Cu: goto label_80534B3C;
    case 0x80534B40u: goto label_80534B40;
    case 0x80534B44u: goto label_80534B44;
    case 0x80534B48u: goto label_80534B48;
    case 0x80534B4Cu: goto label_80534B4C;
    case 0x80534B50u: goto label_80534B50;
    case 0x80534B54u: goto label_80534B54;
    case 0x80534B58u: goto label_80534B58;
    case 0x80534B5Cu: goto label_80534B5C;
    case 0x80534B60u: goto label_80534B60;
    case 0x80534B64u: goto label_80534B64;
    case 0x80534B68u: goto label_80534B68;
    case 0x80534B6Cu: goto label_80534B6C;
    case 0x80534B70u: goto label_80534B70;
    case 0x80534B74u: goto label_80534B74;
    case 0x80534B78u: goto label_80534B78;
    case 0x80534B7Cu: goto label_80534B7C;
    case 0x80534B80u: goto label_80534B80;
    case 0x80534B84u: goto label_80534B84;
    case 0x80534B88u: goto label_80534B88;
    case 0x80534B8Cu: goto label_80534B8C;
    case 0x80534B90u: goto label_80534B90;
    case 0x80534B94u: goto label_80534B94;
    case 0x80534B98u: goto label_80534B98;
    case 0x80534B9Cu: goto label_80534B9C;
    case 0x80534BA0u: goto label_80534BA0;
    case 0x80534BA4u: goto label_80534BA4;
    case 0x80534BA8u: goto label_80534BA8;
    case 0x80534BACu: goto label_80534BAC;
    case 0x80534BB0u: goto label_80534BB0;
    case 0x80534BB4u: goto label_80534BB4;
    case 0x80534BB8u: goto label_80534BB8;
    case 0x80534BBCu: goto label_80534BBC;
    case 0x80534BC0u: goto label_80534BC0;
    case 0x80534BC4u: goto label_80534BC4;
    case 0x80534BC8u: goto label_80534BC8;
    case 0x80534BCCu: goto label_80534BCC;
    case 0x80534BD0u: goto label_80534BD0;
    case 0x80534BD4u: goto label_80534BD4;
    case 0x80534BD8u: goto label_80534BD8;
    case 0x80534BDCu: goto label_80534BDC;
    case 0x80534BE0u: goto label_80534BE0;
    case 0x80534BE4u: goto label_80534BE4;
    case 0x80534BE8u: goto label_80534BE8;
    case 0x80534BECu: goto label_80534BEC;
    case 0x80534BF0u: goto label_80534BF0;
    case 0x80534BF4u: goto label_80534BF4;
    case 0x80534BF8u: goto label_80534BF8;
    case 0x80534BFCu: goto label_80534BFC;
    case 0x80534C00u: goto label_80534C00;
    case 0x80534C04u: goto label_80534C04;
    case 0x80534C08u: goto label_80534C08;
    case 0x80534C0Cu: goto label_80534C0C;
    case 0x80534C10u: goto label_80534C10;
    case 0x80534C14u: goto label_80534C14;
    case 0x80534C18u: goto label_80534C18;
    case 0x80534C1Cu: goto label_80534C1C;
    case 0x80534C20u: goto label_80534C20;
    case 0x80534C24u: goto label_80534C24;
    case 0x80534C28u: goto label_80534C28;
    case 0x80534C2Cu: goto label_80534C2C;
    case 0x80534C30u: goto label_80534C30;
    case 0x80534C34u: goto label_80534C34;
    case 0x80534C38u: goto label_80534C38;
    case 0x80534C3Cu: goto label_80534C3C;
    case 0x80534C40u: goto label_80534C40;
    case 0x80534C44u: goto label_80534C44;
    case 0x80534C48u: goto label_80534C48;
    case 0x80534C4Cu: goto label_80534C4C;
    case 0x80534C50u: goto label_80534C50;
    case 0x80534C54u: goto label_80534C54;
    case 0x80534C58u: goto label_80534C58;
    case 0x80534C5Cu: goto label_80534C5C;
    case 0x80534C60u: goto label_80534C60;
    case 0x80534C64u: goto label_80534C64;
    case 0x80534C68u: goto label_80534C68;
    case 0x80534C6Cu: goto label_80534C6C;
    case 0x80534C70u: goto label_80534C70;
    case 0x80534C74u: goto label_80534C74;
    case 0x80534C78u: goto label_80534C78;
    case 0x80534C7Cu: goto label_80534C7C;
    case 0x80534C80u: goto label_80534C80;
    case 0x80534C84u: goto label_80534C84;
    case 0x80534C88u: goto label_80534C88;
    case 0x80534C8Cu: goto label_80534C8C;
    case 0x80534C90u: goto label_80534C90;
    case 0x80534C94u: goto label_80534C94;
    case 0x80534C98u: goto label_80534C98;
    case 0x80534C9Cu: goto label_80534C9C;
    case 0x80534CA0u: goto label_80534CA0;
    case 0x80534CA4u: goto label_80534CA4;
    case 0x80534CA8u: goto label_80534CA8;
    case 0x80534CACu: goto label_80534CAC;
    case 0x80534CB0u: goto label_80534CB0;
    case 0x80534CB4u: goto label_80534CB4;
    case 0x80534CB8u: goto label_80534CB8;
    case 0x80534CBCu: goto label_80534CBC;
    case 0x80534CC0u: goto label_80534CC0;
    case 0x80534CC4u: goto label_80534CC4;
    case 0x80534CC8u: goto label_80534CC8;
    case 0x80534CCCu: goto label_80534CCC;
    case 0x80534CD0u: goto label_80534CD0;
    case 0x80534CD4u: goto label_80534CD4;
    case 0x80534CD8u: goto label_80534CD8;
    case 0x80534CDCu: goto label_80534CDC;
    case 0x80534CE0u: goto label_80534CE0;
    case 0x80534CE4u: goto label_80534CE4;
    case 0x80534CE8u: goto label_80534CE8;
    case 0x80534CECu: goto label_80534CEC;
    case 0x80534CF0u: goto label_80534CF0;
    case 0x80534CF4u: goto label_80534CF4;
    case 0x80534CF8u: goto label_80534CF8;
    case 0x80534CFCu: goto label_80534CFC;
    case 0x80534D00u: goto label_80534D00;
    case 0x80534D04u: goto label_80534D04;
    case 0x80534D08u: goto label_80534D08;
    case 0x80534D0Cu: goto label_80534D0C;
    case 0x80534D10u: goto label_80534D10;
    case 0x80534D14u: goto label_80534D14;
    case 0x80534D18u: goto label_80534D18;
    case 0x80534D1Cu: goto label_80534D1C;
    case 0x80534D20u: goto label_80534D20;
    case 0x80534D24u: goto label_80534D24;
    case 0x80534D28u: goto label_80534D28;
    case 0x80534D2Cu: goto label_80534D2C;
    case 0x80534D30u: goto label_80534D30;
    case 0x80534D34u: goto label_80534D34;
    case 0x80534D38u: goto label_80534D38;
    case 0x80534D3Cu: goto label_80534D3C;
    case 0x80534D40u: goto label_80534D40;
    case 0x80534D44u: goto label_80534D44;
    case 0x80534D48u: goto label_80534D48;
    case 0x80534D4Cu: goto label_80534D4C;
    case 0x80534D50u: goto label_80534D50;
    case 0x80534D54u: goto label_80534D54;
    case 0x80534D58u: goto label_80534D58;
    case 0x80534D5Cu: goto label_80534D5C;
    case 0x80534D60u: goto label_80534D60;
    case 0x80534D64u: goto label_80534D64;
    case 0x80534D68u: goto label_80534D68;
    case 0x80534D6Cu: goto label_80534D6C;
    case 0x80534D70u: goto label_80534D70;
    case 0x80534D74u: goto label_80534D74;
    case 0x80534D78u: goto label_80534D78;
    case 0x80534D7Cu: goto label_80534D7C;
    case 0x80534D80u: goto label_80534D80;
    case 0x80534D84u: goto label_80534D84;
    case 0x80534D88u: goto label_80534D88;
    case 0x80534D8Cu: goto label_80534D8C;
    case 0x80534D90u: goto label_80534D90;
    case 0x80534D94u: goto label_80534D94;
    case 0x80534D98u: goto label_80534D98;
    case 0x80534D9Cu: goto label_80534D9C;
    case 0x80534DA0u: goto label_80534DA0;
    case 0x80534DA4u: goto label_80534DA4;
    case 0x80534DA8u: goto label_80534DA8;
    case 0x80534DACu: goto label_80534DAC;
    case 0x80534DB0u: goto label_80534DB0;
    case 0x80534DB4u: goto label_80534DB4;
    case 0x80534DB8u: goto label_80534DB8;
    case 0x80534DBCu: goto label_80534DBC;
    case 0x80534DC0u: goto label_80534DC0;
    case 0x80534DC4u: goto label_80534DC4;
    case 0x80534DC8u: goto label_80534DC8;
    case 0x80534DCCu: goto label_80534DCC;
    case 0x80534DD0u: goto label_80534DD0;
    case 0x80534DD4u: goto label_80534DD4;
    case 0x80534DD8u: goto label_80534DD8;
    case 0x80534DDCu: goto label_80534DDC;
    case 0x80534DE0u: goto label_80534DE0;
    case 0x80534DE4u: goto label_80534DE4;
    case 0x80534DE8u: goto label_80534DE8;
    case 0x80534DECu: goto label_80534DEC;
    case 0x80534DF0u: goto label_80534DF0;
    case 0x80534DF4u: goto label_80534DF4;
    case 0x80534DF8u: goto label_80534DF8;
    case 0x80534DFCu: goto label_80534DFC;
    case 0x80534E00u: goto label_80534E00;
    case 0x80534E04u: goto label_80534E04;
    case 0x80534E08u: goto label_80534E08;
    case 0x80534E0Cu: goto label_80534E0C;
    case 0x80534E10u: goto label_80534E10;
    case 0x80534E14u: goto label_80534E14;
    case 0x80534E18u: goto label_80534E18;
    case 0x80534E1Cu: goto label_80534E1C;
    case 0x80534E20u: goto label_80534E20;
    case 0x80534E24u: goto label_80534E24;
    case 0x80534E28u: goto label_80534E28;
    case 0x80534E2Cu: goto label_80534E2C;
    case 0x80534E30u: goto label_80534E30;
    case 0x80534E34u: goto label_80534E34;
    case 0x80534E38u: goto label_80534E38;
    case 0x80534E3Cu: goto label_80534E3C;
    case 0x80534E40u: goto label_80534E40;
    case 0x80534E44u: goto label_80534E44;
    case 0x80534E48u: goto label_80534E48;
    case 0x80534E4Cu: goto label_80534E4C;
    case 0x80534E50u: goto label_80534E50;
    case 0x80534E54u: goto label_80534E54;
    case 0x80534E58u: goto label_80534E58;
    case 0x80534E5Cu: goto label_80534E5C;
    case 0x80534E60u: goto label_80534E60;
    case 0x80534E64u: goto label_80534E64;
    case 0x80534E68u: goto label_80534E68;
    case 0x80534E6Cu: goto label_80534E6C;
    case 0x80534E70u: goto label_80534E70;
    case 0x80534E74u: goto label_80534E74;
    case 0x80534E78u: goto label_80534E78;
    case 0x80534E7Cu: goto label_80534E7C;
    case 0x80534E80u: goto label_80534E80;
    case 0x80534E84u: goto label_80534E84;
    case 0x80534E88u: goto label_80534E88;
    case 0x80534E8Cu: goto label_80534E8C;
    case 0x80534E90u: goto label_80534E90;
    case 0x80534E94u: goto label_80534E94;
    case 0x80534E98u: goto label_80534E98;
    case 0x80534E9Cu: goto label_80534E9C;
    case 0x80534EA0u: goto label_80534EA0;
    case 0x80534EA4u: goto label_80534EA4;
    case 0x80534EA8u: goto label_80534EA8;
    case 0x80534EACu: goto label_80534EAC;
    case 0x80534EB0u: goto label_80534EB0;
    case 0x80534EB4u: goto label_80534EB4;
    case 0x80534EB8u: goto label_80534EB8;
    case 0x80534EBCu: goto label_80534EBC;
    case 0x80534EC0u: goto label_80534EC0;
    case 0x80534EC4u: goto label_80534EC4;
    case 0x80534EC8u: goto label_80534EC8;
    case 0x80534ECCu: goto label_80534ECC;
    case 0x80534ED0u: goto label_80534ED0;
    case 0x80534ED4u: goto label_80534ED4;
    case 0x80534ED8u: goto label_80534ED8;
    case 0x80534EDCu: goto label_80534EDC;
    case 0x80534EE0u: goto label_80534EE0;
    case 0x80534EE4u: goto label_80534EE4;
    case 0x80534EE8u: goto label_80534EE8;
    case 0x80534EECu: goto label_80534EEC;
    case 0x80534EF0u: goto label_80534EF0;
    case 0x80534EF4u: goto label_80534EF4;
    case 0x80534EF8u: goto label_80534EF8;
    case 0x80534EFCu: goto label_80534EFC;
    case 0x80534F00u: goto label_80534F00;
    case 0x80534F04u: goto label_80534F04;
    case 0x80534F08u: goto label_80534F08;
    case 0x80534F0Cu: goto label_80534F0C;
    case 0x80534F10u: goto label_80534F10;
    case 0x80534F14u: goto label_80534F14;
    case 0x80534F18u: goto label_80534F18;
    case 0x80534F1Cu: goto label_80534F1C;
    case 0x80534F20u: goto label_80534F20;
    case 0x80534F24u: goto label_80534F24;
    case 0x80534F28u: goto label_80534F28;
    case 0x80534F2Cu: goto label_80534F2C;
    case 0x80534F30u: goto label_80534F30;
    case 0x80534F34u: goto label_80534F34;
    case 0x80534F38u: goto label_80534F38;
    case 0x80534F3Cu: goto label_80534F3C;
    case 0x80534F40u: goto label_80534F40;
    case 0x80534F44u: goto label_80534F44;
    case 0x80534F48u: goto label_80534F48;
    case 0x80534F4Cu: goto label_80534F4C;
    case 0x80534F50u: goto label_80534F50;
    case 0x80534F54u: goto label_80534F54;
    case 0x80534F58u: goto label_80534F58;
    case 0x80534F5Cu: goto label_80534F5C;
    case 0x80534F60u: goto label_80534F60;
    case 0x80534F64u: goto label_80534F64;
    case 0x80534F68u: goto label_80534F68;
    case 0x80534F6Cu: goto label_80534F6C;
    case 0x80534F70u: goto label_80534F70;
    case 0x80534F74u: goto label_80534F74;
    case 0x80534F78u: goto label_80534F78;
    case 0x80534F7Cu: goto label_80534F7C;
    case 0x80534F80u: goto label_80534F80;
    case 0x80534F84u: goto label_80534F84;
    case 0x80534F88u: goto label_80534F88;
    case 0x80534F8Cu: goto label_80534F8C;
    case 0x80534F90u: goto label_80534F90;
    case 0x80534F94u: goto label_80534F94;
    case 0x80534F98u: goto label_80534F98;
    case 0x80534F9Cu: goto label_80534F9C;
    case 0x80534FA0u: goto label_80534FA0;
    case 0x80534FA4u: goto label_80534FA4;
    case 0x80534FA8u: goto label_80534FA8;
    case 0x80534FACu: goto label_80534FAC;
    case 0x80534FB0u: goto label_80534FB0;
    case 0x80534FB4u: goto label_80534FB4;
    case 0x80534FB8u: goto label_80534FB8;
    case 0x80534FBCu: goto label_80534FBC;
    case 0x80534FC0u: goto label_80534FC0;
    case 0x80534FC4u: goto label_80534FC4;
    case 0x80534FC8u: goto label_80534FC8;
    case 0x80534FCCu: goto label_80534FCC;
    case 0x80534FD0u: goto label_80534FD0;
    case 0x80534FD4u: goto label_80534FD4;
    case 0x80534FD8u: goto label_80534FD8;
    case 0x80534FDCu: goto label_80534FDC;
    case 0x80534FE0u: goto label_80534FE0;
    case 0x80534FE4u: goto label_80534FE4;
    case 0x80534FE8u: goto label_80534FE8;
    case 0x80534FECu: goto label_80534FEC;
    case 0x80534FF0u: goto label_80534FF0;
    case 0x80534FF4u: goto label_80534FF4;
    case 0x80534FF8u: goto label_80534FF8;
    case 0x80534FFCu: goto label_80534FFC;
    case 0x80535000u: goto label_80535000;
    case 0x80535004u: goto label_80535004;
    case 0x80535008u: goto label_80535008;
    case 0x8053500Cu: goto label_8053500C;
    case 0x80535010u: goto label_80535010;
    case 0x80535014u: goto label_80535014;
    case 0x80535018u: goto label_80535018;
    case 0x8053501Cu: goto label_8053501C;
    case 0x80535020u: goto label_80535020;
    case 0x80535024u: goto label_80535024;
    case 0x80535028u: goto label_80535028;
    case 0x8053502Cu: goto label_8053502C;
    case 0x80535030u: goto label_80535030;
    case 0x80535034u: goto label_80535034;
    case 0x80535038u: goto label_80535038;
    case 0x8053503Cu: goto label_8053503C;
    case 0x80535040u: goto label_80535040;
    case 0x80535044u: goto label_80535044;
    case 0x80535048u: goto label_80535048;
    case 0x8053504Cu: goto label_8053504C;
    case 0x80535050u: goto label_80535050;
    case 0x80535054u: goto label_80535054;
    case 0x80535058u: goto label_80535058;
    case 0x8053505Cu: goto label_8053505C;
    case 0x80535060u: goto label_80535060;
    case 0x80535064u: goto label_80535064;
    case 0x80535068u: goto label_80535068;
    case 0x8053506Cu: goto label_8053506C;
    case 0x80535070u: goto label_80535070;
    case 0x80535074u: goto label_80535074;
    case 0x80535078u: goto label_80535078;
    case 0x8053507Cu: goto label_8053507C;
    case 0x80535080u: goto label_80535080;
    case 0x80535084u: goto label_80535084;
    case 0x80535088u: goto label_80535088;
    case 0x8053508Cu: goto label_8053508C;
    case 0x80535090u: goto label_80535090;
    case 0x80535094u: goto label_80535094;
    case 0x80535098u: goto label_80535098;
    case 0x8053509Cu: goto label_8053509C;
    case 0x805350A0u: goto label_805350A0;
    case 0x805350A4u: goto label_805350A4;
    case 0x805350A8u: goto label_805350A8;
    case 0x805350ACu: goto label_805350AC;
    case 0x805350B0u: goto label_805350B0;
    case 0x805350B4u: goto label_805350B4;
    case 0x805350B8u: goto label_805350B8;
    case 0x805350BCu: goto label_805350BC;
    case 0x805350C0u: goto label_805350C0;
    case 0x805350C4u: goto label_805350C4;
    case 0x805350C8u: goto label_805350C8;
    case 0x805350CCu: goto label_805350CC;
    case 0x805350D0u: goto label_805350D0;
    case 0x805350D4u: goto label_805350D4;
    case 0x805350D8u: goto label_805350D8;
    case 0x805350DCu: goto label_805350DC;
    case 0x805350E0u: goto label_805350E0;
    case 0x805350E4u: goto label_805350E4;
    case 0x805350E8u: goto label_805350E8;
    case 0x805350ECu: goto label_805350EC;
    case 0x805350F0u: goto label_805350F0;
    case 0x805350F4u: goto label_805350F4;
    case 0x805350F8u: goto label_805350F8;
    case 0x805350FCu: goto label_805350FC;
    case 0x80535100u: goto label_80535100;
    case 0x80535104u: goto label_80535104;
    case 0x80535108u: goto label_80535108;
    case 0x8053510Cu: goto label_8053510C;
    case 0x80535110u: goto label_80535110;
    case 0x80535114u: goto label_80535114;
    case 0x80535118u: goto label_80535118;
    case 0x8053511Cu: goto label_8053511C;
    case 0x80535120u: goto label_80535120;
    case 0x80535124u: goto label_80535124;
    case 0x80535128u: goto label_80535128;
    case 0x8053512Cu: goto label_8053512C;
    case 0x80535130u: goto label_80535130;
    case 0x80535134u: goto label_80535134;
    case 0x80535138u: goto label_80535138;
    case 0x8053513Cu: goto label_8053513C;
    case 0x80535140u: goto label_80535140;
    case 0x80535144u: goto label_80535144;
    case 0x80535148u: goto label_80535148;
    case 0x8053514Cu: goto label_8053514C;
    case 0x80535150u: goto label_80535150;
    case 0x80535154u: goto label_80535154;
    case 0x80535158u: goto label_80535158;
    case 0x8053515Cu: goto label_8053515C;
    case 0x80535160u: goto label_80535160;
    case 0x80535164u: goto label_80535164;
    case 0x80535168u: goto label_80535168;
    case 0x8053516Cu: goto label_8053516C;
    case 0x80535170u: goto label_80535170;
    case 0x80535174u: goto label_80535174;
    case 0x80535178u: goto label_80535178;
    case 0x8053517Cu: goto label_8053517C;
    case 0x80535180u: goto label_80535180;
    case 0x80535184u: goto label_80535184;
    case 0x80535188u: goto label_80535188;
    case 0x8053518Cu: goto label_8053518C;
    case 0x80535190u: goto label_80535190;
    case 0x80535194u: goto label_80535194;
    case 0x80535198u: goto label_80535198;
    case 0x8053519Cu: goto label_8053519C;
    case 0x805351A0u: goto label_805351A0;
    case 0x805351A4u: goto label_805351A4;
    case 0x805351A8u: goto label_805351A8;
    case 0x805351ACu: goto label_805351AC;
    case 0x805351B0u: goto label_805351B0;
    case 0x805351B4u: goto label_805351B4;
    case 0x805351B8u: goto label_805351B8;
    case 0x805351BCu: goto label_805351BC;
    case 0x805351C0u: goto label_805351C0;
    case 0x805351C4u: goto label_805351C4;
    case 0x805351C8u: goto label_805351C8;
    case 0x805351CCu: goto label_805351CC;
    case 0x805351D0u: goto label_805351D0;
    case 0x805351D4u: goto label_805351D4;
    case 0x805351D8u: goto label_805351D8;
    case 0x805351DCu: goto label_805351DC;
    case 0x805351E0u: goto label_805351E0;
    case 0x805351E4u: goto label_805351E4;
    case 0x805351E8u: goto label_805351E8;
    case 0x805351ECu: goto label_805351EC;
    case 0x805351F0u: goto label_805351F0;
    case 0x805351F4u: goto label_805351F4;
    case 0x805351F8u: goto label_805351F8;
    case 0x805351FCu: goto label_805351FC;
    case 0x80535200u: goto label_80535200;
    case 0x80535204u: goto label_80535204;
    case 0x80535208u: goto label_80535208;
    case 0x8053520Cu: goto label_8053520C;
    case 0x80535210u: goto label_80535210;
    case 0x80535214u: goto label_80535214;
    case 0x80535218u: goto label_80535218;
    case 0x8053521Cu: goto label_8053521C;
    case 0x80535220u: goto label_80535220;
    case 0x80535224u: goto label_80535224;
    case 0x80535228u: goto label_80535228;
    case 0x8053522Cu: goto label_8053522C;
    case 0x80535230u: goto label_80535230;
    case 0x80535234u: goto label_80535234;
    case 0x80535238u: goto label_80535238;
    case 0x8053523Cu: goto label_8053523C;
    case 0x80535240u: goto label_80535240;
    case 0x80535244u: goto label_80535244;
    case 0x80535248u: goto label_80535248;
    case 0x8053524Cu: goto label_8053524C;
    case 0x80535250u: goto label_80535250;
    case 0x80535254u: goto label_80535254;
    case 0x80535258u: goto label_80535258;
    case 0x8053525Cu: goto label_8053525C;
    case 0x80535260u: goto label_80535260;
    case 0x80535264u: goto label_80535264;
    case 0x80535268u: goto label_80535268;
    case 0x8053526Cu: goto label_8053526C;
    case 0x80535270u: goto label_80535270;
    case 0x80535274u: goto label_80535274;
    case 0x80535278u: goto label_80535278;
    case 0x8053527Cu: goto label_8053527C;
    case 0x80535280u: goto label_80535280;
    case 0x80535284u: goto label_80535284;
    case 0x80535288u: goto label_80535288;
    case 0x8053528Cu: goto label_8053528C;
    case 0x80535290u: goto label_80535290;
    case 0x80535294u: goto label_80535294;
    case 0x80535298u: goto label_80535298;
    case 0x8053529Cu: goto label_8053529C;
    case 0x805352A0u: goto label_805352A0;
    case 0x805352A4u: goto label_805352A4;
    case 0x805352A8u: goto label_805352A8;
    case 0x805352ACu: goto label_805352AC;
    case 0x805352B0u: goto label_805352B0;
    case 0x805352B4u: goto label_805352B4;
    case 0x805352B8u: goto label_805352B8;
    case 0x805352BCu: goto label_805352BC;
    case 0x805352C0u: goto label_805352C0;
    case 0x805352C4u: goto label_805352C4;
    case 0x805352C8u: goto label_805352C8;
    case 0x805352CCu: goto label_805352CC;
    case 0x805352D0u: goto label_805352D0;
    case 0x805352D4u: goto label_805352D4;
    case 0x805352D8u: goto label_805352D8;
    case 0x805352DCu: goto label_805352DC;
    case 0x805352E0u: goto label_805352E0;
    case 0x805352E4u: goto label_805352E4;
    case 0x805352E8u: goto label_805352E8;
    case 0x805352ECu: goto label_805352EC;
    case 0x805352F0u: goto label_805352F0;
    case 0x805352F4u: goto label_805352F4;
    case 0x805352F8u: goto label_805352F8;
    case 0x805352FCu: goto label_805352FC;
    case 0x80535300u: goto label_80535300;
    case 0x80535304u: goto label_80535304;
    case 0x80535308u: goto label_80535308;
    case 0x8053530Cu: goto label_8053530C;
    case 0x80535310u: goto label_80535310;
    case 0x80535314u: goto label_80535314;
    case 0x80535318u: goto label_80535318;
    case 0x8053531Cu: goto label_8053531C;
    case 0x80535320u: goto label_80535320;
    case 0x80535324u: goto label_80535324;
    case 0x80535328u: goto label_80535328;
    case 0x8053532Cu: goto label_8053532C;
    case 0x80535330u: goto label_80535330;
    case 0x80535334u: goto label_80535334;
    case 0x80535338u: goto label_80535338;
    case 0x8053533Cu: goto label_8053533C;
    case 0x80535340u: goto label_80535340;
    case 0x80535344u: goto label_80535344;
    case 0x80535348u: goto label_80535348;
    case 0x8053534Cu: goto label_8053534C;
    case 0x80535350u: goto label_80535350;
    case 0x80535354u: goto label_80535354;
    case 0x80535358u: goto label_80535358;
    case 0x8053535Cu: goto label_8053535C;
    case 0x80535360u: goto label_80535360;
    case 0x80535364u: goto label_80535364;
    case 0x80535368u: goto label_80535368;
    case 0x8053536Cu: goto label_8053536C;
    case 0x80535370u: goto label_80535370;
    case 0x80535374u: goto label_80535374;
    case 0x80535378u: goto label_80535378;
    case 0x8053537Cu: goto label_8053537C;
    case 0x80535380u: goto label_80535380;
    case 0x80535384u: goto label_80535384;
    case 0x80535388u: goto label_80535388;
    case 0x8053538Cu: goto label_8053538C;
    case 0x80535390u: goto label_80535390;
    case 0x80535394u: goto label_80535394;
    case 0x80535398u: goto label_80535398;
    case 0x8053539Cu: goto label_8053539C;
    case 0x805353A0u: goto label_805353A0;
    case 0x805353A4u: goto label_805353A4;
    case 0x805353A8u: goto label_805353A8;
    case 0x805353ACu: goto label_805353AC;
    case 0x805353B0u: goto label_805353B0;
    case 0x805353B4u: goto label_805353B4;
    case 0x805353B8u: goto label_805353B8;
    case 0x805353BCu: goto label_805353BC;
    case 0x805353C0u: goto label_805353C0;
    case 0x805353C4u: goto label_805353C4;
    case 0x805353C8u: goto label_805353C8;
    case 0x805353CCu: goto label_805353CC;
    case 0x805353D0u: goto label_805353D0;
    case 0x805353D4u: goto label_805353D4;
    case 0x805353D8u: goto label_805353D8;
    case 0x805353DCu: goto label_805353DC;
    case 0x805353E0u: goto label_805353E0;
    case 0x805353E4u: goto label_805353E4;
    case 0x805353E8u: goto label_805353E8;
    case 0x805353ECu: goto label_805353EC;
    case 0x805353F0u: goto label_805353F0;
    case 0x805353F4u: goto label_805353F4;
    case 0x805353F8u: goto label_805353F8;
    case 0x805353FCu: goto label_805353FC;
    case 0x80535400u: goto label_80535400;
    case 0x80535404u: goto label_80535404;
    case 0x80535408u: goto label_80535408;
    case 0x8053540Cu: goto label_8053540C;
    case 0x80535410u: goto label_80535410;
    case 0x80535414u: goto label_80535414;
    case 0x80535418u: goto label_80535418;
    case 0x8053541Cu: goto label_8053541C;
    case 0x80535420u: goto label_80535420;
    case 0x80535424u: goto label_80535424;
    case 0x80535428u: goto label_80535428;
    case 0x8053542Cu: goto label_8053542C;
    case 0x80535430u: goto label_80535430;
    case 0x80535434u: goto label_80535434;
    case 0x80535438u: goto label_80535438;
    case 0x8053543Cu: goto label_8053543C;
    case 0x80535440u: goto label_80535440;
    case 0x80535444u: goto label_80535444;
    case 0x80535448u: goto label_80535448;
    case 0x8053544Cu: goto label_8053544C;
    case 0x80535450u: goto label_80535450;
    case 0x80535454u: goto label_80535454;
    case 0x80535458u: goto label_80535458;
    case 0x8053545Cu: goto label_8053545C;
    case 0x80535460u: goto label_80535460;
    case 0x80535464u: goto label_80535464;
    case 0x80535468u: goto label_80535468;
    case 0x8053546Cu: goto label_8053546C;
    case 0x80535470u: goto label_80535470;
    case 0x80535474u: goto label_80535474;
    case 0x80535478u: goto label_80535478;
    case 0x8053547Cu: goto label_8053547C;
    case 0x80535480u: goto label_80535480;
    case 0x80535484u: goto label_80535484;
    case 0x80535488u: goto label_80535488;
    case 0x8053548Cu: goto label_8053548C;
    case 0x80535490u: goto label_80535490;
    case 0x80535494u: goto label_80535494;
    case 0x80535498u: goto label_80535498;
    case 0x8053549Cu: goto label_8053549C;
    case 0x805354A0u: goto label_805354A0;
    case 0x805354A4u: goto label_805354A4;
    case 0x805354A8u: goto label_805354A8;
    case 0x805354ACu: goto label_805354AC;
    case 0x805354B0u: goto label_805354B0;
    case 0x805354B4u: goto label_805354B4;
    case 0x805354B8u: goto label_805354B8;
    case 0x805354BCu: goto label_805354BC;
    case 0x805354C0u: goto label_805354C0;
    case 0x805354C4u: goto label_805354C4;
    case 0x805354C8u: goto label_805354C8;
    case 0x805354CCu: goto label_805354CC;
    case 0x805354D0u: goto label_805354D0;
    case 0x805354D4u: goto label_805354D4;
    case 0x805354D8u: goto label_805354D8;
    case 0x805354DCu: goto label_805354DC;
    case 0x805354E0u: goto label_805354E0;
    case 0x805354E4u: goto label_805354E4;
    case 0x805354E8u: goto label_805354E8;
    case 0x805354ECu: goto label_805354EC;
    case 0x805354F0u: goto label_805354F0;
    case 0x805354F4u: goto label_805354F4;
    case 0x805354F8u: goto label_805354F8;
    case 0x805354FCu: goto label_805354FC;
    case 0x80535500u: goto label_80535500;
    case 0x80535504u: goto label_80535504;
    case 0x80535508u: goto label_80535508;
    case 0x8053550Cu: goto label_8053550C;
    case 0x80535510u: goto label_80535510;
    case 0x80535514u: goto label_80535514;
    case 0x80535518u: goto label_80535518;
    case 0x8053551Cu: goto label_8053551C;
    case 0x80535520u: goto label_80535520;
    case 0x80535524u: goto label_80535524;
    case 0x80535528u: goto label_80535528;
    case 0x8053552Cu: goto label_8053552C;
    case 0x80535530u: goto label_80535530;
    case 0x80535534u: goto label_80535534;
    case 0x80535538u: goto label_80535538;
    case 0x8053553Cu: goto label_8053553C;
    case 0x80535540u: goto label_80535540;
    case 0x80535544u: goto label_80535544;
    case 0x80535548u: goto label_80535548;
    case 0x8053554Cu: goto label_8053554C;
    case 0x80535550u: goto label_80535550;
    case 0x80535554u: goto label_80535554;
    case 0x80535558u: goto label_80535558;
    case 0x8053555Cu: goto label_8053555C;
    case 0x80535560u: goto label_80535560;
    case 0x80535564u: goto label_80535564;
    case 0x80535568u: goto label_80535568;
    case 0x8053556Cu: goto label_8053556C;
    case 0x80535570u: goto label_80535570;
    case 0x80535574u: goto label_80535574;
    case 0x80535578u: goto label_80535578;
    case 0x8053557Cu: goto label_8053557C;
    case 0x80535580u: goto label_80535580;
    case 0x80535584u: goto label_80535584;
    case 0x80535588u: goto label_80535588;
    case 0x8053558Cu: goto label_8053558C;
    case 0x80535590u: goto label_80535590;
    case 0x80535594u: goto label_80535594;
    case 0x80535598u: goto label_80535598;
    case 0x8053559Cu: goto label_8053559C;
    case 0x805355A0u: goto label_805355A0;
    case 0x805355A4u: goto label_805355A4;
    case 0x805355A8u: goto label_805355A8;
    case 0x805355ACu: goto label_805355AC;
    case 0x805355B0u: goto label_805355B0;
    case 0x805355B4u: goto label_805355B4;
    case 0x805355B8u: goto label_805355B8;
    case 0x805355BCu: goto label_805355BC;
    case 0x805355C0u: goto label_805355C0;
    case 0x805355C4u: goto label_805355C4;
    case 0x805355C8u: goto label_805355C8;
    case 0x805355CCu: goto label_805355CC;
    case 0x805355D0u: goto label_805355D0;
    case 0x805355D4u: goto label_805355D4;
    case 0x805355D8u: goto label_805355D8;
    case 0x805355DCu: goto label_805355DC;
    case 0x805355E0u: goto label_805355E0;
    case 0x805355E4u: goto label_805355E4;
    case 0x805355E8u: goto label_805355E8;
    case 0x805355ECu: goto label_805355EC;
    case 0x805355F0u: goto label_805355F0;
    case 0x805355F4u: goto label_805355F4;
    case 0x805355F8u: goto label_805355F8;
    case 0x805355FCu: goto label_805355FC;
    case 0x80535600u: goto label_80535600;
    case 0x80535604u: goto label_80535604;
    case 0x80535608u: goto label_80535608;
    case 0x8053560Cu: goto label_8053560C;
    case 0x80535610u: goto label_80535610;
    case 0x80535614u: goto label_80535614;
    case 0x80535618u: goto label_80535618;
    case 0x8053561Cu: goto label_8053561C;
    case 0x80535620u: goto label_80535620;
    case 0x80535624u: goto label_80535624;
    case 0x80535628u: goto label_80535628;
    case 0x8053562Cu: goto label_8053562C;
    case 0x80535630u: goto label_80535630;
    case 0x80535634u: goto label_80535634;
    case 0x80535638u: goto label_80535638;
    case 0x8053563Cu: goto label_8053563C;
    case 0x80535640u: goto label_80535640;
    case 0x80535644u: goto label_80535644;
    case 0x80535648u: goto label_80535648;
    case 0x8053564Cu: goto label_8053564C;
    case 0x80535650u: goto label_80535650;
    case 0x80535654u: goto label_80535654;
    case 0x80535658u: goto label_80535658;
    case 0x8053565Cu: goto label_8053565C;
    case 0x80535660u: goto label_80535660;
    case 0x80535664u: goto label_80535664;
    case 0x80535668u: goto label_80535668;
    case 0x8053566Cu: goto label_8053566C;
    case 0x80535670u: goto label_80535670;
    case 0x80535674u: goto label_80535674;
    case 0x80535678u: goto label_80535678;
    case 0x8053567Cu: goto label_8053567C;
    case 0x80535680u: goto label_80535680;
    case 0x80535684u: goto label_80535684;
    case 0x80535688u: goto label_80535688;
    case 0x8053568Cu: goto label_8053568C;
    case 0x80535690u: goto label_80535690;
    case 0x80535694u: goto label_80535694;
    case 0x80535698u: goto label_80535698;
    case 0x8053569Cu: goto label_8053569C;
    case 0x805356A0u: goto label_805356A0;
    case 0x805356A4u: goto label_805356A4;
    case 0x805356A8u: goto label_805356A8;
    case 0x805356ACu: goto label_805356AC;
    case 0x805356B0u: goto label_805356B0;
    case 0x805356B4u: goto label_805356B4;
    case 0x805356B8u: goto label_805356B8;
    case 0x805356BCu: goto label_805356BC;
    case 0x805356C0u: goto label_805356C0;
    case 0x805356C4u: goto label_805356C4;
    case 0x805356C8u: goto label_805356C8;
    case 0x805356CCu: goto label_805356CC;
    case 0x805356D0u: goto label_805356D0;
    case 0x805356D4u: goto label_805356D4;
    case 0x805356D8u: goto label_805356D8;
    case 0x805356DCu: goto label_805356DC;
    case 0x805356E0u: goto label_805356E0;
    case 0x805356E4u: goto label_805356E4;
    case 0x805356E8u: goto label_805356E8;
    case 0x805356ECu: goto label_805356EC;
    case 0x805356F0u: goto label_805356F0;
    case 0x805356F4u: goto label_805356F4;
    case 0x805356F8u: goto label_805356F8;
    case 0x805356FCu: goto label_805356FC;
    case 0x80535700u: goto label_80535700;
    case 0x80535704u: goto label_80535704;
    case 0x80535708u: goto label_80535708;
    case 0x8053570Cu: goto label_8053570C;
    case 0x80535710u: goto label_80535710;
    case 0x80535714u: goto label_80535714;
    case 0x80535718u: goto label_80535718;
    case 0x8053571Cu: goto label_8053571C;
    case 0x80535720u: goto label_80535720;
    case 0x80535724u: goto label_80535724;
    case 0x80535728u: goto label_80535728;
    case 0x8053572Cu: goto label_8053572C;
    case 0x80535730u: goto label_80535730;
    case 0x80535734u: goto label_80535734;
    case 0x80535738u: goto label_80535738;
    case 0x8053573Cu: goto label_8053573C;
    case 0x80535740u: goto label_80535740;
    case 0x80535744u: goto label_80535744;
    case 0x80535748u: goto label_80535748;
    case 0x8053574Cu: goto label_8053574C;
    case 0x80535750u: goto label_80535750;
    case 0x80535754u: goto label_80535754;
    case 0x80535758u: goto label_80535758;
    case 0x8053575Cu: goto label_8053575C;
    case 0x80535760u: goto label_80535760;
    case 0x80535764u: goto label_80535764;
    case 0x80535768u: goto label_80535768;
    case 0x8053576Cu: goto label_8053576C;
    case 0x80535770u: goto label_80535770;
    case 0x80535774u: goto label_80535774;
    case 0x80535778u: goto label_80535778;
    case 0x8053577Cu: goto label_8053577C;
    case 0x80535780u: goto label_80535780;
    case 0x80535784u: goto label_80535784;
    case 0x80535788u: goto label_80535788;
    case 0x8053578Cu: goto label_8053578C;
    case 0x80535790u: goto label_80535790;
    case 0x80535794u: goto label_80535794;
    case 0x80535798u: goto label_80535798;
    case 0x8053579Cu: goto label_8053579C;
    case 0x805357A0u: goto label_805357A0;
    case 0x805357A4u: goto label_805357A4;
    case 0x805357A8u: goto label_805357A8;
    case 0x805357ACu: goto label_805357AC;
    case 0x805357B0u: goto label_805357B0;
    case 0x805357B4u: goto label_805357B4;
    case 0x805357B8u: goto label_805357B8;
    case 0x805357BCu: goto label_805357BC;
    case 0x805357C0u: goto label_805357C0;
    case 0x805357C4u: goto label_805357C4;
    case 0x805357C8u: goto label_805357C8;
    case 0x805357CCu: goto label_805357CC;
    case 0x805357D0u: goto label_805357D0;
    case 0x805357D4u: goto label_805357D4;
    case 0x805357D8u: goto label_805357D8;
    case 0x805357DCu: goto label_805357DC;
    case 0x805357E0u: goto label_805357E0;
    case 0x805357E4u: goto label_805357E4;
    case 0x805357E8u: goto label_805357E8;
    case 0x805357ECu: goto label_805357EC;
    case 0x805357F0u: goto label_805357F0;
    case 0x805357F4u: goto label_805357F4;
    case 0x805357F8u: goto label_805357F8;
    case 0x805357FCu: goto label_805357FC;
    case 0x80535800u: goto label_80535800;
    case 0x80535804u: goto label_80535804;
    case 0x80535808u: goto label_80535808;
    case 0x8053580Cu: goto label_8053580C;
    case 0x80535810u: goto label_80535810;
    case 0x80535814u: goto label_80535814;
    case 0x80535818u: goto label_80535818;
    case 0x8053581Cu: goto label_8053581C;
    case 0x80535820u: goto label_80535820;
    case 0x80535824u: goto label_80535824;
    case 0x80535828u: goto label_80535828;
    case 0x8053582Cu: goto label_8053582C;
    case 0x80535830u: goto label_80535830;
    case 0x80535834u: goto label_80535834;
    case 0x80535838u: goto label_80535838;
    case 0x8053583Cu: goto label_8053583C;
    case 0x80535840u: goto label_80535840;
    case 0x80535844u: goto label_80535844;
    case 0x80535848u: goto label_80535848;
    case 0x8053584Cu: goto label_8053584C;
    case 0x80535850u: goto label_80535850;
    case 0x80535854u: goto label_80535854;
    case 0x80535858u: goto label_80535858;
    case 0x8053585Cu: goto label_8053585C;
    case 0x80535860u: goto label_80535860;
    case 0x80535864u: goto label_80535864;
    case 0x80535868u: goto label_80535868;
    case 0x8053586Cu: goto label_8053586C;
    case 0x80535870u: goto label_80535870;
    case 0x80535874u: goto label_80535874;
    case 0x80535878u: goto label_80535878;
    case 0x8053587Cu: goto label_8053587C;
    case 0x80535880u: goto label_80535880;
    case 0x80535884u: goto label_80535884;
    case 0x80535888u: goto label_80535888;
    case 0x8053588Cu: goto label_8053588C;
    case 0x80535890u: goto label_80535890;
    case 0x80535894u: goto label_80535894;
    case 0x80535898u: goto label_80535898;
    case 0x8053589Cu: goto label_8053589C;
    case 0x805358A0u: goto label_805358A0;
    case 0x805358A4u: goto label_805358A4;
    case 0x805358A8u: goto label_805358A8;
    case 0x805358ACu: goto label_805358AC;
    case 0x805358B0u: goto label_805358B0;
    case 0x805358B4u: goto label_805358B4;
    case 0x805358B8u: goto label_805358B8;
    case 0x805358BCu: goto label_805358BC;
    case 0x805358C0u: goto label_805358C0;
    case 0x805358C4u: goto label_805358C4;
    case 0x805358C8u: goto label_805358C8;
    case 0x805358CCu: goto label_805358CC;
    case 0x805358D0u: goto label_805358D0;
    case 0x805358D4u: goto label_805358D4;
    case 0x805358D8u: goto label_805358D8;
    case 0x805358DCu: goto label_805358DC;
    case 0x805358E0u: goto label_805358E0;
    case 0x805358E4u: goto label_805358E4;
    case 0x805358E8u: goto label_805358E8;
    case 0x805358ECu: goto label_805358EC;
    case 0x805358F0u: goto label_805358F0;
    case 0x805358F4u: goto label_805358F4;
    case 0x805358F8u: goto label_805358F8;
    case 0x805358FCu: goto label_805358FC;
    case 0x80535900u: goto label_80535900;
    case 0x80535904u: goto label_80535904;
    case 0x80535908u: goto label_80535908;
    case 0x8053590Cu: goto label_8053590C;
    case 0x80535910u: goto label_80535910;
    case 0x80535914u: goto label_80535914;
    case 0x80535918u: goto label_80535918;
    case 0x8053591Cu: goto label_8053591C;
    case 0x80535920u: goto label_80535920;
    case 0x80535924u: goto label_80535924;
    case 0x80535928u: goto label_80535928;
    case 0x8053592Cu: goto label_8053592C;
    case 0x80535930u: goto label_80535930;
    case 0x80535934u: goto label_80535934;
    case 0x80535938u: goto label_80535938;
    case 0x8053593Cu: goto label_8053593C;
    case 0x80535940u: goto label_80535940;
    case 0x80535944u: goto label_80535944;
    case 0x80535948u: goto label_80535948;
    case 0x8053594Cu: goto label_8053594C;
    case 0x80535950u: goto label_80535950;
    case 0x80535954u: goto label_80535954;
    case 0x80535958u: goto label_80535958;
    case 0x8053595Cu: goto label_8053595C;
    case 0x80535960u: goto label_80535960;
    case 0x80535964u: goto label_80535964;
    case 0x80535968u: goto label_80535968;
    case 0x8053596Cu: goto label_8053596C;
    case 0x80535970u: goto label_80535970;
    case 0x80535974u: goto label_80535974;
    case 0x80535978u: goto label_80535978;
    case 0x8053597Cu: goto label_8053597C;
    case 0x80535980u: goto label_80535980;
    case 0x80535984u: goto label_80535984;
    case 0x80535988u: goto label_80535988;
    case 0x8053598Cu: goto label_8053598C;
    case 0x80535990u: goto label_80535990;
    case 0x80535994u: goto label_80535994;
    case 0x80535998u: goto label_80535998;
    case 0x8053599Cu: goto label_8053599C;
    case 0x805359A0u: goto label_805359A0;
    case 0x805359A4u: goto label_805359A4;
    case 0x805359A8u: goto label_805359A8;
    case 0x805359ACu: goto label_805359AC;
    case 0x805359B0u: goto label_805359B0;
    case 0x805359B4u: goto label_805359B4;
    case 0x805359B8u: goto label_805359B8;
    case 0x805359BCu: goto label_805359BC;
    case 0x805359C0u: goto label_805359C0;
    case 0x805359C4u: goto label_805359C4;
    case 0x805359C8u: goto label_805359C8;
    case 0x805359CCu: goto label_805359CC;
    case 0x805359D0u: goto label_805359D0;
    case 0x805359D4u: goto label_805359D4;
    case 0x805359D8u: goto label_805359D8;
    case 0x805359DCu: goto label_805359DC;
    case 0x805359E0u: goto label_805359E0;
    case 0x805359E4u: goto label_805359E4;
    case 0x805359E8u: goto label_805359E8;
    case 0x805359ECu: goto label_805359EC;
    case 0x805359F0u: goto label_805359F0;
    case 0x805359F4u: goto label_805359F4;
    case 0x805359F8u: goto label_805359F8;
    case 0x805359FCu: goto label_805359FC;
    case 0x80535A00u: goto label_80535A00;
    case 0x80535A04u: goto label_80535A04;
    case 0x80535A08u: goto label_80535A08;
    case 0x80535A0Cu: goto label_80535A0C;
    case 0x80535A10u: goto label_80535A10;
    case 0x80535A14u: goto label_80535A14;
    case 0x80535A18u: goto label_80535A18;
    case 0x80535A1Cu: goto label_80535A1C;
    case 0x80535A20u: goto label_80535A20;
    case 0x80535A24u: goto label_80535A24;
    case 0x80535A28u: goto label_80535A28;
    case 0x80535A2Cu: goto label_80535A2C;
    case 0x80535A30u: goto label_80535A30;
    case 0x80535A34u: goto label_80535A34;
    case 0x80535A38u: goto label_80535A38;
    case 0x80535A3Cu: goto label_80535A3C;
    case 0x80535A40u: goto label_80535A40;
    case 0x80535A44u: goto label_80535A44;
    case 0x80535A48u: goto label_80535A48;
    case 0x80535A4Cu: goto label_80535A4C;
    case 0x80535A50u: goto label_80535A50;
    case 0x80535A54u: goto label_80535A54;
    case 0x80535A58u: goto label_80535A58;
    case 0x80535A5Cu: goto label_80535A5C;
    case 0x80535A60u: goto label_80535A60;
    case 0x80535A64u: goto label_80535A64;
    case 0x80535A68u: goto label_80535A68;
    case 0x80535A6Cu: goto label_80535A6C;
    case 0x80535A70u: goto label_80535A70;
    case 0x80535A74u: goto label_80535A74;
    case 0x80535A78u: goto label_80535A78;
    case 0x80535A7Cu: goto label_80535A7C;
    case 0x80535A80u: goto label_80535A80;
    case 0x80535A84u: goto label_80535A84;
    case 0x80535A88u: goto label_80535A88;
    case 0x80535A8Cu: goto label_80535A8C;
    case 0x80535A90u: goto label_80535A90;
    case 0x80535A94u: goto label_80535A94;
    case 0x80535A98u: goto label_80535A98;
    case 0x80535A9Cu: goto label_80535A9C;
    case 0x80535AA0u: goto label_80535AA0;
    case 0x80535AA4u: goto label_80535AA4;
    case 0x80535AA8u: goto label_80535AA8;
    case 0x80535AACu: goto label_80535AAC;
    case 0x80535AB0u: goto label_80535AB0;
    case 0x80535AB4u: goto label_80535AB4;
    case 0x80535AB8u: goto label_80535AB8;
    case 0x80535ABCu: goto label_80535ABC;
    case 0x80535AC0u: goto label_80535AC0;
    case 0x80535AC4u: goto label_80535AC4;
    case 0x80535AC8u: goto label_80535AC8;
    case 0x80535ACCu: goto label_80535ACC;
    case 0x80535AD0u: goto label_80535AD0;
    case 0x80535AD4u: goto label_80535AD4;
    case 0x80535AD8u: goto label_80535AD8;
    case 0x80535ADCu: goto label_80535ADC;
    case 0x80535AE0u: goto label_80535AE0;
    case 0x80535AE4u: goto label_80535AE4;
    case 0x80535AE8u: goto label_80535AE8;
    case 0x80535AECu: goto label_80535AEC;
    case 0x80535AF0u: goto label_80535AF0;
    case 0x80535AF4u: goto label_80535AF4;
    case 0x80535AF8u: goto label_80535AF8;
    case 0x80535AFCu: goto label_80535AFC;
    case 0x80535B00u: goto label_80535B00;
    case 0x80535B04u: goto label_80535B04;
    case 0x80535B08u: goto label_80535B08;
    case 0x80535B0Cu: goto label_80535B0C;
    case 0x80535B10u: goto label_80535B10;
    case 0x80535B14u: goto label_80535B14;
    case 0x80535B18u: goto label_80535B18;
    case 0x80535B1Cu: goto label_80535B1C;
    case 0x80535B20u: goto label_80535B20;
    case 0x80535B24u: goto label_80535B24;
    case 0x80535B28u: goto label_80535B28;
    case 0x80535B2Cu: goto label_80535B2C;
    case 0x80535B30u: goto label_80535B30;
    case 0x80535B34u: goto label_80535B34;
    case 0x80535B38u: goto label_80535B38;
    case 0x80535B3Cu: goto label_80535B3C;
    case 0x80535B40u: goto label_80535B40;
    case 0x80535B44u: goto label_80535B44;
    case 0x80535B48u: goto label_80535B48;
    case 0x80535B4Cu: goto label_80535B4C;
    case 0x80535B50u: goto label_80535B50;
    case 0x80535B54u: goto label_80535B54;
    case 0x80535B58u: goto label_80535B58;
    case 0x80535B5Cu: goto label_80535B5C;
    case 0x80535B60u: goto label_80535B60;
    case 0x80535B64u: goto label_80535B64;
    case 0x80535B68u: goto label_80535B68;
    case 0x80535B6Cu: goto label_80535B6C;
    case 0x80535B70u: goto label_80535B70;
    case 0x80535B74u: goto label_80535B74;
    case 0x80535B78u: goto label_80535B78;
    case 0x80535B7Cu: goto label_80535B7C;
    case 0x80535B80u: goto label_80535B80;
    case 0x80535B84u: goto label_80535B84;
    case 0x80535B88u: goto label_80535B88;
    case 0x80535B8Cu: goto label_80535B8C;
    case 0x80535B90u: goto label_80535B90;
    case 0x80535B94u: goto label_80535B94;
    case 0x80535B98u: goto label_80535B98;
    case 0x80535B9Cu: goto label_80535B9C;
    case 0x80535BA0u: goto label_80535BA0;
    case 0x80535BA4u: goto label_80535BA4;
    case 0x80535BA8u: goto label_80535BA8;
    case 0x80535BACu: goto label_80535BAC;
    case 0x80535BB0u: goto label_80535BB0;
    case 0x80535BB4u: goto label_80535BB4;
    case 0x80535BB8u: goto label_80535BB8;
    case 0x80535BBCu: goto label_80535BBC;
    case 0x80535BC0u: goto label_80535BC0;
    case 0x80535BC4u: goto label_80535BC4;
    case 0x80535BC8u: goto label_80535BC8;
    case 0x80535BCCu: goto label_80535BCC;
    case 0x80535BD0u: goto label_80535BD0;
    case 0x80535BD4u: goto label_80535BD4;
    case 0x80535BD8u: goto label_80535BD8;
    case 0x80535BDCu: goto label_80535BDC;
    case 0x80535BE0u: goto label_80535BE0;
    case 0x80535BE4u: goto label_80535BE4;
    case 0x80535BE8u: goto label_80535BE8;
    case 0x80535BECu: goto label_80535BEC;
    case 0x80535BF0u: goto label_80535BF0;
    case 0x80535BF4u: goto label_80535BF4;
    case 0x80535BF8u: goto label_80535BF8;
    case 0x80535BFCu: goto label_80535BFC;
    case 0x80535C00u: goto label_80535C00;
    case 0x80535C04u: goto label_80535C04;
    case 0x80535C08u: goto label_80535C08;
    case 0x80535C0Cu: goto label_80535C0C;
    case 0x80535C10u: goto label_80535C10;
    case 0x80535C14u: goto label_80535C14;
    case 0x80535C18u: goto label_80535C18;
    case 0x80535C1Cu: goto label_80535C1C;
    case 0x80535C20u: goto label_80535C20;
    case 0x80535C24u: goto label_80535C24;
    case 0x80535C28u: goto label_80535C28;
    case 0x80535C2Cu: goto label_80535C2C;
    case 0x80535C30u: goto label_80535C30;
    case 0x80535C34u: goto label_80535C34;
    case 0x80535C38u: goto label_80535C38;
    case 0x80535C3Cu: goto label_80535C3C;
    case 0x80535C40u: goto label_80535C40;
    case 0x80535C44u: goto label_80535C44;
    case 0x80535C48u: goto label_80535C48;
    case 0x80535C4Cu: goto label_80535C4C;
    case 0x80535C50u: goto label_80535C50;
    case 0x80535C54u: goto label_80535C54;
    case 0x80535C58u: goto label_80535C58;
    case 0x80535C5Cu: goto label_80535C5C;
    case 0x80535C60u: goto label_80535C60;
    case 0x80535C64u: goto label_80535C64;
    case 0x80535C68u: goto label_80535C68;
    case 0x80535C6Cu: goto label_80535C6C;
    case 0x80535C70u: goto label_80535C70;
    case 0x80535C74u: goto label_80535C74;
    case 0x80535C78u: goto label_80535C78;
    case 0x80535C7Cu: goto label_80535C7C;
    case 0x80535C80u: goto label_80535C80;
    case 0x80535C84u: goto label_80535C84;
    case 0x80535C88u: goto label_80535C88;
    case 0x80535C8Cu: goto label_80535C8C;
    case 0x80535C90u: goto label_80535C90;
    case 0x80535C94u: goto label_80535C94;
    case 0x80535C98u: goto label_80535C98;
    case 0x80535C9Cu: goto label_80535C9C;
    case 0x80535CA0u: goto label_80535CA0;
    case 0x80535CA4u: goto label_80535CA4;
    case 0x80535CA8u: goto label_80535CA8;
    case 0x80535CACu: goto label_80535CAC;
    case 0x80535CB0u: goto label_80535CB0;
    case 0x80535CB4u: goto label_80535CB4;
    case 0x80535CB8u: goto label_80535CB8;
    case 0x80535CBCu: goto label_80535CBC;
    case 0x80535CC0u: goto label_80535CC0;
    case 0x80535CC4u: goto label_80535CC4;
    case 0x80535CC8u: goto label_80535CC8;
    case 0x80535CCCu: goto label_80535CCC;
    case 0x80535CD0u: goto label_80535CD0;
    case 0x80535CD4u: goto label_80535CD4;
    case 0x80535CD8u: goto label_80535CD8;
    case 0x80535CDCu: goto label_80535CDC;
    case 0x80535CE0u: goto label_80535CE0;
    case 0x80535CE4u: goto label_80535CE4;
    case 0x80535CE8u: goto label_80535CE8;
    case 0x80535CECu: goto label_80535CEC;
    case 0x80535CF0u: goto label_80535CF0;
    case 0x80535CF4u: goto label_80535CF4;
    case 0x80535CF8u: goto label_80535CF8;
    case 0x80535CFCu: goto label_80535CFC;
    case 0x80535D00u: goto label_80535D00;
    case 0x80535D04u: goto label_80535D04;
    case 0x80535D08u: goto label_80535D08;
    case 0x80535D0Cu: goto label_80535D0C;
    case 0x80535D10u: goto label_80535D10;
    case 0x80535D14u: goto label_80535D14;
    case 0x80535D18u: goto label_80535D18;
    case 0x80535D1Cu: goto label_80535D1C;
    case 0x80535D20u: goto label_80535D20;
    case 0x80535D24u: goto label_80535D24;
    case 0x80535D28u: goto label_80535D28;
    case 0x80535D2Cu: goto label_80535D2C;
    case 0x80535D30u: goto label_80535D30;
    case 0x80535D34u: goto label_80535D34;
    case 0x80535D38u: goto label_80535D38;
    case 0x80535D3Cu: goto label_80535D3C;
    case 0x80535D40u: goto label_80535D40;
    case 0x80535D44u: goto label_80535D44;
    case 0x80535D48u: goto label_80535D48;
    case 0x80535D4Cu: goto label_80535D4C;
    case 0x80535D50u: goto label_80535D50;
    case 0x80535D54u: goto label_80535D54;
    case 0x80535D58u: goto label_80535D58;
    case 0x80535D5Cu: goto label_80535D5C;
    case 0x80535D60u: goto label_80535D60;
    case 0x80535D64u: goto label_80535D64;
    case 0x80535D68u: goto label_80535D68;
    case 0x80535D6Cu: goto label_80535D6C;
    case 0x80535D70u: goto label_80535D70;
    case 0x80535D74u: goto label_80535D74;
    case 0x80535D78u: goto label_80535D78;
    case 0x80535D7Cu: goto label_80535D7C;
    case 0x80535D80u: goto label_80535D80;
    case 0x80535D84u: goto label_80535D84;
    case 0x80535D88u: goto label_80535D88;
    case 0x80535D8Cu: goto label_80535D8C;
    case 0x80535D90u: goto label_80535D90;
    case 0x80535D94u: goto label_80535D94;
    case 0x80535D98u: goto label_80535D98;
    case 0x80535D9Cu: goto label_80535D9C;
    case 0x80535DA0u: goto label_80535DA0;
    case 0x80535DA4u: goto label_80535DA4;
    case 0x80535DA8u: goto label_80535DA8;
    case 0x80535DACu: goto label_80535DAC;
    case 0x80535DB0u: goto label_80535DB0;
    case 0x80535DB4u: goto label_80535DB4;
    case 0x80535DB8u: goto label_80535DB8;
    case 0x80535DBCu: goto label_80535DBC;
    case 0x80535DC0u: goto label_80535DC0;
    case 0x80535DC4u: goto label_80535DC4;
    case 0x80535DC8u: goto label_80535DC8;
    case 0x80535DCCu: goto label_80535DCC;
    case 0x80535DD0u: goto label_80535DD0;
    case 0x80535DD4u: goto label_80535DD4;
    case 0x80535DD8u: goto label_80535DD8;
    case 0x80535DDCu: goto label_80535DDC;
    case 0x80535DE0u: goto label_80535DE0;
    case 0x80535DE4u: goto label_80535DE4;
    case 0x80535DE8u: goto label_80535DE8;
    case 0x80535DECu: goto label_80535DEC;
    case 0x80535DF0u: goto label_80535DF0;
    case 0x80535DF4u: goto label_80535DF4;
    case 0x80535DF8u: goto label_80535DF8;
    case 0x80535DFCu: goto label_80535DFC;
    case 0x80535E00u: goto label_80535E00;
    case 0x80535E04u: goto label_80535E04;
    case 0x80535E08u: goto label_80535E08;
    case 0x80535E0Cu: goto label_80535E0C;
    case 0x80535E10u: goto label_80535E10;
    case 0x80535E14u: goto label_80535E14;
    case 0x80535E18u: goto label_80535E18;
    case 0x80535E1Cu: goto label_80535E1C;
    case 0x80535E20u: goto label_80535E20;
    case 0x80535E24u: goto label_80535E24;
    case 0x80535E28u: goto label_80535E28;
    case 0x80535E2Cu: goto label_80535E2C;
    case 0x80535E30u: goto label_80535E30;
    case 0x80535E34u: goto label_80535E34;
    case 0x80535E38u: goto label_80535E38;
    case 0x80535E3Cu: goto label_80535E3C;
    case 0x80535E40u: goto label_80535E40;
    case 0x80535E44u: goto label_80535E44;
    case 0x80535E48u: goto label_80535E48;
    case 0x80535E4Cu: goto label_80535E4C;
    case 0x80535E50u: goto label_80535E50;
    case 0x80535E54u: goto label_80535E54;
    case 0x80535E58u: goto label_80535E58;
    case 0x80535E5Cu: goto label_80535E5C;
    case 0x80535E60u: goto label_80535E60;
    case 0x80535E64u: goto label_80535E64;
    case 0x80535E68u: goto label_80535E68;
    case 0x80535E6Cu: goto label_80535E6C;
    case 0x80535E70u: goto label_80535E70;
    case 0x80535E74u: goto label_80535E74;
    case 0x80535E78u: goto label_80535E78;
    case 0x80535E7Cu: goto label_80535E7C;
    case 0x80535E80u: goto label_80535E80;
    case 0x80535E84u: goto label_80535E84;
    case 0x80535E88u: goto label_80535E88;
    case 0x80535E8Cu: goto label_80535E8C;
    case 0x80535E90u: goto label_80535E90;
    case 0x80535E94u: goto label_80535E94;
    case 0x80535E98u: goto label_80535E98;
    case 0x80535E9Cu: goto label_80535E9C;
    case 0x80535EA0u: goto label_80535EA0;
    case 0x80535EA4u: goto label_80535EA4;
    case 0x80535EA8u: goto label_80535EA8;
    case 0x80535EACu: goto label_80535EAC;
    case 0x80535EB0u: goto label_80535EB0;
    case 0x80535EB4u: goto label_80535EB4;
    case 0x80535EB8u: goto label_80535EB8;
    case 0x80535EBCu: goto label_80535EBC;
    case 0x80535EC0u: goto label_80535EC0;
    case 0x80535EC4u: goto label_80535EC4;
    case 0x80535EC8u: goto label_80535EC8;
    case 0x80535ECCu: goto label_80535ECC;
    case 0x80535ED0u: goto label_80535ED0;
    case 0x80535ED4u: goto label_80535ED4;
    case 0x80535ED8u: goto label_80535ED8;
    case 0x80535EDCu: goto label_80535EDC;
    case 0x80535EE0u: goto label_80535EE0;
    case 0x80535EE4u: goto label_80535EE4;
    case 0x80535EE8u: goto label_80535EE8;
    case 0x80535EECu: goto label_80535EEC;
    case 0x80535EF0u: goto label_80535EF0;
    case 0x80535EF4u: goto label_80535EF4;
    case 0x80535EF8u: goto label_80535EF8;
    case 0x80535EFCu: goto label_80535EFC;
    case 0x80535F00u: goto label_80535F00;
    case 0x80535F04u: goto label_80535F04;
    case 0x80535F08u: goto label_80535F08;
    case 0x80535F0Cu: goto label_80535F0C;
    case 0x80535F10u: goto label_80535F10;
    case 0x80535F14u: goto label_80535F14;
    case 0x80535F18u: goto label_80535F18;
    case 0x80535F1Cu: goto label_80535F1C;
    case 0x80535F20u: goto label_80535F20;
    case 0x80535F24u: goto label_80535F24;
    case 0x80535F28u: goto label_80535F28;
    case 0x80535F2Cu: goto label_80535F2C;
    case 0x80535F30u: goto label_80535F30;
    case 0x80535F34u: goto label_80535F34;
    case 0x80535F38u: goto label_80535F38;
    case 0x80535F3Cu: goto label_80535F3C;
    case 0x80535F40u: goto label_80535F40;
    case 0x80535F44u: goto label_80535F44;
    case 0x80535F48u: goto label_80535F48;
    case 0x80535F4Cu: goto label_80535F4C;
    case 0x80535F50u: goto label_80535F50;
    case 0x80535F54u: goto label_80535F54;
    case 0x80535F58u: goto label_80535F58;
    case 0x80535F5Cu: goto label_80535F5C;
    case 0x80535F60u: goto label_80535F60;
    case 0x80535F64u: goto label_80535F64;
    case 0x80535F68u: goto label_80535F68;
    case 0x80535F6Cu: goto label_80535F6C;
    case 0x80535F70u: goto label_80535F70;
    case 0x80535F74u: goto label_80535F74;
    case 0x80535F78u: goto label_80535F78;
    case 0x80535F7Cu: goto label_80535F7C;
    case 0x80535F80u: goto label_80535F80;
    case 0x80535F84u: goto label_80535F84;
    case 0x80535F88u: goto label_80535F88;
    case 0x80535F8Cu: goto label_80535F8C;
    case 0x80535F90u: goto label_80535F90;
    case 0x80535F94u: goto label_80535F94;
    case 0x80535F98u: goto label_80535F98;
    case 0x80535F9Cu: goto label_80535F9C;
    case 0x80535FA0u: goto label_80535FA0;
    case 0x80535FA4u: goto label_80535FA4;
    case 0x80535FA8u: goto label_80535FA8;
    case 0x80535FACu: goto label_80535FAC;
    case 0x80535FB0u: goto label_80535FB0;
    case 0x80535FB4u: goto label_80535FB4;
    case 0x80535FB8u: goto label_80535FB8;
    case 0x80535FBCu: goto label_80535FBC;
    case 0x80535FC0u: goto label_80535FC0;
    case 0x80535FC4u: goto label_80535FC4;
    case 0x80535FC8u: goto label_80535FC8;
    case 0x80535FCCu: goto label_80535FCC;
    case 0x80535FD0u: goto label_80535FD0;
    case 0x80535FD4u: goto label_80535FD4;
    case 0x80535FD8u: goto label_80535FD8;
    case 0x80535FDCu: goto label_80535FDC;
    case 0x80535FE0u: goto label_80535FE0;
    case 0x80535FE4u: goto label_80535FE4;
    case 0x80535FE8u: goto label_80535FE8;
    case 0x80535FECu: goto label_80535FEC;
    case 0x80535FF0u: goto label_80535FF0;
    case 0x80535FF4u: goto label_80535FF4;
    case 0x80535FF8u: goto label_80535FF8;
    case 0x80535FFCu: goto label_80535FFC;
    case 0x80536000u: goto label_80536000;
    case 0x80536004u: goto label_80536004;
    case 0x80536008u: goto label_80536008;
    case 0x8053600Cu: goto label_8053600C;
    case 0x80536010u: goto label_80536010;
    case 0x80536014u: goto label_80536014;
    case 0x80536018u: goto label_80536018;
    case 0x8053601Cu: goto label_8053601C;
    case 0x80536020u: goto label_80536020;
    case 0x80536024u: goto label_80536024;
    case 0x80536028u: goto label_80536028;
    case 0x8053602Cu: goto label_8053602C;
    case 0x80536030u: goto label_80536030;
    case 0x80536034u: goto label_80536034;
    case 0x80536038u: goto label_80536038;
    case 0x8053603Cu: goto label_8053603C;
    case 0x80536040u: goto label_80536040;
    case 0x80536044u: goto label_80536044;
    case 0x80536048u: goto label_80536048;
    case 0x8053604Cu: goto label_8053604C;
    case 0x80536050u: goto label_80536050;
    case 0x80536054u: goto label_80536054;
    case 0x80536058u: goto label_80536058;
    case 0x8053605Cu: goto label_8053605C;
    case 0x80536060u: goto label_80536060;
    case 0x80536064u: goto label_80536064;
    case 0x80536068u: goto label_80536068;
    case 0x8053606Cu: goto label_8053606C;
    case 0x80536070u: goto label_80536070;
    case 0x80536074u: goto label_80536074;
    case 0x80536078u: goto label_80536078;
    case 0x8053607Cu: goto label_8053607C;
    case 0x80536080u: goto label_80536080;
    case 0x80536084u: goto label_80536084;
    case 0x80536088u: goto label_80536088;
    case 0x8053608Cu: goto label_8053608C;
    case 0x80536090u: goto label_80536090;
    case 0x80536094u: goto label_80536094;
    case 0x80536098u: goto label_80536098;
    case 0x8053609Cu: goto label_8053609C;
    case 0x805360A0u: goto label_805360A0;
    case 0x805360A4u: goto label_805360A4;
    case 0x805360A8u: goto label_805360A8;
    case 0x805360ACu: goto label_805360AC;
    case 0x805360B0u: goto label_805360B0;
    case 0x805360B4u: goto label_805360B4;
    case 0x805360B8u: goto label_805360B8;
    case 0x805360BCu: goto label_805360BC;
    case 0x805360C0u: goto label_805360C0;
    case 0x805360C4u: goto label_805360C4;
    case 0x805360C8u: goto label_805360C8;
    case 0x805360CCu: goto label_805360CC;
    case 0x805360D0u: goto label_805360D0;
    case 0x805360D4u: goto label_805360D4;
    case 0x805360D8u: goto label_805360D8;
    case 0x805360DCu: goto label_805360DC;
    case 0x805360E0u: goto label_805360E0;
    case 0x805360E4u: goto label_805360E4;
    case 0x805360E8u: goto label_805360E8;
    case 0x805360ECu: goto label_805360EC;
    case 0x805360F0u: goto label_805360F0;
    case 0x805360F4u: goto label_805360F4;
    case 0x805360F8u: goto label_805360F8;
    case 0x805360FCu: goto label_805360FC;
    case 0x80536100u: goto label_80536100;
    case 0x80536104u: goto label_80536104;
    case 0x80536108u: goto label_80536108;
    case 0x8053610Cu: goto label_8053610C;
    case 0x80536110u: goto label_80536110;
    case 0x80536114u: goto label_80536114;
    case 0x80536118u: goto label_80536118;
    case 0x8053611Cu: goto label_8053611C;
    case 0x80536120u: goto label_80536120;
    case 0x80536124u: goto label_80536124;
    case 0x80536128u: goto label_80536128;
    case 0x8053612Cu: goto label_8053612C;
    case 0x80536130u: goto label_80536130;
    case 0x80536134u: goto label_80536134;
    case 0x80536138u: goto label_80536138;
    case 0x8053613Cu: goto label_8053613C;
    case 0x80536140u: goto label_80536140;
    case 0x80536144u: goto label_80536144;
    case 0x80536148u: goto label_80536148;
    case 0x8053614Cu: goto label_8053614C;
    case 0x80536150u: goto label_80536150;
    case 0x80536154u: goto label_80536154;
    case 0x80536158u: goto label_80536158;
    case 0x8053615Cu: goto label_8053615C;
    case 0x80536160u: goto label_80536160;
    case 0x80536164u: goto label_80536164;
    case 0x80536168u: goto label_80536168;
    case 0x8053616Cu: goto label_8053616C;
    case 0x80536170u: goto label_80536170;
    case 0x80536174u: goto label_80536174;
    case 0x80536178u: goto label_80536178;
    case 0x8053617Cu: goto label_8053617C;
    case 0x80536180u: goto label_80536180;
    case 0x80536184u: goto label_80536184;
    case 0x80536188u: goto label_80536188;
    case 0x8053618Cu: goto label_8053618C;
    case 0x80536190u: goto label_80536190;
    case 0x80536194u: goto label_80536194;
    case 0x80536198u: goto label_80536198;
    case 0x8053619Cu: goto label_8053619C;
    case 0x805361A0u: goto label_805361A0;
    case 0x805361A4u: goto label_805361A4;
    case 0x805361A8u: goto label_805361A8;
    case 0x805361ACu: goto label_805361AC;
    case 0x805361B0u: goto label_805361B0;
    case 0x805361B4u: goto label_805361B4;
    case 0x805361B8u: goto label_805361B8;
    case 0x805361BCu: goto label_805361BC;
    case 0x805361C0u: goto label_805361C0;
    case 0x805361C4u: goto label_805361C4;
    case 0x805361C8u: goto label_805361C8;
    case 0x805361CCu: goto label_805361CC;
    case 0x805361D0u: goto label_805361D0;
    case 0x805361D4u: goto label_805361D4;
    case 0x805361D8u: goto label_805361D8;
    case 0x805361DCu: goto label_805361DC;
    case 0x805361E0u: goto label_805361E0;
    case 0x805361E4u: goto label_805361E4;
    case 0x805361E8u: goto label_805361E8;
    case 0x805361ECu: goto label_805361EC;
    case 0x805361F0u: goto label_805361F0;
    case 0x805361F4u: goto label_805361F4;
    case 0x805361F8u: goto label_805361F8;
    case 0x805361FCu: goto label_805361FC;
    case 0x80536200u: goto label_80536200;
    case 0x80536204u: goto label_80536204;
    case 0x80536208u: goto label_80536208;
    case 0x8053620Cu: goto label_8053620C;
    case 0x80536210u: goto label_80536210;
    case 0x80536214u: goto label_80536214;
    case 0x80536218u: goto label_80536218;
    case 0x8053621Cu: goto label_8053621C;
    case 0x80536220u: goto label_80536220;
    case 0x80536224u: goto label_80536224;
    case 0x80536228u: goto label_80536228;
    case 0x8053622Cu: goto label_8053622C;
    case 0x80536230u: goto label_80536230;
    case 0x80536234u: goto label_80536234;
    case 0x80536238u: goto label_80536238;
    case 0x8053623Cu: goto label_8053623C;
    case 0x80536240u: goto label_80536240;
    case 0x80536244u: goto label_80536244;
    case 0x80536248u: goto label_80536248;
    case 0x8053624Cu: goto label_8053624C;
    case 0x80536250u: goto label_80536250;
    case 0x80536254u: goto label_80536254;
    case 0x80536258u: goto label_80536258;
    case 0x8053625Cu: goto label_8053625C;
    case 0x80536260u: goto label_80536260;
    case 0x80536264u: goto label_80536264;
    case 0x80536268u: goto label_80536268;
    case 0x8053626Cu: goto label_8053626C;
    case 0x80536270u: goto label_80536270;
    case 0x80536274u: goto label_80536274;
    case 0x80536278u: goto label_80536278;
    case 0x8053627Cu: goto label_8053627C;
    case 0x80536280u: goto label_80536280;
    case 0x80536284u: goto label_80536284;
    case 0x80536288u: goto label_80536288;
    case 0x8053628Cu: goto label_8053628C;
    case 0x80536290u: goto label_80536290;
    case 0x80536294u: goto label_80536294;
    case 0x80536298u: goto label_80536298;
    case 0x8053629Cu: goto label_8053629C;
    case 0x805362A0u: goto label_805362A0;
    case 0x805362A4u: goto label_805362A4;
    case 0x805362A8u: goto label_805362A8;
    case 0x805362ACu: goto label_805362AC;
    case 0x805362B0u: goto label_805362B0;
    case 0x805362B4u: goto label_805362B4;
    case 0x805362B8u: goto label_805362B8;
    case 0x805362BCu: goto label_805362BC;
    case 0x805362C0u: goto label_805362C0;
    case 0x805362C4u: goto label_805362C4;
    case 0x805362C8u: goto label_805362C8;
    case 0x805362CCu: goto label_805362CC;
    case 0x805362D0u: goto label_805362D0;
    case 0x805362D4u: goto label_805362D4;
    case 0x805362D8u: goto label_805362D8;
    case 0x805362DCu: goto label_805362DC;
    case 0x805362E0u: goto label_805362E0;
    case 0x805362E4u: goto label_805362E4;
    case 0x805362E8u: goto label_805362E8;
    case 0x805362ECu: goto label_805362EC;
    case 0x805362F0u: goto label_805362F0;
    case 0x805362F4u: goto label_805362F4;
    case 0x805362F8u: goto label_805362F8;
    case 0x805362FCu: goto label_805362FC;
    case 0x80536300u: goto label_80536300;
    case 0x80536304u: goto label_80536304;
    case 0x80536308u: goto label_80536308;
    case 0x8053630Cu: goto label_8053630C;
    case 0x80536310u: goto label_80536310;
    case 0x80536314u: goto label_80536314;
    case 0x80536318u: goto label_80536318;
    case 0x8053631Cu: goto label_8053631C;
    case 0x80536320u: goto label_80536320;
    case 0x80536324u: goto label_80536324;
    case 0x80536328u: goto label_80536328;
    case 0x8053632Cu: goto label_8053632C;
    case 0x80536330u: goto label_80536330;
    case 0x80536334u: goto label_80536334;
    case 0x80536338u: goto label_80536338;
    case 0x8053633Cu: goto label_8053633C;
    case 0x80536340u: goto label_80536340;
    case 0x80536344u: goto label_80536344;
    case 0x80536348u: goto label_80536348;
    case 0x8053634Cu: goto label_8053634C;
    case 0x80536350u: goto label_80536350;
    case 0x80536354u: goto label_80536354;
    case 0x80536358u: goto label_80536358;
    case 0x8053635Cu: goto label_8053635C;
    case 0x80536360u: goto label_80536360;
    case 0x80536364u: goto label_80536364;
    case 0x80536368u: goto label_80536368;
    case 0x8053636Cu: goto label_8053636C;
    case 0x80536370u: goto label_80536370;
    case 0x80536374u: goto label_80536374;
    case 0x80536378u: goto label_80536378;
    case 0x8053637Cu: goto label_8053637C;
    case 0x80536380u: goto label_80536380;
    case 0x80536384u: goto label_80536384;
    case 0x80536388u: goto label_80536388;
    case 0x8053638Cu: goto label_8053638C;
    case 0x80536390u: goto label_80536390;
    case 0x80536394u: goto label_80536394;
    case 0x80536398u: goto label_80536398;
    case 0x8053639Cu: goto label_8053639C;
    case 0x805363A0u: goto label_805363A0;
    case 0x805363A4u: goto label_805363A4;
    case 0x805363A8u: goto label_805363A8;
    case 0x805363ACu: goto label_805363AC;
    case 0x805363B0u: goto label_805363B0;
    case 0x805363B4u: goto label_805363B4;
    case 0x805363B8u: goto label_805363B8;
    case 0x805363BCu: goto label_805363BC;
    case 0x805363C0u: goto label_805363C0;
    case 0x805363C4u: goto label_805363C4;
    case 0x805363C8u: goto label_805363C8;
    case 0x805363CCu: goto label_805363CC;
    case 0x805363D0u: goto label_805363D0;
    case 0x805363D4u: goto label_805363D4;
    case 0x805363D8u: goto label_805363D8;
    case 0x805363DCu: goto label_805363DC;
    case 0x805363E0u: goto label_805363E0;
    case 0x805363E4u: goto label_805363E4;
    case 0x805363E8u: goto label_805363E8;
    case 0x805363ECu: goto label_805363EC;
    case 0x805363F0u: goto label_805363F0;
    case 0x805363F4u: goto label_805363F4;
    case 0x805363F8u: goto label_805363F8;
    case 0x805363FCu: goto label_805363FC;
    case 0x80536400u: goto label_80536400;
    case 0x80536404u: goto label_80536404;
    case 0x80536408u: goto label_80536408;
    case 0x8053640Cu: goto label_8053640C;
    case 0x80536410u: goto label_80536410;
    case 0x80536414u: goto label_80536414;
    case 0x80536418u: goto label_80536418;
    case 0x8053641Cu: goto label_8053641C;
    case 0x80536420u: goto label_80536420;
    case 0x80536424u: goto label_80536424;
    case 0x80536428u: goto label_80536428;
    case 0x8053642Cu: goto label_8053642C;
    case 0x80536430u: goto label_80536430;
    case 0x80536434u: goto label_80536434;
    case 0x80536438u: goto label_80536438;
    case 0x8053643Cu: goto label_8053643C;
    case 0x80536440u: goto label_80536440;
    case 0x80536444u: goto label_80536444;
    case 0x80536448u: goto label_80536448;
    case 0x8053644Cu: goto label_8053644C;
    case 0x80536450u: goto label_80536450;
    case 0x80536454u: goto label_80536454;
    case 0x80536458u: goto label_80536458;
    case 0x8053645Cu: goto label_8053645C;
    case 0x80536460u: goto label_80536460;
    case 0x80536464u: goto label_80536464;
    case 0x80536468u: goto label_80536468;
    case 0x8053646Cu: goto label_8053646C;
    case 0x80536470u: goto label_80536470;
    case 0x80536474u: goto label_80536474;
    case 0x80536478u: goto label_80536478;
    case 0x8053647Cu: goto label_8053647C;
    case 0x80536480u: goto label_80536480;
    case 0x80536484u: goto label_80536484;
    case 0x80536488u: goto label_80536488;
    case 0x8053648Cu: goto label_8053648C;
    case 0x80536490u: goto label_80536490;
    case 0x80536494u: goto label_80536494;
    case 0x80536498u: goto label_80536498;
    case 0x8053649Cu: goto label_8053649C;
    case 0x805364A0u: goto label_805364A0;
    case 0x805364A4u: goto label_805364A4;
    case 0x805364A8u: goto label_805364A8;
    case 0x805364ACu: goto label_805364AC;
    case 0x805364B0u: goto label_805364B0;
    case 0x805364B4u: goto label_805364B4;
    case 0x805364B8u: goto label_805364B8;
    case 0x805364BCu: goto label_805364BC;
    case 0x805364C0u: goto label_805364C0;
    case 0x805364C4u: goto label_805364C4;
    case 0x805364C8u: goto label_805364C8;
    case 0x805364CCu: goto label_805364CC;
    case 0x805364D0u: goto label_805364D0;
    case 0x805364D4u: goto label_805364D4;
    case 0x805364D8u: goto label_805364D8;
    case 0x805364DCu: goto label_805364DC;
    case 0x805364E0u: goto label_805364E0;
    case 0x805364E4u: goto label_805364E4;
    case 0x805364E8u: goto label_805364E8;
    case 0x805364ECu: goto label_805364EC;
    case 0x805364F0u: goto label_805364F0;
    case 0x805364F4u: goto label_805364F4;
    case 0x805364F8u: goto label_805364F8;
    case 0x805364FCu: goto label_805364FC;
    case 0x80536500u: goto label_80536500;
    case 0x80536504u: goto label_80536504;
    case 0x80536508u: goto label_80536508;
    case 0x8053650Cu: goto label_8053650C;
    case 0x80536510u: goto label_80536510;
    case 0x80536514u: goto label_80536514;
    case 0x80536518u: goto label_80536518;
    case 0x8053651Cu: goto label_8053651C;
    case 0x80536520u: goto label_80536520;
    case 0x80536524u: goto label_80536524;
    case 0x80536528u: goto label_80536528;
    case 0x8053652Cu: goto label_8053652C;
    case 0x80536530u: goto label_80536530;
    case 0x80536534u: goto label_80536534;
    case 0x80536538u: goto label_80536538;
    case 0x8053653Cu: goto label_8053653C;
    case 0x80536540u: goto label_80536540;
    case 0x80536544u: goto label_80536544;
    case 0x80536548u: goto label_80536548;
    case 0x8053654Cu: goto label_8053654C;
    case 0x80536550u: goto label_80536550;
    case 0x80536554u: goto label_80536554;
    case 0x80536558u: goto label_80536558;
    case 0x8053655Cu: goto label_8053655C;
    case 0x80536560u: goto label_80536560;
    case 0x80536564u: goto label_80536564;
    case 0x80536568u: goto label_80536568;
    case 0x8053656Cu: goto label_8053656C;
    case 0x80536570u: goto label_80536570;
    case 0x80536574u: goto label_80536574;
    case 0x80536578u: goto label_80536578;
    case 0x8053657Cu: goto label_8053657C;
    case 0x80536580u: goto label_80536580;
    case 0x80536584u: goto label_80536584;
    case 0x80536588u: goto label_80536588;
    case 0x8053658Cu: goto label_8053658C;
    case 0x80536590u: goto label_80536590;
    case 0x80536594u: goto label_80536594;
    case 0x80536598u: goto label_80536598;
    case 0x8053659Cu: goto label_8053659C;
    case 0x805365A0u: goto label_805365A0;
    case 0x805365A4u: goto label_805365A4;
    case 0x805365A8u: goto label_805365A8;
    case 0x805365ACu: goto label_805365AC;
    case 0x805365B0u: goto label_805365B0;
    case 0x805365B4u: goto label_805365B4;
    case 0x805365B8u: goto label_805365B8;
    case 0x805365BCu: goto label_805365BC;
    case 0x805365C0u: goto label_805365C0;
    case 0x805365C4u: goto label_805365C4;
    case 0x805365C8u: goto label_805365C8;
    case 0x805365CCu: goto label_805365CC;
    case 0x805365D0u: goto label_805365D0;
    case 0x805365D4u: goto label_805365D4;
    case 0x805365D8u: goto label_805365D8;
    case 0x805365DCu: goto label_805365DC;
    case 0x805365E0u: goto label_805365E0;
    case 0x805365E4u: goto label_805365E4;
    case 0x805365E8u: goto label_805365E8;
    case 0x805365ECu: goto label_805365EC;
    case 0x805365F0u: goto label_805365F0;
    case 0x805365F4u: goto label_805365F4;
    case 0x805365F8u: goto label_805365F8;
    case 0x805365FCu: goto label_805365FC;
    case 0x80536600u: goto label_80536600;
    case 0x80536604u: goto label_80536604;
    case 0x80536608u: goto label_80536608;
    case 0x8053660Cu: goto label_8053660C;
    case 0x80536610u: goto label_80536610;
    case 0x80536614u: goto label_80536614;
    case 0x80536618u: goto label_80536618;
    case 0x8053661Cu: goto label_8053661C;
    case 0x80536620u: goto label_80536620;
    case 0x80536624u: goto label_80536624;
    case 0x80536628u: goto label_80536628;
    case 0x8053662Cu: goto label_8053662C;
    case 0x80536630u: goto label_80536630;
    case 0x80536634u: goto label_80536634;
    case 0x80536638u: goto label_80536638;
    case 0x8053663Cu: goto label_8053663C;
    case 0x80536640u: goto label_80536640;
    case 0x80536644u: goto label_80536644;
    case 0x80536648u: goto label_80536648;
    case 0x8053664Cu: goto label_8053664C;
    case 0x80536650u: goto label_80536650;
    case 0x80536654u: goto label_80536654;
    case 0x80536658u: goto label_80536658;
    case 0x8053665Cu: goto label_8053665C;
    case 0x80536660u: goto label_80536660;
    case 0x80536664u: goto label_80536664;
    case 0x80536668u: goto label_80536668;
    case 0x8053666Cu: goto label_8053666C;
    case 0x80536670u: goto label_80536670;
    case 0x80536674u: goto label_80536674;
    case 0x80536678u: goto label_80536678;
    case 0x8053667Cu: goto label_8053667C;
    case 0x80536680u: goto label_80536680;
    case 0x80536684u: goto label_80536684;
    case 0x80536688u: goto label_80536688;
    case 0x8053668Cu: goto label_8053668C;
    case 0x80536690u: goto label_80536690;
    case 0x80536694u: goto label_80536694;
    case 0x80536698u: goto label_80536698;
    case 0x8053669Cu: goto label_8053669C;
    case 0x805366A0u: goto label_805366A0;
    case 0x805366A4u: goto label_805366A4;
    case 0x805366A8u: goto label_805366A8;
    case 0x805366ACu: goto label_805366AC;
    case 0x805366B0u: goto label_805366B0;
    case 0x805366B4u: goto label_805366B4;
    case 0x805366B8u: goto label_805366B8;
    case 0x805366BCu: goto label_805366BC;
    case 0x805366C0u: goto label_805366C0;
    case 0x805366C4u: goto label_805366C4;
    case 0x805366C8u: goto label_805366C8;
    case 0x805366CCu: goto label_805366CC;
    case 0x805366D0u: goto label_805366D0;
    case 0x805366D4u: goto label_805366D4;
    case 0x805366D8u: goto label_805366D8;
    case 0x805366DCu: goto label_805366DC;
    case 0x805366E0u: goto label_805366E0;
    case 0x805366E4u: goto label_805366E4;
    case 0x805366E8u: goto label_805366E8;
    case 0x805366ECu: goto label_805366EC;
    case 0x805366F0u: goto label_805366F0;
    case 0x805366F4u: goto label_805366F4;
    case 0x805366F8u: goto label_805366F8;
    case 0x805366FCu: goto label_805366FC;
    case 0x80536700u: goto label_80536700;
    case 0x80536704u: goto label_80536704;
    case 0x80536708u: goto label_80536708;
    case 0x8053670Cu: goto label_8053670C;
    case 0x80536710u: goto label_80536710;
    case 0x80536714u: goto label_80536714;
    case 0x80536718u: goto label_80536718;
    case 0x8053671Cu: goto label_8053671C;
    case 0x80536720u: goto label_80536720;
    case 0x80536724u: goto label_80536724;
    case 0x80536728u: goto label_80536728;
    case 0x8053672Cu: goto label_8053672C;
    case 0x80536730u: goto label_80536730;
    case 0x80536734u: goto label_80536734;
    case 0x80536738u: goto label_80536738;
    case 0x8053673Cu: goto label_8053673C;
    case 0x80536740u: goto label_80536740;
    case 0x80536744u: goto label_80536744;
    case 0x80536748u: goto label_80536748;
    case 0x8053674Cu: goto label_8053674C;
    case 0x80536750u: goto label_80536750;
    case 0x80536754u: goto label_80536754;
    case 0x80536758u: goto label_80536758;
    case 0x8053675Cu: goto label_8053675C;
    case 0x80536760u: goto label_80536760;
    case 0x80536764u: goto label_80536764;
    case 0x80536768u: goto label_80536768;
    case 0x8053676Cu: goto label_8053676C;
    case 0x80536770u: goto label_80536770;
    case 0x80536774u: goto label_80536774;
    case 0x80536778u: goto label_80536778;
    case 0x8053677Cu: goto label_8053677C;
    case 0x80536780u: goto label_80536780;
    case 0x80536784u: goto label_80536784;
    case 0x80536788u: goto label_80536788;
    case 0x8053678Cu: goto label_8053678C;
    case 0x80536790u: goto label_80536790;
    case 0x80536794u: goto label_80536794;
    case 0x80536798u: goto label_80536798;
    case 0x8053679Cu: goto label_8053679C;
    case 0x805367A0u: goto label_805367A0;
    case 0x805367A4u: goto label_805367A4;
    case 0x805367A8u: goto label_805367A8;
    case 0x805367ACu: goto label_805367AC;
    case 0x805367B0u: goto label_805367B0;
    case 0x805367B4u: goto label_805367B4;
    case 0x805367B8u: goto label_805367B8;
    case 0x805367BCu: goto label_805367BC;
    case 0x805367C0u: goto label_805367C0;
    case 0x805367C4u: goto label_805367C4;
    case 0x805367C8u: goto label_805367C8;
    case 0x805367CCu: goto label_805367CC;
    case 0x805367D0u: goto label_805367D0;
    case 0x805367D4u: goto label_805367D4;
    case 0x805367D8u: goto label_805367D8;
    case 0x805367DCu: goto label_805367DC;
    case 0x805367E0u: goto label_805367E0;
    case 0x805367E4u: goto label_805367E4;
    case 0x805367E8u: goto label_805367E8;
    case 0x805367ECu: goto label_805367EC;
    case 0x805367F0u: goto label_805367F0;
    case 0x805367F4u: goto label_805367F4;
    case 0x805367F8u: goto label_805367F8;
    case 0x805367FCu: goto label_805367FC;
    case 0x80536800u: goto label_80536800;
    case 0x80536804u: goto label_80536804;
    case 0x80536808u: goto label_80536808;
    case 0x8053680Cu: goto label_8053680C;
    case 0x80536810u: goto label_80536810;
    case 0x80536814u: goto label_80536814;
    case 0x80536818u: goto label_80536818;
    case 0x8053681Cu: goto label_8053681C;
    case 0x80536820u: goto label_80536820;
    case 0x80536824u: goto label_80536824;
    case 0x80536828u: goto label_80536828;
    case 0x8053682Cu: goto label_8053682C;
    case 0x80536830u: goto label_80536830;
    case 0x80536834u: goto label_80536834;
    case 0x80536838u: goto label_80536838;
    case 0x8053683Cu: goto label_8053683C;
    case 0x80536840u: goto label_80536840;
    case 0x80536844u: goto label_80536844;
    case 0x80536848u: goto label_80536848;
    case 0x8053684Cu: goto label_8053684C;
    case 0x80536850u: goto label_80536850;
    case 0x80536854u: goto label_80536854;
    case 0x80536858u: goto label_80536858;
    case 0x8053685Cu: goto label_8053685C;
    case 0x80536860u: goto label_80536860;
    case 0x80536864u: goto label_80536864;
    case 0x80536868u: goto label_80536868;
    case 0x8053686Cu: goto label_8053686C;
    case 0x80536870u: goto label_80536870;
    case 0x80536874u: goto label_80536874;
    case 0x80536878u: goto label_80536878;
    case 0x8053687Cu: goto label_8053687C;
    case 0x80536880u: goto label_80536880;
    case 0x80536884u: goto label_80536884;
    case 0x80536888u: goto label_80536888;
    case 0x8053688Cu: goto label_8053688C;
    case 0x80536890u: goto label_80536890;
    case 0x80536894u: goto label_80536894;
    case 0x80536898u: goto label_80536898;
    case 0x8053689Cu: goto label_8053689C;
    case 0x805368A0u: goto label_805368A0;
    case 0x805368A4u: goto label_805368A4;
    case 0x805368A8u: goto label_805368A8;
    case 0x805368ACu: goto label_805368AC;
    case 0x805368B0u: goto label_805368B0;
    case 0x805368B4u: goto label_805368B4;
    case 0x805368B8u: goto label_805368B8;
    case 0x805368BCu: goto label_805368BC;
    case 0x805368C0u: goto label_805368C0;
    case 0x805368C4u: goto label_805368C4;
    case 0x805368C8u: goto label_805368C8;
    case 0x805368CCu: goto label_805368CC;
    case 0x805368D0u: goto label_805368D0;
    case 0x805368D4u: goto label_805368D4;
    case 0x805368D8u: goto label_805368D8;
    case 0x805368DCu: goto label_805368DC;
    case 0x805368E0u: goto label_805368E0;
    case 0x805368E4u: goto label_805368E4;
    case 0x805368E8u: goto label_805368E8;
    case 0x805368ECu: goto label_805368EC;
    case 0x805368F0u: goto label_805368F0;
    case 0x805368F4u: goto label_805368F4;
    case 0x805368F8u: goto label_805368F8;
    case 0x805368FCu: goto label_805368FC;
    case 0x80536900u: goto label_80536900;
    case 0x80536904u: goto label_80536904;
    case 0x80536908u: goto label_80536908;
    case 0x8053690Cu: goto label_8053690C;
    case 0x80536910u: goto label_80536910;
    case 0x80536914u: goto label_80536914;
    case 0x80536918u: goto label_80536918;
    case 0x8053691Cu: goto label_8053691C;
    case 0x80536920u: goto label_80536920;
    case 0x80536924u: goto label_80536924;
    case 0x80536928u: goto label_80536928;
    case 0x8053692Cu: goto label_8053692C;
    case 0x80536930u: goto label_80536930;
    case 0x80536934u: goto label_80536934;
    case 0x80536938u: goto label_80536938;
    case 0x8053693Cu: goto label_8053693C;
    case 0x80536940u: goto label_80536940;
    case 0x80536944u: goto label_80536944;
    case 0x80536948u: goto label_80536948;
    case 0x8053694Cu: goto label_8053694C;
    case 0x80536950u: goto label_80536950;
    case 0x80536954u: goto label_80536954;
    case 0x80536958u: goto label_80536958;
    case 0x8053695Cu: goto label_8053695C;
    case 0x80536960u: goto label_80536960;
    case 0x80536964u: goto label_80536964;
    case 0x80536968u: goto label_80536968;
    case 0x8053696Cu: goto label_8053696C;
    case 0x80536970u: goto label_80536970;
    case 0x80536974u: goto label_80536974;
    case 0x80536978u: goto label_80536978;
    case 0x8053697Cu: goto label_8053697C;
    case 0x80536980u: goto label_80536980;
    case 0x80536984u: goto label_80536984;
    case 0x80536988u: goto label_80536988;
    case 0x8053698Cu: goto label_8053698C;
    case 0x80536990u: goto label_80536990;
    case 0x80536994u: goto label_80536994;
    case 0x80536998u: goto label_80536998;
    case 0x8053699Cu: goto label_8053699C;
    case 0x805369A0u: goto label_805369A0;
    case 0x805369A4u: goto label_805369A4;
    case 0x805369A8u: goto label_805369A8;
    case 0x805369ACu: goto label_805369AC;
    case 0x805369B0u: goto label_805369B0;
    case 0x805369B4u: goto label_805369B4;
    case 0x805369B8u: goto label_805369B8;
    case 0x805369BCu: goto label_805369BC;
    case 0x805369C0u: goto label_805369C0;
    case 0x805369C4u: goto label_805369C4;
    case 0x805369C8u: goto label_805369C8;
    case 0x805369CCu: goto label_805369CC;
    case 0x805369D0u: goto label_805369D0;
    case 0x805369D4u: goto label_805369D4;
    case 0x805369D8u: goto label_805369D8;
    case 0x805369DCu: goto label_805369DC;
    case 0x805369E0u: goto label_805369E0;
    case 0x805369E4u: goto label_805369E4;
    case 0x805369E8u: goto label_805369E8;
    case 0x805369ECu: goto label_805369EC;
    case 0x805369F0u: goto label_805369F0;
    case 0x805369F4u: goto label_805369F4;
    case 0x805369F8u: goto label_805369F8;
    case 0x805369FCu: goto label_805369FC;
    case 0x80536A00u: goto label_80536A00;
    case 0x80536A04u: goto label_80536A04;
    case 0x80536A08u: goto label_80536A08;
    case 0x80536A0Cu: goto label_80536A0C;
    case 0x80536A10u: goto label_80536A10;
    case 0x80536A14u: goto label_80536A14;
    case 0x80536A18u: goto label_80536A18;
    case 0x80536A1Cu: goto label_80536A1C;
    case 0x80536A20u: goto label_80536A20;
    case 0x80536A24u: goto label_80536A24;
    case 0x80536A28u: goto label_80536A28;
    case 0x80536A2Cu: goto label_80536A2C;
    case 0x80536A30u: goto label_80536A30;
    case 0x80536A34u: goto label_80536A34;
    case 0x80536A38u: goto label_80536A38;
    case 0x80536A3Cu: goto label_80536A3C;
    case 0x80536A40u: goto label_80536A40;
    case 0x80536A44u: goto label_80536A44;
    case 0x80536A48u: goto label_80536A48;
    case 0x80536A4Cu: goto label_80536A4C;
    case 0x80536A50u: goto label_80536A50;
    case 0x80536A54u: goto label_80536A54;
    case 0x80536A58u: goto label_80536A58;
    case 0x80536A5Cu: goto label_80536A5C;
    case 0x80536A60u: goto label_80536A60;
    case 0x80536A64u: goto label_80536A64;
    case 0x80536A68u: goto label_80536A68;
    case 0x80536A6Cu: goto label_80536A6C;
    case 0x80536A70u: goto label_80536A70;
    case 0x80536A74u: goto label_80536A74;
    case 0x80536A78u: goto label_80536A78;
    case 0x80536A7Cu: goto label_80536A7C;
    case 0x80536A80u: goto label_80536A80;
    case 0x80536A84u: goto label_80536A84;
    case 0x80536A88u: goto label_80536A88;
    case 0x80536A8Cu: goto label_80536A8C;
    case 0x80536A90u: goto label_80536A90;
    case 0x80536A94u: goto label_80536A94;
    case 0x80536A98u: goto label_80536A98;
    case 0x80536A9Cu: goto label_80536A9C;
    case 0x80536AA0u: goto label_80536AA0;
    case 0x80536AA4u: goto label_80536AA4;
    case 0x80536AA8u: goto label_80536AA8;
    case 0x80536AACu: goto label_80536AAC;
    case 0x80536AB0u: goto label_80536AB0;
    case 0x80536AB4u: goto label_80536AB4;
    case 0x80536AB8u: goto label_80536AB8;
    case 0x80536ABCu: goto label_80536ABC;
    case 0x80536AC0u: goto label_80536AC0;
    case 0x80536AC4u: goto label_80536AC4;
    case 0x80536AC8u: goto label_80536AC8;
    case 0x80536ACCu: goto label_80536ACC;
    case 0x80536AD0u: goto label_80536AD0;
    case 0x80536AD4u: goto label_80536AD4;
    case 0x80536AD8u: goto label_80536AD8;
    case 0x80536ADCu: goto label_80536ADC;
    case 0x80536AE0u: goto label_80536AE0;
    case 0x80536AE4u: goto label_80536AE4;
    case 0x80536AE8u: goto label_80536AE8;
    case 0x80536AECu: goto label_80536AEC;
    case 0x80536AF0u: goto label_80536AF0;
    case 0x80536AF4u: goto label_80536AF4;
    case 0x80536AF8u: goto label_80536AF8;
    case 0x80536AFCu: goto label_80536AFC;
    case 0x80536B00u: goto label_80536B00;
    case 0x80536B04u: goto label_80536B04;
    case 0x80536B08u: goto label_80536B08;
    case 0x80536B0Cu: goto label_80536B0C;
    case 0x80536B10u: goto label_80536B10;
    case 0x80536B14u: goto label_80536B14;
    case 0x80536B18u: goto label_80536B18;
    case 0x80536B1Cu: goto label_80536B1C;
    case 0x80536B20u: goto label_80536B20;
    case 0x80536B24u: goto label_80536B24;
    case 0x80536B28u: goto label_80536B28;
    case 0x80536B2Cu: goto label_80536B2C;
    case 0x80536B30u: goto label_80536B30;
    case 0x80536B34u: goto label_80536B34;
    case 0x80536B38u: goto label_80536B38;
    case 0x80536B3Cu: goto label_80536B3C;
    case 0x80536B40u: goto label_80536B40;
    case 0x80536B44u: goto label_80536B44;
    case 0x80536B48u: goto label_80536B48;
    case 0x80536B4Cu: goto label_80536B4C;
    case 0x80536B50u: goto label_80536B50;
    case 0x80536B54u: goto label_80536B54;
    case 0x80536B58u: goto label_80536B58;
    case 0x80536B5Cu: goto label_80536B5C;
    case 0x80536B60u: goto label_80536B60;
    case 0x80536B64u: goto label_80536B64;
    case 0x80536B68u: goto label_80536B68;
    case 0x80536B6Cu: goto label_80536B6C;
    case 0x80536B70u: goto label_80536B70;
    case 0x80536B74u: goto label_80536B74;
    case 0x80536B78u: goto label_80536B78;
    case 0x80536B7Cu: goto label_80536B7C;
    case 0x80536B80u: goto label_80536B80;
    case 0x80536B84u: goto label_80536B84;
    case 0x80536B88u: goto label_80536B88;
    case 0x80536B8Cu: goto label_80536B8C;
    case 0x80536B90u: goto label_80536B90;
    case 0x80536B94u: goto label_80536B94;
    case 0x80536B98u: goto label_80536B98;
    case 0x80536B9Cu: goto label_80536B9C;
    case 0x80536BA0u: goto label_80536BA0;
    case 0x80536BA4u: goto label_80536BA4;
    case 0x80536BA8u: goto label_80536BA8;
    case 0x80536BACu: goto label_80536BAC;
    case 0x80536BB0u: goto label_80536BB0;
    case 0x80536BB4u: goto label_80536BB4;
    case 0x80536BB8u: goto label_80536BB8;
    case 0x80536BBCu: goto label_80536BBC;
    case 0x80536BC0u: goto label_80536BC0;
    case 0x80536BC4u: goto label_80536BC4;
    case 0x80536BC8u: goto label_80536BC8;
    case 0x80536BCCu: goto label_80536BCC;
    case 0x80536BD0u: goto label_80536BD0;
    case 0x80536BD4u: goto label_80536BD4;
    case 0x80536BD8u: goto label_80536BD8;
    case 0x80536BDCu: goto label_80536BDC;
    case 0x80536BE0u: goto label_80536BE0;
    case 0x80536BE4u: goto label_80536BE4;
    case 0x80536BE8u: goto label_80536BE8;
    case 0x80536BECu: goto label_80536BEC;
    case 0x80536BF0u: goto label_80536BF0;
    case 0x80536BF4u: goto label_80536BF4;
    case 0x80536BF8u: goto label_80536BF8;
    case 0x80536BFCu: goto label_80536BFC;
    case 0x80536C00u: goto label_80536C00;
    case 0x80536C04u: goto label_80536C04;
    case 0x80536C08u: goto label_80536C08;
    case 0x80536C0Cu: goto label_80536C0C;
    case 0x80536C10u: goto label_80536C10;
    case 0x80536C14u: goto label_80536C14;
    case 0x80536C18u: goto label_80536C18;
    case 0x80536C1Cu: goto label_80536C1C;
    case 0x80536C20u: goto label_80536C20;
    case 0x80536C24u: goto label_80536C24;
    case 0x80536C28u: goto label_80536C28;
    case 0x80536C2Cu: goto label_80536C2C;
    case 0x80536C30u: goto label_80536C30;
    case 0x80536C34u: goto label_80536C34;
    case 0x80536C38u: goto label_80536C38;
    case 0x80536C3Cu: goto label_80536C3C;
    case 0x80536C40u: goto label_80536C40;
    case 0x80536C44u: goto label_80536C44;
    case 0x80536C48u: goto label_80536C48;
    case 0x80536C4Cu: goto label_80536C4C;
    case 0x80536C50u: goto label_80536C50;
    case 0x80536C54u: goto label_80536C54;
    case 0x80536C58u: goto label_80536C58;
    case 0x80536C5Cu: goto label_80536C5C;
    case 0x80536C60u: goto label_80536C60;
    case 0x80536C64u: goto label_80536C64;
    case 0x80536C68u: goto label_80536C68;
    case 0x80536C6Cu: goto label_80536C6C;
    case 0x80536C70u: goto label_80536C70;
    case 0x80536C74u: goto label_80536C74;
    case 0x80536C78u: goto label_80536C78;
    case 0x80536C7Cu: goto label_80536C7C;
    case 0x80536C80u: goto label_80536C80;
    case 0x80536C84u: goto label_80536C84;
    case 0x80536C88u: goto label_80536C88;
    case 0x80536C8Cu: goto label_80536C8C;
    case 0x80536C90u: goto label_80536C90;
    case 0x80536C94u: goto label_80536C94;
    case 0x80536C98u: goto label_80536C98;
    case 0x80536C9Cu: goto label_80536C9C;
    case 0x80536CA0u: goto label_80536CA0;
    case 0x80536CA4u: goto label_80536CA4;
    case 0x80536CA8u: goto label_80536CA8;
    case 0x80536CACu: goto label_80536CAC;
    case 0x80536CB0u: goto label_80536CB0;
    case 0x80536CB4u: goto label_80536CB4;
    case 0x80536CB8u: goto label_80536CB8;
    case 0x80536CBCu: goto label_80536CBC;
    case 0x80536CC0u: goto label_80536CC0;
    case 0x80536CC4u: goto label_80536CC4;
    case 0x80536CC8u: goto label_80536CC8;
    case 0x80536CCCu: goto label_80536CCC;
    case 0x80536CD0u: goto label_80536CD0;
    case 0x80536CD4u: goto label_80536CD4;
    case 0x80536CD8u: goto label_80536CD8;
    case 0x80536CDCu: goto label_80536CDC;
    case 0x80536CE0u: goto label_80536CE0;
    case 0x80536CE4u: goto label_80536CE4;
    case 0x80536CE8u: goto label_80536CE8;
    case 0x80536CECu: goto label_80536CEC;
    case 0x80536CF0u: goto label_80536CF0;
    case 0x80536CF4u: goto label_80536CF4;
    case 0x80536CF8u: goto label_80536CF8;
    case 0x80536CFCu: goto label_80536CFC;
    case 0x80536D00u: goto label_80536D00;
    case 0x80536D04u: goto label_80536D04;
    case 0x80536D08u: goto label_80536D08;
    case 0x80536D0Cu: goto label_80536D0C;
    case 0x80536D10u: goto label_80536D10;
    case 0x80536D14u: goto label_80536D14;
    case 0x80536D18u: goto label_80536D18;
    case 0x80536D1Cu: goto label_80536D1C;
    case 0x80536D20u: goto label_80536D20;
    case 0x80536D24u: goto label_80536D24;
    case 0x80536D28u: goto label_80536D28;
    case 0x80536D2Cu: goto label_80536D2C;
    case 0x80536D30u: goto label_80536D30;
    case 0x80536D34u: goto label_80536D34;
    case 0x80536D38u: goto label_80536D38;
    case 0x80536D3Cu: goto label_80536D3C;
    case 0x80536D40u: goto label_80536D40;
    case 0x80536D44u: goto label_80536D44;
    case 0x80536D48u: goto label_80536D48;
    case 0x80536D4Cu: goto label_80536D4C;
    case 0x80536D50u: goto label_80536D50;
    case 0x80536D54u: goto label_80536D54;
    case 0x80536D58u: goto label_80536D58;
    case 0x80536D5Cu: goto label_80536D5C;
    case 0x80536D60u: goto label_80536D60;
    case 0x80536D64u: goto label_80536D64;
    case 0x80536D68u: goto label_80536D68;
    case 0x80536D6Cu: goto label_80536D6C;
    case 0x80536D70u: goto label_80536D70;
    case 0x80536D74u: goto label_80536D74;
    case 0x80536D78u: goto label_80536D78;
    case 0x80536D7Cu: goto label_80536D7C;
    case 0x80536D80u: goto label_80536D80;
    case 0x80536D84u: goto label_80536D84;
    case 0x80536D88u: goto label_80536D88;
    case 0x80536D8Cu: goto label_80536D8C;
    case 0x80536D90u: goto label_80536D90;
    case 0x80536D94u: goto label_80536D94;
    case 0x80536D98u: goto label_80536D98;
    case 0x80536D9Cu: goto label_80536D9C;
    case 0x80536DA0u: goto label_80536DA0;
    case 0x80536DA4u: goto label_80536DA4;
    case 0x80536DA8u: goto label_80536DA8;
    case 0x80536DACu: goto label_80536DAC;
    case 0x80536DB0u: goto label_80536DB0;
    case 0x80536DB4u: goto label_80536DB4;
    case 0x80536DB8u: goto label_80536DB8;
    case 0x80536DBCu: goto label_80536DBC;
    case 0x80536DC0u: goto label_80536DC0;
    case 0x80536DC4u: goto label_80536DC4;
    case 0x80536DC8u: goto label_80536DC8;
    case 0x80536DCCu: goto label_80536DCC;
    case 0x80536DD0u: goto label_80536DD0;
    case 0x80536DD4u: goto label_80536DD4;
    case 0x80536DD8u: goto label_80536DD8;
    case 0x80536DDCu: goto label_80536DDC;
    case 0x80536DE0u: goto label_80536DE0;
    case 0x80536DE4u: goto label_80536DE4;
    case 0x80536DE8u: goto label_80536DE8;
    case 0x80536DECu: goto label_80536DEC;
    case 0x80536DF0u: goto label_80536DF0;
    case 0x80536DF4u: goto label_80536DF4;
    case 0x80536DF8u: goto label_80536DF8;
    case 0x80536DFCu: goto label_80536DFC;
    case 0x80536E00u: goto label_80536E00;
    case 0x80536E04u: goto label_80536E04;
    case 0x80536E08u: goto label_80536E08;
    case 0x80536E0Cu: goto label_80536E0C;
    case 0x80536E10u: goto label_80536E10;
    case 0x80536E14u: goto label_80536E14;
    case 0x80536E18u: goto label_80536E18;
    case 0x80536E1Cu: goto label_80536E1C;
    case 0x80536E20u: goto label_80536E20;
    case 0x80536E24u: goto label_80536E24;
    case 0x80536E28u: goto label_80536E28;
    case 0x80536E2Cu: goto label_80536E2C;
    case 0x80536E30u: goto label_80536E30;
    case 0x80536E34u: goto label_80536E34;
    case 0x80536E38u: goto label_80536E38;
    case 0x80536E3Cu: goto label_80536E3C;
    case 0x80536E40u: goto label_80536E40;
    case 0x80536E44u: goto label_80536E44;
    case 0x80536E48u: goto label_80536E48;
    case 0x80536E4Cu: goto label_80536E4C;
    case 0x80536E50u: goto label_80536E50;
    case 0x80536E54u: goto label_80536E54;
    case 0x80536E58u: goto label_80536E58;
    case 0x80536E5Cu: goto label_80536E5C;
    case 0x80536E60u: goto label_80536E60;
    case 0x80536E64u: goto label_80536E64;
    case 0x80536E68u: goto label_80536E68;
    case 0x80536E6Cu: goto label_80536E6C;
    case 0x80536E70u: goto label_80536E70;
    case 0x80536E74u: goto label_80536E74;
    case 0x80536E78u: goto label_80536E78;
    case 0x80536E7Cu: goto label_80536E7C;
    case 0x80536E80u: goto label_80536E80;
    case 0x80536E84u: goto label_80536E84;
    case 0x80536E88u: goto label_80536E88;
    case 0x80536E8Cu: goto label_80536E8C;
    case 0x80536E90u: goto label_80536E90;
    case 0x80536E94u: goto label_80536E94;
    case 0x80536E98u: goto label_80536E98;
    case 0x80536E9Cu: goto label_80536E9C;
    case 0x80536EA0u: goto label_80536EA0;
    case 0x80536EA4u: goto label_80536EA4;
    case 0x80536EA8u: goto label_80536EA8;
    case 0x80536EACu: goto label_80536EAC;
    case 0x80536EB0u: goto label_80536EB0;
    case 0x80536EB4u: goto label_80536EB4;
    case 0x80536EB8u: goto label_80536EB8;
    case 0x80536EBCu: goto label_80536EBC;
    case 0x80536EC0u: goto label_80536EC0;
    case 0x80536EC4u: goto label_80536EC4;
    case 0x80536EC8u: goto label_80536EC8;
    case 0x80536ECCu: goto label_80536ECC;
    case 0x80536ED0u: goto label_80536ED0;
    case 0x80536ED4u: goto label_80536ED4;
    case 0x80536ED8u: goto label_80536ED8;
    case 0x80536EDCu: goto label_80536EDC;
    case 0x80536EE0u: goto label_80536EE0;
    case 0x80536EE4u: goto label_80536EE4;
    case 0x80536EE8u: goto label_80536EE8;
    case 0x80536EECu: goto label_80536EEC;
    case 0x80536EF0u: goto label_80536EF0;
    case 0x80536EF4u: goto label_80536EF4;
    case 0x80536EF8u: goto label_80536EF8;
    case 0x80536EFCu: goto label_80536EFC;
    case 0x80536F00u: goto label_80536F00;
    case 0x80536F04u: goto label_80536F04;
    case 0x80536F08u: goto label_80536F08;
    case 0x80536F0Cu: goto label_80536F0C;
    case 0x80536F10u: goto label_80536F10;
    case 0x80536F14u: goto label_80536F14;
    case 0x80536F18u: goto label_80536F18;
    case 0x80536F1Cu: goto label_80536F1C;
    case 0x80536F20u: goto label_80536F20;
    case 0x80536F24u: goto label_80536F24;
    case 0x80536F28u: goto label_80536F28;
    case 0x80536F2Cu: goto label_80536F2C;
    case 0x80536F30u: goto label_80536F30;
    case 0x80536F34u: goto label_80536F34;
    case 0x80536F38u: goto label_80536F38;
    case 0x80536F3Cu: goto label_80536F3C;
    case 0x80536F40u: goto label_80536F40;
    case 0x80536F44u: goto label_80536F44;
    case 0x80536F48u: goto label_80536F48;
    case 0x80536F4Cu: goto label_80536F4C;
    case 0x80536F50u: goto label_80536F50;
    case 0x80536F54u: goto label_80536F54;
    case 0x80536F58u: goto label_80536F58;
    case 0x80536F5Cu: goto label_80536F5C;
    case 0x80536F60u: goto label_80536F60;
    case 0x80536F64u: goto label_80536F64;
    case 0x80536F68u: goto label_80536F68;
    case 0x80536F6Cu: goto label_80536F6C;
    case 0x80536F70u: goto label_80536F70;
    case 0x80536F74u: goto label_80536F74;
    case 0x80536F78u: goto label_80536F78;
    case 0x80536F7Cu: goto label_80536F7C;
    case 0x80536F80u: goto label_80536F80;
    case 0x80536F84u: goto label_80536F84;
    case 0x80536F88u: goto label_80536F88;
    case 0x80536F8Cu: goto label_80536F8C;
    case 0x80536F90u: goto label_80536F90;
    case 0x80536F94u: goto label_80536F94;
    case 0x80536F98u: goto label_80536F98;
    case 0x80536F9Cu: goto label_80536F9C;
    case 0x80536FA0u: goto label_80536FA0;
    case 0x80536FA4u: goto label_80536FA4;
    case 0x80536FA8u: goto label_80536FA8;
    case 0x80536FACu: goto label_80536FAC;
    case 0x80536FB0u: goto label_80536FB0;
    case 0x80536FB4u: goto label_80536FB4;
    case 0x80536FB8u: goto label_80536FB8;
    case 0x80536FBCu: goto label_80536FBC;
    case 0x80536FC0u: goto label_80536FC0;
    case 0x80536FC4u: goto label_80536FC4;
    case 0x80536FC8u: goto label_80536FC8;
    case 0x80536FCCu: goto label_80536FCC;
    case 0x80536FD0u: goto label_80536FD0;
    case 0x80536FD4u: goto label_80536FD4;
    case 0x80536FD8u: goto label_80536FD8;
    case 0x80536FDCu: goto label_80536FDC;
    case 0x80536FE0u: goto label_80536FE0;
    case 0x80536FE4u: goto label_80536FE4;
    case 0x80536FE8u: goto label_80536FE8;
    case 0x80536FECu: goto label_80536FEC;
    case 0x80536FF0u: goto label_80536FF0;
    case 0x80536FF4u: goto label_80536FF4;
    case 0x80536FF8u: goto label_80536FF8;
    case 0x80536FFCu: goto label_80536FFC;
    case 0x80537000u: goto label_80537000;
    case 0x80537004u: goto label_80537004;
    case 0x80537008u: goto label_80537008;
    case 0x8053700Cu: goto label_8053700C;
    case 0x80537010u: goto label_80537010;
    case 0x80537014u: goto label_80537014;
    case 0x80537018u: goto label_80537018;
    case 0x8053701Cu: goto label_8053701C;
    case 0x80537020u: goto label_80537020;
    case 0x80537024u: goto label_80537024;
    case 0x80537028u: goto label_80537028;
    case 0x8053702Cu: goto label_8053702C;
    case 0x80537030u: goto label_80537030;
    case 0x80537034u: goto label_80537034;
    case 0x80537038u: goto label_80537038;
    case 0x8053703Cu: goto label_8053703C;
    case 0x80537040u: goto label_80537040;
    case 0x80537044u: goto label_80537044;
    case 0x80537048u: goto label_80537048;
    case 0x8053704Cu: goto label_8053704C;
    case 0x80537050u: goto label_80537050;
    case 0x80537054u: goto label_80537054;
    case 0x80537058u: goto label_80537058;
    case 0x8053705Cu: goto label_8053705C;
    case 0x80537060u: goto label_80537060;
    case 0x80537064u: goto label_80537064;
    case 0x80537068u: goto label_80537068;
    case 0x8053706Cu: goto label_8053706C;
    case 0x80537070u: goto label_80537070;
    case 0x80537074u: goto label_80537074;
    case 0x80537078u: goto label_80537078;
    case 0x8053707Cu: goto label_8053707C;
    case 0x80537080u: goto label_80537080;
    case 0x80537084u: goto label_80537084;
    case 0x80537088u: goto label_80537088;
    case 0x8053708Cu: goto label_8053708C;
    case 0x80537090u: goto label_80537090;
    case 0x80537094u: goto label_80537094;
    case 0x80537098u: goto label_80537098;
    case 0x8053709Cu: goto label_8053709C;
    case 0x805370A0u: goto label_805370A0;
    case 0x805370A4u: goto label_805370A4;
    case 0x805370A8u: goto label_805370A8;
    case 0x805370ACu: goto label_805370AC;
    case 0x805370B0u: goto label_805370B0;
    case 0x805370B4u: goto label_805370B4;
    case 0x805370B8u: goto label_805370B8;
    case 0x805370BCu: goto label_805370BC;
    case 0x805370C0u: goto label_805370C0;
    case 0x805370C4u: goto label_805370C4;
    case 0x805370C8u: goto label_805370C8;
    case 0x805370CCu: goto label_805370CC;
    case 0x805370D0u: goto label_805370D0;
    case 0x805370D4u: goto label_805370D4;
    case 0x805370D8u: goto label_805370D8;
    case 0x805370DCu: goto label_805370DC;
    case 0x805370E0u: goto label_805370E0;
    case 0x805370E4u: goto label_805370E4;
    case 0x805370E8u: goto label_805370E8;
    case 0x805370ECu: goto label_805370EC;
    case 0x805370F0u: goto label_805370F0;
    case 0x805370F4u: goto label_805370F4;
    case 0x805370F8u: goto label_805370F8;
    case 0x805370FCu: goto label_805370FC;
    case 0x80537100u: goto label_80537100;
    case 0x80537104u: goto label_80537104;
    case 0x80537108u: goto label_80537108;
    case 0x8053710Cu: goto label_8053710C;
    case 0x80537110u: goto label_80537110;
    case 0x80537114u: goto label_80537114;
    case 0x80537118u: goto label_80537118;
    case 0x8053711Cu: goto label_8053711C;
    case 0x80537120u: goto label_80537120;
    case 0x80537124u: goto label_80537124;
    case 0x80537128u: goto label_80537128;
    case 0x8053712Cu: goto label_8053712C;
    case 0x80537130u: goto label_80537130;
    case 0x80537134u: goto label_80537134;
    case 0x80537138u: goto label_80537138;
    case 0x8053713Cu: goto label_8053713C;
    case 0x80537140u: goto label_80537140;
    case 0x80537144u: goto label_80537144;
    case 0x80537148u: goto label_80537148;
    case 0x8053714Cu: goto label_8053714C;
    case 0x80537150u: goto label_80537150;
    case 0x80537154u: goto label_80537154;
    case 0x80537158u: goto label_80537158;
    case 0x8053715Cu: goto label_8053715C;
    case 0x80537160u: goto label_80537160;
    case 0x80537164u: goto label_80537164;
    case 0x80537168u: goto label_80537168;
    case 0x8053716Cu: goto label_8053716C;
    case 0x80537170u: goto label_80537170;
    case 0x80537174u: goto label_80537174;
    case 0x80537178u: goto label_80537178;
    case 0x8053717Cu: goto label_8053717C;
    case 0x80537180u: goto label_80537180;
    case 0x80537184u: goto label_80537184;
    case 0x80537188u: goto label_80537188;
    case 0x8053718Cu: goto label_8053718C;
    case 0x80537190u: goto label_80537190;
    case 0x80537194u: goto label_80537194;
    case 0x80537198u: goto label_80537198;
    case 0x8053719Cu: goto label_8053719C;
    case 0x805371A0u: goto label_805371A0;
    case 0x805371A4u: goto label_805371A4;
    case 0x805371A8u: goto label_805371A8;
    case 0x805371ACu: goto label_805371AC;
    case 0x805371B0u: goto label_805371B0;
    case 0x805371B4u: goto label_805371B4;
    case 0x805371B8u: goto label_805371B8;
    case 0x805371BCu: goto label_805371BC;
    default: return;
    }
label_805331C0:
    ctx->pc = 0x805331C0u;
    ctx->downcount -= 1;
    // 805331C0: bl      0x802779C8
    {
            ctx->lr = 0x805331C4u;
            ctx->pc = 0x802779C8u;
            return;
    }

label_805331C4:
    ctx->pc = 0x805331C4u;
    ctx->downcount -= 12;
    // 805331C4: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805331C8:
    ctx->pc = 0x805331C8u;
    // 805331C8: addi    r4, r28, 21472
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(21472);

label_805331CC:
    ctx->pc = 0x805331CCu;
    // 805331CC: lbz     r3, 201(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(201);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_805331D0:
    ctx->pc = 0x805331D0u;
    // 805331D0: rlwinm r0, r0, 21, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 21u) & 0x00000001u;
    }

label_805331D4:
    ctx->pc = 0x805331D4u;
    // 805331D4: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

label_805331D8:
    ctx->pc = 0x805331D8u;
    // 805331D8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805331DC:
    ctx->pc = 0x805331DCu;
    // 805331DC: subfe   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805331E0:
    ctx->pc = 0x805331E0u;
    // 805331E0: stb     r0, 201(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(201);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805331E4:
    ctx->pc = 0x805331E4u;
    // 805331E4: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805331E8:
    ctx->pc = 0x805331E8u;
    // 805331E8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805331EC:
    ctx->pc = 0x805331ECu;
    // 805331EC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805331F0:
    ctx->pc = 0x805331F0u;
    // 805331F0: bl      0x80370BD4
    {
            ctx->lr = 0x805331F4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805331F4:
    ctx->pc = 0x805331F4u;
    ctx->downcount -= 3;
    // 805331F4: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805331F8:
    ctx->pc = 0x805331F8u;
    // 805331F8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805331FC:
    ctx->pc = 0x805331FCu;
    // 805331FC: bl      0x802779C8
    {
            ctx->lr = 0x80533200u;
            ctx->pc = 0x802779C8u;
            return;
    }

label_80533200:
    ctx->pc = 0x80533200u;
    ctx->downcount -= 3;
    // 80533200: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533204:
    ctx->pc = 0x80533204u;
    // 80533204: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80533208:
    ctx->pc = 0x80533208u;
    // 80533208: bc    12, 2, 0x80533238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533238;
        }
    }

label_8053320C:
    ctx->pc = 0x8053320Cu;
    ctx->downcount -= 5;
    // 8053320C: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533210:
    ctx->pc = 0x80533210u;
    // 80533210: addi    r4, r28, 21472
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(21472);

label_80533214:
    ctx->pc = 0x80533214u;
    // 80533214: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533218:
    ctx->pc = 0x80533218u;
    // 80533218: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8053321C:
    ctx->pc = 0x8053321Cu;
    // 8053321C: bl      0x80370BD4
    {
            ctx->lr = 0x80533220u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533220:
    ctx->pc = 0x80533220u;
    ctx->downcount -= 3;
    // 80533220: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533224:
    ctx->pc = 0x80533224u;
    // 80533224: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80533228:
    ctx->pc = 0x80533228u;
    // 80533228: bl      0x802779A0
    {
            ctx->lr = 0x8053322Cu;
            ctx->pc = 0x802779A0u;
            return;
    }

label_8053322C:
    ctx->pc = 0x8053322Cu;
    ctx->downcount -= 3;
    // 8053322C: slw   r4, r29, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[29] << sh);
    }

label_80533230:
    ctx->pc = 0x80533230u;
    // 80533230: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_80533234:
    ctx->pc = 0x80533234u;
    // 80533234: bl      0x802B735C
    {
            ctx->lr = 0x80533238u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80533238:
    ctx->pc = 0x80533238u;
    ctx->downcount -= 4;
    // 80533238: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8053323C:
    ctx->pc = 0x8053323Cu;
    // 8053323C: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533240:
    ctx->pc = 0x80533240u;
    // 80533240: cmpw    r31, r0
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

label_80533244:
    ctx->pc = 0x80533244u;
    // 80533244: bc    12, 0, 0x80533194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80533194u;
            return;
        }
    }

label_80533248:
    ctx->pc = 0x80533248u;
    ctx->downcount -= 1;
    // 80533248: b       0x8053327C
    {
            goto label_8053327C;
    }

label_8053324C:
    ctx->pc = 0x8053324Cu;
    ctx->downcount -= 3;
    // 8053324C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533250:
    ctx->pc = 0x80533250u;
    // 80533250: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80533254:
    ctx->pc = 0x80533254u;
    // 80533254: bl      0x803457B8
    {
            ctx->lr = 0x80533258u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533258:
    ctx->pc = 0x80533258u;
    ctx->downcount -= 1;
    // 80533258: b       0x8053327C
    {
            goto label_8053327C;
    }

label_8053325C:
    ctx->pc = 0x8053325Cu;
    ctx->downcount -= 1;
    // 8053325C: bc    4, 2, 0x80533274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533274;
        }
    }

label_80533260:
    ctx->pc = 0x80533260u;
    ctx->downcount -= 4;
    // 80533260: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80533264:
    ctx->pc = 0x80533264u;
    // 80533264: stb     r0, 202(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533268:
    ctx->pc = 0x80533268u;
    // 80533268: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8053326C:
    ctx->pc = 0x8053326Cu;
    // 8053326C: bl      0x80351528
    {
            ctx->lr = 0x80533270u;
            ctx->pc = 0x80351528u;
            return;
    }

label_80533270:
    ctx->pc = 0x80533270u;
    ctx->downcount -= 1;
    // 80533270: b       0x8053327C
    {
            goto label_8053327C;
    }

label_80533274:
    ctx->pc = 0x80533274u;
    ctx->downcount -= 2;
    // 80533274: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80533278:
    ctx->pc = 0x80533278u;
    // 80533278: stb     r0, 202(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053327C:
    ctx->pc = 0x8053327Cu;
    ctx->downcount -= 16;
    // 8053327C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80533280:
    ctx->pc = 0x80533280u;
    // 80533280: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533284:
    ctx->pc = 0x80533284u;
    // 80533284: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533288:
    ctx->pc = 0x80533288u;
    // 80533288: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8053328C:
    ctx->pc = 0x8053328Cu;
    // 8053328C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533290:
    ctx->pc = 0x80533290u;
    ctx->downcount -= 22;
    // 80533290: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533294:
    ctx->pc = 0x80533294u;
    // 80533294: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533298:
    ctx->pc = 0x80533298u;
    // 80533298: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053329C:
    ctx->pc = 0x8053329Cu;
    // 8053329C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805332A0:
    ctx->pc = 0x805332A0u;
    // 805332A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805332A4:
    ctx->pc = 0x805332A4u;
    // 805332A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805332A8:
    ctx->pc = 0x805332A8u;
    // 805332A8: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805332AC:
    ctx->pc = 0x805332ACu;
    // 805332AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805332B0:
    ctx->pc = 0x805332B0u;
    // 805332B0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805332B4:
    ctx->pc = 0x805332B4u;
    // 805332B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805332B8:
    ctx->pc = 0x805332B8u;
    // 805332B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805332BCu;
            ctx->pc = target;
            return;
        }
    }

label_805332BC:
    ctx->pc = 0x805332BCu;
    ctx->downcount -= 2;
    // 805332BC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805332C0:
    ctx->pc = 0x805332C0u;
    // 805332C0: bc    12, 2, 0x805332E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805332E4;
        }
    }

label_805332C4:
    ctx->pc = 0x805332C4u;
    ctx->downcount -= 6;
    // 805332C4: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805332C8:
    ctx->pc = 0x805332C8u;
    // 805332C8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805332CC:
    ctx->pc = 0x805332CCu;
    // 805332CC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805332D0:
    ctx->pc = 0x805332D0u;
    // 805332D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805332D4:
    ctx->pc = 0x805332D4u;
    // 805332D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805332D8u;
            ctx->pc = target;
            return;
        }
    }

label_805332D8:
    ctx->pc = 0x805332D8u;
    ctx->downcount -= 2;
    // 805332D8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805332DC:
    ctx->pc = 0x805332DCu;
    // 805332DC: bc    12, 2, 0x805332E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805332E4;
        }
    }

label_805332E0:
    ctx->pc = 0x805332E0u;
    ctx->downcount -= 1;
    // 805332E0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_805332E4:
    ctx->pc = 0x805332E4u;
    ctx->downcount -= 17;
    // 805332E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805332E8:
    ctx->pc = 0x805332E8u;
    // 805332E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805332EC:
    ctx->pc = 0x805332ECu;
    // 805332EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805332F0:
    ctx->pc = 0x805332F0u;
    // 805332F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805332F4:
    ctx->pc = 0x805332F4u;
    // 805332F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805332F8:
    ctx->pc = 0x805332F8u;
    // 805332F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805332FC:
    ctx->pc = 0x805332FCu;
    ctx->downcount -= 3;
    // 805332FC: lbz     r0, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80533300:
    ctx->pc = 0x80533300u;
    // 80533300: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533304:
    ctx->pc = 0x80533304u;
    // 80533304: bc    12, 2, 0x80533310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533310;
        }
    }

label_80533308:
    ctx->pc = 0x80533308u;
    ctx->downcount -= 2;
    // 80533308: lbz     r3, 201(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(201);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8053330C:
    ctx->pc = 0x8053330Cu;
    // 8053330C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533310:
    ctx->pc = 0x80533310u;
    ctx->downcount -= 3;
    // 80533310: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533314:
    ctx->pc = 0x80533314u;
    // 80533314: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80533318:
    ctx->pc = 0x80533318u;
    // 80533318: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053331C:
    ctx->pc = 0x8053331Cu;
    ctx->downcount -= 2;
    // 8053331C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533320:
    ctx->pc = 0x80533320u;
    // 80533320: b       0x8053AB50
    {
            ctx->pc = 0x8053AB50u;
            return;
    }

label_80533324:
    ctx->pc = 0x80533324u;
    ctx->downcount -= 18;
    // 80533324: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533328:
    ctx->pc = 0x80533328u;
    // 80533328: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053332C:
    ctx->pc = 0x8053332Cu;
    // 8053332C: cmpwi   r4, 0
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

label_80533330:
    ctx->pc = 0x80533330u;
    // 80533330: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533334:
    ctx->pc = 0x80533334u;
    // 80533334: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80533338:
    ctx->pc = 0x80533338u;
    // 80533338: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8053333C:
    ctx->pc = 0x8053333Cu;
    // 8053333C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533340:
    ctx->pc = 0x80533340u;
    // 80533340: bc    12, 2, 0x80533370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533370;
        }
    }

label_80533344:
    ctx->pc = 0x80533344u;
    ctx->downcount -= 6;
    // 80533344: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533348:
    ctx->pc = 0x80533348u;
    // 80533348: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053334C:
    ctx->pc = 0x8053334Cu;
    // 8053334C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533350:
    ctx->pc = 0x80533350u;
    // 80533350: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533354:
    ctx->pc = 0x80533354u;
    // 80533354: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533358u;
            ctx->pc = target;
            return;
        }
    }

label_80533358:
    ctx->pc = 0x80533358u;
    ctx->downcount -= 6;
    // 80533358: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053335C:
    ctx->pc = 0x8053335Cu;
    // 8053335C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533360:
    ctx->pc = 0x80533360u;
    // 80533360: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533364:
    ctx->pc = 0x80533364u;
    // 80533364: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533368:
    ctx->pc = 0x80533368u;
    // 80533368: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8053336Cu;
            ctx->pc = target;
            return;
        }
    }

label_8053336C:
    ctx->pc = 0x8053336Cu;
    ctx->downcount -= 1;
    // 8053336C: b       0x805333C8
    {
            goto label_805333C8;
    }

label_80533370:
    ctx->pc = 0x80533370u;
    ctx->downcount -= 4;
    // 80533370: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533374:
    ctx->pc = 0x80533374u;
    // 80533374: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80533378:
    ctx->pc = 0x80533378u;
    // 80533378: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053337C:
    ctx->pc = 0x8053337Cu;
    // 8053337C: bc    12, 2, 0x805333A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805333A0;
        }
    }

label_80533380:
    ctx->pc = 0x80533380u;
    ctx->downcount -= 2;
    // 80533380: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80533384:
    ctx->pc = 0x80533384u;
    // 80533384: bl      0x8035144C
    {
            ctx->lr = 0x80533388u;
            ctx->pc = 0x8035144Cu;
            return;
    }

label_80533388:
    ctx->pc = 0x80533388u;
    ctx->downcount -= 3;
    // 80533388: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053338C:
    ctx->pc = 0x8053338Cu;
    // 8053338C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533390:
    ctx->pc = 0x80533390u;
    // 80533390: bc    4, 2, 0x805333A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805333A0;
        }
    }

label_80533394:
    ctx->pc = 0x80533394u;
    ctx->downcount -= 3;
    // 80533394: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80533398:
    ctx->pc = 0x80533398u;
    // 80533398: stb     r0, 201(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(201);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053339C:
    ctx->pc = 0x8053339Cu;
    // 8053339C: stb     r0, 202(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805333A0:
    ctx->pc = 0x805333A0u;
    ctx->downcount -= 2;
    // 805333A0: cmpwi   r31, 0
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

label_805333A4:
    ctx->pc = 0x805333A4u;
    // 805333A4: bc    12, 2, 0x805333C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805333C8;
        }
    }

label_805333A8:
    ctx->pc = 0x805333A8u;
    ctx->downcount -= 4;
    // 805333A8: lwz     r3, 184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805333AC:
    ctx->pc = 0x805333ACu;
    // 805333AC: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805333B0:
    ctx->pc = 0x805333B0u;
    // 805333B0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805333B4:
    ctx->pc = 0x805333B4u;
    // 805333B4: bc    12, 2, 0x805333C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805333C8;
        }
    }

label_805333B8:
    ctx->pc = 0x805333B8u;
    ctx->downcount -= 5;
    // 805333B8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805333BC:
    ctx->pc = 0x805333BCu;
    // 805333BC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805333C0:
    ctx->pc = 0x805333C0u;
    // 805333C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805333C4:
    ctx->pc = 0x805333C4u;
    // 805333C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805333C8u;
            ctx->pc = target;
            return;
        }
    }

label_805333C8:
    ctx->pc = 0x805333C8u;
    ctx->downcount -= 17;
    // 805333C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805333CC:
    ctx->pc = 0x805333CCu;
    // 805333CC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805333D0:
    ctx->pc = 0x805333D0u;
    // 805333D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805333D4:
    ctx->pc = 0x805333D4u;
    // 805333D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805333D8:
    ctx->pc = 0x805333D8u;
    // 805333D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805333DC:
    ctx->pc = 0x805333DCu;
    // 805333DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805333E0:
    ctx->pc = 0x805333E0u;
    ctx->downcount -= 23;
    // 805333E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805333E4:
    ctx->pc = 0x805333E4u;
    // 805333E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805333E8:
    ctx->pc = 0x805333E8u;
    // 805333E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805333EC:
    ctx->pc = 0x805333ECu;
    // 805333EC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805333F0:
    // 805333F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805333F4:
    // 805333F4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805333F8:
    // 805333F8: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805333FC:
    ctx->pc = 0x805333FCu;
    // 805333FC: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533400:
    ctx->pc = 0x80533400u;
    // 80533400: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533404:
    ctx->pc = 0x80533404u;
    // 80533404: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533408:
    ctx->pc = 0x80533408u;
    // 80533408: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053340C:
    ctx->pc = 0x8053340Cu;
    // 8053340C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533410u;
            ctx->pc = target;
            return;
        }
    }

label_80533410:
    ctx->downcount -= 2;
    // 80533410: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533414:
    // 80533414: bc    12, 2, 0x80533798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533798;
        }
    }

label_80533418:
    ctx->pc = 0x80533418u;
    ctx->downcount -= 6;
    // 80533418: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053341C:
    ctx->pc = 0x8053341Cu;
    // 8053341C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533420:
    ctx->pc = 0x80533420u;
    // 80533420: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533424:
    ctx->pc = 0x80533424u;
    // 80533424: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533428:
    ctx->pc = 0x80533428u;
    // 80533428: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8053342Cu;
            ctx->pc = target;
            return;
        }
    }

label_8053342C:
    ctx->downcount -= 2;
    // 8053342C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533430:
    // 80533430: bc    4, 2, 0x80533438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533438;
        }
    }

label_80533434:
    ctx->downcount -= 1;
    // 80533434: b       0x80533798
    {
            goto label_80533798;
    }

label_80533438:
    ctx->downcount -= 7;
    // 80533438: cmplwi  r29, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053343C:
    // 8053343C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80533440:
    ctx->pc = 0x80533440u;
    // 80533440: stb     r30, 203(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(203);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80533444:
    ctx->pc = 0x80533444u;
    // 80533444: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533448:
    ctx->pc = 0x80533448u;
    // 80533448: stb     r0, 201(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(201);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053344C:
    ctx->pc = 0x8053344Cu;
    // 8053344C: stb     r0, 202(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533450:
    // 80533450: bc    12, 1, 0x80533798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533798;
        }
    }

label_80533454:
    ctx->downcount -= 7;
    // 80533454: lis     r3, -32658
    ctx->gpr[3] = ((u32)(s32)(-32658) << 16);

label_80533458:
    // 80533458: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_8053345C:
    // 8053345C: addi    r3, r3, 6524
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6524);

label_80533460:
    ctx->pc = 0x80533460u;
    // 80533460: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533464:
    ctx->pc = 0x80533464u;
    // 80533464: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_80533468:
    ctx->pc = 0x80533468u;
    // 80533468: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8053346C:
    ctx->pc = 0x8053346Cu;
    ctx->downcount -= 3;
    // 8053346C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533470:
    // 80533470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533474:
    // 80533474: bl      0x8053AB64
    {
            ctx->lr = 0x80533478u;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_80533478:
    ctx->pc = 0x80533478u;
    ctx->downcount -= 6;
    // 80533478: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053347C:
    ctx->pc = 0x8053347Cu;
    // 8053347C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533480:
    ctx->pc = 0x80533480u;
    // 80533480: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533484:
    ctx->pc = 0x80533484u;
    // 80533484: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533488:
    ctx->pc = 0x80533488u;
    // 80533488: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8053348Cu;
            ctx->pc = target;
            return;
        }
    }

label_8053348C:
    ctx->downcount -= 9;
    // 8053348C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533490:
    ctx->pc = 0x80533490u;
    // 80533490: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533494:
    // 80533494: addi    r4, r4, -20136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20136);

label_80533498:
    // 80533498: addi    r5, r29, 50
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(50);

label_8053349C:
    // 8053349C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805334A0:
    // 805334A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805334A4:
    // 805334A4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805334A8:
    // 805334A8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805334AC:
    // 805334AC: bl      0x8035168C
    {
            ctx->lr = 0x805334B0u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_805334B0:
    ctx->downcount -= 1;
    // 805334B0: b       0x80533798
    {
            goto label_80533798;
    }

label_805334B4:
    ctx->pc = 0x805334B4u;
    ctx->downcount -= 3;
    // 805334B4: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805334B8:
    // 805334B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805334BC:
    // 805334BC: bl      0x8053AB64
    {
            ctx->lr = 0x805334C0u;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_805334C0:
    ctx->pc = 0x805334C0u;
    ctx->downcount -= 6;
    // 805334C0: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805334C4:
    ctx->pc = 0x805334C4u;
    // 805334C4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805334C8:
    ctx->pc = 0x805334C8u;
    // 805334C8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805334CC:
    ctx->pc = 0x805334CCu;
    // 805334CC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805334D0:
    ctx->pc = 0x805334D0u;
    // 805334D0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805334D4u;
            ctx->pc = target;
            return;
        }
    }

label_805334D4:
    ctx->downcount -= 9;
    // 805334D4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_805334D8:
    ctx->pc = 0x805334D8u;
    // 805334D8: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805334DC:
    // 805334DC: addi    r4, r4, -20136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20136);

label_805334E0:
    // 805334E0: addi    r5, r29, 50
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(50);

label_805334E4:
    // 805334E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805334E8:
    // 805334E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805334EC:
    // 805334EC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805334F0:
    // 805334F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805334F4:
    // 805334F4: bl      0x8035168C
    {
            ctx->lr = 0x805334F8u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_805334F8:
    ctx->downcount -= 5;
    // 805334F8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805334FC:
    ctx->pc = 0x805334FCu;
    // 805334FC: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533500:
    // 80533500: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80533504:
    // 80533504: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533508:
    // 80533508: bl      0x803457B8
    {
            ctx->lr = 0x8053350Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8053350C:
    ctx->downcount -= 1;
    // 8053350C: b       0x80533798
    {
            goto label_80533798;
    }

label_80533510:
    ctx->pc = 0x80533510u;
    ctx->downcount -= 3;
    // 80533510: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533514:
    // 80533514: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533518:
    // 80533518: bl      0x8053AB64
    {
            ctx->lr = 0x8053351Cu;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_8053351C:
    ctx->pc = 0x8053351Cu;
    ctx->downcount -= 6;
    // 8053351C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533520:
    ctx->pc = 0x80533520u;
    // 80533520: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533524:
    ctx->pc = 0x80533524u;
    // 80533524: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533528:
    ctx->pc = 0x80533528u;
    // 80533528: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053352C:
    ctx->pc = 0x8053352Cu;
    // 8053352C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533530u;
            ctx->pc = target;
            return;
        }
    }

label_80533530:
    ctx->downcount -= 9;
    // 80533530: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533534:
    ctx->pc = 0x80533534u;
    // 80533534: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533538:
    // 80533538: addi    r4, r4, -20136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20136);

label_8053353C:
    // 8053353C: addi    r5, r29, 50
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(50);

label_80533540:
    // 80533540: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533544:
    // 80533544: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533548:
    // 80533548: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8053354C:
    // 8053354C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533550:
    // 80533550: bl      0x8035168C
    {
            ctx->lr = 0x80533554u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533554:
    ctx->downcount -= 5;
    // 80533554: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80533558:
    ctx->pc = 0x80533558u;
    // 80533558: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053355C:
    // 8053355C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80533560:
    // 80533560: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533564:
    // 80533564: bl      0x803457B8
    {
            ctx->lr = 0x80533568u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533568:
    ctx->downcount -= 1;
    // 80533568: b       0x80533798
    {
            goto label_80533798;
    }

label_8053356C:
    ctx->pc = 0x8053356Cu;
    ctx->downcount -= 3;
    // 8053356C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533570:
    // 80533570: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80533574:
    // 80533574: bl      0x8053AB64
    {
            ctx->lr = 0x80533578u;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_80533578:
    ctx->pc = 0x80533578u;
    ctx->downcount -= 6;
    // 80533578: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053357C:
    ctx->pc = 0x8053357Cu;
    // 8053357C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533580:
    ctx->pc = 0x80533580u;
    // 80533580: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533584:
    ctx->pc = 0x80533584u;
    // 80533584: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533588:
    ctx->pc = 0x80533588u;
    // 80533588: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8053358Cu;
            ctx->pc = target;
            return;
        }
    }

label_8053358C:
    ctx->downcount -= 9;
    // 8053358C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533590:
    ctx->pc = 0x80533590u;
    // 80533590: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533594:
    // 80533594: addi    r4, r4, -20136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20136);

label_80533598:
    // 80533598: addi    r5, r29, 50
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(50);

label_8053359C:
    // 8053359C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805335A0:
    // 805335A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805335A4:
    // 805335A4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805335A8:
    // 805335A8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805335AC:
    // 805335AC: bl      0x8035168C
    {
            ctx->lr = 0x805335B0u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_805335B0:
    ctx->downcount -= 1;
    // 805335B0: b       0x80533798
    {
            goto label_80533798;
    }

label_805335B4:
    ctx->downcount -= 9;
    // 805335B4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_805335B8:
    ctx->pc = 0x805335B8u;
    // 805335B8: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805335BC:
    // 805335BC: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_805335C0:
    // 805335C0: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_805335C4:
    // 805335C4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_805335C8:
    // 805335C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805335CC:
    // 805335CC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805335D0:
    // 805335D0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805335D4:
    // 805335D4: bl      0x8035168C
    {
            ctx->lr = 0x805335D8u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_805335D8:
    ctx->downcount -= 5;
    // 805335D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805335DC:
    ctx->pc = 0x805335DCu;
    // 805335DC: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805335E0:
    // 805335E0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805335E4:
    // 805335E4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805335E8:
    // 805335E8: bl      0x803457B8
    {
            ctx->lr = 0x805335ECu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805335EC:
    ctx->downcount -= 1;
    // 805335EC: b       0x80533798
    {
            goto label_80533798;
    }

label_805335F0:
    ctx->pc = 0x805335F0u;
    ctx->downcount -= 3;
    // 805335F0: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805335F4:
    // 805335F4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_805335F8:
    // 805335F8: bl      0x8053AB64
    {
            ctx->lr = 0x805335FCu;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_805335FC:
    ctx->pc = 0x805335FCu;
    ctx->downcount -= 6;
    // 805335FC: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533600:
    ctx->pc = 0x80533600u;
    // 80533600: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533604:
    ctx->pc = 0x80533604u;
    // 80533604: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533608:
    ctx->pc = 0x80533608u;
    // 80533608: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053360C:
    ctx->pc = 0x8053360Cu;
    // 8053360C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533610u;
            ctx->pc = target;
            return;
        }
    }

label_80533610:
    ctx->downcount -= 9;
    // 80533610: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533614:
    ctx->pc = 0x80533614u;
    // 80533614: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533618:
    // 80533618: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_8053361C:
    // 8053361C: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_80533620:
    // 80533620: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80533624:
    // 80533624: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533628:
    // 80533628: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8053362C:
    // 8053362C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533630:
    // 80533630: bl      0x8035168C
    {
            ctx->lr = 0x80533634u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533634:
    ctx->downcount -= 5;
    // 80533634: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80533638:
    ctx->pc = 0x80533638u;
    // 80533638: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053363C:
    // 8053363C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80533640:
    // 80533640: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533644:
    // 80533644: bl      0x803457B8
    {
            ctx->lr = 0x80533648u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533648:
    ctx->downcount -= 1;
    // 80533648: b       0x80533798
    {
            goto label_80533798;
    }

label_8053364C:
    ctx->downcount -= 9;
    // 8053364C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533650:
    ctx->pc = 0x80533650u;
    // 80533650: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533654:
    // 80533654: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_80533658:
    // 80533658: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_8053365C:
    // 8053365C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80533660:
    // 80533660: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533664:
    // 80533664: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80533668:
    // 80533668: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8053366C:
    // 8053366C: bl      0x8035168C
    {
            ctx->lr = 0x80533670u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533670:
    ctx->downcount -= 5;
    // 80533670: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80533674:
    ctx->pc = 0x80533674u;
    // 80533674: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533678:
    // 80533678: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8053367C:
    // 8053367C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533680:
    // 80533680: bl      0x803457B8
    {
            ctx->lr = 0x80533684u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533684:
    ctx->downcount -= 1;
    // 80533684: b       0x80533798
    {
            goto label_80533798;
    }

label_80533688:
    ctx->pc = 0x80533688u;
    ctx->downcount -= 3;
    // 80533688: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053368C:
    // 8053368C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80533690:
    // 80533690: bl      0x8053AB64
    {
            ctx->lr = 0x80533694u;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_80533694:
    ctx->pc = 0x80533694u;
    ctx->downcount -= 6;
    // 80533694: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533698:
    ctx->pc = 0x80533698u;
    // 80533698: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053369C:
    ctx->pc = 0x8053369Cu;
    // 8053369C: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805336A0:
    ctx->pc = 0x805336A0u;
    // 805336A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805336A4:
    ctx->pc = 0x805336A4u;
    // 805336A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805336A8u;
            ctx->pc = target;
            return;
        }
    }

label_805336A8:
    ctx->downcount -= 9;
    // 805336A8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_805336AC:
    ctx->pc = 0x805336ACu;
    // 805336AC: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805336B0:
    // 805336B0: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_805336B4:
    // 805336B4: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_805336B8:
    // 805336B8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_805336BC:
    // 805336BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805336C0:
    // 805336C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805336C4:
    // 805336C4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805336C8:
    // 805336C8: bl      0x8035168C
    {
            ctx->lr = 0x805336CCu;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_805336CC:
    ctx->downcount -= 5;
    // 805336CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805336D0:
    ctx->pc = 0x805336D0u;
    // 805336D0: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805336D4:
    // 805336D4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805336D8:
    // 805336D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805336DC:
    // 805336DC: bl      0x803457B8
    {
            ctx->lr = 0x805336E0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805336E0:
    ctx->downcount -= 1;
    // 805336E0: b       0x80533798
    {
            goto label_80533798;
    }

label_805336E4:
    ctx->pc = 0x805336E4u;
    ctx->downcount -= 3;
    // 805336E4: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805336E8:
    // 805336E8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_805336EC:
    // 805336EC: bl      0x8053AB64
    {
            ctx->lr = 0x805336F0u;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_805336F0:
    ctx->pc = 0x805336F0u;
    ctx->downcount -= 6;
    // 805336F0: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805336F4:
    ctx->pc = 0x805336F4u;
    // 805336F4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805336F8:
    ctx->pc = 0x805336F8u;
    // 805336F8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805336FC:
    ctx->pc = 0x805336FCu;
    // 805336FC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533700:
    ctx->pc = 0x80533700u;
    // 80533700: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533704u;
            ctx->pc = target;
            return;
        }
    }

label_80533704:
    ctx->downcount -= 9;
    // 80533704: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533708:
    ctx->pc = 0x80533708u;
    // 80533708: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053370C:
    // 8053370C: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_80533710:
    // 80533710: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_80533714:
    // 80533714: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80533718:
    // 80533718: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8053371C:
    // 8053371C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80533720:
    // 80533720: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533724:
    // 80533724: bl      0x8035168C
    {
            ctx->lr = 0x80533728u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533728:
    ctx->downcount -= 5;
    // 80533728: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8053372C:
    ctx->pc = 0x8053372Cu;
    // 8053372C: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533730:
    // 80533730: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80533734:
    // 80533734: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533738:
    // 80533738: bl      0x803457B8
    {
            ctx->lr = 0x8053373Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8053373C:
    ctx->downcount -= 1;
    // 8053373C: b       0x80533798
    {
            goto label_80533798;
    }

label_80533740:
    ctx->pc = 0x80533740u;
    ctx->downcount -= 3;
    // 80533740: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533744:
    // 80533744: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80533748:
    // 80533748: bl      0x8053AB64
    {
            ctx->lr = 0x8053374Cu;
            ctx->pc = 0x8053AB64u;
            return;
    }

label_8053374C:
    ctx->pc = 0x8053374Cu;
    ctx->downcount -= 6;
    // 8053374C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533750:
    ctx->pc = 0x80533750u;
    // 80533750: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533754:
    ctx->pc = 0x80533754u;
    // 80533754: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533758:
    ctx->pc = 0x80533758u;
    // 80533758: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053375C:
    ctx->pc = 0x8053375Cu;
    // 8053375C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533760u;
            ctx->pc = target;
            return;
        }
    }

label_80533760:
    ctx->downcount -= 9;
    // 80533760: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533764:
    ctx->pc = 0x80533764u;
    // 80533764: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533768:
    // 80533768: addi    r4, r4, -20086
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20086);

label_8053376C:
    // 8053376C: addi    r5, r29, 46
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(46);

label_80533770:
    // 80533770: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80533774:
    // 80533774: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533778:
    // 80533778: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8053377C:
    // 8053377C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533780:
    // 80533780: bl      0x8035168C
    {
            ctx->lr = 0x80533784u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533784:
    ctx->downcount -= 5;
    // 80533784: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80533788:
    ctx->pc = 0x80533788u;
    // 80533788: stb     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053378C:
    // 8053378C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80533790:
    // 80533790: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80533794:
    // 80533794: bl      0x803457B8
    {
            ctx->lr = 0x80533798u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533798:
    ctx->pc = 0x80533798u;
    ctx->downcount -= 16;
    // 80533798: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8053379C:
    ctx->pc = 0x8053379Cu;
    // 8053379C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805337A0:
    ctx->pc = 0x805337A0u;
    // 805337A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805337A4:
    // 805337A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805337A8:
    ctx->pc = 0x805337A8u;
    // 805337A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805337AC:
    ctx->downcount -= 3;
    // 805337AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805337B0:
    // 805337B0: slw   r5, r0, r5
    {
        u32 sh = ctx->gpr[5] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_805337B4:
    // 805337B4: b       0x805333E0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805333E0u;
                return;
            }
            goto label_805333E0;
    }

label_805337B8:
    ctx->pc = 0x805337B8u;
    ctx->downcount -= 11;
    // 805337B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805337BC:
    ctx->pc = 0x805337BCu;
    // 805337BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805337C0:
    ctx->pc = 0x805337C0u;
    // 805337C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805337C4:
    ctx->pc = 0x805337C4u;
    // 805337C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805337C8:
    ctx->pc = 0x805337C8u;
    // 805337C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805337CC:
    ctx->pc = 0x805337CCu;
    // 805337CC: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805337D0:
    ctx->pc = 0x805337D0u;
    // 805337D0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805337D4:
    ctx->pc = 0x805337D4u;
    // 805337D4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805337D8:
    ctx->pc = 0x805337D8u;
    // 805337D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805337DC:
    ctx->pc = 0x805337DCu;
    // 805337DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805337E0u;
            ctx->pc = target;
            return;
        }
    }

label_805337E0:
    ctx->pc = 0x805337E0u;
    ctx->downcount -= 2;
    // 805337E0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805337E4:
    ctx->pc = 0x805337E4u;
    // 805337E4: bc    12, 2, 0x80533830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533830;
        }
    }

label_805337E8:
    ctx->pc = 0x805337E8u;
    ctx->downcount -= 8;
    // 805337E8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_805337EC:
    ctx->pc = 0x805337ECu;
    // 805337EC: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805337F0:
    ctx->pc = 0x805337F0u;
    // 805337F0: addi    r4, r4, -4436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4436);

label_805337F4:
    ctx->pc = 0x805337F4u;
    // 805337F4: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_805337F8:
    ctx->pc = 0x805337F8u;
    // 805337F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805337FC:
    ctx->pc = 0x805337FCu;
    // 805337FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533800:
    ctx->pc = 0x80533800u;
    // 80533800: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533804:
    ctx->pc = 0x80533804u;
    // 80533804: bl      0x8035F864
    {
            ctx->lr = 0x80533808u;
            ctx->pc = 0x8035F864u;
            return;
    }

label_80533808:
    ctx->pc = 0x80533808u;
    ctx->downcount -= 3;
    // 80533808: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053380C:
    ctx->pc = 0x8053380Cu;
    // 8053380C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533810:
    ctx->pc = 0x80533810u;
    // 80533810: bl      0x8035F664
    {
            ctx->lr = 0x80533814u;
            ctx->pc = 0x8035F664u;
            return;
    }

label_80533814:
    ctx->pc = 0x80533814u;
    ctx->downcount -= 6;
    // 80533814: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533818:
    ctx->pc = 0x80533818u;
    // 80533818: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053381C:
    ctx->pc = 0x8053381Cu;
    // 8053381C: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533820:
    ctx->pc = 0x80533820u;
    // 80533820: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533824:
    ctx->pc = 0x80533824u;
    // 80533824: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533828u;
            ctx->pc = target;
            return;
        }
    }

label_80533828:
    ctx->pc = 0x80533828u;
    ctx->downcount -= 2;
    // 80533828: li      r3, 917
    ctx->gpr[3] = (u32)(s32)(917);

label_8053382C:
    ctx->pc = 0x8053382Cu;
    // 8053382C: bl      0x802B73BC
    {
            ctx->lr = 0x80533830u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80533830:
    ctx->pc = 0x80533830u;
    ctx->downcount -= 6;
    // 80533830: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533834:
    ctx->pc = 0x80533834u;
    // 80533834: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533838:
    ctx->pc = 0x80533838u;
    // 80533838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053383C:
    ctx->pc = 0x8053383Cu;
    // 8053383C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533840:
    ctx->pc = 0x80533840u;
    // 80533840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533844:
    ctx->pc = 0x80533844u;
    ctx->downcount -= 11;
    // 80533844: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533848:
    ctx->pc = 0x80533848u;
    // 80533848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053384C:
    ctx->pc = 0x8053384Cu;
    // 8053384C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533850:
    ctx->pc = 0x80533850u;
    // 80533850: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80533854:
    ctx->pc = 0x80533854u;
    // 80533854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533858:
    ctx->pc = 0x80533858u;
    // 80533858: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053385C:
    ctx->pc = 0x8053385Cu;
    // 8053385C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533860:
    ctx->pc = 0x80533860u;
    // 80533860: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533864:
    ctx->pc = 0x80533864u;
    // 80533864: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533868:
    ctx->pc = 0x80533868u;
    // 80533868: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8053386Cu;
            ctx->pc = target;
            return;
        }
    }

label_8053386C:
    ctx->pc = 0x8053386Cu;
    ctx->downcount -= 2;
    // 8053386C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533870:
    ctx->pc = 0x80533870u;
    // 80533870: bc    12, 2, 0x805338BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805338BC;
        }
    }

label_80533874:
    ctx->pc = 0x80533874u;
    ctx->downcount -= 8;
    // 80533874: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533878:
    ctx->pc = 0x80533878u;
    // 80533878: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053387C:
    ctx->pc = 0x8053387Cu;
    // 8053387C: addi    r4, r4, -4434
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4434);

label_80533880:
    ctx->pc = 0x80533880u;
    // 80533880: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_80533884:
    ctx->pc = 0x80533884u;
    // 80533884: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533888:
    ctx->pc = 0x80533888u;
    // 80533888: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8053388C:
    ctx->pc = 0x8053388Cu;
    // 8053388C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533890:
    ctx->pc = 0x80533890u;
    // 80533890: bl      0x8035F864
    {
            ctx->lr = 0x80533894u;
            ctx->pc = 0x8035F864u;
            return;
    }

label_80533894:
    ctx->pc = 0x80533894u;
    ctx->downcount -= 3;
    // 80533894: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533898:
    ctx->pc = 0x80533898u;
    // 80533898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053389C:
    ctx->pc = 0x8053389Cu;
    // 8053389C: bl      0x8035F664
    {
            ctx->lr = 0x805338A0u;
            ctx->pc = 0x8035F664u;
            return;
    }

label_805338A0:
    ctx->pc = 0x805338A0u;
    ctx->downcount -= 6;
    // 805338A0: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805338A4:
    ctx->pc = 0x805338A4u;
    // 805338A4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805338A8:
    ctx->pc = 0x805338A8u;
    // 805338A8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805338AC:
    ctx->pc = 0x805338ACu;
    // 805338AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805338B0:
    ctx->pc = 0x805338B0u;
    // 805338B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805338B4u;
            ctx->pc = target;
            return;
        }
    }

label_805338B4:
    ctx->pc = 0x805338B4u;
    ctx->downcount -= 2;
    // 805338B4: li      r3, 917
    ctx->gpr[3] = (u32)(s32)(917);

label_805338B8:
    ctx->pc = 0x805338B8u;
    // 805338B8: bl      0x802B73BC
    {
            ctx->lr = 0x805338BCu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805338BC:
    ctx->pc = 0x805338BCu;
    ctx->downcount -= 6;
    // 805338BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805338C0:
    ctx->pc = 0x805338C0u;
    // 805338C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805338C4:
    ctx->pc = 0x805338C4u;
    // 805338C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805338C8:
    ctx->pc = 0x805338C8u;
    // 805338C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805338CC:
    ctx->pc = 0x805338CCu;
    // 805338CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805338D0:
    ctx->pc = 0x805338D0u;
    ctx->downcount -= 11;
    // 805338D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805338D4:
    ctx->pc = 0x805338D4u;
    // 805338D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805338D8:
    ctx->pc = 0x805338D8u;
    // 805338D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805338DC:
    ctx->pc = 0x805338DCu;
    // 805338DC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805338E0:
    ctx->pc = 0x805338E0u;
    // 805338E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805338E4:
    ctx->pc = 0x805338E4u;
    // 805338E4: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805338E8:
    ctx->pc = 0x805338E8u;
    // 805338E8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805338EC:
    ctx->pc = 0x805338ECu;
    // 805338EC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805338F0:
    ctx->pc = 0x805338F0u;
    // 805338F0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805338F4:
    ctx->pc = 0x805338F4u;
    // 805338F4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805338F8u;
            ctx->pc = target;
            return;
        }
    }

label_805338F8:
    ctx->pc = 0x805338F8u;
    ctx->downcount -= 2;
    // 805338F8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805338FC:
    ctx->pc = 0x805338FCu;
    // 805338FC: bc    12, 2, 0x80533940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533940;
        }
    }

label_80533900:
    ctx->pc = 0x80533900u;
    ctx->downcount -= 8;
    // 80533900: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533904:
    ctx->pc = 0x80533904u;
    // 80533904: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533908:
    ctx->pc = 0x80533908u;
    // 80533908: addi    r4, r4, -4434
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4434);

label_8053390C:
    ctx->pc = 0x8053390Cu;
    // 8053390C: li      r5, 53
    ctx->gpr[5] = (u32)(s32)(53);

label_80533910:
    ctx->pc = 0x80533910u;
    // 80533910: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533914:
    ctx->pc = 0x80533914u;
    // 80533914: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533918:
    ctx->pc = 0x80533918u;
    // 80533918: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8053391C:
    ctx->pc = 0x8053391Cu;
    // 8053391C: bl      0x8035F864
    {
            ctx->lr = 0x80533920u;
            ctx->pc = 0x8035F864u;
            return;
    }

label_80533920:
    ctx->pc = 0x80533920u;
    ctx->downcount -= 3;
    // 80533920: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533924:
    ctx->pc = 0x80533924u;
    // 80533924: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533928:
    ctx->pc = 0x80533928u;
    // 80533928: bl      0x8035F664
    {
            ctx->lr = 0x8053392Cu;
            ctx->pc = 0x8035F664u;
            return;
    }

label_8053392C:
    ctx->pc = 0x8053392Cu;
    ctx->downcount -= 6;
    // 8053392C: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533930:
    ctx->pc = 0x80533930u;
    // 80533930: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533934:
    ctx->pc = 0x80533934u;
    // 80533934: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533938:
    ctx->pc = 0x80533938u;
    // 80533938: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053393C:
    ctx->pc = 0x8053393Cu;
    // 8053393C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533940u;
            ctx->pc = target;
            return;
        }
    }

label_80533940:
    ctx->pc = 0x80533940u;
    ctx->downcount -= 6;
    // 80533940: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533944:
    ctx->pc = 0x80533944u;
    // 80533944: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533948:
    ctx->pc = 0x80533948u;
    // 80533948: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053394C:
    ctx->pc = 0x8053394Cu;
    // 8053394C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533950:
    ctx->pc = 0x80533950u;
    // 80533950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533954:
    ctx->pc = 0x80533954u;
    ctx->downcount -= 3;
    // 80533954: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533958:
    ctx->pc = 0x80533958u;
    // 80533958: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8053395C:
    ctx->pc = 0x8053395Cu;
    // 8053395C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533960:
    ctx->pc = 0x80533960u;
    ctx->downcount -= 3;
    // 80533960: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533964:
    ctx->pc = 0x80533964u;
    // 80533964: stb     r4, 273(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(273);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80533968:
    ctx->pc = 0x80533968u;
    // 80533968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053396C:
    ctx->pc = 0x8053396Cu;
    ctx->downcount -= 2;
    // 8053396C: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533970:
    ctx->pc = 0x80533970u;
    // 80533970: b       0x805371E4
    {
            ctx->pc = 0x805371E4u;
            return;
    }

label_80533974:
    ctx->pc = 0x80533974u;
    ctx->downcount -= 2;
    // 80533974: cmpwi   r4, 0
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

label_80533978:
    ctx->pc = 0x80533978u;
    // 80533978: bc    12, 2, 0x80533990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533990;
        }
    }

label_8053397C:
    ctx->pc = 0x8053397Cu;
    ctx->downcount -= 6;
    // 8053397C: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533980:
    ctx->pc = 0x80533980u;
    // 80533980: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533984:
    ctx->pc = 0x80533984u;
    // 80533984: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533988:
    ctx->pc = 0x80533988u;
    // 80533988: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053398C:
    ctx->pc = 0x8053398Cu;
    // 8053398C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80533990:
    ctx->pc = 0x80533990u;
    ctx->downcount -= 6;
    // 80533990: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533994:
    ctx->pc = 0x80533994u;
    // 80533994: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533998:
    ctx->pc = 0x80533998u;
    // 80533998: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053399C:
    ctx->pc = 0x8053399Cu;
    // 8053399C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805339A0:
    ctx->pc = 0x805339A0u;
    // 805339A0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_805339A4:
    ctx->pc = 0x805339A4u;
    ctx->downcount -= 22;
    // 805339A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805339A8:
    ctx->pc = 0x805339A8u;
    // 805339A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805339AC:
    ctx->pc = 0x805339ACu;
    // 805339AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805339B0:
    ctx->pc = 0x805339B0u;
    // 805339B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805339B4:
    ctx->pc = 0x805339B4u;
    // 805339B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805339B8:
    ctx->pc = 0x805339B8u;
    // 805339B8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805339BC:
    ctx->pc = 0x805339BCu;
    // 805339BC: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805339C0:
    ctx->pc = 0x805339C0u;
    // 805339C0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805339C4:
    ctx->pc = 0x805339C4u;
    // 805339C4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805339C8:
    ctx->pc = 0x805339C8u;
    // 805339C8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805339CC:
    ctx->pc = 0x805339CCu;
    // 805339CC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805339D0u;
            ctx->pc = target;
            return;
        }
    }

label_805339D0:
    ctx->pc = 0x805339D0u;
    ctx->downcount -= 2;
    // 805339D0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805339D4:
    ctx->pc = 0x805339D4u;
    // 805339D4: bc    12, 2, 0x805339F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805339F8;
        }
    }

label_805339D8:
    ctx->pc = 0x805339D8u;
    ctx->downcount -= 3;
    // 805339D8: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805339DC:
    ctx->pc = 0x805339DCu;
    // 805339DC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805339E0:
    ctx->pc = 0x805339E0u;
    // 805339E0: bl      0x805371F0
    {
            ctx->lr = 0x805339E4u;
            ctx->pc = 0x805371F0u;
            return;
    }

label_805339E4:
    ctx->pc = 0x805339E4u;
    ctx->downcount -= 6;
    // 805339E4: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805339E8:
    ctx->pc = 0x805339E8u;
    // 805339E8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805339EC:
    ctx->pc = 0x805339ECu;
    // 805339EC: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805339F0:
    ctx->pc = 0x805339F0u;
    // 805339F0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805339F4:
    ctx->pc = 0x805339F4u;
    // 805339F4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805339F8u;
            ctx->pc = target;
            return;
        }
    }

label_805339F8:
    ctx->pc = 0x805339F8u;
    ctx->downcount -= 16;
    // 805339F8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805339FC:
    ctx->pc = 0x805339FCu;
    // 805339FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533A00:
    ctx->pc = 0x80533A00u;
    // 80533A00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533A04:
    ctx->pc = 0x80533A04u;
    // 80533A04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533A08:
    ctx->pc = 0x80533A08u;
    // 80533A08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A0C:
    ctx->pc = 0x80533A0Cu;
    ctx->downcount -= 4;
    // 80533A0C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A10:
    ctx->pc = 0x80533A10u;
    // 80533A10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80533A14:
    ctx->pc = 0x80533A14u;
    // 80533A14: stb     r0, 289(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533A18:
    ctx->pc = 0x80533A18u;
    // 80533A18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A1C:
    ctx->pc = 0x80533A1Cu;
    ctx->downcount -= 4;
    // 80533A1C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A20:
    ctx->pc = 0x80533A20u;
    // 80533A20: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80533A24:
    ctx->pc = 0x80533A24u;
    // 80533A24: stb     r0, 289(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80533A28:
    ctx->pc = 0x80533A28u;
    // 80533A28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A2C:
    ctx->pc = 0x80533A2Cu;
    ctx->downcount -= 5;
    // 80533A2C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A30:
    ctx->pc = 0x80533A30u;
    // 80533A30: lfs     f1, 17180(r2)
    if (!ppc_fp_available_inline(ctx, 0x80533A30u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80533A34:
    ctx->pc = 0x80533A34u;
    // 80533A34: lfs     f0, 284(r3)
    if (!ppc_fp_available_inline(ctx, 0x80533A34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80533A38:
    ctx->pc = 0x80533A38u;
    // 80533A38: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80533A38u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80533A3C:
    ctx->pc = 0x80533A3Cu;
    // 80533A3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A40:
    ctx->pc = 0x80533A40u;
    ctx->downcount -= 3;
    // 80533A40: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A44:
    ctx->pc = 0x80533A44u;
    // 80533A44: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80533A48:
    ctx->pc = 0x80533A48u;
    // 80533A48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A4C:
    ctx->pc = 0x80533A4Cu;
    ctx->downcount -= 5;
    // 80533A4C: lwz     r4, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80533A50:
    ctx->pc = 0x80533A50u;
    // 80533A50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80533A54:
    ctx->pc = 0x80533A54u;
    // 80533A54: lwz     r0, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533A58:
    ctx->pc = 0x80533A58u;
    // 80533A58: cmplwi  r0, 0x0001
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

label_80533A5C:
    ctx->pc = 0x80533A5Cu;
    // 80533A5C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A60:
    ctx->pc = 0x80533A60u;
    ctx->downcount -= 2;
    // 80533A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80533A64:
    ctx->pc = 0x80533A64u;
    // 80533A64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533A68:
    ctx->pc = 0x80533A68u;
    ctx->downcount -= 2;
    // 80533A68: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A6C:
    ctx->pc = 0x80533A6Cu;
    // 80533A6C: b       0x8053594C
    {
            goto label_8053594C;
    }

label_80533A70:
    ctx->pc = 0x80533A70u;
    ctx->downcount -= 2;
    // 80533A70: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A74:
    ctx->pc = 0x80533A74u;
    // 80533A74: b       0x80535958
    {
            goto label_80535958;
    }

label_80533A78:
    ctx->pc = 0x80533A78u;
    ctx->downcount -= 2;
    // 80533A78: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A7C:
    ctx->pc = 0x80533A7Cu;
    // 80533A7C: b       0x80535964
    {
            goto label_80535964;
    }

label_80533A80:
    ctx->pc = 0x80533A80u;
    ctx->downcount -= 2;
    // 80533A80: cmpwi   r4, 0
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

label_80533A84:
    ctx->pc = 0x80533A84u;
    // 80533A84: bc    12, 2, 0x80533A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533A9C;
        }
    }

label_80533A88:
    ctx->pc = 0x80533A88u;
    ctx->downcount -= 6;
    // 80533A88: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533A8C:
    ctx->pc = 0x80533A8Cu;
    // 80533A8C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533A90:
    ctx->pc = 0x80533A90u;
    // 80533A90: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533A94:
    ctx->pc = 0x80533A94u;
    // 80533A94: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533A98:
    ctx->pc = 0x80533A98u;
    // 80533A98: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80533A9C:
    ctx->pc = 0x80533A9Cu;
    ctx->downcount -= 6;
    // 80533A9C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533AA0:
    ctx->pc = 0x80533AA0u;
    // 80533AA0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533AA4:
    ctx->pc = 0x80533AA4u;
    // 80533AA4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533AA8:
    ctx->pc = 0x80533AA8u;
    // 80533AA8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533AAC:
    ctx->pc = 0x80533AACu;
    // 80533AAC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80533AB0:
    ctx->pc = 0x80533AB0u;
    ctx->downcount -= 11;
    // 80533AB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533AB4:
    ctx->pc = 0x80533AB4u;
    // 80533AB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533AB8:
    ctx->pc = 0x80533AB8u;
    // 80533AB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533ABC:
    ctx->pc = 0x80533ABCu;
    // 80533ABC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80533AC0:
    ctx->pc = 0x80533AC0u;
    // 80533AC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533AC4:
    ctx->pc = 0x80533AC4u;
    // 80533AC4: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533AC8:
    ctx->pc = 0x80533AC8u;
    // 80533AC8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533ACC:
    ctx->pc = 0x80533ACCu;
    // 80533ACC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533AD0:
    ctx->pc = 0x80533AD0u;
    // 80533AD0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533AD4:
    ctx->pc = 0x80533AD4u;
    // 80533AD4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533AD8u;
            ctx->pc = target;
            return;
        }
    }

label_80533AD8:
    ctx->pc = 0x80533AD8u;
    ctx->downcount -= 2;
    // 80533AD8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533ADC:
    ctx->pc = 0x80533ADCu;
    // 80533ADC: bc    12, 2, 0x80533AF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533AF4;
        }
    }

label_80533AE0:
    ctx->pc = 0x80533AE0u;
    ctx->downcount -= 6;
    // 80533AE0: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533AE4:
    ctx->pc = 0x80533AE4u;
    // 80533AE4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533AE8:
    ctx->pc = 0x80533AE8u;
    // 80533AE8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533AEC:
    ctx->pc = 0x80533AECu;
    // 80533AEC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533AF0:
    ctx->pc = 0x80533AF0u;
    // 80533AF0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533AF4u;
            ctx->pc = target;
            return;
        }
    }

label_80533AF4:
    ctx->pc = 0x80533AF4u;
    ctx->downcount -= 6;
    // 80533AF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533AF8:
    ctx->pc = 0x80533AF8u;
    // 80533AF8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533AFC:
    ctx->pc = 0x80533AFCu;
    // 80533AFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533B00:
    ctx->pc = 0x80533B00u;
    // 80533B00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533B04:
    ctx->pc = 0x80533B04u;
    // 80533B04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533B08:
    ctx->pc = 0x80533B08u;
    ctx->downcount -= 5;
    // 80533B08: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80533B0C:
    ctx->pc = 0x80533B0Cu;
    // 80533B0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80533B10:
    ctx->pc = 0x80533B10u;
    // 80533B10: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80533B14:
    ctx->pc = 0x80533B14u;
    // 80533B14: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533B18:
    ctx->pc = 0x80533B18u;
    // 80533B18: bc    12, 2, 0x80533B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533B40;
        }
    }

label_80533B1C:
    ctx->pc = 0x80533B1Cu;
    ctx->downcount -= 4;
    // 80533B1C: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80533B20:
    ctx->pc = 0x80533B20u;
    // 80533B20: lbz     r0, 278(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(278);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80533B24:
    ctx->pc = 0x80533B24u;
    // 80533B24: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533B28:
    ctx->pc = 0x80533B28u;
    // 80533B28: bc    12, 2, 0x80533B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533B40;
        }
    }

label_80533B2C:
    ctx->pc = 0x80533B2Cu;
    ctx->downcount -= 4;
    // 80533B2C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533B30:
    ctx->pc = 0x80533B30u;
    // 80533B30: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80533B34:
    ctx->pc = 0x80533B34u;
    // 80533B34: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533B38:
    ctx->pc = 0x80533B38u;
    // 80533B38: bc    12, 2, 0x80533B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533B40;
        }
    }

label_80533B3C:
    ctx->pc = 0x80533B3Cu;
    ctx->downcount -= 1;
    // 80533B3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80533B40:
    ctx->pc = 0x80533B40u;
    ctx->downcount -= 2;
    // 80533B40: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80533B44:
    ctx->pc = 0x80533B44u;
    // 80533B44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533B48:
    ctx->pc = 0x80533B48u;
    ctx->downcount -= 8;
    // 80533B48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533B4C:
    ctx->pc = 0x80533B4Cu;
    // 80533B4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533B50:
    ctx->pc = 0x80533B50u;
    // 80533B50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533B54:
    ctx->pc = 0x80533B54u;
    // 80533B54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533B58:
    ctx->pc = 0x80533B58u;
    // 80533B58: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80533B5C:
    ctx->pc = 0x80533B5Cu;
    // 80533B5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533B60:
    ctx->pc = 0x80533B60u;
    // 80533B60: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533B64:
    ctx->pc = 0x80533B64u;
    // 80533B64: bl      0x8035144C
    {
            ctx->lr = 0x80533B68u;
            ctx->pc = 0x8035144Cu;
            return;
    }

label_80533B68:
    ctx->pc = 0x80533B68u;
    ctx->downcount -= 2;
    // 80533B68: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533B6C:
    ctx->pc = 0x80533B6Cu;
    // 80533B6C: bc    12, 2, 0x80533B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533B98;
        }
    }

label_80533B70:
    ctx->pc = 0x80533B70u;
    ctx->downcount -= 6;
    // 80533B70: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533B74:
    ctx->pc = 0x80533B74u;
    // 80533B74: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533B78:
    ctx->pc = 0x80533B78u;
    // 80533B78: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533B7C:
    ctx->pc = 0x80533B7Cu;
    // 80533B7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533B80:
    ctx->pc = 0x80533B80u;
    // 80533B80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533B84u;
            ctx->pc = target;
            return;
        }
    }

label_80533B84:
    ctx->pc = 0x80533B84u;
    ctx->downcount -= 6;
    // 80533B84: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533B88:
    ctx->pc = 0x80533B88u;
    // 80533B88: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533B8C:
    ctx->pc = 0x80533B8Cu;
    // 80533B8C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533B90:
    ctx->pc = 0x80533B90u;
    // 80533B90: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533B94:
    ctx->pc = 0x80533B94u;
    // 80533B94: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533B98u;
            ctx->pc = target;
            return;
        }
    }

label_80533B98:
    ctx->pc = 0x80533B98u;
    ctx->downcount -= 6;
    // 80533B98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533B9C:
    ctx->pc = 0x80533B9Cu;
    // 80533B9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533BA0:
    ctx->pc = 0x80533BA0u;
    // 80533BA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533BA4:
    ctx->pc = 0x80533BA4u;
    // 80533BA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533BA8:
    ctx->pc = 0x80533BA8u;
    // 80533BA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533BAC:
    ctx->pc = 0x80533BACu;
    ctx->downcount -= 8;
    // 80533BAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533BB0:
    ctx->pc = 0x80533BB0u;
    // 80533BB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533BB4:
    ctx->pc = 0x80533BB4u;
    // 80533BB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533BB8:
    ctx->pc = 0x80533BB8u;
    // 80533BB8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80533BBC:
    ctx->pc = 0x80533BBCu;
    // 80533BBC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533BC0:
    ctx->pc = 0x80533BC0u;
    // 80533BC0: lwz     r4, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80533BC4:
    ctx->pc = 0x80533BC4u;
    // 80533BC4: cmplwi  r4, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533BC8:
    ctx->pc = 0x80533BC8u;
    // 80533BC8: bc    4, 0, 0x80533C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533C38;
        }
    }

label_80533BCC:
    ctx->pc = 0x80533BCCu;
    ctx->downcount -= 4;
    // 80533BCC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80533BD0:
    ctx->pc = 0x80533BD0u;
    // 80533BD0: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533BD4:
    ctx->pc = 0x80533BD4u;
    // 80533BD4: cmplwi  r0, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533BD8:
    ctx->pc = 0x80533BD8u;
    // 80533BD8: bc    4, 2, 0x80533C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533C38;
        }
    }

label_80533BDC:
    ctx->pc = 0x80533BDCu;
    ctx->downcount -= 3;
    // 80533BDC: lbz     r4, 203(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(203);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80533BE0:
    ctx->pc = 0x80533BE0u;
    // 80533BE0: cmplwi  r4, 0x000F
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x000Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533BE4:
    ctx->pc = 0x80533BE4u;
    // 80533BE4: bc    4, 2, 0x80533BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533BF8;
        }
    }

label_80533BE8:
    ctx->pc = 0x80533BE8u;
    ctx->downcount -= 3;
    // 80533BE8: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533BEC:
    ctx->pc = 0x80533BECu;
    // 80533BEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533BF0:
    ctx->pc = 0x80533BF0u;
    // 80533BF0: bl      0x80349B74
    {
            ctx->lr = 0x80533BF4u;
            ctx->pc = 0x80349B74u;
            return;
    }

label_80533BF4:
    ctx->pc = 0x80533BF4u;
    ctx->downcount -= 1;
    // 80533BF4: b       0x80533C10
    {
            goto label_80533C10;
    }

label_80533BF8:
    ctx->pc = 0x80533BF8u;
    ctx->downcount -= 6;
    // 80533BF8: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80533BFC:
    ctx->pc = 0x80533BFCu;
    // 80533BFC: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533C00:
    ctx->pc = 0x80533C00u;
    // 80533C00: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533C04:
    ctx->pc = 0x80533C04u;
    // 80533C04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80533C08:
    ctx->pc = 0x80533C08u;
    // 80533C08: subfe   r4, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533C0C:
    ctx->pc = 0x80533C0Cu;
    // 80533C0C: bl      0x80349BE8
    {
            ctx->lr = 0x80533C10u;
            ctx->pc = 0x80349BE8u;
            return;
    }

label_80533C10:
    ctx->pc = 0x80533C10u;
    ctx->downcount -= 10;
    // 80533C10: lwz     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80533C14:
    ctx->pc = 0x80533C14u;
    // 80533C14: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533C18:
    ctx->pc = 0x80533C18u;
    // 80533C18: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533C1C:
    ctx->pc = 0x80533C1Cu;
    // 80533C1C: addi    r4, r4, -20136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20136);

label_80533C20:
    ctx->pc = 0x80533C20u;
    // 80533C20: addi    r5, r5, 70
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(70);

label_80533C24:
    ctx->pc = 0x80533C24u;
    // 80533C24: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80533C28:
    ctx->pc = 0x80533C28u;
    // 80533C28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80533C2C:
    ctx->pc = 0x80533C2Cu;
    // 80533C2C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80533C30:
    ctx->pc = 0x80533C30u;
    // 80533C30: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80533C34:
    ctx->pc = 0x80533C34u;
    // 80533C34: bl      0x8035168C
    {
            ctx->lr = 0x80533C38u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_80533C38:
    ctx->pc = 0x80533C38u;
    ctx->downcount -= 6;
    // 80533C38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533C3C:
    ctx->pc = 0x80533C3Cu;
    // 80533C3C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533C40:
    ctx->pc = 0x80533C40u;
    // 80533C40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533C44:
    ctx->pc = 0x80533C44u;
    // 80533C44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533C48:
    ctx->pc = 0x80533C48u;
    // 80533C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533C4C:
    ctx->pc = 0x80533C4Cu;
    ctx->downcount -= 23;
    // 80533C4C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533C50:
    ctx->pc = 0x80533C50u;
    // 80533C50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533C54:
    ctx->pc = 0x80533C54u;
    // 80533C54: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533C58:
    ctx->pc = 0x80533C58u;
    // 80533C58: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80533C5C:
    ctx->pc = 0x80533C5Cu;
    // 80533C5C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533C60:
    ctx->pc = 0x80533C60u;
    // 80533C60: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80533C64:
    ctx->pc = 0x80533C64u;
    // 80533C64: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80533C68:
    ctx->pc = 0x80533C68u;
    // 80533C68: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533C6C:
    ctx->pc = 0x80533C6Cu;
    // 80533C6C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533C70:
    ctx->pc = 0x80533C70u;
    // 80533C70: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533C74:
    ctx->pc = 0x80533C74u;
    // 80533C74: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533C78:
    ctx->pc = 0x80533C78u;
    // 80533C78: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533C7Cu;
            ctx->pc = target;
            return;
        }
    }

label_80533C7C:
    ctx->pc = 0x80533C7Cu;
    ctx->downcount -= 2;
    // 80533C7C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533C80:
    ctx->pc = 0x80533C80u;
    // 80533C80: bc    12, 2, 0x80533D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533D00;
        }
    }

label_80533C84:
    ctx->pc = 0x80533C84u;
    ctx->downcount -= 5;
    // 80533C84: cmpwi   r30, 1
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

label_80533C88:
    ctx->pc = 0x80533C88u;
    // 80533C88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80533C8C:
    ctx->pc = 0x80533C8Cu;
    // 80533C8C: stb     r31, 203(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(203);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80533C90:
    ctx->pc = 0x80533C90u;
    // 80533C90: stw     r0, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533C94:
    ctx->pc = 0x80533C94u;
    // 80533C94: bc    4, 2, 0x80533CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80533CA0;
        }
    }

label_80533C98:
    ctx->pc = 0x80533C98u;
    ctx->downcount -= 2;
    // 80533C98: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80533C9C:
    ctx->pc = 0x80533C9Cu;
    // 80533C9C: b       0x80533CAC
    {
            goto label_80533CAC;
    }

label_80533CA0:
    ctx->pc = 0x80533CA0u;
    ctx->downcount -= 3;
    // 80533CA0: addi    r0, r30, -2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-2);

label_80533CA4:
    ctx->pc = 0x80533CA4u;
    // 80533CA4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80533CA8:
    ctx->pc = 0x80533CA8u;
    // 80533CA8: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80533CAC:
    ctx->pc = 0x80533CACu;
    ctx->downcount -= 9;
    // 80533CAC: addi    r0, r30, -2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-2);

label_80533CB0:
    ctx->pc = 0x80533CB0u;
    // 80533CB0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80533CB4:
    ctx->pc = 0x80533CB4u;
    // 80533CB4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80533CB8:
    ctx->pc = 0x80533CB8u;
    // 80533CB8: stw     r3, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80533CBC:
    ctx->pc = 0x80533CBCu;
    // 80533CBC: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80533CC0:
    ctx->pc = 0x80533CC0u;
    // 80533CC0: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533CC4:
    ctx->pc = 0x80533CC4u;
    // 80533CC4: addi    r4, r4, -130
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-130);

label_80533CC8:
    ctx->pc = 0x80533CC8u;
    // 80533CC8: addi    r5, r5, 50
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(50);

label_80533CCC:
    ctx->pc = 0x80533CCCu;
    // 80533CCC: bl      0x8053D5BC
    {
            ctx->lr = 0x80533CD0u;
            ctx->pc = 0x8053D5BCu;
            return;
    }

label_80533CD0:
    ctx->pc = 0x80533CD0u;
    ctx->downcount -= 6;
    // 80533CD0: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533CD4:
    ctx->pc = 0x80533CD4u;
    // 80533CD4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533CD8:
    ctx->pc = 0x80533CD8u;
    // 80533CD8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533CDC:
    ctx->pc = 0x80533CDCu;
    // 80533CDC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533CE0:
    ctx->pc = 0x80533CE0u;
    // 80533CE0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533CE4u;
            ctx->pc = target;
            return;
        }
    }

label_80533CE4:
    ctx->pc = 0x80533CE4u;
    ctx->downcount -= 2;
    // 80533CE4: li      r3, 915
    ctx->gpr[3] = (u32)(s32)(915);

label_80533CE8:
    ctx->pc = 0x80533CE8u;
    // 80533CE8: bl      0x802B73BC
    {
            ctx->lr = 0x80533CECu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80533CEC:
    ctx->pc = 0x80533CECu;
    ctx->downcount -= 2;
    // 80533CEC: li      r3, 812
    ctx->gpr[3] = (u32)(s32)(812);

label_80533CF0:
    ctx->pc = 0x80533CF0u;
    // 80533CF0: bl      0x802B73BC
    {
            ctx->lr = 0x80533CF4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80533CF4:
    ctx->pc = 0x80533CF4u;
    ctx->downcount -= 3;
    // 80533CF4: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80533CF8:
    ctx->pc = 0x80533CF8u;
    // 80533CF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80533CFC:
    ctx->pc = 0x80533CFCu;
    // 80533CFC: bl      0x803457B8
    {
            ctx->lr = 0x80533D00u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80533D00:
    ctx->pc = 0x80533D00u;
    ctx->downcount -= 16;
    // 80533D00: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80533D04:
    ctx->pc = 0x80533D04u;
    // 80533D04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533D08:
    ctx->pc = 0x80533D08u;
    // 80533D08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533D0C:
    ctx->pc = 0x80533D0Cu;
    // 80533D0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80533D10:
    ctx->pc = 0x80533D10u;
    // 80533D10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533D14:
    ctx->pc = 0x80533D14u;
    ctx->downcount -= 3;
    // 80533D14: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533D18:
    ctx->pc = 0x80533D18u;
    // 80533D18: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80533D1C:
    ctx->pc = 0x80533D1Cu;
    // 80533D1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533D20:
    ctx->pc = 0x80533D20u;
    ctx->downcount -= 2;
    // 80533D20: cmpwi   r4, 0
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

label_80533D24:
    ctx->pc = 0x80533D24u;
    // 80533D24: bc    12, 2, 0x80533D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533D3C;
        }
    }

label_80533D28:
    ctx->pc = 0x80533D28u;
    ctx->downcount -= 6;
    // 80533D28: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533D2C:
    ctx->pc = 0x80533D2Cu;
    // 80533D2C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D30:
    ctx->pc = 0x80533D30u;
    // 80533D30: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D34:
    ctx->pc = 0x80533D34u;
    // 80533D34: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533D38:
    ctx->pc = 0x80533D38u;
    // 80533D38: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80533D3C:
    ctx->pc = 0x80533D3Cu;
    ctx->downcount -= 6;
    // 80533D3C: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533D40:
    ctx->pc = 0x80533D40u;
    // 80533D40: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D44:
    ctx->pc = 0x80533D44u;
    // 80533D44: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D48:
    ctx->pc = 0x80533D48u;
    // 80533D48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533D4C:
    ctx->pc = 0x80533D4Cu;
    // 80533D4C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80533D50:
    ctx->pc = 0x80533D50u;
    ctx->downcount -= 11;
    // 80533D50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533D54:
    ctx->pc = 0x80533D54u;
    // 80533D54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533D58:
    ctx->pc = 0x80533D58u;
    // 80533D58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533D5C:
    ctx->pc = 0x80533D5Cu;
    // 80533D5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80533D60:
    ctx->pc = 0x80533D60u;
    // 80533D60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533D64:
    ctx->pc = 0x80533D64u;
    // 80533D64: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533D68:
    ctx->pc = 0x80533D68u;
    // 80533D68: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D6C:
    ctx->pc = 0x80533D6Cu;
    // 80533D6C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D70:
    ctx->pc = 0x80533D70u;
    // 80533D70: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533D74:
    ctx->pc = 0x80533D74u;
    // 80533D74: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533D78u;
            ctx->pc = target;
            return;
        }
    }

label_80533D78:
    ctx->pc = 0x80533D78u;
    ctx->downcount -= 2;
    // 80533D78: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80533D7C:
    ctx->pc = 0x80533D7Cu;
    // 80533D7C: bc    12, 2, 0x80533D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80533D94;
        }
    }

label_80533D80:
    ctx->pc = 0x80533D80u;
    ctx->downcount -= 6;
    // 80533D80: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533D84:
    ctx->pc = 0x80533D84u;
    // 80533D84: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D88:
    ctx->pc = 0x80533D88u;
    // 80533D88: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533D8C:
    ctx->pc = 0x80533D8Cu;
    // 80533D8C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533D90:
    ctx->pc = 0x80533D90u;
    // 80533D90: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533D94u;
            ctx->pc = target;
            return;
        }
    }

label_80533D94:
    ctx->pc = 0x80533D94u;
    ctx->downcount -= 6;
    // 80533D94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533D98:
    ctx->pc = 0x80533D98u;
    // 80533D98: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80533D9C:
    ctx->pc = 0x80533D9Cu;
    // 80533D9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533DA0:
    ctx->pc = 0x80533DA0u;
    // 80533DA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80533DA4:
    ctx->pc = 0x80533DA4u;
    // 80533DA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533DA8:
    ctx->pc = 0x80533DA8u;
    ctx->downcount -= 21;
    // 80533DA8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533DAC:
    ctx->pc = 0x80533DACu;
    // 80533DAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533DB0:
    ctx->pc = 0x80533DB0u;
    // 80533DB0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533DB4:
    ctx->pc = 0x80533DB4u;
    // 80533DB4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80533DB8:
    ctx->pc = 0x80533DB8u;
    // 80533DB8: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_80533DBC:
    ctx->pc = 0x80533DBCu;
    // 80533DBC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533DC0:
    ctx->pc = 0x80533DC0u;
    // 80533DC0: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533DC4:
    ctx->pc = 0x80533DC4u;
    // 80533DC4: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80533DC8:
    ctx->pc = 0x80533DC8u;
    // 80533DC8: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533DCC:
    ctx->pc = 0x80533DCCu;
    // 80533DCC: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533DD0:
    ctx->pc = 0x80533DD0u;
    // 80533DD0: bl      0x80370BD4
    {
            ctx->lr = 0x80533DD4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533DD4:
    ctx->pc = 0x80533DD4u;
    ctx->downcount -= 7;
    // 80533DD4: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533DD8:
    ctx->pc = 0x80533DD8u;
    // 80533DD8: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533DDC:
    ctx->pc = 0x80533DDCu;
    // 80533DDC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533DE0:
    ctx->pc = 0x80533DE0u;
    // 80533DE0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533DE4:
    ctx->pc = 0x80533DE4u;
    // 80533DE4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533DE8:
    ctx->pc = 0x80533DE8u;
    // 80533DE8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533DECu;
            ctx->pc = target;
            return;
        }
    }

label_80533DEC:
    ctx->pc = 0x80533DECu;
    ctx->downcount -= 5;
    // 80533DEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533DF0:
    ctx->pc = 0x80533DF0u;
    // 80533DF0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533DF4:
    ctx->pc = 0x80533DF4u;
    // 80533DF4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80533DF8:
    ctx->pc = 0x80533DF8u;
    // 80533DF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533DFC:
    ctx->pc = 0x80533DFCu;
    // 80533DFC: bl      0x8027714C
    {
            ctx->lr = 0x80533E00u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533E00:
    ctx->pc = 0x80533E00u;
    ctx->downcount -= 5;
    // 80533E00: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E04:
    ctx->pc = 0x80533E04u;
    // 80533E04: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533E08:
    ctx->pc = 0x80533E08u;
    // 80533E08: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533E0C:
    ctx->pc = 0x80533E0Cu;
    // 80533E0C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533E10:
    ctx->pc = 0x80533E10u;
    // 80533E10: bl      0x80370BD4
    {
            ctx->lr = 0x80533E14u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533E14:
    ctx->pc = 0x80533E14u;
    ctx->downcount -= 7;
    // 80533E14: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E18:
    ctx->pc = 0x80533E18u;
    // 80533E18: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533E1C:
    ctx->pc = 0x80533E1Cu;
    // 80533E1C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533E20:
    ctx->pc = 0x80533E20u;
    // 80533E20: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533E24:
    ctx->pc = 0x80533E24u;
    // 80533E24: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533E28:
    ctx->pc = 0x80533E28u;
    // 80533E28: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533E2Cu;
            ctx->pc = target;
            return;
        }
    }

label_80533E2C:
    ctx->pc = 0x80533E2Cu;
    ctx->downcount -= 5;
    // 80533E2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533E30:
    ctx->pc = 0x80533E30u;
    // 80533E30: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533E34:
    ctx->pc = 0x80533E34u;
    // 80533E34: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80533E38:
    ctx->pc = 0x80533E38u;
    // 80533E38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533E3C:
    ctx->pc = 0x80533E3Cu;
    // 80533E3C: bl      0x8027714C
    {
            ctx->lr = 0x80533E40u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533E40:
    ctx->pc = 0x80533E40u;
    ctx->downcount -= 5;
    // 80533E40: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E44:
    ctx->pc = 0x80533E44u;
    // 80533E44: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533E48:
    ctx->pc = 0x80533E48u;
    // 80533E48: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533E4C:
    ctx->pc = 0x80533E4Cu;
    // 80533E4C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533E50:
    ctx->pc = 0x80533E50u;
    // 80533E50: bl      0x80370BD4
    {
            ctx->lr = 0x80533E54u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533E54:
    ctx->pc = 0x80533E54u;
    ctx->downcount -= 7;
    // 80533E54: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E58:
    ctx->pc = 0x80533E58u;
    // 80533E58: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533E5C:
    ctx->pc = 0x80533E5Cu;
    // 80533E5C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533E60:
    ctx->pc = 0x80533E60u;
    // 80533E60: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533E64:
    ctx->pc = 0x80533E64u;
    // 80533E64: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533E68:
    ctx->pc = 0x80533E68u;
    // 80533E68: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533E6Cu;
            ctx->pc = target;
            return;
        }
    }

label_80533E6C:
    ctx->pc = 0x80533E6Cu;
    ctx->downcount -= 5;
    // 80533E6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533E70:
    ctx->pc = 0x80533E70u;
    // 80533E70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533E74:
    ctx->pc = 0x80533E74u;
    // 80533E74: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533E78:
    ctx->pc = 0x80533E78u;
    // 80533E78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533E7C:
    ctx->pc = 0x80533E7Cu;
    // 80533E7C: bl      0x8027714C
    {
            ctx->lr = 0x80533E80u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533E80:
    ctx->pc = 0x80533E80u;
    ctx->downcount -= 5;
    // 80533E80: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E84:
    ctx->pc = 0x80533E84u;
    // 80533E84: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533E88:
    ctx->pc = 0x80533E88u;
    // 80533E88: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533E8C:
    ctx->pc = 0x80533E8Cu;
    // 80533E8C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533E90:
    ctx->pc = 0x80533E90u;
    // 80533E90: bl      0x80370BD4
    {
            ctx->lr = 0x80533E94u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533E94:
    ctx->pc = 0x80533E94u;
    ctx->downcount -= 7;
    // 80533E94: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533E98:
    ctx->pc = 0x80533E98u;
    // 80533E98: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533E9C:
    ctx->pc = 0x80533E9Cu;
    // 80533E9C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533EA0:
    ctx->pc = 0x80533EA0u;
    // 80533EA0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533EA4:
    ctx->pc = 0x80533EA4u;
    // 80533EA4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533EA8:
    ctx->pc = 0x80533EA8u;
    // 80533EA8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533EACu;
            ctx->pc = target;
            return;
        }
    }

label_80533EAC:
    ctx->pc = 0x80533EACu;
    ctx->downcount -= 5;
    // 80533EAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533EB0:
    ctx->pc = 0x80533EB0u;
    // 80533EB0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533EB4:
    ctx->pc = 0x80533EB4u;
    // 80533EB4: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533EB8:
    ctx->pc = 0x80533EB8u;
    // 80533EB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533EBC:
    ctx->pc = 0x80533EBCu;
    // 80533EBC: bl      0x8027714C
    {
            ctx->lr = 0x80533EC0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533EC0:
    ctx->pc = 0x80533EC0u;
    ctx->downcount -= 5;
    // 80533EC0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533EC4:
    ctx->pc = 0x80533EC4u;
    // 80533EC4: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533EC8:
    ctx->pc = 0x80533EC8u;
    // 80533EC8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533ECC:
    ctx->pc = 0x80533ECCu;
    // 80533ECC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533ED0:
    ctx->pc = 0x80533ED0u;
    // 80533ED0: bl      0x80370BD4
    {
            ctx->lr = 0x80533ED4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533ED4:
    ctx->pc = 0x80533ED4u;
    ctx->downcount -= 7;
    // 80533ED4: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533ED8:
    ctx->pc = 0x80533ED8u;
    // 80533ED8: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533EDC:
    ctx->pc = 0x80533EDCu;
    // 80533EDC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533EE0:
    ctx->pc = 0x80533EE0u;
    // 80533EE0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533EE4:
    ctx->pc = 0x80533EE4u;
    // 80533EE4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533EE8:
    ctx->pc = 0x80533EE8u;
    // 80533EE8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533EECu;
            ctx->pc = target;
            return;
        }
    }

label_80533EEC:
    ctx->pc = 0x80533EECu;
    ctx->downcount -= 5;
    // 80533EEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533EF0:
    ctx->pc = 0x80533EF0u;
    // 80533EF0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533EF4:
    ctx->pc = 0x80533EF4u;
    // 80533EF4: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533EF8:
    ctx->pc = 0x80533EF8u;
    // 80533EF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533EFC:
    ctx->pc = 0x80533EFCu;
    // 80533EFC: bl      0x8027714C
    {
            ctx->lr = 0x80533F00u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533F00:
    ctx->pc = 0x80533F00u;
    ctx->downcount -= 5;
    // 80533F00: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F04:
    ctx->pc = 0x80533F04u;
    // 80533F04: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533F08:
    ctx->pc = 0x80533F08u;
    // 80533F08: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533F0C:
    ctx->pc = 0x80533F0Cu;
    // 80533F0C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533F10:
    ctx->pc = 0x80533F10u;
    // 80533F10: bl      0x80370BD4
    {
            ctx->lr = 0x80533F14u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533F14:
    ctx->pc = 0x80533F14u;
    ctx->downcount -= 7;
    // 80533F14: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F18:
    ctx->pc = 0x80533F18u;
    // 80533F18: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533F1C:
    ctx->pc = 0x80533F1Cu;
    // 80533F1C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533F20:
    ctx->pc = 0x80533F20u;
    // 80533F20: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533F24:
    ctx->pc = 0x80533F24u;
    // 80533F24: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533F28:
    ctx->pc = 0x80533F28u;
    // 80533F28: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533F2Cu;
            ctx->pc = target;
            return;
        }
    }

label_80533F2C:
    ctx->pc = 0x80533F2Cu;
    ctx->downcount -= 5;
    // 80533F2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533F30:
    ctx->pc = 0x80533F30u;
    // 80533F30: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533F34:
    ctx->pc = 0x80533F34u;
    // 80533F34: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533F38:
    ctx->pc = 0x80533F38u;
    // 80533F38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533F3C:
    ctx->pc = 0x80533F3Cu;
    // 80533F3C: bl      0x8027714C
    {
            ctx->lr = 0x80533F40u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533F40:
    ctx->pc = 0x80533F40u;
    ctx->downcount -= 5;
    // 80533F40: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F44:
    ctx->pc = 0x80533F44u;
    // 80533F44: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533F48:
    ctx->pc = 0x80533F48u;
    // 80533F48: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533F4C:
    ctx->pc = 0x80533F4Cu;
    // 80533F4C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533F50:
    ctx->pc = 0x80533F50u;
    // 80533F50: bl      0x80370BD4
    {
            ctx->lr = 0x80533F54u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533F54:
    ctx->pc = 0x80533F54u;
    ctx->downcount -= 7;
    // 80533F54: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F58:
    ctx->pc = 0x80533F58u;
    // 80533F58: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533F5C:
    ctx->pc = 0x80533F5Cu;
    // 80533F5C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533F60:
    ctx->pc = 0x80533F60u;
    // 80533F60: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533F64:
    ctx->pc = 0x80533F64u;
    // 80533F64: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533F68:
    ctx->pc = 0x80533F68u;
    // 80533F68: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533F6Cu;
            ctx->pc = target;
            return;
        }
    }

label_80533F6C:
    ctx->pc = 0x80533F6Cu;
    ctx->downcount -= 5;
    // 80533F6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533F70:
    ctx->pc = 0x80533F70u;
    // 80533F70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533F74:
    ctx->pc = 0x80533F74u;
    // 80533F74: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533F78:
    ctx->pc = 0x80533F78u;
    // 80533F78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533F7C:
    ctx->pc = 0x80533F7Cu;
    // 80533F7C: bl      0x8027714C
    {
            ctx->lr = 0x80533F80u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533F80:
    ctx->pc = 0x80533F80u;
    ctx->downcount -= 5;
    // 80533F80: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F84:
    ctx->pc = 0x80533F84u;
    // 80533F84: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_80533F88:
    ctx->pc = 0x80533F88u;
    // 80533F88: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80533F8C:
    ctx->pc = 0x80533F8Cu;
    // 80533F8C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80533F90:
    ctx->pc = 0x80533F90u;
    // 80533F90: bl      0x80370BD4
    {
            ctx->lr = 0x80533F94u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80533F94:
    ctx->pc = 0x80533F94u;
    ctx->downcount -= 7;
    // 80533F94: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80533F98:
    ctx->pc = 0x80533F98u;
    // 80533F98: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80533F9C:
    ctx->pc = 0x80533F9Cu;
    // 80533F9C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533FA0:
    ctx->pc = 0x80533FA0u;
    // 80533FA0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80533FA4:
    ctx->pc = 0x80533FA4u;
    // 80533FA4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80533FA8:
    ctx->pc = 0x80533FA8u;
    // 80533FA8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80533FACu;
            ctx->pc = target;
            return;
        }
    }

label_80533FAC:
    ctx->pc = 0x80533FACu;
    ctx->downcount -= 5;
    // 80533FAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533FB0:
    ctx->pc = 0x80533FB0u;
    // 80533FB0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80533FB4:
    ctx->pc = 0x80533FB4u;
    // 80533FB4: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80533FB8:
    ctx->pc = 0x80533FB8u;
    // 80533FB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80533FBC:
    ctx->pc = 0x80533FBCu;
    // 80533FBC: bl      0x8027714C
    {
            ctx->lr = 0x80533FC0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80533FC0:
    ctx->pc = 0x80533FC0u;
    ctx->downcount -= 16;
    // 80533FC0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80533FC4:
    ctx->pc = 0x80533FC4u;
    // 80533FC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80533FC8:
    ctx->pc = 0x80533FC8u;
    // 80533FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80533FCC:
    ctx->pc = 0x80533FCCu;
    // 80533FCC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80533FD0:
    ctx->pc = 0x80533FD0u;
    // 80533FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80533FD4:
    ctx->pc = 0x80533FD4u;
    ctx->downcount -= 20;
    // 80533FD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80533FD8:
    ctx->pc = 0x80533FD8u;
    // 80533FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80533FDC:
    ctx->pc = 0x80533FDCu;
    // 80533FDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80533FE0:
    ctx->pc = 0x80533FE0u;
    // 80533FE0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80533FE4:
    ctx->pc = 0x80533FE4u;
    // 80533FE4: lis     r29, -32658
    ctx->gpr[29] = ((u32)(s32)(-32658) << 16);

label_80533FE8:
    ctx->pc = 0x80533FE8u;
    // 80533FE8: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80533FEC:
    ctx->pc = 0x80533FECu;
    // 80533FEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80533FF0:
    ctx->pc = 0x80533FF0u;
    // 80533FF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80533FF4:
    ctx->pc = 0x80533FF4u;
    // 80533FF4: addi    r29, r29, 6464
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(6464);

label_80533FF8:
    ctx->pc = 0x80533FF8u;
    // 80533FF8: bl      0x802A6748
    {
            ctx->lr = 0x80533FFCu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_80533FFC:
    ctx->pc = 0x80533FFCu;
    ctx->downcount -= 7;
    // 80533FFC: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80534000:
    ctx->pc = 0x80534000u;
    // 80534000: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534004:
    ctx->pc = 0x80534004u;
    // 80534004: addi    r4, r4, 6688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6688);

label_80534008:
    ctx->pc = 0x80534008u;
    // 80534008: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8053400C:
    ctx->pc = 0x8053400Cu;
    // 8053400C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80534010:
    ctx->pc = 0x80534010u;
    // 80534010: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534014:
    ctx->pc = 0x80534014u;
    // 80534014: bl      0x801ED17C
    {
            ctx->lr = 0x80534018u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_80534018:
    ctx->pc = 0x80534018u;
    ctx->downcount -= 6;
    // 80534018: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053401C:
    ctx->pc = 0x8053401Cu;
    // 8053401C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534020:
    ctx->pc = 0x80534020u;
    // 80534020: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80534024:
    ctx->pc = 0x80534024u;
    // 80534024: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80534028:
    ctx->pc = 0x80534028u;
    // 80534028: addi    r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3);

label_8053402C:
    ctx->pc = 0x8053402Cu;
    // 8053402C: bl      0x80534354
    {
            ctx->lr = 0x80534030u;
            goto label_80534354;
    }

label_80534030:
    ctx->pc = 0x80534030u;
    ctx->downcount -= 3;
    // 80534030: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534034:
    ctx->pc = 0x80534034u;
    // 80534034: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534038:
    ctx->pc = 0x80534038u;
    // 80534038: bl      0x802A5D48
    {
            ctx->lr = 0x8053403Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8053403C:
    ctx->pc = 0x8053403Cu;
    ctx->downcount -= 6;
    // 8053403C: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534040:
    ctx->pc = 0x80534040u;
    // 80534040: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80534044:
    ctx->pc = 0x80534044u;
    // 80534044: addi    r4, r29, 24
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(24);

label_80534048:
    ctx->pc = 0x80534048u;
    // 80534048: addi    r5, r29, 36
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(36);

label_8053404C:
    ctx->pc = 0x8053404Cu;
    // 8053404C: addi    r6, r29, 48
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(48);

label_80534050:
    ctx->pc = 0x80534050u;
    // 80534050: bl      0x805344F0
    {
            ctx->lr = 0x80534054u;
            goto label_805344F0;
    }

label_80534054:
    ctx->pc = 0x80534054u;
    ctx->downcount -= 2;
    // 80534054: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534058:
    ctx->pc = 0x80534058u;
    // 80534058: bl      0x802A609C
    {
            ctx->lr = 0x8053405Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_8053405C:
    ctx->pc = 0x8053405Cu;
    ctx->downcount -= 11;
    // 8053405C: lis     r3, -32658
    ctx->gpr[3] = ((u32)(s32)(-32658) << 16);

label_80534060:
    ctx->pc = 0x80534060u;
    // 80534060: lis     r30, -32667
    ctx->gpr[30] = ((u32)(s32)(-32667) << 16);

label_80534064:
    ctx->pc = 0x80534064u;
    // 80534064: addi    r3, r3, 6568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6568);

label_80534068:
    ctx->pc = 0x80534068u;
    // 80534068: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053406C:
    ctx->pc = 0x8053406Cu;
    // 8053406C: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_80534070:
    ctx->pc = 0x80534070u;
    // 80534070: addi    r4, r30, 22144
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22144);

label_80534074:
    ctx->pc = 0x80534074u;
    // 80534074: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534078:
    ctx->pc = 0x80534078u;
    // 80534078: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8053407C:
    ctx->pc = 0x8053407Cu;
    // 8053407C: addi    r5, r29, 0
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(0);

label_80534080:
    ctx->pc = 0x80534080u;
    // 80534080: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80534084:
    ctx->pc = 0x80534084u;
    // 80534084: bl      0x80534474
    {
            ctx->lr = 0x80534088u;
            goto label_80534474;
    }

label_80534088:
    ctx->pc = 0x80534088u;
    ctx->downcount -= 5;
    // 80534088: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8053408C:
    ctx->pc = 0x8053408Cu;
    // 8053408C: addi    r4, r30, 22144
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22144);

label_80534090:
    ctx->pc = 0x80534090u;
    // 80534090: addi    r5, r29, 12
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(12);

label_80534094:
    ctx->pc = 0x80534094u;
    // 80534094: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80534098:
    ctx->pc = 0x80534098u;
    // 80534098: bl      0x80534474
    {
            ctx->lr = 0x8053409Cu;
            goto label_80534474;
    }

label_8053409C:
    ctx->pc = 0x8053409Cu;
    ctx->downcount -= 3;
    // 8053409C: stw     r28, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_805340A0:
    ctx->pc = 0x805340A0u;
    // 805340A0: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_805340A4:
    ctx->pc = 0x805340A4u;
    // 805340A4: bl      0x801C1C48
    {
            ctx->lr = 0x805340A8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_805340A8:
    ctx->pc = 0x805340A8u;
    ctx->downcount -= 2;
    // 805340A8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805340AC:
    ctx->pc = 0x805340ACu;
    // 805340AC: bc    12, 2, 0x805340B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805340B8;
        }
    }

label_805340B0:
    ctx->pc = 0x805340B0u;
    ctx->downcount -= 2;
    // 805340B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805340B4:
    ctx->pc = 0x805340B4u;
    // 805340B4: bl      0x80349C58
    {
            ctx->lr = 0x805340B8u;
            ctx->pc = 0x80349C58u;
            return;
    }

label_805340B8:
    ctx->pc = 0x805340B8u;
    ctx->downcount -= 3;
    // 805340B8: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805340BC:
    ctx->pc = 0x805340BCu;
    // 805340BC: li      r3, 2596
    ctx->gpr[3] = (u32)(s32)(2596);

label_805340C0:
    ctx->pc = 0x805340C0u;
    // 805340C0: bl      0x801C1C48
    {
            ctx->lr = 0x805340C4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_805340C4:
    ctx->pc = 0x805340C4u;
    ctx->downcount -= 3;
    // 805340C4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805340C8:
    ctx->pc = 0x805340C8u;
    // 805340C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805340CC:
    ctx->pc = 0x805340CCu;
    // 805340CC: bc    12, 2, 0x805340DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805340DC;
        }
    }

label_805340D0:
    ctx->pc = 0x805340D0u;
    ctx->downcount -= 2;
    // 805340D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805340D4:
    ctx->pc = 0x805340D4u;
    // 805340D4: bl      0x80351780
    {
            ctx->lr = 0x805340D8u;
            ctx->pc = 0x80351780u;
            return;
    }

label_805340D8:
    ctx->pc = 0x805340D8u;
    ctx->downcount -= 1;
    // 805340D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805340DC:
    ctx->pc = 0x805340DCu;
    ctx->downcount -= 5;
    // 805340DC: stw     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805340E0:
    ctx->pc = 0x805340E0u;
    // 805340E0: li      r0, 123
    ctx->gpr[0] = (u32)(s32)(123);

label_805340E4:
    ctx->pc = 0x805340E4u;
    // 805340E4: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_805340E8:
    ctx->pc = 0x805340E8u;
    // 805340E8: stw     r0, 2592(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805340EC:
    ctx->pc = 0x805340ECu;
    // 805340EC: bl      0x801C1C48
    {
            ctx->lr = 0x805340F0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_805340F0:
    ctx->pc = 0x805340F0u;
    ctx->downcount -= 2;
    // 805340F0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805340F4:
    ctx->pc = 0x805340F4u;
    // 805340F4: bc    12, 2, 0x80534100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534100;
        }
    }

label_805340F8:
    ctx->pc = 0x805340F8u;
    ctx->downcount -= 2;
    // 805340F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805340FC:
    ctx->pc = 0x805340FCu;
    // 805340FC: bl      0x80368DE4
    {
            ctx->lr = 0x80534100u;
            ctx->pc = 0x80368DE4u;
            return;
    }

label_80534100:
    ctx->pc = 0x80534100u;
    ctx->downcount -= 3;
    // 80534100: stw     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80534104:
    ctx->pc = 0x80534104u;
    // 80534104: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_80534108:
    ctx->pc = 0x80534108u;
    // 80534108: bl      0x801C1C48
    {
            ctx->lr = 0x8053410Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8053410C:
    ctx->pc = 0x8053410Cu;
    ctx->downcount -= 2;
    // 8053410C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534110:
    ctx->pc = 0x80534110u;
    // 80534110: bc    12, 2, 0x8053411C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053411C;
        }
    }

label_80534114:
    ctx->pc = 0x80534114u;
    ctx->downcount -= 2;
    // 80534114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534118:
    ctx->pc = 0x80534118u;
    // 80534118: bl      0x8035F950
    {
            ctx->lr = 0x8053411Cu;
            ctx->pc = 0x8035F950u;
            return;
    }

label_8053411C:
    ctx->pc = 0x8053411Cu;
    ctx->downcount -= 4;
    // 8053411C: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80534120:
    ctx->pc = 0x80534120u;
    // 80534120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534124:
    ctx->pc = 0x80534124u;
    // 80534124: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534128:
    ctx->pc = 0x80534128u;
    // 80534128: bl      0x802A6408
    {
            ctx->lr = 0x8053412Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8053412C:
    ctx->pc = 0x8053412Cu;
    ctx->downcount -= 3;
    // 8053412C: lwz     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534130:
    ctx->pc = 0x80534130u;
    // 80534130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534134:
    ctx->pc = 0x80534134u;
    // 80534134: bl      0x802A6408
    {
            ctx->lr = 0x80534138u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80534138:
    ctx->pc = 0x80534138u;
    ctx->downcount -= 3;
    // 80534138: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8053413C:
    ctx->pc = 0x8053413Cu;
    // 8053413C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534140:
    ctx->pc = 0x80534140u;
    // 80534140: bl      0x802A6408
    {
            ctx->lr = 0x80534144u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80534144:
    ctx->pc = 0x80534144u;
    ctx->downcount -= 3;
    // 80534144: lwz     r4, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534148:
    ctx->pc = 0x80534148u;
    // 80534148: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053414C:
    ctx->pc = 0x8053414Cu;
    // 8053414C: bl      0x802A6408
    {
            ctx->lr = 0x80534150u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80534150:
    ctx->pc = 0x80534150u;
    ctx->downcount -= 2;
    // 80534150: li      r3, 312
    ctx->gpr[3] = (u32)(s32)(312);

label_80534154:
    ctx->pc = 0x80534154u;
    // 80534154: bl      0x801C1C48
    {
            ctx->lr = 0x80534158u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80534158:
    ctx->pc = 0x80534158u;
    ctx->downcount -= 2;
    // 80534158: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053415C:
    ctx->pc = 0x8053415Cu;
    // 8053415C: bc    12, 2, 0x80534168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534168;
        }
    }

label_80534160:
    ctx->pc = 0x80534160u;
    ctx->downcount -= 2;
    // 80534160: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534164:
    ctx->pc = 0x80534164u;
    // 80534164: bl      0x80535C4C
    {
            ctx->lr = 0x80534168u;
            goto label_80535C4C;
    }

label_80534168:
    ctx->pc = 0x80534168u;
    ctx->downcount -= 3;
    // 80534168: stw     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053416C:
    ctx->pc = 0x8053416Cu;
    // 8053416C: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_80534170:
    ctx->pc = 0x80534170u;
    // 80534170: bl      0x801C1C48
    {
            ctx->lr = 0x80534174u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80534174:
    ctx->pc = 0x80534174u;
    ctx->downcount -= 2;
    // 80534174: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534178:
    ctx->pc = 0x80534178u;
    // 80534178: bc    12, 2, 0x80534184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534184;
        }
    }

label_8053417C:
    ctx->pc = 0x8053417Cu;
    ctx->downcount -= 2;
    // 8053417C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534180:
    ctx->pc = 0x80534180u;
    // 80534180: bl      0x805373E4
    {
            ctx->lr = 0x80534184u;
            ctx->pc = 0x805373E4u;
            return;
    }

label_80534184:
    ctx->pc = 0x80534184u;
    ctx->downcount -= 3;
    // 80534184: stw     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80534188:
    ctx->pc = 0x80534188u;
    // 80534188: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_8053418C:
    ctx->pc = 0x8053418Cu;
    // 8053418C: bl      0x801C1C48
    {
            ctx->lr = 0x80534190u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80534190:
    ctx->pc = 0x80534190u;
    ctx->downcount -= 2;
    // 80534190: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534194:
    ctx->pc = 0x80534194u;
    // 80534194: bc    12, 2, 0x805341A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805341A0;
        }
    }

label_80534198:
    ctx->pc = 0x80534198u;
    ctx->downcount -= 2;
    // 80534198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053419C:
    ctx->pc = 0x8053419Cu;
    // 8053419C: bl      0x8053D668
    {
            ctx->lr = 0x805341A0u;
            ctx->pc = 0x8053D668u;
            return;
    }

label_805341A0:
    ctx->pc = 0x805341A0u;
    ctx->downcount -= 3;
    // 805341A0: stw     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805341A4:
    ctx->pc = 0x805341A4u;
    // 805341A4: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_805341A8:
    ctx->pc = 0x805341A8u;
    // 805341A8: bl      0x801C1C48
    {
            ctx->lr = 0x805341ACu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_805341AC:
    ctx->pc = 0x805341ACu;
    ctx->downcount -= 2;
    // 805341AC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805341B0:
    ctx->pc = 0x805341B0u;
    // 805341B0: bc    12, 2, 0x805341BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805341BC;
        }
    }

label_805341B4:
    ctx->pc = 0x805341B4u;
    ctx->downcount -= 2;
    // 805341B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805341B8:
    ctx->pc = 0x805341B8u;
    // 805341B8: bl      0x8053AF88
    {
            ctx->lr = 0x805341BCu;
            ctx->pc = 0x8053AF88u;
            return;
    }

label_805341BC:
    ctx->pc = 0x805341BCu;
    ctx->downcount -= 4;
    // 805341BC: stw     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805341C0:
    ctx->pc = 0x805341C0u;
    // 805341C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805341C4:
    ctx->pc = 0x805341C4u;
    // 805341C4: lwz     r4, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805341C8:
    ctx->pc = 0x805341C8u;
    // 805341C8: bl      0x802A6408
    {
            ctx->lr = 0x805341CCu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805341CC:
    ctx->pc = 0x805341CCu;
    ctx->downcount -= 3;
    // 805341CC: lwz     r4, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805341D0:
    ctx->pc = 0x805341D0u;
    // 805341D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805341D4:
    ctx->pc = 0x805341D4u;
    // 805341D4: bl      0x802A6408
    {
            ctx->lr = 0x805341D8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805341D8:
    ctx->pc = 0x805341D8u;
    ctx->downcount -= 3;
    // 805341D8: lwz     r4, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805341DC:
    ctx->pc = 0x805341DCu;
    // 805341DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805341E0:
    ctx->pc = 0x805341E0u;
    // 805341E0: bl      0x802A6408
    {
            ctx->lr = 0x805341E4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805341E4:
    ctx->pc = 0x805341E4u;
    ctx->downcount -= 3;
    // 805341E4: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805341E8:
    ctx->pc = 0x805341E8u;
    // 805341E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805341EC:
    ctx->pc = 0x805341ECu;
    // 805341EC: bl      0x802A6408
    {
            ctx->lr = 0x805341F0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805341F0:
    ctx->pc = 0x805341F0u;
    ctx->downcount -= 10;
    // 805341F0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_805341F4:
    ctx->pc = 0x805341F4u;
    // 805341F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805341F8:
    ctx->pc = 0x805341F8u;
    // 805341F8: stb     r3, 203(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(203);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_805341FC:
    ctx->pc = 0x805341FCu;
    // 805341FC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80534200:
    ctx->pc = 0x80534200u;
    // 80534200: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_80534204:
    ctx->pc = 0x80534204u;
    // 80534204: stb     r0, 201(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(201);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534208:
    ctx->pc = 0x80534208u;
    // 80534208: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053420C:
    ctx->pc = 0x8053420Cu;
    // 8053420C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80534210:
    ctx->pc = 0x80534210u;
    // 80534210: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80534214:
    ctx->pc = 0x80534214u;
    // 80534214: bl      0x80370BD4
    {
            ctx->lr = 0x80534218u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80534218:
    ctx->pc = 0x80534218u;
    ctx->downcount -= 23;
    // 80534218: lwz     r4, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8053421C:
    ctx->pc = 0x8053421Cu;
    // 8053421C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534220:
    ctx->pc = 0x80534220u;
    // 80534220: lwz     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534224:
    ctx->pc = 0x80534224u;
    // 80534224: addi    r0, r4, -5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5);

label_80534228:
    ctx->pc = 0x80534228u;
    // 80534228: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8053422C:
    ctx->pc = 0x8053422Cu;
    // 8053422C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80534230:
    ctx->pc = 0x80534230u;
    // 80534230: stb     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534234:
    ctx->pc = 0x80534234u;
    // 80534234: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534238:
    ctx->pc = 0x80534238u;
    // 80534238: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053423C:
    ctx->pc = 0x8053423Cu;
    // 8053423C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534240:
    ctx->pc = 0x80534240u;
    // 80534240: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80534244:
    ctx->pc = 0x80534244u;
    // 80534244: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534248:
    ctx->pc = 0x80534248u;
    ctx->downcount -= 18;
    // 80534248: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8053424C:
    ctx->pc = 0x8053424Cu;
    // 8053424C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534250:
    // 80534250: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534254:
    ctx->pc = 0x80534254u;
    // 80534254: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534258:
    ctx->pc = 0x80534258u;
    // 80534258: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053425C:
    // 8053425C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534260:
    // 80534260: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80534264:
    // 80534264: bc    12, 2, 0x80534298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534298;
        }
    }

label_80534268:
    ctx->downcount -= 1;
    // 80534268: bc    12, 2, 0x80534288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534288;
        }
    }

label_8053426C:
    ctx->downcount -= 1;
    // 8053426C: bc    12, 2, 0x80534288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534288;
        }
    }

label_80534270:
    ctx->downcount -= 3;
    // 80534270: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534274:
    // 80534274: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80534278:
    // 80534278: bl      0x801ED098
    {
            ctx->lr = 0x8053427Cu;
            ctx->pc = 0x801ED098u;
            return;
    }

label_8053427C:
    ctx->downcount -= 3;
    // 8053427C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534280:
    // 80534280: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534284:
    // 80534284: bl      0x801ED058
    {
            ctx->lr = 0x80534288u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_80534288:
    ctx->downcount -= 2;
    // 80534288: cmpwi   r31, 0
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

label_8053428C:
    // 8053428C: bc    4, 1, 0x80534298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534298;
        }
    }

label_80534290:
    ctx->downcount -= 2;
    // 80534290: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534294:
    // 80534294: bl      0x801C1C90
    {
            ctx->lr = 0x80534298u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80534298:
    ctx->downcount -= 17;
    // 80534298: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8053429C:
    ctx->pc = 0x8053429Cu;
    // 8053429C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805342A0:
    ctx->pc = 0x805342A0u;
    // 805342A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805342A4:
    ctx->pc = 0x805342A4u;
    // 805342A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805342A8:
    // 805342A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805342AC:
    ctx->pc = 0x805342ACu;
    // 805342AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805342B0:
    ctx->pc = 0x805342B0u;
    ctx->downcount -= 7;
    // 805342B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805342B4:
    ctx->pc = 0x805342B4u;
    // 805342B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805342B8:
    // 805342B8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805342BC:
    ctx->pc = 0x805342BCu;
    // 805342BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805342C0:
    ctx->pc = 0x805342C0u;
    // 805342C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805342C4:
    // 805342C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805342C8:
    // 805342C8: bc    12, 2, 0x805342D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805342D8;
        }
    }

label_805342CC:
    ctx->downcount -= 2;
    // 805342CC: cmpwi   r4, 0
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

label_805342D0:
    // 805342D0: bc    4, 1, 0x805342D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805342D8;
        }
    }

label_805342D4:
    ctx->downcount -= 1;
    // 805342D4: bl      0x801C1C90
    {
            ctx->lr = 0x805342D8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805342D8:
    ctx->downcount -= 7;
    // 805342D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805342DC:
    ctx->pc = 0x805342DCu;
    // 805342DC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805342E0:
    ctx->pc = 0x805342E0u;
    // 805342E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805342E4:
    ctx->pc = 0x805342E4u;
    // 805342E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805342E8:
    // 805342E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805342EC:
    ctx->pc = 0x805342ECu;
    // 805342EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805342F0:
    ctx->pc = 0x805342F0u;
    ctx->downcount -= 10;
    // 805342F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805342F4:
    ctx->pc = 0x805342F4u;
    // 805342F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805342F8:
    ctx->pc = 0x805342F8u;
    // 805342F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805342FC:
    ctx->pc = 0x805342FCu;
    // 805342FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534300:
    // 80534300: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534304:
    ctx->pc = 0x80534304u;
    // 80534304: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80534308:
    ctx->pc = 0x80534308u;
    // 80534308: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053430C:
    ctx->pc = 0x8053430Cu;
    // 8053430C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80534310:
    ctx->pc = 0x80534310u;
    // 80534310: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80534314u;
            ctx->pc = target;
            return;
        }
    }

label_80534314:
    ctx->downcount -= 2;
    // 80534314: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80534318:
    // 80534318: bl      0x8053454C
    {
            ctx->lr = 0x8053431Cu;
            goto label_8053454C;
    }

label_8053431C:
    ctx->pc = 0x8053431Cu;
    ctx->downcount -= 6;
    // 8053431C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80534320:
    // 80534320: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534324:
    ctx->pc = 0x80534324u;
    // 80534324: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80534328:
    ctx->pc = 0x80534328u;
    // 80534328: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053432C:
    ctx->pc = 0x8053432Cu;
    // 8053432C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80534330u;
            ctx->pc = target;
            return;
        }
    }

label_80534330:
    ctx->pc = 0x80534330u;
    ctx->downcount -= 6;
    // 80534330: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534334:
    ctx->pc = 0x80534334u;
    // 80534334: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534338:
    ctx->pc = 0x80534338u;
    // 80534338: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053433C:
    // 8053433C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534340:
    ctx->pc = 0x80534340u;
    // 80534340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534344:
    ctx->downcount -= 2;
    // 80534344: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80534348:
    ctx->pc = 0x80534348u;
    // 80534348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053434C:
    ctx->downcount -= 2;
    // 8053434C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80534350:
    ctx->pc = 0x80534350u;
    // 80534350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534354:
    ctx->pc = 0x80534354u;
    ctx->downcount -= 17;
    // 80534354: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534358:
    ctx->pc = 0x80534358u;
    // 80534358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053435C:
    ctx->pc = 0x8053435Cu;
    // 8053435C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534360:
    ctx->pc = 0x80534360u;
    // 80534360: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534364:
    // 80534364: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534368:
    // 80534368: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8053436C:
    // 8053436C: bl      0x803457F4
    {
            ctx->lr = 0x80534370u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_80534370:
    ctx->pc = 0x80534370u;
    ctx->downcount -= 11;
    // 80534370: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534374:
    // 80534374: lis     r3, -32658
    ctx->gpr[3] = ((u32)(s32)(-32658) << 16);

label_80534378:
    // 80534378: addi    r3, r3, 6808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6808);

label_8053437C:
    ctx->pc = 0x8053437Cu;
    // 8053437C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80534380:
    // 80534380: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80534384:
    ctx->pc = 0x80534384u;
    // 80534384: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534388:
    ctx->pc = 0x80534388u;
    // 80534388: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8053438C:
    // 8053438C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80534390:
    // 80534390: bl      0x801C1C80
    {
            ctx->lr = 0x80534394u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80534394:
    ctx->pc = 0x80534394u;
    ctx->downcount -= 8;
    // 80534394: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534398:
    // 80534398: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8053439C:
    ctx->pc = 0x8053439Cu;
    // 8053439C: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805343A0:
    // 805343A0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805343A4:
    ctx->pc = 0x805343A4u;
    // 805343A4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805343A8:
    // 805343A8: bl      0x801C1C80
    {
            ctx->lr = 0x805343ACu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805343AC:
    ctx->pc = 0x805343ACu;
    ctx->downcount -= 8;
    // 805343AC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805343B0:
    // 805343B0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805343B4:
    ctx->pc = 0x805343B4u;
    // 805343B4: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805343B8:
    // 805343B8: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805343BC:
    ctx->pc = 0x805343BCu;
    // 805343BC: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805343C0:
    // 805343C0: bl      0x801C1C80
    {
            ctx->lr = 0x805343C4u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805343C4:
    ctx->downcount -= 6;
    // 805343C4: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_805343C8:
    ctx->pc = 0x805343C8u;
    // 805343C8: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805343CC:
    // 805343CC: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_805343D0:
    // 805343D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805343D4:
    // 805343D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805343D8:
    // 805343D8: b       0x80534444
    {
            goto label_80534444;
    }

label_805343DC:
    loop_805343DC(ctx);
    if (ctx->pc == 0x80534450u) goto label_80534450;
    return;
label_805343E0:
    // 805343E0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_805343E4:
    ctx->pc = 0x805343E4u;
    // 805343E4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805343E8:
    // 805343E8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805343EC:
    ctx->pc = 0x805343ECu;
    // 805343EC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805343F0:
    ctx->pc = 0x805343F0u;
    // 805343F0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805343F4:
    ctx->pc = 0x805343F4u;
    // 805343F4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805343F8:
    ctx->pc = 0x805343F8u;
    // 805343F8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805343FC:
    ctx->pc = 0x805343FCu;
    // 805343FC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534400:
    ctx->pc = 0x80534400u;
    // 80534400: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534404:
    ctx->pc = 0x80534404u;
    // 80534404: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534408:
    // 80534408: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8053440C:
    ctx->pc = 0x8053440Cu;
    // 8053440C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534410:
    ctx->pc = 0x80534410u;
    // 80534410: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534414:
    ctx->pc = 0x80534414u;
    // 80534414: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534418:
    ctx->pc = 0x80534418u;
    // 80534418: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053441C:
    ctx->pc = 0x8053441Cu;
    // 8053441C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534420:
    ctx->pc = 0x80534420u;
    // 80534420: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534424:
    ctx->pc = 0x80534424u;
    // 80534424: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534428:
    // 80534428: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8053442C:
    ctx->pc = 0x8053442Cu;
    // 8053442C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534430:
    ctx->pc = 0x80534430u;
    // 80534430: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534434:
    // 80534434: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80534438:
    ctx->pc = 0x80534438u;
    // 80534438: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053443C:
    ctx->pc = 0x8053443Cu;
    // 8053443C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534440:
    ctx->pc = 0x80534440u;
    // 80534440: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534444:
    ctx->pc = 0x80534444u;
    ctx->downcount -= 3;
    // 80534444: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534448:
    // 80534448: cmpw    r7, r0
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

label_8053444C:
    // 8053444C: bc    12, 0, 0x805343DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805343DCu;
                return;
            }
            goto label_805343DC;
        }
    }

label_80534450:
    ctx->downcount -= 3;
    // 80534450: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534454:
    // 80534454: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534458:
    // 80534458: bl      0x803457CC
    {
            ctx->lr = 0x8053445Cu;
            ctx->pc = 0x803457CCu;
            return;
    }

label_8053445C:
    ctx->downcount -= 17;
    // 8053445C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534460:
    ctx->pc = 0x80534460u;
    // 80534460: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534464:
    ctx->pc = 0x80534464u;
    // 80534464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534468:
    ctx->pc = 0x80534468u;
    // 80534468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053446C:
    // 8053446C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534470:
    ctx->pc = 0x80534470u;
    // 80534470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534474:
    ctx->pc = 0x80534474u;
    ctx->downcount -= 20;
    // 80534474: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534478:
    ctx->pc = 0x80534478u;
    // 80534478: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053447C:
    ctx->pc = 0x8053447Cu;
    // 8053447C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534480:
    ctx->pc = 0x80534480u;
    // 80534480: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534484:
    // 80534484: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80534488:
    // 80534488: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8053448C:
    // 8053448C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534490:
    // 80534490: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80534494:
    // 80534494: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534498:
    // 80534498: bl      0x803456D0
    {
            ctx->lr = 0x8053449Cu;
            ctx->pc = 0x803456D0u;
            return;
    }

label_8053449C:
    ctx->downcount -= 34;
    // 8053449C: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805344A0:
    ctx->pc = 0x805344A0u;
    // 805344A0: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805344A4:
    ctx->pc = 0x805344A4u;
    // 805344A4: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805344A8:
    ctx->pc = 0x805344A8u;
    // 805344A8: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805344AC:
    // 805344AC: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805344B0:
    ctx->pc = 0x805344B0u;
    // 805344B0: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805344B4:
    ctx->pc = 0x805344B4u;
    // 805344B4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805344B8:
    ctx->pc = 0x805344B8u;
    // 805344B8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805344BC:
    ctx->pc = 0x805344BCu;
    // 805344BC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805344C0:
    ctx->pc = 0x805344C0u;
    // 805344C0: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805344C4:
    ctx->pc = 0x805344C4u;
    // 805344C4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805344C8:
    ctx->pc = 0x805344C8u;
    // 805344C8: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805344CC:
    ctx->pc = 0x805344CCu;
    // 805344CC: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805344D0:
    ctx->pc = 0x805344D0u;
    // 805344D0: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_805344D4:
    ctx->pc = 0x805344D4u;
    // 805344D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805344D8:
    ctx->pc = 0x805344D8u;
    // 805344D8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805344DC:
    ctx->pc = 0x805344DCu;
    // 805344DC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805344E0:
    ctx->pc = 0x805344E0u;
    // 805344E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805344E4:
    ctx->pc = 0x805344E4u;
    // 805344E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805344E8:
    // 805344E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805344EC:
    ctx->pc = 0x805344ECu;
    // 805344EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805344F0:
    ctx->pc = 0x805344F0u;
    ctx->downcount -= 19;
    // 805344F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805344F4:
    ctx->pc = 0x805344F4u;
    // 805344F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805344F8:
    ctx->pc = 0x805344F8u;
    // 805344F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805344FC:
    ctx->pc = 0x805344FCu;
    // 805344FC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534500:
    // 80534500: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80534504:
    // 80534504: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80534508:
    // 80534508: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053450C:
    // 8053450C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534510:
    // 80534510: bl      0x80534474
    {
            ctx->lr = 0x80534514u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534474u;
                return;
            }
            goto label_80534474;
    }

label_80534514:
    ctx->downcount -= 27;
    // 80534514: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80534518:
    ctx->pc = 0x80534518u;
    // 80534518: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8053451C:
    ctx->pc = 0x8053451Cu;
    // 8053451C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534520:
    ctx->pc = 0x80534520u;
    // 80534520: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80534524:
    // 80534524: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80534528:
    ctx->pc = 0x80534528u;
    // 80534528: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053452C:
    ctx->pc = 0x8053452Cu;
    // 8053452C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534530:
    ctx->pc = 0x80534530u;
    // 80534530: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80534534:
    ctx->pc = 0x80534534u;
    // 80534534: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534538:
    ctx->pc = 0x80534538u;
    // 80534538: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8053453C:
    ctx->pc = 0x8053453Cu;
    // 8053453C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534540:
    ctx->pc = 0x80534540u;
    // 80534540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534544:
    // 80534544: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80534548:
    ctx->pc = 0x80534548u;
    // 80534548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053454C:
    ctx->pc = 0x8053454Cu;
    ctx->downcount -= 8;
    // 8053454C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534550:
    ctx->pc = 0x80534550u;
    // 80534550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534554:
    ctx->pc = 0x80534554u;
    // 80534554: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534558:
    ctx->pc = 0x80534558u;
    // 80534558: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053455C:
    // 8053455C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534560:
    ctx->pc = 0x80534560u;
    // 80534560: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80534564:
    // 80534564: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534568:
    // 80534568: bc    12, 2, 0x8053458C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053458C;
        }
    }

label_8053456C:
    ctx->pc = 0x8053456Cu;
    ctx->downcount -= 3;
    // 8053456C: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80534570:
    // 80534570: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534574:
    // 80534574: bc    12, 2, 0x8053457C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053457C;
        }
    }

label_80534578:
    ctx->downcount -= 1;
    // 80534578: bl      0x80534670
    {
            ctx->lr = 0x8053457Cu;
            goto label_80534670;
    }

label_8053457C:
    ctx->downcount -= 2;
    // 8053457C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534580:
    // 80534580: bl      0x803456D4
    {
            ctx->lr = 0x80534584u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_80534584:
    ctx->downcount -= 2;
    // 80534584: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534588:
    // 80534588: bl      0x805345B0
    {
            ctx->lr = 0x8053458Cu;
            goto label_805345B0;
    }

label_8053458C:
    ctx->downcount -= 2;
    // 8053458C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534590:
    // 80534590: bl      0x80534610
    {
            ctx->lr = 0x80534594u;
            goto label_80534610;
    }

label_80534594:
    ctx->downcount -= 2;
    // 80534594: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534598:
    // 80534598: bl      0x803456F8
    {
            ctx->lr = 0x8053459Cu;
            ctx->pc = 0x803456F8u;
            return;
    }

label_8053459C:
    ctx->pc = 0x8053459Cu;
    ctx->downcount -= 6;
    // 8053459C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805345A0:
    ctx->pc = 0x805345A0u;
    // 805345A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805345A4:
    ctx->pc = 0x805345A4u;
    // 805345A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805345A8:
    // 805345A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805345AC:
    ctx->pc = 0x805345ACu;
    // 805345AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805345B0:
    ctx->pc = 0x805345B0u;
    ctx->downcount -= 12;
    // 805345B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805345B4:
    ctx->pc = 0x805345B4u;
    // 805345B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805345B8:
    ctx->pc = 0x805345B8u;
    // 805345B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805345BC:
    ctx->pc = 0x805345BCu;
    // 805345BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805345C0:
    // 805345C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805345C4:
    ctx->pc = 0x805345C4u;
    // 805345C4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805345C8:
    ctx->pc = 0x805345C8u;
    // 805345C8: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805345CC:
    // 805345CC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805345D0:
    // 805345D0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805345D4:
    // 805345D4: bl      0x800076B4
    {
            ctx->lr = 0x805345D8u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805345D8:
    ctx->downcount -= 2;
    // 805345D8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805345DC:
    // 805345DC: bc    12, 2, 0x805345FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805345FC;
        }
    }

label_805345E0:
    ctx->pc = 0x805345E0u;
    ctx->downcount -= 8;
    // 805345E0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805345E4:
    ctx->pc = 0x805345E4u;
    // 805345E4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805345E8:
    // 805345E8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805345EC:
    ctx->pc = 0x805345ECu;
    // 805345EC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805345F0:
    // 805345F0: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805345F4:
    // 805345F4: bl      0x800076E4
    {
            ctx->lr = 0x805345F8u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805345F8:
    ctx->downcount -= 1;
    // 805345F8: nop
    // nop

label_805345FC:
    ctx->pc = 0x805345FCu;
    ctx->downcount -= 6;
    // 805345FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534600:
    ctx->pc = 0x80534600u;
    // 80534600: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534604:
    ctx->pc = 0x80534604u;
    // 80534604: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534608:
    // 80534608: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053460C:
    ctx->pc = 0x8053460Cu;
    // 8053460C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534610:
    ctx->pc = 0x80534610u;
    ctx->downcount -= 12;
    // 80534610: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534614:
    ctx->pc = 0x80534614u;
    // 80534614: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534618:
    ctx->pc = 0x80534618u;
    // 80534618: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053461C:
    ctx->pc = 0x8053461Cu;
    // 8053461C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534620:
    // 80534620: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534624:
    ctx->pc = 0x80534624u;
    // 80534624: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534628:
    ctx->pc = 0x80534628u;
    // 80534628: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053462C:
    // 8053462C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80534630:
    // 80534630: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80534634:
    // 80534634: bl      0x800076B4
    {
            ctx->lr = 0x80534638u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80534638:
    ctx->downcount -= 2;
    // 80534638: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053463C:
    // 8053463C: bc    12, 2, 0x8053465C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053465C;
        }
    }

label_80534640:
    ctx->pc = 0x80534640u;
    ctx->downcount -= 8;
    // 80534640: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534644:
    ctx->pc = 0x80534644u;
    // 80534644: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534648:
    // 80534648: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8053464C:
    ctx->pc = 0x8053464Cu;
    // 8053464C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80534650:
    // 80534650: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80534654:
    // 80534654: bl      0x800076E4
    {
            ctx->lr = 0x80534658u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80534658:
    ctx->downcount -= 1;
    // 80534658: nop
    // nop

label_8053465C:
    ctx->pc = 0x8053465Cu;
    ctx->downcount -= 6;
    // 8053465C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534660:
    ctx->pc = 0x80534660u;
    // 80534660: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534664:
    ctx->pc = 0x80534664u;
    // 80534664: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534668:
    // 80534668: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053466C:
    ctx->pc = 0x8053466Cu;
    // 8053466C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534670:
    ctx->pc = 0x80534670u;
    ctx->downcount -= 12;
    // 80534670: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534674:
    ctx->pc = 0x80534674u;
    // 80534674: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534678:
    ctx->pc = 0x80534678u;
    // 80534678: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053467C:
    ctx->pc = 0x8053467Cu;
    // 8053467C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534680:
    // 80534680: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534684:
    ctx->pc = 0x80534684u;
    // 80534684: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534688:
    ctx->pc = 0x80534688u;
    // 80534688: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053468C:
    // 8053468C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80534690:
    // 80534690: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80534694:
    // 80534694: bl      0x800076B4
    {
            ctx->lr = 0x80534698u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80534698:
    ctx->downcount -= 2;
    // 80534698: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053469C:
    // 8053469C: bc    12, 2, 0x805346BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805346BC;
        }
    }

label_805346A0:
    ctx->pc = 0x805346A0u;
    ctx->downcount -= 8;
    // 805346A0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805346A4:
    ctx->pc = 0x805346A4u;
    // 805346A4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805346A8:
    // 805346A8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805346AC:
    ctx->pc = 0x805346ACu;
    // 805346AC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805346B0:
    // 805346B0: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805346B4:
    // 805346B4: bl      0x800076E4
    {
            ctx->lr = 0x805346B8u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805346B8:
    ctx->downcount -= 1;
    // 805346B8: nop
    // nop

label_805346BC:
    ctx->pc = 0x805346BCu;
    ctx->downcount -= 6;
    // 805346BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805346C0:
    ctx->pc = 0x805346C0u;
    // 805346C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805346C4:
    ctx->pc = 0x805346C4u;
    // 805346C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805346C8:
    // 805346C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805346CC:
    ctx->pc = 0x805346CCu;
    // 805346CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805346D0:
    ctx->pc = 0x805346D0u;
    ctx->downcount -= 18;
    // 805346D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805346D4:
    ctx->pc = 0x805346D4u;
    // 805346D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805346D8:
    // 805346D8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805346DC:
    ctx->pc = 0x805346DCu;
    // 805346DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805346E0:
    ctx->pc = 0x805346E0u;
    // 805346E0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805346E4:
    // 805346E4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805346E8:
    // 805346E8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805346EC:
    // 805346EC: bc    12, 2, 0x8053471C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053471C;
        }
    }

label_805346F0:
    ctx->downcount -= 1;
    // 805346F0: bc    12, 2, 0x8053470C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053470C;
        }
    }

label_805346F4:
    ctx->downcount -= 3;
    // 805346F4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805346F8:
    // 805346F8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805346FC:
    // 805346FC: bl      0x805342B0
    {
            ctx->lr = 0x80534700u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805342B0u;
                return;
            }
            goto label_805342B0;
    }

label_80534700:
    ctx->downcount -= 3;
    // 80534700: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534704:
    // 80534704: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534708:
    // 80534708: bl      0x801ED118
    {
            ctx->lr = 0x8053470Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8053470C:
    ctx->downcount -= 2;
    // 8053470C: cmpwi   r31, 0
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

label_80534710:
    // 80534710: bc    4, 1, 0x8053471C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8053471C;
        }
    }

label_80534714:
    ctx->downcount -= 2;
    // 80534714: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534718:
    // 80534718: bl      0x801C1C90
    {
            ctx->lr = 0x8053471Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8053471C:
    ctx->downcount -= 17;
    // 8053471C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534720:
    ctx->pc = 0x80534720u;
    // 80534720: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534724:
    ctx->pc = 0x80534724u;
    // 80534724: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534728:
    ctx->pc = 0x80534728u;
    // 80534728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053472C:
    // 8053472C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534730:
    ctx->pc = 0x80534730u;
    // 80534730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534734:
    ctx->downcount -= 2;
    // 80534734: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80534738:
    // 80534738: b       0x80534248
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534248u;
                return;
            }
            goto label_80534248;
    }

label_8053473C:
    ctx->downcount -= 2;
    // 8053473C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80534740:
    // 80534740: b       0x805346D0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805346D0u;
                return;
            }
            goto label_805346D0;
    }

label_80534744:
    ctx->pc = 0x80534744u;
    ctx->downcount -= 18;
    // 80534744: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534748:
    ctx->pc = 0x80534748u;
    // 80534748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053474C:
    ctx->pc = 0x8053474Cu;
    // 8053474C: cmpwi   r4, 5
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

label_80534750:
    ctx->pc = 0x80534750u;
    // 80534750: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534754:
    ctx->pc = 0x80534754u;
    // 80534754: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534758:
    ctx->pc = 0x80534758u;
    // 80534758: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053475C:
    ctx->pc = 0x8053475Cu;
    // 8053475C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80534760:
    ctx->pc = 0x80534760u;
    // 80534760: bc    12, 2, 0x80534790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534790;
        }
    }

label_80534764:
    ctx->pc = 0x80534764u;
    ctx->downcount -= 2;
    // 80534764: cmpwi   r4, 4
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

label_80534768:
    ctx->pc = 0x80534768u;
    // 80534768: bc    12, 2, 0x8053479C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053479C;
        }
    }

label_8053476C:
    ctx->pc = 0x8053476Cu;
    ctx->downcount -= 2;
    // 8053476C: cmpwi   r4, 3
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

label_80534770:
    ctx->pc = 0x80534770u;
    // 80534770: bc    12, 2, 0x805347A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805347A8;
        }
    }

label_80534774:
    ctx->pc = 0x80534774u;
    ctx->downcount -= 2;
    // 80534774: cmpwi   r4, 2
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

label_80534778:
    ctx->pc = 0x80534778u;
    // 80534778: bc    12, 2, 0x805347B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805347B4;
        }
    }

label_8053477C:
    ctx->pc = 0x8053477Cu;
    ctx->downcount -= 2;
    // 8053477C: cmpwi   r4, 1
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

label_80534780:
    ctx->pc = 0x80534780u;
    // 80534780: bc    12, 2, 0x805347C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805347C0;
        }
    }

label_80534784:
    ctx->pc = 0x80534784u;
    ctx->downcount -= 2;
    // 80534784: cmpwi   r4, 0
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

label_80534788:
    ctx->pc = 0x80534788u;
    // 80534788: bc    12, 2, 0x805347CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805347CC;
        }
    }

label_8053478C:
    ctx->pc = 0x8053478Cu;
    ctx->downcount -= 1;
    // 8053478C: b       0x805347D4
    {
            goto label_805347D4;
    }

label_80534790:
    ctx->pc = 0x80534790u;
    ctx->downcount -= 2;
    // 80534790: li      r3, 902
    ctx->gpr[3] = (u32)(s32)(902);

label_80534794:
    ctx->pc = 0x80534794u;
    // 80534794: bl      0x802B73BC
    {
            ctx->lr = 0x80534798u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80534798:
    ctx->pc = 0x80534798u;
    ctx->downcount -= 1;
    // 80534798: b       0x805347D4
    {
            goto label_805347D4;
    }

label_8053479C:
    ctx->pc = 0x8053479Cu;
    ctx->downcount -= 2;
    // 8053479C: li      r3, 903
    ctx->gpr[3] = (u32)(s32)(903);

label_805347A0:
    ctx->pc = 0x805347A0u;
    // 805347A0: bl      0x802B73BC
    {
            ctx->lr = 0x805347A4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347A4:
    ctx->pc = 0x805347A4u;
    ctx->downcount -= 1;
    // 805347A4: b       0x805347D4
    {
            goto label_805347D4;
    }

label_805347A8:
    ctx->pc = 0x805347A8u;
    ctx->downcount -= 2;
    // 805347A8: li      r3, 904
    ctx->gpr[3] = (u32)(s32)(904);

label_805347AC:
    ctx->pc = 0x805347ACu;
    // 805347AC: bl      0x802B73BC
    {
            ctx->lr = 0x805347B0u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347B0:
    ctx->pc = 0x805347B0u;
    ctx->downcount -= 1;
    // 805347B0: b       0x805347D4
    {
            goto label_805347D4;
    }

label_805347B4:
    ctx->pc = 0x805347B4u;
    ctx->downcount -= 2;
    // 805347B4: li      r3, 905
    ctx->gpr[3] = (u32)(s32)(905);

label_805347B8:
    ctx->pc = 0x805347B8u;
    // 805347B8: bl      0x802B73BC
    {
            ctx->lr = 0x805347BCu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347BC:
    ctx->pc = 0x805347BCu;
    ctx->downcount -= 1;
    // 805347BC: b       0x805347D4
    {
            goto label_805347D4;
    }

label_805347C0:
    ctx->pc = 0x805347C0u;
    ctx->downcount -= 2;
    // 805347C0: li      r3, 906
    ctx->gpr[3] = (u32)(s32)(906);

label_805347C4:
    ctx->pc = 0x805347C4u;
    // 805347C4: bl      0x802B73BC
    {
            ctx->lr = 0x805347C8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347C8:
    ctx->pc = 0x805347C8u;
    ctx->downcount -= 1;
    // 805347C8: b       0x805347D4
    {
            goto label_805347D4;
    }

label_805347CC:
    ctx->pc = 0x805347CCu;
    ctx->downcount -= 2;
    // 805347CC: li      r3, 907
    ctx->gpr[3] = (u32)(s32)(907);

label_805347D0:
    ctx->pc = 0x805347D0u;
    // 805347D0: bl      0x802B73BC
    {
            ctx->lr = 0x805347D4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347D4:
    ctx->pc = 0x805347D4u;
    ctx->downcount -= 2;
    // 805347D4: cmpwi   r31, 5
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805347D8:
    ctx->pc = 0x805347D8u;
    // 805347D8: bc    4, 2, 0x805347FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805347FC;
        }
    }

label_805347DC:
    ctx->pc = 0x805347DCu;
    ctx->downcount -= 2;
    // 805347DC: li      r3, 908
    ctx->gpr[3] = (u32)(s32)(908);

label_805347E0:
    ctx->pc = 0x805347E0u;
    // 805347E0: bl      0x802B73BC
    {
            ctx->lr = 0x805347E4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347E4:
    ctx->pc = 0x805347E4u;
    ctx->downcount -= 3;
    // 805347E4: lbz     r0, 282(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(282);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805347E8:
    ctx->pc = 0x805347E8u;
    // 805347E8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805347EC:
    ctx->pc = 0x805347ECu;
    // 805347EC: bc    12, 2, 0x8053484C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053484C;
        }
    }

label_805347F0:
    ctx->pc = 0x805347F0u;
    ctx->downcount -= 2;
    // 805347F0: li      r3, 911
    ctx->gpr[3] = (u32)(s32)(911);

label_805347F4:
    ctx->pc = 0x805347F4u;
    // 805347F4: bl      0x802B73BC
    {
            ctx->lr = 0x805347F8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805347F8:
    ctx->pc = 0x805347F8u;
    ctx->downcount -= 1;
    // 805347F8: b       0x8053484C
    {
            goto label_8053484C;
    }

label_805347FC:
    ctx->pc = 0x805347FCu;
    ctx->downcount -= 2;
    // 805347FC: cmpwi   r31, 0
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

label_80534800:
    ctx->pc = 0x80534800u;
    // 80534800: bc    4, 2, 0x80534810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534810;
        }
    }

label_80534804:
    ctx->pc = 0x80534804u;
    ctx->downcount -= 2;
    // 80534804: li      r3, 910
    ctx->gpr[3] = (u32)(s32)(910);

label_80534808:
    ctx->pc = 0x80534808u;
    // 80534808: bl      0x802B73BC
    {
            ctx->lr = 0x8053480Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8053480C:
    ctx->pc = 0x8053480Cu;
    ctx->downcount -= 1;
    // 8053480C: b       0x8053484C
    {
            goto label_8053484C;
    }

label_80534810:
    ctx->pc = 0x80534810u;
    ctx->downcount -= 2;
    // 80534810: li      r3, 909
    ctx->gpr[3] = (u32)(s32)(909);

label_80534814:
    ctx->pc = 0x80534814u;
    // 80534814: bl      0x802B73BC
    {
            ctx->lr = 0x80534818u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80534818:
    ctx->pc = 0x80534818u;
    ctx->downcount -= 3;
    // 80534818: lbz     r0, 282(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(282);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8053481C:
    ctx->pc = 0x8053481Cu;
    // 8053481C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534820:
    ctx->pc = 0x80534820u;
    // 80534820: bc    12, 2, 0x8053484C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053484C;
        }
    }

label_80534824:
    ctx->pc = 0x80534824u;
    ctx->downcount -= 5;
    // 80534824: rlwinm r3, r31, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0x00000001u;
    }

label_80534828:
    ctx->pc = 0x80534828u;
    // 80534828: rlwinm r0, r31, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000001u;
    }

label_8053482C:
    ctx->pc = 0x8053482Cu;
    // 8053482C: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_80534830:
    ctx->pc = 0x80534830u;
    // 80534830: subf.   r0, r3, r0
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

label_80534834:
    ctx->pc = 0x80534834u;
    // 80534834: bc    4, 2, 0x80534844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534844;
        }
    }

label_80534838:
    ctx->pc = 0x80534838u;
    ctx->downcount -= 2;
    // 80534838: li      r3, 912
    ctx->gpr[3] = (u32)(s32)(912);

label_8053483C:
    ctx->pc = 0x8053483Cu;
    // 8053483C: bl      0x802B73BC
    {
            ctx->lr = 0x80534840u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80534840:
    ctx->pc = 0x80534840u;
    ctx->downcount -= 1;
    // 80534840: b       0x8053484C
    {
            goto label_8053484C;
    }

label_80534844:
    ctx->pc = 0x80534844u;
    ctx->downcount -= 2;
    // 80534844: li      r3, 913
    ctx->gpr[3] = (u32)(s32)(913);

label_80534848:
    ctx->pc = 0x80534848u;
    // 80534848: bl      0x802B73BC
    {
            ctx->lr = 0x8053484Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8053484C:
    ctx->pc = 0x8053484Cu;
    ctx->downcount -= 16;
    // 8053484C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534850:
    ctx->pc = 0x80534850u;
    // 80534850: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534854:
    ctx->pc = 0x80534854u;
    // 80534854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534858:
    ctx->pc = 0x80534858u;
    // 80534858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053485C:
    ctx->pc = 0x8053485Cu;
    // 8053485C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534860:
    ctx->pc = 0x80534860u;
    ctx->downcount -= 11;
    // 80534860: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534864:
    ctx->pc = 0x80534864u;
    // 80534864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534868:
    // 80534868: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8053486C:
    // 8053486C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534870:
    ctx->pc = 0x80534870u;
    // 80534870: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534874:
    // 80534874: li      r0, 300
    ctx->gpr[0] = (u32)(s32)(300);

label_80534878:
    ctx->pc = 0x80534878u;
    // 80534878: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053487C:
    // 8053487C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534880:
    ctx->pc = 0x80534880u;
    // 80534880: sth     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80534884:
    // 80534884: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534888:
    // 80534888: bl      0x8026FEF0
    {
            ctx->lr = 0x8053488Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8053488C:
    ctx->downcount -= 3;
    // 8053488C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534890:
    // 80534890: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534894:
    // 80534894: bl      0x8026F6AC
    {
            ctx->lr = 0x80534898u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534898:
    ctx->downcount -= 1;
    // 80534898: bl      0x8025ED28
    {
            ctx->lr = 0x8053489Cu;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_8053489C:
    ctx->downcount -= 4;
    // 8053489C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348A0:
    // 805348A0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805348A4:
    // 805348A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805348A8:
    // 805348A8: bl      0x8026FEF0
    {
            ctx->lr = 0x805348ACu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805348AC:
    ctx->downcount -= 3;
    // 805348AC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348B0:
    // 805348B0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805348B4:
    // 805348B4: bl      0x8026F6AC
    {
            ctx->lr = 0x805348B8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805348B8:
    ctx->downcount -= 1;
    // 805348B8: bl      0x8025ED28
    {
            ctx->lr = 0x805348BCu;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_805348BC:
    ctx->downcount -= 4;
    // 805348BC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348C0:
    // 805348C0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_805348C4:
    // 805348C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805348C8:
    // 805348C8: bl      0x8026FEF0
    {
            ctx->lr = 0x805348CCu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805348CC:
    ctx->downcount -= 3;
    // 805348CC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348D0:
    // 805348D0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_805348D4:
    // 805348D4: bl      0x8026F6AC
    {
            ctx->lr = 0x805348D8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805348D8:
    ctx->downcount -= 1;
    // 805348D8: bl      0x8025ED28
    {
            ctx->lr = 0x805348DCu;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_805348DC:
    ctx->downcount -= 4;
    // 805348DC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348E0:
    // 805348E0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_805348E4:
    // 805348E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805348E8:
    // 805348E8: bl      0x8026FEF0
    {
            ctx->lr = 0x805348ECu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805348EC:
    ctx->downcount -= 3;
    // 805348EC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805348F0:
    // 805348F0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_805348F4:
    // 805348F4: bl      0x8026F6AC
    {
            ctx->lr = 0x805348F8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805348F8:
    ctx->downcount -= 1;
    // 805348F8: bl      0x8025ED28
    {
            ctx->lr = 0x805348FCu;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_805348FC:
    ctx->downcount -= 4;
    // 805348FC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534900:
    // 80534900: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80534904:
    // 80534904: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534908:
    // 80534908: bl      0x8026FEF0
    {
            ctx->lr = 0x8053490Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8053490C:
    ctx->downcount -= 3;
    // 8053490C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534910:
    // 80534910: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80534914:
    // 80534914: bl      0x8026F6AC
    {
            ctx->lr = 0x80534918u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534918:
    ctx->downcount -= 1;
    // 80534918: bl      0x8025ED28
    {
            ctx->lr = 0x8053491Cu;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_8053491C:
    ctx->pc = 0x8053491Cu;
    ctx->downcount -= 6;
    // 8053491C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534920:
    ctx->pc = 0x80534920u;
    // 80534920: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534924:
    ctx->pc = 0x80534924u;
    // 80534924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534928:
    // 80534928: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053492C:
    ctx->pc = 0x8053492Cu;
    // 8053492C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534930:
    ctx->pc = 0x80534930u;
    ctx->downcount -= 19;
    // 80534930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534934:
    ctx->pc = 0x80534934u;
    // 80534934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534938:
    ctx->pc = 0x80534938u;
    // 80534938: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053493C:
    ctx->pc = 0x8053493Cu;
    // 8053493C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534940:
    // 80534940: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80534944:
    // 80534944: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534948:
    // 80534948: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8053494C:
    ctx->pc = 0x8053494Cu;
    // 8053494C: lwz     r4, -22160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534950:
    // 80534950: bl      0x8026F958
    {
            ctx->lr = 0x80534954u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_80534954:
    ctx->downcount -= 5;
    // 80534954: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534958:
    // 80534958: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053495C:
    // 8053495C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534960:
    // 80534960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80534964:
    // 80534964: bl      0x8026F720
    {
            ctx->lr = 0x80534968u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_80534968:
    ctx->pc = 0x80534968u;
    ctx->downcount -= 16;
    // 80534968: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8053496C:
    ctx->pc = 0x8053496Cu;
    // 8053496C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534970:
    ctx->pc = 0x80534970u;
    // 80534970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534974:
    // 80534974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534978:
    ctx->pc = 0x80534978u;
    // 80534978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053497C:
    ctx->pc = 0x8053497Cu;
    ctx->downcount -= 18;
    // 8053497C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534980:
    ctx->pc = 0x80534980u;
    // 80534980: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534984:
    ctx->pc = 0x80534984u;
    // 80534984: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534988:
    ctx->pc = 0x80534988u;
    // 80534988: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053498C:
    // 8053498C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534990:
    ctx->pc = 0x80534990u;
    // 80534990: lbz     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80534994:
    // 80534994: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534998:
    // 80534998: bc    12, 2, 0x80534A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534A20;
        }
    }

label_8053499C:
    ctx->pc = 0x8053499Cu;
    ctx->downcount -= 51;
    // 8053499C: lhz     r6, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_805349A0:
    // 805349A0: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_805349A4:
    ctx->pc = 0x805349A4u;
    // 805349A4: lhz     r5, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_805349A8:
    // 805349A8: divw   r4, r6, r0
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_805349AC:
    // 805349AC: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_805349B0:
    // 805349B0: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_805349B4:
    // 805349B4: cmpw    r5, r0
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

label_805349B8:
    // 805349B8: bc    4, 2, 0x805349E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805349E0;
        }
    }

label_805349BC:
    ctx->downcount -= 5;
    // 805349BC: addi    r31, r4, 2
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(2);

label_805349C0:
    // 805349C0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805349C4:
    // 805349C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805349C8:
    // 805349C8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805349CC:
    // 805349CC: bl      0x8026FEF0
    {
            ctx->lr = 0x805349D0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805349D0:
    ctx->downcount -= 3;
    // 805349D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805349D4:
    // 805349D4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805349D8:
    // 805349D8: bl      0x8026F6AC
    {
            ctx->lr = 0x805349DCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805349DC:
    ctx->downcount -= 1;
    // 805349DC: bl      0x8025EC94
    {
            ctx->lr = 0x805349E0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805349E0:
    ctx->pc = 0x805349E0u;
    ctx->downcount -= 49;
    // 805349E0: lhz     r3, 278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(278);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_805349E4:
    // 805349E4: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_805349E8:
    // 805349E8: divw   r4, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_805349EC:
    // 805349EC: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_805349F0:
    // 805349F0: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
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

label_805349F4:
    // 805349F4: bc    4, 2, 0x80534A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534A00;
        }
    }

label_805349F8:
    ctx->downcount -= 2;
    // 805349F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805349FC:
    // 805349FC: bl      0x80534744
    {
            ctx->lr = 0x80534A00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534744u;
                return;
            }
            goto label_80534744;
    }

label_80534A00:
    ctx->pc = 0x80534A00u;
    ctx->downcount -= 3;
    // 80534A00: lhz     r3, 278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(278);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80534A04:
    // 80534A04: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534A08:
    // 80534A08: bc    12, 2, 0x80534A18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534A18;
        }
    }

label_80534A0C:
    ctx->downcount -= 3;
    // 80534A0C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80534A10:
    ctx->pc = 0x80534A10u;
    // 80534A10: sth     r0, 278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(278);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80534A14:
    // 80534A14: b       0x80534A20
    {
            goto label_80534A20;
    }

label_80534A18:
    ctx->downcount -= 2;
    // 80534A18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534A1C:
    ctx->pc = 0x80534A1Cu;
    // 80534A1C: stb     r0, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534A20:
    ctx->pc = 0x80534A20u;
    ctx->downcount -= 16;
    // 80534A20: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534A24:
    ctx->pc = 0x80534A24u;
    // 80534A24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534A28:
    ctx->pc = 0x80534A28u;
    // 80534A28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534A2C:
    // 80534A2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534A30:
    ctx->pc = 0x80534A30u;
    // 80534A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534A34:
    ctx->downcount -= 1;
    // 80534A34: b       0x80534860
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534860u;
                return;
            }
            goto label_80534860;
    }

label_80534A38:
    ctx->pc = 0x80534A38u;
    ctx->downcount -= 8;
    // 80534A38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534A3C:
    ctx->pc = 0x80534A3Cu;
    // 80534A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534A40:
    // 80534A40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534A44:
    ctx->pc = 0x80534A44u;
    // 80534A44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534A48:
    // 80534A48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534A4C:
    ctx->pc = 0x80534A4Cu;
    // 80534A4C: stb     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534A50:
    // 80534A50: li      r3, 908
    ctx->gpr[3] = (u32)(s32)(908);

label_80534A54:
    // 80534A54: bl      0x802B732C
    {
            ctx->lr = 0x80534A58u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80534A58:
    ctx->downcount -= 3;
    // 80534A58: li      r3, 909
    ctx->gpr[3] = (u32)(s32)(909);

label_80534A5C:
    // 80534A5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534A60:
    // 80534A60: bl      0x802B732C
    {
            ctx->lr = 0x80534A64u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80534A64:
    ctx->downcount -= 3;
    // 80534A64: li      r3, 911
    ctx->gpr[3] = (u32)(s32)(911);

label_80534A68:
    // 80534A68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534A6C:
    // 80534A6C: bl      0x802B732C
    {
            ctx->lr = 0x80534A70u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80534A70:
    ctx->downcount -= 3;
    // 80534A70: li      r3, 912
    ctx->gpr[3] = (u32)(s32)(912);

label_80534A74:
    // 80534A74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534A78:
    // 80534A78: bl      0x802B732C
    {
            ctx->lr = 0x80534A7Cu;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80534A7C:
    ctx->downcount -= 3;
    // 80534A7C: li      r3, 913
    ctx->gpr[3] = (u32)(s32)(913);

label_80534A80:
    // 80534A80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534A84:
    // 80534A84: bl      0x802B732C
    {
            ctx->lr = 0x80534A88u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80534A88:
    ctx->pc = 0x80534A88u;
    ctx->downcount -= 5;
    // 80534A88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534A8C:
    ctx->pc = 0x80534A8Cu;
    // 80534A8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534A90:
    // 80534A90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534A94:
    ctx->pc = 0x80534A94u;
    // 80534A94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534A98:
    ctx->downcount -= 3;
    // 80534A98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80534A9C:
    ctx->pc = 0x80534A9Cu;
    // 80534A9C: stb     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534AA0:
    ctx->pc = 0x80534AA0u;
    // 80534AA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534AA4:
    ctx->pc = 0x80534AA4u;
    ctx->downcount -= 15;
    // 80534AA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534AA8:
    ctx->pc = 0x80534AA8u;
    // 80534AA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534AAC:
    // 80534AAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80534AB0:
    // 80534AB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534AB4:
    ctx->pc = 0x80534AB4u;
    // 80534AB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534AB8:
    // 80534AB8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80534ABC:
    ctx->pc = 0x80534ABCu;
    // 80534ABC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534AC0:
    // 80534AC0: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_80534AC4:
    // 80534AC4: addi    r31, r31, 16536
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16536);

label_80534AC8:
    ctx->pc = 0x80534AC8u;
    // 80534AC8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80534ACC:
    // 80534ACC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534AD0:
    // 80534AD0: addi    r4, r31, 10
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(10);

label_80534AD4:
    // 80534AD4: addi    r5, r31, 23
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(23);

label_80534AD8:
    // 80534AD8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534ADC:
    // 80534ADC: bl      0x802703A8
    {
            ctx->lr = 0x80534AE0u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80534AE0:
    ctx->downcount -= 6;
    // 80534AE0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534AE4:
    // 80534AE4: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_80534AE8:
    // 80534AE8: addi    r6, r31, 51
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(51);

label_80534AEC:
    // 80534AEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534AF0:
    // 80534AF0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534AF4:
    // 80534AF4: bl      0x8027035C
    {
            ctx->lr = 0x80534AF8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534AF8:
    ctx->downcount -= 6;
    // 80534AF8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534AFC:
    // 80534AFC: addi    r5, r31, 62
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(62);

label_80534B00:
    // 80534B00: addi    r6, r31, 51
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(51);

label_80534B04:
    // 80534B04: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80534B08:
    // 80534B08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B0C:
    // 80534B0C: bl      0x8027035C
    {
            ctx->lr = 0x80534B10u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B10:
    ctx->downcount -= 6;
    // 80534B10: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B14:
    // 80534B14: addi    r5, r31, 66
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(66);

label_80534B18:
    // 80534B18: addi    r6, r31, 75
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(75);

label_80534B1C:
    // 80534B1C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534B20:
    // 80534B20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B24:
    // 80534B24: bl      0x8027035C
    {
            ctx->lr = 0x80534B28u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B28:
    ctx->downcount -= 6;
    // 80534B28: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B2C:
    // 80534B2C: addi    r5, r31, 86
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(86);

label_80534B30:
    // 80534B30: addi    r6, r31, 95
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(95);

label_80534B34:
    // 80534B34: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534B38:
    // 80534B38: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B3C:
    // 80534B3C: bl      0x8027035C
    {
            ctx->lr = 0x80534B40u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B40:
    ctx->downcount -= 6;
    // 80534B40: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B44:
    // 80534B44: addi    r5, r31, 106
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(106);

label_80534B48:
    // 80534B48: addi    r6, r31, 115
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(115);

label_80534B4C:
    // 80534B4C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80534B50:
    // 80534B50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B54:
    // 80534B54: bl      0x8027035C
    {
            ctx->lr = 0x80534B58u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B58:
    ctx->downcount -= 6;
    // 80534B58: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B5C:
    // 80534B5C: addi    r5, r31, 126
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(126);

label_80534B60:
    // 80534B60: addi    r6, r31, 135
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(135);

label_80534B64:
    // 80534B64: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80534B68:
    // 80534B68: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B6C:
    // 80534B6C: bl      0x8027035C
    {
            ctx->lr = 0x80534B70u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B70:
    ctx->downcount -= 6;
    // 80534B70: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B74:
    // 80534B74: addi    r5, r31, 146
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(146);

label_80534B78:
    // 80534B78: addi    r6, r31, 155
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(155);

label_80534B7C:
    // 80534B7C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80534B80:
    // 80534B80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534B84:
    // 80534B84: bl      0x8027035C
    {
            ctx->lr = 0x80534B88u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534B88:
    ctx->downcount -= 4;
    // 80534B88: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534B8C:
    // 80534B8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534B90:
    // 80534B90: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80534B94:
    // 80534B94: bl      0x80270194
    {
            ctx->lr = 0x80534B98u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80534B98:
    ctx->downcount -= 5;
    // 80534B98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534B9C:
    ctx->pc = 0x80534B9Cu;
    // 80534B9C: sth     r0, 278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(278);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80534BA0:
    // 80534BA0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80534BA4:
    // 80534BA4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534BA8:
    // 80534BA8: bl      0x8026F6AC
    {
            ctx->lr = 0x80534BACu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534BAC:
    ctx->downcount -= 1;
    // 80534BAC: bl      0x8025EA70
    {
            ctx->lr = 0x80534BB0u;
            ctx->pc = 0x8025EA70u;
            return;
    }

label_80534BB0:
    ctx->pc = 0x80534BB0u;
    ctx->downcount -= 8;
    // 80534BB0: lfs     f0, 17184(r2)
    if (!ppc_fp_available_inline(ctx, 0x80534BB0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80534BB4:
    // 80534BB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534BB8:
    ctx->pc = 0x80534BB8u;
    // 80534BB8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80534BB8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_80534BBC:
    ctx->pc = 0x80534BBCu;
    // 80534BBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80534BBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80534BC0:
    ctx->pc = 0x80534BC0u;
    // 80534BC0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80534BC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80534BC4:
    ctx->pc = 0x80534BC4u;
    // 80534BC4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534BC8:
    ctx->pc = 0x80534BC8u;
    // 80534BC8: sth     r0, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80534BCC:
    // 80534BCC: bl      0x80534860
    {
            ctx->lr = 0x80534BD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534860u;
                return;
            }
            goto label_80534860;
    }

label_80534BD0:
    ctx->pc = 0x80534BD0u;
    ctx->downcount -= 7;
    // 80534BD0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534BD4:
    ctx->pc = 0x80534BD4u;
    // 80534BD4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534BD8:
    ctx->pc = 0x80534BD8u;
    // 80534BD8: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80534BDC:
    ctx->pc = 0x80534BDCu;
    // 80534BDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534BE0:
    // 80534BE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80534BE4:
    ctx->pc = 0x80534BE4u;
    // 80534BE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534BE8:
    ctx->pc = 0x80534BE8u;
    ctx->downcount -= 8;
    // 80534BE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534BEC:
    ctx->pc = 0x80534BECu;
    // 80534BEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534BF0:
    // 80534BF0: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80534BF4:
    // 80534BF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534BF8:
    ctx->pc = 0x80534BF8u;
    // 80534BF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534BFC:
    ctx->pc = 0x80534BFCu;
    // 80534BFC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534C00:
    // 80534C00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534C04:
    // 80534C04: bl      0x803715C0
    {
            ctx->lr = 0x80534C08u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_80534C08:
    ctx->downcount -= 20;
    // 80534C08: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80534C0C:
    // 80534C0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534C10:
    // 80534C10: addi    r4, r4, 6872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6872);

label_80534C14:
    ctx->pc = 0x80534C14u;
    // 80534C14: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534C18:
    // 80534C18: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80534C1C:
    // 80534C1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80534C20:
    // 80534C20: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_80534C24:
    // 80534C24: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80534C28:
    ctx->pc = 0x80534C28u;
    // 80534C28: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80534C2C:
    ctx->pc = 0x80534C2Cu;
    // 80534C2C: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80534C30:
    ctx->pc = 0x80534C30u;
    // 80534C30: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534C34:
    ctx->pc = 0x80534C34u;
    // 80534C34: stw     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534C38:
    ctx->pc = 0x80534C38u;
    // 80534C38: stb     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534C3C:
    ctx->pc = 0x80534C3Cu;
    // 80534C3C: stb     r0, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534C40:
    ctx->pc = 0x80534C40u;
    // 80534C40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534C44:
    ctx->pc = 0x80534C44u;
    // 80534C44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534C48:
    ctx->pc = 0x80534C48u;
    // 80534C48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534C4C:
    // 80534C4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534C50:
    ctx->pc = 0x80534C50u;
    // 80534C50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534C54:
    ctx->pc = 0x80534C54u;
    ctx->downcount -= 18;
    // 80534C54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534C58:
    ctx->pc = 0x80534C58u;
    // 80534C58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534C5C:
    // 80534C5C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534C60:
    ctx->pc = 0x80534C60u;
    // 80534C60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534C64:
    ctx->pc = 0x80534C64u;
    // 80534C64: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534C68:
    // 80534C68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534C6C:
    // 80534C6C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80534C70:
    // 80534C70: bc    12, 2, 0x80534CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534CA4;
        }
    }

label_80534C74:
    ctx->downcount -= 1;
    // 80534C74: bc    12, 2, 0x80534C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534C94;
        }
    }

label_80534C78:
    ctx->downcount -= 1;
    // 80534C78: bc    12, 2, 0x80534C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534C94;
        }
    }

label_80534C7C:
    ctx->downcount -= 3;
    // 80534C7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534C80:
    // 80534C80: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534C84:
    // 80534C84: bl      0x801F5C24
    {
            ctx->lr = 0x80534C88u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80534C88:
    ctx->downcount -= 3;
    // 80534C88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534C8C:
    // 80534C8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534C90:
    // 80534C90: bl      0x801F9C70
    {
            ctx->lr = 0x80534C94u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80534C94:
    ctx->downcount -= 2;
    // 80534C94: cmpwi   r31, 0
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

label_80534C98:
    // 80534C98: bc    4, 1, 0x80534CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534CA4;
        }
    }

label_80534C9C:
    ctx->downcount -= 2;
    // 80534C9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534CA0:
    // 80534CA0: bl      0x801C1C90
    {
            ctx->lr = 0x80534CA4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80534CA4:
    ctx->downcount -= 17;
    // 80534CA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80534CA8:
    ctx->pc = 0x80534CA8u;
    // 80534CA8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534CAC:
    ctx->pc = 0x80534CACu;
    // 80534CAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534CB0:
    ctx->pc = 0x80534CB0u;
    // 80534CB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534CB4:
    // 80534CB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534CB8:
    ctx->pc = 0x80534CB8u;
    // 80534CB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534CBC:
    ctx->downcount -= 2;
    // 80534CBC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80534CC0:
    // 80534CC0: b       0x80534C54
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534C54u;
                return;
            }
            goto label_80534C54;
    }

label_80534CC4:
    ctx->downcount -= 2;
    // 80534CC4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80534CC8:
    // 80534CC8: b       0x80534C54
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534C54u;
                return;
            }
            goto label_80534C54;
    }

label_80534CCC:
    ctx->pc = 0x80534CCCu;
    ctx->downcount -= 20;
    // 80534CCC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534CD0:
    ctx->pc = 0x80534CD0u;
    // 80534CD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534CD4:
    ctx->pc = 0x80534CD4u;
    // 80534CD4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534CD8:
    // 80534CD8: rlwinm r0, r4, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_80534CDC:
    ctx->pc = 0x80534CDCu;
    // 80534CDC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534CE0:
    // 80534CE0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534CE4:
    // 80534CE4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80534CE8:
    // 80534CE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80534CEC:
    // 80534CEC: add   r30, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_80534CF0:
    // 80534CF0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80534CF4:
    ctx->downcount -= 9;
    // 80534CF4: add   r3, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80534CF8:
    // 80534CF8: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80534CFC:
    ctx->pc = 0x80534CFCu;
    // 80534CFC: lwz     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534D00:
    // 80534D00: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80534D04:
    // 80534D04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534D08:
    // 80534D08: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80534D0C:
    // 80534D0C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80534D10:
    // 80534D10: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80534D14:
    // 80534D14: bl      0x8026F828
    {
            ctx->lr = 0x80534D18u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80534D18:
    ctx->downcount -= 4;
    // 80534D18: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80534D1C:
    // 80534D1C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80534D20:
    // 80534D20: cmpwi   r29, 2
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

label_80534D24:
    // 80534D24: bc    12, 0, 0x80534CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534CF4u;
                return;
            }
            goto label_80534CF4;
        }
    }

label_80534D28:
    ctx->pc = 0x80534D28u;
    ctx->downcount -= 16;
    // 80534D28: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534D2C:
    ctx->pc = 0x80534D2Cu;
    // 80534D2C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534D30:
    ctx->pc = 0x80534D30u;
    // 80534D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534D34:
    // 80534D34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80534D38:
    ctx->pc = 0x80534D38u;
    // 80534D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534D3C:
    ctx->downcount -= 5;
    // 80534D3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80534D40:
    ctx->pc = 0x80534D40u;
    // 80534D40: stb     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534D44:
    ctx->pc = 0x80534D44u;
    // 80534D44: stw     r4, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80534D48:
    ctx->pc = 0x80534D48u;
    // 80534D48: stw     r5, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80534D4C:
    ctx->pc = 0x80534D4Cu;
    // 80534D4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534D50:
    ctx->pc = 0x80534D50u;
    ctx->downcount -= 18;
    // 80534D50: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534D54:
    ctx->pc = 0x80534D54u;
    // 80534D54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534D58:
    ctx->pc = 0x80534D58u;
    // 80534D58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534D5C:
    ctx->pc = 0x80534D5Cu;
    // 80534D5C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534D60:
    // 80534D60: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534D64:
    ctx->pc = 0x80534D64u;
    // 80534D64: lbz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80534D68:
    // 80534D68: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534D6C:
    // 80534D6C: bc    12, 2, 0x80534E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80534E50;
        }
    }

label_80534D70:
    ctx->pc = 0x80534D70u;
    ctx->downcount -= 3;
    // 80534D70: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534D74:
    // 80534D74: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80534D78:
    // 80534D78: bc    4, 2, 0x80534DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534DE4;
        }
    }

label_80534D7C:
    ctx->downcount -= 4;
    // 80534D7C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534D80:
    // 80534D80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80534D84:
    // 80534D84: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534D88:
    // 80534D88: bl      0x8026FEF0
    {
            ctx->lr = 0x80534D8Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80534D8C:
    ctx->downcount -= 3;
    // 80534D8C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80534D90:
    // 80534D90: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534D94:
    // 80534D94: bl      0x8026F6AC
    {
            ctx->lr = 0x80534D98u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534D98:
    ctx->downcount -= 1;
    // 80534D98: bl      0x8025EC94
    {
            ctx->lr = 0x80534D9Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80534D9C:
    ctx->downcount -= 2;
    // 80534D9C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80534DA0:
    // 80534DA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80534DA4:
    ctx->downcount -= 9;
    // 80534DA4: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80534DA8:
    ctx->pc = 0x80534DA8u;
    // 80534DA8: lwz     r7, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80534DAC:
    ctx->pc = 0x80534DACu;
    // 80534DAC: lwz     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534DB0:
    // 80534DB0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80534DB4:
    // 80534DB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534DB8:
    // 80534DB8: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80534DBC:
    // 80534DBC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80534DC0:
    // 80534DC0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80534DC4:
    // 80534DC4: bl      0x8026F828
    {
            ctx->lr = 0x80534DC8u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80534DC8:
    ctx->downcount -= 4;
    // 80534DC8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80534DCC:
    // 80534DCC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80534DD0:
    // 80534DD0: cmpwi   r30, 2
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

label_80534DD4:
    // 80534DD4: bc    12, 0, 0x80534DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534DA4u;
                return;
            }
            goto label_80534DA4;
        }
    }

label_80534DD8:
    ctx->downcount -= 3;
    // 80534DD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534DDC:
    ctx->pc = 0x80534DDCu;
    // 80534DDC: stb     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534DE0:
    // 80534DE0: b       0x80534E50
    {
            goto label_80534E50;
    }

label_80534DE4:
    ctx->downcount -= 2;
    // 80534DE4: cmpwi   r0, 1
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

label_80534DE8:
    // 80534DE8: bc    4, 2, 0x80534E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80534E50;
        }
    }

label_80534DEC:
    ctx->downcount -= 4;
    // 80534DEC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534DF0:
    // 80534DF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80534DF4:
    // 80534DF4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534DF8:
    // 80534DF8: bl      0x8026FEF0
    {
            ctx->lr = 0x80534DFCu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80534DFC:
    ctx->downcount -= 3;
    // 80534DFC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80534E00:
    // 80534E00: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534E04:
    // 80534E04: bl      0x8026F6AC
    {
            ctx->lr = 0x80534E08u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534E08:
    ctx->downcount -= 1;
    // 80534E08: bl      0x8025EC94
    {
            ctx->lr = 0x80534E0Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80534E0C:
    ctx->downcount -= 2;
    // 80534E0C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80534E10:
    // 80534E10: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80534E14:
    ctx->downcount -= 9;
    // 80534E14: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80534E18:
    ctx->pc = 0x80534E18u;
    // 80534E18: lwz     r7, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80534E1C:
    ctx->pc = 0x80534E1Cu;
    // 80534E1C: lwz     r4, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80534E20:
    // 80534E20: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80534E24:
    // 80534E24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534E28:
    // 80534E28: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80534E2C:
    // 80534E2C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80534E30:
    // 80534E30: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80534E34:
    // 80534E34: bl      0x8026F828
    {
            ctx->lr = 0x80534E38u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80534E38:
    ctx->downcount -= 4;
    // 80534E38: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80534E3C:
    // 80534E3C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80534E40:
    // 80534E40: cmpwi   r30, 2
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

label_80534E44:
    // 80534E44: bc    12, 0, 0x80534E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534E14u;
                return;
            }
            goto label_80534E14;
        }
    }

label_80534E48:
    ctx->downcount -= 2;
    // 80534E48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534E4C:
    ctx->pc = 0x80534E4Cu;
    // 80534E4C: stb     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534E50:
    ctx->pc = 0x80534E50u;
    ctx->downcount -= 16;
    // 80534E50: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534E54:
    ctx->pc = 0x80534E54u;
    // 80534E54: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534E58:
    ctx->pc = 0x80534E58u;
    // 80534E58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534E5C:
    // 80534E5C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80534E60:
    ctx->pc = 0x80534E60u;
    // 80534E60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534E64:
    ctx->pc = 0x80534E64u;
    ctx->downcount -= 9;
    // 80534E64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534E68:
    ctx->pc = 0x80534E68u;
    // 80534E68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534E6C:
    // 80534E6C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534E70:
    // 80534E70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534E74:
    ctx->pc = 0x80534E74u;
    // 80534E74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534E78:
    ctx->pc = 0x80534E78u;
    // 80534E78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80534E7C:
    // 80534E7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534E80:
    // 80534E80: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534E84:
    // 80534E84: bl      0x8026FEF0
    {
            ctx->lr = 0x80534E88u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80534E88:
    ctx->downcount -= 3;
    // 80534E88: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534E8C:
    // 80534E8C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534E90:
    // 80534E90: bl      0x8026F6AC
    {
            ctx->lr = 0x80534E94u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534E94:
    ctx->downcount -= 1;
    // 80534E94: bl      0x8025ED28
    {
            ctx->lr = 0x80534E98u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80534E98:
    ctx->downcount -= 4;
    // 80534E98: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534E9C:
    // 80534E9C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534EA0:
    // 80534EA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534EA4:
    // 80534EA4: bl      0x8026FEF0
    {
            ctx->lr = 0x80534EA8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80534EA8:
    ctx->downcount -= 3;
    // 80534EA8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80534EAC:
    // 80534EAC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534EB0:
    // 80534EB0: bl      0x8026F6AC
    {
            ctx->lr = 0x80534EB4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80534EB4:
    ctx->downcount -= 1;
    // 80534EB4: bl      0x8025ED28
    {
            ctx->lr = 0x80534EB8u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80534EB8:
    ctx->downcount -= 10;
    // 80534EB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80534EBC:
    ctx->pc = 0x80534EBCu;
    // 80534EBC: stb     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80534EC0:
    ctx->pc = 0x80534EC0u;
    // 80534EC0: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534EC4:
    ctx->pc = 0x80534EC4u;
    // 80534EC4: stw     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534EC8:
    ctx->pc = 0x80534EC8u;
    // 80534EC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80534ECC:
    ctx->pc = 0x80534ECCu;
    // 80534ECC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534ED0:
    ctx->pc = 0x80534ED0u;
    // 80534ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534ED4:
    // 80534ED4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80534ED8:
    ctx->pc = 0x80534ED8u;
    // 80534ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534EDC:
    ctx->pc = 0x80534EDCu;
    ctx->downcount -= 20;
    // 80534EDC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534EE0:
    ctx->pc = 0x80534EE0u;
    // 80534EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534EE4:
    ctx->pc = 0x80534EE4u;
    // 80534EE4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534EE8:
    ctx->pc = 0x80534EE8u;
    // 80534EE8: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534EEC:
    // 80534EEC: rlwinm r31, r5, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80534EF0:
    // 80534EF0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534EF4:
    // 80534EF4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80534EF8:
    ctx->pc = 0x80534EF8u;
    // 80534EF8: lwz     r6, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80534EFC:
    ctx->pc = 0x80534EFCu;
    // 80534EFC: lwzx    r3, r6, r31
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80534F00:
    // 80534F00: bl      0x8027CB94
    {
            ctx->lr = 0x80534F04u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80534F04:
    ctx->pc = 0x80534F04u;
    ctx->downcount -= 6;
    // 80534F04: lwz     r5, -22144(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80534F08:
    // 80534F08: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80534F0C:
    // 80534F0C: addi    r6, r30, 1
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(1);

label_80534F10:
    // 80534F10: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80534F14:
    // 80534F14: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80534F18:
    // 80534F18: bl      0x8000D074
    {
            ctx->lr = 0x80534F1Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80534F1C:
    ctx->downcount -= 3;
    // 80534F1C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80534F20:
    // 80534F20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80534F24:
    // 80534F24: bl      0x8026F970
    {
            ctx->lr = 0x80534F28u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80534F28:
    ctx->pc = 0x80534F28u;
    ctx->downcount -= 4;
    // 80534F28: lwz     r5, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80534F2C:
    // 80534F2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534F30:
    ctx->pc = 0x80534F30u;
    // 80534F30: lwzx    r3, r5, r31
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80534F34:
    // 80534F34: bl      0x8027CC74
    {
            ctx->lr = 0x80534F38u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80534F38:
    ctx->pc = 0x80534F38u;
    ctx->downcount -= 16;
    // 80534F38: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80534F3C:
    ctx->pc = 0x80534F3Cu;
    // 80534F3C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80534F40:
    ctx->pc = 0x80534F40u;
    // 80534F40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80534F44:
    // 80534F44: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80534F48:
    ctx->pc = 0x80534F48u;
    // 80534F48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80534F4C:
    ctx->pc = 0x80534F4Cu;
    ctx->downcount -= 24;
    // 80534F4C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80534F50:
    ctx->pc = 0x80534F50u;
    // 80534F50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80534F54:
    // 80534F54: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80534F58:
    // 80534F58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534F5C:
    ctx->pc = 0x80534F5Cu;
    // 80534F5C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80534F60:
    // 80534F60: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80534F64:
    ctx->pc = 0x80534F64u;
    // 80534F64: stmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80534F68:
    // 80534F68: lis     r30, -32664
    ctx->gpr[30] = ((u32)(s32)(-32664) << 16);

label_80534F6C:
    // 80534F6C: addi    r30, r30, 16704
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16704);

label_80534F70:
    // 80534F70: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80534F74:
    // 80534F74: addi    r4, r30, 66
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(66);

label_80534F78:
    // 80534F78: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80534F7C:
    // 80534F7C: addi    r5, r30, 79
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(79);

label_80534F80:
    // 80534F80: bl      0x802703A8
    {
            ctx->lr = 0x80534F84u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80534F84:
    ctx->downcount -= 6;
    // 80534F84: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534F88:
    // 80534F88: addi    r5, r30, 100
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(100);

label_80534F8C:
    // 80534F8C: addi    r6, r30, 103
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(103);

label_80534F90:
    // 80534F90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534F94:
    // 80534F94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534F98:
    // 80534F98: bl      0x8027035C
    {
            ctx->lr = 0x80534F9Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534F9C:
    ctx->downcount -= 6;
    // 80534F9C: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534FA0:
    // 80534FA0: addi    r5, r30, 114
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(114);

label_80534FA4:
    // 80534FA4: addi    r6, r30, 103
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(103);

label_80534FA8:
    // 80534FA8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80534FAC:
    // 80534FAC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534FB0:
    // 80534FB0: bl      0x8027035C
    {
            ctx->lr = 0x80534FB4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534FB4:
    ctx->downcount -= 6;
    // 80534FB4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534FB8:
    // 80534FB8: addi    r5, r30, 118
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(118);

label_80534FBC:
    // 80534FBC: addi    r6, r30, 130
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(130);

label_80534FC0:
    // 80534FC0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80534FC4:
    // 80534FC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534FC8:
    // 80534FC8: bl      0x8027035C
    {
            ctx->lr = 0x80534FCCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534FCC:
    ctx->downcount -= 6;
    // 80534FCC: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534FD0:
    // 80534FD0: addi    r5, r30, 118
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(118);

label_80534FD4:
    // 80534FD4: addi    r6, r30, 147
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(147);

label_80534FD8:
    // 80534FD8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80534FDC:
    // 80534FDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80534FE0:
    // 80534FE0: bl      0x8027035C
    {
            ctx->lr = 0x80534FE4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80534FE4:
    ctx->downcount -= 4;
    // 80534FE4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534FE8:
    // 80534FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534FEC:
    // 80534FEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80534FF0:
    // 80534FF0: bl      0x8026FEF0
    {
            ctx->lr = 0x80534FF4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80534FF4:
    ctx->downcount -= 3;
    // 80534FF4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80534FF8:
    // 80534FF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80534FFC:
    // 80534FFC: bl      0x8026F6AC
    {
            ctx->lr = 0x80535000u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535000:
    ctx->downcount -= 1;
    // 80535000: bl      0x8025ED28
    {
            ctx->lr = 0x80535004u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535004:
    ctx->downcount -= 4;
    // 80535004: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80535008:
    // 80535008: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8053500C:
    // 8053500C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535010:
    // 80535010: bl      0x8026FEF0
    {
            ctx->lr = 0x80535014u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535014:
    ctx->downcount -= 3;
    // 80535014: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80535018:
    // 80535018: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8053501C:
    // 8053501C: bl      0x8026F6AC
    {
            ctx->lr = 0x80535020u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535020:
    ctx->downcount -= 1;
    // 80535020: bl      0x8025ED28
    {
            ctx->lr = 0x80535024u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535024:
    ctx->downcount -= 4;
    // 80535024: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80535028:
    // 80535028: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053502C:
    // 8053502C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80535030:
    // 80535030: bl      0x80270194
    {
            ctx->lr = 0x80535034u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80535034:
    ctx->downcount -= 2;
    // 80535034: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80535038:
    // 80535038: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8053503C:
    ctx->downcount -= 1;
    // 8053503C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80535040:
    ctx->pc = 0x80535040u;
    ctx->downcount -= 7;
    // 80535040: lwz     r5, -22152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80535044:
    // 80535044: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80535048:
    // 80535048: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8053504C:
    // 8053504C: addi    r6, r27, 1
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(1);

label_80535050:
    // 80535050: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80535054:
    // 80535054: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80535058:
    // 80535058: bl      0x8000D074
    {
            ctx->lr = 0x8053505Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8053505C:
    ctx->downcount -= 3;
    // 8053505C: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80535060:
    // 80535060: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80535064:
    // 80535064: bl      0x8026F960
    {
            ctx->lr = 0x80535068u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80535068:
    ctx->pc = 0x80535068u;
    ctx->downcount -= 3;
    // 80535068: lwz     r0, 276(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053506C:
    // 8053506C: cmpwi   r0, 1
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

label_80535070:
    // 80535070: bc    4, 2, 0x80535094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535094;
        }
    }

label_80535074:
    ctx->downcount -= 2;
    // 80535074: cmpwi   r27, 1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535078:
    // 80535078: bc    4, 2, 0x80535094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535094;
        }
    }

label_8053507C:
    ctx->downcount -= 5;
    // 8053507C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535080:
    // 80535080: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80535084:
    // 80535084: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80535088:
    // 80535088: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8053508C:
    // 8053508C: bl      0x8026F760
    {
            ctx->lr = 0x80535090u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_80535090:
    ctx->downcount -= 1;
    // 80535090: b       0x805350A8
    {
            goto label_805350A8;
    }

label_80535094:
    ctx->downcount -= 5;
    // 80535094: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535098:
    // 80535098: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8053509C:
    // 8053509C: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_805350A0:
    // 805350A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805350A4:
    // 805350A4: bl      0x8026F760
    {
            ctx->lr = 0x805350A8u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_805350A8:
    ctx->downcount -= 3;
    // 805350A8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_805350AC:
    // 805350AC: cmpwi   r28, 4
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

label_805350B0:
    // 805350B0: bc    12, 0, 0x80535040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535040u;
                return;
            }
            goto label_80535040;
        }
    }

label_805350B4:
    ctx->downcount -= 3;
    // 805350B4: add   r29, r25, r31
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_805350B8:
    // 805350B8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_805350BC:
    // 805350BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_805350C0:
    ctx->pc = 0x805350C0u;
    ctx->downcount -= 7;
    // 805350C0: lwz     r5, -22148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805350C4:
    // 805350C4: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805350C8:
    // 805350C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805350CC:
    // 805350CC: addi    r6, r27, 1
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(1);

label_805350D0:
    // 805350D0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_805350D4:
    // 805350D4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805350D8:
    // 805350D8: bl      0x8000D074
    {
            ctx->lr = 0x805350DCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805350DC:
    ctx->downcount -= 4;
    // 805350DC: add   r28, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_805350E0:
    // 805350E0: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_805350E4:
    // 805350E4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805350E8:
    // 805350E8: bl      0x8026F968
    {
            ctx->lr = 0x805350ECu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805350EC:
    ctx->pc = 0x805350ECu;
    ctx->downcount -= 9;
    // 805350EC: stw     r3, 292(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805350F0:
    // 805350F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805350F4:
    // 805350F4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_805350F8:
    // 805350F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805350FC:
    // 805350FC: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80535100:
    // 80535100: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535104:
    // 80535104: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80535108:
    // 80535108: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8053510C:
    // 8053510C: bl      0x8026F828
    {
            ctx->lr = 0x80535110u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80535110:
    ctx->downcount -= 4;
    // 80535110: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80535114:
    // 80535114: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80535118:
    // 80535118: cmpwi   r26, 2
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

label_8053511C:
    // 8053511C: bc    12, 0, 0x805350C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805350C0u;
                return;
            }
            goto label_805350C0;
        }
    }

label_80535120:
    ctx->downcount -= 4;
    // 80535120: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80535124:
    // 80535124: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_80535128:
    // 80535128: cmpwi   r27, 2
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

label_8053512C:
    // 8053512C: bc    12, 0, 0x8053503C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053503Cu;
                return;
            }
            goto label_8053503C;
        }
    }

label_80535130:
    ctx->downcount -= 20;
    // 80535130: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535134:
    ctx->pc = 0x80535134u;
    // 80535134: stb     r0, 280(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(280);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535138:
    ctx->pc = 0x80535138u;
    // 80535138: stw     r0, 284(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053513C:
    ctx->pc = 0x8053513Cu;
    // 8053513C: stw     r0, 288(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535140:
    ctx->pc = 0x80535140u;
    // 80535140: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535144:
    ctx->pc = 0x80535144u;
    // 80535144: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535148:
    ctx->pc = 0x80535148u;
    // 80535148: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053514C:
    // 8053514C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80535150:
    ctx->pc = 0x80535150u;
    // 80535150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535154:
    ctx->pc = 0x80535154u;
    ctx->downcount -= 18;
    // 80535154: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535158:
    ctx->pc = 0x80535158u;
    // 80535158: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053515C:
    // 8053515C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80535160:
    // 80535160: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535164:
    ctx->pc = 0x80535164u;
    // 80535164: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535168:
    ctx->pc = 0x80535168u;
    // 80535168: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053516C:
    // 8053516C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535170:
    // 80535170: bl      0x803715C0
    {
            ctx->lr = 0x80535174u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_80535174:
    ctx->downcount -= 11;
    // 80535174: lis     r6, -32658
    ctx->gpr[6] = ((u32)(s32)(-32658) << 16);

label_80535178:
    // 80535178: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8053517C:
    // 8053517C: addi    r6, r6, 7160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7160);

label_80535180:
    ctx->pc = 0x80535180u;
    // 80535180: stw     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80535184:
    // 80535184: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80535188:
    // 80535188: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8053518C:
    // 8053518C: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80535190:
    ctx->pc = 0x80535190u;
    // 80535190: stw     r5, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80535194:
    ctx->pc = 0x80535194u;
    // 80535194: stw     r4, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535198:
    ctx->pc = 0x80535198u;
    // 80535198: stw     r0, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053519C:
    // 8053519C: bl      0x801C1C6C
    {
            ctx->lr = 0x805351A0u;
            ctx->pc = 0x801C1C6Cu;
            return;
    }

label_805351A0:
    ctx->downcount -= 4;
    // 805351A0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805351A4:
    ctx->pc = 0x805351A4u;
    // 805351A4: stw     r3, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805351A8:
    // 805351A8: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805351AC:
    // 805351AC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805351B0:
    ctx->pc = 0x805351B0u;
    ctx->downcount -= 4;
    // 805351B0: lwz     r4, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805351B4:
    // 805351B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805351B8:
    ctx->pc = 0x805351B8u;
    // 805351B8: stwx    r30, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805351BC:
    // 805351BC: bl      0x8027CCC0
    {
            ctx->lr = 0x805351C0u;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_805351C0:
    ctx->pc = 0x805351C0u;
    ctx->downcount -= 6;
    // 805351C0: lwz     r4, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805351C4:
    // 805351C4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_805351C8:
    // 805351C8: cmpwi   r29, 2
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

label_805351CC:
    ctx->pc = 0x805351CCu;
    // 805351CC: stwx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805351D0:
    // 805351D0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_805351D4:
    // 805351D4: bc    12, 0, 0x805351B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805351B0u;
                return;
            }
            goto label_805351B0;
        }
    }

label_805351D8:
    ctx->downcount -= 17;
    // 805351D8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805351DC:
    ctx->pc = 0x805351DCu;
    // 805351DC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805351E0:
    ctx->pc = 0x805351E0u;
    // 805351E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805351E4:
    ctx->pc = 0x805351E4u;
    // 805351E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805351E8:
    // 805351E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805351EC:
    ctx->pc = 0x805351ECu;
    // 805351EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805351F0:
    ctx->pc = 0x805351F0u;
    ctx->downcount -= 18;
    // 805351F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805351F4:
    ctx->pc = 0x805351F4u;
    // 805351F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805351F8:
    // 805351F8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805351FC:
    ctx->pc = 0x805351FCu;
    // 805351FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535200:
    ctx->pc = 0x80535200u;
    // 80535200: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80535204:
    // 80535204: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535208:
    // 80535208: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8053520C:
    // 8053520C: bc    12, 2, 0x80535240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535240;
        }
    }

label_80535210:
    ctx->downcount -= 1;
    // 80535210: bc    12, 2, 0x80535230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535230;
        }
    }

label_80535214:
    ctx->downcount -= 1;
    // 80535214: bc    12, 2, 0x80535230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535230;
        }
    }

label_80535218:
    ctx->downcount -= 3;
    // 80535218: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053521C:
    // 8053521C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535220:
    // 80535220: bl      0x801F5C24
    {
            ctx->lr = 0x80535224u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80535224:
    ctx->downcount -= 3;
    // 80535224: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535228:
    // 80535228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053522C:
    // 8053522C: bl      0x801F9C70
    {
            ctx->lr = 0x80535230u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80535230:
    ctx->downcount -= 2;
    // 80535230: cmpwi   r31, 0
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

label_80535234:
    // 80535234: bc    4, 1, 0x80535240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535240;
        }
    }

label_80535238:
    ctx->downcount -= 2;
    // 80535238: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8053523C:
    // 8053523C: bl      0x801C1C90
    {
            ctx->lr = 0x80535240u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80535240:
    ctx->downcount -= 17;
    // 80535240: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535244:
    ctx->pc = 0x80535244u;
    // 80535244: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535248:
    ctx->pc = 0x80535248u;
    // 80535248: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053524C:
    ctx->pc = 0x8053524Cu;
    // 8053524C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535250:
    // 80535250: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535254:
    ctx->pc = 0x80535254u;
    // 80535254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535258:
    ctx->downcount -= 2;
    // 80535258: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8053525C:
    // 8053525C: b       0x805351F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805351F0u;
                return;
            }
            goto label_805351F0;
    }

label_80535260:
    ctx->downcount -= 2;
    // 80535260: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80535264:
    // 80535264: b       0x805351F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805351F0u;
                return;
            }
            goto label_805351F0;
    }

label_80535268:
    ctx->downcount -= 2;
    // 80535268: cmpwi   r4, 0
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

label_8053526C:
    ctx->pc = 0x8053526Cu;
    // 8053526C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535270:
    ctx->downcount -= 2;
    // 80535270: cmpwi   r4, 10
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535274:
    // 80535274: bc    4, 1, 0x80535280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535280;
        }
    }

label_80535278:
    ctx->downcount -= 2;
    // 80535278: li      r3, 822
    ctx->gpr[3] = (u32)(s32)(822);

label_8053527C:
    // 8053527C: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80535280:
    ctx->downcount -= 2;
    // 80535280: cmpwi   r4, 5
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

label_80535284:
    // 80535284: bc    4, 1, 0x80535290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535290;
        }
    }

label_80535288:
    ctx->downcount -= 2;
    // 80535288: li      r3, 823
    ctx->gpr[3] = (u32)(s32)(823);

label_8053528C:
    // 8053528C: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80535290:
    ctx->downcount -= 2;
    // 80535290: li      r3, 824
    ctx->gpr[3] = (u32)(s32)(824);

label_80535294:
    // 80535294: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80535298:
    ctx->pc = 0x80535298u;
    ctx->downcount -= 1;
    // 80535298: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053529C:
    ctx->pc = 0x8053529Cu;
    ctx->downcount -= 15;
    // 8053529C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805352A0:
    ctx->pc = 0x805352A0u;
    // 805352A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805352A4:
    // 805352A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805352A8:
    // 805352A8: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_805352AC:
    ctx->pc = 0x805352ACu;
    // 805352AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805352B0:
    // 805352B0: li      r0, 1200
    ctx->gpr[0] = (u32)(s32)(1200);

label_805352B4:
    // 805352B4: li      r7, 20
    ctx->gpr[7] = (u32)(s32)(20);

label_805352B8:
    // 805352B8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805352BC:
    ctx->pc = 0x805352BCu;
    // 805352BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805352C0:
    // 805352C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805352C4:
    // 805352C4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805352C8:
    ctx->pc = 0x805352C8u;
    // 805352C8: sth     r0, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805352CC:
    ctx->pc = 0x805352CCu;
    // 805352CC: lwz     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805352D0:
    // 805352D0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805352D4:
    // 805352D4: bl      0x8026F828
    {
            ctx->lr = 0x805352D8u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_805352D8:
    ctx->downcount -= 3;
    // 805352D8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805352DC:
    // 805352DC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805352E0:
    // 805352E0: bl      0x8026FEDC
    {
            ctx->lr = 0x805352E4u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_805352E4:
    ctx->pc = 0x805352E4u;
    ctx->downcount -= 6;
    // 805352E4: lwz     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805352E8:
    ctx->pc = 0x805352E8u;
    // 805352E8: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805352EC:
    ctx->pc = 0x805352ECu;
    // 805352EC: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805352F0:
    ctx->pc = 0x805352F0u;
    // 805352F0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805352F4:
    ctx->pc = 0x805352F4u;
    // 805352F4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805352F8u;
            ctx->pc = target;
            return;
        }
    }

label_805352F8:
    ctx->pc = 0x805352F8u;
    ctx->downcount -= 22;
    // 805352F8: lha     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805352FC:
    ctx->pc = 0x805352FCu;
    // 805352FC: sth     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535300:
    ctx->pc = 0x80535300u;
    // 80535300: lha     r0, 278(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(278);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535304:
    ctx->pc = 0x80535304u;
    // 80535304: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535308:
    ctx->pc = 0x80535308u;
    // 80535308: lha     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8053530C:
    ctx->pc = 0x8053530Cu;
    // 8053530C: sth     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535310:
    ctx->pc = 0x80535310u;
    // 80535310: lha     r0, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535314:
    ctx->pc = 0x80535314u;
    // 80535314: sth     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535318:
    ctx->pc = 0x80535318u;
    // 80535318: lha     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8053531C:
    ctx->pc = 0x8053531Cu;
    // 8053531C: sth     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535320:
    ctx->pc = 0x80535320u;
    // 80535320: lha     r0, 286(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535324:
    ctx->pc = 0x80535324u;
    // 80535324: sth     r0, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535328:
    ctx->pc = 0x80535328u;
    // 80535328: lha     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8053532C:
    ctx->pc = 0x8053532Cu;
    // 8053532C: sth     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535330:
    ctx->pc = 0x80535330u;
    // 80535330: lha     r0, 290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(290);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535334:
    ctx->pc = 0x80535334u;
    // 80535334: sth     r0, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535338:
    ctx->pc = 0x80535338u;
    // 80535338: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8053533C:
    ctx->pc = 0x8053533Cu;
    // 8053533C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535340:
    ctx->pc = 0x80535340u;
    // 80535340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535344:
    // 80535344: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535348:
    ctx->pc = 0x80535348u;
    // 80535348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053534C:
    ctx->pc = 0x8053534Cu;
    ctx->downcount -= 19;
    // 8053534C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535350:
    ctx->pc = 0x80535350u;
    // 80535350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535354:
    ctx->pc = 0x80535354u;
    // 80535354: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535358:
    ctx->pc = 0x80535358u;
    // 80535358: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053535C:
    // 8053535C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80535360:
    // 80535360: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535364:
    // 80535364: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535368:
    ctx->pc = 0x80535368u;
    // 80535368: lwz     r4, -22136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8053536C:
    // 8053536C: bl      0x8026F958
    {
            ctx->lr = 0x80535370u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_80535370:
    ctx->downcount -= 5;
    // 80535370: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535374:
    // 80535374: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535378:
    // 80535378: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8053537C:
    // 8053537C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80535380:
    // 80535380: bl      0x8026F720
    {
            ctx->lr = 0x80535384u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_80535384:
    ctx->pc = 0x80535384u;
    ctx->downcount -= 16;
    // 80535384: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535388:
    ctx->pc = 0x80535388u;
    // 80535388: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053538C:
    ctx->pc = 0x8053538Cu;
    // 8053538C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535390:
    // 80535390: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535394:
    ctx->pc = 0x80535394u;
    // 80535394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535398:
    ctx->downcount -= 3;
    // 80535398: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8053539C:
    ctx->pc = 0x8053539Cu;
    // 8053539C: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805353A0:
    ctx->pc = 0x805353A0u;
    // 805353A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805353A4:
    ctx->downcount -= 3;
    // 805353A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805353A8:
    ctx->pc = 0x805353A8u;
    // 805353A8: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805353AC:
    ctx->pc = 0x805353ACu;
    // 805353AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805353B0:
    ctx->pc = 0x805353B0u;
    ctx->downcount -= 18;
    // 805353B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805353B4:
    ctx->pc = 0x805353B4u;
    // 805353B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805353B8:
    ctx->pc = 0x805353B8u;
    // 805353B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805353BC:
    ctx->pc = 0x805353BCu;
    // 805353BC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805353C0:
    // 805353C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805353C4:
    ctx->pc = 0x805353C4u;
    // 805353C4: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805353C8:
    // 805353C8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805353CC:
    // 805353CC: bc    12, 2, 0x80535470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535470;
        }
    }

label_805353D0:
    ctx->pc = 0x805353D0u;
    ctx->downcount -= 3;
    // 805353D0: lhz     r4, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_805353D4:
    // 805353D4: cmpwi   r4, 0
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

label_805353D8:
    // 805353D8: bc    12, 2, 0x805353E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805353E4;
        }
    }

label_805353DC:
    ctx->downcount -= 2;
    // 805353DC: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_805353E0:
    ctx->pc = 0x805353E0u;
    // 805353E0: sth     r0, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805353E4:
    ctx->pc = 0x805353E4u;
    ctx->downcount -= 49;
    // 805353E4: lhz     r5, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_805353E8:
    // 805353E8: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_805353EC:
    // 805353EC: divw   r4, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_805353F0:
    // 805353F0: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_805353F4:
    // 805353F4: subf.   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
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

label_805353F8:
    // 805353F8: bc    4, 2, 0x80535470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535470;
        }
    }

label_805353FC:
    ctx->downcount -= 2;
    // 805353FC: cmpwi   r4, 5
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

label_80535400:
    // 80535400: bc    12, 1, 0x80535424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535424;
        }
    }

label_80535404:
    ctx->downcount -= 4;
    // 80535404: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80535408:
    // 80535408: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8053540C:
    // 8053540C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535410:
    // 80535410: bl      0x8026FEF0
    {
            ctx->lr = 0x80535414u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535414:
    ctx->downcount -= 3;
    // 80535414: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535418:
    // 80535418: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8053541C:
    // 8053541C: bl      0x8026F6AC
    {
            ctx->lr = 0x80535420u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535420:
    ctx->downcount -= 1;
    // 80535420: bl      0x8025EC94
    {
            ctx->lr = 0x80535424u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80535424:
    ctx->pc = 0x80535424u;
    ctx->downcount -= 3;
    // 80535424: lhz     r0, 274(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80535428:
    // 80535428: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053542C:
    // 8053542C: bc    4, 2, 0x80535438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535438;
        }
    }

label_80535430:
    ctx->downcount -= 2;
    // 80535430: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535434:
    ctx->pc = 0x80535434u;
    // 80535434: stb     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535438:
    ctx->pc = 0x80535438u;
    ctx->downcount -= 49;
    // 80535438: lhz     r0, 274(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8053543C:
    // 8053543C: li      r31, 60
    ctx->gpr[31] = (u32)(s32)(60);

label_80535440:
    ctx->pc = 0x80535440u;
    // 80535440: lwz     r4, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80535444:
    // 80535444: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535448:
    // 80535448: divw   r7, r0, r31
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8053544C:
    // 8053544C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535450:
    // 80535450: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80535454:
    // 80535454: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80535458:
    // 80535458: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8053545C:
    // 8053545C: bl      0x8026F828
    {
            ctx->lr = 0x80535460u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80535460:
    ctx->pc = 0x80535460u;
    ctx->downcount -= 43;
    // 80535460: lhz     r0, 274(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80535464:
    // 80535464: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535468:
    // 80535468: divw   r4, r0, r31
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8053546C:
    // 8053546C: bl      0x80535268
    {
            ctx->lr = 0x80535470u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535268u;
                return;
            }
            goto label_80535268;
    }

label_80535470:
    ctx->pc = 0x80535470u;
    ctx->downcount -= 16;
    // 80535470: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535474:
    ctx->pc = 0x80535474u;
    // 80535474: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535478:
    ctx->pc = 0x80535478u;
    // 80535478: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053547C:
    // 8053547C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535480:
    ctx->pc = 0x80535480u;
    // 80535480: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535484:
    ctx->pc = 0x80535484u;
    ctx->downcount -= 5;
    // 80535484: lhz     r0, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80535488:
    // 80535488: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053548C:
    ctx->pc = 0x8053548Cu;
    // 8053548C: stb     r4, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80535490:
    // 80535490: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535494:
    ctx->pc = 0x80535494u;
    // 80535494: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535498:
    ctx->downcount -= 1;
    // 80535498: b       0x8053529C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053529Cu;
                return;
            }
            goto label_8053529C;
    }

label_8053549C:
    ctx->pc = 0x8053549Cu;
    ctx->downcount -= 1;
    // 8053549C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805354A0:
    ctx->pc = 0x805354A0u;
    ctx->downcount -= 24;
    // 805354A0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805354A4:
    ctx->pc = 0x805354A4u;
    // 805354A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805354A8:
    // 805354A8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805354AC:
    // 805354AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805354B0:
    ctx->pc = 0x805354B0u;
    // 805354B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805354B4:
    // 805354B4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805354B8:
    ctx->pc = 0x805354B8u;
    // 805354B8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805354BC:
    // 805354BC: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_805354C0:
    // 805354C0: addi    r31, r31, 16872
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16872);

label_805354C4:
    // 805354C4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805354C8:
    // 805354C8: addi    r4, r31, 21
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21);

label_805354CC:
    // 805354CC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805354D0:
    // 805354D0: addi    r5, r31, 34
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(34);

label_805354D4:
    // 805354D4: bl      0x802703A8
    {
            ctx->lr = 0x805354D8u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_805354D8:
    ctx->downcount -= 6;
    // 805354D8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805354DC:
    // 805354DC: addi    r5, r31, 55
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(55);

label_805354E0:
    // 805354E0: addi    r6, r31, 58
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(58);

label_805354E4:
    // 805354E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805354E8:
    // 805354E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805354EC:
    // 805354EC: bl      0x8027035C
    {
            ctx->lr = 0x805354F0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805354F0:
    ctx->downcount -= 6;
    // 805354F0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805354F4:
    // 805354F4: addi    r5, r31, 69
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(69);

label_805354F8:
    // 805354F8: addi    r6, r31, 58
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(58);

label_805354FC:
    // 805354FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535500:
    // 80535500: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535504:
    // 80535504: bl      0x8027035C
    {
            ctx->lr = 0x80535508u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80535508:
    ctx->downcount -= 6;
    // 80535508: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8053550C:
    // 8053550C: addi    r5, r31, 73
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(73);

label_80535510:
    // 80535510: addi    r6, r31, 79
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(79);

label_80535514:
    // 80535514: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80535518:
    // 80535518: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8053551C:
    // 8053551C: bl      0x8027035C
    {
            ctx->lr = 0x80535520u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80535520:
    ctx->downcount -= 4;
    // 80535520: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535524:
    // 80535524: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535528:
    // 80535528: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8053552C:
    // 8053552C: bl      0x8026FEF0
    {
            ctx->lr = 0x80535530u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535530:
    ctx->downcount -= 3;
    // 80535530: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535534:
    // 80535534: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535538:
    // 80535538: bl      0x8026F6AC
    {
            ctx->lr = 0x8053553Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8053553C:
    ctx->downcount -= 1;
    // 8053553C: bl      0x8025ED28
    {
            ctx->lr = 0x80535540u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535540:
    ctx->downcount -= 4;
    // 80535540: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535544:
    // 80535544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535548:
    // 80535548: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8053554C:
    // 8053554C: bl      0x8026FEF0
    {
            ctx->lr = 0x80535550u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535550:
    ctx->downcount -= 3;
    // 80535550: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535554:
    // 80535554: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535558:
    // 80535558: bl      0x8026F6AC
    {
            ctx->lr = 0x8053555Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8053555C:
    ctx->downcount -= 1;
    // 8053555C: bl      0x8025ED28
    {
            ctx->lr = 0x80535560u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535560:
    ctx->downcount -= 4;
    // 80535560: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535564:
    // 80535564: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535568:
    // 80535568: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8053556C:
    // 8053556C: bl      0x80270194
    {
            ctx->lr = 0x80535570u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80535570:
    ctx->pc = 0x80535570u;
    ctx->downcount -= 3;
    // 80535570: lwz     r4, -22132(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80535574:
    // 80535574: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535578:
    // 80535578: bl      0x8026F968
    {
            ctx->lr = 0x8053557Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8053557C:
    ctx->pc = 0x8053557Cu;
    ctx->downcount -= 6;
    // 8053557C: stw     r3, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80535580:
    ctx->pc = 0x80535580u;
    // 80535580: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535584:
    ctx->pc = 0x80535584u;
    // 80535584: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535588:
    ctx->pc = 0x80535588u;
    // 80535588: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053558C:
    ctx->pc = 0x8053558Cu;
    // 8053558C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535590u;
            ctx->pc = target;
            return;
        }
    }

label_80535590:
    ctx->pc = 0x80535590u;
    ctx->downcount -= 26;
    // 80535590: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535594:
    ctx->pc = 0x80535594u;
    // 80535594: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535598:
    ctx->pc = 0x80535598u;
    // 80535598: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053559C:
    ctx->pc = 0x8053559Cu;
    // 8053559C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805355A0:
    ctx->pc = 0x805355A0u;
    // 805355A0: lha     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355A4:
    ctx->pc = 0x805355A4u;
    // 805355A4: lha     r5, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355A8:
    ctx->pc = 0x805355A8u;
    // 805355A8: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355AC:
    ctx->pc = 0x805355ACu;
    // 805355AC: lha     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355B0:
    ctx->pc = 0x805355B0u;
    // 805355B0: sth     r6, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_805355B4:
    ctx->pc = 0x805355B4u;
    // 805355B4: sth     r5, 278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(278);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_805355B8:
    ctx->pc = 0x805355B8u;
    // 805355B8: sth     r4, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_805355BC:
    ctx->pc = 0x805355BCu;
    // 805355BC: sth     r0, 282(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(282);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805355C0:
    ctx->pc = 0x805355C0u;
    // 805355C0: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805355C4:
    ctx->pc = 0x805355C4u;
    // 805355C4: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805355C8:
    // 805355C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805355CC:
    ctx->pc = 0x805355CCu;
    // 805355CC: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805355D0:
    ctx->pc = 0x805355D0u;
    // 805355D0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805355D4:
    ctx->pc = 0x805355D4u;
    // 805355D4: lha     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355D8:
    ctx->pc = 0x805355D8u;
    // 805355D8: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355DC:
    ctx->pc = 0x805355DCu;
    // 805355DC: lha     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355E0:
    ctx->pc = 0x805355E0u;
    // 805355E0: lha     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_805355E4:
    ctx->pc = 0x805355E4u;
    // 805355E4: sth     r6, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_805355E8:
    ctx->pc = 0x805355E8u;
    // 805355E8: sth     r5, 286(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_805355EC:
    ctx->pc = 0x805355ECu;
    // 805355EC: sth     r4, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_805355F0:
    ctx->pc = 0x805355F0u;
    // 805355F0: sth     r0, 290(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805355F4:
    // 805355F4: bl      0x8053529C
    {
            ctx->lr = 0x805355F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053529Cu;
                return;
            }
            goto label_8053529C;
    }

label_805355F8:
    ctx->downcount -= 3;
    // 805355F8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805355FC:
    // 805355FC: addi    r4, r31, 90
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(90);

label_80535600:
    // 80535600: bl      0x8026F970
    {
            ctx->lr = 0x80535604u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80535604:
    ctx->pc = 0x80535604u;
    ctx->downcount -= 19;
    // 80535604: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80535608:
    // 80535608: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8053560C:
    ctx->pc = 0x8053560Cu;
    // 8053560C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535610:
    ctx->pc = 0x80535610u;
    // 80535610: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535614:
    ctx->pc = 0x80535614u;
    // 80535614: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535618:
    ctx->pc = 0x80535618u;
    // 80535618: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053561C:
    // 8053561C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80535620:
    ctx->pc = 0x80535620u;
    // 80535620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535624:
    ctx->pc = 0x80535624u;
    ctx->downcount -= 8;
    // 80535624: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535628:
    ctx->pc = 0x80535628u;
    // 80535628: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053562C:
    // 8053562C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80535630:
    // 80535630: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535634:
    ctx->pc = 0x80535634u;
    // 80535634: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535638:
    ctx->pc = 0x80535638u;
    // 80535638: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053563C:
    // 8053563C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535640:
    // 80535640: bl      0x803715C0
    {
            ctx->lr = 0x80535644u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_80535644:
    ctx->downcount -= 18;
    // 80535644: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80535648:
    // 80535648: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8053564C:
    // 8053564C: addi    r4, r4, 7448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7448);

label_80535650:
    ctx->pc = 0x80535650u;
    // 80535650: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535654:
    // 80535654: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80535658:
    // 80535658: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053565C:
    // 8053565C: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_80535660:
    // 80535660: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80535664:
    ctx->pc = 0x80535664u;
    // 80535664: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80535668:
    ctx->pc = 0x80535668u;
    // 80535668: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8053566C:
    ctx->pc = 0x8053566Cu;
    // 8053566C: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535670:
    ctx->pc = 0x80535670u;
    // 80535670: sth     r0, 274(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(274);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535674:
    ctx->pc = 0x80535674u;
    // 80535674: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535678:
    ctx->pc = 0x80535678u;
    // 80535678: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053567C:
    ctx->pc = 0x8053567Cu;
    // 8053567C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535680:
    // 80535680: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535684:
    ctx->pc = 0x80535684u;
    // 80535684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535688:
    ctx->pc = 0x80535688u;
    ctx->downcount -= 18;
    // 80535688: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8053568C:
    ctx->pc = 0x8053568Cu;
    // 8053568C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535690:
    // 80535690: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535694:
    ctx->pc = 0x80535694u;
    // 80535694: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535698:
    ctx->pc = 0x80535698u;
    // 80535698: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053569C:
    // 8053569C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805356A0:
    // 805356A0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805356A4:
    // 805356A4: bc    12, 2, 0x805356D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805356D8;
        }
    }

label_805356A8:
    ctx->downcount -= 1;
    // 805356A8: bc    12, 2, 0x805356C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805356C8;
        }
    }

label_805356AC:
    ctx->downcount -= 1;
    // 805356AC: bc    12, 2, 0x805356C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805356C8;
        }
    }

label_805356B0:
    ctx->downcount -= 3;
    // 805356B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805356B4:
    // 805356B4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805356B8:
    // 805356B8: bl      0x801F5C24
    {
            ctx->lr = 0x805356BCu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805356BC:
    ctx->downcount -= 3;
    // 805356BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805356C0:
    // 805356C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805356C4:
    // 805356C4: bl      0x801F9C70
    {
            ctx->lr = 0x805356C8u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_805356C8:
    ctx->downcount -= 2;
    // 805356C8: cmpwi   r31, 0
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

label_805356CC:
    // 805356CC: bc    4, 1, 0x805356D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805356D8;
        }
    }

label_805356D0:
    ctx->downcount -= 2;
    // 805356D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805356D4:
    // 805356D4: bl      0x801C1C90
    {
            ctx->lr = 0x805356D8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805356D8:
    ctx->downcount -= 17;
    // 805356D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805356DC:
    ctx->pc = 0x805356DCu;
    // 805356DC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805356E0:
    ctx->pc = 0x805356E0u;
    // 805356E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805356E4:
    ctx->pc = 0x805356E4u;
    // 805356E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805356E8:
    // 805356E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805356EC:
    ctx->pc = 0x805356ECu;
    // 805356EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805356F0:
    ctx->downcount -= 2;
    // 805356F0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805356F4:
    // 805356F4: b       0x80535688
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535688u;
                return;
            }
            goto label_80535688;
    }

label_805356F8:
    ctx->downcount -= 2;
    // 805356F8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805356FC:
    // 805356FC: b       0x80535688
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535688u;
                return;
            }
            goto label_80535688;
    }

label_80535700:
    ctx->pc = 0x80535700u;
    ctx->downcount -= 8;
    // 80535700: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535704:
    ctx->pc = 0x80535704u;
    // 80535704: lwz     r5, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80535708:
    ctx->pc = 0x80535708u;
    // 80535708: lwz     r4, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8053570C:
    // 8053570C: mulli   r0, r5, 60
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)60);

label_80535710:
    // 80535710: cmplw   r4, r0
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

label_80535714:
    // 80535714: bc    4, 1, 0x80535748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535748;
        }
    }

label_80535718:
    ctx->downcount -= 53;
    // 80535718: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8053571C:
    // 8053571C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80535720:
    // 80535720: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80535724:
    ctx->pc = 0x80535724u;
    // 80535724: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535728:
    // 80535728: mulli   r0, r4, 10
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)10);

label_8053572C:
    ctx->pc = 0x8053572Cu;
    // 8053572C: lfd     f1, 17192(r2)
    if (!ppc_fp_available_inline(ctx, 0x8053572Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17192);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80535730:
    // 80535730: divwu   r0, r0, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[0] / divisor;
    }

label_80535734:
    ctx->pc = 0x80535734u;
    // 80535734: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535738:
    ctx->pc = 0x80535738u;
    // 80535738: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80535738u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8053573C:
    ctx->pc = 0x8053573Cu;
    // 8053573C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8053573Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80535740:
    ctx->pc = 0x80535740u;
    // 80535740: stfs     f0, 284(r3)
    if (!ppc_fp_available_inline(ctx, 0x80535740u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80535744:
    // 80535744: b       0x80535774
    {
            goto label_80535774;
    }

label_80535748:
    ctx->downcount -= 52;
    // 80535748: mulli   r4, r4, 10
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)10);

label_8053574C:
    // 8053574C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80535750:
    ctx->pc = 0x80535750u;
    // 80535750: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535754:
    ctx->pc = 0x80535754u;
    // 80535754: lfd     f1, 17192(r2)
    if (!ppc_fp_available_inline(ctx, 0x80535754u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17192);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80535758:
    // 80535758: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8053575C:
    // 8053575C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80535760:
    // 80535760: divwu   r0, r0, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[0] / divisor;
    }

label_80535764:
    ctx->pc = 0x80535764u;
    // 80535764: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535768:
    ctx->pc = 0x80535768u;
    // 80535768: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80535768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8053576C:
    ctx->pc = 0x8053576Cu;
    // 8053576C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8053576Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80535770:
    ctx->pc = 0x80535770u;
    // 80535770: stfs     f0, 284(r3)
    if (!ppc_fp_available_inline(ctx, 0x80535770u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80535774:
    ctx->downcount -= 2;
    // 80535774: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535778:
    ctx->pc = 0x80535778u;
    // 80535778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053577C:
    ctx->pc = 0x8053577Cu;
    ctx->downcount -= 8;
    // 8053577C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535780:
    ctx->pc = 0x80535780u;
    // 80535780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535784:
    ctx->pc = 0x80535784u;
    // 80535784: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535788:
    ctx->pc = 0x80535788u;
    // 80535788: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053578C:
    // 8053578C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535790:
    ctx->pc = 0x80535790u;
    // 80535790: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80535794:
    // 80535794: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535798:
    // 80535798: bc    12, 2, 0x8053584C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053584C;
        }
    }

label_8053579C:
    ctx->pc = 0x8053579Cu;
    ctx->downcount -= 3;
    // 8053579C: lwz     r4, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805357A0:
    // 805357A0: cmpwi   r4, 0
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

label_805357A4:
    // 805357A4: bc    12, 2, 0x8053584C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053584C;
        }
    }

label_805357A8:
    ctx->pc = 0x805357A8u;
    ctx->downcount -= 48;
    // 805357A8: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805357AC:
    // 805357AC: divwu   r3, r4, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[3] = divisor == 0 ? 0u : ctx->gpr[4] / divisor;
    }

label_805357B0:
    // 805357B0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_805357B4:
    // 805357B4: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_805357B8:
    // 805357B8: bc    4, 2, 0x805357E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805357E0;
        }
    }

label_805357BC:
    ctx->downcount -= 2;
    // 805357BC: cmplwi  r3, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805357C0:
    // 805357C0: bc    12, 1, 0x805357D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805357D0;
        }
    }

label_805357C4:
    ctx->downcount -= 2;
    // 805357C4: li      r3, 882
    ctx->gpr[3] = (u32)(s32)(882);

label_805357C8:
    // 805357C8: bl      0x802B73BC
    {
            ctx->lr = 0x805357CCu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805357CC:
    ctx->downcount -= 1;
    // 805357CC: b       0x805357E0
    {
            goto label_805357E0;
    }

label_805357D0:
    ctx->downcount -= 2;
    // 805357D0: cmplwi  r3, 0x000A
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x000Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805357D4:
    // 805357D4: bc    12, 1, 0x805357E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805357E0;
        }
    }

label_805357D8:
    ctx->downcount -= 2;
    // 805357D8: li      r3, 881
    ctx->gpr[3] = (u32)(s32)(881);

label_805357DC:
    // 805357DC: bl      0x802B73BC
    {
            ctx->lr = 0x805357E0u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805357E0:
    ctx->pc = 0x805357E0u;
    ctx->downcount -= 47;
    // 805357E0: lwz     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805357E4:
    ctx->pc = 0x805357E4u;
    // 805357E4: lwz     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805357E8:
    // 805357E8: mulli   r3, r3, 10
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)10);

label_805357EC:
    // 805357EC: divwu   r0, r3, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_805357F0:
    // 805357F0: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805357F4:
    // 805357F4: bc    4, 2, 0x80535824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535824;
        }
    }

label_805357F8:
    ctx->pc = 0x805357F8u;
    ctx->downcount -= 3;
    // 805357F8: lbz     r0, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805357FC:
    // 805357FC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535800:
    // 80535800: bc    4, 2, 0x80535818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535818;
        }
    }

label_80535804:
    ctx->pc = 0x80535804u;
    ctx->downcount -= 3;
    // 80535804: lbz     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80535808:
    // 80535808: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053580C:
    // 8053580C: bc    4, 2, 0x80535818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535818;
        }
    }

label_80535810:
    ctx->downcount -= 2;
    // 80535810: li      r3, 884
    ctx->gpr[3] = (u32)(s32)(884);

label_80535814:
    // 80535814: bl      0x802B73BC
    {
            ctx->lr = 0x80535818u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80535818:
    ctx->downcount -= 3;
    // 80535818: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8053581C:
    ctx->pc = 0x8053581Cu;
    // 8053581C: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535820:
    // 80535820: b       0x8053584C
    {
            goto label_8053584C;
    }

label_80535824:
    ctx->pc = 0x80535824u;
    ctx->downcount -= 3;
    // 80535824: lbz     r0, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80535828:
    // 80535828: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053582C:
    // 8053582C: bc    4, 2, 0x80535844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535844;
        }
    }

label_80535830:
    ctx->pc = 0x80535830u;
    ctx->downcount -= 3;
    // 80535830: lbz     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80535834:
    // 80535834: cmplwi  r0, 0x0001
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

label_80535838:
    // 80535838: bc    4, 2, 0x80535844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535844;
        }
    }

label_8053583C:
    ctx->downcount -= 2;
    // 8053583C: li      r3, 885
    ctx->gpr[3] = (u32)(s32)(885);

label_80535840:
    // 80535840: bl      0x802B73BC
    {
            ctx->lr = 0x80535844u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80535844:
    ctx->downcount -= 2;
    // 80535844: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535848:
    ctx->pc = 0x80535848u;
    // 80535848: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8053584C:
    ctx->pc = 0x8053584Cu;
    ctx->downcount -= 6;
    // 8053584C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535850:
    ctx->pc = 0x80535850u;
    // 80535850: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535854:
    ctx->pc = 0x80535854u;
    // 80535854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535858:
    // 80535858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053585C:
    ctx->pc = 0x8053585Cu;
    // 8053585C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535860:
    ctx->pc = 0x80535860u;
    ctx->downcount -= 6;
    // 80535860: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535864:
    ctx->pc = 0x80535864u;
    // 80535864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535868:
    ctx->pc = 0x80535868u;
    // 80535868: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053586C:
    ctx->pc = 0x8053586Cu;
    // 8053586C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535870:
    // 80535870: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535874:
    // 80535874: bl      0x80535700
    {
            ctx->lr = 0x80535878u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535700u;
                return;
            }
            goto label_80535700;
    }

label_80535878:
    ctx->pc = 0x80535878u;
    ctx->downcount -= 7;
    // 80535878: lwz     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053587C:
    ctx->pc = 0x8053587Cu;
    // 8053587C: lwz     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535880:
    // 80535880: mulli   r0, r0, 60
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)60);

label_80535884:
    // 80535884: cmplw   r3, r0
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

label_80535888:
    // 80535888: bc    4, 1, 0x805358E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805358E4;
        }
    }

label_8053588C:
    ctx->pc = 0x8053588Cu;
    ctx->downcount -= 13;
    // 8053588C: lfs     f1, 17200(r2)
    if (!ppc_fp_available_inline(ctx, 0x8053588Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80535890:
    // 80535890: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80535894:
    ctx->pc = 0x80535894u;
    // 80535894: lfs     f0, 284(r31)
    if (!ppc_fp_available_inline(ctx, 0x80535894u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80535898:
    // 80535898: li      r5, 19
    ctx->gpr[5] = (u32)(s32)(19);

label_8053589C:
    ctx->pc = 0x8053589Cu;
    // 8053589C: lwz     r4, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805358A0:
    // 805358A0: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_805358A4:
    ctx->pc = 0x805358A4u;
    // 805358A4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x805358A4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_805358A8:
    // 805358A8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805358AC:
    // 805358AC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805358B0:
    ctx->pc = 0x805358B0u;
    // 805358B0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x805358B0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_805358B4:
    ctx->pc = 0x805358B4u;
    // 805358B4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805358B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_805358B8:
    ctx->pc = 0x805358B8u;
    // 805358B8: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_805358BC:
    // 805358BC: bl      0x8026F828
    {
            ctx->lr = 0x805358C0u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_805358C0:
    ctx->pc = 0x805358C0u;
    ctx->downcount -= 49;
    // 805358C0: lwz     r4, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805358C4:
    ctx->pc = 0x805358C4u;
    // 805358C4: lwz     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805358C8:
    // 805358C8: divwu   r0, r4, r3
    {
        u32 divisor = ctx->gpr[3];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[4] / divisor;
    }

label_805358CC:
    // 805358CC: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_805358D0:
    // 805358D0: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_805358D4:
    // 805358D4: bc    4, 2, 0x80535938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535938;
        }
    }

label_805358D8:
    ctx->downcount -= 2;
    // 805358D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805358DC:
    // 805358DC: bl      0x8053577C
    {
            ctx->lr = 0x805358E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053577Cu;
                return;
            }
            goto label_8053577C;
    }

label_805358E0:
    ctx->downcount -= 1;
    // 805358E0: b       0x80535938
    {
            goto label_80535938;
    }

label_805358E4:
    ctx->pc = 0x805358E4u;
    ctx->downcount -= 11;
    // 805358E4: lfs     f0, 284(r31)
    if (!ppc_fp_available_inline(ctx, 0x805358E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805358E8:
    // 805358E8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805358EC:
    ctx->pc = 0x805358ECu;
    // 805358EC: lwz     r4, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805358F0:
    // 805358F0: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_805358F4:
    ctx->pc = 0x805358F4u;
    // 805358F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x805358F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_805358F8:
    // 805358F8: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_805358FC:
    // 805358FC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80535900:
    // 80535900: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80535904:
    ctx->pc = 0x80535904u;
    // 80535904: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80535904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80535908:
    ctx->pc = 0x80535908u;
    // 80535908: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8053590C:
    // 8053590C: bl      0x8026F828
    {
            ctx->lr = 0x80535910u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80535910:
    ctx->pc = 0x80535910u;
    ctx->downcount -= 53;
    // 80535910: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535914:
    ctx->pc = 0x80535914u;
    // 80535914: lwz     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535918:
    // 80535918: mulli   r4, r0, 10
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_8053591C:
    // 8053591C: divwu   r0, r4, r3
    {
        u32 divisor = ctx->gpr[3];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[4] / divisor;
    }

label_80535920:
    // 80535920: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_80535924:
    // 80535924: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80535928:
    // 80535928: cmplwi  r0, 0x000A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053592C:
    // 8053592C: bc    4, 0, 0x80535938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535938;
        }
    }

label_80535930:
    ctx->downcount -= 2;
    // 80535930: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535934:
    // 80535934: bl      0x8053577C
    {
            ctx->lr = 0x80535938u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053577Cu;
                return;
            }
            goto label_8053577C;
    }

label_80535938:
    ctx->pc = 0x80535938u;
    ctx->downcount -= 6;
    // 80535938: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053593C:
    ctx->pc = 0x8053593Cu;
    // 8053593C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535940:
    ctx->pc = 0x80535940u;
    // 80535940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535944:
    // 80535944: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80535948:
    ctx->pc = 0x80535948u;
    // 80535948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053594C:
    ctx->downcount -= 3;
    // 8053594C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535950:
    ctx->pc = 0x80535950u;
    // 80535950: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535954:
    ctx->pc = 0x80535954u;
    // 80535954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535958:
    ctx->downcount -= 3;
    // 80535958: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8053595C:
    ctx->pc = 0x8053595Cu;
    // 8053595C: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535960:
    ctx->pc = 0x80535960u;
    // 80535960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535964:
    ctx->downcount -= 8;
    // 80535964: mullw   r0, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80535968:
    ctx->pc = 0x80535968u;
    // 80535968: stw     r5, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8053596C:
    ctx->pc = 0x8053596Cu;
    // 8053596C: stw     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535970:
    // 80535970: b       0x80535700
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535700u;
                return;
            }
            goto label_80535700;
    }

label_80535974:
    ctx->pc = 0x80535974u;
    ctx->downcount -= 8;
    // 80535974: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535978:
    ctx->pc = 0x80535978u;
    // 80535978: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053597C:
    ctx->pc = 0x8053597Cu;
    // 8053597C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535980:
    ctx->pc = 0x80535980u;
    // 80535980: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535984:
    // 80535984: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535988:
    ctx->pc = 0x80535988u;
    // 80535988: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8053598C:
    // 8053598C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535990:
    // 80535990: bc    12, 2, 0x805359B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805359B0;
        }
    }

label_80535994:
    ctx->pc = 0x80535994u;
    ctx->downcount -= 3;
    // 80535994: lwz     r4, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80535998:
    // 80535998: cmpwi   r4, 0
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

label_8053599C:
    // 8053599C: bc    12, 2, 0x805359A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805359A8;
        }
    }

label_805359A0:
    ctx->downcount -= 2;
    // 805359A0: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_805359A4:
    ctx->pc = 0x805359A4u;
    // 805359A4: stw     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805359A8:
    ctx->downcount -= 2;
    // 805359A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805359AC:
    // 805359AC: bl      0x80535860
    {
            ctx->lr = 0x805359B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535860u;
                return;
            }
            goto label_80535860;
    }

label_805359B0:
    ctx->pc = 0x805359B0u;
    ctx->downcount -= 7;
    // 805359B0: lwz     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805359B4:
    ctx->pc = 0x805359B4u;
    // 805359B4: lwz     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805359B8:
    // 805359B8: mulli   r0, r0, 10
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_805359BC:
    // 805359BC: cmplw   r3, r0
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

label_805359C0:
    // 805359C0: bc    4, 2, 0x805359E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805359E4;
        }
    }

label_805359C4:
    ctx->downcount -= 4;
    // 805359C4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805359C8:
    // 805359C8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805359CC:
    // 805359CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805359D0:
    // 805359D0: bl      0x8026FEF0
    {
            ctx->lr = 0x805359D4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805359D4:
    ctx->downcount -= 3;
    // 805359D4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805359D8:
    // 805359D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805359DC:
    // 805359DC: bl      0x8026F6AC
    {
            ctx->lr = 0x805359E0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805359E0:
    ctx->downcount -= 1;
    // 805359E0: bl      0x8025EC94
    {
            ctx->lr = 0x805359E4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805359E4:
    ctx->pc = 0x805359E4u;
    ctx->downcount -= 6;
    // 805359E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805359E8:
    ctx->pc = 0x805359E8u;
    // 805359E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805359EC:
    ctx->pc = 0x805359ECu;
    // 805359EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805359F0:
    // 805359F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805359F4:
    ctx->pc = 0x805359F4u;
    // 805359F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805359F8:
    ctx->pc = 0x805359F8u;
    ctx->downcount -= 12;
    // 805359F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805359FC:
    ctx->pc = 0x805359FCu;
    // 805359FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535A00:
    ctx->pc = 0x80535A00u;
    // 80535A00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535A04:
    ctx->pc = 0x80535A04u;
    // 80535A04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535A08:
    // 80535A08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535A0C:
    ctx->pc = 0x80535A0Cu;
    // 80535A0C: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535A10:
    ctx->pc = 0x80535A10u;
    // 80535A10: lwz     r4, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80535A14:
    // 80535A14: mulli   r0, r0, 10
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_80535A18:
    // 80535A18: cmplw   r4, r0
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

label_80535A1C:
    // 80535A1C: bc    12, 1, 0x80535A44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535A44;
        }
    }

label_80535A20:
    ctx->downcount -= 4;
    // 80535A20: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80535A24:
    // 80535A24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535A28:
    // 80535A28: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535A2C:
    // 80535A2C: bl      0x8026FEF0
    {
            ctx->lr = 0x80535A30u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535A30:
    ctx->downcount -= 3;
    // 80535A30: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80535A34:
    // 80535A34: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80535A38:
    // 80535A38: bl      0x8026F6AC
    {
            ctx->lr = 0x80535A3Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535A3C:
    ctx->downcount -= 1;
    // 80535A3C: bl      0x8025EC94
    {
            ctx->lr = 0x80535A40u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80535A40:
    ctx->downcount -= 1;
    // 80535A40: b       0x80535A98
    {
            goto label_80535A98;
    }

label_80535A44:
    ctx->pc = 0x80535A44u;
    ctx->downcount -= 6;
    // 80535A44: lwz     r3, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535A48:
    ctx->pc = 0x80535A48u;
    // 80535A48: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535A4C:
    ctx->pc = 0x80535A4Cu;
    // 80535A4C: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535A50:
    ctx->pc = 0x80535A50u;
    // 80535A50: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535A54:
    ctx->pc = 0x80535A54u;
    // 80535A54: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535A58u;
            ctx->pc = target;
            return;
        }
    }

label_80535A58:
    ctx->pc = 0x80535A58u;
    ctx->downcount -= 16;
    // 80535A58: lha     r0, 290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(290);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A5C:
    ctx->pc = 0x80535A5Cu;
    // 80535A5C: sth     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A60:
    ctx->pc = 0x80535A60u;
    // 80535A60: lha     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A64:
    ctx->pc = 0x80535A64u;
    // 80535A64: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A68:
    ctx->pc = 0x80535A68u;
    // 80535A68: lha     r0, 294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(294);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A6C:
    ctx->pc = 0x80535A6Cu;
    // 80535A6C: sth     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A70:
    ctx->pc = 0x80535A70u;
    // 80535A70: lha     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A74:
    ctx->pc = 0x80535A74u;
    // 80535A74: sth     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A78:
    ctx->pc = 0x80535A78u;
    // 80535A78: lha     r0, 298(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A7C:
    ctx->pc = 0x80535A7Cu;
    // 80535A7C: sth     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A80:
    ctx->pc = 0x80535A80u;
    // 80535A80: lha     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A84:
    ctx->pc = 0x80535A84u;
    // 80535A84: sth     r0, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A88:
    ctx->pc = 0x80535A88u;
    // 80535A88: lha     r0, 302(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(302);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A8C:
    ctx->pc = 0x80535A8Cu;
    // 80535A8C: sth     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A90:
    ctx->pc = 0x80535A90u;
    // 80535A90: lha     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535A94:
    ctx->pc = 0x80535A94u;
    // 80535A94: sth     r0, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80535A98:
    ctx->downcount -= 2;
    // 80535A98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535A9C:
    // 80535A9C: bl      0x80535860
    {
            ctx->lr = 0x80535AA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535860u;
                return;
            }
            goto label_80535860;
    }

label_80535AA0:
    ctx->downcount -= 9;
    // 80535AA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535AA4:
    ctx->pc = 0x80535AA4u;
    // 80535AA4: stb     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535AA8:
    ctx->pc = 0x80535AA8u;
    // 80535AA8: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535AAC:
    ctx->pc = 0x80535AACu;
    // 80535AAC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535AB0:
    ctx->pc = 0x80535AB0u;
    // 80535AB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535AB4:
    ctx->pc = 0x80535AB4u;
    // 80535AB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535AB8:
    // 80535AB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535ABC:
    ctx->pc = 0x80535ABCu;
    // 80535ABC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535AC0:
    ctx->pc = 0x80535AC0u;
    ctx->downcount -= 15;
    // 80535AC0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535AC4:
    ctx->pc = 0x80535AC4u;
    // 80535AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535AC8:
    // 80535AC8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80535ACC:
    // 80535ACC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535AD0:
    ctx->pc = 0x80535AD0u;
    // 80535AD0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535AD4:
    // 80535AD4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80535AD8:
    ctx->pc = 0x80535AD8u;
    // 80535AD8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535ADC:
    // 80535ADC: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_80535AE0:
    // 80535AE0: addi    r31, r31, 16976
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16976);

label_80535AE4:
    ctx->pc = 0x80535AE4u;
    // 80535AE4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80535AE8:
    // 80535AE8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535AEC:
    // 80535AEC: addi    r4, r31, 10
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(10);

label_80535AF0:
    // 80535AF0: addi    r5, r31, 23
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(23);

label_80535AF4:
    // 80535AF4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535AF8:
    // 80535AF8: bl      0x802703A8
    {
            ctx->lr = 0x80535AFCu;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80535AFC:
    ctx->downcount -= 6;
    // 80535AFC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B00:
    // 80535B00: addi    r5, r31, 38
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(38);

label_80535B04:
    // 80535B04: addi    r6, r31, 41
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(41);

label_80535B08:
    // 80535B08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535B0C:
    // 80535B0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535B10:
    // 80535B10: bl      0x8027035C
    {
            ctx->lr = 0x80535B14u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80535B14:
    ctx->downcount -= 6;
    // 80535B14: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B18:
    // 80535B18: addi    r5, r31, 52
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(52);

label_80535B1C:
    // 80535B1C: addi    r6, r31, 41
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(41);

label_80535B20:
    // 80535B20: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535B24:
    // 80535B24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535B28:
    // 80535B28: bl      0x8027035C
    {
            ctx->lr = 0x80535B2Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80535B2C:
    ctx->downcount -= 6;
    // 80535B2C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B30:
    // 80535B30: addi    r5, r31, 56
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(56);

label_80535B34:
    // 80535B34: addi    r6, r31, 62
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(62);

label_80535B38:
    // 80535B38: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80535B3C:
    // 80535B3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80535B40:
    // 80535B40: bl      0x8027035C
    {
            ctx->lr = 0x80535B44u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80535B44:
    ctx->downcount -= 4;
    // 80535B44: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B48:
    // 80535B48: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535B4C:
    // 80535B4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535B50:
    // 80535B50: bl      0x8026FEF0
    {
            ctx->lr = 0x80535B54u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535B54:
    ctx->downcount -= 3;
    // 80535B54: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B58:
    // 80535B58: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80535B5C:
    // 80535B5C: bl      0x8026F6AC
    {
            ctx->lr = 0x80535B60u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535B60:
    ctx->downcount -= 1;
    // 80535B60: bl      0x8025ED28
    {
            ctx->lr = 0x80535B64u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535B64:
    ctx->downcount -= 4;
    // 80535B64: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B68:
    // 80535B68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535B6C:
    // 80535B6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535B70:
    // 80535B70: bl      0x8026FEF0
    {
            ctx->lr = 0x80535B74u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80535B74:
    ctx->downcount -= 3;
    // 80535B74: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B78:
    // 80535B78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535B7C:
    // 80535B7C: bl      0x8026F6AC
    {
            ctx->lr = 0x80535B80u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80535B80:
    ctx->downcount -= 1;
    // 80535B80: bl      0x8025ED28
    {
            ctx->lr = 0x80535B84u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80535B84:
    ctx->downcount -= 4;
    // 80535B84: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B88:
    // 80535B88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535B8C:
    // 80535B8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80535B90:
    // 80535B90: bl      0x80270194
    {
            ctx->lr = 0x80535B94u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80535B94:
    ctx->pc = 0x80535B94u;
    ctx->downcount -= 3;
    // 80535B94: lwz     r4, -22128(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80535B98:
    // 80535B98: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80535B9C:
    // 80535B9C: bl      0x8026F968
    {
            ctx->lr = 0x80535BA0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80535BA0:
    ctx->pc = 0x80535BA0u;
    ctx->downcount -= 6;
    // 80535BA0: stw     r3, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80535BA4:
    ctx->pc = 0x80535BA4u;
    // 80535BA4: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535BA8:
    ctx->pc = 0x80535BA8u;
    // 80535BA8: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535BAC:
    ctx->pc = 0x80535BACu;
    // 80535BAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535BB0:
    ctx->pc = 0x80535BB0u;
    // 80535BB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535BB4u;
            ctx->pc = target;
            return;
        }
    }

label_80535BB4:
    ctx->pc = 0x80535BB4u;
    ctx->downcount -= 39;
    // 80535BB4: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535BB8:
    // 80535BB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535BBC:
    ctx->pc = 0x80535BBCu;
    // 80535BBC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535BC0:
    // 80535BC0: li      r4, 10800
    ctx->gpr[4] = (u32)(s32)(10800);

label_80535BC4:
    ctx->pc = 0x80535BC4u;
    // 80535BC4: lwz     r6, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80535BC8:
    // 80535BC8: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_80535BCC:
    ctx->pc = 0x80535BCCu;
    // 80535BCC: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80535BD0:
    ctx->pc = 0x80535BD0u;
    // 80535BD0: lha     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535BD4:
    ctx->pc = 0x80535BD4u;
    // 80535BD4: lha     r8, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535BD8:
    ctx->pc = 0x80535BD8u;
    // 80535BD8: lha     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535BDC:
    ctx->pc = 0x80535BDCu;
    // 80535BDC: lha     r6, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535BE0:
    ctx->pc = 0x80535BE0u;
    // 80535BE0: sth     r9, 290(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_80535BE4:
    ctx->pc = 0x80535BE4u;
    // 80535BE4: lfs     f0, 17204(r2)
    if (!ppc_fp_available_inline(ctx, 0x80535BE4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80535BE8:
    ctx->pc = 0x80535BE8u;
    // 80535BE8: sth     r8, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80535BEC:
    ctx->pc = 0x80535BECu;
    // 80535BEC: sth     r7, 294(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(294);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80535BF0:
    ctx->pc = 0x80535BF0u;
    // 80535BF0: sth     r6, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80535BF4:
    ctx->pc = 0x80535BF4u;
    // 80535BF4: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80535BF8:
    ctx->pc = 0x80535BF8u;
    // 80535BF8: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535BFC:
    ctx->pc = 0x80535BFCu;
    // 80535BFC: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80535C00:
    ctx->pc = 0x80535C00u;
    // 80535C00: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80535C04:
    ctx->pc = 0x80535C04u;
    // 80535C04: lha     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535C08:
    ctx->pc = 0x80535C08u;
    // 80535C08: lha     r7, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535C0C:
    ctx->pc = 0x80535C0Cu;
    // 80535C0C: lha     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535C10:
    ctx->pc = 0x80535C10u;
    // 80535C10: lha     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80535C14:
    ctx->pc = 0x80535C14u;
    // 80535C14: sth     r8, 298(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80535C18:
    ctx->pc = 0x80535C18u;
    // 80535C18: sth     r7, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80535C1C:
    ctx->pc = 0x80535C1Cu;
    // 80535C1C: sth     r6, 302(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(302);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80535C20:
    ctx->pc = 0x80535C20u;
    // 80535C20: sth     r3, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80535C24:
    ctx->pc = 0x80535C24u;
    // 80535C24: stb     r5, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80535C28:
    ctx->pc = 0x80535C28u;
    // 80535C28: stw     r4, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535C2C:
    ctx->pc = 0x80535C2Cu;
    // 80535C2C: stw     r0, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535C30:
    ctx->pc = 0x80535C30u;
    // 80535C30: stfs     f0, 284(r30)
    if (!ppc_fp_available_inline(ctx, 0x80535C30u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80535C34:
    ctx->pc = 0x80535C34u;
    // 80535C34: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535C38:
    ctx->pc = 0x80535C38u;
    // 80535C38: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80535C3C:
    ctx->pc = 0x80535C3Cu;
    // 80535C3C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535C40:
    ctx->pc = 0x80535C40u;
    // 80535C40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535C44:
    // 80535C44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80535C48:
    ctx->pc = 0x80535C48u;
    // 80535C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535C4C:
    ctx->pc = 0x80535C4Cu;
    ctx->downcount -= 8;
    // 80535C4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535C50:
    ctx->pc = 0x80535C50u;
    // 80535C50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535C54:
    // 80535C54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80535C58:
    // 80535C58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80535C5C:
    ctx->pc = 0x80535C5Cu;
    // 80535C5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535C60:
    ctx->pc = 0x80535C60u;
    // 80535C60: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535C64:
    // 80535C64: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535C68:
    // 80535C68: bl      0x803715C0
    {
            ctx->lr = 0x80535C6Cu;
            ctx->pc = 0x803715C0u;
            return;
    }

label_80535C6C:
    ctx->downcount -= 19;
    // 80535C6C: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80535C70:
    // 80535C70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80535C74:
    // 80535C74: addi    r4, r4, 7736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7736);

label_80535C78:
    ctx->pc = 0x80535C78u;
    // 80535C78: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535C7C:
    // 80535C7C: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80535C80:
    // 80535C80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535C84:
    // 80535C84: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_80535C88:
    // 80535C88: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80535C8C:
    ctx->pc = 0x80535C8Cu;
    // 80535C8C: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80535C90:
    ctx->pc = 0x80535C90u;
    // 80535C90: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80535C94:
    ctx->pc = 0x80535C94u;
    // 80535C94: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80535C98:
    ctx->pc = 0x80535C98u;
    // 80535C98: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535C9C:
    ctx->pc = 0x80535C9Cu;
    // 80535C9C: stb     r0, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80535CA0:
    ctx->pc = 0x80535CA0u;
    // 80535CA0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535CA4:
    ctx->pc = 0x80535CA4u;
    // 80535CA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535CA8:
    ctx->pc = 0x80535CA8u;
    // 80535CA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535CAC:
    // 80535CAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535CB0:
    ctx->pc = 0x80535CB0u;
    // 80535CB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535CB4:
    ctx->pc = 0x80535CB4u;
    ctx->downcount -= 18;
    // 80535CB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535CB8:
    ctx->pc = 0x80535CB8u;
    // 80535CB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535CBC:
    // 80535CBC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535CC0:
    ctx->pc = 0x80535CC0u;
    // 80535CC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535CC4:
    ctx->pc = 0x80535CC4u;
    // 80535CC4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80535CC8:
    // 80535CC8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535CCC:
    // 80535CCC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80535CD0:
    // 80535CD0: bc    12, 2, 0x80535D04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535D04;
        }
    }

label_80535CD4:
    ctx->downcount -= 1;
    // 80535CD4: bc    12, 2, 0x80535CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535CF4;
        }
    }

label_80535CD8:
    ctx->downcount -= 1;
    // 80535CD8: bc    12, 2, 0x80535CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535CF4;
        }
    }

label_80535CDC:
    ctx->downcount -= 3;
    // 80535CDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535CE0:
    // 80535CE0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80535CE4:
    // 80535CE4: bl      0x801F5C24
    {
            ctx->lr = 0x80535CE8u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80535CE8:
    ctx->downcount -= 3;
    // 80535CE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535CEC:
    // 80535CEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535CF0:
    // 80535CF0: bl      0x801F9C70
    {
            ctx->lr = 0x80535CF4u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80535CF4:
    ctx->downcount -= 2;
    // 80535CF4: cmpwi   r31, 0
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

label_80535CF8:
    // 80535CF8: bc    4, 1, 0x80535D04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80535D04;
        }
    }

label_80535CFC:
    ctx->downcount -= 2;
    // 80535CFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535D00:
    // 80535D00: bl      0x801C1C90
    {
            ctx->lr = 0x80535D04u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80535D04:
    ctx->downcount -= 17;
    // 80535D04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80535D08:
    ctx->pc = 0x80535D08u;
    // 80535D08: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535D0C:
    ctx->pc = 0x80535D0Cu;
    // 80535D0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535D10:
    ctx->pc = 0x80535D10u;
    // 80535D10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535D14:
    // 80535D14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535D18:
    ctx->pc = 0x80535D18u;
    // 80535D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535D1C:
    ctx->downcount -= 2;
    // 80535D1C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80535D20:
    // 80535D20: b       0x80535CB4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535CB4u;
                return;
            }
            goto label_80535CB4;
    }

label_80535D24:
    ctx->downcount -= 2;
    // 80535D24: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80535D28:
    // 80535D28: b       0x80535CB4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535CB4u;
                return;
            }
            goto label_80535CB4;
    }

label_80535D2C:
    ctx->downcount -= 2;
    // 80535D2C: cmpwi   r4, 0
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

label_80535D30:
    // 80535D30: bc    12, 2, 0x80535D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535D48;
        }
    }

label_80535D34:
    ctx->pc = 0x80535D34u;
    ctx->downcount -= 6;
    // 80535D34: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535D38:
    ctx->pc = 0x80535D38u;
    // 80535D38: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D3C:
    ctx->pc = 0x80535D3Cu;
    // 80535D3C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D40:
    ctx->pc = 0x80535D40u;
    // 80535D40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535D44:
    ctx->pc = 0x80535D44u;
    // 80535D44: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80535D48:
    ctx->pc = 0x80535D48u;
    ctx->downcount -= 6;
    // 80535D48: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535D4C:
    ctx->pc = 0x80535D4Cu;
    // 80535D4C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D50:
    ctx->pc = 0x80535D50u;
    // 80535D50: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D54:
    ctx->pc = 0x80535D54u;
    // 80535D54: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535D58:
    ctx->pc = 0x80535D58u;
    // 80535D58: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80535D5C:
    ctx->pc = 0x80535D5Cu;
    ctx->downcount -= 11;
    // 80535D5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535D60:
    ctx->pc = 0x80535D60u;
    // 80535D60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535D64:
    ctx->pc = 0x80535D64u;
    // 80535D64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535D68:
    ctx->pc = 0x80535D68u;
    // 80535D68: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80535D6C:
    // 80535D6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535D70:
    ctx->pc = 0x80535D70u;
    // 80535D70: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535D74:
    ctx->pc = 0x80535D74u;
    // 80535D74: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D78:
    ctx->pc = 0x80535D78u;
    // 80535D78: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D7C:
    ctx->pc = 0x80535D7Cu;
    // 80535D7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535D80:
    ctx->pc = 0x80535D80u;
    // 80535D80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535D84u;
            ctx->pc = target;
            return;
        }
    }

label_80535D84:
    ctx->downcount -= 2;
    // 80535D84: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535D88:
    // 80535D88: bc    12, 2, 0x80535DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535DA0;
        }
    }

label_80535D8C:
    ctx->pc = 0x80535D8Cu;
    ctx->downcount -= 6;
    // 80535D8C: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535D90:
    ctx->pc = 0x80535D90u;
    // 80535D90: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D94:
    ctx->pc = 0x80535D94u;
    // 80535D94: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535D98:
    ctx->pc = 0x80535D98u;
    // 80535D98: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535D9C:
    ctx->pc = 0x80535D9Cu;
    // 80535D9C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535DA0u;
            ctx->pc = target;
            return;
        }
    }

label_80535DA0:
    ctx->pc = 0x80535DA0u;
    ctx->downcount -= 6;
    // 80535DA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535DA4:
    ctx->pc = 0x80535DA4u;
    // 80535DA4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80535DA8:
    ctx->pc = 0x80535DA8u;
    // 80535DA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535DAC:
    // 80535DAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535DB0:
    ctx->pc = 0x80535DB0u;
    // 80535DB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535DB4:
    ctx->downcount -= 4;
    // 80535DB4: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80535DB8:
    // 80535DB8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80535DBC:
    ctx->pc = 0x80535DBCu;
    // 80535DBC: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DC0:
    ctx->pc = 0x80535DC0u;
    // 80535DC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535DC4:
    ctx->pc = 0x80535DC4u;
    ctx->downcount -= 3;
    // 80535DC4: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DC8:
    ctx->pc = 0x80535DC8u;
    // 80535DC8: stb     r4, 282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80535DCC:
    ctx->pc = 0x80535DCCu;
    // 80535DCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535DD0:
    ctx->pc = 0x80535DD0u;
    ctx->downcount -= 3;
    // 80535DD0: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DD4:
    ctx->pc = 0x80535DD4u;
    // 80535DD4: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80535DD8:
    ctx->pc = 0x80535DD8u;
    // 80535DD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535DDC:
    ctx->pc = 0x80535DDCu;
    ctx->downcount -= 5;
    // 80535DDC: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DE0:
    ctx->pc = 0x80535DE0u;
    // 80535DE0: lhz     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80535DE4:
    // 80535DE4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80535DE8:
    // 80535DE8: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80535DEC:
    ctx->pc = 0x80535DECu;
    // 80535DEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535DF0:
    ctx->pc = 0x80535DF0u;
    ctx->downcount -= 2;
    // 80535DF0: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DF4:
    // 80535DF4: b       0x80534860
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534860u;
                return;
            }
            goto label_80534860;
    }

label_80535DF8:
    ctx->pc = 0x80535DF8u;
    ctx->downcount -= 2;
    // 80535DF8: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535DFC:
    // 80535DFC: b       0x80534A38
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534A38u;
                return;
            }
            goto label_80534A38;
    }

label_80535E00:
    ctx->pc = 0x80535E00u;
    ctx->downcount -= 2;
    // 80535E00: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535E04:
    // 80535E04: b       0x80534A98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534A98u;
                return;
            }
            goto label_80534A98;
    }

label_80535E08:
    ctx->pc = 0x80535E08u;
    ctx->downcount -= 5;
    // 80535E08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535E0C:
    ctx->pc = 0x80535E0Cu;
    // 80535E0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535E10:
    // 80535E10: cmpwi   r4, 0
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

label_80535E14:
    ctx->pc = 0x80535E14u;
    // 80535E14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535E18:
    // 80535E18: bc    12, 2, 0x80535E34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535E34;
        }
    }

label_80535E1C:
    ctx->pc = 0x80535E1Cu;
    ctx->downcount -= 6;
    // 80535E1C: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535E20:
    ctx->pc = 0x80535E20u;
    // 80535E20: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535E24:
    ctx->pc = 0x80535E24u;
    // 80535E24: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535E28:
    ctx->pc = 0x80535E28u;
    // 80535E28: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535E2C:
    ctx->pc = 0x80535E2Cu;
    // 80535E2C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535E30u;
            ctx->pc = target;
            return;
        }
    }

label_80535E30:
    ctx->downcount -= 1;
    // 80535E30: b       0x80535E48
    {
            goto label_80535E48;
    }

label_80535E34:
    ctx->pc = 0x80535E34u;
    ctx->downcount -= 6;
    // 80535E34: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535E38:
    ctx->pc = 0x80535E38u;
    // 80535E38: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535E3C:
    ctx->pc = 0x80535E3Cu;
    // 80535E3C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535E40:
    ctx->pc = 0x80535E40u;
    // 80535E40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535E44:
    ctx->pc = 0x80535E44u;
    // 80535E44: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535E48u;
            ctx->pc = target;
            return;
        }
    }

label_80535E48:
    ctx->downcount -= 3;
    // 80535E48: li      r3, 908
    ctx->gpr[3] = (u32)(s32)(908);

label_80535E4C:
    // 80535E4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535E50:
    // 80535E50: bl      0x802B732C
    {
            ctx->lr = 0x80535E54u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80535E54:
    ctx->downcount -= 3;
    // 80535E54: li      r3, 909
    ctx->gpr[3] = (u32)(s32)(909);

label_80535E58:
    // 80535E58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535E5C:
    // 80535E5C: bl      0x802B732C
    {
            ctx->lr = 0x80535E60u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80535E60:
    ctx->downcount -= 3;
    // 80535E60: li      r3, 911
    ctx->gpr[3] = (u32)(s32)(911);

label_80535E64:
    // 80535E64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535E68:
    // 80535E68: bl      0x802B732C
    {
            ctx->lr = 0x80535E6Cu;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80535E6C:
    ctx->downcount -= 3;
    // 80535E6C: li      r3, 912
    ctx->gpr[3] = (u32)(s32)(912);

label_80535E70:
    // 80535E70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535E74:
    // 80535E74: bl      0x802B732C
    {
            ctx->lr = 0x80535E78u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80535E78:
    ctx->downcount -= 3;
    // 80535E78: li      r3, 913
    ctx->gpr[3] = (u32)(s32)(913);

label_80535E7C:
    // 80535E7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80535E80:
    // 80535E80: bl      0x802B732C
    {
            ctx->lr = 0x80535E84u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80535E84:
    ctx->pc = 0x80535E84u;
    ctx->downcount -= 5;
    // 80535E84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535E88:
    ctx->pc = 0x80535E88u;
    // 80535E88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535E8C:
    // 80535E8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535E90:
    ctx->pc = 0x80535E90u;
    // 80535E90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535E94:
    ctx->pc = 0x80535E94u;
    ctx->downcount -= 22;
    // 80535E94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535E98:
    ctx->pc = 0x80535E98u;
    // 80535E98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535E9C:
    ctx->pc = 0x80535E9Cu;
    // 80535E9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535EA0:
    ctx->pc = 0x80535EA0u;
    // 80535EA0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80535EA4:
    // 80535EA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535EA8:
    // 80535EA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80535EAC:
    ctx->pc = 0x80535EACu;
    // 80535EAC: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535EB0:
    ctx->pc = 0x80535EB0u;
    // 80535EB0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535EB4:
    ctx->pc = 0x80535EB4u;
    // 80535EB4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535EB8:
    ctx->pc = 0x80535EB8u;
    // 80535EB8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535EBC:
    ctx->pc = 0x80535EBCu;
    // 80535EBC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535EC0u;
            ctx->pc = target;
            return;
        }
    }

label_80535EC0:
    ctx->downcount -= 2;
    // 80535EC0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535EC4:
    // 80535EC4: bc    12, 2, 0x80535EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535EE8;
        }
    }

label_80535EC8:
    ctx->pc = 0x80535EC8u;
    ctx->downcount -= 3;
    // 80535EC8: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535ECC:
    // 80535ECC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535ED0:
    // 80535ED0: bl      0x80534930
    {
            ctx->lr = 0x80535ED4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534930u;
                return;
            }
            goto label_80534930;
    }

label_80535ED4:
    ctx->pc = 0x80535ED4u;
    ctx->downcount -= 6;
    // 80535ED4: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535ED8:
    ctx->pc = 0x80535ED8u;
    // 80535ED8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535EDC:
    ctx->pc = 0x80535EDCu;
    // 80535EDC: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535EE0:
    ctx->pc = 0x80535EE0u;
    // 80535EE0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535EE4:
    ctx->pc = 0x80535EE4u;
    // 80535EE4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535EE8u;
            ctx->pc = target;
            return;
        }
    }

label_80535EE8:
    ctx->pc = 0x80535EE8u;
    ctx->downcount -= 16;
    // 80535EE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535EEC:
    ctx->pc = 0x80535EECu;
    // 80535EEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535EF0:
    ctx->pc = 0x80535EF0u;
    // 80535EF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535EF4:
    // 80535EF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535EF8:
    ctx->pc = 0x80535EF8u;
    // 80535EF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535EFC:
    ctx->pc = 0x80535EFCu;
    ctx->downcount -= 44;
    // 80535EFC: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F00:
    // 80535F00: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_80535F04:
    ctx->pc = 0x80535F04u;
    // 80535F04: lhz     r3, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80535F08:
    // 80535F08: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80535F0C:
    ctx->pc = 0x80535F0Cu;
    // 80535F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535F10:
    ctx->pc = 0x80535F10u;
    ctx->downcount -= 3;
    // 80535F10: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F14:
    ctx->pc = 0x80535F14u;
    // 80535F14: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80535F18:
    ctx->pc = 0x80535F18u;
    // 80535F18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535F1C:
    ctx->pc = 0x80535F1Cu;
    ctx->downcount -= 5;
    // 80535F1C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F20:
    ctx->pc = 0x80535F20u;
    // 80535F20: lhz     r0, 274(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(274);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80535F24:
    // 80535F24: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80535F28:
    // 80535F28: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80535F2C:
    ctx->pc = 0x80535F2Cu;
    // 80535F2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535F30:
    ctx->pc = 0x80535F30u;
    ctx->downcount -= 2;
    // 80535F30: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F34:
    // 80535F34: b       0x8053529C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053529Cu;
                return;
            }
            goto label_8053529C;
    }

label_80535F38:
    ctx->pc = 0x80535F38u;
    ctx->downcount -= 2;
    // 80535F38: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F3C:
    // 80535F3C: b       0x80535398
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535398u;
                return;
            }
            goto label_80535398;
    }

label_80535F40:
    ctx->pc = 0x80535F40u;
    ctx->downcount -= 2;
    // 80535F40: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F44:
    // 80535F44: b       0x805353A4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805353A4u;
                return;
            }
            goto label_805353A4;
    }

label_80535F48:
    ctx->pc = 0x80535F48u;
    ctx->downcount -= 2;
    // 80535F48: cmpwi   r4, 0
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

label_80535F4C:
    ctx->pc = 0x80535F4Cu;
    // 80535F4C: bc    12, 2, 0x80535F64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535F64;
        }
    }

label_80535F50:
    ctx->pc = 0x80535F50u;
    ctx->downcount -= 6;
    // 80535F50: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F54:
    ctx->pc = 0x80535F54u;
    // 80535F54: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F58:
    ctx->pc = 0x80535F58u;
    // 80535F58: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F5C:
    ctx->pc = 0x80535F5Cu;
    // 80535F5C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535F60:
    ctx->pc = 0x80535F60u;
    // 80535F60: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80535F64:
    ctx->pc = 0x80535F64u;
    ctx->downcount -= 6;
    // 80535F64: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F68:
    ctx->pc = 0x80535F68u;
    // 80535F68: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F6C:
    ctx->pc = 0x80535F6Cu;
    // 80535F6C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F70:
    ctx->pc = 0x80535F70u;
    // 80535F70: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535F74:
    ctx->pc = 0x80535F74u;
    // 80535F74: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80535F78:
    ctx->pc = 0x80535F78u;
    ctx->downcount -= 22;
    // 80535F78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535F7C:
    ctx->pc = 0x80535F7Cu;
    // 80535F7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535F80:
    ctx->pc = 0x80535F80u;
    // 80535F80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80535F84:
    ctx->pc = 0x80535F84u;
    // 80535F84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80535F88:
    ctx->pc = 0x80535F88u;
    // 80535F88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80535F8C:
    ctx->pc = 0x80535F8Cu;
    // 80535F8C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80535F90:
    ctx->pc = 0x80535F90u;
    // 80535F90: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535F94:
    ctx->pc = 0x80535F94u;
    // 80535F94: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F98:
    ctx->pc = 0x80535F98u;
    // 80535F98: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535F9C:
    ctx->pc = 0x80535F9Cu;
    // 80535F9C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535FA0:
    ctx->pc = 0x80535FA0u;
    // 80535FA0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535FA4u;
            ctx->pc = target;
            return;
        }
    }

label_80535FA4:
    ctx->pc = 0x80535FA4u;
    ctx->downcount -= 2;
    // 80535FA4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80535FA8:
    ctx->pc = 0x80535FA8u;
    // 80535FA8: bc    12, 2, 0x80535FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80535FCC;
        }
    }

label_80535FAC:
    ctx->pc = 0x80535FACu;
    ctx->downcount -= 3;
    // 80535FAC: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535FB0:
    ctx->pc = 0x80535FB0u;
    // 80535FB0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80535FB4:
    ctx->pc = 0x80535FB4u;
    // 80535FB4: bl      0x8053534C
    {
            ctx->lr = 0x80535FB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053534Cu;
                return;
            }
            goto label_8053534C;
    }

label_80535FB8:
    ctx->pc = 0x80535FB8u;
    ctx->downcount -= 6;
    // 80535FB8: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535FBC:
    ctx->pc = 0x80535FBCu;
    // 80535FBC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535FC0:
    ctx->pc = 0x80535FC0u;
    // 80535FC0: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80535FC4:
    ctx->pc = 0x80535FC4u;
    // 80535FC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80535FC8:
    ctx->pc = 0x80535FC8u;
    // 80535FC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80535FCCu;
            ctx->pc = target;
            return;
        }
    }

label_80535FCC:
    ctx->pc = 0x80535FCCu;
    ctx->downcount -= 16;
    // 80535FCC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80535FD0:
    ctx->pc = 0x80535FD0u;
    // 80535FD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80535FD4:
    ctx->pc = 0x80535FD4u;
    // 80535FD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80535FD8:
    ctx->pc = 0x80535FD8u;
    // 80535FD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80535FDC:
    ctx->pc = 0x80535FDCu;
    // 80535FDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535FE0:
    ctx->pc = 0x80535FE0u;
    ctx->downcount -= 3;
    // 80535FE0: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80535FE4:
    ctx->pc = 0x80535FE4u;
    // 80535FE4: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80535FE8:
    ctx->pc = 0x80535FE8u;
    // 80535FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535FEC:
    ctx->pc = 0x80535FECu;
    ctx->downcount -= 2;
    // 80535FEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80535FF0:
    ctx->pc = 0x80535FF0u;
    // 80535FF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80535FF4:
    ctx->pc = 0x80535FF4u;
    ctx->downcount -= 12;
    // 80535FF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80535FF8:
    ctx->pc = 0x80535FF8u;
    // 80535FF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80535FFC:
    ctx->pc = 0x80535FFCu;
    // 80535FFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536000:
    ctx->pc = 0x80536000u;
    // 80536000: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80536004:
    ctx->pc = 0x80536004u;
    // 80536004: add   r6, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80536008:
    ctx->pc = 0x80536008u;
    // 80536008: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053600C:
    ctx->pc = 0x8053600Cu;
    // 8053600C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80536010:
    ctx->pc = 0x80536010u;
    // 80536010: lwz     r0, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536014:
    ctx->pc = 0x80536014u;
    // 80536014: add   r5, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80536018:
    ctx->pc = 0x80536018u;
    // 80536018: stw     r5, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8053601C:
    ctx->pc = 0x8053601Cu;
    // 8053601C: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536020:
    ctx->pc = 0x80536020u;
    // 80536020: bl      0x80534D3C
    {
            ctx->lr = 0x80536024u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534D3Cu;
                return;
            }
            goto label_80534D3C;
    }

label_80536024:
    ctx->pc = 0x80536024u;
    ctx->downcount -= 2;
    // 80536024: cmplwi  r31, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536028:
    ctx->pc = 0x80536028u;
    // 80536028: bc    4, 2, 0x80536038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536038;
        }
    }

label_8053602C:
    ctx->pc = 0x8053602Cu;
    ctx->downcount -= 2;
    // 8053602C: li      r3, 919
    ctx->gpr[3] = (u32)(s32)(919);

label_80536030:
    ctx->pc = 0x80536030u;
    // 80536030: bl      0x802B73BC
    {
            ctx->lr = 0x80536034u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80536034:
    ctx->pc = 0x80536034u;
    ctx->downcount -= 1;
    // 80536034: b       0x80536040
    {
            goto label_80536040;
    }

label_80536038:
    ctx->pc = 0x80536038u;
    ctx->downcount -= 2;
    // 80536038: li      r3, 918
    ctx->gpr[3] = (u32)(s32)(918);

label_8053603C:
    ctx->pc = 0x8053603Cu;
    // 8053603C: bl      0x802B73BC
    {
            ctx->lr = 0x80536040u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80536040:
    ctx->pc = 0x80536040u;
    ctx->downcount -= 6;
    // 80536040: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536044:
    ctx->pc = 0x80536044u;
    // 80536044: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536048:
    ctx->pc = 0x80536048u;
    // 80536048: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053604C:
    ctx->pc = 0x8053604Cu;
    // 8053604C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536050:
    ctx->pc = 0x80536050u;
    // 80536050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536054:
    ctx->pc = 0x80536054u;
    ctx->downcount -= 2;
    // 80536054: cmpwi   r4, 0
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

label_80536058:
    ctx->pc = 0x80536058u;
    // 80536058: bc    12, 2, 0x80536070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536070;
        }
    }

label_8053605C:
    ctx->pc = 0x8053605Cu;
    ctx->downcount -= 6;
    // 8053605C: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536060:
    ctx->pc = 0x80536060u;
    // 80536060: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536064:
    ctx->pc = 0x80536064u;
    // 80536064: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536068:
    ctx->pc = 0x80536068u;
    // 80536068: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8053606C:
    ctx->pc = 0x8053606Cu;
    // 8053606C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80536070:
    ctx->pc = 0x80536070u;
    ctx->downcount -= 6;
    // 80536070: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536074:
    ctx->pc = 0x80536074u;
    // 80536074: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536078:
    ctx->pc = 0x80536078u;
    // 80536078: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053607C:
    ctx->pc = 0x8053607Cu;
    // 8053607C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80536080:
    ctx->pc = 0x80536080u;
    // 80536080: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80536084:
    ctx->pc = 0x80536084u;
    ctx->downcount -= 11;
    // 80536084: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536088:
    ctx->pc = 0x80536088u;
    // 80536088: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053608C:
    ctx->pc = 0x8053608Cu;
    // 8053608C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536090:
    ctx->pc = 0x80536090u;
    // 80536090: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80536094:
    ctx->pc = 0x80536094u;
    // 80536094: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536098:
    ctx->pc = 0x80536098u;
    // 80536098: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053609C:
    ctx->pc = 0x8053609Cu;
    // 8053609C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805360A0:
    ctx->pc = 0x805360A0u;
    // 805360A0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805360A4:
    ctx->pc = 0x805360A4u;
    // 805360A4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805360A8:
    ctx->pc = 0x805360A8u;
    // 805360A8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805360ACu;
            ctx->pc = target;
            return;
        }
    }

label_805360AC:
    ctx->pc = 0x805360ACu;
    ctx->downcount -= 2;
    // 805360AC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805360B0:
    ctx->pc = 0x805360B0u;
    // 805360B0: bc    12, 2, 0x80536108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536108;
        }
    }

label_805360B4:
    ctx->pc = 0x805360B4u;
    ctx->downcount -= 4;
    // 805360B4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805360B8:
    ctx->pc = 0x805360B8u;
    // 805360B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805360BC:
    ctx->pc = 0x805360BCu;
    // 805360BC: lwz     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805360C0:
    ctx->pc = 0x805360C0u;
    // 805360C0: bl      0x80534EDC
    {
            ctx->lr = 0x805360C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534EDCu;
                return;
            }
            goto label_80534EDC;
    }

label_805360C4:
    ctx->pc = 0x805360C4u;
    ctx->downcount -= 4;
    // 805360C4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805360C8:
    ctx->pc = 0x805360C8u;
    // 805360C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805360CC:
    ctx->pc = 0x805360CCu;
    // 805360CC: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805360D0:
    ctx->pc = 0x805360D0u;
    // 805360D0: bl      0x80534EDC
    {
            ctx->lr = 0x805360D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534EDCu;
                return;
            }
            goto label_80534EDC;
    }

label_805360D4:
    ctx->pc = 0x805360D4u;
    ctx->downcount -= 4;
    // 805360D4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805360D8:
    ctx->pc = 0x805360D8u;
    // 805360D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805360DC:
    ctx->pc = 0x805360DCu;
    // 805360DC: lwz     r5, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805360E0:
    ctx->pc = 0x805360E0u;
    // 805360E0: bl      0x80534CCC
    {
            ctx->lr = 0x805360E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534CCCu;
                return;
            }
            goto label_80534CCC;
    }

label_805360E4:
    ctx->pc = 0x805360E4u;
    ctx->downcount -= 4;
    // 805360E4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805360E8:
    ctx->pc = 0x805360E8u;
    // 805360E8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805360EC:
    ctx->pc = 0x805360ECu;
    // 805360EC: lwz     r5, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805360F0:
    ctx->pc = 0x805360F0u;
    // 805360F0: bl      0x80534CCC
    {
            ctx->lr = 0x805360F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534CCCu;
                return;
            }
            goto label_80534CCC;
    }

label_805360F4:
    ctx->pc = 0x805360F4u;
    ctx->downcount -= 6;
    // 805360F4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805360F8:
    ctx->pc = 0x805360F8u;
    // 805360F8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805360FC:
    ctx->pc = 0x805360FCu;
    // 805360FC: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536100:
    ctx->pc = 0x80536100u;
    // 80536100: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80536104:
    ctx->pc = 0x80536104u;
    // 80536104: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80536108u;
            ctx->pc = target;
            return;
        }
    }

label_80536108:
    ctx->pc = 0x80536108u;
    ctx->downcount -= 6;
    // 80536108: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053610C:
    ctx->pc = 0x8053610Cu;
    // 8053610C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536110:
    ctx->pc = 0x80536110u;
    // 80536110: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536114:
    ctx->pc = 0x80536114u;
    // 80536114: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536118:
    ctx->pc = 0x80536118u;
    // 80536118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053611C:
    ctx->pc = 0x8053611Cu;
    ctx->downcount -= 5;
    // 8053611C: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_80536120:
    ctx->pc = 0x80536120u;
    // 80536120: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80536124:
    ctx->pc = 0x80536124u;
    // 80536124: stw     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536128:
    ctx->pc = 0x80536128u;
    // 80536128: stw     r5, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8053612C:
    ctx->pc = 0x8053612Cu;
    // 8053612C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536130:
    ctx->pc = 0x80536130u;
    ctx->downcount -= 21;
    // 80536130: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536134:
    ctx->pc = 0x80536134u;
    // 80536134: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536138:
    ctx->pc = 0x80536138u;
    // 80536138: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053613C:
    ctx->pc = 0x8053613Cu;
    // 8053613C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80536140:
    ctx->pc = 0x80536140u;
    // 80536140: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_80536144:
    ctx->pc = 0x80536144u;
    // 80536144: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536148:
    ctx->pc = 0x80536148u;
    // 80536148: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8053614C:
    ctx->pc = 0x8053614Cu;
    // 8053614C: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536150:
    ctx->pc = 0x80536150u;
    // 80536150: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80536154:
    ctx->pc = 0x80536154u;
    // 80536154: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80536158:
    ctx->pc = 0x80536158u;
    // 80536158: bl      0x80370BD4
    {
            ctx->lr = 0x8053615Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8053615C:
    ctx->pc = 0x8053615Cu;
    ctx->downcount -= 7;
    // 8053615C: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536160:
    ctx->pc = 0x80536160u;
    // 80536160: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80536164:
    ctx->pc = 0x80536164u;
    // 80536164: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536168:
    ctx->pc = 0x80536168u;
    // 80536168: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053616C:
    ctx->pc = 0x8053616Cu;
    // 8053616C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80536170:
    ctx->pc = 0x80536170u;
    // 80536170: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80536174u;
            ctx->pc = target;
            return;
        }
    }

label_80536174:
    ctx->pc = 0x80536174u;
    ctx->downcount -= 5;
    // 80536174: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536178:
    ctx->pc = 0x80536178u;
    // 80536178: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8053617C:
    ctx->pc = 0x8053617Cu;
    // 8053617C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80536180:
    ctx->pc = 0x80536180u;
    // 80536180: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536184:
    ctx->pc = 0x80536184u;
    // 80536184: bl      0x8027714C
    {
            ctx->lr = 0x80536188u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80536188:
    ctx->pc = 0x80536188u;
    ctx->downcount -= 5;
    // 80536188: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053618C:
    ctx->pc = 0x8053618Cu;
    // 8053618C: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80536190:
    ctx->pc = 0x80536190u;
    // 80536190: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80536194:
    ctx->pc = 0x80536194u;
    // 80536194: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80536198:
    ctx->pc = 0x80536198u;
    // 80536198: bl      0x80370BD4
    {
            ctx->lr = 0x8053619Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8053619C:
    ctx->pc = 0x8053619Cu;
    ctx->downcount -= 7;
    // 8053619C: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805361A0:
    ctx->pc = 0x805361A0u;
    // 805361A0: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_805361A4:
    ctx->pc = 0x805361A4u;
    // 805361A4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805361A8:
    ctx->pc = 0x805361A8u;
    // 805361A8: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805361AC:
    ctx->pc = 0x805361ACu;
    // 805361AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805361B0:
    ctx->pc = 0x805361B0u;
    // 805361B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805361B4u;
            ctx->pc = target;
            return;
        }
    }

label_805361B4:
    ctx->pc = 0x805361B4u;
    ctx->downcount -= 5;
    // 805361B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805361B8:
    ctx->pc = 0x805361B8u;
    // 805361B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805361BC:
    ctx->pc = 0x805361BCu;
    // 805361BC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805361C0:
    ctx->pc = 0x805361C0u;
    // 805361C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805361C4:
    ctx->pc = 0x805361C4u;
    // 805361C4: bl      0x8027714C
    {
            ctx->lr = 0x805361C8u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_805361C8:
    ctx->pc = 0x805361C8u;
    ctx->downcount -= 5;
    // 805361C8: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805361CC:
    ctx->pc = 0x805361CCu;
    // 805361CC: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_805361D0:
    ctx->pc = 0x805361D0u;
    // 805361D0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805361D4:
    ctx->pc = 0x805361D4u;
    // 805361D4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805361D8:
    ctx->pc = 0x805361D8u;
    // 805361D8: bl      0x80370BD4
    {
            ctx->lr = 0x805361DCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805361DC:
    ctx->pc = 0x805361DCu;
    ctx->downcount -= 7;
    // 805361DC: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805361E0:
    ctx->pc = 0x805361E0u;
    // 805361E0: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_805361E4:
    ctx->pc = 0x805361E4u;
    // 805361E4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805361E8:
    ctx->pc = 0x805361E8u;
    // 805361E8: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805361EC:
    ctx->pc = 0x805361ECu;
    // 805361EC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805361F0:
    ctx->pc = 0x805361F0u;
    // 805361F0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805361F4u;
            ctx->pc = target;
            return;
        }
    }

label_805361F4:
    ctx->pc = 0x805361F4u;
    ctx->downcount -= 5;
    // 805361F4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805361F8:
    ctx->pc = 0x805361F8u;
    // 805361F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805361FC:
    ctx->pc = 0x805361FCu;
    // 805361FC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80536200:
    ctx->pc = 0x80536200u;
    // 80536200: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536204:
    ctx->pc = 0x80536204u;
    // 80536204: bl      0x8027714C
    {
            ctx->lr = 0x80536208u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80536208:
    ctx->pc = 0x80536208u;
    ctx->downcount -= 5;
    // 80536208: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053620C:
    ctx->pc = 0x8053620Cu;
    // 8053620C: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80536210:
    ctx->pc = 0x80536210u;
    // 80536210: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80536214:
    ctx->pc = 0x80536214u;
    // 80536214: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80536218:
    ctx->pc = 0x80536218u;
    // 80536218: bl      0x80370BD4
    {
            ctx->lr = 0x8053621Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8053621C:
    ctx->pc = 0x8053621Cu;
    ctx->downcount -= 7;
    // 8053621C: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536220:
    ctx->pc = 0x80536220u;
    // 80536220: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80536224:
    ctx->pc = 0x80536224u;
    // 80536224: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80536228:
    ctx->pc = 0x80536228u;
    // 80536228: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8053622C:
    ctx->pc = 0x8053622Cu;
    // 8053622C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80536230:
    ctx->pc = 0x80536230u;
    // 80536230: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80536234u;
            ctx->pc = target;
            return;
        }
    }

label_80536234:
    ctx->pc = 0x80536234u;
    ctx->downcount -= 5;
    // 80536234: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536238:
    ctx->pc = 0x80536238u;
    // 80536238: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8053623C:
    ctx->pc = 0x8053623Cu;
    // 8053623C: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80536240:
    ctx->pc = 0x80536240u;
    // 80536240: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536244:
    ctx->pc = 0x80536244u;
    // 80536244: bl      0x8027714C
    {
            ctx->lr = 0x80536248u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80536248:
    ctx->pc = 0x80536248u;
    ctx->downcount -= 16;
    // 80536248: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8053624C:
    ctx->pc = 0x8053624Cu;
    // 8053624C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536250:
    ctx->pc = 0x80536250u;
    // 80536250: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536254:
    ctx->pc = 0x80536254u;
    // 80536254: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80536258:
    ctx->pc = 0x80536258u;
    // 80536258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053625C:
    ctx->pc = 0x8053625Cu;
    ctx->downcount -= 20;
    // 8053625C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536260:
    ctx->pc = 0x80536260u;
    // 80536260: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536264:
    ctx->pc = 0x80536264u;
    // 80536264: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536268:
    ctx->pc = 0x80536268u;
    // 80536268: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8053626C:
    ctx->pc = 0x8053626Cu;
    // 8053626C: lis     r31, -32658
    ctx->gpr[31] = ((u32)(s32)(-32658) << 16);

label_80536270:
    ctx->pc = 0x80536270u;
    // 80536270: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536274:
    ctx->pc = 0x80536274u;
    // 80536274: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536278:
    ctx->pc = 0x80536278u;
    // 80536278: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053627C:
    ctx->pc = 0x8053627Cu;
    // 8053627C: addi    r31, r31, 8024
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8024);

label_80536280:
    ctx->pc = 0x80536280u;
    // 80536280: bl      0x802A6748
    {
            ctx->lr = 0x80536284u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_80536284:
    ctx->pc = 0x80536284u;
    ctx->downcount -= 7;
    // 80536284: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80536288:
    ctx->pc = 0x80536288u;
    // 80536288: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8053628C:
    ctx->pc = 0x8053628Cu;
    // 8053628C: addi    r4, r4, 8240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8240);

label_80536290:
    ctx->pc = 0x80536290u;
    // 80536290: stw     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536294:
    ctx->pc = 0x80536294u;
    // 80536294: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80536298:
    ctx->pc = 0x80536298u;
    // 80536298: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053629C:
    ctx->pc = 0x8053629Cu;
    // 8053629C: bl      0x801ED17C
    {
            ctx->lr = 0x805362A0u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_805362A0:
    ctx->pc = 0x805362A0u;
    ctx->downcount -= 6;
    // 805362A0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805362A4:
    ctx->pc = 0x805362A4u;
    // 805362A4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805362A8:
    ctx->pc = 0x805362A8u;
    // 805362A8: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_805362AC:
    ctx->pc = 0x805362ACu;
    // 805362AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805362B0:
    ctx->pc = 0x805362B0u;
    // 805362B0: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_805362B4:
    ctx->pc = 0x805362B4u;
    // 805362B4: bl      0x80536520
    {
            ctx->lr = 0x805362B8u;
            goto label_80536520;
    }

label_805362B8:
    ctx->pc = 0x805362B8u;
    ctx->downcount -= 3;
    // 805362B8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805362BC:
    ctx->pc = 0x805362BCu;
    // 805362BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805362C0:
    ctx->pc = 0x805362C0u;
    // 805362C0: bl      0x802A5D48
    {
            ctx->lr = 0x805362C4u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_805362C4:
    ctx->pc = 0x805362C4u;
    ctx->downcount -= 6;
    // 805362C4: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805362C8:
    ctx->pc = 0x805362C8u;
    // 805362C8: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_805362CC:
    ctx->pc = 0x805362CCu;
    // 805362CC: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_805362D0:
    ctx->pc = 0x805362D0u;
    // 805362D0: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_805362D4:
    ctx->pc = 0x805362D4u;
    // 805362D4: addi    r6, r31, 84
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(84);

label_805362D8:
    ctx->pc = 0x805362D8u;
    // 805362D8: bl      0x805366BC
    {
            ctx->lr = 0x805362DCu;
            goto label_805366BC;
    }

label_805362DC:
    ctx->pc = 0x805362DCu;
    ctx->downcount -= 2;
    // 805362DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805362E0:
    ctx->pc = 0x805362E0u;
    // 805362E0: bl      0x802A609C
    {
            ctx->lr = 0x805362E4u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_805362E4:
    ctx->pc = 0x805362E4u;
    ctx->downcount -= 11;
    // 805362E4: lis     r3, -32658
    ctx->gpr[3] = ((u32)(s32)(-32658) << 16);

label_805362E8:
    ctx->pc = 0x805362E8u;
    // 805362E8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_805362EC:
    ctx->pc = 0x805362ECu;
    // 805362EC: addi    r3, r3, 8120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8120);

label_805362F0:
    ctx->pc = 0x805362F0u;
    // 805362F0: stw     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805362F4:
    ctx->pc = 0x805362F4u;
    // 805362F4: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_805362F8:
    ctx->pc = 0x805362F8u;
    // 805362F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805362FC:
    ctx->pc = 0x805362FCu;
    // 805362FC: stw     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536300:
    ctx->pc = 0x80536300u;
    // 80536300: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80536304:
    ctx->pc = 0x80536304u;
    // 80536304: stw     r30, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80536308:
    ctx->pc = 0x80536308u;
    // 80536308: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8053630C:
    loop_8053630C(ctx);
    if (ctx->pc == 0x80536320u) goto label_80536320;
    return;
label_80536310:
    // 80536310: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_80536314:
    ctx->pc = 0x80536314u;
    // 80536314: stw     r5, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80536318:
    ctx->pc = 0x80536318u;
    // 80536318: stw     r5, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8053631C:
    // 8053631C: bc    16, 0, 0x8053630C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053630Cu;
                return;
            }
            goto label_8053630C;
        }
    }

label_80536320:
    ctx->pc = 0x80536320u;
    ctx->downcount -= 5;
    // 80536320: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_80536324:
    ctx->pc = 0x80536324u;
    // 80536324: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_80536328:
    ctx->pc = 0x80536328u;
    // 80536328: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_8053632C:
    ctx->pc = 0x8053632Cu;
    // 8053632C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536330:
    ctx->pc = 0x80536330u;
    // 80536330: bl      0x80536640
    {
            ctx->lr = 0x80536334u;
            goto label_80536640;
    }

label_80536334:
    ctx->pc = 0x80536334u;
    ctx->downcount -= 2;
    // 80536334: li      r3, 308
    ctx->gpr[3] = (u32)(s32)(308);

label_80536338:
    ctx->pc = 0x80536338u;
    // 80536338: bl      0x801C1C48
    {
            ctx->lr = 0x8053633Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8053633C:
    ctx->pc = 0x8053633Cu;
    ctx->downcount -= 2;
    // 8053633C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536340:
    ctx->pc = 0x80536340u;
    // 80536340: bc    12, 2, 0x8053634C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053634C;
        }
    }

label_80536344:
    ctx->pc = 0x80536344u;
    ctx->downcount -= 2;
    // 80536344: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536348:
    ctx->pc = 0x80536348u;
    // 80536348: bl      0x80535154
    {
            ctx->lr = 0x8053634Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535154u;
                return;
            }
            goto label_80535154;
    }

label_8053634C:
    ctx->pc = 0x8053634Cu;
    ctx->downcount -= 3;
    // 8053634C: stw     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536350:
    ctx->pc = 0x80536350u;
    // 80536350: li      r3, 296
    ctx->gpr[3] = (u32)(s32)(296);

label_80536354:
    ctx->pc = 0x80536354u;
    // 80536354: bl      0x801C1C48
    {
            ctx->lr = 0x80536358u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80536358:
    ctx->pc = 0x80536358u;
    ctx->downcount -= 2;
    // 80536358: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053635C:
    ctx->pc = 0x8053635Cu;
    // 8053635C: bc    12, 2, 0x80536368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536368;
        }
    }

label_80536360:
    ctx->pc = 0x80536360u;
    ctx->downcount -= 2;
    // 80536360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536364:
    ctx->pc = 0x80536364u;
    // 80536364: bl      0x80535624
    {
            ctx->lr = 0x80536368u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80535624u;
                return;
            }
            goto label_80535624;
    }

label_80536368:
    ctx->pc = 0x80536368u;
    ctx->downcount -= 3;
    // 80536368: stw     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053636C:
    ctx->pc = 0x8053636Cu;
    // 8053636C: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_80536370:
    ctx->pc = 0x80536370u;
    // 80536370: bl      0x801C1C48
    {
            ctx->lr = 0x80536374u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80536374:
    ctx->pc = 0x80536374u;
    ctx->downcount -= 2;
    // 80536374: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536378:
    ctx->pc = 0x80536378u;
    // 80536378: bc    12, 2, 0x80536384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536384;
        }
    }

label_8053637C:
    ctx->pc = 0x8053637Cu;
    ctx->downcount -= 2;
    // 8053637C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536380:
    ctx->pc = 0x80536380u;
    // 80536380: bl      0x80534BE8
    {
            ctx->lr = 0x80536384u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80534BE8u;
                return;
            }
            goto label_80534BE8;
    }

label_80536384:
    ctx->pc = 0x80536384u;
    ctx->downcount -= 3;
    // 80536384: stw     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536388:
    ctx->pc = 0x80536388u;
    // 80536388: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_8053638C:
    ctx->pc = 0x8053638Cu;
    // 8053638C: bl      0x801C1C48
    {
            ctx->lr = 0x80536390u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80536390:
    ctx->pc = 0x80536390u;
    ctx->downcount -= 2;
    // 80536390: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536394:
    ctx->pc = 0x80536394u;
    // 80536394: bc    12, 2, 0x805363A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805363A0;
        }
    }

label_80536398:
    ctx->pc = 0x80536398u;
    ctx->downcount -= 2;
    // 80536398: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8053639C:
    ctx->pc = 0x8053639Cu;
    // 8053639C: bl      0x805478D8
    {
            ctx->lr = 0x805363A0u;
            ctx->pc = 0x805478D8u;
            return;
    }

label_805363A0:
    ctx->pc = 0x805363A0u;
    ctx->downcount -= 4;
    // 805363A0: stw     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805363A4:
    ctx->pc = 0x805363A4u;
    // 805363A4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805363A8:
    ctx->pc = 0x805363A8u;
    // 805363A8: lwz     r4, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805363AC:
    ctx->pc = 0x805363ACu;
    // 805363AC: bl      0x802A6408
    {
            ctx->lr = 0x805363B0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805363B0:
    ctx->pc = 0x805363B0u;
    ctx->downcount -= 3;
    // 805363B0: lwz     r4, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805363B4:
    ctx->pc = 0x805363B4u;
    // 805363B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805363B8:
    ctx->pc = 0x805363B8u;
    // 805363B8: bl      0x802A6408
    {
            ctx->lr = 0x805363BCu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805363BC:
    ctx->pc = 0x805363BCu;
    ctx->downcount -= 3;
    // 805363BC: lwz     r4, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805363C0:
    ctx->pc = 0x805363C0u;
    // 805363C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805363C4:
    ctx->pc = 0x805363C4u;
    // 805363C4: bl      0x802A6408
    {
            ctx->lr = 0x805363C8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805363C8:
    ctx->pc = 0x805363C8u;
    ctx->downcount -= 3;
    // 805363C8: lwz     r4, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805363CC:
    ctx->pc = 0x805363CCu;
    // 805363CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805363D0:
    ctx->pc = 0x805363D0u;
    // 805363D0: bl      0x802A6408
    {
            ctx->lr = 0x805363D4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_805363D4:
    ctx->pc = 0x805363D4u;
    ctx->downcount -= 5;
    // 805363D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_805363D8:
    ctx->pc = 0x805363D8u;
    // 805363D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805363DC:
    ctx->pc = 0x805363DCu;
    // 805363DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805363E0:
    ctx->pc = 0x805363E0u;
    // 805363E0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805363E4:
    loop_805363E4(ctx);
    if (ctx->pc == 0x805363F4u) goto label_805363F4;
    return;
label_805363E8:
    // 805363E8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_805363EC:
    ctx->pc = 0x805363ECu;
    // 805363EC: stw     r5, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805363F0:
    // 805363F0: bc    16, 0, 0x805363E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805363E4u;
                return;
            }
            goto label_805363E4;
        }
    }

label_805363F4:
    ctx->pc = 0x805363F4u;
    ctx->downcount -= 17;
    // 805363F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805363F8:
    ctx->pc = 0x805363F8u;
    // 805363F8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805363FC:
    ctx->pc = 0x805363FCu;
    // 805363FC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536400:
    ctx->pc = 0x80536400u;
    // 80536400: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536404:
    ctx->pc = 0x80536404u;
    // 80536404: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80536408:
    ctx->pc = 0x80536408u;
    // 80536408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053640C:
    ctx->pc = 0x8053640Cu;
    ctx->downcount -= 18;
    // 8053640C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536410:
    ctx->pc = 0x80536410u;
    // 80536410: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536414:
    // 80536414: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536418:
    ctx->pc = 0x80536418u;
    // 80536418: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053641C:
    ctx->pc = 0x8053641Cu;
    // 8053641C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80536420:
    // 80536420: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536424:
    // 80536424: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536428:
    // 80536428: bc    12, 2, 0x8053645C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053645C;
        }
    }

label_8053642C:
    ctx->downcount -= 1;
    // 8053642C: bc    12, 2, 0x8053644C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053644C;
        }
    }

label_80536430:
    ctx->downcount -= 1;
    // 80536430: bc    12, 2, 0x8053644C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053644C;
        }
    }

label_80536434:
    ctx->downcount -= 3;
    // 80536434: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536438:
    // 80536438: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_8053643C:
    // 8053643C: bl      0x801ED098
    {
            ctx->lr = 0x80536440u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_80536440:
    ctx->downcount -= 3;
    // 80536440: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80536444:
    // 80536444: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536448:
    // 80536448: bl      0x801ED058
    {
            ctx->lr = 0x8053644Cu;
            ctx->pc = 0x801ED058u;
            return;
    }

label_8053644C:
    ctx->downcount -= 2;
    // 8053644C: cmpwi   r31, 0
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

label_80536450:
    // 80536450: bc    4, 1, 0x8053645C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8053645C;
        }
    }

label_80536454:
    ctx->downcount -= 2;
    // 80536454: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80536458:
    // 80536458: bl      0x801C1C90
    {
            ctx->lr = 0x8053645Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8053645C:
    ctx->downcount -= 17;
    // 8053645C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80536460:
    ctx->pc = 0x80536460u;
    // 80536460: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80536464:
    ctx->pc = 0x80536464u;
    // 80536464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536468:
    ctx->pc = 0x80536468u;
    // 80536468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8053646C:
    // 8053646C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536470:
    ctx->pc = 0x80536470u;
    // 80536470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536474:
    ctx->pc = 0x80536474u;
    ctx->downcount -= 7;
    // 80536474: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536478:
    ctx->pc = 0x80536478u;
    // 80536478: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8053647C:
    // 8053647C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536480:
    ctx->pc = 0x80536480u;
    // 80536480: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536484:
    ctx->pc = 0x80536484u;
    // 80536484: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80536488:
    // 80536488: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053648C:
    // 8053648C: bc    12, 2, 0x8053649C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8053649C;
        }
    }

label_80536490:
    ctx->downcount -= 2;
    // 80536490: cmpwi   r4, 0
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

label_80536494:
    // 80536494: bc    4, 1, 0x8053649C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8053649C;
        }
    }

label_80536498:
    ctx->downcount -= 1;
    // 80536498: bl      0x801C1C90
    {
            ctx->lr = 0x8053649Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8053649C:
    ctx->downcount -= 7;
    // 8053649C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805364A0:
    ctx->pc = 0x805364A0u;
    // 805364A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805364A4:
    ctx->pc = 0x805364A4u;
    // 805364A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805364A8:
    ctx->pc = 0x805364A8u;
    // 805364A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805364AC:
    // 805364AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805364B0:
    ctx->pc = 0x805364B0u;
    // 805364B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805364B4:
    ctx->pc = 0x805364B4u;
    ctx->downcount -= 1;
    // 805364B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805364B8:
    ctx->pc = 0x805364B8u;
    ctx->downcount -= 1;
    // 805364B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805364BC:
    ctx->pc = 0x805364BCu;
    ctx->downcount -= 10;
    // 805364BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805364C0:
    ctx->pc = 0x805364C0u;
    // 805364C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805364C4:
    ctx->pc = 0x805364C4u;
    // 805364C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805364C8:
    ctx->pc = 0x805364C8u;
    // 805364C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805364CC:
    // 805364CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805364D0:
    ctx->pc = 0x805364D0u;
    // 805364D0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805364D4:
    ctx->pc = 0x805364D4u;
    // 805364D4: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805364D8:
    ctx->pc = 0x805364D8u;
    // 805364D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805364DC:
    ctx->pc = 0x805364DCu;
    // 805364DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805364E0u;
            ctx->pc = target;
            return;
        }
    }

label_805364E0:
    ctx->downcount -= 2;
    // 805364E0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805364E4:
    // 805364E4: bl      0x80536718
    {
            ctx->lr = 0x805364E8u;
            goto label_80536718;
    }

label_805364E8:
    ctx->pc = 0x805364E8u;
    ctx->downcount -= 6;
    // 805364E8: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805364EC:
    // 805364EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805364F0:
    ctx->pc = 0x805364F0u;
    // 805364F0: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805364F4:
    ctx->pc = 0x805364F4u;
    // 805364F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805364F8:
    ctx->pc = 0x805364F8u;
    // 805364F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805364FCu;
            ctx->pc = target;
            return;
        }
    }

label_805364FC:
    ctx->pc = 0x805364FCu;
    ctx->downcount -= 6;
    // 805364FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536500:
    ctx->pc = 0x80536500u;
    // 80536500: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536504:
    ctx->pc = 0x80536504u;
    // 80536504: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536508:
    // 80536508: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053650C:
    ctx->pc = 0x8053650Cu;
    // 8053650C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536510:
    ctx->downcount -= 2;
    // 80536510: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80536514:
    ctx->pc = 0x80536514u;
    // 80536514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536518:
    ctx->downcount -= 2;
    // 80536518: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8053651C:
    ctx->pc = 0x8053651Cu;
    // 8053651C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536520:
    ctx->pc = 0x80536520u;
    ctx->downcount -= 17;
    // 80536520: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536524:
    ctx->pc = 0x80536524u;
    // 80536524: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536528:
    ctx->pc = 0x80536528u;
    // 80536528: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053652C:
    ctx->pc = 0x8053652Cu;
    // 8053652C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80536530:
    // 80536530: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536534:
    // 80536534: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536538:
    // 80536538: bl      0x803457F4
    {
            ctx->lr = 0x8053653Cu;
            ctx->pc = 0x803457F4u;
            return;
    }

label_8053653C:
    ctx->pc = 0x8053653Cu;
    ctx->downcount -= 11;
    // 8053653C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536540:
    // 80536540: lis     r3, -32658
    ctx->gpr[3] = ((u32)(s32)(-32658) << 16);

label_80536544:
    // 80536544: addi    r3, r3, 8360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8360);

label_80536548:
    ctx->pc = 0x80536548u;
    // 80536548: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053654C:
    // 8053654C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80536550:
    ctx->pc = 0x80536550u;
    // 80536550: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536554:
    ctx->pc = 0x80536554u;
    // 80536554: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80536558:
    // 80536558: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8053655C:
    // 8053655C: bl      0x801C1C80
    {
            ctx->lr = 0x80536560u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80536560:
    ctx->pc = 0x80536560u;
    ctx->downcount -= 8;
    // 80536560: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536564:
    // 80536564: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80536568:
    ctx->pc = 0x80536568u;
    // 80536568: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053656C:
    // 8053656C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80536570:
    ctx->pc = 0x80536570u;
    // 80536570: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536574:
    // 80536574: bl      0x801C1C80
    {
            ctx->lr = 0x80536578u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80536578:
    ctx->pc = 0x80536578u;
    ctx->downcount -= 8;
    // 80536578: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053657C:
    // 8053657C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80536580:
    ctx->pc = 0x80536580u;
    // 80536580: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536584:
    // 80536584: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80536588:
    ctx->pc = 0x80536588u;
    // 80536588: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8053658C:
    // 8053658C: bl      0x801C1C80
    {
            ctx->lr = 0x80536590u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80536590:
    ctx->downcount -= 6;
    // 80536590: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_80536594:
    ctx->pc = 0x80536594u;
    // 80536594: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536598:
    // 80536598: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_8053659C:
    // 8053659C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805365A0:
    // 805365A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805365A4:
    // 805365A4: b       0x80536610
    {
            goto label_80536610;
    }

label_805365A8:
    loop_805365A8(ctx);
    if (ctx->pc == 0x8053661Cu) goto label_8053661C;
    return;
label_805365AC:
    // 805365AC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_805365B0:
    ctx->pc = 0x805365B0u;
    // 805365B0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805365B4:
    // 805365B4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805365B8:
    ctx->pc = 0x805365B8u;
    // 805365B8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805365BC:
    ctx->pc = 0x805365BCu;
    // 805365BC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805365C0:
    ctx->pc = 0x805365C0u;
    // 805365C0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805365C4:
    ctx->pc = 0x805365C4u;
    // 805365C4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805365C8:
    ctx->pc = 0x805365C8u;
    // 805365C8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805365CC:
    ctx->pc = 0x805365CCu;
    // 805365CC: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805365D0:
    ctx->pc = 0x805365D0u;
    // 805365D0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805365D4:
    // 805365D4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805365D8:
    ctx->pc = 0x805365D8u;
    // 805365D8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805365DC:
    ctx->pc = 0x805365DCu;
    // 805365DC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805365E0:
    ctx->pc = 0x805365E0u;
    // 805365E0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805365E4:
    ctx->pc = 0x805365E4u;
    // 805365E4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805365E8:
    ctx->pc = 0x805365E8u;
    // 805365E8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805365EC:
    ctx->pc = 0x805365ECu;
    // 805365EC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805365F0:
    ctx->pc = 0x805365F0u;
    // 805365F0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805365F4:
    // 805365F4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805365F8:
    ctx->pc = 0x805365F8u;
    // 805365F8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805365FC:
    ctx->pc = 0x805365FCu;
    // 805365FC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536600:
    // 80536600: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80536604:
    ctx->pc = 0x80536604u;
    // 80536604: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536608:
    ctx->pc = 0x80536608u;
    // 80536608: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053660C:
    ctx->pc = 0x8053660Cu;
    // 8053660C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536610:
    ctx->pc = 0x80536610u;
    ctx->downcount -= 3;
    // 80536610: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536614:
    // 80536614: cmpw    r7, r0
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

label_80536618:
    // 80536618: bc    12, 0, 0x805365A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805365A8u;
                return;
            }
            goto label_805365A8;
        }
    }

label_8053661C:
    ctx->downcount -= 3;
    // 8053661C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536620:
    // 80536620: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536624:
    // 80536624: bl      0x803457CC
    {
            ctx->lr = 0x80536628u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80536628:
    ctx->downcount -= 17;
    // 80536628: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053662C:
    ctx->pc = 0x8053662Cu;
    // 8053662C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80536630:
    ctx->pc = 0x80536630u;
    // 80536630: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536634:
    ctx->pc = 0x80536634u;
    // 80536634: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536638:
    // 80536638: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8053663C:
    ctx->pc = 0x8053663Cu;
    // 8053663C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536640:
    ctx->pc = 0x80536640u;
    ctx->downcount -= 20;
    // 80536640: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536644:
    ctx->pc = 0x80536644u;
    // 80536644: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536648:
    ctx->pc = 0x80536648u;
    // 80536648: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053664C:
    ctx->pc = 0x8053664Cu;
    // 8053664C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80536650:
    // 80536650: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80536654:
    // 80536654: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536658:
    // 80536658: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053665C:
    // 8053665C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80536660:
    // 80536660: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536664:
    // 80536664: bl      0x803456D0
    {
            ctx->lr = 0x80536668u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80536668:
    ctx->downcount -= 34;
    // 80536668: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8053666C:
    ctx->pc = 0x8053666Cu;
    // 8053666C: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536670:
    ctx->pc = 0x80536670u;
    // 80536670: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536674:
    ctx->pc = 0x80536674u;
    // 80536674: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536678:
    // 80536678: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8053667C:
    ctx->pc = 0x8053667Cu;
    // 8053667C: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536680:
    ctx->pc = 0x80536680u;
    // 80536680: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536684:
    ctx->pc = 0x80536684u;
    // 80536684: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536688:
    ctx->pc = 0x80536688u;
    // 80536688: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053668C:
    ctx->pc = 0x8053668Cu;
    // 8053668C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536690:
    ctx->pc = 0x80536690u;
    // 80536690: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536694:
    ctx->pc = 0x80536694u;
    // 80536694: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536698:
    ctx->pc = 0x80536698u;
    // 80536698: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8053669C:
    ctx->pc = 0x8053669Cu;
    // 8053669C: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_805366A0:
    ctx->pc = 0x805366A0u;
    // 805366A0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805366A4:
    ctx->pc = 0x805366A4u;
    // 805366A4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805366A8:
    ctx->pc = 0x805366A8u;
    // 805366A8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805366AC:
    ctx->pc = 0x805366ACu;
    // 805366AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805366B0:
    ctx->pc = 0x805366B0u;
    // 805366B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805366B4:
    // 805366B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805366B8:
    ctx->pc = 0x805366B8u;
    // 805366B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805366BC:
    ctx->pc = 0x805366BCu;
    ctx->downcount -= 19;
    // 805366BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805366C0:
    ctx->pc = 0x805366C0u;
    // 805366C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805366C4:
    ctx->pc = 0x805366C4u;
    // 805366C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805366C8:
    ctx->pc = 0x805366C8u;
    // 805366C8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805366CC:
    // 805366CC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805366D0:
    // 805366D0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805366D4:
    // 805366D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805366D8:
    // 805366D8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805366DC:
    // 805366DC: bl      0x80536640
    {
            ctx->lr = 0x805366E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536640u;
                return;
            }
            goto label_80536640;
    }

label_805366E0:
    ctx->downcount -= 27;
    // 805366E0: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805366E4:
    ctx->pc = 0x805366E4u;
    // 805366E4: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805366E8:
    ctx->pc = 0x805366E8u;
    // 805366E8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805366EC:
    ctx->pc = 0x805366ECu;
    // 805366EC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805366F0:
    // 805366F0: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805366F4:
    ctx->pc = 0x805366F4u;
    // 805366F4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805366F8:
    ctx->pc = 0x805366F8u;
    // 805366F8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805366FC:
    ctx->pc = 0x805366FCu;
    // 805366FC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536700:
    ctx->pc = 0x80536700u;
    // 80536700: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536704:
    ctx->pc = 0x80536704u;
    // 80536704: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80536708:
    ctx->pc = 0x80536708u;
    // 80536708: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053670C:
    ctx->pc = 0x8053670Cu;
    // 8053670C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536710:
    // 80536710: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80536714:
    ctx->pc = 0x80536714u;
    // 80536714: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536718:
    ctx->pc = 0x80536718u;
    ctx->downcount -= 8;
    // 80536718: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8053671C:
    ctx->pc = 0x8053671Cu;
    // 8053671C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536720:
    ctx->pc = 0x80536720u;
    // 80536720: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536724:
    ctx->pc = 0x80536724u;
    // 80536724: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80536728:
    // 80536728: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8053672C:
    ctx->pc = 0x8053672Cu;
    // 8053672C: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80536730:
    // 80536730: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536734:
    // 80536734: bc    12, 2, 0x80536758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536758;
        }
    }

label_80536738:
    ctx->pc = 0x80536738u;
    ctx->downcount -= 3;
    // 80536738: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8053673C:
    // 8053673C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536740:
    // 80536740: bc    12, 2, 0x80536748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536748;
        }
    }

label_80536744:
    ctx->downcount -= 1;
    // 80536744: bl      0x8053683C
    {
            ctx->lr = 0x80536748u;
            goto label_8053683C;
    }

label_80536748:
    ctx->downcount -= 2;
    // 80536748: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053674C:
    // 8053674C: bl      0x803456D4
    {
            ctx->lr = 0x80536750u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_80536750:
    ctx->downcount -= 2;
    // 80536750: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536754:
    // 80536754: bl      0x8053677C
    {
            ctx->lr = 0x80536758u;
            goto label_8053677C;
    }

label_80536758:
    ctx->downcount -= 2;
    // 80536758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8053675C:
    // 8053675C: bl      0x805367DC
    {
            ctx->lr = 0x80536760u;
            goto label_805367DC;
    }

label_80536760:
    ctx->downcount -= 2;
    // 80536760: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536764:
    // 80536764: bl      0x803456F8
    {
            ctx->lr = 0x80536768u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_80536768:
    ctx->pc = 0x80536768u;
    ctx->downcount -= 6;
    // 80536768: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053676C:
    ctx->pc = 0x8053676Cu;
    // 8053676C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536770:
    ctx->pc = 0x80536770u;
    // 80536770: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536774:
    // 80536774: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536778:
    ctx->pc = 0x80536778u;
    // 80536778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053677C:
    ctx->pc = 0x8053677Cu;
    ctx->downcount -= 12;
    // 8053677C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536780:
    ctx->pc = 0x80536780u;
    // 80536780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536784:
    ctx->pc = 0x80536784u;
    // 80536784: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536788:
    ctx->pc = 0x80536788u;
    // 80536788: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053678C:
    // 8053678C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536790:
    ctx->pc = 0x80536790u;
    // 80536790: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536794:
    ctx->pc = 0x80536794u;
    // 80536794: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536798:
    // 80536798: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8053679C:
    // 8053679C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805367A0:
    // 805367A0: bl      0x800076B4
    {
            ctx->lr = 0x805367A4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805367A4:
    ctx->downcount -= 2;
    // 805367A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805367A8:
    // 805367A8: bc    12, 2, 0x805367C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805367C8;
        }
    }

label_805367AC:
    ctx->pc = 0x805367ACu;
    ctx->downcount -= 8;
    // 805367AC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805367B0:
    ctx->pc = 0x805367B0u;
    // 805367B0: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805367B4:
    // 805367B4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805367B8:
    ctx->pc = 0x805367B8u;
    // 805367B8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805367BC:
    // 805367BC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805367C0:
    // 805367C0: bl      0x800076E4
    {
            ctx->lr = 0x805367C4u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805367C4:
    ctx->downcount -= 1;
    // 805367C4: nop
    // nop

label_805367C8:
    ctx->pc = 0x805367C8u;
    ctx->downcount -= 6;
    // 805367C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805367CC:
    ctx->pc = 0x805367CCu;
    // 805367CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805367D0:
    ctx->pc = 0x805367D0u;
    // 805367D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805367D4:
    // 805367D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805367D8:
    ctx->pc = 0x805367D8u;
    // 805367D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805367DC:
    ctx->pc = 0x805367DCu;
    ctx->downcount -= 12;
    // 805367DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805367E0:
    ctx->pc = 0x805367E0u;
    // 805367E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805367E4:
    ctx->pc = 0x805367E4u;
    // 805367E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805367E8:
    ctx->pc = 0x805367E8u;
    // 805367E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805367EC:
    // 805367EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805367F0:
    ctx->pc = 0x805367F0u;
    // 805367F0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805367F4:
    ctx->pc = 0x805367F4u;
    // 805367F4: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805367F8:
    // 805367F8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805367FC:
    // 805367FC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80536800:
    // 80536800: bl      0x800076B4
    {
            ctx->lr = 0x80536804u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80536804:
    ctx->downcount -= 2;
    // 80536804: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536808:
    // 80536808: bc    12, 2, 0x80536828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536828;
        }
    }

label_8053680C:
    ctx->pc = 0x8053680Cu;
    ctx->downcount -= 8;
    // 8053680C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536810:
    ctx->pc = 0x80536810u;
    // 80536810: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536814:
    // 80536814: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80536818:
    ctx->pc = 0x80536818u;
    // 80536818: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053681C:
    // 8053681C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80536820:
    // 80536820: bl      0x800076E4
    {
            ctx->lr = 0x80536824u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80536824:
    ctx->downcount -= 1;
    // 80536824: nop
    // nop

label_80536828:
    ctx->pc = 0x80536828u;
    ctx->downcount -= 6;
    // 80536828: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053682C:
    ctx->pc = 0x8053682Cu;
    // 8053682C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536830:
    ctx->pc = 0x80536830u;
    // 80536830: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536834:
    // 80536834: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536838:
    ctx->pc = 0x80536838u;
    // 80536838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053683C:
    ctx->pc = 0x8053683Cu;
    ctx->downcount -= 12;
    // 8053683C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536840:
    ctx->pc = 0x80536840u;
    // 80536840: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536844:
    ctx->pc = 0x80536844u;
    // 80536844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536848:
    ctx->pc = 0x80536848u;
    // 80536848: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8053684C:
    // 8053684C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536850:
    ctx->pc = 0x80536850u;
    // 80536850: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536854:
    ctx->pc = 0x80536854u;
    // 80536854: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536858:
    // 80536858: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8053685C:
    // 8053685C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80536860:
    // 80536860: bl      0x800076B4
    {
            ctx->lr = 0x80536864u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80536864:
    ctx->downcount -= 2;
    // 80536864: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536868:
    // 80536868: bc    12, 2, 0x80536888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536888;
        }
    }

label_8053686C:
    ctx->pc = 0x8053686Cu;
    ctx->downcount -= 8;
    // 8053686C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536870:
    ctx->pc = 0x80536870u;
    // 80536870: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536874:
    // 80536874: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80536878:
    ctx->pc = 0x80536878u;
    // 80536878: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8053687C:
    // 8053687C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80536880:
    // 80536880: bl      0x800076E4
    {
            ctx->lr = 0x80536884u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80536884:
    ctx->downcount -= 1;
    // 80536884: nop
    // nop

label_80536888:
    ctx->pc = 0x80536888u;
    ctx->downcount -= 6;
    // 80536888: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8053688C:
    ctx->pc = 0x8053688Cu;
    // 8053688C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536890:
    ctx->pc = 0x80536890u;
    // 80536890: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536894:
    // 80536894: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536898:
    ctx->pc = 0x80536898u;
    // 80536898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053689C:
    ctx->pc = 0x8053689Cu;
    ctx->downcount -= 18;
    // 8053689C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805368A0:
    ctx->pc = 0x805368A0u;
    // 805368A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805368A4:
    // 805368A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805368A8:
    ctx->pc = 0x805368A8u;
    // 805368A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805368AC:
    ctx->pc = 0x805368ACu;
    // 805368AC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805368B0:
    // 805368B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805368B4:
    // 805368B4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805368B8:
    // 805368B8: bc    12, 2, 0x805368E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805368E8;
        }
    }

label_805368BC:
    ctx->downcount -= 1;
    // 805368BC: bc    12, 2, 0x805368D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805368D8;
        }
    }

label_805368C0:
    ctx->downcount -= 3;
    // 805368C0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805368C4:
    // 805368C4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805368C8:
    // 805368C8: bl      0x80536474
    {
            ctx->lr = 0x805368CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536474u;
                return;
            }
            goto label_80536474;
    }

label_805368CC:
    ctx->downcount -= 3;
    // 805368CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805368D0:
    // 805368D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805368D4:
    // 805368D4: bl      0x801ED118
    {
            ctx->lr = 0x805368D8u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_805368D8:
    ctx->downcount -= 2;
    // 805368D8: cmpwi   r31, 0
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

label_805368DC:
    // 805368DC: bc    4, 1, 0x805368E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805368E8;
        }
    }

label_805368E0:
    ctx->downcount -= 2;
    // 805368E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805368E4:
    // 805368E4: bl      0x801C1C90
    {
            ctx->lr = 0x805368E8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805368E8:
    ctx->downcount -= 17;
    // 805368E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805368EC:
    ctx->pc = 0x805368ECu;
    // 805368EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805368F0:
    ctx->pc = 0x805368F0u;
    // 805368F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805368F4:
    ctx->pc = 0x805368F4u;
    // 805368F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805368F8:
    // 805368F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805368FC:
    ctx->pc = 0x805368FCu;
    // 805368FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536900:
    ctx->downcount -= 2;
    // 80536900: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80536904:
    // 80536904: b       0x8053640C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053640Cu;
                return;
            }
            goto label_8053640C;
    }

label_80536908:
    ctx->downcount -= 2;
    // 80536908: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8053690C:
    // 8053690C: b       0x8053689C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053689Cu;
                return;
            }
            goto label_8053689C;
    }

label_80536910:
    ctx->pc = 0x80536910u;
    ctx->downcount -= 5;
    // 80536910: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536914:
    ctx->pc = 0x80536914u;
    // 80536914: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536918:
    ctx->pc = 0x80536918u;
    // 80536918: cmpwi   r4, 0
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

label_8053691C:
    ctx->pc = 0x8053691Cu;
    // 8053691C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536920:
    ctx->pc = 0x80536920u;
    // 80536920: bc    4, 1, 0x805369E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805369E0;
        }
    }

label_80536924:
    ctx->pc = 0x80536924u;
    ctx->downcount -= 2;
    // 80536924: cmpwi   r4, 30
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536928:
    ctx->pc = 0x80536928u;
    // 80536928: bc    4, 2, 0x80536938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536938;
        }
    }

label_8053692C:
    ctx->pc = 0x8053692Cu;
    ctx->downcount -= 2;
    // 8053692C: li      r3, 878
    ctx->gpr[3] = (u32)(s32)(878);

label_80536930:
    ctx->pc = 0x80536930u;
    // 80536930: bl      0x802B73BC
    {
            ctx->lr = 0x80536934u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80536934:
    ctx->pc = 0x80536934u;
    ctx->downcount -= 1;
    // 80536934: b       0x805369E0
    {
            goto label_805369E0;
    }

label_80536938:
    ctx->pc = 0x80536938u;
    ctx->downcount -= 2;
    // 80536938: cmpwi   r4, 20
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053693C:
    ctx->pc = 0x8053693Cu;
    // 8053693C: bc    12, 0, 0x80536978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536978;
        }
    }

label_80536940:
    ctx->pc = 0x80536940u;
    ctx->downcount -= 3;
    // 80536940: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536944:
    ctx->pc = 0x80536944u;
    // 80536944: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536948:
    ctx->pc = 0x80536948u;
    // 80536948: bc    4, 0, 0x80536978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536978;
        }
    }

label_8053694C:
    ctx->pc = 0x8053694Cu;
    ctx->downcount -= 10;
    // 8053694C: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_80536950:
    ctx->pc = 0x80536950u;
    // 80536950: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80536954:
    ctx->pc = 0x80536954u;
    // 80536954: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536958:
    ctx->pc = 0x80536958u;
    // 80536958: li      r3, 877
    ctx->gpr[3] = (u32)(s32)(877);

label_8053695C:
    ctx->pc = 0x8053695Cu;
    // 8053695C: lfd     f1, 17216(r2)
    if (!ppc_fp_available_inline(ctx, 0x8053695Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17216);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80536960:
    ctx->pc = 0x80536960u;
    // 80536960: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536964:
    ctx->pc = 0x80536964u;
    // 80536964: lfs     f2, 17208(r2)
    if (!ppc_fp_available_inline(ctx, 0x80536964u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80536968:
    ctx->pc = 0x80536968u;
    // 80536968: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8053696C:
    ctx->pc = 0x8053696Cu;
    // 8053696C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8053696Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_80536970:
    ctx->pc = 0x80536970u;
    // 80536970: bl      0x802B73AC
    {
            ctx->lr = 0x80536974u;
            ctx->pc = 0x802B73ACu;
            return;
    }

label_80536974:
    ctx->pc = 0x80536974u;
    ctx->downcount -= 1;
    // 80536974: b       0x805369E0
    {
            goto label_805369E0;
    }

label_80536978:
    ctx->pc = 0x80536978u;
    ctx->downcount -= 2;
    // 80536978: cmpwi   r4, 10
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8053697C:
    ctx->pc = 0x8053697Cu;
    // 8053697C: bc    12, 0, 0x805369B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805369B8;
        }
    }

label_80536980:
    ctx->pc = 0x80536980u;
    ctx->downcount -= 3;
    // 80536980: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536984:
    ctx->pc = 0x80536984u;
    // 80536984: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536988:
    ctx->pc = 0x80536988u;
    // 80536988: bc    4, 0, 0x805369B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805369B8;
        }
    }

label_8053698C:
    ctx->pc = 0x8053698Cu;
    ctx->downcount -= 10;
    // 8053698C: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_80536990:
    ctx->pc = 0x80536990u;
    // 80536990: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80536994:
    ctx->pc = 0x80536994u;
    // 80536994: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80536998:
    ctx->pc = 0x80536998u;
    // 80536998: li      r3, 876
    ctx->gpr[3] = (u32)(s32)(876);

label_8053699C:
    ctx->pc = 0x8053699Cu;
    // 8053699C: lfd     f1, 17216(r2)
    if (!ppc_fp_available_inline(ctx, 0x8053699Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17216);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805369A0:
    ctx->pc = 0x805369A0u;
    // 805369A0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805369A4:
    ctx->pc = 0x805369A4u;
    // 805369A4: lfs     f2, 17208(r2)
    if (!ppc_fp_available_inline(ctx, 0x805369A4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805369A8:
    ctx->pc = 0x805369A8u;
    // 805369A8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805369A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805369AC:
    ctx->pc = 0x805369ACu;
    // 805369AC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x805369ACu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_805369B0:
    ctx->pc = 0x805369B0u;
    // 805369B0: bl      0x802B73AC
    {
            ctx->lr = 0x805369B4u;
            ctx->pc = 0x802B73ACu;
            return;
    }

label_805369B4:
    ctx->pc = 0x805369B4u;
    ctx->downcount -= 1;
    // 805369B4: b       0x805369E0
    {
            goto label_805369E0;
    }

label_805369B8:
    ctx->pc = 0x805369B8u;
    ctx->downcount -= 10;
    // 805369B8: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_805369BC:
    ctx->pc = 0x805369BCu;
    // 805369BC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_805369C0:
    ctx->pc = 0x805369C0u;
    // 805369C0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805369C4:
    ctx->pc = 0x805369C4u;
    // 805369C4: li      r3, 874
    ctx->gpr[3] = (u32)(s32)(874);

label_805369C8:
    ctx->pc = 0x805369C8u;
    // 805369C8: lfd     f1, 17216(r2)
    if (!ppc_fp_available_inline(ctx, 0x805369C8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17216);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805369CC:
    ctx->pc = 0x805369CCu;
    // 805369CC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805369D0:
    ctx->pc = 0x805369D0u;
    // 805369D0: lfs     f2, 17208(r2)
    if (!ppc_fp_available_inline(ctx, 0x805369D0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805369D4:
    ctx->pc = 0x805369D4u;
    // 805369D4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805369D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805369D8:
    ctx->pc = 0x805369D8u;
    // 805369D8: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x805369D8u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_805369DC:
    ctx->pc = 0x805369DCu;
    // 805369DC: bl      0x802B73AC
    {
            ctx->lr = 0x805369E0u;
            ctx->pc = 0x802B73ACu;
            return;
    }

label_805369E0:
    ctx->pc = 0x805369E0u;
    ctx->downcount -= 5;
    // 805369E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805369E4:
    ctx->pc = 0x805369E4u;
    // 805369E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805369E8:
    ctx->pc = 0x805369E8u;
    // 805369E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805369EC:
    ctx->pc = 0x805369ECu;
    // 805369EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805369F0:
    ctx->pc = 0x805369F0u;
    ctx->downcount -= 6;
    // 805369F0: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805369F4:
    ctx->pc = 0x805369F4u;
    // 805369F4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805369F8:
    ctx->pc = 0x805369F8u;
    // 805369F8: stb     r5, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_805369FC:
    ctx->pc = 0x805369FCu;
    // 805369FC: stw     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536A00:
    ctx->pc = 0x80536A00u;
    // 80536A00: stw     r4, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536A04:
    ctx->pc = 0x80536A04u;
    // 80536A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536A08:
    ctx->pc = 0x80536A08u;
    ctx->downcount -= 8;
    // 80536A08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536A0C:
    ctx->pc = 0x80536A0Cu;
    // 80536A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536A10:
    ctx->pc = 0x80536A10u;
    // 80536A10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536A14:
    ctx->pc = 0x80536A14u;
    // 80536A14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80536A18:
    ctx->pc = 0x80536A18u;
    // 80536A18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536A1C:
    ctx->pc = 0x80536A1Cu;
    // 80536A1C: lbz     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80536A20:
    ctx->pc = 0x80536A20u;
    // 80536A20: cmplwi  r0, 0x0001
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

label_80536A24:
    ctx->pc = 0x80536A24u;
    // 80536A24: bc    4, 2, 0x80536B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536B3C;
        }
    }

label_80536A28:
    ctx->pc = 0x80536A28u;
    ctx->downcount -= 8;
    // 80536A28: lwz     r4, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536A2C:
    ctx->pc = 0x80536A2Cu;
    // 80536A2C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536A30:
    ctx->pc = 0x80536A30u;
    // 80536A30: lwz     r7, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80536A34:
    ctx->pc = 0x80536A34u;
    // 80536A34: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80536A38:
    ctx->pc = 0x80536A38u;
    // 80536A38: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80536A3C:
    ctx->pc = 0x80536A3Cu;
    // 80536A3C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80536A40:
    ctx->pc = 0x80536A40u;
    // 80536A40: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80536A44:
    ctx->pc = 0x80536A44u;
    // 80536A44: bl      0x8026F828
    {
            ctx->lr = 0x80536A48u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80536A48:
    ctx->pc = 0x80536A48u;
    ctx->downcount -= 4;
    // 80536A48: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536A4C:
    ctx->pc = 0x80536A4Cu;
    // 80536A4C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80536A50:
    ctx->pc = 0x80536A50u;
    // 80536A50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536A54:
    ctx->pc = 0x80536A54u;
    // 80536A54: bl      0x8026FEF0
    {
            ctx->lr = 0x80536A58u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536A58:
    ctx->pc = 0x80536A58u;
    ctx->downcount -= 3;
    // 80536A58: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536A5C:
    ctx->pc = 0x80536A5Cu;
    // 80536A5C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80536A60:
    ctx->pc = 0x80536A60u;
    // 80536A60: bl      0x8026F6AC
    {
            ctx->lr = 0x80536A64u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536A64:
    ctx->pc = 0x80536A64u;
    ctx->downcount -= 1;
    // 80536A64: bl      0x8025EC94
    {
            ctx->lr = 0x80536A68u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80536A68:
    ctx->pc = 0x80536A68u;
    ctx->downcount -= 3;
    // 80536A68: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536A6C:
    ctx->pc = 0x80536A6Cu;
    // 80536A6C: cmpwi   r4, 0
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

label_80536A70:
    ctx->pc = 0x80536A70u;
    // 80536A70: bc    12, 2, 0x80536AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536AB8;
        }
    }

label_80536A74:
    ctx->pc = 0x80536A74u;
    ctx->downcount -= 3;
    // 80536A74: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536A78:
    ctx->pc = 0x80536A78u;
    // 80536A78: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80536A7C:
    ctx->pc = 0x80536A7Cu;
    // 80536A7C: bl      0x8026F6AC
    {
            ctx->lr = 0x80536A80u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536A80:
    ctx->pc = 0x80536A80u;
    ctx->downcount -= 1;
    // 80536A80: bl      0x8025EAF8
    {
            ctx->lr = 0x80536A84u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_80536A84:
    ctx->pc = 0x80536A84u;
    ctx->downcount -= 2;
    // 80536A84: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536A88:
    ctx->pc = 0x80536A88u;
    // 80536A88: bc    4, 2, 0x80536AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536AB8;
        }
    }

label_80536A8C:
    ctx->pc = 0x80536A8Cu;
    ctx->downcount -= 5;
    // 80536A8C: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536A90:
    ctx->pc = 0x80536A90u;
    // 80536A90: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536A94:
    ctx->pc = 0x80536A94u;
    // 80536A94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536A98:
    ctx->pc = 0x80536A98u;
    // 80536A98: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80536A9C:
    ctx->pc = 0x80536A9Cu;
    // 80536A9C: bl      0x8026FEF0
    {
            ctx->lr = 0x80536AA0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536AA0:
    ctx->pc = 0x80536AA0u;
    ctx->downcount -= 4;
    // 80536AA0: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536AA4:
    ctx->pc = 0x80536AA4u;
    // 80536AA4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536AA8:
    ctx->pc = 0x80536AA8u;
    // 80536AA8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80536AAC:
    ctx->pc = 0x80536AACu;
    // 80536AAC: bl      0x8026F6AC
    {
            ctx->lr = 0x80536AB0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536AB0:
    ctx->pc = 0x80536AB0u;
    ctx->downcount -= 2;
    // 80536AB0: lfs     f1, 17224(r2)
    if (!ppc_fp_available_inline(ctx, 0x80536AB0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80536AB4:
    ctx->pc = 0x80536AB4u;
    // 80536AB4: bl      0x8025EBE8
    {
            ctx->lr = 0x80536AB8u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_80536AB8:
    ctx->pc = 0x80536AB8u;
    ctx->downcount -= 5;
    // 80536AB8: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536ABC:
    ctx->pc = 0x80536ABCu;
    // 80536ABC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536AC0:
    ctx->pc = 0x80536AC0u;
    // 80536AC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536AC4:
    ctx->pc = 0x80536AC4u;
    // 80536AC4: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_80536AC8:
    ctx->pc = 0x80536AC8u;
    // 80536AC8: bl      0x8026FEF0
    {
            ctx->lr = 0x80536ACCu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536ACC:
    ctx->pc = 0x80536ACCu;
    ctx->downcount -= 4;
    // 80536ACC: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536AD0:
    ctx->pc = 0x80536AD0u;
    // 80536AD0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536AD4:
    ctx->pc = 0x80536AD4u;
    // 80536AD4: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_80536AD8:
    ctx->pc = 0x80536AD8u;
    // 80536AD8: bl      0x8026F6AC
    {
            ctx->lr = 0x80536ADCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536ADC:
    ctx->pc = 0x80536ADCu;
    ctx->downcount -= 1;
    // 80536ADC: bl      0x8025EC94
    {
            ctx->lr = 0x80536AE0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80536AE0:
    ctx->pc = 0x80536AE0u;
    ctx->downcount -= 3;
    // 80536AE0: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536AE4:
    ctx->pc = 0x80536AE4u;
    // 80536AE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536AE8:
    ctx->pc = 0x80536AE8u;
    // 80536AE8: bl      0x80536910
    {
            ctx->lr = 0x80536AECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536910u;
                return;
            }
            goto label_80536910;
    }

label_80536AEC:
    ctx->pc = 0x80536AECu;
    ctx->downcount -= 4;
    // 80536AEC: lbz     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80536AF0:
    ctx->pc = 0x80536AF0u;
    // 80536AF0: lwz     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536AF4:
    ctx->pc = 0x80536AF4u;
    // 80536AF4: cmpw    r3, r0
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

label_80536AF8:
    ctx->pc = 0x80536AF8u;
    // 80536AF8: bc    4, 0, 0x80536B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536B30;
        }
    }

label_80536AFC:
    ctx->pc = 0x80536AFCu;
    ctx->downcount -= 3;
    // 80536AFC: lbz     r0, 277(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(277);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80536B00:
    ctx->pc = 0x80536B00u;
    // 80536B00: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536B04:
    ctx->pc = 0x80536B04u;
    // 80536B04: bc    4, 2, 0x80536B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536B30;
        }
    }

label_80536B08:
    ctx->pc = 0x80536B08u;
    ctx->downcount -= 4;
    // 80536B08: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536B0C:
    ctx->pc = 0x80536B0Cu;
    // 80536B0C: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80536B10:
    ctx->pc = 0x80536B10u;
    // 80536B10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536B14:
    ctx->pc = 0x80536B14u;
    // 80536B14: bl      0x8026FEF0
    {
            ctx->lr = 0x80536B18u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536B18:
    ctx->pc = 0x80536B18u;
    ctx->downcount -= 3;
    // 80536B18: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80536B1C:
    ctx->pc = 0x80536B1Cu;
    // 80536B1C: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80536B20:
    ctx->pc = 0x80536B20u;
    // 80536B20: bl      0x8026F6AC
    {
            ctx->lr = 0x80536B24u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536B24:
    ctx->pc = 0x80536B24u;
    ctx->downcount -= 1;
    // 80536B24: bl      0x8025EC94
    {
            ctx->lr = 0x80536B28u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80536B28:
    ctx->pc = 0x80536B28u;
    ctx->downcount -= 2;
    // 80536B28: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80536B2C:
    ctx->pc = 0x80536B2Cu;
    // 80536B2C: stb     r0, 277(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(277);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536B30:
    ctx->pc = 0x80536B30u;
    ctx->downcount -= 3;
    // 80536B30: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80536B34:
    ctx->pc = 0x80536B34u;
    // 80536B34: stb     r0, 278(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(278);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536B38:
    ctx->pc = 0x80536B38u;
    // 80536B38: b       0x80536B68
    {
            goto label_80536B68;
    }

label_80536B3C:
    ctx->pc = 0x80536B3Cu;
    ctx->downcount -= 2;
    // 80536B3C: cmplwi  r0, 0x0002
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

label_80536B40:
    ctx->pc = 0x80536B40u;
    // 80536B40: bc    4, 2, 0x80536B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536B68;
        }
    }

label_80536B44:
    ctx->pc = 0x80536B44u;
    ctx->downcount -= 4;
    // 80536B44: lwz     r4, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536B48:
    ctx->pc = 0x80536B48u;
    // 80536B48: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80536B4C:
    ctx->pc = 0x80536B4Cu;
    // 80536B4C: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_80536B50:
    ctx->pc = 0x80536B50u;
    // 80536B50: bl      0x8026F6AC
    {
            ctx->lr = 0x80536B54u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536B54:
    ctx->pc = 0x80536B54u;
    ctx->downcount -= 1;
    // 80536B54: bl      0x8025EAF8
    {
            ctx->lr = 0x80536B58u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_80536B58:
    ctx->pc = 0x80536B58u;
    ctx->downcount -= 2;
    // 80536B58: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536B5C:
    ctx->pc = 0x80536B5Cu;
    // 80536B5C: bc    12, 2, 0x80536B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536B68;
        }
    }

label_80536B60:
    ctx->pc = 0x80536B60u;
    ctx->downcount -= 2;
    // 80536B60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80536B64:
    ctx->pc = 0x80536B64u;
    // 80536B64: stb     r0, 278(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(278);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536B68:
    ctx->pc = 0x80536B68u;
    ctx->downcount -= 6;
    // 80536B68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536B6C:
    ctx->pc = 0x80536B6Cu;
    // 80536B6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80536B70:
    ctx->pc = 0x80536B70u;
    // 80536B70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536B74:
    ctx->pc = 0x80536B74u;
    // 80536B74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80536B78:
    ctx->pc = 0x80536B78u;
    // 80536B78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536B7C:
    ctx->pc = 0x80536B7Cu;
    ctx->downcount -= 4;
    // 80536B7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80536B80:
    ctx->pc = 0x80536B80u;
    // 80536B80: stb     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536B84:
    ctx->pc = 0x80536B84u;
    // 80536B84: stb     r0, 277(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(277);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536B88:
    ctx->pc = 0x80536B88u;
    // 80536B88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536B8C:
    ctx->pc = 0x80536B8Cu;
    ctx->downcount -= 7;
    // 80536B8C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536B90:
    ctx->pc = 0x80536B90u;
    // 80536B90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536B94:
    ctx->pc = 0x80536B94u;
    // 80536B94: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536B98:
    ctx->pc = 0x80536B98u;
    // 80536B98: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80536B9C:
    ctx->pc = 0x80536B9Cu;
    // 80536B9C: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80536BA0:
    ctx->pc = 0x80536BA0u;
    // 80536BA0: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80536BA0u);
        if (ctx->exception) return;
    }

label_80536BA4:
    ctx->pc = 0x80536BA4u;
    // 80536BA4: bl      0x8000784C
    {
            ctx->lr = 0x80536BA8u;
            ctx->pc = 0x8000784Cu;
            return;
    }

label_80536BA8:
    ctx->pc = 0x80536BA8u;
    ctx->downcount -= 8;
    // 80536BA8: lbz     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80536BAC:
    ctx->pc = 0x80536BACu;
    // 80536BAC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536BB0:
    ctx->pc = 0x80536BB0u;
    // 80536BB0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536BB4:
    ctx->pc = 0x80536BB4u;
    // 80536BB4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80536BB8:
    ctx->pc = 0x80536BB8u;
    // 80536BB8: cmpw    r6, r0
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

label_80536BBC:
    ctx->pc = 0x80536BBCu;
    // 80536BBC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80536BC0:
    ctx->pc = 0x80536BC0u;
    // 80536BC0: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80536BC4:
    ctx->pc = 0x80536BC4u;
    // 80536BC4: bc    4, 1, 0x80536BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536BCC;
        }
    }

label_80536BC8:
    ctx->pc = 0x80536BC8u;
    ctx->downcount -= 1;
    // 80536BC8: stb     r6, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80536BCC:
    ctx->pc = 0x80536BCCu;
    ctx->downcount -= 4;
    // 80536BCC: lis     r25, -32658
    ctx->gpr[25] = ((u32)(s32)(-32658) << 16);

label_80536BD0:
    ctx->pc = 0x80536BD0u;
    // 80536BD0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80536BD4:
    ctx->pc = 0x80536BD4u;
    // 80536BD4: addi    r25, r25, 8416
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(8416);

label_80536BD8:
    ctx->pc = 0x80536BD8u;
    // 80536BD8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80536BDC:
    ctx->pc = 0x80536BDCu;
    ctx->downcount -= 3;
    // 80536BDC: lwzx    r4, r25, r26
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[26];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536BE0:
    // 80536BE0: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536BE4:
    // 80536BE4: bl      0x8026F970
    {
            ctx->lr = 0x80536BE8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536BE8:
    ctx->downcount -= 10;
    // 80536BE8: subf   r0, r31, r24
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[24];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80536BEC:
    // 80536BEC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80536BF0:
    // 80536BF0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80536BF4:
    ctx->pc = 0x80536BF4u;
    // 80536BF4: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80536BF8:
    // 80536BF8: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80536BFC:
    // 80536BFC: cmplwi  r24, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536C00:
    // 80536C00: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80536C04:
    ctx->pc = 0x80536C04u;
    // 80536C04: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536C08:
    // 80536C08: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_80536C0C:
    // 80536C0C: bc    12, 0, 0x80536BDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536BDCu;
                return;
            }
            goto label_80536BDC;
        }
    }

label_80536C10:
    ctx->pc = 0x80536C10u;
    ctx->downcount -= 2;
    // 80536C10: cmpwi   r30, 0
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

label_80536C14:
    ctx->pc = 0x80536C14u;
    // 80536C14: bc    12, 2, 0x80536C24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536C24;
        }
    }

label_80536C18:
    ctx->pc = 0x80536C18u;
    ctx->downcount -= 3;
    // 80536C18: lwz     r0, 280(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536C1C:
    ctx->pc = 0x80536C1Cu;
    // 80536C1C: cmpw    r0, r30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536C20:
    ctx->pc = 0x80536C20u;
    // 80536C20: bc    12, 0, 0x80536C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536C4C;
        }
    }

label_80536C24:
    ctx->pc = 0x80536C24u;
    ctx->downcount -= 6;
    // 80536C24: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80536C28:
    ctx->pc = 0x80536C28u;
    // 80536C28: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80536C2C:
    ctx->pc = 0x80536C2Cu;
    // 80536C2C: addi    r4, r4, 8416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8416);

label_80536C30:
    ctx->pc = 0x80536C30u;
    // 80536C30: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536C34:
    ctx->pc = 0x80536C34u;
    // 80536C34: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536C38:
    ctx->pc = 0x80536C38u;
    // 80536C38: bl      0x8026F970
    {
            ctx->lr = 0x80536C3Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536C3C:
    ctx->pc = 0x80536C3Cu;
    ctx->downcount -= 4;
    // 80536C3C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80536C40:
    ctx->pc = 0x80536C40u;
    // 80536C40: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80536C44:
    ctx->pc = 0x80536C44u;
    // 80536C44: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80536C48:
    ctx->pc = 0x80536C48u;
    // 80536C48: b       0x80536E48
    {
            goto label_80536E48;
    }

label_80536C4C:
    ctx->pc = 0x80536C4Cu;
    ctx->downcount -= 2;
    // 80536C4C: cmpwi   r31, 0
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

label_80536C50:
    ctx->pc = 0x80536C50u;
    // 80536C50: bc    12, 2, 0x80536C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536C68;
        }
    }

label_80536C54:
    ctx->pc = 0x80536C54u;
    ctx->downcount -= 2;
    // 80536C54: cmpwi   r31, 1
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

label_80536C58:
    ctx->pc = 0x80536C58u;
    // 80536C58: bc    12, 2, 0x80536CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536CF8;
        }
    }

label_80536C5C:
    ctx->pc = 0x80536C5Cu;
    ctx->downcount -= 2;
    // 80536C5C: cmpwi   r31, 2
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

label_80536C60:
    ctx->pc = 0x80536C60u;
    // 80536C60: bc    12, 2, 0x80536D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80536D5C;
        }
    }

label_80536C64:
    ctx->pc = 0x80536C64u;
    ctx->downcount -= 1;
    // 80536C64: b       0x80536D90
    {
            goto label_80536D90;
    }

label_80536C68:
    ctx->pc = 0x80536C68u;
    ctx->downcount -= 4;
    // 80536C68: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536C6C:
    ctx->pc = 0x80536C6Cu;
    // 80536C6C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536C70:
    ctx->pc = 0x80536C70u;
    // 80536C70: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536C74:
    ctx->pc = 0x80536C74u;
    // 80536C74: bl      0x8027CB94
    {
            ctx->lr = 0x80536C78u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536C78:
    ctx->pc = 0x80536C78u;
    ctx->downcount -= 4;
    // 80536C78: lis     r26, -32658
    ctx->gpr[26] = ((u32)(s32)(-32658) << 16);

label_80536C7C:
    ctx->pc = 0x80536C7Cu;
    // 80536C7C: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536C80:
    ctx->pc = 0x80536C80u;
    // 80536C80: lwz     r4, 8392(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8392);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536C84:
    ctx->pc = 0x80536C84u;
    // 80536C84: bl      0x8026F970
    {
            ctx->lr = 0x80536C88u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536C88:
    ctx->pc = 0x80536C88u;
    ctx->downcount -= 4;
    // 80536C88: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536C8C:
    ctx->pc = 0x80536C8Cu;
    // 80536C8C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536C90:
    ctx->pc = 0x80536C90u;
    // 80536C90: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536C94:
    ctx->pc = 0x80536C94u;
    // 80536C94: bl      0x8027CC74
    {
            ctx->lr = 0x80536C98u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536C98:
    ctx->pc = 0x80536C98u;
    ctx->downcount -= 4;
    // 80536C98: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536C9C:
    ctx->pc = 0x80536C9Cu;
    // 80536C9C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536CA0:
    ctx->pc = 0x80536CA0u;
    // 80536CA0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CA4:
    ctx->pc = 0x80536CA4u;
    // 80536CA4: bl      0x8027CB94
    {
            ctx->lr = 0x80536CA8u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536CA8:
    ctx->pc = 0x80536CA8u;
    ctx->downcount -= 4;
    // 80536CA8: addi    r26, r26, 8392
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8392);

label_80536CAC:
    ctx->pc = 0x80536CACu;
    // 80536CAC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536CB0:
    ctx->pc = 0x80536CB0u;
    // 80536CB0: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536CB4:
    ctx->pc = 0x80536CB4u;
    // 80536CB4: bl      0x8026F970
    {
            ctx->lr = 0x80536CB8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536CB8:
    ctx->pc = 0x80536CB8u;
    ctx->downcount -= 4;
    // 80536CB8: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536CBC:
    ctx->pc = 0x80536CBCu;
    // 80536CBC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536CC0:
    ctx->pc = 0x80536CC0u;
    // 80536CC0: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CC4:
    ctx->pc = 0x80536CC4u;
    // 80536CC4: bl      0x8027CC74
    {
            ctx->lr = 0x80536CC8u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536CC8:
    ctx->pc = 0x80536CC8u;
    ctx->downcount -= 4;
    // 80536CC8: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CCC:
    ctx->pc = 0x80536CCCu;
    // 80536CCC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536CD0:
    ctx->pc = 0x80536CD0u;
    // 80536CD0: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CD4:
    ctx->pc = 0x80536CD4u;
    // 80536CD4: bl      0x8027CB94
    {
            ctx->lr = 0x80536CD8u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536CD8:
    ctx->pc = 0x80536CD8u;
    ctx->downcount -= 3;
    // 80536CD8: lwz     r4, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536CDC:
    ctx->pc = 0x80536CDCu;
    // 80536CDC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536CE0:
    ctx->pc = 0x80536CE0u;
    // 80536CE0: bl      0x8026F970
    {
            ctx->lr = 0x80536CE4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536CE4:
    ctx->pc = 0x80536CE4u;
    ctx->downcount -= 4;
    // 80536CE4: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536CE8:
    ctx->pc = 0x80536CE8u;
    // 80536CE8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536CEC:
    ctx->pc = 0x80536CECu;
    // 80536CEC: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CF0:
    ctx->pc = 0x80536CF0u;
    // 80536CF0: bl      0x8027CC74
    {
            ctx->lr = 0x80536CF4u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536CF4:
    ctx->pc = 0x80536CF4u;
    ctx->downcount -= 1;
    // 80536CF4: b       0x80536D90
    {
            goto label_80536D90;
    }

label_80536CF8:
    ctx->pc = 0x80536CF8u;
    ctx->downcount -= 4;
    // 80536CF8: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536CFC:
    ctx->pc = 0x80536CFCu;
    // 80536CFC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536D00:
    ctx->pc = 0x80536D00u;
    // 80536D00: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D04:
    ctx->pc = 0x80536D04u;
    // 80536D04: bl      0x8027CB94
    {
            ctx->lr = 0x80536D08u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536D08:
    ctx->pc = 0x80536D08u;
    ctx->downcount -= 5;
    // 80536D08: lis     r26, -32658
    ctx->gpr[26] = ((u32)(s32)(-32658) << 16);

label_80536D0C:
    ctx->pc = 0x80536D0Cu;
    // 80536D0C: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536D10:
    ctx->pc = 0x80536D10u;
    // 80536D10: addi    r26, r26, 8392
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8392);

label_80536D14:
    ctx->pc = 0x80536D14u;
    // 80536D14: lwz     r4, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536D18:
    ctx->pc = 0x80536D18u;
    // 80536D18: bl      0x8026F970
    {
            ctx->lr = 0x80536D1Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536D1C:
    ctx->pc = 0x80536D1Cu;
    ctx->downcount -= 4;
    // 80536D1C: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536D20:
    ctx->pc = 0x80536D20u;
    // 80536D20: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536D24:
    ctx->pc = 0x80536D24u;
    // 80536D24: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D28:
    ctx->pc = 0x80536D28u;
    // 80536D28: bl      0x8027CC74
    {
            ctx->lr = 0x80536D2Cu;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536D2C:
    ctx->pc = 0x80536D2Cu;
    ctx->downcount -= 4;
    // 80536D2C: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D30:
    ctx->pc = 0x80536D30u;
    // 80536D30: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536D34:
    ctx->pc = 0x80536D34u;
    // 80536D34: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D38:
    ctx->pc = 0x80536D38u;
    // 80536D38: bl      0x8027CB94
    {
            ctx->lr = 0x80536D3Cu;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536D3C:
    ctx->pc = 0x80536D3Cu;
    ctx->downcount -= 3;
    // 80536D3C: lwz     r4, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536D40:
    ctx->pc = 0x80536D40u;
    // 80536D40: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536D44:
    ctx->pc = 0x80536D44u;
    // 80536D44: bl      0x8026F970
    {
            ctx->lr = 0x80536D48u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536D48:
    ctx->pc = 0x80536D48u;
    ctx->downcount -= 4;
    // 80536D48: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536D4C:
    ctx->pc = 0x80536D4Cu;
    // 80536D4C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536D50:
    ctx->pc = 0x80536D50u;
    // 80536D50: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D54:
    ctx->pc = 0x80536D54u;
    // 80536D54: bl      0x8027CC74
    {
            ctx->lr = 0x80536D58u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536D58:
    ctx->pc = 0x80536D58u;
    ctx->downcount -= 1;
    // 80536D58: b       0x80536D90
    {
            goto label_80536D90;
    }

label_80536D5C:
    ctx->pc = 0x80536D5Cu;
    ctx->downcount -= 4;
    // 80536D5C: lwz     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D60:
    ctx->pc = 0x80536D60u;
    // 80536D60: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80536D64:
    ctx->pc = 0x80536D64u;
    // 80536D64: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D68:
    ctx->pc = 0x80536D68u;
    // 80536D68: bl      0x8027CB94
    {
            ctx->lr = 0x80536D6Cu;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80536D6C:
    ctx->pc = 0x80536D6Cu;
    ctx->downcount -= 5;
    // 80536D6C: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80536D70:
    ctx->pc = 0x80536D70u;
    // 80536D70: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536D74:
    ctx->pc = 0x80536D74u;
    // 80536D74: addi    r4, r4, 8392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8392);

label_80536D78:
    ctx->pc = 0x80536D78u;
    // 80536D78: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536D7C:
    ctx->pc = 0x80536D7Cu;
    // 80536D7C: bl      0x8026F970
    {
            ctx->lr = 0x80536D80u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536D80:
    ctx->pc = 0x80536D80u;
    ctx->downcount -= 4;
    // 80536D80: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536D84:
    ctx->pc = 0x80536D84u;
    // 80536D84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536D88:
    ctx->pc = 0x80536D88u;
    // 80536D88: lwz     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80536D8C:
    ctx->pc = 0x80536D8Cu;
    // 80536D8C: bl      0x8027CC74
    {
            ctx->lr = 0x80536D90u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80536D90:
    ctx->pc = 0x80536D90u;
    ctx->downcount -= 4;
    // 80536D90: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536D94:
    ctx->pc = 0x80536D94u;
    // 80536D94: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80536D98:
    ctx->pc = 0x80536D98u;
    // 80536D98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536D9C:
    ctx->pc = 0x80536D9Cu;
    // 80536D9C: bl      0x8026FEF0
    {
            ctx->lr = 0x80536DA0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536DA0:
    ctx->pc = 0x80536DA0u;
    ctx->downcount -= 3;
    // 80536DA0: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536DA4:
    ctx->pc = 0x80536DA4u;
    // 80536DA4: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80536DA8:
    ctx->pc = 0x80536DA8u;
    // 80536DA8: bl      0x8026F6AC
    {
            ctx->lr = 0x80536DACu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536DAC:
    ctx->pc = 0x80536DACu;
    ctx->downcount -= 1;
    // 80536DAC: bl      0x8025ED28
    {
            ctx->lr = 0x80536DB0u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80536DB0:
    ctx->pc = 0x80536DB0u;
    ctx->downcount -= 2;
    // 80536DB0: cmpwi   r31, 0
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

label_80536DB4:
    ctx->pc = 0x80536DB4u;
    // 80536DB4: bc    4, 2, 0x80536DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80536DD8;
        }
    }

label_80536DB8:
    ctx->pc = 0x80536DB8u;
    ctx->downcount -= 3;
    // 80536DB8: lwz     r4, -22116(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536DBC:
    ctx->pc = 0x80536DBCu;
    // 80536DBC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536DC0:
    ctx->pc = 0x80536DC0u;
    // 80536DC0: bl      0x8026F960
    {
            ctx->lr = 0x80536DC4u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80536DC4:
    ctx->pc = 0x80536DC4u;
    ctx->downcount -= 5;
    // 80536DC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536DC8:
    ctx->pc = 0x80536DC8u;
    // 80536DC8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80536DCC:
    ctx->pc = 0x80536DCCu;
    // 80536DCC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536DD0:
    ctx->pc = 0x80536DD0u;
    // 80536DD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536DD4:
    ctx->pc = 0x80536DD4u;
    // 80536DD4: bl      0x8026F760
    {
            ctx->lr = 0x80536DD8u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_80536DD8:
    ctx->pc = 0x80536DD8u;
    ctx->downcount -= 6;
    // 80536DD8: lwz     r5, -22108(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80536DDC:
    ctx->pc = 0x80536DDCu;
    // 80536DDC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80536DE0:
    ctx->pc = 0x80536DE0u;
    // 80536DE0: addi    r6, r30, -1
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(-1);

label_80536DE4:
    ctx->pc = 0x80536DE4u;
    // 80536DE4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80536DE8:
    ctx->pc = 0x80536DE8u;
    // 80536DE8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80536DEC:
    ctx->pc = 0x80536DECu;
    // 80536DEC: bl      0x8000D074
    {
            ctx->lr = 0x80536DF0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80536DF0:
    ctx->pc = 0x80536DF0u;
    ctx->downcount -= 3;
    // 80536DF0: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536DF4:
    ctx->pc = 0x80536DF4u;
    // 80536DF4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80536DF8:
    ctx->pc = 0x80536DF8u;
    // 80536DF8: bl      0x8026F970
    {
            ctx->lr = 0x80536DFCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536DFC:
    ctx->pc = 0x80536DFCu;
    ctx->downcount -= 7;
    // 80536DFC: lis     r4, -32658
    ctx->gpr[4] = ((u32)(s32)(-32658) << 16);

label_80536E00:
    ctx->pc = 0x80536E00u;
    // 80536E00: lfs     f31, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80536E00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80536E04:
    ctx->pc = 0x80536E04u;
    // 80536E04: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80536E08:
    ctx->pc = 0x80536E08u;
    // 80536E08: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80536E0C:
    ctx->pc = 0x80536E0Cu;
    // 80536E0C: addi    r4, r4, 8416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8416);

label_80536E10:
    ctx->pc = 0x80536E10u;
    // 80536E10: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536E14:
    ctx->pc = 0x80536E14u;
    // 80536E14: bl      0x8026F970
    {
            ctx->lr = 0x80536E18u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80536E18:
    ctx->pc = 0x80536E18u;
    ctx->downcount -= 12;
    // 80536E18: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536E1C:
    ctx->pc = 0x80536E1Cu;
    // 80536E1C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536E20:
    ctx->pc = 0x80536E20u;
    // 80536E20: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536E24:
    ctx->pc = 0x80536E24u;
    // 80536E24: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536E28:
    ctx->pc = 0x80536E28u;
    // 80536E28: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80536E2C:
    ctx->pc = 0x80536E2Cu;
    // 80536E2C: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80536E2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80536E30:
    ctx->pc = 0x80536E30u;
    // 80536E30: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536E34:
    ctx->pc = 0x80536E34u;
    // 80536E34: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80536E38:
    ctx->pc = 0x80536E38u;
    // 80536E38: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80536E3C:
    ctx->pc = 0x80536E3Cu;
    // 80536E3C: stfs     f31, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80536E3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80536E40:
    ctx->pc = 0x80536E40u;
    // 80536E40: stfs     f31, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80536E44:
    ctx->pc = 0x80536E44u;
    // 80536E44: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80536E44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80536E48:
    ctx->pc = 0x80536E48u;
    ctx->downcount -= 4;
    // 80536E48: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80536E4C:
    ctx->pc = 0x80536E4Cu;
    // 80536E4C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536E4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80536E4Cu);
        if (ctx->exception) return;
    }

label_80536E50:
    ctx->pc = 0x80536E50u;
    // 80536E50: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80536E54:
    ctx->pc = 0x80536E54u;
    // 80536E54: bl      0x80007898
    {
            ctx->lr = 0x80536E58u;
            ctx->pc = 0x80007898u;
            return;
    }

label_80536E58:
    ctx->pc = 0x80536E58u;
    ctx->downcount -= 5;
    // 80536E58: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536E5C:
    ctx->pc = 0x80536E5Cu;
    // 80536E5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536E60:
    ctx->pc = 0x80536E60u;
    // 80536E60: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80536E64:
    ctx->pc = 0x80536E64u;
    // 80536E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536E68:
    ctx->pc = 0x80536E68u;
    ctx->downcount -= 9;
    // 80536E68: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536E6C:
    ctx->pc = 0x80536E6Cu;
    // 80536E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536E70:
    ctx->pc = 0x80536E70u;
    // 80536E70: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536E74:
    ctx->pc = 0x80536E74u;
    // 80536E74: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80536E78:
    ctx->pc = 0x80536E78u;
    // 80536E78: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80536E7C:
    ctx->pc = 0x80536E7Cu;
    // 80536E7C: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536E7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80536E7Cu);
        if (ctx->exception) return;
    }

label_80536E80:
    ctx->pc = 0x80536E80u;
    // 80536E80: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536E80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_80536E84:
    ctx->pc = 0x80536E84u;
    // 80536E84: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536E84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80536E84u);
        if (ctx->exception) return;
    }

label_80536E88:
    ctx->pc = 0x80536E88u;
    // 80536E88: bl      0x80007860
    {
            ctx->lr = 0x80536E8Cu;
            ctx->pc = 0x80007860u;
            return;
    }

label_80536E8C:
    ctx->pc = 0x80536E8Cu;
    ctx->downcount -= 9;
    // 80536E8C: rlwinm r0, r5, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_80536E90:
    ctx->pc = 0x80536E90u;
    // 80536E90: stw     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536E94:
    ctx->pc = 0x80536E94u;
    // 80536E94: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80536E98:
    ctx->pc = 0x80536E98u;
    // 80536E98: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536E9C:
    ctx->pc = 0x80536E9Cu;
    // 80536E9C: stw     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536EA0:
    ctx->pc = 0x80536EA0u;
    // 80536EA0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80536EA4:
    ctx->pc = 0x80536EA4u;
    // 80536EA4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80536EA8:
    ctx->pc = 0x80536EA8u;
    // 80536EA8: lwz     r4, -22120(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536EAC:
    ctx->pc = 0x80536EACu;
    // 80536EAC: bl      0x8026F958
    {
            ctx->lr = 0x80536EB0u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_80536EB0:
    ctx->pc = 0x80536EB0u;
    ctx->downcount -= 5;
    // 80536EB0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536EB4:
    ctx->pc = 0x80536EB4u;
    // 80536EB4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80536EB8:
    ctx->pc = 0x80536EB8u;
    // 80536EB8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536EBC:
    ctx->pc = 0x80536EBCu;
    // 80536EBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80536EC0:
    ctx->pc = 0x80536EC0u;
    // 80536EC0: bl      0x8026F720
    {
            ctx->lr = 0x80536EC4u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_80536EC4:
    ctx->pc = 0x80536EC4u;
    ctx->downcount -= 8;
    // 80536EC4: lwz     r4, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80536EC8:
    ctx->pc = 0x80536EC8u;
    // 80536EC8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80536ECC:
    ctx->pc = 0x80536ECCu;
    // 80536ECC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536ED0:
    ctx->pc = 0x80536ED0u;
    // 80536ED0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536ED4:
    ctx->pc = 0x80536ED4u;
    // 80536ED4: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_80536ED8:
    ctx->pc = 0x80536ED8u;
    // 80536ED8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80536EDC:
    ctx->pc = 0x80536EDCu;
    // 80536EDC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80536EE0:
    ctx->pc = 0x80536EE0u;
    // 80536EE0: bl      0x8026F828
    {
            ctx->lr = 0x80536EE4u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_80536EE4:
    ctx->pc = 0x80536EE4u;
    ctx->downcount -= 3;
    // 80536EE4: lfs     f30, 17224(r2)
    if (!ppc_fp_available_inline(ctx, 0x80536EE4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(17224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_80536EE8:
    ctx->pc = 0x80536EE8u;
    // 80536EE8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80536EEC:
    ctx->pc = 0x80536EECu;
    // 80536EEC: b       0x80536F2C
    {
            goto label_80536F2C;
    }

label_80536EF0:
    ctx->downcount -= 4;
    // 80536EF0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536EF4:
    // 80536EF4: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_80536EF8:
    // 80536EF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536EFC:
    // 80536EFC: bl      0x8026FEF0
    {
            ctx->lr = 0x80536F00u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536F00:
    ctx->downcount -= 3;
    // 80536F00: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536F04:
    // 80536F04: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_80536F08:
    // 80536F08: bl      0x8026F6AC
    {
            ctx->lr = 0x80536F0Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536F0C:
    ctx->downcount -= 1;
    // 80536F0C: bl      0x8025EA70
    {
            ctx->lr = 0x80536F10u;
            ctx->pc = 0x8025EA70u;
            return;
    }

label_80536F10:
    ctx->pc = 0x80536F10u;
    ctx->downcount -= 4;
    // 80536F10: fsubs   f31, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x80536F10u)) return;
    ppc_fsubs(ctx, 31, 1, 30);

label_80536F14:
    // 80536F14: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536F18:
    // 80536F18: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_80536F1C:
    // 80536F1C: bl      0x8026F6AC
    {
            ctx->lr = 0x80536F20u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536F20:
    ctx->pc = 0x80536F20u;
    ctx->downcount -= 2;
    // 80536F20: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80536F20u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80536F24:
    // 80536F24: bl      0x8025EB54
    {
            ctx->lr = 0x80536F28u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_80536F28:
    ctx->downcount -= 1;
    // 80536F28: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80536F2C:
    ctx->downcount -= 2;
    // 80536F2C: cmpw    r31, r30
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536F30:
    // 80536F30: bc    12, 0, 0x80536EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536EF0u;
                return;
            }
            goto label_80536EF0;
        }
    }

label_80536F34:
    ctx->pc = 0x80536F34u;
    ctx->downcount -= 1;
    // 80536F34: b       0x80536F5C
    {
            goto label_80536F5C;
    }

label_80536F38:
    ctx->downcount -= 4;
    // 80536F38: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536F3C:
    // 80536F3C: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_80536F40:
    // 80536F40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80536F44:
    // 80536F44: bl      0x8026FEF0
    {
            ctx->lr = 0x80536F48u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80536F48:
    ctx->downcount -= 3;
    // 80536F48: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536F4C:
    // 80536F4C: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_80536F50:
    // 80536F50: bl      0x8026F6AC
    {
            ctx->lr = 0x80536F54u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80536F54:
    ctx->downcount -= 1;
    // 80536F54: bl      0x8025ED28
    {
            ctx->lr = 0x80536F58u;
            ctx->pc = 0x8025ED28u;
            return;
    }

label_80536F58:
    ctx->downcount -= 1;
    // 80536F58: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80536F5C:
    ctx->downcount -= 2;
    // 80536F5C: cmpwi   r31, 30
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80536F60:
    // 80536F60: bc    12, 0, 0x80536F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80536F38u;
                return;
            }
            goto label_80536F38;
        }
    }

label_80536F64:
    ctx->pc = 0x80536F64u;
    ctx->downcount -= 6;
    // 80536F64: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80536F68:
    ctx->pc = 0x80536F68u;
    // 80536F68: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80536F68u);
        if (ctx->exception) return;
    }

label_80536F6C:
    ctx->pc = 0x80536F6Cu;
    // 80536F6C: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536F6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80536F70:
    ctx->pc = 0x80536F70u;
    // 80536F70: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80536F70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80536F70u);
        if (ctx->exception) return;
    }

label_80536F74:
    ctx->pc = 0x80536F74u;
    // 80536F74: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80536F74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80536F78:
    ctx->pc = 0x80536F78u;
    // 80536F78: bl      0x800078AC
    {
            ctx->lr = 0x80536F7Cu;
            ctx->pc = 0x800078ACu;
            return;
    }

label_80536F7C:
    ctx->pc = 0x80536F7Cu;
    ctx->downcount -= 5;
    // 80536F7C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80536F80:
    ctx->pc = 0x80536F80u;
    // 80536F80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80536F84:
    ctx->pc = 0x80536F84u;
    // 80536F84: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80536F88:
    ctx->pc = 0x80536F88u;
    // 80536F88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_80536F8C:
    ctx->pc = 0x80536F8Cu;
    ctx->downcount -= 24;
    // 80536F8C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80536F90:
    ctx->pc = 0x80536F90u;
    // 80536F90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80536F94:
    ctx->pc = 0x80536F94u;
    // 80536F94: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80536F98:
    ctx->pc = 0x80536F98u;
    // 80536F98: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80536F9C:
    ctx->pc = 0x80536F9Cu;
    // 80536F9C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80536FA0:
    ctx->pc = 0x80536FA0u;
    // 80536FA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80536FA4:
    ctx->pc = 0x80536FA4u;
    // 80536FA4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80536FA8:
    ctx->pc = 0x80536FA8u;
    // 80536FA8: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80536FAC:
    ctx->pc = 0x80536FACu;
    // 80536FAC: addi    r31, r4, 17056
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(17056);

label_80536FB0:
    ctx->pc = 0x80536FB0u;
    // 80536FB0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80536FB4:
    ctx->pc = 0x80536FB4u;
    // 80536FB4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80536FB8:
    ctx->pc = 0x80536FB8u;
    // 80536FB8: addi    r4, r31, 206
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(206);

label_80536FBC:
    ctx->pc = 0x80536FBCu;
    // 80536FBC: addi    r5, r31, 219
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(219);

label_80536FC0:
    ctx->pc = 0x80536FC0u;
    // 80536FC0: bl      0x802703A8
    {
            ctx->lr = 0x80536FC4u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80536FC4:
    ctx->pc = 0x80536FC4u;
    ctx->downcount -= 6;
    // 80536FC4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536FC8:
    ctx->pc = 0x80536FC8u;
    // 80536FC8: addi    r5, r31, 250
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(250);

label_80536FCC:
    ctx->pc = 0x80536FCCu;
    // 80536FCC: addi    r6, r31, 253
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(253);

label_80536FD0:
    ctx->pc = 0x80536FD0u;
    // 80536FD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80536FD4:
    ctx->pc = 0x80536FD4u;
    // 80536FD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80536FD8:
    ctx->pc = 0x80536FD8u;
    // 80536FD8: bl      0x8027035C
    {
            ctx->lr = 0x80536FDCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80536FDC:
    ctx->pc = 0x80536FDCu;
    ctx->downcount -= 6;
    // 80536FDC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536FE0:
    ctx->pc = 0x80536FE0u;
    // 80536FE0: addi    r5, r31, 264
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(264);

label_80536FE4:
    ctx->pc = 0x80536FE4u;
    // 80536FE4: addi    r6, r31, 253
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(253);

label_80536FE8:
    ctx->pc = 0x80536FE8u;
    // 80536FE8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80536FEC:
    ctx->pc = 0x80536FECu;
    // 80536FEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80536FF0:
    ctx->pc = 0x80536FF0u;
    // 80536FF0: bl      0x8027035C
    {
            ctx->lr = 0x80536FF4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80536FF4:
    ctx->pc = 0x80536FF4u;
    ctx->downcount -= 6;
    // 80536FF4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80536FF8:
    ctx->pc = 0x80536FF8u;
    // 80536FF8: addi    r5, r31, 268
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(268);

label_80536FFC:
    ctx->pc = 0x80536FFCu;
    // 80536FFC: addi    r6, r31, 276
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(276);

label_80537000:
    ctx->pc = 0x80537000u;
    // 80537000: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80537004:
    ctx->pc = 0x80537004u;
    // 80537004: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80537008:
    ctx->pc = 0x80537008u;
    // 80537008: bl      0x8027035C
    {
            ctx->lr = 0x8053700Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8053700C:
    ctx->pc = 0x8053700Cu;
    ctx->downcount -= 6;
    // 8053700C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80537010:
    ctx->pc = 0x80537010u;
    // 80537010: addi    r5, r31, 268
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(268);

label_80537014:
    ctx->pc = 0x80537014u;
    // 80537014: addi    r6, r31, 287
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(287);

label_80537018:
    ctx->pc = 0x80537018u;
    // 80537018: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8053701C:
    ctx->pc = 0x8053701Cu;
    // 8053701C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80537020:
    ctx->pc = 0x80537020u;
    // 80537020: bl      0x8027035C
    {
            ctx->lr = 0x80537024u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80537024:
    ctx->pc = 0x80537024u;
    ctx->downcount -= 1;
    // 80537024: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_80537028:
    ctx->pc = 0x80537028u;
    ctx->downcount -= 7;
    // 80537028: lwz     r5, -22104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8053702C:
    // 8053702C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80537030:
    // 80537030: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80537034:
    // 80537034: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80537038:
    // 80537038: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8053703C:
    // 8053703C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80537040:
    // 80537040: bl      0x8000D074
    {
            ctx->lr = 0x80537044u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80537044:
    ctx->downcount -= 6;
    // 80537044: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80537048:
    // 80537048: addi    r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3);

label_8053704C:
    // 8053704C: addi    r5, r31, 268
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(268);

label_80537050:
    // 80537050: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80537054:
    // 80537054: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80537058:
    // 80537058: bl      0x8027035C
    {
            ctx->lr = 0x8053705Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8053705C:
    ctx->downcount -= 3;
    // 8053705C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80537060:
    // 80537060: cmpwi   r30, 30
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80537064:
    // 80537064: bc    12, 0, 0x80537028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80537028u;
                return;
            }
            goto label_80537028;
        }
    }

label_80537068:
    ctx->pc = 0x80537068u;
    ctx->downcount -= 8;
    // 80537068: lis     r6, -32664
    ctx->gpr[6] = ((u32)(s32)(-32664) << 16);

label_8053706C:
    ctx->pc = 0x8053706Cu;
    // 8053706C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80537070:
    ctx->pc = 0x80537070u;
    // 80537070: addi    r6, r6, 17056
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(17056);

label_80537074:
    ctx->pc = 0x80537074u;
    // 80537074: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80537078:
    ctx->pc = 0x80537078u;
    // 80537078: addi    r5, r6, 300
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(300);

label_8053707C:
    ctx->pc = 0x8053707Cu;
    // 8053707C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80537080:
    ctx->pc = 0x80537080u;
    // 80537080: addi    r6, r6, 308
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(308);

label_80537084:
    ctx->pc = 0x80537084u;
    // 80537084: bl      0x8027035C
    {
            ctx->lr = 0x80537088u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80537088:
    ctx->pc = 0x80537088u;
    ctx->downcount -= 4;
    // 80537088: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8053708C:
    ctx->pc = 0x8053708Cu;
    // 8053708C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80537090:
    ctx->pc = 0x80537090u;
    // 80537090: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80537094:
    ctx->pc = 0x80537094u;
    // 80537094: bl      0x80270194
    {
            ctx->lr = 0x80537098u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80537098:
    ctx->pc = 0x80537098u;
    ctx->downcount -= 8;
    // 80537098: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8053709C:
    ctx->pc = 0x8053709Cu;
    // 8053709C: stb     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805370A0:
    ctx->pc = 0x805370A0u;
    // 805370A0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_805370A4:
    ctx->pc = 0x805370A4u;
    // 805370A4: stb     r0, 278(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(278);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805370A8:
    ctx->pc = 0x805370A8u;
    // 805370A8: stw     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805370AC:
    ctx->pc = 0x805370ACu;
    // 805370AC: stw     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805370B0:
    ctx->pc = 0x805370B0u;
    // 805370B0: lwz     r4, -22112(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-22112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805370B4:
    ctx->pc = 0x805370B4u;
    // 805370B4: bl      0x8026F968
    {
            ctx->lr = 0x805370B8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805370B8:
    ctx->pc = 0x805370B8u;
    ctx->downcount -= 17;
    // 805370B8: stw     r3, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805370BC:
    ctx->pc = 0x805370BCu;
    // 805370BC: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805370C0:
    ctx->pc = 0x805370C0u;
    // 805370C0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805370C4:
    ctx->pc = 0x805370C4u;
    // 805370C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805370C8:
    ctx->pc = 0x805370C8u;
    // 805370C8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_805370CC:
    ctx->pc = 0x805370CCu;
    // 805370CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_805370D0:
    ctx->pc = 0x805370D0u;
    ctx->downcount -= 18;
    // 805370D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805370D4:
    ctx->pc = 0x805370D4u;
    // 805370D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805370D8:
    ctx->pc = 0x805370D8u;
    // 805370D8: li      r4, 34
    ctx->gpr[4] = (u32)(s32)(34);

label_805370DC:
    ctx->pc = 0x805370DCu;
    // 805370DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805370E0:
    ctx->pc = 0x805370E0u;
    // 805370E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805370E4:
    ctx->pc = 0x805370E4u;
    // 805370E4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805370E8:
    ctx->pc = 0x805370E8u;
    // 805370E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805370EC:
    ctx->pc = 0x805370ECu;
    // 805370EC: bl      0x803715C0
    {
            ctx->lr = 0x805370F0u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_805370F0:
    ctx->pc = 0x805370F0u;
    ctx->downcount -= 11;
    // 805370F0: lis     r6, -32658
    ctx->gpr[6] = ((u32)(s32)(-32658) << 16);

label_805370F4:
    ctx->pc = 0x805370F4u;
    // 805370F4: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_805370F8:
    ctx->pc = 0x805370F8u;
    // 805370F8: addi    r6, r6, 8432
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8432);

label_805370FC:
    ctx->pc = 0x805370FCu;
    // 805370FC: stw     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80537100:
    ctx->pc = 0x80537100u;
    // 80537100: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80537104:
    ctx->pc = 0x80537104u;
    // 80537104: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_80537108:
    ctx->pc = 0x80537108u;
    // 80537108: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_8053710C:
    ctx->pc = 0x8053710Cu;
    // 8053710C: stw     r5, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80537110:
    ctx->pc = 0x80537110u;
    // 80537110: stw     r4, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80537114:
    ctx->pc = 0x80537114u;
    // 80537114: stw     r0, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80537118:
    ctx->pc = 0x80537118u;
    // 80537118: bl      0x801C1C6C
    {
            ctx->lr = 0x8053711Cu;
            ctx->pc = 0x801C1C6Cu;
            return;
    }

label_8053711C:
    ctx->pc = 0x8053711Cu;
    ctx->downcount -= 4;
    // 8053711C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80537120:
    ctx->pc = 0x80537120u;
    // 80537120: stw     r3, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80537124:
    ctx->pc = 0x80537124u;
    // 80537124: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80537128:
    ctx->pc = 0x80537128u;
    // 80537128: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8053712C:
    ctx->pc = 0x8053712Cu;
    ctx->downcount -= 4;
    // 8053712C: lwz     r4, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80537130:
    // 80537130: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80537134:
    ctx->pc = 0x80537134u;
    // 80537134: stwx    r30, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80537138:
    // 80537138: bl      0x8027CCC0
    {
            ctx->lr = 0x8053713Cu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_8053713C:
    ctx->pc = 0x8053713Cu;
    ctx->downcount -= 6;
    // 8053713C: lwz     r4, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80537140:
    // 80537140: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80537144:
    // 80537144: cmpwi   r29, 6
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

label_80537148:
    ctx->pc = 0x80537148u;
    // 80537148: stwx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8053714C:
    // 8053714C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80537150:
    // 80537150: bc    12, 0, 0x8053712C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8053712Cu;
                return;
            }
            goto label_8053712C;
        }
    }

label_80537154:
    ctx->pc = 0x80537154u;
    ctx->downcount -= 17;
    // 80537154: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80537158:
    ctx->pc = 0x80537158u;
    // 80537158: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8053715C:
    ctx->pc = 0x8053715Cu;
    // 8053715C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80537160:
    ctx->pc = 0x80537160u;
    // 80537160: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80537164:
    ctx->pc = 0x80537164u;
    // 80537164: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80537168:
    ctx->pc = 0x80537168u;
    // 80537168: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805331C0;
        }
    }

label_8053716C:
    ctx->pc = 0x8053716Cu;
    ctx->downcount -= 18;
    // 8053716C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80537170:
    ctx->pc = 0x80537170u;
    // 80537170: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80537174:
    ctx->pc = 0x80537174u;
    // 80537174: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80537178:
    ctx->pc = 0x80537178u;
    // 80537178: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8053717C:
    ctx->pc = 0x8053717Cu;
    // 8053717C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80537180:
    ctx->pc = 0x80537180u;
    // 80537180: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80537184:
    ctx->pc = 0x80537184u;
    // 80537184: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80537188:
    ctx->pc = 0x80537188u;
    // 80537188: bc    12, 2, 0x805371BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805371BC;
        }
    }

label_8053718C:
    ctx->pc = 0x8053718Cu;
    ctx->downcount -= 1;
    // 8053718C: bc    12, 2, 0x805371AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805371AC;
        }
    }

label_80537190:
    ctx->pc = 0x80537190u;
    ctx->downcount -= 1;
    // 80537190: bc    12, 2, 0x805371AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805371AC;
        }
    }

label_80537194:
    ctx->pc = 0x80537194u;
    ctx->downcount -= 3;
    // 80537194: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80537198:
    ctx->pc = 0x80537198u;
    // 80537198: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8053719C:
    ctx->pc = 0x8053719Cu;
    // 8053719C: bl      0x801F5C24
    {
            ctx->lr = 0x805371A0u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805371A0:
    ctx->pc = 0x805371A0u;
    ctx->downcount -= 3;
    // 805371A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805371A4:
    ctx->pc = 0x805371A4u;
    // 805371A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805371A8:
    ctx->pc = 0x805371A8u;
    // 805371A8: bl      0x801F9C70
    {
            ctx->lr = 0x805371ACu;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_805371AC:
    ctx->pc = 0x805371ACu;
    ctx->downcount -= 2;
    // 805371AC: cmpwi   r31, 0
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

label_805371B0:
    ctx->pc = 0x805371B0u;
    // 805371B0: bc    4, 1, 0x805371BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805371BC;
        }
    }

label_805371B4:
    ctx->pc = 0x805371B4u;
    ctx->downcount -= 2;
    // 805371B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805371B8:
    ctx->pc = 0x805371B8u;
    // 805371B8: bl      0x801C1C90
    {
            ctx->lr = 0x805371BCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805371BC:
    ctx->pc = 0x805371BCu;
    ctx->downcount -= 1;
    // 805371BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

    ctx->pc = 0x805371C0u;
    return;
return_dispatch_805331C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x805331C4u: goto label_805331C4;
    case 0x805331F4u: goto label_805331F4;
    case 0x80533200u: goto label_80533200;
    case 0x80533220u: goto label_80533220;
    case 0x8053322Cu: goto label_8053322C;
    case 0x80533238u: goto label_80533238;
    case 0x80533258u: goto label_80533258;
    case 0x80533270u: goto label_80533270;
    case 0x805332BCu: goto label_805332BC;
    case 0x805332D8u: goto label_805332D8;
    case 0x80533358u: goto label_80533358;
    case 0x8053336Cu: goto label_8053336C;
    case 0x80533388u: goto label_80533388;
    case 0x805333C8u: goto label_805333C8;
    case 0x80533410u: goto label_80533410;
    case 0x8053342Cu: goto label_8053342C;
    case 0x80533478u: goto label_80533478;
    case 0x8053348Cu: goto label_8053348C;
    case 0x805334B0u: goto label_805334B0;
    case 0x805334C0u: goto label_805334C0;
    case 0x805334D4u: goto label_805334D4;
    case 0x805334F8u: goto label_805334F8;
    case 0x8053350Cu: goto label_8053350C;
    case 0x8053351Cu: goto label_8053351C;
    case 0x80533530u: goto label_80533530;
    case 0x80533554u: goto label_80533554;
    case 0x80533568u: goto label_80533568;
    case 0x80533578u: goto label_80533578;
    case 0x8053358Cu: goto label_8053358C;
    case 0x805335B0u: goto label_805335B0;
    case 0x805335D8u: goto label_805335D8;
    case 0x805335ECu: goto label_805335EC;
    case 0x805335FCu: goto label_805335FC;
    case 0x80533610u: goto label_80533610;
    case 0x80533634u: goto label_80533634;
    case 0x80533648u: goto label_80533648;
    case 0x80533670u: goto label_80533670;
    case 0x80533684u: goto label_80533684;
    case 0x80533694u: goto label_80533694;
    case 0x805336A8u: goto label_805336A8;
    case 0x805336CCu: goto label_805336CC;
    case 0x805336E0u: goto label_805336E0;
    case 0x805336F0u: goto label_805336F0;
    case 0x80533704u: goto label_80533704;
    case 0x80533728u: goto label_80533728;
    case 0x8053373Cu: goto label_8053373C;
    case 0x8053374Cu: goto label_8053374C;
    case 0x80533760u: goto label_80533760;
    case 0x80533784u: goto label_80533784;
    case 0x80533798u: goto label_80533798;
    case 0x805337E0u: goto label_805337E0;
    case 0x80533808u: goto label_80533808;
    case 0x80533814u: goto label_80533814;
    case 0x80533828u: goto label_80533828;
    case 0x80533830u: goto label_80533830;
    case 0x8053386Cu: goto label_8053386C;
    case 0x80533894u: goto label_80533894;
    case 0x805338A0u: goto label_805338A0;
    case 0x805338B4u: goto label_805338B4;
    case 0x805338BCu: goto label_805338BC;
    case 0x805338F8u: goto label_805338F8;
    case 0x80533920u: goto label_80533920;
    case 0x8053392Cu: goto label_8053392C;
    case 0x80533940u: goto label_80533940;
    case 0x805339D0u: goto label_805339D0;
    case 0x805339E4u: goto label_805339E4;
    case 0x805339F8u: goto label_805339F8;
    case 0x80533AD8u: goto label_80533AD8;
    case 0x80533AF4u: goto label_80533AF4;
    case 0x80533B68u: goto label_80533B68;
    case 0x80533B84u: goto label_80533B84;
    case 0x80533B98u: goto label_80533B98;
    case 0x80533BF4u: goto label_80533BF4;
    case 0x80533C10u: goto label_80533C10;
    case 0x80533C38u: goto label_80533C38;
    case 0x80533C7Cu: goto label_80533C7C;
    case 0x80533CD0u: goto label_80533CD0;
    case 0x80533CE4u: goto label_80533CE4;
    case 0x80533CECu: goto label_80533CEC;
    case 0x80533CF4u: goto label_80533CF4;
    case 0x80533D00u: goto label_80533D00;
    case 0x80533D78u: goto label_80533D78;
    case 0x80533D94u: goto label_80533D94;
    case 0x80533DD4u: goto label_80533DD4;
    case 0x80533DECu: goto label_80533DEC;
    case 0x80533E00u: goto label_80533E00;
    case 0x80533E14u: goto label_80533E14;
    case 0x80533E2Cu: goto label_80533E2C;
    case 0x80533E40u: goto label_80533E40;
    case 0x80533E54u: goto label_80533E54;
    case 0x80533E6Cu: goto label_80533E6C;
    case 0x80533E80u: goto label_80533E80;
    case 0x80533E94u: goto label_80533E94;
    case 0x80533EACu: goto label_80533EAC;
    case 0x80533EC0u: goto label_80533EC0;
    case 0x80533ED4u: goto label_80533ED4;
    case 0x80533EECu: goto label_80533EEC;
    case 0x80533F00u: goto label_80533F00;
    case 0x80533F14u: goto label_80533F14;
    case 0x80533F2Cu: goto label_80533F2C;
    case 0x80533F40u: goto label_80533F40;
    case 0x80533F54u: goto label_80533F54;
    case 0x80533F6Cu: goto label_80533F6C;
    case 0x80533F80u: goto label_80533F80;
    case 0x80533F94u: goto label_80533F94;
    case 0x80533FACu: goto label_80533FAC;
    case 0x80533FC0u: goto label_80533FC0;
    case 0x80533FFCu: goto label_80533FFC;
    case 0x80534018u: goto label_80534018;
    case 0x80534030u: goto label_80534030;
    case 0x8053403Cu: goto label_8053403C;
    case 0x80534054u: goto label_80534054;
    case 0x8053405Cu: goto label_8053405C;
    case 0x80534088u: goto label_80534088;
    case 0x8053409Cu: goto label_8053409C;
    case 0x805340A8u: goto label_805340A8;
    case 0x805340B8u: goto label_805340B8;
    case 0x805340C4u: goto label_805340C4;
    case 0x805340D8u: goto label_805340D8;
    case 0x805340F0u: goto label_805340F0;
    case 0x80534100u: goto label_80534100;
    case 0x8053410Cu: goto label_8053410C;
    case 0x8053411Cu: goto label_8053411C;
    case 0x8053412Cu: goto label_8053412C;
    case 0x80534138u: goto label_80534138;
    case 0x80534144u: goto label_80534144;
    case 0x80534150u: goto label_80534150;
    case 0x80534158u: goto label_80534158;
    case 0x80534168u: goto label_80534168;
    case 0x80534174u: goto label_80534174;
    case 0x80534184u: goto label_80534184;
    case 0x80534190u: goto label_80534190;
    case 0x805341A0u: goto label_805341A0;
    case 0x805341ACu: goto label_805341AC;
    case 0x805341BCu: goto label_805341BC;
    case 0x805341CCu: goto label_805341CC;
    case 0x805341D8u: goto label_805341D8;
    case 0x805341E4u: goto label_805341E4;
    case 0x805341F0u: goto label_805341F0;
    case 0x80534218u: goto label_80534218;
    case 0x8053427Cu: goto label_8053427C;
    case 0x80534288u: goto label_80534288;
    case 0x80534298u: goto label_80534298;
    case 0x805342D8u: goto label_805342D8;
    case 0x80534314u: goto label_80534314;
    case 0x8053431Cu: goto label_8053431C;
    case 0x80534330u: goto label_80534330;
    case 0x80534370u: goto label_80534370;
    case 0x80534394u: goto label_80534394;
    case 0x805343ACu: goto label_805343AC;
    case 0x805343C4u: goto label_805343C4;
    case 0x8053445Cu: goto label_8053445C;
    case 0x8053449Cu: goto label_8053449C;
    case 0x80534514u: goto label_80534514;
    case 0x8053457Cu: goto label_8053457C;
    case 0x80534584u: goto label_80534584;
    case 0x8053458Cu: goto label_8053458C;
    case 0x80534594u: goto label_80534594;
    case 0x8053459Cu: goto label_8053459C;
    case 0x805345D8u: goto label_805345D8;
    case 0x805345F8u: goto label_805345F8;
    case 0x80534638u: goto label_80534638;
    case 0x80534658u: goto label_80534658;
    case 0x80534698u: goto label_80534698;
    case 0x805346B8u: goto label_805346B8;
    case 0x80534700u: goto label_80534700;
    case 0x8053470Cu: goto label_8053470C;
    case 0x8053471Cu: goto label_8053471C;
    case 0x80534798u: goto label_80534798;
    case 0x805347A4u: goto label_805347A4;
    case 0x805347B0u: goto label_805347B0;
    case 0x805347BCu: goto label_805347BC;
    case 0x805347C8u: goto label_805347C8;
    case 0x805347D4u: goto label_805347D4;
    case 0x805347E4u: goto label_805347E4;
    case 0x805347F8u: goto label_805347F8;
    case 0x8053480Cu: goto label_8053480C;
    case 0x80534818u: goto label_80534818;
    case 0x80534840u: goto label_80534840;
    case 0x8053484Cu: goto label_8053484C;
    case 0x8053488Cu: goto label_8053488C;
    case 0x80534898u: goto label_80534898;
    case 0x8053489Cu: goto label_8053489C;
    case 0x805348ACu: goto label_805348AC;
    case 0x805348B8u: goto label_805348B8;
    case 0x805348BCu: goto label_805348BC;
    case 0x805348CCu: goto label_805348CC;
    case 0x805348D8u: goto label_805348D8;
    case 0x805348DCu: goto label_805348DC;
    case 0x805348ECu: goto label_805348EC;
    case 0x805348F8u: goto label_805348F8;
    case 0x805348FCu: goto label_805348FC;
    case 0x8053490Cu: goto label_8053490C;
    case 0x80534918u: goto label_80534918;
    case 0x8053491Cu: goto label_8053491C;
    case 0x80534954u: goto label_80534954;
    case 0x80534968u: goto label_80534968;
    case 0x805349D0u: goto label_805349D0;
    case 0x805349DCu: goto label_805349DC;
    case 0x805349E0u: goto label_805349E0;
    case 0x80534A00u: goto label_80534A00;
    case 0x80534A58u: goto label_80534A58;
    case 0x80534A64u: goto label_80534A64;
    case 0x80534A70u: goto label_80534A70;
    case 0x80534A7Cu: goto label_80534A7C;
    case 0x80534A88u: goto label_80534A88;
    case 0x80534AE0u: goto label_80534AE0;
    case 0x80534AF8u: goto label_80534AF8;
    case 0x80534B10u: goto label_80534B10;
    case 0x80534B28u: goto label_80534B28;
    case 0x80534B40u: goto label_80534B40;
    case 0x80534B58u: goto label_80534B58;
    case 0x80534B70u: goto label_80534B70;
    case 0x80534B88u: goto label_80534B88;
    case 0x80534B98u: goto label_80534B98;
    case 0x80534BACu: goto label_80534BAC;
    case 0x80534BB0u: goto label_80534BB0;
    case 0x80534BD0u: goto label_80534BD0;
    case 0x80534C08u: goto label_80534C08;
    case 0x80534C88u: goto label_80534C88;
    case 0x80534C94u: goto label_80534C94;
    case 0x80534CA4u: goto label_80534CA4;
    case 0x80534D18u: goto label_80534D18;
    case 0x80534D8Cu: goto label_80534D8C;
    case 0x80534D98u: goto label_80534D98;
    case 0x80534D9Cu: goto label_80534D9C;
    case 0x80534DC8u: goto label_80534DC8;
    case 0x80534DFCu: goto label_80534DFC;
    case 0x80534E08u: goto label_80534E08;
    case 0x80534E0Cu: goto label_80534E0C;
    case 0x80534E38u: goto label_80534E38;
    case 0x80534E88u: goto label_80534E88;
    case 0x80534E94u: goto label_80534E94;
    case 0x80534E98u: goto label_80534E98;
    case 0x80534EA8u: goto label_80534EA8;
    case 0x80534EB4u: goto label_80534EB4;
    case 0x80534EB8u: goto label_80534EB8;
    case 0x80534F04u: goto label_80534F04;
    case 0x80534F1Cu: goto label_80534F1C;
    case 0x80534F28u: goto label_80534F28;
    case 0x80534F38u: goto label_80534F38;
    case 0x80534F84u: goto label_80534F84;
    case 0x80534F9Cu: goto label_80534F9C;
    case 0x80534FB4u: goto label_80534FB4;
    case 0x80534FCCu: goto label_80534FCC;
    case 0x80534FE4u: goto label_80534FE4;
    case 0x80534FF4u: goto label_80534FF4;
    case 0x80535000u: goto label_80535000;
    case 0x80535004u: goto label_80535004;
    case 0x80535014u: goto label_80535014;
    case 0x80535020u: goto label_80535020;
    case 0x80535024u: goto label_80535024;
    case 0x80535034u: goto label_80535034;
    case 0x8053505Cu: goto label_8053505C;
    case 0x80535068u: goto label_80535068;
    case 0x80535090u: goto label_80535090;
    case 0x805350A8u: goto label_805350A8;
    case 0x805350DCu: goto label_805350DC;
    case 0x805350ECu: goto label_805350EC;
    case 0x80535110u: goto label_80535110;
    case 0x80535174u: goto label_80535174;
    case 0x805351A0u: goto label_805351A0;
    case 0x805351C0u: goto label_805351C0;
    case 0x80535224u: goto label_80535224;
    case 0x80535230u: goto label_80535230;
    case 0x80535240u: goto label_80535240;
    case 0x805352D8u: goto label_805352D8;
    case 0x805352E4u: goto label_805352E4;
    case 0x805352F8u: goto label_805352F8;
    case 0x80535370u: goto label_80535370;
    case 0x80535384u: goto label_80535384;
    case 0x80535414u: goto label_80535414;
    case 0x80535420u: goto label_80535420;
    case 0x80535424u: goto label_80535424;
    case 0x80535460u: goto label_80535460;
    case 0x80535470u: goto label_80535470;
    case 0x805354D8u: goto label_805354D8;
    case 0x805354F0u: goto label_805354F0;
    case 0x80535508u: goto label_80535508;
    case 0x80535520u: goto label_80535520;
    case 0x80535530u: goto label_80535530;
    case 0x8053553Cu: goto label_8053553C;
    case 0x80535540u: goto label_80535540;
    case 0x80535550u: goto label_80535550;
    case 0x8053555Cu: goto label_8053555C;
    case 0x80535560u: goto label_80535560;
    case 0x80535570u: goto label_80535570;
    case 0x8053557Cu: goto label_8053557C;
    case 0x80535590u: goto label_80535590;
    case 0x805355F8u: goto label_805355F8;
    case 0x80535604u: goto label_80535604;
    case 0x80535644u: goto label_80535644;
    case 0x805356BCu: goto label_805356BC;
    case 0x805356C8u: goto label_805356C8;
    case 0x805356D8u: goto label_805356D8;
    case 0x805357CCu: goto label_805357CC;
    case 0x805357E0u: goto label_805357E0;
    case 0x80535818u: goto label_80535818;
    case 0x80535844u: goto label_80535844;
    case 0x80535878u: goto label_80535878;
    case 0x805358C0u: goto label_805358C0;
    case 0x805358E0u: goto label_805358E0;
    case 0x80535910u: goto label_80535910;
    case 0x80535938u: goto label_80535938;
    case 0x805359B0u: goto label_805359B0;
    case 0x805359D4u: goto label_805359D4;
    case 0x805359E0u: goto label_805359E0;
    case 0x805359E4u: goto label_805359E4;
    case 0x80535A30u: goto label_80535A30;
    case 0x80535A3Cu: goto label_80535A3C;
    case 0x80535A40u: goto label_80535A40;
    case 0x80535A58u: goto label_80535A58;
    case 0x80535AA0u: goto label_80535AA0;
    case 0x80535AFCu: goto label_80535AFC;
    case 0x80535B14u: goto label_80535B14;
    case 0x80535B2Cu: goto label_80535B2C;
    case 0x80535B44u: goto label_80535B44;
    case 0x80535B54u: goto label_80535B54;
    case 0x80535B60u: goto label_80535B60;
    case 0x80535B64u: goto label_80535B64;
    case 0x80535B74u: goto label_80535B74;
    case 0x80535B80u: goto label_80535B80;
    case 0x80535B84u: goto label_80535B84;
    case 0x80535B94u: goto label_80535B94;
    case 0x80535BA0u: goto label_80535BA0;
    case 0x80535BB4u: goto label_80535BB4;
    case 0x80535C6Cu: goto label_80535C6C;
    case 0x80535CE8u: goto label_80535CE8;
    case 0x80535CF4u: goto label_80535CF4;
    case 0x80535D04u: goto label_80535D04;
    case 0x80535D84u: goto label_80535D84;
    case 0x80535DA0u: goto label_80535DA0;
    case 0x80535E30u: goto label_80535E30;
    case 0x80535E48u: goto label_80535E48;
    case 0x80535E54u: goto label_80535E54;
    case 0x80535E60u: goto label_80535E60;
    case 0x80535E6Cu: goto label_80535E6C;
    case 0x80535E78u: goto label_80535E78;
    case 0x80535E84u: goto label_80535E84;
    case 0x80535EC0u: goto label_80535EC0;
    case 0x80535ED4u: goto label_80535ED4;
    case 0x80535EE8u: goto label_80535EE8;
    case 0x80535FA4u: goto label_80535FA4;
    case 0x80535FB8u: goto label_80535FB8;
    case 0x80535FCCu: goto label_80535FCC;
    case 0x80536024u: goto label_80536024;
    case 0x80536034u: goto label_80536034;
    case 0x80536040u: goto label_80536040;
    case 0x805360ACu: goto label_805360AC;
    case 0x805360C4u: goto label_805360C4;
    case 0x805360D4u: goto label_805360D4;
    case 0x805360E4u: goto label_805360E4;
    case 0x805360F4u: goto label_805360F4;
    case 0x80536108u: goto label_80536108;
    case 0x8053615Cu: goto label_8053615C;
    case 0x80536174u: goto label_80536174;
    case 0x80536188u: goto label_80536188;
    case 0x8053619Cu: goto label_8053619C;
    case 0x805361B4u: goto label_805361B4;
    case 0x805361C8u: goto label_805361C8;
    case 0x805361DCu: goto label_805361DC;
    case 0x805361F4u: goto label_805361F4;
    case 0x80536208u: goto label_80536208;
    case 0x8053621Cu: goto label_8053621C;
    case 0x80536234u: goto label_80536234;
    case 0x80536248u: goto label_80536248;
    case 0x80536284u: goto label_80536284;
    case 0x805362A0u: goto label_805362A0;
    case 0x805362B8u: goto label_805362B8;
    case 0x805362C4u: goto label_805362C4;
    case 0x805362DCu: goto label_805362DC;
    case 0x805362E4u: goto label_805362E4;
    case 0x80536334u: goto label_80536334;
    case 0x8053633Cu: goto label_8053633C;
    case 0x8053634Cu: goto label_8053634C;
    case 0x80536358u: goto label_80536358;
    case 0x80536368u: goto label_80536368;
    case 0x80536374u: goto label_80536374;
    case 0x80536384u: goto label_80536384;
    case 0x80536390u: goto label_80536390;
    case 0x805363A0u: goto label_805363A0;
    case 0x805363B0u: goto label_805363B0;
    case 0x805363BCu: goto label_805363BC;
    case 0x805363C8u: goto label_805363C8;
    case 0x805363D4u: goto label_805363D4;
    case 0x80536440u: goto label_80536440;
    case 0x8053644Cu: goto label_8053644C;
    case 0x8053645Cu: goto label_8053645C;
    case 0x8053649Cu: goto label_8053649C;
    case 0x805364E0u: goto label_805364E0;
    case 0x805364E8u: goto label_805364E8;
    case 0x805364FCu: goto label_805364FC;
    case 0x8053653Cu: goto label_8053653C;
    case 0x80536560u: goto label_80536560;
    case 0x80536578u: goto label_80536578;
    case 0x80536590u: goto label_80536590;
    case 0x80536628u: goto label_80536628;
    case 0x80536668u: goto label_80536668;
    case 0x805366E0u: goto label_805366E0;
    case 0x80536748u: goto label_80536748;
    case 0x80536750u: goto label_80536750;
    case 0x80536758u: goto label_80536758;
    case 0x80536760u: goto label_80536760;
    case 0x80536768u: goto label_80536768;
    case 0x805367A4u: goto label_805367A4;
    case 0x805367C4u: goto label_805367C4;
    case 0x80536804u: goto label_80536804;
    case 0x80536824u: goto label_80536824;
    case 0x80536864u: goto label_80536864;
    case 0x80536884u: goto label_80536884;
    case 0x805368CCu: goto label_805368CC;
    case 0x805368D8u: goto label_805368D8;
    case 0x805368E8u: goto label_805368E8;
    case 0x80536934u: goto label_80536934;
    case 0x80536974u: goto label_80536974;
    case 0x805369B4u: goto label_805369B4;
    case 0x805369E0u: goto label_805369E0;
    case 0x80536A48u: goto label_80536A48;
    case 0x80536A58u: goto label_80536A58;
    case 0x80536A64u: goto label_80536A64;
    case 0x80536A68u: goto label_80536A68;
    case 0x80536A80u: goto label_80536A80;
    case 0x80536A84u: goto label_80536A84;
    case 0x80536AA0u: goto label_80536AA0;
    case 0x80536AB0u: goto label_80536AB0;
    case 0x80536AB8u: goto label_80536AB8;
    case 0x80536ACCu: goto label_80536ACC;
    case 0x80536ADCu: goto label_80536ADC;
    case 0x80536AE0u: goto label_80536AE0;
    case 0x80536AECu: goto label_80536AEC;
    case 0x80536B18u: goto label_80536B18;
    case 0x80536B24u: goto label_80536B24;
    case 0x80536B28u: goto label_80536B28;
    case 0x80536B54u: goto label_80536B54;
    case 0x80536B58u: goto label_80536B58;
    case 0x80536BA8u: goto label_80536BA8;
    case 0x80536BE8u: goto label_80536BE8;
    case 0x80536C3Cu: goto label_80536C3C;
    case 0x80536C78u: goto label_80536C78;
    case 0x80536C88u: goto label_80536C88;
    case 0x80536C98u: goto label_80536C98;
    case 0x80536CA8u: goto label_80536CA8;
    case 0x80536CB8u: goto label_80536CB8;
    case 0x80536CC8u: goto label_80536CC8;
    case 0x80536CD8u: goto label_80536CD8;
    case 0x80536CE4u: goto label_80536CE4;
    case 0x80536CF4u: goto label_80536CF4;
    case 0x80536D08u: goto label_80536D08;
    case 0x80536D1Cu: goto label_80536D1C;
    case 0x80536D2Cu: goto label_80536D2C;
    case 0x80536D3Cu: goto label_80536D3C;
    case 0x80536D48u: goto label_80536D48;
    case 0x80536D58u: goto label_80536D58;
    case 0x80536D6Cu: goto label_80536D6C;
    case 0x80536D80u: goto label_80536D80;
    case 0x80536D90u: goto label_80536D90;
    case 0x80536DA0u: goto label_80536DA0;
    case 0x80536DACu: goto label_80536DAC;
    case 0x80536DB0u: goto label_80536DB0;
    case 0x80536DC4u: goto label_80536DC4;
    case 0x80536DD8u: goto label_80536DD8;
    case 0x80536DF0u: goto label_80536DF0;
    case 0x80536DFCu: goto label_80536DFC;
    case 0x80536E18u: goto label_80536E18;
    case 0x80536E58u: goto label_80536E58;
    case 0x80536E8Cu: goto label_80536E8C;
    case 0x80536EB0u: goto label_80536EB0;
    case 0x80536EC4u: goto label_80536EC4;
    case 0x80536EE4u: goto label_80536EE4;
    case 0x80536F00u: goto label_80536F00;
    case 0x80536F0Cu: goto label_80536F0C;
    case 0x80536F10u: goto label_80536F10;
    case 0x80536F20u: goto label_80536F20;
    case 0x80536F28u: goto label_80536F28;
    case 0x80536F48u: goto label_80536F48;
    case 0x80536F54u: goto label_80536F54;
    case 0x80536F58u: goto label_80536F58;
    case 0x80536F7Cu: goto label_80536F7C;
    case 0x80536FC4u: goto label_80536FC4;
    case 0x80536FDCu: goto label_80536FDC;
    case 0x80536FF4u: goto label_80536FF4;
    case 0x8053700Cu: goto label_8053700C;
    case 0x80537024u: goto label_80537024;
    case 0x80537044u: goto label_80537044;
    case 0x8053705Cu: goto label_8053705C;
    case 0x80537088u: goto label_80537088;
    case 0x80537098u: goto label_80537098;
    case 0x805370B8u: goto label_805370B8;
    case 0x805370F0u: goto label_805370F0;
    case 0x8053711Cu: goto label_8053711C;
    case 0x8053713Cu: goto label_8053713C;
    case 0x805371A0u: goto label_805371A0;
    case 0x805371ACu: goto label_805371AC;
    case 0x805371BCu: goto label_805371BC;
    default: return;
    }
}

