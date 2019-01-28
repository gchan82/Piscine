/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-1-expand_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:59:14 by gachan            #+#    #+#             */
/*   Updated: 2019/01/25 16:37:56 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// expand_str.c
//
// allowed function: write
//
// *** Reference: jraleman soln. (clean & simple)

// write a program that takes a string and displays it with exactly 3 spaces
// between each word,. no spaces or tabs either at the beginning or end.
// followed by a newline.
//
// A word is a section of string delimited either by spaces/tabs, or by
// start/end of string.
//
// If number of parameters is not 1, or if there are no words, simpliy display
// a newline.
//
// Examples:
// ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" // output: 3 spaces bw words.
// vous   voyez   c'est   facie   d'afficher   la   meme   chose
//
// ./expand_str  " seulement      la c'est     plus dur " // remove spaces at beginning of string!!!
// seulement   la   c'est   plus   dur
// 
// ./expand_str "comm c'est cocasse" "vous avez entendu, Mathilde ?" // *** 2 strings -> newline ***
//
// ./expand_str ""
//

#include <unistd.h> //write

int		main(int argc, char **argv)
{
	int flg;
	int i;

	flg = 0; // flag spaces/tabs -> print 3 spaces.
	i = 0; // track index location within string.
	if(argc == 2)
	{
		// remove spaces & tabs @ beginning of string
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		// while inside the argv[1] string:
		while (argv[1][i] != '\0')
		{
			// if you see  spaces/tabs (inside string), turn-on flag (flg = 1) (to be used for putting 3 spaces).
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				flg = 1;
				i++;
			}
			// if not space/tab, print 3 spaces to screen.
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			{
				if (flg == 1)
				{
					write(1, "   ", 3);
				}
				// turn off flg (flg = 0)
				flg = 0;
			// write normal letters to the screen.
				write(1, &argv[1][i], 1);
				i++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
