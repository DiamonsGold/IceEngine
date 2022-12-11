/*
** EPITECH PROJECT, 2022
** IceEngine/event
** File description:
** events.c
*/

#include "engine/struct.h"


#include <stdio.h>
void events(void *scene_v)
{
    scene_t *scene = scene_v;
    sfEvent *event = &scene->event.event;

    while (sfRenderWindow_pollEvent(scene->window->window, event)) {
        if (scene->event.event.type == sfEvtClosed)
            scene->window->close(scene->window);
    }
}
