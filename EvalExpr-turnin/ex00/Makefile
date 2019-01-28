# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:07:28 by gachan            #+#    #+#              #
#    Updated: 2019/01/27 13:24:59 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/eval_expr.c srcs/main.c
INCLUDES = includes/libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(INCLUDES)

fclean:
	rm -f $(NAME)

re: fclean all
