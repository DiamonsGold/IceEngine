/*
** EPITECH PROJECT, 2022
** IceEngine/window
** File description:
** destroy_window.c
*/

#include "engine/struct.h"

void destroy_window(window_t *window)
{
    sfRenderWindow_destroy(window->window);
}
