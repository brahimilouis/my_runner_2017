##
## EPITECH PROJECT, 2017
## makefile
## File description:
## ..
##

SRCS	=	src/creation_window.c	\
		src/event.c	\
		src/main.c	\
		src/mouvement_player.c	\
		src/move_rect.c	\
		src/refresh_windows.c	\
		src/close_windows.c	\
		src/move_jump.c	\
		src/background.c	\
		src/creation_variable.c	\
		src/recup_map.c	\
		src/array.c	\
		src/my_str_to_word_array.c	\
		src/malloc_map.c	\
		src/my_putchar.c	\
		src/my_strlen.c	\
		src/my_putstr.c	\
		src/my_put_nbr.c	\
		src/my_strcpy.c	\
		src/read_map.c	\
		src/objet.c	\
		src/check_collision.c	\
		src/convert_int_str.c	\

OBJS	=	$(SRCS:.c=.o)

INCLUDE =	-I./includes/


CFLAGS	=	$(INCLUDE) -Wall -Wextra

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJS)
		gcc -o $(NAME) $(OBJS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -Iinclude -Llib/my
		rm $(OBJS)

clean:
		rm -f $(NAME)

fclean:		clean
		rm -f $(OBJS)

re:		fclean all
