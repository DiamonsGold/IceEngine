/*
** EPITECH PROJECT, 2022
** IceEngine/game_object
** File description:
** game_object.c
*/

#include <stdlib.h>
#include "engine/game_object.h"
#include "engine/sprite.h"

static game_object_t *create_game_object(sfTexture *texture)
{
    game_object_t *game_object = malloc(sizeof(game_object_t));

    game_object->sprite = get_sprite(texture);
    game_object->pos = (sfVector2f){0, 0};
    game_object->component = NULL;
    game_object->update = NULL;
    game_object->display = display_game_object;
    game_object->destroy = NULL;

    return game_object;
}

game_object_t *get_game_object(sfTexture *texture)
{
    game_object_t *game_object = create_game_object(texture);

    return game_object;
}
