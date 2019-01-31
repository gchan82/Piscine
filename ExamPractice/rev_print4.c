/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:13:14 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 12:33:27 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>

int		main(int argc, char **argv)
{
	int count;
	int i;

	count = 0;
	i = 0;

	if(argc == 2)
	{
		while(argv[1][count] != '\0')
		{
			count++;
		}
		i = 0;
		while (i < count)
		{
			write(1, &argv[1][count-1], 1);
			count--;
		}
	}
	write(1, "\n",1);
	return (0);
}
