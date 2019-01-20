/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:53:46 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 16:56:26 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	if(ac == 2)
	{
		while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
		{
			ft_putchar(av[1][i]);
			i++
		}
		ft_putchar('\n');
	}
	return 0;
}