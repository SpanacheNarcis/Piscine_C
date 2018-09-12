# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nspanach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 14:27:19 by nspanach          #+#    #+#              #
#    Updated: 2018/08/09 14:31:58 by nspanach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRCS = ft_display_file.c utils.c

all: $(NAME)

$(NAME):
	 gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	 rm -f $(NAME)

fclean: clean
	 rm -f $(NAME)

re: fclean all
