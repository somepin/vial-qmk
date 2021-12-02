#include "bm16s.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
    {
        // Key Matrix to LED Index
        {  0,  1,  2,  3 },    // 0
        {  4,  5,  6,  7 },    // 21
        {  8,  9, 10, 11 },    // 42
        { 12, 13, 14, 15 },    // 64
        // 0, 75, 150, 224
    }, {
        // LED Index to Physical Position
        { 0, 0  }, { 74,  0 }, { 149,  0 }, { 224,  0 },
        { 0, 21 }, { 74, 21 }, { 149, 21 }, { 224, 21 },
        { 0, 42 }, { 74, 42 }, { 149, 42 }, { 224, 42 },
        { 0, 16 }, { 74, 48 }, { 149, 64 }, { 224, 64 }
    }, {
        // LED Index to Flag
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4
    } 
};
#endif