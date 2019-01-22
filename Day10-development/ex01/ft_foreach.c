/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:06:43 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 10:20:25 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dev mode
// dev mode
// dev mode
//
// Create the function ft_foreach which, for a given ints array, applies a function on all elements of the array. This function will be applied following the array's order.
//
// Example:
// ft_foreach(tab, 1337, &ft_ft_putnbr);

void		ft_foreach(int *tab, int length, void(*f)(int)) // tab is an int array -> passed to function *f, 
											// *f function returns void, and takes parameter of type int. 
{
	int		i;

	i = 0;
	while (i < length)
		f(tab[i++]); // applied function iterates through tab array
}
