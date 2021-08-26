// Cornelius

#include QMK_KEYBOARD_H

#include "../../../users/bomberstudios/keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    KC_TAB,  CTL_A,   ALT_R,   CMD_S,   SHT_T,   KC_D,    KC_H,    SHT_N,   CMD_E,   ALT_I,   CTL_O,   KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_ESC,  KC_LCTRL,KC_LALT, KC_LCMD, L_NUM,   KC_BSPC, SPC_3,   L_SYM,   KC_RCMD, KC_RALT, KC_RCTRL,KC_ENT
  ),
  [_QWERTY] = LAYOUT(
    _______, _______, _______, KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
    _______, _______, ALT_S,   CMD_D,   SHT_F,   KC_G,    _______, SHT_J,   CMD_K,   ALT_L,   CTL_CLN, _______,
    _______, _______, _______, _______, _______, _______, KC_N,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [_MOVE] = LAYOUT(
    _______, KC_ESC,  L_COL,   CTL_TAB, CMD_TAB, LINEDEL, LINEUP,  START,   KC_UP,   END,     KC_BSPC, _______,
    _______, Ctrl,    Alt,     Cmd,     Shift,   LINEDUP, LINEDWN, KC_LEFT, KC_DOWN, KC_RIGHT,KC_ENT,  _______,
    _______, UNDO,    CUT,     COPY,    CPYPASTE,SKRUN,   SKRUNAG, SHT_SCR, SHT_ARE, SHT_OPT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [_NUMBER] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, KC_7,    KC_8,    KC_9,    _______, _______,
    _______, CMD_1,   CMD_2,   CMD_3,   CMD_4,   CMD_5,   _______, KC_4,    KC_5,    KC_6,    KC_0,    _______,
    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, KC_1,    KC_2,    KC_3,    KC_PENT, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______
  ),
  [_SYMBOL] = LAYOUT(
    _______, KC_EXLM,   KC_AT, KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, M_EMAIL, _______, KC_GRV,  KC_QUOT, KC_COLN, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______,
    _______, RESET,   _______, KC_TILD, KC_DQUO, KC_SCLN, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______,
    _______, _______, _______, _______, L_ADJ,   KC_DEL,  _______, _______, _______, _______, _______, _______
  ),
  [_ADJUST] = LAYOUT(
    _______, QWERTY,  COLEMAK, _______, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_VOLU, _______,
    _______, M_EMAIL, _______, KC_GRV,  KC_QUOT, KC_COLN, KC_BSLS, KC_MPLY, KC_EQL,  KC_LBRC, KC_MUTE, _______,
    _______, RESET,   _______, KC_TILD, KC_DQUO, KC_SCLN, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_VOLD, _______,
    _______, _______, _______, _______, L_ADJ,   KC_DEL,  _______, _______, _______, _______, _______, _______
  )
};
