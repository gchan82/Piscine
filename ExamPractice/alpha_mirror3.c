/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:39:19 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 22:02:47 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;
		int j;

		i = 1;
		while(i < argc)
		{

			j = 0;
			while(argv[i][j])
			{
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = 'a' + 'z' - argv[i][j];
				else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = 'A' + 'Z' - argv[i][j];
				write(1, &argv[i][j], 1);
				j++;
			}
			if(i < argc)
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
