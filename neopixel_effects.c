#include "neopixel_effects.h"
#include "effects/effect_concentric_circles.h"
#include "effects/effect_pointer.h"

void np_play_effect(neopixel_effect_t effect) {
    switch (effect) {
        case EFFECT_CONCENTRIC_CIRCLES:
            effect_concentric_circles();
            break;
        case EFFECT_POINTER:
            effect_pointer();
            break;
        // Adicione outros efeitos aqui
        default:
            // Efeito não encontrado
            break;
    }
}
