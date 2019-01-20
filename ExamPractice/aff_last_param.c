/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:31:44 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 13:40:51 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes strings as arguments, and displays its last
 * argument followed by a newline.
 *
 * if the number of arguments is less than 1, the program displays a newline.
 *
 * key takeaway:
 * - display last argument
 * - new line.
 */

#include <unistd.h>

int		main(int ac, char **av) // main program, takes in 2 args: argc, **argv (points to array)
{
	if (ac >1)
		while (*av[ac-1]) // while pointer to array exists *av[ac-1], ***ac-1 is the last arg***
			write(1, av[ac-1]++, 1); // ***iterate through each char of last arg***
	write(1, "\n", 1);
	return (0);
}
