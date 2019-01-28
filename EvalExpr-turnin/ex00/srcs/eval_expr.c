/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:58:20 by gachan            #+#    #+#             */
/*   Updated: 2019/01/27 14:29:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h> // REMOVE BEFORE TURNIN

int		number(char *expr)
{
	int nbr1;

	while (*expr == ' ')
	{
		printf("%s", expr);
		expr += 1;
	}
	if (*expr == '(')
	{
		printf("%s", expr);
		expr += 1;
		printf("%s", expr);
		nbr1 = eval_expr(expr);
		if (*expr == ')')
			expr += 1;
		return (nbr1);
	}
	return (ft_atoi(expr));
}

int		factors(char *expr)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = number(expr);
	while (*expr)
	{
		printf("%s", expr);
		while (*expr == ' ')
			expr += 1;
		printf("%s", expr);
		op = *expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr1);
		printf("%s", expr);
		expr += 1;
		nbr2 = number(expr);
		if (op == '/')
			nbr1 /= nbr2;
		else if (op == '*')
			nbr1 *= nbr2;
		else
			nbr1 %= nbr2;
	}
	printf("%s", expr);
	return (nbr1);
}

int		eval_expr(char *expr)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = factors(expr);
	while (*expr)
	{
		printf("%s", expr);
		while (*expr == ' ')
		{
			printf("%s", expr);
			expr += 1;
		}
		printf("%s", expr);
		op = *expr;
		if (op != '+' && op != '-')
			return (nbr1);
		printf("%s", expr);
		expr += 1;
		nbr2 = factors(expr);
		if (op == '+')
			nbr1 += nbr2;
		else
			nbr1 -= nbr2;
	}
	printf("%s", expr);
	return (nbr1);
}
