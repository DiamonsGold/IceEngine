/*
** EPITECH PROJECT, 2022
** IceEngine/game
** File description:
** game.c
*/

#include <stdlib.h>
#include "engine/game.h"
#include "engine/window.h"
#include "engine/scene.h"

static game_t *create_game(char *name)
{
    game_t *game = malloc(sizeof(game_t));
    game->name = name;
    game->clock = sfClock_create();
    game->scenes = list_create();
    game->component = NULL;
    game->display = display_game;
    game->destroy = destroy_game;

    return game;
}

static void init_game(game_t *game)
{
    get_window(game);
    //get_mouse(game);

    list_add(game->scenes, get_scene(game));
    game->current_scene = game->scenes->head->value;
}

game_t *get_game(char *name)
{
    game_t *game = create_game(name);
    init_game(game);

    return game;
}
