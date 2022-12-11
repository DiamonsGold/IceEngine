/*
** EPITECH PROJECT, 2022
** IceEngine/window
** File description:
** clear_window.c
*/

#include "engine/struct.h"

void clear_window(window_t *window)
{
    sfRenderWindow_clear(window->window, window->color);
}
