#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_A,    KC_A,    KC_A,    KC_A,    KC_A,       KC_A,    KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A, KC_A,    KC_A,    KC_A,    KC_A,    KC_A,       KC_A,    KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A, KC_A,    KC_A,    KC_A,    KC_A,    KC_A,       KC_A,    KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A, KC_A,    KC_A,    KC_A,    KC_A,    KC_A,       KC_A,    KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
                 KC_A,    KC_A,    KC_A,    KC_A,    KC_A,       KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
                             KC_A,    KC_A,                                                       KC_A,  KC_A,

                                                KC_A, KC_A, KC_A,   KC_A, KC_A, KC_A,
                                                         KC_A, KC_A,   KC_A, KC_A
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                 KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                             KC_TRNS,    KC_TRNS,                                                       KC_TRNS,  KC_TRNS,

                                                KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
                                                         KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS
    )
};
