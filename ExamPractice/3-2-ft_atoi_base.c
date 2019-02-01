/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-2-ft_atoi_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:59:37 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 20:54:57 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isvalid(char c, int base)
{
	char digits1[16] = "0123456789abcdef";
	char digits2[16] = "0123456789ABCDEF";

	int i;
	
	i = 0;
	while(i < base)
	{
		if( c == digits1[i] || c == digits2[i])
			return (1);
		i++;
	}
	return (0);
}

int		value_of(char c)
{
	if(c >= '0' && c <= '9')
		return (c - '0');
	else if(c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if(c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res;
	int i;
	int sign;

	sign = 1;
	res = 0;
	i = 0;
	// remove whitespace
	while (str[i] <= 32)
		i++;
	// atoi function: convert char to int (sign, result = 10 * base + digit - '0')
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	// convert base-16 to base-10 (isvalid)
	while(isvalid(str[i], str_base)) // validate base <= 16, 1 char at a time (per loop)
	{
		res = res * str_base + value_of(str[i]); // 2019
		i++;
	}
	
	// convert base-16 to base-10 (valueof)
	
	return (sign * res);
}

// DELETE STUFF BELOW
//
#include <unistd.h>
#include <stdio.h>
int		main()
{
	char str[128] = " -f9";
	printf("%d", ft_atoi_base(str, 16));
	return (0);
}
