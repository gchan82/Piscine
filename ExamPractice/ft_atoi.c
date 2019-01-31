/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:40:05 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 15:03:27 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int sign;
	int i;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while(str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}

	return (sign * res);
}

// DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>

int		main(void)
{
	char *str = "	 -42938";

	printf("%d", ft_atoi(str));
	return 0;
}
