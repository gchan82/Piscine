/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2-ft_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 11:46:35 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 12:25:05 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed function: write
//
// Write a function that displays a string on the standard output.
//
// The pointer passed to the function contains the address of the string's first character. 
//
// Your function must be declared as follows:
//
// void		ft_putstr(char *str);
//

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{

	ft_putstr(argv[1]);
	return (0);
}
