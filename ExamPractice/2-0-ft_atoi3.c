/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-ft_atoi3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:22:06 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 14:29:03 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_atoi
// ** reference: Day5- ex02. ***
//turn-in function only
//allow functions: none
//
//  convert char string to integer
//  ex: input: "   \t\t   -428602"
//  output: -428602
//

int ft_atoi(const char *str)
{
	//declarations
	int negative;
	int result;

	// assignments
	negative = 0;
	result = 0;
	// skip \f\r\n\t\v ' ' '+')
	while (*str == ' ' || *str == '\f' || *str == '\r' || *str == '\n' 
			|| *str == '\t' || *str == '\v' || *str == '+')
		str++;
	// negative sign
	if(*str == '-')
	{
		negative = -1;
		str++;
	}
	
	// 10s to result, 0-9 to result
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		result = (result * 10) + (*str - '0'); // *str is pointing at left digit
											// we are passing to the result
											//  result * 10 moves old digit left.
		str++;
	}
	// return result*sign
	return (result * negative);
}

// DELETE BELOW - USE BELOW FOR TESTING

#include <unistd.h> // write
#include <stdio.h> // printf
#include <stdlib.h> // malloc

int		main(void)
{
	printf("%d", ft_atoi(" \f\r\n\t  +++-4285927"));
	return (0);
}
