/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2-first_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 12:27:15 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 12:41:36 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed function: write
//
// Write program that takes string and displays first word, followed by newline.
//
// A word is a section of string delimited by spaces/tabs or by the start/end
// of the string.
//
// If the number of parameters is not 1, or if there are no words, simply
// a newline.
//
// Example:
// Input: "FOR PONY"
// Output: FOR
// Input: "this ... is sparta, then again, maybe not"
// Output: this
// Input: "   "
// Output:
// Input: "   lorem,ipsum "
// Output: lorem,ipsum

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		int i;

		//print char of string to screen
		i = 0;
		while (*argv[1] != ' ' && *argv[1] != '\0')
		{
			ft_putchar(*argv[1]);
			argv[1]++;
		}
	}
	return (0);
}
