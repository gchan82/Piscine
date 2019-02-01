/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:38:14 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 18:57:09 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = ('a'+'z' - argv[1][i]);
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = ('A' + 'Z' - argv[1][i]);
			write(1, &argv[1][i],1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
