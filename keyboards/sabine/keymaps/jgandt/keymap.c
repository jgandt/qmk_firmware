// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┬───┐
     * │XXX│ 1 │ 2 │ 3 │ 4 │ 5 │XXX│           │XXX│ 6 │ 7 │ 8 │ 9 │ 0 │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│ Q │ W │ F │ P │ B │XXX│           │XXX│ J │ L │ U │ Y │ ; │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│ A │ R │ S │ T │ G │XXX│           │XXX│ M │ N │ E │ I │ O │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│ Z │ X │ C │ D │ V │XXX│           │XXX│ K │ H │ , │ . │ / │XXX│
     * └───┴───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┴───┘
     *         │GUI│GUI│SHF│SPC│LWR│           │RSE│ENT│BSP│BSP│ALT│
     *         └───┴───┴───┼───┼───┤           ├───┼───┴───┴───┴───┘
     *                     │TAB│ESC│           │DEL│SPC│
     *                     └───┴───┘           └───┴───┘
     */
    [0] = LAYOUT_split(
        KC_GRV,  KC_1,    KC_2,     KC_3,    KC_4,     KC_5,    KC_NO,          KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
        KC_8,    KC_Q,    KC_W,     KC_F,    KC_P,     KC_B,    KC_NO,          KC_NO,   KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
        KC_BSPC, KC_A,    KC_R,     KC_S,    KC_T,     KC_G,    KC_NO,          KC_NO,   KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,     KC_C,    KC_D,     KC_V,    KC_NO,          KC_NO,   KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_ESC,   KC_LCMD, KC_ENTER, KC_LCMD, KC_5,           KC_6,    KC_7,    KC_SPC,  KC_MINS, KC_SPC,
                                                       KC_TAB,  KC_ESC,         KC_C,    KC_SPC
    ),



    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┬───┐
     * │XXX│ ! │ @ │ # │ $ │ % │XXX│           │XXX│ ^ │ & │ * │ ( │ ) │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│   │   │   │   │   │XXX│           │XXX│ - │ = │ [ │ ] │ \ │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│   │   │   │   │   │XXX│           │XXX│ _ │ + │ { │ } │ | │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│   │   │   │   │   │XXX│           │XXX│   │   │ < │ > │ ? │XXX│
     * └───┴───┴───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │           │   │   │   │   │
     * └───┴───┴───┘   └───┴───┼───┼───┤           ├───┼───┴───┴───┘
     *                     │   │   │           │   │   │
     *                     └───┴───┘           └───┴───┘
     */
    [1] = LAYOUT_split(
        KC_NO,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_NO,    KC_NO,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_TRNS, KC_TRNS, KC_LT,   KC_GT,   KC_QUES, KC_NO,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS
    ),

    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┬───┐
     * │XXX│F1 │F2 │F3 │F4 │F5 │XXX│           │XXX│F6 │F7 │F8 │F9 │F10│XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│F11│F12│   │   │   │XXX│           │XXX│   │   │ ↑ │   │   │XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│   │   │   │   │   │XXX│           │XXX│HOM│ ← │ ↓ │ → │END│XXX│
     * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
     * │XXX│   │   │   │   │   │XXX│           │XXX│PDN│PUP│   │   │   │XXX│
     * └───┴───┴───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │           │   │   │   │   │
     * └───┴───┴───┘   └───┴───┼───┼───┤           ├───┼───┴───┴───┘
     *                     │   │   │           │   │   │
     *                     └───┴───┘           └───┴───┘
     */
    [2] = LAYOUT_split(
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,    KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
        KC_NO,   KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    KC_NO,   KC_PGDN, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS
    )
};
