/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:04:12 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 20:20:06 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		int buf[128];
		int i;
		int j;
		int k;

		i = 0;
		/*while(i < 128)
		{
			buf[i] = 0;
			i++;
		}*/
		i = 0;
		while(argv[1][i])
		{
			if(buf[(int)argv[1][i]] == 0)
				buf[(int)argv[1][i]]= 1;
			i++;
		}
		j = 0;
		while(argv[2][j])
		{
			if(buf[(int)argv[2][j]] == 1)
				buf[(int)argv[2][j]] = 2;
			j++;
		}
		k = 0;;
		while(argv[1][k])
		{
			if(buf[(int)argv[1][k]] == 2)
			{
				write(1, &argv[1][k],1);
				buf[(int)argv[1][k]] = 1;
			}
			k++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
