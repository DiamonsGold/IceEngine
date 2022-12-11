/*
** EPITECH PROJECT, 2022
** IceEngine/sprite
** File description:
** display_sprite.c
*/

#include "engine/struct.h"

void display_sprite(sprite_t *sprite, void *scene)
{
    sfRenderWindow_drawSprite(
        ((scene_t *)scene)->window->window, sprite->sprite, NULL);
}
