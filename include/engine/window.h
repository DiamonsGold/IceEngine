/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** engine/window.h
*/

#ifndef ENGINE_WINDOW_H
    #define ENGINE_WINDOW_H

    #include <engine/struct.h>

    void get_window(game_t *game);

    void close_window(window_t *window);

    void clear_window(window_t *window);

    void display_window(window_t *window);

    void destroy_window(window_t *window);

#endif /* !ENGINE_WINDOW_H */
