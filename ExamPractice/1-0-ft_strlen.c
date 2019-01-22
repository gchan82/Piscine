/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:11:08 by gachan            #+#    #+#             */
/*   Updated: 2019/01/20 16:21:39 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that returns the length of a string.
//
// Your function must be declared as follows:
//
// int		ft_strlen(char *str);

//

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i); // return string length
}

// DO NOT SUBMIT ANYTHING BELOW.

int		main(void)
{
	char *str;

	str = "something";

	printf("%d\n", ft_strlen(str)); // ft_strlen returns an integer
	return (0);
}
