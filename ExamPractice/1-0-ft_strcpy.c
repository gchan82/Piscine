/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:22:09 by gachan            #+#    #+#             */
/*   Updated: 2019/01/20 17:16:25 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// note: getting bus error on ./a.out

// Reproduce the behavior of the function strcpy (man strcpy).
//
// Your function must be declared as follows:
//
// char		*ft_strcpy(char *s1, char *s2;
//
// note: check Day05 - ex03

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2) // basic string copy. No string length check.
{									// Pass from s2 to s1.
	int i;

	i = 0;
	while (s2[i] != '\0')			// note: checked this soln against Day5-ex03.
	{								// looks okay.
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';

	return (s1);
}

int main(void)
{
	char *str1;
	char *str2;
	char *result;

	str1 = "string1";
	str2 = "string2";

	printf("string1: %s\n", str1);
	printf("string2: %s\n", str2);
	result = ft_strcpy(str1, str2); // bus error?
	printf("result: %s\n", result);
	return 0;
}
