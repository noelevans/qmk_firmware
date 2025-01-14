#include QMK_KEYBOARD_H

#define X KC_NO

extern keymap_config_t keymap_config;

enum layers {
  _DVORAK,
  _FUNC,
  _FUNC2,
  _ADJUST,
};

enum keycodes {
  DVORAK = SAFE_RANGE,
  FUNC,
  FUNC2,
};

/*layout template
 * ,-----------------------------------------------------------------------------------------.
 * |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
 * |-----------------------------------------------------------------------------------------+
 * |          |     |     |     |     |     |     |     |     |     |     |     |            |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |      |      |      |             |      |                 |     |     |     |     |     |
 * `-----------------------------------------------------------------------------------------'

 [LAYOUT] = LAYOUT_all(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______,
  _______, X,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,           _______,        _______,           _______,         _______, _______, _______, _______, _______),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* DVORAK
 * ,-----------------------------------------------------------------------------------------.
 * | Esc | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   | 0   | [   | ]   | ~   | Del |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    | "   | ,   | .   | P   | Y   | F   | G   | C   | R   | L   | /   | =   | \      |
 * |-----------------------------------------------------------------------------------------+
 * | Bckspc   | A  | O   | E   | U   | I   | D   | H   | T   | N   | S   | -   | Enter       |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     | ;   | Q   | J   | K   | X   | B   | M   | W   | V   | Z   |Shift| Up  | Bl  |
 * |-----------------------------------------------------------------------------------------+
 * | Ctrl | Alt  | Gui  |  Backspace  | Fn2  |      Space      | Alt | App | Left| Down|Right|
 * `-----------------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_all(
  KC_ESC,         KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_LBRC,  KC_RBRC,  KC_BSLS, KC_GRV,
  KC_TAB,          KC_QUOTE,  KC_COMM,  KC_DOT,  KC_P,  KC_Y,  KC_F,  KC_G,  KC_C,  KC_R,  KC_L,  KC_SLSH,  KC_EQL,  KC_DEL,
  LT(_FUNC,KC_CAPS),   KC_A,  KC_O,  KC_E,  KC_U,  KC_I,  KC_D,  KC_H,  KC_T,  KC_N,  KC_S,  KC_MINS,                KC_ENT,
  KC_LSPO, X,         KC_SCLN,  KC_Q,  KC_J,  KC_K,  KC_X,  KC_B,  KC_M,  KC_W, KC_V,  KC_Z,  KC_RSPC,     KC_UP,       RGB,
  KC_LCTL,            KC_LALT,  KC_LGUI,  KC_BSPC,    FUNC2,   KC_SPC,      KC_RALT,  KC_APP,  KC_LEFT,  KC_DOWN,  KC_RGHT),

/* FUNC
 * ,-----------------------------------------------------------------------------------------.
 * |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 | Prnt| Ins |
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     | Up  |     |     |     |     | Bspc   |
 * |-----------------------------------------------------------------------------------------+
 * |          |     |     |     |     |     |     | Left| Down| Rght|     |     |            |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     | PgUp|     |
 * |-----------------------------------------------------------------------------------------+
 * |      |      |      |             |      |                 |     |     | Home| PgDn| End |
 * `-----------------------------------------------------------------------------------------'
 */
[_FUNC] = LAYOUT_all(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR,  KC_INS,
  _______,          _______, _______, _______, _______, _______, _______, KC_PGUP,   KC_UP, KC_PGDN, KC_CIRC, _______, _______, KC_BSPC,
  _______,      _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_TILD,              _______,
  _______, X,        _______, _______, _______, _______, _______, KC_END, _______, _______, _______, _______, _______, KC_PGUP, _______,
  _______, _______, _______,           _______,        _______,           _______,          _______, _______, KC_HOME, KC_PGDN, KC_END),

/* FUNC2
 * ,-----------------------------------------------------------------------------------------.
 * |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
 * |-----------------------------------------------------------------------------------------+
 * |          |     |     |     |     |     |     |     |     |     |     |     |            |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |      |      |      |             |      |                 |     |     |     |     |     |
 * `-----------------------------------------------------------------------------------------'
 */
[_FUNC2] = LAYOUT_all(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______,
  _______, X,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,           _______,        _______,           _______,         _______, _______, _______, _______, _______),

/* Adjust (Func + Func2)
 * ,-----------------------------------------------------------------------------------------.
 * |     |     |     |     |     |     |     |     |     |     |     |     |     |     |Reset|
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
 * |-----------------------------------------------------------------------------------------+
 * |          |     |     |     |     |     |     |     |     |     |     |     |            |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |      |      |      |           |      |                |     |     |Qwerty|Colemk|Dvorak|
 * `-----------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_all(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   RESET,
  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______,
  _______, X,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,           _______,        _______,           _______,         _______, _______,  _______, _______,  DVORAK),
};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case FUNC:
      if (record->event.pressed) {
        layer_on(_FUNC);
        update_tri_layer(_FUNC, _FUNC2, _ADJUST);
      } else {
        layer_off(_FUNC);
        update_tri_layer(_FUNC, _FUNC2, _ADJUST);
      }
      return false;
      break;
    case FUNC2:
      if (record->event.pressed) {
        layer_on(_FUNC2);
        update_tri_layer(_FUNC, _FUNC2, _ADJUST);
      } else {
        layer_off(_FUNC2);
        update_tri_layer(_FUNC, _FUNC2, _ADJUST);
      }
      return false;
      break;
  }
  return true;
}
