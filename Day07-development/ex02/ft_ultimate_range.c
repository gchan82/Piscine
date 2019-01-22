/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:06:46 by gachan            #+#    #+#             */
/*   Updated: 2019/01/17 20:05:37 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// example: input: 
// input: ft_ultimate_range(&ptr, 3, 9)
// output: 6
// note: output is the range

#include <stdlib.h> // for malloc; keep this library for turn-in
#include <stdio.h> // for printf
#include <unistd.h> // for putchar, not needed.

int		ft_ultimate_range(int **range, int min, int max)
{

	// Declarations
	int i;
	int j;
	int passMin;

	// allocates memory
	*range = (int*)malloc((max-min) * sizeof(int));
	// if min greater than or equal to max, return 0.
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}

	// pass integers into array
	i = 0;
	passMin = min;
	while(i++ < (max - min))
	{
		(*range)[i] = passMin++;
	}
	// test: log to screen
	j = 0;
	while (j++ < (max - min))
		printf("%d\n", (*range)[j]);

	// return array of ints (all values bw min and max)
	return (max-min);
}

int		main()
{
	int *ptr;

	printf("%d\n", ft_ultimate_range(&ptr, 3, 9));

	return (0);
}
