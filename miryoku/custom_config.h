// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <dt-bindings/zmk/keys.h>
#include <behaviors.dtsi>

#define AS(keycode) &as LS(keycode) keycode     // Autoshift Macro

/ {
    behaviors {
        as: auto_shift {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            tapping_term_ms = <135>;
            quick_tap_ms = <0>;
            flavor = "tap-preferred";
            bindings = <&kp>, <&kp>;
        };
    };
};
