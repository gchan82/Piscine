/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:15:31 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 15:24:30 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "a", 1);
	else // if not present, will go to segmentation fault!!! program gets stuck in while loop for ac = 1, as av[1] does not exist.
	{
		while (*av[1] != '\0')
		{
			if (*av[1] == 'a')
			{
				write(1, "a", 1);
				av[1]++;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
