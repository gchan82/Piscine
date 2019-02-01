/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-last_word2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:56:44 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 14:15:31 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int len;

		i = 0;
		len = 0;
		//str len
		while(argv[1][len] != '\0')
			len++;
		i = len;
		i--;
		while((argv[1][i] == ' ' || argv[1][i] == '\t') && i>=0)
			i--;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && i>=0)
			i--;
		i++;
		while(argv[1][i] != ' '  && argv[1][i] != '\0' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i],1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}
