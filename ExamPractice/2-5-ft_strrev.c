/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-5-ft_strrev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:11:23 by gachan            #+#    #+#             */
/*   Updated: 2019/01/23 19:31:33 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_strrev.c
//
//Write a function that reverses (in-place) a string.
//
//	*** NOTE: CANNOT use a new string. Must copy char to pass from end to start. ***
//
//It must return its parameter.
//
//Your function must be declared as follows:
//
//char		*ft_strrev(char *str);
//

char		*ft_strrev(char *str)
{
	// declarations
	int end;
	char copy;
	int start;
	// assignments
	end = 0;
	copy = 0;
	start = 0;
	// get string length
	while (str[end]) // do NOT use while (*str), then str++. It will move your index on top of the end++ indexing.
	{
		end++;
	}
	// iterate from back of length to front
	end--;
	while (end > start)
	{
		copy = str[end];
		str[end] = str[start];
		str[start] = copy;
		end--;
		start++;
	}

	// return string in reverse
	return (str);
}

// DELETE BELOW - TURNIN FUNCTION ONLY

#include <stdio.h>

int		main(void)
{
	//argc = 2;
	char str[5] = "abcd";
	printf("%s\n", ft_strrev(str));
	return 0;
}

