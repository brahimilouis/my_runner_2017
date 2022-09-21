/*
** EPITECH PROJECT, 2017
** move_jump.c
** File description:
** ....
*/

#include "my.h"

void move_jump(st_run *st)
{
	st->time = sfClock_getElapsedTime(st->clock);
	st->my_seconds = st->time.microseconds / 15000;
	if (st->my_seconds > 1.0) {
		if (st->move_saut == 12)
			st->mouvement.y = 7.14;
		if (st->verif_square == 0)
			st->move_saut++;
		move_rect(&st->rect, st);
		st->offset = st->offset + 165;
		if (st->offset == 1980) {
			st->offset = 0;
			st->top = st->top + 292;
		}
		move_jump2(st);
	}
}

void move_jump2(st_run *st)
{
	if (st->top == 1460) {
		st->mouvement.y = 0;
		st->move_saut = 0;
		st->top = 0;
		st->jump = 0;
	}
	sfSprite_setTextureRect(st->sprite, st->rect);
	sfClock_restart(st->clock);
	if (st->verif_square == 0) {
		sfSprite_move(st->sprite, st->mouvement);
		sfRenderWindow_drawSprite(st->window, st->sprite, NULL);
	}
	if (st->move_saut == 12 && st->cord_square < 800 &&
	    st->cord_square > 600) {
		st->verif_square = 1;
		st->move_saut = 12;
	}
	if (st->verif_square == 1) {
		st->move_saut = 12;
		st->mouvement.y = 7.7;
	}
}
