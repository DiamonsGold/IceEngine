/*
** EPITECH PROJECT, 2022
** IceEngine/event
** File description:
** event.c
*/

#include "engine/event.h"

event_t get_event(void)
{
    event_t event = {
        .events = events
    };

    return event;
}
