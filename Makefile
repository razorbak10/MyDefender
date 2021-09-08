NAME	= my_defender

CC	= gcc -g3

RM	= rm -f

SRCS	= 	./menu.c \
			./defender.c	\
			./nb_tochar.c


OBJS	= $(SRCS:.c=.o)

CFLAGS = -I
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -l csfml-graphics -l csfml-audio -l csfml-window -l csfml-network -l csfml-system -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
