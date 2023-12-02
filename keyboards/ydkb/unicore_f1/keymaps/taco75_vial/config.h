#pragma once

#undef  PRODUCT_ID
#define PRODUCT_ID    0x2301
// #undef  PRODUCT
// #define PRODUCT    Taco Keyboard (VIAL FW_VER)
#define DYNAMIC_KEYMAP_LAYER_COUNT    6
#define FLASH_KEYMAP_COUNT    2
#define VIAL_KEYBOARD_UID    {0x2E, 0xE6, 0x0E, 0x23, 0x34, 0xEF, 0x99, 0x37}

#undef  RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL    192
#undef  RGBLED_NUM
#define RGBLED_NUM    14
#define INDICATOR_NUM    1
#define INDICATOR_0_FUNCT    (1<<1)
#define INDICATOR_0_COLOR    (LED_TYPE){ .r = 255, .g = 0, .b = 255 }
#define WELCOME_LIGHT

#define VIAL_UNLOCK_COMBO_ROWS {0,7}
#define VIAL_UNLOCK_COMBO_COLS {0,6}