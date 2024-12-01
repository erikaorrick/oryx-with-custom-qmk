#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  MAC_SIRI,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_8,
  DANCE_10,
  DANCE_11,
  DANCE_0,
  DANCE_7,
  DANCE_9,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LALT(LCTL(LSFT(KC_V))),                                LALT(LSFT(KC_MINUS)),KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LALT(LCTL(LSFT(KC_C))),                                                                LALT(KC_MINUS), KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       MT(MOD_RGUI, KC_DOT),MT(MOD_RCTL, KC_SLASH),SC_RSPC,        
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    TT(1),          TT(2),          TD(DANCE_0),                                                                                                    KC_DELETE,      TT(3),          KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       
    MEH_T(KC_SPACE),MT(MOD_LCTL, KC_ENTER),LALT(LCTL(LSFT(KC_W))),                MT(MOD_LCTL | MOD_LSFT, KC_DELETE),KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, LCTL(KC_Q),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_Y),     KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_O),     LCTL(KC_P),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_S),     LCTL(KC_D),     LCTL(KC_F),     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_BSPC,        MAC_SIRI,                                       KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BSPC,        
    KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_MS_UP,       KC_LBRC,        KC_RBRC,        KC_DELETE,      
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_INSERT,      
    KC_TRANSPARENT, KC_UP,          KC_KP_0,        KC_KP_DOT,      KC_KP_PLUS,     KC_KP_ENTER,                                    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_UP,          TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DOWN,        LCTL(KC_E),     LALT(LCTL(KC_M)),TD(DANCE_6),    TD(DANCE_7),    KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DELETE,      LSFT(KC_A),     KC_S,           LALT(LCTL(KC_K)),KC_F,           TD(DANCE_8),    TO(0),                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  TD(DANCE_9),    LCTL(KC_X),     TD(DANCE_10),   TD(DANCE_11),   KC_K,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_MINUS,    KC_KP_PLUS,     KC_RIGHT_ALT,   KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_LEFT_GUI,    KC_ENTER,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_GRAVE, KC_A, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
    COMBO(combo1, LCTL(KC_X)),
    COMBO(combo2, LCTL(KC_C)),
    COMBO(combo3, LCTL(KC_V)),
    COMBO(combo4, LCTL(KC_Z)),
    COMBO(combo5, LCTL(KC_Q)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255}, {74,224,255} },

    [2] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

    [3] = { {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255}, {165,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_TAP(X_T)))) SS_DELAY(100) SS_LALT(SS_LCTL(SS_LGUI(SS_TAP(X_LEFT)))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_A)))) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_A)))) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_M)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case MAC_SIRI:
      HCS(0xCF);

    case TD(DANCE_1):
    case TD(DANCE_2):
    case TD(DANCE_3):
    case TD(DANCE_4):
    case TD(DANCE_5):
    case TD(DANCE_6):
    case TD(DANCE_8):
    case TD(DANCE_10):
    case TD(DANCE_11):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
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

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_A))));
        tap_code16(LALT(LCTL(LSFT(KC_A))));
        tap_code16(LALT(LCTL(LSFT(KC_A))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_A))));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_A)))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_A)))); register_code16(LALT(LCTL(LSFT(KC_A))));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_A)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_A)))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(KC_L); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_L)); break;
        case DOUBLE_HOLD: register_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(KC_L); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_L)); break;
        case DOUBLE_HOLD: unregister_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[1].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_1, KC_KP_2),
        [DANCE_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_3, KC_4),
        [DANCE_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_5, KC_6),
        [DANCE_4] = ACTION_TAP_DANCE_TAP_HOLD(KC_7, KC_8),
        [DANCE_5] = ACTION_TAP_DANCE_TAP_HOLD(KC_9, KC_0),
        [DANCE_6] = ACTION_TAP_DANCE_TAP_HOLD(KC_P, LSFT(KC_P)),
        [DANCE_8] = ACTION_TAP_DANCE_TAP_HOLD(LSFT(KC_G), LCTL(LSFT(KC_G))),
        [DANCE_10] = ACTION_TAP_DANCE_TAP_HOLD(KC_C, LCTL(KC_C)),
        [DANCE_11] = ACTION_TAP_DANCE_TAP_HOLD(KC_V, LCTL(KC_V)),
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
};
