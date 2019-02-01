/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 10:54:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 11:22:52 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int i;
	int len;
	char copy;

	len = 0;
	i = 0;
	//str len
	while(str[len])
		len++;
	while(i < len)
	{
		copy = str[i];
		str[i] = str[len-1];
		str[len-1] = copy;
		i++;
		len--;
	}
	return (str);
}

// DO NOT TURNIN BELOW

#include <stdio.h>

int		main(void)
{
	char *str;
	str[] = "12345";

	printf("%s", ft_strrev(str));
	return (0);
}
