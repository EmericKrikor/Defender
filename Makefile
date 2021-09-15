##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

NAME	= my_defender

CC	= gcc

RM	= rm -f

SRCS	= ./defender_func/game/event.c \
	  ./defender_func/game/play.c \
	  ./defender_func/game/game_state.c \
	  ./defender_func/game/stateofmenu.c \
	  ./defender_func/game/loose_but.c \
	  ./defender_func/game/func.c \
	  ./defender_func/game/mob.c \
	  ./defender_func/game/setpos_game.c \
	  ./defender_func/game/settexturetosprite.c \
	  ./defender_func/game/define_text.c \
	  ./defender_func/game/window.c \
	  ./defender_func/game/menu_button.c \
	  ./defender_func/game/test_mouse.c \
	  ./defender_func/game/settexture2.c \
	  ./lib/my_strlen.c \
	  ./lib/write_error.c \
	  ./main/defender.c

OBJS	= $(SRCS:.c=.o)

CPPFLAGS = -I ./include/
CFLAGS += -Wall -Wextra -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -lm


all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(CFLAGS)
	 $(RM) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
