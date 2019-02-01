/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-6-is_power_of_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:37:06 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 13:20:23 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: none
//
// write a function that determines if a given number is a power of 2.
//
// function returns 1 if given number is power of 2
//
// other return 0.
//
// prototype:
// int		is_power_of_2(unsigned int n);
//

int		is_power_of_2(unsigned int n)
{
	// cover 0
	if (n == 0)
		return (0);
	// cover %2 == 0
	while (n % 2 == 0) // power of 2s break down to 2^0 if you /2 enough times
	// cover /= 2
		n /= 2;
	// return statement
	return ((n == 1) ? 1 : 0);
}


// 2^0 = 1, 2^1 = 2, 2^2 = 4, 2^3 = 8.
//
//
// DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>

int		main()
{
	printf("%d\n", is_power_of_2(1));
	return (0);
}
