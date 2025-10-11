# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshahein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 13:08:25 by mshahein          #+#    #+#              #
#    Updated: 2025/02/24 18:04:03 by mshahein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = \
check_files.c \
execute.c \
path.c \
main.c \
processes.c \
close_pipe.c \
error.c

# Aggiungere i file oggetto
OBJS = $(SRCS:.c=.o)

# Nome dell'eseguibile
NAME = pipex

# Target principale
all: $(NAME)

# Compilazione dell'eseguibile
$(NAME): libft/libft.a printf/ft_printf.a $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) libft/libft.a printf/libftprintf.a -o $(NAME)

# Regola per compilare i file .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Pulizia dei file oggetto
clean:
	rm -f $(OBJS)

# Pulizia totale (incluso l'eseguibile)
fclean: clean
	rm -f $(NAME)

# Ricostruzione completa
re: fclean all

# Regola per il libft
libft/libft.a:
	make -C libft

printf/ft_printf.a:
	make -C printf

.PHONY: all clean fclean re

