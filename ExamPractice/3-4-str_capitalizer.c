/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-4-str_capitalizer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 10:48:46 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 16:50:18 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write program that takes one+ strings and
// caplitalizes the first character of each word
// puts rest in lowercase, and displays result on standard output,
// followed by \n
//
// "word" is defined as part of string delimited either by spaces/tabs or
// by start/end of string. If word only has one letter, it must be capitalized.
//
// If there are no arguments, the progrma must display \n.
//
// ./str_capitalizer
//
// ./str_capitalizer "Premier PETIT TesT"
// Premier Petit Test
//
// ./str_capitalizer "DeuxiEmE tEST uN PEU moinS facile" "   attention C'EST pas dur QUAND mEmE" "ALLe

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if(argc >= 1)
	{
		if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			argv[i][j] -= 32;
		write(1, &argv[i][j], 1);
		j++;
		while(argv[i])
		{
			while(argv[i][j])
			{
				if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					argv[i][j] += 32;
				}
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z' && (argv[i][j-1] == ' ' || argv[i][j] == '\t'))
				{
					argv[i][j] -=32; 
				}
			write(1, &argv[i][j], 1);
			j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
