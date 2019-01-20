/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ulstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:29:13 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 19:24:33 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ulstr.c
// write function allowed
//
// Write a program that takes a string and reverses the case of all its letters.
// Other characters remain unchanged.
//
// You must display the result followed by a '\n'
//
// If the number of arguments is not 1, the program displays '\n'.
//
// Input: 
// A -> a	a -> A
// B -> b	b -> B

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if(argc != 2)
		write(1, "\n",1);

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
