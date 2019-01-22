/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-ft_atoi2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:15:12 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 17:37:44 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a fxn that converts string arg str to intger & returns it.
//
// prototype:
// int		ft_atoi(const char *str);
//
int		ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;

	// if end of line, return 0.
	if (str == '\0')
			return (0);
	// while \f\r\n\t\v " " -> i++
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	// if '-' sign = -1
	if (str[i++] == '-')
		sign = -1;
	// while str bw 0 & 9 -> nbr * 10 + str - '0'
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	// return nbr * sign
	return (result * sign);
}

#include <stdio.h>

int		main(void)
{

	char str[] = " \n\v\f\r\t  -4328955";
	

	printf("%d\n", ft_atoi(str));
	return (0);
}
