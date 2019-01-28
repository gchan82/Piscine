/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-pgcd2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:40:40 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 21:50:12 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int pgcd(unsigned int nb, unsigned int nb2)
{
	int i;

	i = nb;
	while (i > 1)
	{
		if (nb %  i == 0 && nb2 % i == 0)
	   		return (i);	// find highest common denominator
		i--;
	}

	return 1; // no higher number divisible
}

int		main (int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("\n");
	return (0);
}
