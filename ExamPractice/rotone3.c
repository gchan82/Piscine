/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:56:34 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 13:06:22 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] += 1;
			else if(argv[1][i] == 'Z')
				argv[1][i] = 'A';
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] += 1;
			else if(argv[1][i] == 'z')
				argv[1][i] = 'a';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
