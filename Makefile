##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC			=	src/create/create_clock.c \
				src/create/create_struct.c \
				src/create/create_window.c \
				src/create/create_view.c \
				src/create/create_shieva.c \
				src/create/create_tiles.c \
				src/destroy/destroy_clock.c \
				src/destroy/destroy_struct.c \
				src/destroy/destroy_window.c \
				src/destroy/destroy_view.c \
				src/destroy/destroy_shieva.c \
				src/destroy/destroy_tiles.c \
				src/draw/draw.c \
				src/draw/draw_map.c \
				src/draw/draw_shieva.c \
				src/events/handle_event.c \
				src/events/event_closed.c \
				src/events/event_resized.c \
				src/events/event_mouse_pressed.c \
				src/events/event_mouse_released.c \
				src/events/event_mouse_moved.c \
				src/events/event_key_pressed.c \
				src/game_loop.c \
				src/main.c

OBJ			=	$(SRC:.c=.o)

NAME		=	game

CFLAGS	 	=	-Wextra -Wall -Werror -W -Wstrict-prototypes -Wcast-function-type

CPPFLAGS	=	-I./include -g

SFML		=	-lcsfml-graphics -lcsfml-system -lcsfml-window

all:	    $(NAME)

$(NAME):	    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(SFML)

clean:
	rm -f $(OBJ)
	find -name *~ -delete
	find -name *.o -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

