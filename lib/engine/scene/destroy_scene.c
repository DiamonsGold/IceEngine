/*
** EPITECH PROJECT, 2022
** IceEngine/scene
** File description:
** destroy_scene.c
*/

#include "engine/struct.h"
#include <stdlib.h>

void destroy_scene(scene_t *scene)
{
    free(scene);
}
