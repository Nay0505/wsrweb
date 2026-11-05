// DolRecomp output
// cpu: broadway

#ifndef RECOMP_GENERATED_H
#define RECOMP_GENERATED_H

#define DOLRECOMP_CPU_BROADWAY 1
#define DOLRECOMP_CPU_NAME "broadway"

#include <string.h>
#include <math.h>
#ifndef DOLRECOMP_CPU_HEADER
#define DOLRECOMP_CPU_HEADER "cpu/cpu.h"
#endif
#include DOLRECOMP_CPU_HEADER

#ifndef DOLRECOMP_C_LOOP_CYCLE_BUDGET
#define DOLRECOMP_C_LOOP_CYCLE_BUDGET 256
#endif

/* Cross-chunk calls turn guest recursion into host recursion, and a
   chunk frame is not small. Without a ceiling a deep guest call chain
   overflows the host stack, which is a crash rather than a slow
   emulator. Past the limit the call site falls back to returning to
   the chassis, which is always correct -- ctx->pc already names the
   target, so the chassis simply dispatches it as it did before.
   The counter is plain static, not atomic: the chassis runs the module
   on one CPU thread. */
#ifndef DOLRECOMP_C_MAX_CALL_DEPTH
#define DOLRECOMP_C_MAX_CALL_DEPTH 24
#endif
extern unsigned dolrecomp_call_depth;
static inline int dolrecomp_call_enter(void) {
    if (dolrecomp_call_depth >= (unsigned)DOLRECOMP_C_MAX_CALL_DEPTH)
        return 0;
    dolrecomp_call_depth++;
    return 1;
}
static inline void dolrecomp_call_leave(void) {
    if (dolrecomp_call_depth)
        dolrecomp_call_depth--;
}

static inline u32 dolrecomp_rotl32(u32 value, u32 sh) {
    sh &= 31u;
    return sh ? ((value << sh) | (value >> (32u - sh))) : value;
}

static inline f64 dolrecomp_f32_from_bits(u32 bits) {
    u64 x = bits;
    u64 exp = (x >> 23) & 0xFFu;
    u64 frac = x & 0x007FFFFFu;
    u64 result;
    if (exp > 0 && exp < 255) {
        u64 y = !(exp >> 7);
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    } else if (exp == 0 && frac != 0) {
        exp = 1023 - 126;
        do {
            frac <<= 1;
            exp -= 1;
        } while ((frac & 0x00800000u) == 0);
        result = ((x & 0x80000000u) << 32) | (exp << 52) |
                 ((frac & 0x007FFFFFu) << 29);
    } else {
        u64 y = exp >> 7;
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    }
    f64 value;
    memcpy(&value, &result, sizeof(value));
    return value;
}

static inline u32 dolrecomp_f32_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    u32 exp = (u32)((bits >> 52) & 0x7FFu);
    if (exp > 896 || (bits & 0x7FFFFFFFFFFFFFFFull) == 0) {
        return (u32)(((bits >> 32) & 0xC0000000u) |
                     ((bits >> 29) & 0x3FFFFFFFu));
    }
    if (exp >= 874) {
        u32 result =
            (u32)(0x80000000u | ((bits & 0x000FFFFFFFFFFFFFull) >> 21));
        result >>= 905 - exp;
        result |= (u32)((bits >> 32) & 0x80000000u);
        return result;
    }
    return (u32)(((bits >> 32) & 0xC0000000u) |
                 ((bits >> 29) & 0x3FFFFFFFu));
}

static inline f64 dolrecomp_f64_from_bits(u64 bits) {
    f64 value;
    memcpy(&value, &bits, sizeof(value));
    return value;
}

static inline u64 dolrecomp_f64_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    return bits;
}

static inline f64 dolrecomp_ps_from_bits(u32 bits) {
    return dolrecomp_f32_from_bits(bits);
}

static inline u32 dolrecomp_ps_to_bits(f64 value) {
    return dolrecomp_f32_to_bits(value);
}


