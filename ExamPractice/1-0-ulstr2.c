/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ulstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:28:19 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 19:51:35 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	if (argc != 2)
		write(1, "\n", 1);

	i = 0;
	if (argc == 2) // pitfall: 'while' will not exit loop
	{
		while (argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z') // pitfall: 'if' will convert all letter to uppercase.
				argv[1][i] -= 32;
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1,"\n",1);
	return (0);
}
