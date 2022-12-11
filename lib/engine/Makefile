##
## EPITECH PROJECT, 2022
## IceEngine
## File description:
## Makefile
##

NAME		:=	libengine.a

DIR_CORE	:=	./core/
SRC_CORE	:=	core.c
OBJ_CORE	:=	$(patsubst %.c, $(DIR_CORE)%.o, $(SRC_CORE))

DIR_GAME	:=	./game/
SRC_GAME	:=	game.c				\
				destroy_game.c
OBJ_GAME	:=	$(patsubst %.c, $(DIR_GAME)%.o, $(SRC_GAME))

DIR_MOUSE	:=	./mouse/
SRC_MOUSE	:=	mouse.c
OBJ_MOUSE	:=	$(patsubst %.c, $(DIR_MOUSE)%.o, $(SRC_MOUSE))

DIR_WINDOW	:=	./window/
SRC_WINDOW	:=	window.c			\
				close_window.c		\
				clear_window.c		\
				destroy_window.c	\
				display_window.c
OBJ_WINDOW	:=	$(patsubst %.c, $(DIR_WINDOW)%.o, $(SRC_WINDOW))

DIR_EVENT	:=	./event/
SRC_EVENT	:=	event.c				\
				events.c
OBJ_EVENT	:=	$(patsubst %.c, $(DIR_EVENT)%.o, $(SRC_EVENT))

DIR_SCENE	:=	./scene/
SRC_SCENE	:=	scene.c				\
				destroy_scene.c
OBJ_SCENE	:=	$(patsubst %.c, $(DIR_SCENE)%.o, $(SRC_SCENE))

OBJ			:=	$(OBJ_CORE) $(OBJ_GAME) $(OBJ_MOUSE)	\
				$(OBJ_WINDOW) $(OBJ_EVENT) $(OBJ_SCENE)

RM			:=	rm -f

CC			:=	gcc
CLINKER		:=	ar rc
CFLAGS		:=	-I./../../include/ -Wall -Wextra -g

all:		$(NAME)

$(NAME):	$(OBJ)
	@echo -e "\e[1;32m[OK]\e[0m" "\e[1;31mEngine compiled\e[0m"
	$(CLINKER) ./../$@ $(OBJ)

clean:
	@echo -e "\e[1;32m[OK]\e[0m" "\e[1;31mEngine clean\e[0m"
	$(RM) $(OBJ)

fclean:		clean
	$(RM) ./../$(NAME)

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
