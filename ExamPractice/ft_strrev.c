/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:06:25 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 16:54:15 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// note: compare to rev_print.c (this one takes args and reverses string)
//

#include <unistd.h>
#include <stdio.h> // DELETE BEFORE TURNIN

char *ft_strrev(char *str)
{
	int len;
	int i;
	char temp;

	len = 0;
	//get len
	while(str[len])
	{
		len++;
	}

	i = 0;
	//print in reverse
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
		i++;
		len--;
	}
	printf("%s\n", str);
	return (str);
}

// DO NOT TURNIN BELOW

#include <stdio.h>

int		main(void)
{
	char str[] = "12345"; // this will work.
	// char *str = "12345"; // won't work bc this is declaration & assignment.
	//char *str; // won't work, but does work in the ft_strcmp.c
	//str = "12345";

	printf("%s", ft_strrev(str));
	return 0;
}
