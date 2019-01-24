/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-5-ft_strcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:50:29 by gachan            #+#    #+#             */
/*   Updated: 2019/01/23 11:22:43 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: none listed.
// strcmp.c
// refer to: Day05-ex06
//
// *** much more intuitive solution below. ***
//
// reproduce the behavior of the function strcmp (man strcmp)
//
// int		ft_strcmp(char *s1, char *s2); 
//
// Notes: Return 0 - means strings are the same
// Notes: Return negative# - means alphabetical (string1 < string2)
// Notes: Return positive# - means reverse-alpha (string1> string2)

int		ft_strcmp(char *s1, char *s2)
{
	//declarations
	int i;
	// assignments
	i = 0;
	// while s1 exists (once 1 string hits null, it will end comparison) & s1== s2, compare next indexed char
	while (s1[i] && s1[i] == s2[i]) // just need check 1 string to exist b/c if both null, will cause infinite loop.
	{
		i++;
	}
	//return s1-s2
	return (s1[i] - s2[i]);
}

// DELETE BELOW BEFORE SUBMISSION
//
#include <stdio.h> //printf

int		main(int argc, char **argv)
{
	argc = 3;
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}

