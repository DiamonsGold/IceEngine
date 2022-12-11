/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** engine/game.h
*/

#ifndef ENGINE_GAME_H
    #define ENGINE_GAME_H

    #include <engine/struct.h>

    game_t *get_game(char *name);

    void display_game(game_t *game);

    void destroy_game(game_t *game);

#endif /* !ENGINE_GAME_H */
