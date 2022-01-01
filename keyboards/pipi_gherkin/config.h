#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3430
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    40 Percent Club
#define PRODUCT         PiPi Gherkin

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { 8, 9, 10, 11, 12, 16 }
#define MATRIX_COL_PINS { 2, 3, 4, 5, 6, 7, 17 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
// #define BACKLIGHT_PIN B5
// #ifdef BACKLIGHT_PIN
// #define BACKLIGHT_LEVELS 3
// #endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#ifdef AUDIO_ENABLE
#define AUDIO_PIN 15
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1 
#define AUDIO_CLICKY
#define STARTUP_SONG SONG(USSR_ANTHEM)
#endif