// Function entry points
void func_80004000(CPUState* ctx);
void func_800071C0(CPUState* ctx);
void func_8000B1C0(CPUState* ctx);
void func_8000F1C0(CPUState* ctx);
void func_800131C0(CPUState* ctx);
void func_800171C0(CPUState* ctx);
void func_8001B1C0(CPUState* ctx);
void func_8001F1C0(CPUState* ctx);
void func_800231C0(CPUState* ctx);
void func_800271C0(CPUState* ctx);
void func_8002B1C0(CPUState* ctx);
void func_8002F1C0(CPUState* ctx);
void func_800331C0(CPUState* ctx);
void func_800371C0(CPUState* ctx);
void func_8003B1C0(CPUState* ctx);
void func_8003F1C0(CPUState* ctx);
void func_800431C0(CPUState* ctx);
void func_800471C0(CPUState* ctx);
void func_8004B1C0(CPUState* ctx);
void func_8004F1C0(CPUState* ctx);
void func_800531C0(CPUState* ctx);
void func_800571C0(CPUState* ctx);
void func_8005B1C0(CPUState* ctx);
void func_8005F1C0(CPUState* ctx);
void func_800631C0(CPUState* ctx);
void func_800671C0(CPUState* ctx);
void func_8006B1C0(CPUState* ctx);
void func_8006F1C0(CPUState* ctx);
void func_800731C0(CPUState* ctx);
void func_800771C0(CPUState* ctx);
void func_8007B1C0(CPUState* ctx);
void func_8007F1C0(CPUState* ctx);
void func_800831C0(CPUState* ctx);
void func_800871C0(CPUState* ctx);
void func_8008B1C0(CPUState* ctx);
void func_8008F1C0(CPUState* ctx);
void func_800931C0(CPUState* ctx);
void func_800971C0(CPUState* ctx);
void func_8009B1C0(CPUState* ctx);
void func_8009F1C0(CPUState* ctx);
void func_800A31C0(CPUState* ctx);
void func_800A71C0(CPUState* ctx);
void func_800AB1C0(CPUState* ctx);
void func_800AF1C0(CPUState* ctx);
void func_800B31C0(CPUState* ctx);
void func_800B71C0(CPUState* ctx);
void func_800BB1C0(CPUState* ctx);
void func_800BF1C0(CPUState* ctx);
void func_800C31C0(CPUState* ctx);
void func_800C71C0(CPUState* ctx);
void func_800CB1C0(CPUState* ctx);
void func_800CF1C0(CPUState* ctx);
void func_800D31C0(CPUState* ctx);
void func_800D71C0(CPUState* ctx);
void func_800DB1C0(CPUState* ctx);
void func_800DF1C0(CPUState* ctx);
void func_800E31C0(CPUState* ctx);
void func_800E71C0(CPUState* ctx);
void func_800EB1C0(CPUState* ctx);
void func_800EF1C0(CPUState* ctx);
void func_800F31C0(CPUState* ctx);
void func_800F71C0(CPUState* ctx);
void func_800FB1C0(CPUState* ctx);
void func_800FF1C0(CPUState* ctx);
void func_801031C0(CPUState* ctx);
void func_801071C0(CPUState* ctx);
void func_8010B1C0(CPUState* ctx);
void func_8010F1C0(CPUState* ctx);
void func_801131C0(CPUState* ctx);
void func_801171C0(CPUState* ctx);
void func_8011B1C0(CPUState* ctx);
void func_8011F1C0(CPUState* ctx);
void func_801231C0(CPUState* ctx);
void func_801271C0(CPUState* ctx);
void func_8012B1C0(CPUState* ctx);
void func_8012F1C0(CPUState* ctx);
void func_801331C0(CPUState* ctx);
void func_801371C0(CPUState* ctx);
void func_8013B1C0(CPUState* ctx);
void func_8013F1C0(CPUState* ctx);
void func_801431C0(CPUState* ctx);
void func_801471C0(CPUState* ctx);
void func_8014B1C0(CPUState* ctx);
void func_8014F1C0(CPUState* ctx);
void func_801531C0(CPUState* ctx);
void func_801571C0(CPUState* ctx);
void func_8015B1C0(CPUState* ctx);
void func_8015F1C0(CPUState* ctx);
void func_801631C0(CPUState* ctx);
void func_801671C0(CPUState* ctx);
void func_8016B1C0(CPUState* ctx);
void func_8016F1C0(CPUState* ctx);
void func_801731C0(CPUState* ctx);
void func_801771C0(CPUState* ctx);
void func_8017B1C0(CPUState* ctx);
void func_8017F1C0(CPUState* ctx);
void func_801831C0(CPUState* ctx);
void func_801871C0(CPUState* ctx);
void func_8018B1C0(CPUState* ctx);
void func_8018F1C0(CPUState* ctx);
void func_801931C0(CPUState* ctx);
void func_801971C0(CPUState* ctx);
void func_8019B1C0(CPUState* ctx);
void func_8019F1C0(CPUState* ctx);
void func_801A31C0(CPUState* ctx);
void func_801A71C0(CPUState* ctx);
void func_801AB1C0(CPUState* ctx);
void func_801AF1C0(CPUState* ctx);
void func_801B31C0(CPUState* ctx);
void func_801B71C0(CPUState* ctx);
void func_801BB1C0(CPUState* ctx);
void func_801BF1C0(CPUState* ctx);
void func_801C31C0(CPUState* ctx);
void func_801C71C0(CPUState* ctx);
void func_801CB1C0(CPUState* ctx);
void func_801CF1C0(CPUState* ctx);
void func_801D31C0(CPUState* ctx);
void func_801D71C0(CPUState* ctx);
void func_801DB1C0(CPUState* ctx);
void func_801DF1C0(CPUState* ctx);
void func_801E31C0(CPUState* ctx);
void func_801E71C0(CPUState* ctx);
void func_801EB1C0(CPUState* ctx);
void func_801EF1C0(CPUState* ctx);
void func_801F31C0(CPUState* ctx);
void func_801F71C0(CPUState* ctx);
void func_801FB1C0(CPUState* ctx);
void func_801FF1C0(CPUState* ctx);
void func_802031C0(CPUState* ctx);
void func_802071C0(CPUState* ctx);
void func_8020B1C0(CPUState* ctx);
void func_8020F1C0(CPUState* ctx);
void func_802131C0(CPUState* ctx);
void func_802171C0(CPUState* ctx);
void func_8021B1C0(CPUState* ctx);
void func_8021F1C0(CPUState* ctx);
void func_802231C0(CPUState* ctx);
void func_802271C0(CPUState* ctx);
void func_8022B1C0(CPUState* ctx);
void func_8022F1C0(CPUState* ctx);
void func_802331C0(CPUState* ctx);
void func_802371C0(CPUState* ctx);
void func_8023B1C0(CPUState* ctx);
void func_8023F1C0(CPUState* ctx);
void func_802431C0(CPUState* ctx);
void func_802471C0(CPUState* ctx);
void func_8024B1C0(CPUState* ctx);
void func_8024F1C0(CPUState* ctx);
void func_802531C0(CPUState* ctx);
void func_802571C0(CPUState* ctx);
void func_8025B1C0(CPUState* ctx);
void func_8025F1C0(CPUState* ctx);
void func_802631C0(CPUState* ctx);
void func_802671C0(CPUState* ctx);
void func_8026B1C0(CPUState* ctx);
void func_8026F1C0(CPUState* ctx);
void func_802731C0(CPUState* ctx);
void func_802771C0(CPUState* ctx);
void func_8027B1C0(CPUState* ctx);
void func_8027F1C0(CPUState* ctx);
void func_802831C0(CPUState* ctx);
void func_802871C0(CPUState* ctx);
void func_8028B1C0(CPUState* ctx);
void func_8028F1C0(CPUState* ctx);
void func_802931C0(CPUState* ctx);
void func_802971C0(CPUState* ctx);
void func_8029B1C0(CPUState* ctx);
void func_8029F1C0(CPUState* ctx);
void func_802A31C0(CPUState* ctx);
void func_802A71C0(CPUState* ctx);
void func_802AB1C0(CPUState* ctx);
void func_802AF1C0(CPUState* ctx);
void func_802B31C0(CPUState* ctx);
void func_802B71C0(CPUState* ctx);
void func_802BB1C0(CPUState* ctx);
void func_802BF1C0(CPUState* ctx);
void func_802C31C0(CPUState* ctx);
void func_802C71C0(CPUState* ctx);
void func_802CB1C0(CPUState* ctx);
void func_802CF1C0(CPUState* ctx);
void func_802D31C0(CPUState* ctx);
void func_802D71C0(CPUState* ctx);
void func_802DB1C0(CPUState* ctx);
void func_802DF1C0(CPUState* ctx);
void func_802E31C0(CPUState* ctx);
void func_802E71C0(CPUState* ctx);
void func_802EB1C0(CPUState* ctx);
void func_802EF1C0(CPUState* ctx);
void func_802F31C0(CPUState* ctx);
void func_802F71C0(CPUState* ctx);
void func_802FB1C0(CPUState* ctx);
void func_802FF1C0(CPUState* ctx);
void func_803031C0(CPUState* ctx);
void func_803071C0(CPUState* ctx);
void func_8030B1C0(CPUState* ctx);
void func_8030F1C0(CPUState* ctx);
void func_803131C0(CPUState* ctx);
void func_803171C0(CPUState* ctx);
void func_8031B1C0(CPUState* ctx);
void func_8031F1C0(CPUState* ctx);
void func_803231C0(CPUState* ctx);
void func_803271C0(CPUState* ctx);
void func_8032B1C0(CPUState* ctx);
void func_8032F1C0(CPUState* ctx);
void func_803331C0(CPUState* ctx);
void func_803371C0(CPUState* ctx);
void func_8033B1C0(CPUState* ctx);
void func_8033F1C0(CPUState* ctx);
void func_803431C0(CPUState* ctx);
void func_803471C0(CPUState* ctx);
void func_8034B1C0(CPUState* ctx);
void func_8034F1C0(CPUState* ctx);
void func_803531C0(CPUState* ctx);
void func_803571C0(CPUState* ctx);
void func_8035B1C0(CPUState* ctx);
void func_8035F1C0(CPUState* ctx);
void func_803631C0(CPUState* ctx);
void func_803671C0(CPUState* ctx);
void func_8036B1C0(CPUState* ctx);
void func_8036F1C0(CPUState* ctx);
void func_803731C0(CPUState* ctx);
void func_803771C0(CPUState* ctx);
void func_8037B1C0(CPUState* ctx);
void func_8037F1C0(CPUState* ctx);
void func_803831C0(CPUState* ctx);
void func_803871C0(CPUState* ctx);
void func_8038B1C0(CPUState* ctx);
void func_8038F1C0(CPUState* ctx);
void func_803931C0(CPUState* ctx);
void func_803971C0(CPUState* ctx);
void func_8039B1C0(CPUState* ctx);
void func_8039F1C0(CPUState* ctx);
void func_803A31C0(CPUState* ctx);
void func_803A71C0(CPUState* ctx);
void func_803AB1C0(CPUState* ctx);
void func_803AF1C0(CPUState* ctx);
void func_803B31C0(CPUState* ctx);
void func_803B71C0(CPUState* ctx);
void func_803BB1C0(CPUState* ctx);
void func_803BF1C0(CPUState* ctx);
void func_803C31C0(CPUState* ctx);
void func_803C71C0(CPUState* ctx);
void func_803CB1C0(CPUState* ctx);
void func_803CF1C0(CPUState* ctx);
void func_803D31C0(CPUState* ctx);
void func_803D71C0(CPUState* ctx);
void func_803DB1C0(CPUState* ctx);
void func_803DF1C0(CPUState* ctx);
void func_803E31C0(CPUState* ctx);
void func_803E71C0(CPUState* ctx);
void func_803EB1C0(CPUState* ctx);
void func_803EF1C0(CPUState* ctx);
void func_803F31C0(CPUState* ctx);
void func_803F71C0(CPUState* ctx);
void func_803FB1C0(CPUState* ctx);
void func_803FF1C0(CPUState* ctx);
void func_804031C0(CPUState* ctx);
void func_804071C0(CPUState* ctx);
void func_8040B1C0(CPUState* ctx);
void func_8040F1C0(CPUState* ctx);
void func_804131C0(CPUState* ctx);
void func_804171C0(CPUState* ctx);
void func_8041B1C0(CPUState* ctx);
void func_8041F1C0(CPUState* ctx);
void func_804231C0(CPUState* ctx);
void func_804271C0(CPUState* ctx);
void func_8042B1C0(CPUState* ctx);
void func_8042F1C0(CPUState* ctx);
void func_804331C0(CPUState* ctx);
void func_804371C0(CPUState* ctx);
void func_8043B1C0(CPUState* ctx);
void func_8043F1C0(CPUState* ctx);
void func_804431C0(CPUState* ctx);
void func_804471C0(CPUState* ctx);
void func_8044B1C0(CPUState* ctx);
void func_8044F1C0(CPUState* ctx);
void func_804531C0(CPUState* ctx);
void func_804571C0(CPUState* ctx);
void func_8045B1C0(CPUState* ctx);
void func_8045F1C0(CPUState* ctx);
void func_804631C0(CPUState* ctx);
void func_804671C0(CPUState* ctx);
void func_8046B1C0(CPUState* ctx);
void func_8046F1C0(CPUState* ctx);
void func_804731C0(CPUState* ctx);
void func_804771C0(CPUState* ctx);
void func_8047B1C0(CPUState* ctx);
void func_8047F1C0(CPUState* ctx);
void func_804831C0(CPUState* ctx);
void func_804871C0(CPUState* ctx);
void func_8048B1C0(CPUState* ctx);
void func_8048F1C0(CPUState* ctx);
void func_804931C0(CPUState* ctx);
void func_804971C0(CPUState* ctx);
void func_8049B1C0(CPUState* ctx);
void func_8049F1C0(CPUState* ctx);
void func_804A31C0(CPUState* ctx);
void func_804A71C0(CPUState* ctx);
void func_804AB1C0(CPUState* ctx);
void func_804AF1C0(CPUState* ctx);
void func_804B31C0(CPUState* ctx);
void func_804B71C0(CPUState* ctx);
void func_804BB1C0(CPUState* ctx);
void func_804BF1C0(CPUState* ctx);
void func_804C31C0(CPUState* ctx);
void func_804C71C0(CPUState* ctx);
void func_804CB1C0(CPUState* ctx);
void func_804CF1C0(CPUState* ctx);
void func_804D31C0(CPUState* ctx);
void func_804D71C0(CPUState* ctx);
void func_804DB1C0(CPUState* ctx);
void func_804DF1C0(CPUState* ctx);
void func_804E31C0(CPUState* ctx);
void func_804E71C0(CPUState* ctx);
void func_804EB1C0(CPUState* ctx);
void func_804EF1C0(CPUState* ctx);
void func_804F31C0(CPUState* ctx);
void func_804F71C0(CPUState* ctx);
void func_804FB1C0(CPUState* ctx);
void func_804FF1C0(CPUState* ctx);
void func_805031C0(CPUState* ctx);
void func_805071C0(CPUState* ctx);
void func_8050B1C0(CPUState* ctx);
void func_8050F1C0(CPUState* ctx);
void func_805131C0(CPUState* ctx);
void func_805171C0(CPUState* ctx);
void func_8051B1C0(CPUState* ctx);
void func_8051F1C0(CPUState* ctx);
void func_805231C0(CPUState* ctx);
void func_805271C0(CPUState* ctx);
void func_8052B1C0(CPUState* ctx);
void func_8052F1C0(CPUState* ctx);
void func_805331C0(CPUState* ctx);
void func_805371C0(CPUState* ctx);
void func_8053B1C0(CPUState* ctx);
void func_8053F1C0(CPUState* ctx);
void func_805431C0(CPUState* ctx);
void func_805471C0(CPUState* ctx);
void func_8054B1C0(CPUState* ctx);
void func_8054F1C0(CPUState* ctx);
void func_805531C0(CPUState* ctx);
void func_805571C0(CPUState* ctx);
void func_8055B1C0(CPUState* ctx);
void func_8055F1C0(CPUState* ctx);
void func_805631C0(CPUState* ctx);
void func_805671C0(CPUState* ctx);
void func_8056B1C0(CPUState* ctx);
void func_8056F1C0(CPUState* ctx);
void func_805731C0(CPUState* ctx);
void func_805771C0(CPUState* ctx);
void func_8057B1C0(CPUState* ctx);
void func_8057F1C0(CPUState* ctx);
void func_805831C0(CPUState* ctx);
void func_805871C0(CPUState* ctx);
void func_8058B1C0(CPUState* ctx);
void func_8058F1C0(CPUState* ctx);
void func_805931C0(CPUState* ctx);
void func_805971C0(CPUState* ctx);
void func_8059B1C0(CPUState* ctx);
void func_8059F1C0(CPUState* ctx);
void func_805A31C0(CPUState* ctx);
void func_805A71C0(CPUState* ctx);
void func_805AB1C0(CPUState* ctx);
void func_805AF1C0(CPUState* ctx);
void func_805B31C0(CPUState* ctx);
void func_805B71C0(CPUState* ctx);
void func_805BB1C0(CPUState* ctx);
void func_805BF1C0(CPUState* ctx);
void func_805C31C0(CPUState* ctx);
void func_805C71C0(CPUState* ctx);
void func_805CB1C0(CPUState* ctx);
void func_805CF1C0(CPUState* ctx);
void func_805D31C0(CPUState* ctx);
void func_805D71C0(CPUState* ctx);
void func_805DB1C0(CPUState* ctx);
void func_805DF1C0(CPUState* ctx);
void func_805E31C0(CPUState* ctx);
void func_805E71C0(CPUState* ctx);
void func_805EB1C0(CPUState* ctx);
void func_805EF1C0(CPUState* ctx);
void func_805F31C0(CPUState* ctx);
void func_805F71C0(CPUState* ctx);
void func_805FB1C0(CPUState* ctx);
void func_805FF1C0(CPUState* ctx);
void func_806031C0(CPUState* ctx);
void func_806071C0(CPUState* ctx);
void func_8060B1C0(CPUState* ctx);
void func_8060F1C0(CPUState* ctx);
void func_806131C0(CPUState* ctx);
void func_806171C0(CPUState* ctx);
void func_8061B1C0(CPUState* ctx);
void func_8061F1C0(CPUState* ctx);
void func_806231C0(CPUState* ctx);
void func_806271C0(CPUState* ctx);
void func_8062B1C0(CPUState* ctx);
void func_8062F1C0(CPUState* ctx);
void func_806331C0(CPUState* ctx);
void func_806371C0(CPUState* ctx);
void func_8063B1C0(CPUState* ctx);
void func_8063F1C0(CPUState* ctx);
void func_806431C0(CPUState* ctx);
void func_806471C0(CPUState* ctx);
void func_8064B1C0(CPUState* ctx);
void func_8064F1C0(CPUState* ctx);
void func_806531C0(CPUState* ctx);

