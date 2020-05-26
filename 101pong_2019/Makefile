##
## EPITECH PROJECT, 2019
## 101pong
## File description:
## makefile
##

NAME	=	101pong

SRC	=	src/101Pong.c	\
		src/my_strlen.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/

CFLAGS	=	-W -Wextra -Wall -g3

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) -lm

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
