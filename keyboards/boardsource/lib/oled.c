// Copyright 2024 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "oled.h"

led_t led_usb_state;

void render_layer_state(void) {
    oled_set_cursor(0, 0);
    led_usb_state = host_keyboard_led_state();

    oled_write_P(led_usb_state.caps_lock ? PSTR("CPSLK") : PSTR("     "), false);
    oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLK") : PSTR("     "), false);
    oled_write_P(PSTR("     "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_raw_P(layer0_img, sizeof(layer0_img));
            break;
        case 1:
            oled_write_raw_P(layer1_img, sizeof(layer1_img));
            break;
        case 2:
            oled_write_raw_P(layer2_img, sizeof(layer2_img));
            break;
        case 3:
            oled_write_raw_P(layer3_img, sizeof(layer3_img));
            break;
    }
}
