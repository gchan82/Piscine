# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:07:28 by gachan            #+#    #+#              #
#    Updated: 2019/01/21 14:33:49 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = do-op.a

SRC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_calculate.c srcs/ft_sum.c srcs/ft_mul.c srcs/ft_div.c srcs/ft_mod.c srcs/ft_sub.c srcs/ft_atoi.c

OFILES = ft_putchar.o ft_putnbr.o ft_calculate.o ft_sum.o ft_mul.o ft_div.o ft_mod.o ft_sub.o ft_atoi.o

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
