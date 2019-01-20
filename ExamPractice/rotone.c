/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:26:55 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 15:43:33 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while(*s)
	{
		if((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
				ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z') // if 'Z' output 'A', if 'z' output 'a'.
			ft_putchar(*s - 25);
		else
			ft_putchar(*s); // all other cases besides A-Z or a-z, print to screen unaffected.
		s++; // look at next char in string
	}
}

int		main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
