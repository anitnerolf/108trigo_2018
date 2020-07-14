##
## EPITECH PROJECT, 2019
## 107transfer
## File description:
## makefile
##

SRC	=	main.c				\
		usage.c				\
		check_first_argument.c		\
		init_struct.c			\
		this_is_number.c

OBJ	=	$(SRC:.c=.o)

NAME	=	108trigo

CFLAGS	=	-g -g3 -ggdb -I ./include -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
