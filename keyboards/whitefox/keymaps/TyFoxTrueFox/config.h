#pragma once

#include "quantum.h"

#define LAYER_FN

#define SS_PREV_DESKTOP SS_LCTRL(SS_LGUI(SS_TAP(X_LEFT)))
#define SS_NEXT_DESKTOP SS_LCTRL(SS_LGUI(SS_TAP(X_RIGHT)))
#define SS_REVEAL_DESKTOPS SS_LGUI(SS_TAP(X_TAB))

enum layers_user {
    L_BASE,
#ifdef LAYER_FN
    L_FN,
#endif
};

enum custom_keycodes {
    DK_PREV = SAFE_RANGE,
    DK_NEXT,
    DK_REVEAL
};