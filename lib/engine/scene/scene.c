/*
** EPITECH PROJECT, 2022
** IceEngine/scene
** File description:
** scene.c
*/

#include <stdlib.h>
#include "engine/scene.h"
#include "engine/event.h"

static scene_t *create_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));
    scene->window = &game->window;
    scene->mouse = &game->mouse;
    scene->clock = game->clock;
    scene->event = get_event();
    scene->update = NULL;
    scene->display = NULL;
    scene->destroy = destroy_scene;

    return scene;
}

scene_t *get_scene(game_t *game)
{
    scene_t *scene = create_scene(game);

    return scene;
}
