/*
** EPITECH PROJECT, 2022
** IceEngine/game_object
** File description:
** add_game_object.c
*/

#include <engine/struct.h>

void add_game_object(scene_t *scene, game_object_t *game_object)
{
    list_add(scene->game_objects, game_object);
}
