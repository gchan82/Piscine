/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 12:02:42 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 12:49:44 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* dev mode */
/* dev mode */
/* dev mode */
//
// Create a function ft_is_sort which returns 1 if the array is sorted and
// 0 if it isn't.
//
// The function given as argument should return a 
// *** negative integer if the first argument is lower than the second, // --> indicates proper numerical order & therefore sorted (return 1).
// 0 if they are equal
// or positive integer for anything else. // --> indicates NOT SORTED -> (return 0).
//
// 										// strategy: go thru all cases of NOT SORTED?
//
//

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)					// length-1, as you are comparing the index, i, & the next index i+1, so you don't want to compare past the end-of-line of string.
	{
		if (f(tab[i], tab[i + 1]) > 0)		// if >0, the NOT SORTED
			return (0)						// e.g. 2 > 1 (NOT SORTED ascending)
											//  (2-1) > 0  ==>  NOT SORTED.
		i++;
	}
	return (1);
}
