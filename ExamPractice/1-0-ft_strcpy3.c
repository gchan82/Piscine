/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strcpy3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:28:44 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 20:34:18 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

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

int		main()
{
	char s1[] = "flavio";
	char s2[] = "gaucho";
	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return 0;
}
