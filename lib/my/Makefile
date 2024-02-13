##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## task01
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)
	rm -f a.out
	rm -f *log
	rm -f *.a
	rm -f $(OBJ)
	rm -f $(wildcard *~)

re:	fclean all!
