/*
Copyright 2023 Spencer Deven <splitlogicdesign@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Screen support
#define GC9A01_NUM_DEVICES 2
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
#define LCD_RST_PIN GP12
#define LCD_DC_PIN GP8
#define LCD_CS_PIN GP9
#define LCD_SPI_DIVISOR 8
#define QUANTUM_PAINTER_DEBUG
#define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS true

// Cirque support, comment out if using two screens
#define SPLIT_POINTING_ENABLE
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
#define CIRQUE_PINNACLE_DIAMETER_MM 35
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define POINTING_DEVICE_CS_PIN GP15
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_TAPPING_TERM 100
#define POINTING_DEVICE_TASK_THROTTLE_MS 5

    #define POINTING_DEVICE_COMBINED            // two pointing devices
    #define POINTING_DEVICE_ROTATION_180        // for cirque on the left
