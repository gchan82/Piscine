# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 15:18:50 by gachan            #+#    #+#              #
#    Updated: 2019/01/27 19:22:18 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = src/main.c src/ft_functs.c src/eval_expr.c src/ft_atoi.c src/ft_putnbr.c
INCLUDES = -I ./$(PATH)
OBJ  = main.o ft_functs.o eval_expr.o ft_atoi.o ft_putnbr.o
PATH = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) $(INCLUDES)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(PATH)ft_functs.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
