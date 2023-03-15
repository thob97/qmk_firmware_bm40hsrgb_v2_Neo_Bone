/* Copyright 2022 Momokai
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


#define MATRIX_ROW_PINS { E0 }
#define MATRIX_COL_PINS { E6, B2, D1, D2, D3 }

#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 2

// Tweak how the mouse cursor moves. https://docs.qmk.fm/#/feature_mouse_keys
// Accelerated mode (default).
#define MOUSEKEY_DELAY  10
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED  10
#define MOUSEKEY_TIME_TO_MAX  30
#define MOUSEKEY_WHEEL_DELAY  10
#define MOUSEKEY_WHEEL_INTERVAL 80
#define MOUSEKEY_WHEEL_MAX_SPEED  8
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40


//TODO: implement RGB Matrix
#define RGB_DI_PIN F0
#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 4
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
    // RGB Matrix Animation modes. Explicitly enabled
    // For full list of effects, see:
    // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
    #define ENABLE_RGB_MATRIX_SOLID_COLOR
    // #define ENABLE_RGB_MATRIX_ALPHAS_MODS
    // #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_BAND_SAT
    #define ENABLE_RGB_MATRIX_BAND_VAL
    // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
    // #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    // #define ENABLE_RGB_MATRIX_DUAL_BEACON
    #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    // #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    #define ENABLE_RGB_MATRIX_RAINDROPS
    // #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    // #define ENABLE_RGB_MATRIX_HUE_BREATHING
    // #define ENABLE_RGB_MATRIX_HUE_PENDULUM
    // #define ENABLE_RGB_MATRIX_HUE_WAVE
    // #define ENABLE_RGB_MATRIX_PIXEL_RAIN
    // #define ENABLE_RGB_MATRIX_PIXEL_FLOW
    #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL

    // enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    // #define ENABLE_RGB_MATRIX_DIGITAL_RAIN

    // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    #define ENABLE_RGB_MATRIX_SPLASH
    // #define ENABLE_RGB_MATRIX_MULTISPLASH
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH
    // #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
