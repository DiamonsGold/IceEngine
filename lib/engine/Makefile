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
SRC_GAME	:=	game.c					\
				display_game.c			\
				destroy_game.c
OBJ_GAME	:=	$(patsubst %.c, $(DIR_GAME)%.o, $(SRC_GAME))

DIR_MOUSE	:=	./mouse/
SRC_MOUSE	:=	mouse.c
OBJ_MOUSE	:=	$(patsubst %.c, $(DIR_MOUSE)%.o, $(SRC_MOUSE))

DIR_WINDOW	:=	./window/
SRC_WINDOW	:=	window.c				\
				close_window.c			\
				clear_window.c			\
				destroy_window.c		\
				display_window.c
OBJ_WINDOW	:=	$(patsubst %.c, $(DIR_WINDOW)%.o, $(SRC_WINDOW))

DIR_EVENT	:=	./event/
SRC_EVENT	:=	event.c					\
				events.c
OBJ_EVENT	:=	$(patsubst %.c, $(DIR_EVENT)%.o, $(SRC_EVENT))

DIR_SCENE	:=	./scene/
SRC_SCENE	:=	scene.c					\
				display_scene.c			\
				destroy_scene.c
OBJ_SCENE	:=	$(patsubst %.c, $(DIR_SCENE)%.o, $(SRC_SCENE))

DIR_SPRITE	:=	./sprite/
SRC_SPRITE	:=	sprite.c				\
				display_sprite.c
OBJ_SPRITE	:=	$(patsubst %.c, $(DIR_SPRITE)%.o, $(SRC_SPRITE))

DIR_GAMEOBJ	:=	./game_object/
SRC_GAMEOBJ	:=	game_object.c			\
				display_game_object.c	\
				add_game_object.c
OBJ_GAMEOBJ	:=	$(patsubst %.c, $(DIR_GAMEOBJ)%.o, $(SRC_GAMEOBJ))

OBJ			:=	$(OBJ_CORE) $(OBJ_GAME) $(OBJ_MOUSE)	\
				$(OBJ_WINDOW) $(OBJ_EVENT) $(OBJ_SCENE)	\
				$(OBJ_SPRITE) $(OBJ_GAMEOBJ)

RM			:=	rm -f

CC			:=	gcc
CLINKER		:=	ar rc
CFLAGS		:=	-I./../../include/ -Wall -Wextra

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
