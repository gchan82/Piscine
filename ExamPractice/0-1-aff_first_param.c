/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-1-aff_first_param.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:49:20 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 19:53:51 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 2)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}