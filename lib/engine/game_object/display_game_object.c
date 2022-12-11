/*
** EPITECH PROJECT, 2022
** IceEngine/game_object
** File description:
** display_game_object.c
*/

#include "engine/struct.h"

void display_game_object(game_object_t *game_object, void *scene)
{
    game_object->sprite.display(&game_object->sprite, scene);
}
