/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-4-paramsum2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 10:05:12 by gachan            #+#    #+#             */
/*   Updated: 2019/01/26 10:20:56 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10); // breakdown numbers
	if (n <= 9)
		ft_putchar(n%10 + '0'); // print 0-9 in char type to screen.
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 1)
	{
		if (argv[i])
			ft_putnbr(argc-1);
	}
	write(1, "\n", 1);
	return 0;
}
