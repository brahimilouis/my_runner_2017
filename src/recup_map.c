/*
** EPITECH PROJECT, 2017
** recup_map
** File description:
** recup
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>

void recup_map(char *str, st_run *st)
{
	int i;

	st->map = malloc_map(st->map, str, st);
	st->map = array(st->map, str);
	st->lign = my_strlen(st->map[0]) - 1;
	st->line_void = 0;
	i = st->col;
	recup_map2(st, i);
	st->max_pixel = my_strlen(st->map[st->line_un]) * 100;
	st->count_pixel = 0;
}

void recup_map2(st_run *st, int i)
{
	int j = 0;
	int verif = 0;

	while (i >= 0) {
		if (st->map[i][j] != '1' && verif == 0) {
			verif = 1;
			st->line_un = i;
		}
		if (st->map[i][j] != ' ' && verif == 1) {
			st->line_void = i;
			i--;
			j = -1;
		}
		j++;
		if (my_strlen(st->map[st->col]) == j) {
			i--;
			j = 0;
		}
	}
}
