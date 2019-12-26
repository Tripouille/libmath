NAME				= libmath.a
INCLUDE				= libmath.h
SRCS				= $(addprefix srcs/, factorial.c fibonacci.c is_prime.c next_prime.c power.c gcf.c lcm.c)
OBJS				= ${SRCS:.c=.o}

CFLAGS				= -Wall -Wextra -Werror -I .

.c.o:
					gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all:				${NAME}
$(OBJS):			${INCLUDE}
${NAME}:			${OBJS}
					ar -rcs ${NAME} ${OBJS}

clean:
					rm -rf ${OBJS}
fclean:				clean
					rm -rf ${NAME}
re:					fclean all

.PHONY:				all clean fclean re
