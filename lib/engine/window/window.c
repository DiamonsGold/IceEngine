/*
** EPITECH PROJECT, 2022
** IceEngine/window
** File description:
** window.c
*/

#include "engine/window.h"

static window_t create_window(game_t game)
{
    window_t window = {
        .mode = {720, 576, 32},
        .window = sfRenderWindow_create(window.mode, game.name, sfClose, NULL),
        .color = sfBlack,
        .fps = 60,
        .close = close_window,
        .clear = clear_window,
        .display = display_window,
        .destroy = destroy_window,
    };

    return window;
}

static void init_window(window_t *window)
{
    sfRenderWindow_setFramerateLimit(window->window, window->fps);
    sfRenderWindow_setVerticalSyncEnabled(window->window, sfTrue);
}

void get_window(game_t *game)
{
    game->window = create_window(*game);
    init_window(&game->window);
}
