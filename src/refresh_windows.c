/*
** EPITECH PROJECT, 2017
** refresh_windows
** File description:
** ....
*/

#include "my.h"

void refresh_windows(st_run *st)
{
	sfSprite_move(st->sprite_bas, st->move_bas);
	sfSprite_move(st->sprite_mid, st->move_mid);
	sfSprite_move(st->sprite_top, st->move_top);
	st->move_mid.y = 0;
	st->move_bas.y = 0;
	sfRenderWindow_clear(st->window, sfBlack);
	sfRenderWindow_drawSprite(st->window, st->sprite_top, NULL);
	sfRenderWindow_drawSprite(st->window, st->sprite_mid, NULL);
	sfRenderWindow_drawSprite(st->window, st->sprite_bas, NULL);
	sfRenderWindow_drawSprite(st->window, st->sprite, NULL);
	sfRenderWindow_drawSprite(st->window, st->sprite_obstacle, NULL);
	sfRenderWindow_drawSprite(st->window, st->sprite_square, NULL);
	sfRenderWindow_drawText(st->window, st->text, NULL);
	sfRenderWindow_display(st->window);
}
