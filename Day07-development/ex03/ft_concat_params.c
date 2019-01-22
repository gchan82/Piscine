/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:49:26 by gachan            #+#    #+#             */
/*   Updated: 2019/01/17 21:59:22 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Development modeyy */
/* example
 * Input: string1 string2 string3
 * Output (*str):	string1
 * 					string2
 * 					string3
 *
 *
 * */
/* Development modeyy */

#include <stdlib.h> // malloc

int ft_strlen(char *str)
{
	// get string length
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char *ft_strcat(char *dest, char *src)
{
	int length;
	int index;

	length = 0;
	// get length of destination string
	while (dest[length] > '\0')
		length++;
	index = 0;	
	// add string2 (src) to string1 (dest)
	while (src[index++] != '\0')
		dest[length + index] = src[index]; // add src to end of dest
	dest[length + index] = '\0'; // pass null to end of string
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	// declarations
	char *str;
	int count;
	int length;
	int i;

	count = 1;
	length = 1;
	// find length of each argument string
	while (count++ < argc)
		length += ft_strlen(argv[count]); // get length of each string array; pass to length.
	// edge-case: if no string, return NULL
	if (length == 0)
		return (NULL);	
	// malloc: allocate memory for new string
	str = (char*)malloc(sizeof(char) * length);
	i = 0;
	while (str[i++])
		str[i] = '\0';
	// strcat: concatenate argv to string
	i = 1;
	while (i++ < argc)
	{
		ft_strcat(str, argv[i]); // str destination string/output string; argv[1] = string 1, argv[2] = string2...
		if(i++ != argc - 1) // don't put new line on last line
			ft_strcat(str,"\n");
	}
	str[length] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	ft_concat_params(argc, argv);

	return (0);
	// same:
	// str = (char*)malloc(sizeof(*str) * (length));
	//str = (char*)malloc(sizeof(char) * length);
}
