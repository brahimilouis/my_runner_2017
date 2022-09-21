/*
** EPITECH PROJECT, 2017
** event
** File description:
** ......
*/

#include "my.h"

void event(st_run *st)
{
	while (sfRenderWindow_pollEvent(st->window, &st->event)) {
		if (st->event.type == sfEvtClosed)
			sfRenderWindow_close(st->window);
		if (st->event.key.code == sfKeySpace &&
		    st->verif_square == 0)
			event2(st);
	}
}

void event2(st_run *st)
{
	if (st->jump == 0 && st->verif_square == 0) {
		sfMusic_play(st->musique_saut);
		st->mouvement.y = -7.7;
		st->offset = 1650;
		st->top = 584;
	}
	st->jump = 1;
}
