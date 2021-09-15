#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7370 // "SP"
#define PRODUCT_ID      0x6C6F // "LO"
#define DEVICE_VER      0x0001
#define MANUFACTURER    somepin
#define PRODUCT         LFO7

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { C6, D0, B1 }, \
    { E6, B3, B2 }, \
    { B4, B5, B6 } \
}

#define ENCODERS_PAD_A { D3, F7 }
#define ENCODERS_PAD_B { D2, F6 }

#define ENCODER_RESOLUTION 4

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1