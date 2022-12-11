/*
** EPITECH PROJECT, 2022
** IceEngine/core
** File description:
** core.c
*/

#include <SFML/Graphics.h>
#include "engine/game.h"
#include "engine/window.h"


int run(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window.window)) {
        game->current_scene->event.events(game->current_scene);
        //game->current_scene->update(game->current_scene);
        game->display(game);
    }

    game->destroy(game);

    return 0;
}
