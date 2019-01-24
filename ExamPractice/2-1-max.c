/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-1-max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:43:43 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 21:03:02 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// *** write a function ***
// max.c
//
// return largest number in array.
// return 0 if array is empty.

int		max(int* tab, unsigned int len) // prototype given
{
	unsigned int i;
	int largest;

	i = 0;
	largest = 0;

	if(!tab)
		return 0;

	while (i < len)
	{
		if (tab[i] > largest)
		{
			largest = tab[i];
		}
		i++; // remember to iterate through values!!!
	}
	return (largest);
}

// DELETE BELOW - ONLY TURNIN FUNCTION

#include <stdio.h>

int		main()
{
	int array[5] = { 2, 97, 7, 36, 1 };

	printf("%d", max(array, 5));
	return (0);
}
