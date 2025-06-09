// keyboards/sabine/config.h
#pragma once

/* Key matrix size */
#define MATRIX_ROWS 12  // 6 rows per side * 2 sides  
#define MATRIX_COLS 7   // 7 columns per side

/* Key matrix pins */
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS { GP10, GP19, GP20, GP18, GP26, GP27, GP28 }

/* Diode direction */
#define DIODE_DIRECTION COL2ROW

/* Split keyboard settings */
#define EE_HANDS  // Use EEPROM to determine left/right hand
#define SOFT_SERIAL_PIN GP1 // Communication between halves

/* Debounce reduces chatter (unintended double-presses) */
#define DEBOUNCE 5

/* Bootmagic key */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* USB settings */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x5AB1  // SAB1 for Sabine
#define DEVICE_VER   0x0001
#define MANUFACTURER "YourName"
#define PRODUCT      "Sabine Split Keyboard"
