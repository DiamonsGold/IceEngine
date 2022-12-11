/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** engine/game_object.h
*/

#ifndef ENGINE_GAME_OBJECT_H
    #define ENGINE_GAME_OBJECT_H

    #include "engine/struct.h"

    game_object_t *get_game_object(sfTexture *texture);

    void display_game_object(game_object_t *game_object, void *scene);

    void add_game_object(scene_t *scene, game_object_t *game_object);

#endif /* !ENGINE_GAME_OBJECT_H */
