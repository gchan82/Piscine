/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-pgcd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:11:25 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 21:38:21 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// allowed functions: printf, atoi, malloc, free
//
// write a program that takes 2 strings representing 2 strictly positie integers that fit in an int.
//
// Display their highest common denominator followed by a newline(It's always a strictly positive integer).
//
// If the number of paramters is not 2, display an newline.
//
// Examples:
//
// ./pgcd 42 10
// 2
// 
// ./pgcd 42 12
// 6
//
// ./pgcd 14 77
// 7
// ./pgcd 17 3
// 1
// ./pgcd
//
//

#include <stdio.h> //printf
#include <stdlib.h> // atoi, malloc, free

int		pgcd(unsigned int nb, unsigned int nb2)
{
	int i;

	i = nb; // use i to find highest common denominator
	while(i > 0)
	{
		if(nb % i == 0 && nb2 % i == 0) // search for highest divisible number
			return (i);
		i--; // search for highest common denominator (from highest to lowest number)

	}
	return (1);
}

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("\n");
	return (0);
}

