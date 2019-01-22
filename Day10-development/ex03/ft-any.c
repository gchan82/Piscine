/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:30:40 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 11:37:17 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dev mode
// dev mode
// dev mode
//
//Create a function ft_any which will return 1, if, passed to the function f,
// at least one element of the array
// returns 1. Else, it should return 0.
//

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i] != '\0')	// while tab[i] is not end-of-array.
	{
		if (f(tab[i] == 1))	// if tab[i] passed to function == 1, return 1.
			return (1);
		i++;				// iterate through array.
	}
	return (0);				// return 0 if no elements of f(tab[i]) return 1.
}
