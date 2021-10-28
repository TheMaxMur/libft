SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
NAME_SO = libft.so

.c.o:	
	${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}

all: so ${NAME}

${NAME}: ${OBJS}
	ar rcs -o ${NAME} ${OBJS}
so: ${OBJS}
	gcc -shared -o ${NAME_SO} $(OBJS)

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf ${NAME} ${NAME_SO}

re: fclean all
