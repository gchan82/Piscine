/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 08:03:03 by gachan            #+#    #+#             */
/*   Updated: 2019/01/20 20:30:02 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Dev mode */
/* Dev mode */
/* Dev mode */
/* Dev mode */

#include <stdio.h> // for printf - remove before turnin.

int		nmatch(char *s1, char *s2)
{
	if(*s1 == '\0' && *s2 == '\0')
		return(1);
	else if (*s1 == '\0' && *s2 == '*')
	{
		if(*(s2 + 1) == '\0')
			return (1);
		else if (*(s2 + 1) == '*')
			return (nmatch(s1, s2+2));
	}
	else if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}

int		main(int argc, char **argv)
{
	int result;

	result = nmatch(argv[1], argv[2]);
	printf("%d", result);
	return 0;
}
