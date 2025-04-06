SRC = main.c parsing.c ft_split.c ft_linkedlist.c helpers1.c op_push_swap.c \
 op_rotate.c op_helpers.c easy_sorting.c chunks_sorting.c chunks_helper.c

OBJ = $(SRC:.c=.o)
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJj)

.PHONY: all clean fclean re