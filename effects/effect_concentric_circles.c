#include "../neopixel.h"
#include "pico/time.h"
#include <stdio.h>

void effect_concentric_circles() {
    npClear();

    // Frame 1
    // Primeiro anel.
    npSetLED(7, 0, 0, 80);
    npSetLED(11, 0, 0, 80);
    npSetLED(13, 0, 0, 80);
    npSetLED(17, 0, 0, 80);
    npWrite();
    sleep_ms(500);

    // Frame 2
    // Centro.
    npSetLED(12, 60, 60, 0);

    // Primeiro anel.
    npSetLED(7, 0, 0, 120);
    npSetLED(11, 0, 0, 120);
    npSetLED(13, 0, 0, 120);
    npSetLED(17, 0, 0, 120);

    // Segundo anel.
    npSetLED(2, 0, 0, 80);
    npSetLED(6, 0, 0, 80);
    npSetLED(8, 0, 0, 80);
    npSetLED(10, 0, 0, 80);
    npSetLED(14, 0, 0, 80);
    npSetLED(16, 0, 0, 80);
    npSetLED(18, 0, 0, 80);
    npSetLED(22, 0, 0, 80);
    npWrite();
    sleep_ms(500);

    // Frame 3
    // Centro.
    npSetLED(12, 80, 0, 0);

    // Primeiro anel.
    npSetLED(7, 60, 60, 0);
    npSetLED(11, 60, 60, 0);
    npSetLED(13, 60, 60, 0);
    npSetLED(17, 60, 60, 0);

    // Segundo anel.
    npSetLED(2, 0, 0, 120);
    npSetLED(6, 0, 0, 120);
    npSetLED(8, 0, 0, 120);
    npSetLED(10, 0, 0, 120);
    npSetLED(14, 0, 0, 120);
    npSetLED(16, 0, 0, 120);
    npSetLED(18, 0, 0, 120);
    npSetLED(22, 0, 0, 120);

    // Terceiro anel.
    npSetLED(1, 0, 0, 80);
    npSetLED(3, 0, 0, 80);
    npSetLED(5, 0, 0, 80);
    npSetLED(9, 0, 0, 80);
    npSetLED(15, 0, 0, 80);
    npSetLED(19, 0, 0, 80);
    npSetLED(21, 0, 0, 80);
    npSetLED(23, 0, 0, 80);
    npWrite();
}
