/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "event.h"

int event_key_pressed(game_t *game, sfEvent event)
{
    if (event.key.code == sfKeyUp)
        game->pos.y += 10;
    if (event.key.code == sfKeyDown)
        game->pos.y -= 10;
    if (event.key.code == sfKeyLeft)
        game->pos.x += 10;
    if (event.key.code == sfKeyRight)
        game->pos.x -= 10;
    return (1);
}
