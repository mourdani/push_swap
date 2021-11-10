NAME = push_swap
SRCS =			src/main.c\
					actions/push.c\
					actions/rotate_a.c\
					actions/rotate.c\
					actions/rotate_b.c\
					actions/swap.c\
					src/arrange_a_b.c     \
					src/get_big_small.c\
					src/get_h_first_sec.c\
					src/init.c\
					src/pushswap.c\
					src/quicksort.c\
					src/errors.c\
					src/util3.c\
					src/utils2.c\
					src/utils.c

INCLUDES = includes

OBJS = ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
