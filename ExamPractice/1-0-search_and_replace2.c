/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-search_and_replace2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 21:03:18 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 21:26:31 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if(argc ==4)
	{
		if(argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			write(1, "\n", 1);
			return 0;
		}
		i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
				write(1, &argv[1][i],1);
			}
			else
				write(1, &argv[1][i],1);
			i++;
		}

	}
	write(1, "\n", 1);
	return 0;
}
