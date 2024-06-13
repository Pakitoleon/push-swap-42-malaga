NAME = push_swap.a 

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
					ft_structure \
					operation_push \
					operation_rerotate \
					operations_rotate \
					operations_swap \
					process \
					push_swap \
					sort_position \
					stack_size.c \
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

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus
