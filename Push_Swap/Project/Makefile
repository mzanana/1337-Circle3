SRC = main.c parsing.c ft_split.c ft_linkedlist.c helpers1.c op_push_swap.c \
 op_rotate.c op_helpers.c easy_sorting.c chunks_sorting.c chunks_helper.c

SRCB = bonus/main_bonus.c bonus/op_push_swap_bonus.c bonus/parsing_bonus.c bonus/op_rotate_bonus.c \
bonus/op_helpers_bonus.c bonus/helpers1_bonus.c bonus/ft_split_bonus.c  \
bonus/ft_linkedlist_bonus.c bonus/getNL/get_next_line.c bonus/getNL/get_next_line_utils.c

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap
CHECKER = checker

all: $(NAME)

bonus: $(CHECKER)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(CHECKER): $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(CHECKER)

clean:
	rm -f $(OBJ) $(OBJB) 

fclean: clean
	rm -f $(NAME) $(CHECKER)

re: fclean all

.SECONDARY: $(OBJ) $(OBJB)

.PHONY: all clean fclean re bonus