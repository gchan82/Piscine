/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:14:07 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 14:25:35 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// turn-in function only!!!

#include <unistd.h>

/* method 1:
void ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
*/

int		main()
{

	int c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	return (0);
}
