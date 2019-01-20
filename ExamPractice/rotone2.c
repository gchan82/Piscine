/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:49:37 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 16:15:05 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *s)
{
	while(*s != '\0')
	{
		if ((*s == z) || (*x == 'Z'))
		{
			ft_putchar(*s - 25); // print a or A
		}
		else if((*s < 'z' && *s >= 'a') || (*s < 'Z' && *s >= 'A')
		{
			ft_putchar(*s + 1); // if a, print b, if A, print B.
		}
		else
			ft_putchar(*s); // all others, just print to screen.
		s++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if(ac != 2)
		write(1, "\n", 1);
	else
	{
		rotone(av[1]);
	}
	return (0);
}
