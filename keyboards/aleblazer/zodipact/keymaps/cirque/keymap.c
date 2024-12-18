/*
Copyright 2023 Spencer Deven <splitlogicdesign@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_TAB,  KC_B,    KC_L,    KC_D,    KC_W,    KC_Z,                                           KC_QUOT, KC_F,    KC_O,    KC_U,    KC_J,    KC_SCLN,
      MO(1),   KC_N,    KC_R,    KC_T,    KC_S,    KC_G,  KC_F5,   KC_MUTE,     RGB_TOG, KC_EQL,   KC_Y,    KC_H,    KC_A,    KC_E,    KC_I,    KC_COMM,
      KC_LSFT, KC_Q,    KC_X,    KC_M,    KC_C,    KC_V,  KC_GRV,  KC_LBRC,     KC_RBRC, MS_BTN1,  KC_K,    KC_P,    KC_DOT,  KC_MINS, KC_SLSH, KC_BSLS,
      KC_LCTL, KC_F8,   KC_LGUI, KC_LALT, KC_LSFT,        KC_SPC,  KC_HOME,     KC_END,  KC_ENT,            KC_LSFT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

	[1] = LAYOUT(
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
      _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, KC_F12,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, RGB_TOG, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, MS_BTN2,    _______, RGB_MOD, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI,
      _______, _______, _______, _______, _______,          _______, KC_PGDN, _______, _______,             RGB_RMOD,RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD
      ),

	[2] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______,      _______,     _______, _______,     _______,      _______, _______, _______, _______, _______
      ),

	[3] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______,      _______,     _______, _______,     _______,      _______, _______, _______, _______, _______
      )

};

const key_override_t shift_quote_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS);
const key_override_t shift_minus_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_DQUO);
const key_override_t shift_slash_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_LABK);
const key_override_t shift_comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_QUES);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&shift_quote_override,
    &shift_minus_override,
    &shift_slash_override,
    &shift_comma_override
};
