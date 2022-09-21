/*
** EPITECH PROJECT, 2017
** main
** File description:
** ...
*/

#include "my.h"
#include <unistd.h>

int main(int ac, char **av)
{
	sfVideoMode mode = {1200, 800, 32};
	st_run st;

	if (ac != 2)
		return (84);
	if (av[1][0] == '-' && av[1][1] == 'h') {
		    display_h();
			return (0);
	}
	srand(time(NULL));
	creation_windows(&st, mode, av[1]);
    boucle(&st);
	close_windows(&st);
	return (0);
}

void display_h()
{
	my_putstr("Finite runner created with CSFML.\n\nUSAGE\n");
	my_putstr(" ./my_runner map.txt\n\n\nOPTIONS\n -i\t\t");
	my_putstr("launch the game in infinity mode.\n -h\t\t");
	my_putstr("print the usage and quit.\n\nUSER INTERACTIONS\n");
	my_putstr(" SPACE_KEY\tjump.\n");
}

void boucle(st_run *st)
{
	while (sfRenderWindow_isOpen(st->window) &&
	       st->map[st->line_void][st->count_pixel / 100] != '\n') {
	    usleep(3000);
		if (st->pix >= 100)
			read_map(st);
		background(st);
		objet(st);
		check_collision(st);
		if (st->jump == 0)
			mouvement_player(st);
		else
			move_jump(st);
		event(st);
		refresh_windows(st);
	}
}
