/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "draw.h"

static const int map[] = {0, 1, 2, 2,           \
                          0, 2, 2, 2,            \
                          3, 3, 3, 2};

static const sfVector2i map_size = {4, 3};

int draw_map(game_t *game)
{
    int count = 0;
    sfVector2f pos = {0, 0};

    sfView_setCenter(game->view, game->pos);
    sfRenderWindow_setView(game->window, game->view);
    while (count < map_size.x * map_size.y) {
        sfSprite_setPosition(game->tiles[map[count]], pos);
        sfRenderWindow_drawSprite(game->window, game->tiles[map[count]], NULL);
        pos.x += 16 * 4;
        count++;
        if (count % map_size.x == 0) {
            pos.x = 0;
            pos.y += 16 * 4;
        }
    }
    return (1);
}
