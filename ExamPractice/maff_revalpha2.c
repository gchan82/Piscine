/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:58:52 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 13:29:22 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// make program:
// prints z to a.
// *** Position 1 (odd) is lower case ***
// *** Position 2 (even) is upper case ***
// *** Upper and lowercase interchanges. ***
// wrong interpretation: even letter uppercase
// wrong interpretation: odd letters lowercase
// newline
// a = 97 (odd) => stay lowercase, but i-- makes it even#, so even number -> DON'T CHANGE!!!
// expected output: zYxWvUtSrQpOnMlKjIhGfEdCbA\n
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int		main()
{
	int i;
	
	i = 123; // z = 122 is even & LOWERCASE!!!
	while (i-- > 97) // a = 97 
	   ((i % 2) == 0 ? ft_putchar(i) : ft_putchar(i - 32)); // (i-32): to Uppercase
	ft_putchar('\n'); //newline
	return (0);
}
*/
int		main()
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}
