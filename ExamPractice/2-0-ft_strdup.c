/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-ft_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:07:54 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 18:26:56 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string duplicate
// see Day 7 - ex00
//
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	// declarations
	int length;
	char *dest;
	int i;
	// get string length
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	// allocate mem for destination string
	dest = (char*)malloc(length * sizeof(char));
	// pass each indexed char from src to dest
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	// return dest
	return (dest);
}

#include <stdio.h> // DELETE BEFORE SUBMISSION

int		main(void)
{
	char *src;

	src = "someething";

	printf("%s", ft_strdup(src));
	return (0);
}
