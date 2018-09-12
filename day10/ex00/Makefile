# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nspanach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 17:56:10 by nspanach          #+#    #+#              #
#    Updated: 2018/08/07 18:22:38 by nspanach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER_DIR = includes

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	 $(CC) $(CFLAGS) $(SRC) -I$(HEADER_DIR)
	  ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	  ranlib $(NAME)

clean:
	 /bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	 /bin/rm -f $(NAME)

re: fclean all
