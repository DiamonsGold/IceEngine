/*
** EPITECH PROJECT, 2022
** IceEngine/scene
** File description:
** display_scene.c
*/

#include "engine/struct.h"
#include "list.h"

void display_scene(scene_t *scene)
{
    for (list_node_t *node = scene->game_objects->head; node; node = node->next)
        if (((game_object_t *) node->value)->display != NULL)
            ((game_object_t *) node->value)->display(node->value, scene);
}
