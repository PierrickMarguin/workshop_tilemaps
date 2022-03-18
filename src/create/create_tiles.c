/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "game.h"
#include "create.h"

static int create_sprite_tab(game_t *game)
{
    int count = 0;
    sfIntRect rect = {0, 0, 16, 16};
    sfVector2f scale = {4, 4};

    while (count < 4) {
        game->tiles[count] = sfSprite_create();
        if (!game->tiles[count])
            return (0);
        sfSprite_setTexture(game->tiles[count], game->tiles_texture, sfTrue);
        sfSprite_setTextureRect(game->tiles[count], rect);
        sfSprite_setScale(game->tiles[count], scale);
        rect.left = rect.left + 16;
        count++;
    }
    return (1);
}

int create_tiles(game_t *game)
{
    game->tiles_texture = sfTexture_createFromFile( \
"assets/tiles.png", NULL);
    if (!game->shieva_texture)
        return (0);
    game->tiles = malloc(sizeof(sfSprite *) * 4);
    if (!game->shieva)
        return (0);
    return (create_sprite_tab(game));
}
