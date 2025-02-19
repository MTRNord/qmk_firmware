#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "features/sentence_case.h"
#include "print.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_KP_MINUS, KC_KP_PLUS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_DELETE, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), TG(1), DE_Z, KC_U, KC_I, KC_O, KC_P, DE_BSLS, DE_EURO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_F9, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, LT(2, KC_SCLN), DE_HASH, KC_LEFT_SHIFT, DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, MT(MOD_RCTL, KC_SLASH), KC_RIGHT_SHIFT, KC_LEFT_CTRL, MO(1), KC_HOME, KC_LEFT, KC_RIGHT, MT(MOD_LALT, KC_APPLICATION), MT(MOD_LCTL, KC_ESCAPE), KC_UP, KC_DOWN, DE_LBRC, DE_RBRC, MO(1), KC_BSPC, KC_SPACE, KC_LEFT_GUI, KC_ENTER, KC_TAB, KC_LEFT_ALT),
    [1] = LAYOUT_moonlander(KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRANSPARENT, KC_EXLM, DE_AT, DE_LCBR, DE_RCBR, DE_QUOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP, KC_KP_7, KC_KP_8, KC_KP_9, DE_ASTR, KC_F12, KC_TRANSPARENT, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, DE_GRV, DE_PIPE, KC_NUM, KC_DOWN, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, DE_ADIA, KC_TRANSPARENT, KC_PERC, DE_CIRC, DE_LBRC, DE_RBRC, DE_TILD, KC_AMPR, KC_KP_1, KC_KP_2, KC_KP_3, DE_BSLS, DE_UDIA, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_ENTER, KC_KP_COMMA, KC_KP_0, KC_EQUAL, KC_TRANSPARENT, RGB_VAD, RGB_VAI, KC_TRANSPARENT, KC_TRANSPARENT, DE_LABK, DE_RABK),
    [2] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT, KC_HOME, KC_PAGE_UP, KC_PGDN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();

    debug_enable = true;
    debug_matrix = true;
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {31, 255, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {0, 205, 155},   {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {0, 205, 155},   {0, 205, 155},   {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {0, 205, 155},   {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255},
           {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {31, 255, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}, {132, 121, 255}},

    [1] = {{0, 245, 245}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {0, 245, 245}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {0, 245, 245}, {21, 255, 247},  {21, 255, 247},  {188, 255, 255}, {21, 255, 247},  {0, 245, 245}, {73, 255, 247},  {21, 255, 247},  {21, 255, 247},  {21, 255, 247},  {0, 245, 245}, {73, 255, 247},  {21, 255, 247},  {21, 255, 247},  {21, 255, 247},  {0, 245, 245}, {21, 255, 247}, {21, 255, 247}, {188, 255, 255}, {21, 255, 247}, {21, 255, 247}, {188, 255, 255}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247},
           {0, 245, 245}, {0, 245, 245},  {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {0, 245, 245}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {0, 245, 245}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {0, 245, 245}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {0, 245, 245}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {0, 245, 245}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247},  {21, 255, 247}, {21, 255, 247}, {131, 255, 255}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}, {21, 255, 247}},

    [2] = {{214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {131, 255, 255}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {131, 255, 255}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {131, 255, 255}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251},
           {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}, {214, 255, 251}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (rawhid_state.rgb_control) {
        return false;
    }
    if (keyboard_config.disable_layer_led) {
        return false;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }

    return true;
}

void sentence_case_primed(bool primed) {
    STATUS_LED_2(primed);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // https://getreuer.info/posts/keyboards/sentence-case/index.html#add-it-to-your-keymap
    if (!process_sentence_case(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case RGB_SLD:
            if (rawhid_state.rgb_control) {
                return false;
            }
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }

    return true;
}
