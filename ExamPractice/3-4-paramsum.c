/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-4-paramsum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:31:45 by gachan            #+#    #+#             */
/*   Updated: 2019/01/26 10:03:10 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// paramsum.c
// allowed functions: write
//
// Write a program that displays the number of arguments passed to it
// followed by a newline
//
// if there are no arguments, just display a 0 followed by a newline.
//
// Example:
//
// ./parasum 1 2 3 5 7 24
// 6
//
// ./paramsum 6 12 24
// 3
//
// ./paramsum
// 0
//

#include <unistd.h> //write

void ft_putnbr(int nbr)
{

	// declarations?
	char c;
	// assignments?
	//
	// if < 0 -> print neg -- NOT NEEDED! No Neg # of args.
	//
	// if bw 0-9 -> print to screen
	if (nbr >= 0 & nbr <= 9)
	{
		c = nbr + '0'; //pass nbr to c (int to char conversion)
		write(1, &c, 1); // write only takes char
	}
	// if >10+ -> break down number (nbr /10) && (nbr %10)
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10); // breakdown number (nbr/10) -> use recursion
		ft_putnbr(nbr % 10); // %10: remainder is 0-9 -> use recursion	
	}
}


int		main(int argc, char **argv)
{
	ft_putnbr(argc-1);
	write(1, "\n", 1);
	return (0);
}

