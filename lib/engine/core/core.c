/*
** EPITECH PROJECT, 2022
** IceEngine/core
** File description:
** core.c
*/

#include <SFML/Graphics.h>
#include "engine/game.h"
#include "engine/window.h"


int run(void)
{
    game_t *game = get_game("IceEngine");

    while (sfRenderWindow_isOpen(game->window.window)) {

        game->current_scene->event.events(game->current_scene);
        //update(&game);
        //display(&game);
    }

    game->destroy(game);

    return 0;
}
