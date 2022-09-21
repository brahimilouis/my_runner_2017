/*
** EPITECH PROJECT, 2017
** windows_close
** File description:
** .......
*/

#include "my.h"

void close_windows(st_run *st)
{
	if (st->map[st->line_void][st->count_pixel / 100] == '\n')
		my_putstr("Good game ! You win ... Your score is : ");
	else
		my_putstr("Too bad ! try again ... Your score is : ");
	my_put_nbr(st->score);
	my_putchar('\n');
	sfMusic_destroy(st->music);
	sfMusic_destroy(st->musique_saut);
	sfSprite_destroy(st->sprite_bas);
	sfSprite_destroy(st->sprite_top);
	sfSprite_destroy(st->sprite_mid);
	sfText_destroy(st->text);
	sfTexture_destroy(st->tex_bas);
	sfTexture_destroy(st->tex_mid);
	sfTexture_destroy(st->tex_top);
	sfRenderWindow_destroy(st->window);
}
