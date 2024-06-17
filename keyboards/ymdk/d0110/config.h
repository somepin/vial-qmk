/* Copyright 2021 JasonRen(biu)
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

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

#define SOLENOID_PIN A8
#define SOLENOID_DEFAULT_BUZZ 1
#define SOLENOID_DEFAULT_DWELL 30
#define SOLENOID_BUZZ_ACTUATED 20
#define SOLENOID_BUZZ_NONACTUATED 30

#undef STM32_HSECLK
#define STM32_HSECLK 16000000

#define DYNAMIC_KEYMAP_MACRO_COUNT 5

#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)
