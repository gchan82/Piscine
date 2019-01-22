/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:21:54 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 11:29:43 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dev mode
// dev mode
// dev mode
//
// Create a function ft_map which, for a given ints array, applies a function
//  on all elements of the array (in order) and returns an array of all the return
//  values. This function will be applied following the array's order.
//

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*array;

	i = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

int		main()
{
	printf("%d", ft_map());
	return (0);
}
