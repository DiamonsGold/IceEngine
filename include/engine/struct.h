/*
** EPITECH PROJECT, 2022
** IceEngine
** File description:
** engine/struct.h
*/

#ifndef ENGINE_STRUCT_H
    #define ENGINE_STRUCT_H

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include "list.h"

    typedef struct window_s {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfColor color;
        int fps;
        void (*close)(struct window_s *window);
        void (*clear)(struct window_s *window);
        void (*display)(struct window_s *window);
        void (*destroy)(struct window_s *window);
    } window_t;

    typedef struct mouse_s {
        sfVector2f pos;
    } mouse_t;

    typedef struct event_s {
        sfEvent event;
        void (*events)(void *scene_v);
    } event_t;

    typedef struct sprite_s {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f scale;
        sfIntRect rect;
        void (*display)(struct sprite_s *sprite, void *scene);
        void (*destroy)(struct sprite_s *sprite);
    } sprite_t;

    typedef struct game_object_s {
        sprite_t sprite;
        sfVector2f pos;
        void *component;
        void (*update)(struct game_object_s *game_object, void *scene_v);
        void (*display)(struct game_object_s *game_object, void *scene_v);
        void (*destroy)(struct game_object_s *game_object);
    } game_object_t;

    typedef struct scene_s {
        window_t *window;
        mouse_t *mouse;
        event_t event;
        sfClock *clock;
        list_t *game_objects;
        void (*update)(struct scene_s *scene);
        void (*display)(struct scene_s *scene);
        void (*destroy)(struct scene_s *scene);
    } scene_t;

    typedef struct game_s {
        char *name;
        window_t window;
        mouse_t mouse;
        sfClock *clock;
        list_t *scenes;
        scene_t *current_scene;
        void *component;
        void (*display)(struct game_s *game);
        void (*destroy)(struct game_s *game);
    } game_t;

#endif /* !ENGINE_STRUCT_H */
