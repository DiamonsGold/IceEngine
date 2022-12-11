/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** engine/sprite
*/

#ifndef ENGINE_SPRITE_H
    #define ENGINE_SPRITE_H

    #include "engine/struct.h"

    sprite_t get_sprite(sfTexture *texture);

    void display_sprite(sprite_t *sprite, void *scene);

#endif /* !ENGINE_SPRITE_H */
