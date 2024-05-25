// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_BASE_BUNYA \
&kp B,             &kp L,             &kp M,             &kp C,             &kp Z,             &kp J,             &kp F,             &kp O,             &kp U,             &kp COMMA,         \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, D),    &kp P,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, X), U_MT(RALT, Q),     &kp V,             &kp Q,             &kp W,             &kp SEMI,          &kp K,             &kp SQT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, DOT),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, S),    U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),U_LT(U_FUN, BSPC), U_NP,              U_NP

#if defined (MIRYOKU_EXTRA_BUNYA)
  #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BUNYA