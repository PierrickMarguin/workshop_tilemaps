/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "destroy.h"

int destroy_shieva(game_t *game)
{
    if (!game->shieva_texture)
        return (0);
    sfTexture_destroy(game->shieva_texture);
    if (!game->shieva)
        return (0);
    sfSprite_destroy(game->shieva);
    return (1);
}
