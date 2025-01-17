/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xB5, 0x06, 0x28, 0xD2, 0x52, 0x88, 0xBA, 0xE6}

#define VIAL_UNLOCK_COMBO_ROWS { 1,  3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#if FEE_PAGE_COUNT != 3
#    define FEE_PAGE_COUNT 3
#endif