/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:05:03 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 15:22:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		if(s2[i] != s1[i])
			return (s1[i]-s2[i]);
		if(s2[i] == s1[i])
			i++;
	}
	return (0);
}


// test code below//
/*
int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}
*/
// test code above //

// DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>

int		main()
{
	char *s1 = "same";
	char *s2 = "same";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strcmp(s1, s2));
	
}
