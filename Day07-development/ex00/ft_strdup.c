/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:03:27 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 18:14:05 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc
#include <stdio.h> // printf
#include <string.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		count;
	char	*ptr;

	length = 0;
	count = 0;
	while (src[length] != '\0')
		length++;
	ptr = (char*) malloc(length * sizeof(char));
	
	while (count < length)
	//while (src[++count] != '\0')
	{
		ptr[count] = src[count];
		count++;
	}
	printf("%s", ptr);
	return (ptr);
}

int		main()
{
	char *src;//char src[5] src[0] = 's'
	
	//src =(char*)malloc(sizeof(char) * 4);
	src = "somethin";	
	ft_strdup(src);
	
	return (0);
}
