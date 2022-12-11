/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** scene/scene.h
*/

#ifndef ENGINE_SCENE_H
    #define ENGINE_SCENE_H

    #include "engine/struct.h"

    scene_t *get_scene(game_t *game);

    void destroy_scene(scene_t *scene);

#endif /* !ENGINE_SCENE_H */
