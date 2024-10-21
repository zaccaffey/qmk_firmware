/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H
#include <cyboard.h>

enum {
    TD_LOGOUT_EQL,
    TD_SCREENSHOT_SELECT,
    TD_LOCK_ESC,
    TD_MUTE_M,
    TD_BACK_END,
    TD_FORWARD_COPY,
    TD_BACK_CHROME_DEL,
    TD_BACK_CHROME_BSPC,
    TD_BACK_VSCODE_HOME,
    TD_FORWARD_VSCODE_PASTE,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_LOGOUT_EQL] = ACTION_TAP_DANCE_DOUBLE((MOD_LCTL | MOD_LALT | KC_DEL), KC_EQL),
    [TD_SCREENSHOT_SELECT] = ACTION_TAP_DANCE_DOUBLE((KC_APP | KC_LEFT_SHIFT | KC_S), KC_SELECT),
    [TD_LOCK_ESC] = ACTION_TAP_DANCE_DOUBLE((KC_APP | KC_L), KC_ESC),
    [TD_MUTE_M] = ACTION_TAP_DANCE_DOUBLE((KC_APP | KC_LALT | KC_K), KC_M),
    [TD_BACK_END] = ACTION_TAP_DANCE_DOUBLE((KC_LCTL | KC_LALT | KC_LEFT), KC_END),
    [TD_FORWARD_COPY] = ACTION_TAP_DANCE_DOUBLE((KC_LCTL | KC_LALT | KC_RIGHT), KC_COPY),
    [TD_BACK_CHROME_DEL] = ACTION_TAP_DANCE_DOUBLE((KC_LCTL | KC_TAB), KC_DEL),
    [TD_BACK_CHROME_BSPC] = ACTION_TAP_DANCE_DOUBLE((KC_LCTL | KC_LSFT | KC_TAB), KC_BSPC),
    [TD_BACK_VSCODE_HOME] = ACTION_TAP_DANCE_DOUBLE((KC_LALT | KC_LEFT), KC_HOME),
    [TD_FORWARD_VSCODE_PASTE] = ACTION_TAP_DANCE_DOUBLE((KC_LALT | KC_RIGHT), KC_PASTE),
 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {  

    [0] = LAYOUT_num(
        TD(TD_LOGOUT_EQL),  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                                                                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,             KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                                                                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL,            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                                                                                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                                                                                                KC_N,    TD(TD_MUTE_M),    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                     KC_LGUI, KC_LALT, KC_ENT,  TD(TD_BACK_CHROME_DEL),  TD(TD_LOCK_ESC),                                                                    TD(TD_SCREENSHOT_SELECT), TD(TD_BACK_CHROME_BSPC), KC_SPC,  KC_LBRC, KC_RBRC,
                                                       QK_CAPS_WORD_TOGGLE, TD(TD_BACK_VSCODE_HOME), TD(TD_BACK_END),                                       TD(TD_FORWARD_COPY),  TD(TD_FORWARD_VSCODE_PASTE),  MO(1)
    ),

    [1] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, KC_HOME, KC_UP,   KC_END,  _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [2] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [3] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [4] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [5] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [6] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [7] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [8] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    ),

    [9] = LAYOUT_num(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                            _______, _______, _______,         _______, _______, _______
    )
};