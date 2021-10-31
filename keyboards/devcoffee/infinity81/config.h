/*
Copyright 2020 mechlovin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID   0xFEED
#define PRODUCT_ID  0x6060
#define DEVICE_VER  0x0001
#define MANUFACTURER  Devcoffee.Infinity81
#define PRODUCT       Infinity81

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B3, B2, B1, B0, F6, B7 }
#define MATRIX_COL_PINS { D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, F5, F1, F4 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define BACKLIGHT_PIN F7
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 5
#define BREATHING_PERIOD 6

#define RGB_DI_PIN D0
// #define RGB_CI_PIN F7
#ifdef RGB_DI_PIN
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 106
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_SLEEP
#endif
