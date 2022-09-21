/*
** EPITECH PROJECT, 2018
** creation_variable
** File description:
** ....
*/

#include "my.h"

void creation_variable(st_run *st)
{
	st->score = 0;
	st->mouvement.y = 350;
	st->mouvement.x = 260;
	st->move_top.y = 0;
	st->move_top.x = -0.4;
	st->move_bas.y = 190;
	st->move_bas.x = -1.6;
	st->move_mid.y = 200;
	st->move_mid.x = -0.9;
	st->cord_bas = 0;
	st->cord_top = 0;
	st->cord_mid = 0;
	st->move_obstacle.y = 550;
	st->move_obstacle.x = 1200;
	st->move_square.y = 550;
	creation_variable2(st);
}

void creation_variable2(st_run *st)
{
	st->move_square.x = 1200;
	st->pix = 0;
	sfSprite_move(st->sprite_obstacle, st->move_obstacle);
	sfSprite_move(st->sprite_square, st->move_square);
	sfSprite_move(st->sprite, st->mouvement);
	st->mouvement.x = 0;
	st->move_obstacle.y = 0;
	st->move_obstacle.x = -1.6;
	st->move_square.y = 0;
	st->move_square.x = -1.6;
	st->square = 0;
	st->obstacle = 0;
	st->cord_obstacle = 0;
	st->cord_square = 0;
	st->move_saut = 0;
	st->verif_square = 0;
	st->score_str = malloc(sizeof(char) * (10));
}
