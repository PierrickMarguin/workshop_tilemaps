/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "draw.h"

int draw_shieva(game_t *game)
{
    sfRenderWindow_setView(game->window, game->hud_view);
    sfRenderWindow_drawSprite(game->window, game->shieva, NULL);
    sfRenderWindow_setView(game->window, game->view);
    return (1);
}
