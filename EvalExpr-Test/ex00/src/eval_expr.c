/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:19:37 by gachan            #+#    #+#             */
/*   Updated: 2019/01/27 20:12:49 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		number(char **expr)
{
	int	nbr;
	int	i;

	i = 0;
	while (expr[i] == ' ')
		i++;
	if (expr[i] == '(')
	{
		i++;
		nbr = summation(expr);
		if (expr[i] == ')')
			i++;
		return (nbr);
	}
	return (ft_atoi(expr[1]));
}

int		factor(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;
	int		i;

	i = 0;
	nbr = number(expr);
	while (expr[i])
	{
		while (expr[i] == ' ')
			i++;
		op = expr[i];
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		i++;
		nbr2 = number(expr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		summation(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;
	int		i;

	i = 0;
	nbr = factor(expr);
	while (expr[i])
	{	
		while (expr[i] == ' ')
			i++;
		op = expr[i];
		if (op != '+' && op != '-')
			return (nbr);
		i++;
		nbr2 = factor(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *expr)
{
	return (summation(&expr));
}
