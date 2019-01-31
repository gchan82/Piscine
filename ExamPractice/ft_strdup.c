/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:29:49 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 15:54:42 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int length;

	length = 0;
	while(src[length] != '\0')
		length++;

	dest = (char*)malloc(sizeof(*dest) * (length+1));
	i = 0;
	while(i < length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


//DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>
int		main(void)
{
	char *src = "something";

	printf("%s", ft_strdup(src));
	return 0;
}
