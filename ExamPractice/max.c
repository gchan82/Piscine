/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:21:38 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 15:20:41 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;
	unsigned int i;

	max = 0;
	i = 0;
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

// DELETE BELOW BEFORE TURNIN
#include <stdio.h>

int		main()
{
	int tab[] = {3, 97, 2, 827, 9};
	printf("%d", max(tab, 3));
	return 0;
}