#define DOLRECOMP_ENTRY_POINT 0x80006310u

typedef void (*DolRecompFunction)(CPUState* ctx);

#if defined(__GNUC__) || defined(__clang__)
#define DOLRECOMP_UNUSED __attribute__((unused))
#else
#define DOLRECOMP_UNUSED
#endif

#if defined(DOLRECOMP_ENABLE_REPLACEMENTS)
int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address);
#else
static inline int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    (void)ctx;
    (void)address;
    return 0;
}
#endif

static inline DolRecompFunction dolrecomp_find_original(u32 address) {
    if (address >= 0x80004000u && address < 0x800066E0u && ((address - 0x80004000u) & 3u) == 0u) return func_80004000;
    {
        u32 offset = address - 0x800071C0u;
        if (offset < 0x0064CDE0u && (offset & 3u) == 0u) {
            static const DolRecompFunction chunk_functions[] = {
                func_800071C0,
                func_8000B1C0,
                func_8000F1C0,
                func_800131C0,
                func_800171C0,
                func_8001B1C0,
                func_8001F1C0,
                func_800231C0,
                func_800271C0,
                func_8002B1C0,
                func_8002F1C0,
                func_800331C0,
                func_800371C0,
                func_8003B1C0,
                func_8003F1C0,
                func_800431C0,
                func_800471C0,
                func_8004B1C0,
                func_8004F1C0,
                func_800531C0,
                func_800571C0,
                func_8005B1C0,
                func_8005F1C0,
                func_800631C0,
                func_800671C0,
                func_8006B1C0,
                func_8006F1C0,
                func_800731C0,
                func_800771C0,
                func_8007B1C0,
                func_8007F1C0,
                func_800831C0,
                func_800871C0,
                func_8008B1C0,
                func_8008F1C0,
                func_800931C0,
                func_800971C0,
                func_8009B1C0,
                func_8009F1C0,
                func_800A31C0,
                func_800A71C0,
                func_800AB1C0,
                func_800AF1C0,
                func_800B31C0,
                func_800B71C0,
                func_800BB1C0,
                func_800BF1C0,
                func_800C31C0,
                func_800C71C0,
                func_800CB1C0,
                func_800CF1C0,
                func_800D31C0,
                func_800D71C0,
                func_800DB1C0,
                func_800DF1C0,
                func_800E31C0,
                func_800E71C0,
                func_800EB1C0,
                func_800EF1C0,
                func_800F31C0,
                func_800F71C0,
                func_800FB1C0,
                func_800FF1C0,
                func_801031C0,
                func_801071C0,
                func_8010B1C0,
                func_8010F1C0,
                func_801131C0,
                func_801171C0,
                func_8011B1C0,
                func_8011F1C0,
                func_801231C0,
                func_801271C0,
                func_8012B1C0,
                func_8012F1C0,
                func_801331C0,
                func_801371C0,
                func_8013B1C0,
                func_8013F1C0,
                func_801431C0,
                func_801471C0,
                func_8014B1C0,
                func_8014F1C0,
                func_801531C0,
                func_801571C0,
                func_8015B1C0,
                func_8015F1C0,
                func_801631C0,
                func_801671C0,
                func_8016B1C0,
                func_8016F1C0,
                func_801731C0,
                func_801771C0,
                func_8017B1C0,
                func_8017F1C0,
                func_801831C0,
                func_801871C0,
                func_8018B1C0,
                func_8018F1C0,
                func_801931C0,
                func_801971C0,
                func_8019B1C0,
                func_8019F1C0,
                func_801A31C0,
                func_801A71C0,
                func_801AB1C0,
                func_801AF1C0,
                func_801B31C0,
                func_801B71C0,
                func_801BB1C0,
                func_801BF1C0,
                func_801C31C0,
                func_801C71C0,
                func_801CB1C0,
                func_801CF1C0,
                func_801D31C0,
                func_801D71C0,
                func_801DB1C0,
                func_801DF1C0,
                func_801E31C0,
                func_801E71C0,
                func_801EB1C0,
                func_801EF1C0,
                func_801F31C0,
                func_801F71C0,
                func_801FB1C0,
                func_801FF1C0,
                func_802031C0,
                func_802071C0,
                func_8020B1C0,
                func_8020F1C0,
                func_802131C0,
                func_802171C0,
                func_8021B1C0,
                func_8021F1C0,
                func_802231C0,
                func_802271C0,
                func_8022B1C0,
                func_8022F1C0,
                func_802331C0,
                func_802371C0,
                func_8023B1C0,
                func_8023F1C0,
                func_802431C0,
                func_802471C0,
                func_8024B1C0,
                func_8024F1C0,
                func_802531C0,
                func_802571C0,
                func_8025B1C0,
                func_8025F1C0,
                func_802631C0,
                func_802671C0,
                func_8026B1C0,
                func_8026F1C0,
                func_802731C0,
                func_802771C0,
                func_8027B1C0,
                func_8027F1C0,
                func_802831C0,
                func_802871C0,
                func_8028B1C0,
                func_8028F1C0,
                func_802931C0,
                func_802971C0,
                func_8029B1C0,
                func_8029F1C0,
                func_802A31C0,
                func_802A71C0,
                func_802AB1C0,
                func_802AF1C0,
                func_802B31C0,
                func_802B71C0,
                func_802BB1C0,
                func_802BF1C0,
                func_802C31C0,
                func_802C71C0,
                func_802CB1C0,
                func_802CF1C0,
                func_802D31C0,
                func_802D71C0,
                func_802DB1C0,
                func_802DF1C0,
                func_802E31C0,
                func_802E71C0,
                func_802EB1C0,
                func_802EF1C0,
                func_802F31C0,
                func_802F71C0,
                func_802FB1C0,
                func_802FF1C0,
                func_803031C0,
                func_803071C0,
                func_8030B1C0,
                func_8030F1C0,
                func_803131C0,
                func_803171C0,
                func_8031B1C0,
                func_8031F1C0,
                func_803231C0,
                func_803271C0,
                func_8032B1C0,
                func_8032F1C0,
                func_803331C0,
                func_803371C0,
                func_8033B1C0,
                func_8033F1C0,
                func_803431C0,
                func_803471C0,
                func_8034B1C0,
                func_8034F1C0,
                func_803531C0,
                func_803571C0,
                func_8035B1C0,
                func_8035F1C0,
                func_803631C0,
                func_803671C0,
                func_8036B1C0,
                func_8036F1C0,
                func_803731C0,
                func_803771C0,
                func_8037B1C0,
                func_8037F1C0,
                func_803831C0,
                func_803871C0,
                func_8038B1C0,
                func_8038F1C0,
                func_803931C0,
                func_803971C0,
                func_8039B1C0,
                func_8039F1C0,
                func_803A31C0,
                func_803A71C0,
                func_803AB1C0,
                func_803AF1C0,
                func_803B31C0,
                func_803B71C0,
                func_803BB1C0,
                func_803BF1C0,
                func_803C31C0,
                func_803C71C0,
                func_803CB1C0,
                func_803CF1C0,
                func_803D31C0,
                func_803D71C0,
                func_803DB1C0,
                func_803DF1C0,
                func_803E31C0,
                func_803E71C0,
                func_803EB1C0,
                func_803EF1C0,
                func_803F31C0,
                func_803F71C0,
                func_803FB1C0,
                func_803FF1C0,
                func_804031C0,
                func_804071C0,
                func_8040B1C0,
                func_8040F1C0,
                func_804131C0,
                func_804171C0,
                func_8041B1C0,
                func_8041F1C0,
                func_804231C0,
                func_804271C0,
                func_8042B1C0,
                func_8042F1C0,
                func_804331C0,
                func_804371C0,
                func_8043B1C0,
                func_8043F1C0,
                func_804431C0,
                func_804471C0,
                func_8044B1C0,
                func_8044F1C0,
                func_804531C0,
                func_804571C0,
                func_8045B1C0,
                func_8045F1C0,
                func_804631C0,
                func_804671C0,
                func_8046B1C0,
                func_8046F1C0,
                func_804731C0,
                func_804771C0,
                func_8047B1C0,
                func_8047F1C0,
                func_804831C0,
                func_804871C0,
                func_8048B1C0,
                func_8048F1C0,
                func_804931C0,
                func_804971C0,
                func_8049B1C0,
                func_8049F1C0,
                func_804A31C0,
                func_804A71C0,
                func_804AB1C0,
                func_804AF1C0,
                func_804B31C0,
                func_804B71C0,
                func_804BB1C0,
                func_804BF1C0,
                func_804C31C0,
                func_804C71C0,
                func_804CB1C0,
                func_804CF1C0,
                func_804D31C0,
                func_804D71C0,
                func_804DB1C0,
                func_804DF1C0,
                func_804E31C0,
                func_804E71C0,
                func_804EB1C0,
                func_804EF1C0,
                func_804F31C0,
                func_804F71C0,
                func_804FB1C0,
                func_804FF1C0,
                func_805031C0,
                func_805071C0,
                func_8050B1C0,
                func_8050F1C0,
                func_805131C0,
                func_805171C0,
                func_8051B1C0,
                func_8051F1C0,
                func_805231C0,
                func_805271C0,
                func_8052B1C0,
                func_8052F1C0,
                func_805331C0,
                func_805371C0,
                func_8053B1C0,
                func_8053F1C0,
                func_805431C0,
                func_805471C0,
                func_8054B1C0,
                func_8054F1C0,
                func_805531C0,
                func_805571C0,
                func_8055B1C0,
                func_8055F1C0,
                func_805631C0,
                func_805671C0,
                func_8056B1C0,
                func_8056F1C0,
                func_805731C0,
                func_805771C0,
                func_8057B1C0,
                func_8057F1C0,
                func_805831C0,
                func_805871C0,
                func_8058B1C0,
                func_8058F1C0,
                func_805931C0,
                func_805971C0,
                func_8059B1C0,
                func_8059F1C0,
                func_805A31C0,
                func_805A71C0,
                func_805AB1C0,
                func_805AF1C0,
                func_805B31C0,
                func_805B71C0,
                func_805BB1C0,
                func_805BF1C0,
                func_805C31C0,
                func_805C71C0,
                func_805CB1C0,
                func_805CF1C0,
                func_805D31C0,
                func_805D71C0,
                func_805DB1C0,
                func_805DF1C0,
                func_805E31C0,
                func_805E71C0,
                func_805EB1C0,
                func_805EF1C0,
                func_805F31C0,
                func_805F71C0,
                func_805FB1C0,
                func_805FF1C0,
                func_806031C0,
                func_806071C0,
                func_8060B1C0,
                func_8060F1C0,
                func_806131C0,
                func_806171C0,
                func_8061B1C0,
                func_8061F1C0,
                func_806231C0,
                func_806271C0,
                func_8062B1C0,
                func_8062F1C0,
                func_806331C0,
                func_806371C0,
                func_8063B1C0,
                func_8063F1C0,
                func_806431C0,
                func_806471C0,
                func_8064B1C0,
                func_8064F1C0,
                func_806531C0,
            };
            return chunk_functions[offset / 0x00004000u];
        }
    }
    return NULL;
}

