/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:50:13 by gachan            #+#    #+#             */
/*   Updated: 2019/01/20 21:51:35 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note: see:
// 			*** Day5 - ex02 ***
// 			or Day3 - ex08.
// Note Day5 has 24 exercises.
//
// Write a function that converts the string argument str to an integer (type int)
// and returns it.
//
// It works much like the standard atoi(const char *str) function, see the man.
//
// Your function must be declared as follows:
//
// int		ft_atoi(const char *str);

#include <stdio.h>

int		ft_atoi(const char *str) // convert char 'a' to integer.
{
	int		i;
	int		integer;
	int		sign;

	integer = 0;
	sign = 1;
	// if you're at end-of-line, return 0.
	if (str == '\0')
		return (0);
	// while you have \f\r\n\t\v or " "(space) -> continue moving to next index.
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\t')
		i++;
	// if you have negative sign, hold it in an integer.
	if (str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	// while current index value between 0-9, we want to pass this into the right digit of integer. So, we take integer, and move value to left (e.g. 1 -> 10), so that you can pass next str value in, let's say '9', so that result is 19.
	
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		integer = (integer * 10) + (str[i++] - '0');

	return (sign * integer);
}

int		main(void)		//remove before final turn-in.
{
	int result;
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth"; // -5234
	
	result = ft_atoi(a);
	printf("%d", result);
	return 0;
}
