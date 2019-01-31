/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-repeat_alpha2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:44:38 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 11:56:21 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		main(int argc, char **argv)
{
	int res;
	int i;
	int j;

	i = 0;
	if(argc ==2)
	{
		while(argv[1][i])
		{
			res = 0;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				res = argv[1][i] -97+1;
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				res = argv[1][i] -65 + 1;
			}
			else
			{
				res = 1;
			}
			j = 0;
			while(j < res)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
