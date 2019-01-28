/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-hidenp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 14:52:26 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 20:53:46 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed function: write
//
// Write a program named hidenp that takes two strings
// and displays 1 followed by a newline 
// if the first string is hidden in the second one,
// otherwise displays 0 followed by a newline.
//
// Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's
// possible to find each character from s1 in s2, in the same order as
// they appear in s1. Also, the empty string is hidden in any string.
//
// If the number of paramters is not 2, th  program displays a newline.
//
// Examples:
// "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6"
// 1
// "abc" "2altrb53c.sse"
// 1
// "abc" "btarc"
// 0
//
//
//
//

#include <unistd.h> //write

void	hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[j]) // search string2 for character
	{
		if (s1[j] && s1[i] == s2[j])
			i++;
		j++;
	}
	if (!s1[i]) // if we get to end of string1, we have a match!!!
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		hidenp(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
