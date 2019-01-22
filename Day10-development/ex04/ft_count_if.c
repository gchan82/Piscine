/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:37:53 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 11:45:27 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dev mode
// dev mode
// dev mode
// 
// Create a function ft_count_if which will return the number of elements of
// the array that return 1, passed to the function f.
//

int		ft_count_if(char **tab, int(*f)(char*))
{
	int		i;
	int		n;

	i = 0;
	while (tab[i] != '\0')
	{
		if(f(tab[i] == 1))
			// return (1);		//instead of return 1, lets count how many return 1's.
			n++;				// count n number of return 1s.
		i++;					// iterate through tab[i] array.
	}
	return (0);
}

// Note: good to compare this Day10-ex04 exercise to Day10-ex03 exercise.
