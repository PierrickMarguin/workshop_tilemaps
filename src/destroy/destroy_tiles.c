/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "game.h"
#include "destroy.h"

int destroy_tiles(game_t *game)
{
    int count = 0;

    if (!game->tiles_texture)
        return (0);
    sfTexture_destroy(game->tiles_texture);
    if (!game->tiles)
        return (0);
    while (count < 4 && game->tiles[count]) {
        sfSprite_destroy(game->tiles[count]);
        count++;
    }
    free(game->tiles);
    return (1);
}
