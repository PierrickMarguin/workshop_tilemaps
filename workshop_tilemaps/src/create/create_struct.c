/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <string.h>
#include "game.h"
#include "create.h"

static void init_struct(game_t *game)
{
    memset(game, 0, sizeof(game_t));
    game->pos.x = 910;
    game->pos.y = 540;
}

static int (*create_tab[])(game_t *) = {create_window, create_view, create_clock, create_shieva, create_tiles, NULL};

int create_struct(game_t *game)
{
    int count = 0;

    init_struct(game);
    while (create_tab[count]) {
        if (!create_tab[count](game)) {
            destroy_struct(game);
            return (0);
        }
        count++;
    }
    return (1);
}
