/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:19:42 by gachan            #+#    #+#             */
/*   Updated: 2019/01/17 11:28:37 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Development file */
/* ***************************************************************************
 *	Example:
 *	ft_range(7,9);															*
 *
 *	output: 7,8
 *	note: includes min, excludes max.
 *	note: provides range from min to max.
 *	note: use int array.
 * **************************************************************************/

/* Development file */
/* Development file */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	// declarations
	int *array;
	int length;
	int index;
	int index2;
	int integers;

	//if min greater than or equal to max, return 0.
	if (min >= max)
		return (0);

	//allocate memory
	length = (max - min);
	array = (int*)malloc(length * sizeof(int));

	// pass integers into array
	index = 0;
	integers = min; // min passed to integers; don't modify original min
	while (integers < max)
		array[index++] = integers++;
	
	// test: log to screen
	index2 = 0;
	while (index2 < (max - min))
		printf("%d\n", array[index2++]);

	// return array of ints (all values bw min and max)
	return (array);
}

int		main(void)
{
	ft_range(5, 9);

	return (0);
}
