NAME = push_swap

CC = $(shell which cc clang gcc | head -n 1)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	stack_funcions \
					ft_atol \
					ft_find \
					ft_free \
					ft_print_error \
					ft_split_utils \
					ft_split \
					ft_steps_calculator \
					ft_stack_size \
					operation_push \
					operation_rerotate \
					operations_rotate \
					operations_swap \
					process \
					push_swap \
					sort_position \
					stack_funcions \
					stack_sorting \
					utils_for_sort \

FILES_BONUS =

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS = $(addprefix $(SRCS_DIR), $(addsuffix _bonus.c, $(FILES_BONUS)))

OBJS_DIR = ./

OBJ = $(SRCS:%.c=%.o)
OBJ_BONUS = $(SRCS_BONUS:%.c=%.o)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

bonus: $(OBJ_BONUS)
	$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME)_bonus

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME)_bonus

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus re bonus
