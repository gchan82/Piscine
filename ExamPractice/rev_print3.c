/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:41:30 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 16:51:22 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int len;

	len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}

int main(int ac, char **av)
{
	int len;

	if(ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
		{
			write(1, &av[1][len], 1);
		}
	}
	ft_putchar('\n');
}
