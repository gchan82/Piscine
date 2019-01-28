/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:24:42 by gachan            #+#    #+#             */
/*   Updated: 2019/01/27 16:46:10 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

#include <unistd.h>
#include <stdlib.h>

int		eval_expr(char *expr);
int		summation(char **expr);
int		factor(char **expr);
int		number(char **expr);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **s);
#endif
