/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "draw.h"

int draw_map(game_t *game)
{
    int count = 0;
    sfVector2f pos = {0, 0};

    sfView_setCenter(game->view, game->pos);
    sfRenderWindow_setView(game->window, game->view);
    while (count < game->map->x * game->map->y) {
        sfSprite_setPosition(game->tiles[game->map->map[count]], pos);
        sfRenderWindow_drawSprite(game->window, game->tiles[game->map->map[count]], NULL);
        pos.x += 16 * 4;
        count++;
        if (count % game->map->x == 0) {
            pos.x = 0;
            pos.y += 16 * 4;
        }
    }
    return (1);
}
