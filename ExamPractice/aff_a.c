/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:28:53 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 20:59:00 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 *write a program that takes a string, and
 * displays the first 'a' character it encounters in it,
 * followed by a newline.
 * If there are no 'a' characters in the string,
 * the program just writes a newline
 * If the number of parameters is not 1, the <-- av[0] = ./a.out, av[1] = test1
 * program displays 'a' followed by a newline.
 *
 */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)	// count1 is name of program, count2 is 1st argument?
		write(1, "a", 1);
	else
	{
		while (*av[1] != '\0')
		{
			if(*av[1] == 'a')
			{
				write(1, "a",1);
				av[1]++;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
