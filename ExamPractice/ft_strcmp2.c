/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:48:46 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 21:27:24 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		if(s2[i] != s1[i])
		{
			return (s1[i]-s2[i]);
		}
		while(s1[i] == s2[i] && s1[i]) // while loop: add s1[i]
		{
			i++;
		}
	}
	return (0);
}

//DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>


int		main()
{
	char s1[] = "something";
	char s2[] = "something";

	printf("%d", ft_strcmp(s1,s2));
}
