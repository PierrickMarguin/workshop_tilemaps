/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"

int create_shieva(game_t *game)
{
    game->shieva_texture = sfTexture_createFromFile( \
"assets/shieva.png", NULL);
    if (!game->shieva_texture)
        return (0);
    game->shieva = sfSprite_create();
    if (!game->shieva)
        return (0);
    sfSprite_setTexture(game->shieva, game->shieva_texture, sfFalse);
    return (1);
}
