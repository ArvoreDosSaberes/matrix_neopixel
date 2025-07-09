#ifndef NEOPIXEL_EFFECTS_H
#define NEOPIXEL_EFFECTS_H

// Enumeração para os efeitos de LED
typedef enum {
    EFFECT_CONCENTRIC_CIRCLES,
    EFFECT_POINTER
} neopixel_effect_t;

/**
 * @brief Executa um efeito de LED predefinido.
 * 
 * @param effect A constante que representa o efeito a ser executado.
 */
void np_play_effect(neopixel_effect_t effect);

#endif // NEOPIXEL_EFFECTS_H
