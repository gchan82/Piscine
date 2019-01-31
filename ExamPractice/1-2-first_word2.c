/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2-first_word2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:28:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 23:09:33 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				i++;
			}
			while (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			if(argv[1][i] == ' ')
			{
				write(1, "\n", 1);
				return 0;
			}
			if(argv[1][i] == '\0')
				return 0;
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
