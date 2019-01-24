/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-3-wdmatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:11:50 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 21:59:56 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: write
// wdmatch.c
//
// Write a program
// takes 2 strings
// display first string only if second string has characters in first string.
// respect order of characters in second string.
//
// strategy:
// take char from string1, search string2.
// take char2 from string1, continue search on string2.
//
// if number of args is not 2, program displays a \n. 
// Note: therefore - use if (argc == 3)

// Example:
// "faya" "fgvvfdxcacpolhyghbreda"
// output: faya
//
// Example2:
// "faya" "fgvvfdxcacpolhyghbred"
// output:
//
// Example3:
// "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq "
// output: quarante deux
//
// Example 4:
// "error" rrerrrfiiljdfxjyuifrrvcoojh
// output:

#include <unistd.h> // write
#include <stdio.h> // printf
#include <stdlib.h> // malloc

int main (int argc, char **argv)
{
	//declarations
	int i;
	int j;
	//assignments
	//
	i = 0;
	j = 0;
	//
	if(argc == 3)
	{
		while(*argv[1])
		{
			if(!(argv[1][i] == argv[2][j]))
			{
				if (!argv[2][j])
				{
					write(1, "\n", 1);
					return (0);
				}
				j++;
			}
			if(argv[1][i] == argv[2][j])
			{
				i++;
				j++;
			}
			if(argv[1][i] == '\0')
			{
				i = 0;
				while (argv[1][i] != '\0')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}


