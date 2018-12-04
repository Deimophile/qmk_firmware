#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define S_TAB LSFT(KC_TAB)

enum custome_keycodes {
  TAB5 = SAFE_RANGE,
  TAR,
  PIP,
  STIG,
  ERY,
  FREE,
  FRA,
  PUNC,
  INO,
  INCI,
  PART,
  NIG,
  MEL,
  VEX,
  WASH

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_numpad_6x4( /* Base */
    S_TAB,   KC_TAB,   KC_PEQL,  MO(1),    \
    KC_LNUM,  KC_PSLS,  KC_PAST,  KC_PMNS, \
    KC_P7,    KC_P8,    KC_P9,             \
    KC_P4,    KC_P5,    KC_P6,    KC_PPLS, \
    KC_P1,    KC_P2,    KC_P3,             \
      KC_P0,            KC_PDOT,  KC_PENT  \
  ),

  [1] = LAYOUT_numpad_6x4( /* Macros */
    TAB5,  RGB_VAI,  RGB_HUI,  _______,     \
    INO,      INCI,     PUNC,     MO(2),    \
    NIG,      MEL,      VEX,                \
    FREE,     FRA,      PUNC,     WASH,     \
    TAR,      PIP,      STIG,               \
      XXXXXXX,          XXXXXXX,  ERY       \
  ),

  [2] = LAYOUT_numpad_6x4( /* RGB */
    RGB_SAI,  RGB_VAI,  RGB_HUI,  _______,  \
    RGB_SAD,  RGB_VAD,  RGB_HUD,  _______,  \
    RGB_M_X,  RGB_M_G,  RGB_MOD,            \
    RGB_M_SW, RGB_M_SN, RGB_M_K,  RGB_RMOD, \
    RGB_M_P,  RGB_M_B,  RGB_M_R,            \
      XXXXXXX,          XXXXXXX,  RGB_TOG   \
  ),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {
    // This keymap only has a single base layer, so reset the default if needed
    if(eeconfig_read_default_layer() > 1){
        eeconfig_update_default_layer(1);
        default_layer_set(1);
    }
}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Macros go here
  if (record->event.pressed) {
    switch (keycode) {
      case TAB5:
        SEND_STRING(SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case TAR:
        SEND_STRING("tar" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case PIP:
        SEND_STRING("pip" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case STIG:
        SEND_STRING("stigmato" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case ERY:
        SEND_STRING("ery" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case FREE:
        SEND_STRING("fre" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case FRA:
        SEND_STRING("fra" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case PUNC:
        SEND_STRING("puncti" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case INO:
        SEND_STRING("inor" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case INCI:
        SEND_STRING("inci" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        
        
        
        
        
        
        
        
        
        
  373-                                                                                                                                                      -fra
        return false;   -puncti
      case PART:    
        SEND_STRING("par" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case NIG:
        SEND_STRING("nig" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case MEL:
        SEND_STRING("mel" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case VEX:
        SEND_STRING("vex" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false;
      case WASH:
        SEND_STRING("w" SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) );
        return false; 
        
      }
  }
  return true;
}

void led_set_user(uint8_t usb_led) {

}
