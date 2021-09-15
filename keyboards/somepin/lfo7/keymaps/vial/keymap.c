#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    KC_MPLY, MO(1),   KC_MUTE,
    KC_HOME, KC_UP,   KC_END,
    KC_LEFT, KC_DOWN, KC_RGHT
),

[1] = LAYOUT(
    RESET,   _______, _______,
    _______, _______, _______,
    _______, _______, _______
),

[2] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
),

[3] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
)

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}
