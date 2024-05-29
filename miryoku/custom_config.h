// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_BASE_BUNYA \
&kp B,             &kp L,             &kp M,             &kp C,             &kp Z,             &kp J,             &kp F,             &kp O,             &kp U,             &kp COMMA,         \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, D),    &kp P,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, X), U_MT(RALT, Q),     &kp V,             &kp G,             &kp W,             &kp SEMI,          &kp K,             &kp SQT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, DOT),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, S),    U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),U_LT(U_FUN, BSPC), U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp DEL,           &kp BSPC,           U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BUNYA