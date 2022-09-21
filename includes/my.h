/*
** EPITECH PROJECT, 2018
** include
** File description:
** ....
*/

#ifndef MY__INCLUDES
#define MY__INCLUDES

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>

typedef struct st_runner {
	char *score_str;
	int score;
	sfText* text;
	sfMusic* music;
	sfMusic* musique_saut;
        sfRenderWindow* window;
	sfFont* font;
	sfTexture* texture;
        sfTexture* tex_bas;
	sfTexture* tex_top;
	sfTexture* tex_mid;
	sfTexture* tex_obstacle;
	sfTexture* tex_square;
	sfTexture* bird;
        sfSprite* sprite;
        sfSprite *sprite_top;
	sfSprite *sprite_mid;
	sfSprite *sprite_bas;
	sfSprite *sprite_obstacle;
        sfSprite *sprite_square;
	float cord_bas;
	float cord_top;
	float cord_mid;
	float cord_obstacle;
	float cord_square;
        sfIntRect rect;
        sfClock *clock;
        sfTime time;
        sfEvent event;
        int offset;
        int move;
        float my_seconds;
        sfVector2f mouvement;
	sfVector2f move_bas;
	sfVector2f move_top;
	sfVector2f move_mid;
	sfVector2f move_square;
        sfVector2f move_obstacle;
	int line_void;
	int line_un;
	int jump;
	int top;
	int pix;
	char **map;
	int lign;
	int col;
	int count_pixel;
	int max_pixel;
	int obstacle;
	int square;
	int move_saut;
	float col_obstacle;
	float col_square;
	int verif_square;
} st_run;

void objet2(st_run *st);
void display_h();
void boucle(st_run *st);
void event2(st_run *st);
void move_jump2(st_run *st);
char *convert_int_str(int nb, char *str);
void read_map(st_run *st);
void recup_map2(st_run *st, int i);
void objet(st_run *st);
void mouvement_jump2(st_run *st);
void mouvement_player2(st_run *st);
void creation_windows2(st_run *st);
void creation_variable2(st_run *st);
void background2(st_run *st);
void check_collision(st_run *st);
int next_malloc(char const *str, int i);
int start_fonction(char const *str);
char **array(char **map, char *str);
void recup_map(char *str, st_run *st);
char **malloc_map(char **map, char *str, st_run *st);
void move_jump(st_run *st);
void background(st_run *st);
void close_windows(st_run *st);
void creation_variable(st_run *st);
void creation_windows(st_run *st, sfVideoMode m, char *str);
void event(st_run *st);
void mouvement_player(st_run *st);
void move_jump(st_run *st);
void move_rect(sfIntRect *rect, st_run *st);
void my_putchar(char c);
int my_isneg(int nb);
void refresh_windows(st_run *st);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char const *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strnncpy(char *dest, char const *src, int n_2, int n);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int isnum(char const *str, int i);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_malloc_nbr_base(int nbr, int size_base);
void my_put_str_invers(char *str, int i);
int my_putnbr_base(int nbr, char const *base);
int isnoprint(char const *str, int i);
int my_show_word_array(char * const *tab);
int verif_space(char const *str, int i);
int verif_start_fonction(char const *str, int i);
int counter_tab(char const *str);
char my_letter_isalpha(char letter);
int my_printf(char *s, ...);
int search_pourcentage(char *str, int i);
void type_int(int nb, char *s, int i , int i_final);
char *base(int nbr, char const *base);
char **search_caract_attribut(char *s, int i, int i_final, char **tab);
void display_space_int(char **tab, int nb_space, char *nb);
int search_indicateur(char *str, int i);
int my_malloc_nbr_base(int nbr, int size_base);
void type_unsi(unsigned int arg, char *s, int i, int i_final);
void display_unsigned(char **tab, char *arg, int verif, char *str);
void type_char(char c, char *s, int i, int i_final);
void type_str(char *str, char *s, int i, int i_final);
void remplace_str(char *str);
void display_bad_parametre(char *s, int i, int i_final);
char *u(unsigned int nbr, char const *base);
void check_type_int(int c, char *s, int i, int i_final);

#endif /* MY__INCLUDES */
