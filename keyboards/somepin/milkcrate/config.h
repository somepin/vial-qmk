/* Copyright 2021 somepin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7370 // "SP"
#define PRODUCT_ID      0x6D63 // "MC"
#define DEVICE_VER      0x0001
#define MANUFACTURER    somepin
#define PRODUCT         Milk Crate

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 1

/* Milk default pinout */
#define DIRECT_PINS { \
    {D7}, \
    {E6}, \
}
#define UNUSED_PINS

#ifdef RGB_MATRIX_ENABLE
// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B1
// The number of LEDs connected
#define DRIVER_LED_TOTAL 3
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#endif

// #ifdef RGBLIGHT_ENABLE
// #define RGB_DI_PIN B1
// #define RGBLED_NUM 3
// #define RGBLIGHT_ANIMATIONS
// // #define RGBLIGHT_EFFECT_BREATHING
// // #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// // #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// // #define RGBLIGHT_MODE_SNAKE
// // #define RGBLIGHT_MODE_KNIGHT
// // #define RGBLIGHT_MODE_STATIC_GRADIENT
// // #define RGBLIGHT_EFFECT_ALTERNATING
// // #define RGBLIGHT_EFFECT_TWINKLE
// #define RGBLIGHT_SLEEP
// #endif
