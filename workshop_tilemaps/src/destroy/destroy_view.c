/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "destroy.h"

int destroy_view(game_t *game)
{
    if (!game->view)
        return (0);
    sfView_destroy(game->view);
    if (!game->hud_view)
        return (0);
    sfView_destroy(game->hud_view);
    return (1);
}
