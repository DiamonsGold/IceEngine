##
## EPITECH PROJECT, 2022
## IceEngine
## File description:
## Makefile
##

NAME		=	engine

CC			=	gcc
CFLAGS		=	-I./include/ -Wall -Wextra
LDFLAGS		=	-L./lib/
LDLIBS		=	-lice				\
				-lengine			\
				-lcsfml-graphics	\
				-lcsfml-system

all:
	make -s -C ./lib/
	$(CC) -o $(NAME) main.c $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	make fclean -s -C ./lib/

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
