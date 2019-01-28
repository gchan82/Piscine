/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-ft_rrange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 07:55:28 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 13:27:27 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reference: day7-ex01 (but ft_rrange below is REVERSE)
//
// allowed functions: malloc
//
// Write the following function:
// int		*ft_rrange(int start, int end);
//
// It must allocate (with malloc()) an array of integers, fill it with
// consecutive values that begin at the end and end at start
// (including start & end!), then
// return a pointer to the first value of the array.
//
// Examples:
//
// - With (1,3) you will return an array containing 3,2 and 1
// - With (-1, 2) you will return an array containing 2,1,0, and -1
//  - With (0, 0) you will return an array containing 0.
//   - With (0, -3) you will return an array containing -3, -2, -1, and 0.
//

#include <stdlib.h> // malloc
#include <stdio.h> // printf -- remove before turnin

int		*ft_rrange(int start, int end)
{
	//declarations
	int length;
	int *array;
	int i;
	// assignments
	length = 0;
	i = 0;
	// allocate memory
	length = end - start + 1;
	array = (int*)malloc(length * sizeof(int));
	//printf("%d\n",array[0]);
	// pass integers into array
	i = 0;
	while (end >= start)
	{
		array[i] = end;
		//printf("%d\n",array[i]);

		i++;
		end--;
		//printf("i is %d\n",i);
		//printf("end is %d\n",end);
		}
	// test: log to screen - remove before turnin
	i = 0;	
	while (i < length)
			printf("%d\n", array[i++]);
	// return array of ints (all values bw end and start)
	return (array);
}

// DELETE BELOW BEFORE TURNIN

int		main(void)
{
	ft_rrange(1,3);
	return 0;
}
