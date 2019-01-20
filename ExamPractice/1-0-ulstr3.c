/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ulstr3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:48:46 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 21:04:47 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if(argc !=2)
		write(1, "\n",1);

	i = 0;
	if(argc ==2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32; // take the indexed character & move it!!!
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			write(1, &argv[1][i], 1); // write takes address of argv[1][i], which is &argv[1][i]. Or, argv[1].
			i++;//argv[1]++; // move address to next indexed character.
		}
		write(1, "\n",1); // this can be above return or here. Doesn't matter.
	}
	return (0);
}
