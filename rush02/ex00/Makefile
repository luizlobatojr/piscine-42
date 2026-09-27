
NAME = rush-02

SRC = rush-02.c ft_utils.c

OBJS = ${NAME}

CC		= cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

$(NAME):
		${CC} ${CFLAGS} ${SRC} -o ${NAME}

all:	${NAME}

fclean:
	${RM} ${NAME}

clean: fclean

.PHONY: all clean fclean
