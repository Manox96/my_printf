
CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putdrs.c ft_putunsigned.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs  $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
