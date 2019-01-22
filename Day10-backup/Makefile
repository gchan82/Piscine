# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:07:28 by gachan            #+#    #+#              #
#    Updated: 2019/01/21 11:49:30 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
							// library / archive file.

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
							// source files

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
							// output files

INCLUDES = includes
							// check includes folder - header file = listing functions (to be included)

all: Makefile 				// makefile or Makefile (not case sensitive)
							// run makefile before run command 'all'

Makefile:
	gcc -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
							// ranlib $(NAME)

clean:						// cleanup - remove OUT files
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)
							// fclean: rm -f libft.a file

re: fclean all
							// re: run fclean all before re: cleanup.
