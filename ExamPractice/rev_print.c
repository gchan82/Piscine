/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:11:43 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 16:37:11 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// 
//
// not working, goto next file.
//
//
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//count length of string
int count(char *s)
{
	int i;
	
	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

void rev_print(int length, char **s)
{
	int i;

	while (*s != '\0')
	{
		i = length - 1;
		while (i  >= 0)
		{
			ft_putchar(s[1][i]);
			i--;
		}
	}
}

int		main(int ac, char **av)
{
	int length;

	if(ac != 2)
		write(1, "\n", 1);
	else
	{
		length = count(av[1]);
		rev_print(length, *av[1]);
	}
	return (0);
}
