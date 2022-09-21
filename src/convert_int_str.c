/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** ...
*/

#include "my.h"

char *convert_int_str(int nb, char *str)
{
	int diviseur = 1;
	int division = 1;
	int i = 0;
	int k = 0;

	while (division != 0){
		division = nb / diviseur;
		diviseur = diviseur * 10;
		i++;
	}
	i = i - 1;
	diviseur = diviseur / 100;
	while (i > 0) {
		str[k] = (nb / diviseur) + 48;
		nb = nb % diviseur;
		i--;
		k++;
		diviseur = diviseur / 10;
	}
	str[k] = '\0';
	return (str);
}
