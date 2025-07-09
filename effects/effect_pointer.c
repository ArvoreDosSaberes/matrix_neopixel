#include "effect_pointer.h"
#include "../neopixel.h"
#include "pico/stdlib.h"
#include <stdint.h>

// Helper function to convert HSV to RGB
// H is 0-359, S is 0-255, V is 0-255
static void hsv_to_rgb(uint16_t h, uint8_t s, uint8_t v, uint8_t *r, uint8_t *g, uint8_t *b) {
    if (s == 0) {
        *r = v; *g = v; *b = v;
        return;
    }
    uint8_t region = h / 60;
    uint16_t remainder = (h % 60) * 255 / 60;
    uint8_t p = (v * (255 - s)) >> 8;
    uint8_t q = (v * (255 - ((s * remainder) >> 8))) >> 8;
    uint8_t t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

    switch (region) {
        case 0: *r = v; *g = t; *b = p; break;
        case 1: *r = q; *g = v; *b = p; break;
        case 2: *r = p; *g = v; *b = t; break;
        case 3: *r = p; *g = q; *b = v; break;
        case 4: *r = t; *g = p; *b = v; break;
        default: *r = v; *g = p; *b = q; break;
    }
}

void effect_pointer() {
    const uint8_t pointer_leds[] = {2, 6, 8, 10, 14, 16, 18, 22};
    const int num_leds = sizeof(pointer_leds);
    uint16_t hue = 0;

    for (int j = 0; j < 5; j++) { // Repete o ciclo 5 vezes
        for (int i = 0; i < num_leds; i++) {
            npClear();
            uint8_t r, g, b;
            hsv_to_rgb(hue, 255, 100, &r, &g, &b);
            npSetLED(pointer_leds[i], r, g, b);
            npWrite();
            hue = (hue + 360 / num_leds) % 360;
            sleep_ms(100);
        }
    }
}
