/*
** EPITECH PROJECT, 2022
** IceEngine/game
** File description:
** destroy_game.c
*/

#include <stdlib.h>
#include "engine/struct.h"
#include "list.h"

void destroy_game(game_t *game)
{
    game->window.destroy(&game->window);

    for (list_node_t *node = game->scenes->head; node; node = node->next)
        ((scene_t *) node->value)->destroy(node->value);

    list_destroy(game->scenes);
    sfClock_destroy(game->clock);
    free(game);
}
