/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Network.h>
#include <SFML/Graphics.h>

#include "map.h"

typedef struct mouse_s {
    int x;
    int y;
    float mapped_x;
    float mapped_y;
} mouse_t;

typedef struct game_s {
    sfRenderWindow *window;
    sfView *view;
    sfView *hud_view;
    sfClock *draw_clock;
    mouse_t mouse;
    sfTexture *shieva_texture;
    sfSprite *shieva;
    sfTexture *tiles_texture;
    sfSprite **tiles;
    sfVector2f pos;
    map_t *map;
} game_t;

int create_struct(game_t *game);

int game_loop(game_t *game);

int handle_event(game_t *game);

int draw(game_t *game);

int destroy_struct(game_t *game);

#endif /* GAME_H_ */
