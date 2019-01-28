/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 08:25:11 by gachan            #+#    #+#             */
/*   Updated: 2019/01/27 16:22:13 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_atoi(char **str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (**str == ' ' || **str == '\t' || **str == '\n' || **str == '\r'
			|| **str == '\f' || **str == '\v')
		(*str)++;
	if (**str == '+')
		(*str)++;
	else if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9' && **str != '\0')
	{
		result = result * 10 + **str - '0';
		(*str)++;
	}
	return (result * sign);
}
