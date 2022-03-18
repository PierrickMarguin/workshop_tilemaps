/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"
#include <stdlib.h>
#include <string.h>

static const int map[] = {0, 1, 2, 2,           \
                          0, 2, 2, 2,            \
                          3, 3, 3, 2};

static const sfVector2i map_size = {4, 3};

int create_map(game_t *game)
{
    game->map = malloc(sizeof(map_t));
    if (!game->map)
        return (0);
    game->map->map = malloc(sizeof(int8_t) * map_size.x * map_size.y);
    if (!game->map->map)
        return (0);
    memcpy(game->map->map, map, sizeof(int8_t) * map_size.x * map_size.y);
    game->map->x = map_size.x;
    game->map->y = map_size.y;
    game->map->name = NULL;
    return (1);
}
