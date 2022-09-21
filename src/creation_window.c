/*
** EPITECH PROJECT, 2017
** creation_windows
** File description:
** ......
*/

#include "my.h"

void creation_windows(st_run *st, sfVideoMode m, char *str)
{
	recup_map(str, st);
	st->offset = 0;
	st->move = 165;
	st->jump = 0;
	st->top = 0;
	st->window = sfRenderWindow_create(m, "run", sfResize | sfClose, NULL);
	st->sprite_bas = sfSprite_create();
	st->sprite_top = sfSprite_create();
	st->sprite_mid = sfSprite_create();
	st->sprite_obstacle = sfSprite_create();
	st->sprite_square = sfSprite_create();
	st->tex_obstacle = sfTexture_createFromFile("im/obstacle.png", NULL);
	st->tex_square = sfTexture_createFromFile("im/square.png", NULL);
	st->tex_bas = sfTexture_createFromFile("im/bas.png", NULL);
	st->tex_mid = sfTexture_createFromFile("im/mid.png", NULL);
	st->tex_top = sfTexture_createFromFile("im/top.jpg", NULL);
	sfSprite_setTexture(st->sprite_top, st->tex_top, sfTrue);
	creation_windows2(st);
}

void creation_windows2(st_run *st)
{
	sfSprite_setTexture(st->sprite_bas, st->tex_bas, sfTrue);
	sfSprite_setTexture(st->sprite_mid, st->tex_mid, sfTrue);
	sfSprite_setTexture(st->sprite_obstacle, st->tex_obstacle, sfTrue);
	sfSprite_setTexture(st->sprite_square, st->tex_square, sfTrue);
	st->sprite = sfSprite_create();
	st->clock = sfClock_create();
	creation_variable(st);
	st->bird = sfTexture_createFromFile("im/sprite.png", NULL);
	sfSprite_setTexture(st->sprite, st->bird, sfTrue);
	st->music = sfMusic_createFromFile("im/musique");
	st->musique_saut = sfMusic_createFromFile("im/Jump_sound");
	sfMusic_play(st->music);
	sfMusic_setLoop(st->music, sfTrue);
	st->font = sfFont_createFromFile("im/arial.ttf");
	st->text = sfText_create();
	sfText_setString(st->text, "0");
	sfText_setFont(st->text, st->font);
	sfText_setColor(st->text, sfRed);
	sfText_setCharacterSize(st->text, 80);
}
