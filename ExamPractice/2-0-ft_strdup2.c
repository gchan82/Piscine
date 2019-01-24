/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-ft_strdup2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:35:47 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 15:04:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// final answer: provide FUNCTION only!!!
// string duplicat
// allowed functions: malloc
// pass src string to dest string
//

#include <stdlib.h> //malloc
#include <unistd.h> // write
#include <stdio.h> //printf

char	*ft_strdup(char *src)
{
	//declarations
	char *dest;
	int length;
	int i;

	//assignments
	length = 0;
	i = 0;

	// get src length
	while (src[length])
	{
		length++;
	}

	// malloc for dest string (acts like an assignment/initializer for *dest!!!)
	dest = (char*)malloc(sizeof(char) * length);

	// pass src to dest
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	// return dest
	return (dest);
}

// DELETE BELOW - FOR TESTING ONLY

int		main()
{
	char *src;

	src = "something";
	printf("%s", ft_strdup(src));
	return (0);
}
