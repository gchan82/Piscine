# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:07:28 by gachan            #+#    #+#              #
#    Updated: 2019/01/21 12:00:26 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes

all: makefile

makefile:
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
	ar rc $(LIB) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(LIB)

re: fclean all
