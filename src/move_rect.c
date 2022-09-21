/*
** EPITECH PROJECT, 2017
** move_rect
** File description:
** .....
*/

#include "my.h"

void move_rect(sfIntRect *rect, st_run *st)
{
	rect->top = st->top;
	rect->left = st->offset;
	rect->width = st->move;
	rect->height = 300;
}
