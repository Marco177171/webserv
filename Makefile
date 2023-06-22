NAME=WebServ
SRCS=./srcs
LIBFT=./libft
FLAGS=-Wall -Wextra -Werror -std=c++98

$(NAME): gcc $(FLAGS) $(LIBFT) $(SRCS)

all:
	$(NAME)

clean: rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: