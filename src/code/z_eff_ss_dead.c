#include "global.h"

void func_800AE2A0(GlobalContext* globalCtx, Color_RGBA8* color, s16 arg2, s16 arg3) {
    f32 cos;
    Gfx* displayListHead;
    f32 absCos;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    displayListHead = POLY_OPA_DISP;
    cos = Math_CosS((0x8000 / arg3) * arg2);
    absCos = fabsf(cos);

    gDPPipeSync(displayListHead++);

    if (color == NULL) {
        gDPSetFogColor(displayListHead++, 255, 0, 0, 0);
    } else {
        gDPSetFogColor(displayListHead++, color->r, color->g, color->b, color->a);
    }

    gSPFogPosition(displayListHead++, 0, (s16)(absCos * 3000.0f) + 1500);

    POLY_OPA_DISP = displayListHead;

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_800AE434(GlobalContext* globalCtx, Color_RGBA8* color, s16 arg2, s16 arg3) {
    Gfx* displayListHead;
    f32 cos;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    cos = Math_CosS((0x4000 / arg3) * arg2);
    displayListHead = POLY_OPA_DISP;

    gDPPipeSync(displayListHead++);
    gDPSetFogColor(displayListHead++, color->r, color->g, color->b, color->a);
    gSPFogPosition(displayListHead++, 0, (s16)(2800.0f * fabsf(cos)) + 1700);

    POLY_OPA_DISP = displayListHead;

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_800AE5A0(GlobalContext* globalCtx) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gDPPipeSync(POLY_OPA_DISP++);
    POLY_OPA_DISP = func_801660B8(globalCtx, POLY_OPA_DISP);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_800AE5E4(GlobalContext* globalCtx, Color_RGBA8* color, s16 arg2, s16 arg3) {
    f32 cos;
    Gfx* displayListHead;
    f32 absCos;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    displayListHead = POLY_XLU_DISP;
    cos = Math_CosS((0x8000 / arg3) * arg2);
    absCos = fabsf(cos);

    gDPPipeSync(displayListHead++);

    if (color == NULL) {
        gDPSetFogColor(displayListHead++, 255, 0, 0, 0);
    } else {
        gDPSetFogColor(displayListHead++, color->r, color->g, color->b, color->a);
    }

    gSPFogPosition(displayListHead++, 0, (s16)(absCos * 3000.0f) + 1500);

    POLY_XLU_DISP = displayListHead;

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_800AE778(GlobalContext* globalCtx, Color_RGBA8* color, s16 arg2, s16 arg3) {
    f32 cos;
    Gfx* displayListHead;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    displayListHead = POLY_XLU_DISP;
    cos = Math_CosS((0x4000 / arg3) * arg2);

    gDPPipeSync(displayListHead++);
    gDPSetFogColor(displayListHead++, color->r, color->g, color->b, color->a);
    gSPFogPosition(displayListHead++, 0, (s16)(2800.0f * fabsf(cos)) + 1700);

    POLY_XLU_DISP = displayListHead;

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_800AE8EC(GlobalContext* globalCtx) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gDPPipeSync(POLY_XLU_DISP++);
    POLY_XLU_DISP = func_801660B8(globalCtx, POLY_XLU_DISP);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
