NAME=WebServ
FLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=./srcs
OBJS=$(*.c=.o)

$(NAME): gcc $(FLAGS) $(SRCS) -o $(OBJS)

all:
	$(NAME)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: