/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:25:59 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 14:05:27 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int len;
	int i;

	len = 0;
	i = 0;
	if(argc == 2)
	{
		//if(argv[1][i] != '\0') // use if, not while loop; don't need this at all!!!
		{
			// get len
			while(argv[1][len] != '\0')
			{
				len++;
			}
			i = len;
			i--;
			while((argv[1][i] == ' ' || argv[1][i] == '\t') && i>=0)
			{
				i--;
			}
			while((argv[1][i] != ' ' && argv[1][i] != '\t' && i >= 0))
			{
				i--;	
			}
			i++;
			while(argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i],1);
				i++;
			}
			//i++;
		
		}
	}

	write(1, "\n",1);
	return (0);
}
