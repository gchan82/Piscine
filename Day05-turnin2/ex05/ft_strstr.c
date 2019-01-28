/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:27:48 by gachan            #+#    #+#             */
/*   Updated: 2019/01/14 19:18:50 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int substring;
	int match;

	index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index] != '\0')
	{
		substring = 0;
		if (to_find[substring] == str[index])
		{
			match = index;
			while (str[index] == to_find[substring])
			{
				if (to_find[substring + 1] == '\0')
					return (&str[match]);
				substring++;
				index++;
			}
			index = match;
		}
		index++;
	}
	return (0);
}
