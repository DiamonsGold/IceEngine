/*
** EPITECH PROJECT, 2022
** IceEngine/window
** File description:
** display_window.c
*/

#include "engine/struct.h"

void display_window(window_t *window)
{
    sfRenderWindow_display(window->window);
}
