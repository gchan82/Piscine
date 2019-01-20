/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:59:26 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 14:11:09 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int		main(int ac, char **av)
{
	int i;

	i = 96;
	while (i++ < 122)
	{
		(i % 2) == 0 ? ft_putchar(i-32) : ft_putchar(i);
	}
	write(1, "\n", 1);
	return (0);
}
*/
int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
