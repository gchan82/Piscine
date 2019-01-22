/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 10:01:58 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 10:09:10 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* development mode
 * file structure:
 * directory: ex00
 * turnin: multiple .c files
 *
 * allowed functions: write, malloc, free
 *
 * create a program that resolves a sudoku.
 * a valid sudoku has only 1 solution.
 * 
 * launch program:
 * ./rush-1 line0 line1 line2 line3 line4 line5 line6e line7 line8
 *
 * 
 *
 */

#include <unistd.h> // write
#include <stdlib.h> // malloc, free

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{

	return (0);
}
