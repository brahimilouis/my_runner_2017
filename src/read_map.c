/*
** EPITECH PROJECT, 2018
** read_map
** File description:
** .....
*/

#include "my.h"

void read_map(st_run *st)
{
	st->score++;
	st->score_str = convert_int_str(st->score, st->score_str);
	sfText_setString(st->text, st->score_str);
	st->pix = 0;
	if (st->map[st->line_void][st->count_pixel / 100] == ' ')
		st->pix = 0;
	else if (st->map[st->line_void][st->count_pixel / 100] == '2'
		&& st->obstacle != 1)
		st->obstacle = 1;
	if (st->map[st->line_void][st->count_pixel / 100] == '3'
		&& st->square != 1)
		st->square = 1;
}
