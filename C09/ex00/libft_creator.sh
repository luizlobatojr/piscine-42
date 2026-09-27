NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_pufchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re: fclean all

.PHONY all clean fclean re
