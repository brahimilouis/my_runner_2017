/*
** EPITECH PROJECT, 2018
** check_collision
** File description:
** .....
*/

#include "my.h"

void check_collision(st_run *st)
{
	if (st->cord_obstacle < 1050 && st->cord_obstacle > 860
	    && st->move_saut < 5)
		sfRenderWindow_close(st->window);
	if (st->cord_square < 1050 && st->cord_square > 860
	    && st->move_saut < 5 && st->verif_square == 0)
                sfRenderWindow_close(st->window);
}
