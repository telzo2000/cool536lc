#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x4(
        KC_Q,   KC_W,   KC_E,   KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  KC_COMMA,KC_DOT,KC_LSFT,
        KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC
    ),
    [1] = LAYOUT_ortho_4x4(
        KC_1,   KC_2,   KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),LSFT(KC_6),LSFT(KC_7),LSFT(KC_8),LSFT(KC_9),LSFT(KC_0),
        KC_PPLS,   KC_PMNS,   KC_PAST,   KC_PSLS,  KC_PEQL,  LSFT(KC_GRV),  KC_M,  KC_LBRC,KC_RBRC,KC_LSFT,
        KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),KC_MINUS,KC_LALT,LSFT(KC_SLSH)
    ),
    [2] = LAYOUT_ortho_4x4(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,
        KC_A,   KC_S,   KC_SCLN,   LSFT(KC_SCLN),  KC_G,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT,  KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  LSFT(KC_LBRC),LSFT(KC_RBRC),KC_LSFT,
        KC_LCTL,       KC_RGUI, LSFT(KC_MINUS),LT(2,KC_SPACE),KC_LALT,KC_BSLS
    ),
    [3] = LAYOUT_ortho_4x4(
        KC_1,   KC_2,   KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  KC_COMMA,KC_DOT,KC_LSFT,
        KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC
    )
};