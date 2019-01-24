/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-last_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:15:54 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 17:36:04 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: write
//
// Write a program that takes a string and displays its last word
// followed by a \n.
//
// A word is a section of string delimited by spaces/tabs or 
// by the start/end of the string.
//
// If the number of parameters is not 1, or there are no words,
// display a newline.
//
// Example
//
// "FOR PONY"
// output: "PONY"
//
// Input: ./last_word "this		... 		is sparta, then again, maybe	not"
// Output: "not"
//
// Input: "     "
// Output: 
//
// Input: "a" "b"
// Output: 
//
// Input: "  Lorem,ipsum  "
// Output: lorem,ipsum
//
//

#include <unistd.h> // write
#include <stdio.h> // printf
#include <stdlib.h> // malloc

int		last_word(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **argv) // turnin -- "write a program"
{
	//declarations
	int		i;

	i = 0;
	if(ac == 2)
	{
		// get string length
		while (argv[1][i] != '\0')
			i++;

		i--;			// decrement i so, it points left of end-terminating null.
		// run last_word function
		while (last_word(argv[1][i]))	// while there's a space/\t, index--.
			i--;
		while (argv[1][i] && !last_word(argv[1][i]))	//while on a word, index--.
			i--;
		i++;		// track forward 1, as index pointing at a space.
		while (argv[1][i] && !last_word(argv[1][i]))	//while on last word, index++.
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
