/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 03:58:57 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 13:18:59 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dev mode
// dev mode
// dev mode
//
// modify below functions to what is within exercise requirements.

#ifndef HEADERS_H

# define HEADERS_H

#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_calculate(int n1, char op, int n2);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

#endif
