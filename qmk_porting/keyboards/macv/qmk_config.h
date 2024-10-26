/*
Copyright 2022 Huckies <https://github.com/Huckies>
Copyright 2023 OctopusZ <https://github.com/OctopusZ>

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

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B92
#define DEVICE_VER   0x0001
#define MANUFACTURER zhaokstudio
#define PRODUCT      macv

#define MATRIX_ROWS 10
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS         \
    {                           \
        B7, B6, B5, B4, B3, B2, B1, B0, B22, B23 \
    }
#define MATRIX_COL_PINS                                                                                \
    {                                                                                                  \
        A4, A5, A6, A0, A1, A2, A3, A15, A14, A13, A12, A11, A10, A7, A8, A9 \
    }
// #define DYNAMIC_KEYMAP_LAYER_COUNT 10

#define DIODE_DIRECTION  COL2ROW
#define BOOTMAGIC_ROW    0
#define BOOTMAGIC_COLUMN 0
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE


/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT


