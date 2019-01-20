/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-1-rot_13.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:37:42 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 14:46:37 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// use [] notation - will be easier to read and debug!
//
//

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_13(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] <= 'm' && s[i] >= 'a') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			ft_putchar(s[i]+13);
			i++;
		}
		else if ((s[i] <= 'z' && s[i] > 'm') || (s[i] <= 'Z' && s[i] > 'M'))
		{
			ft_putchar(s[i]-13);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
		rot_13(argv[1]);
	return (0);
}
