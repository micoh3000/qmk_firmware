// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_numpad_6x4(
        LT(2,KC_ESC),  KC_CALC, KC_MYCM, KC_TAB,
        KC_BSPC,       KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,         KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,         KC_P5,   KC_P6,
        KC_P1,         KC_P2,   KC_P3,   LT(1,KC_PENT),
        KC_P0,                  KC_PDOT
    ),

    [1] = LAYOUT_numpad_6x4(
        _______,  _______, _______, _______,
        KC_F22,   KC_F23,  KC_F24,  _______,
        KC_F19,   KC_F20,  KC_F21,  _______,
        KC_F16,   KC_F17,  KC_F18,
        KC_F13,   KC_F14,  KC_F15,  _______,
        KC_LCTL,           KC_LALT
    ),
    [2] = LAYOUT_numpad_6x4(
        _______, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU,
        KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,
        KC_NO,            KC_NO
    )
};
