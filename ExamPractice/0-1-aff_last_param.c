/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-1-aff_last_param.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:54:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 19:56:50 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	i = 0;
	if(argc >= 2)
	{
		while (argv[argc-1][i])
		{
			write(1, &argv[argc-1][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
