/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:23:19 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 15:35:52 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check string for a
// print a to screen
//
// write fxn
//
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}

	if (argc ==2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return (0);
				
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
