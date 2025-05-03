// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define QWERTY 0 // Base layer
#define KEYPAD 1 // Keypad layer
#define EXTEND 2

#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define RCTL_ESC RCTL_T(KC_ESC)


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Caps   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  MO1 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Esc    |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | DEL  | Left | Right|                                         | Down | Up   |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Alt  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Gui  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT(
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,  KC_F8,    KC_F9,  KC_F10,  KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TG(1),    MO(1),
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                            KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
    CW_TOGG,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                            KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    OS_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                            KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  OS_RSFT,
              KC_GRV,   KC_DEL,   KC_LEFT,  KC_RGHT,                                                                             KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_LCTL,  KC_LALT,                                     KC_RALT,  RCTL_ESC,
                                                                KC_HOME,                                     KC_PGUP,
                                            KC_BSPC,  KC_LGUI,  KC_END,                                      KC_PGDN,  KC_ENTER, KC_SPC
  ),

  [KEYPAD] = LAYOUT(
      QK_RBT,   QK_BOOT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NUM, KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_NO,
      KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                KC_NO,   KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                                 KC_NO,  KC_NO,                                   KC_NO,  KC_NO,
                                                         KC_NO,                                   KC_NO,
                                        KC_NO,   KC_NO,  KC_NO,                                   KC_NO,  KC_NO,   KC_NO
  ),

  [EXTEND] = LAYOUT(
      KC_NUM,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
      KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    CW_TOGG,
                KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                                KC_NO,  KC_NO,                                    KC_NO,  KC_NO,
                                                        KC_NO,                                    KC_NO,
                                        KC_NO,  KC_NO,  KC_NO,                                    KC_NO,  KC_NO,    KC_NO
  ),

  // [DVORAK] = LAYOUT(
  //   KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,  KC_F7,  KC_F8,              KC_F9,  KC_F10,  KC_F11,  KC_F12,   KC_PSCR,   KC_SCRL,  KC_PAUS,  MO(2),    QK_BOOT,
  //   KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                   KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
  //   KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                                                                   KC_F,      KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,
  //   KC_ESC,   KC_A,     KC_O,     KC_E,     KC_U,     KC_I,                                                                   KC_D,      KC_H,     KC_T,     KC_N,     KC_S,     KC_BSLS,
  //   OS_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                                                                   KC_B,      KC_M,     KC_W,     KC_V,     KC_Z,     OS_RSFT,
  //             KC_GRV,   KC_DEL,   KC_LEFT,  KC_RGHT,                                                                                     KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
  //                                                     KC_LCTL,  KC_LALT,                                            KC_RALT,  KC_RCTL,
  //                                                               KC_HOME,                                            KC_PGUP,
  //                                           KC_BSPC,  KC_LGUI,  KC_END,                                             KC_PGDN,  KC_ENTER,  KC_SPC
  // ),

  // [COLEMAK] = LAYOUT(
  //   KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,  KC_F8,    KC_F9,  KC_F10,  KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  MO(2),    QK_BOOT,
  //   KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
  //   KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                                                            KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSLS,
  //   CW_TOGG,  KC_A,     KC_R,     KC_S,     KC_T,     KC_D,                                                            KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,
  //   OS_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                            KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  OS_RSFT,
  //             KC_GRV,   KC_DEL,   KC_LEFT,  KC_RGHT,                                                                             KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
  //                                                     TAB_LCTL, KC_LALT,                                     KC_RALT,  ESC_RCTL,
  //                                                               KC_HOME,                                     KC_PGUP,
  //                                           KC_BSPC,  KC_LGUI,  KC_END,                                      KC_PGDN,  KC_ENTER, KC_SPC
  // ),

};

layer_state_t layer_state_set_user(layer_state_t state) {
  if (IS_LAYER_ON_STATE(state, KEYPAD)) {
    gpio_write_pin_low(LED_LAYER_PIN);
  } else {
    gpio_write_pin_high(LED_LAYER_PIN);
  }

  return state;
}
