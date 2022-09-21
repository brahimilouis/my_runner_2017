/*
** EPITECH PROJECT, 2018
** objet
** File description:
** ....
*/

#include "my.h"

void objet(st_run *st)
{
	if (st->square == 1) {
		sfSprite_move(st->sprite_square, st->move_square);
		st->cord_square += 1.6;
	}
	if (st->obstacle == 1) {
		sfSprite_move(st->sprite_obstacle, st->move_obstacle);
		st->cord_obstacle += 1.6;
	}
	if (st->cord_square >= 1400) {
		st->square = 0;
		st->move_square.x = st->cord_square;
		sfSprite_move(st->sprite_square, st->move_square);
		st->move_square.x = -1.6;
		st->cord_square = 0;
	}
	objet2(st);
}

void objet2(st_run *st)
{
	if (st->cord_obstacle >= 1400) {
                st->obstacle = 0;
                st->move_obstacle.x = st->cord_obstacle;
                sfSprite_move(st->sprite_obstacle, st->move_obstacle);
                st->move_obstacle.x = -1.6;
                st->cord_obstacle = 0;
        }
}
