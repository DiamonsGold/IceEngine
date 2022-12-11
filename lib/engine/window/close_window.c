/*
** EPITECH PROJECT, 2022
** IceEngine/window
** File description:
** close_window.c
*/

#include "engine/struct.h"

void close_window(window_t *window)
{
    sfRenderWindow_close(window->window);
}