static inline int dolrecomp_call_original(CPUState* ctx, u32 address) {
    DolRecompFunction fn = dolrecomp_find_original(address);
    if (!fn) return 0;
    ctx->pc = address;
    fn(ctx);
    return 1;
}

static inline bool dolrecomp_physical_pc_alias(CPUState* ctx, u32 address, u32* alias_out) {
    if (address < ctx->ram_size) {
        *alias_out = address | GC_RAM_BASE;
        return *alias_out != address;
    }
    return false;
}

static inline int dolrecomp_call(CPUState* ctx, u32 address) {
    u32 alias;
    ctx->pc = address;
    if (dolrecomp_dispatch_replacement(ctx, address)) return 1;
    if (ctx->host_call && ppc_host_call(ctx, address)) return 1;
    if (dolrecomp_call_original(ctx, address)) return 1;
    if (dolrecomp_physical_pc_alias(ctx, address, &alias)) {
        ctx->pc = alias;
        if (dolrecomp_dispatch_replacement(ctx, alias)) return 1;
        if (ctx->host_call && ppc_host_call(ctx, alias)) return 1;
        if (dolrecomp_call_original(ctx, alias)) return 1;
    }
    return 0;
}

static inline DOLRECOMP_UNUSED int dolrecomp_run_blocks(CPUState* ctx, u32 max_blocks) {
    u32 blocks = 0;
    while (max_blocks == 0u || blocks < max_blocks) {
        if (!dolrecomp_call(ctx, ctx->pc)) return 0;
        if (ctx->exception) return 0;
        blocks++;
    }
    return 1;
}

#undef DOLRECOMP_UNUSED

#endif /* RECOMP_GENERATED_H */

// end
