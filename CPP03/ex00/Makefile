NAME			=	megaphone

SRCS			=	megaphone.cpp

OBJS			=	${SRCS:.c=.o}

CC				=	c++ -std=c++98

CFLAGS			=	-Wall -Werror -Wextra -g3

all				:	${NAME}

$(NAME): $(OBJS)
	${CC} $(OBJS) -o $(NAME)

clean			:
					rm -rf ${OBJS}

fclean			:	clean
					rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re