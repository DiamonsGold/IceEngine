/*
** EPITECH PROJECT, 2022
** IceEngine/game
** File description:
** display_game.c
*/

#include "engine/struct.h"

void display_game(game_t *game)
{
    game->window.clear(&game->window);
    game->current_scene->display(game->current_scene);
    game->window.display(&game->window);
}
