# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshahein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 18:43:39 by mshahein          #+#    #+#              #
#    Updated: 2025/03/26 18:43:39 by mshahein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror

SRCDIR = source
OPSDIR = operations
OBJ_DIR = obj
OBJ_SRC_DIR = $(OBJ_DIR)/source
OBJ_OPS_DIR = $(OBJ_DIR)/operations

SRC =   $(SRCDIR)/finded.c \
		$(SRCDIR)/free.c \
		$(SRCDIR)/initiate.c \
		$(SRCDIR)/prepare_stack_a.c \
		$(SRCDIR)/prepare_stack_b.c \
		$(SRCDIR)/parsing.c \
		$(SRCDIR)/push_swap.c \
		$(OPSDIR)/push.c \
		$(OPSDIR)/reverse_rotate.c \
		$(OPSDIR)/rotate.c \
		$(OPSDIR)/turk_algo.c \
		$(OPSDIR)/turk_algo_utils.c \
		$(OPSDIR)/sort_three.c \
		$(OPSDIR)/swap.c

OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJ_SRC_DIR)/%.o,$(filter $(SRCDIR)/%, $(SRC))) \
			$(patsubst $(OPSDIR)/%.c,$(OBJ_OPS_DIR)/%.o,$(filter $(OPSDIR)/%, $(SRC)))


all: $(NAME)

$(NAME): $(OBJECTS) libft/libft.a
	@$(CC) $(CFLAGS) $(OBJECTS) libft/libft.a -o $(NAME)

libft/libft.a:
	@make -C libft --quiet

$(OBJ_SRC_DIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJ_SRC_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_OPS_DIR)/%.o: $(OPSDIR)/%.c
	@mkdir -p $(OBJ_OPS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C libft clean --quiet
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make -C libft fclean --quiet
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
