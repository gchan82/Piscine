/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 05:51:49 by gachan            #+#    #+#             */
/*   Updated: 2019/01/10 20:19:07 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	char d[3];

	d[0] = '0';
	while (d[0] <= '9')
	{
		d[1] = d[0] + 1;
		while (d[1] <= '9')
		{
			d[2] = d[1] + 1;
			while (d[2] <= '9')
			{
				ft_putchar(d[0]);
				ft_putchar(d[1]);
				ft_putchar(d[2]);
				if (!(d[0] == '7' && d[1] == '8' && d[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				d[2]++;
			}
			d[1]++;
		}
		d[0]++;
	}
}
