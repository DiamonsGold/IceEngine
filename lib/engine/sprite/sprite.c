/*
** EPITECH PROJECT, 2022
** IceEngine/sprite
** File description:
** sprite.c
*/

#include "engine/sprite.h"

static sprite_t create_sprite(sfTexture *texture)
{
    sprite_t sprite = {
        .texture = texture,
        .sprite = sfSprite_create(),
        .scale = (sfVector2f){1, 1},
        .display = display_sprite,
        .destroy = NULL
    };

    return sprite;
}

static void init_sprite(sprite_t *sprite)
{
    sfFloatRect rect;

    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);

    rect = sfSprite_getGlobalBounds(sprite->sprite);
    sprite->rect = (sfIntRect){0, 0, (int)rect.width, (int)rect.height};

    sfSprite_setTextureRect(sprite->sprite, sprite->rect);
}

sprite_t get_sprite(sfTexture *texture)
{
    sprite_t sprite = create_sprite(texture);

    init_sprite(&sprite);

    return sprite;
}
