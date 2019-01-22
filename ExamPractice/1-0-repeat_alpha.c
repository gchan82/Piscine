/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-repeat_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 14:44:43 by gachan            #+#    #+#             */
/*   Updated: 2019/01/20 16:08:19 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program called repeat_alpha that takes a string
// and display it repeating each alphabetical character as many times
// as its alphabetical index,
// followed by a newline.
// 
// Example:
// Input: a
// Output: a
// Input: b
// Output: bb
// Input: c
// Ouput: ccc

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		repeat_alpha(int ac, char **argv)
{
	int i;
	int j;
	int count;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 2)
	{
		/*while(argc[1][i])
		{
			i = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 97 + 1;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 65 + 1;
			}
			j = 0;
			while (j <= count)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}*/
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = 0;
				while (j < (argv[1][i] - 'a' + 1))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = 0;
				while (j < (argv[1][i] - 'A' + 1))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else // case covers all other char like spaces, ?, ., etc.
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	write(1, "\n", 1);
	}
	return (0);
}

int		main(int ac, char **argv)
{
	repeat_alpha(ac, argv);
	return (0);
}
