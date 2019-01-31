/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strcpy2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:12:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 20:28:04 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];

		return (s1);
}
// DO NOT SUBMIT BELOW

# include <stdio.h>

int		main(void)
{
	char s1[] = "flavio";
	char s2[] = "gaucho";

	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return 0;
}
