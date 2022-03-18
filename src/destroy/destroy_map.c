/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "game.h"
#include "destroy.h"

int destroy_map(game_t *game)
{
    if (!game->map)
        return (0);
    if (game->map->map)
        free(game->map->map);
    free(game->map);
    return (1);
}
