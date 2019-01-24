/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-1-alpha_mirror.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:21:22 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 20:41:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// alpha mirror
// z -> a
// y -> b
//
// Z -> A
// Y -> B
//
// A -> Z
// B -> Y
//

#include <stdio.h> // printf
#include <unistd.h> // write
#include <stdlib.h> //malloc

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	// declarations
	const char		tab[] = "zyxwvutsrqponmlkjihgfedcba"; // reverse index(a-mirror)
	char			*str = argv[1];
	int				i;

	// assignments
	i = 0;

	// argc == 2 condition
	if (argc == 2)
	{
	// while str exists
		while (str[i])
		{
	// a-z conversion
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = tab[str[i] - 'a'];
	// A-Z conversion
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = tab[str[i] - 'A'] - 32;
	// print chars above & all other normal chars like spaces
	// 		ft_putchar(str[i]);
	// 		i++;
			write(1, &str[i], 1);
			i++;
		}
	}
	// print newline
	// ft_putchar('\n');
	write(1, "\n", 1);
	return (0);
}

