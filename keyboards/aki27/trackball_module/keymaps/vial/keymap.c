/*
Copyright 2022 aki27

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
       KC_MS_BTN1,    KC_MS_BTN2,    KC_MS_BTN3
    ),
  [1] = LAYOUT(
       KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
  [2] = LAYOUT(
       KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
  [3] = LAYOUT(
       KC_TRNS,    KC_TRNS,    KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =   { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)           },
    [2] =   { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)           },
    [3] =   { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)           }
};
#endif

layer_state_t layer_state_set_user(layer_state_t state) {

    switch (get_highest_layer(state)) {
    case 1:
    case 2:
        cocot_set_scroll_mode(true);
        break;
    default:
        cocot_set_scroll_mode(false);
        break;
    }
  return state;
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_layer_state();
    return false;
}
#endif
