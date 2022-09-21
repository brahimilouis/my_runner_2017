/*
** EPITECH PROJECT, 2018
** background
** File description:
** .....
*/

#include "my.h"

void background(st_run *st)
{
	if (st->cord_bas >= 2400) {
		st->cord_bas = 0;
		st->move_bas.x = 2400;
		sfSprite_move(st->sprite_bas, st->move_bas);
		st->move_bas.x = -1.6;
	}
	if (st->cord_mid >= 2400) {
	        st->cord_mid = 0;
		st->move_mid.x = 2400;
		sfSprite_move(st->sprite_mid, st->move_mid);
		st->move_mid.x = -0.9;
	}
	if (st->cord_top >= 2400) {
	        st->cord_top = 0;
		st->move_top.x = 2400;
		sfSprite_move(st->sprite_top, st->move_top);
		st->move_top.x = -0.4;
	}
	background2(st);
}

void background2(st_run *st)
{
	st->count_pixel += 1.6;
	st->cord_bas += 1.6;
	st->cord_top += 0.4;
	st->cord_mid += 0.9;
	st->pix += 1.6;
}
