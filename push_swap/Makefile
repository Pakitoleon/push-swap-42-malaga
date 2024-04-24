NAME = push_swap.a 

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =

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
