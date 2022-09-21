/*
** EPITECH PROJECT, 2017
** monv_image
** File description:
** ....
*/

#include "my.h"

void mouvement_player(st_run *st)
{
	st->time = sfClock_getElapsedTime(st->clock);
	st->my_seconds = st->time.microseconds / 15000;
	if (st->my_seconds > 1.0)
		mouvement_player2(st);
}

void mouvement_player2(st_run *st)
{
	move_rect(&st->rect, st);
	st->offset = st->offset + 165;
	if (st->offset == 1980) {
		st->offset = 0;
		st->top = st->top + 292;
	}
	if (st->top == 584)
		st->top = 0;
	sfSprite_setTextureRect(st->sprite, st->rect);
	sfClock_restart(st->clock);
	if (st->move_saut == 24) {
		st->move_saut = 0;
		st->verif_square = 0;
		st->mouvement.y = 0;
	}
	if (st->verif_square == 1 && st->cord_square > 1000) {
		sfSprite_move(st->sprite, st->mouvement);
		sfRenderWindow_drawSprite(st->window, st->sprite, NULL);
		st->move_saut++;
	}
}
