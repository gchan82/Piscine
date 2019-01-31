/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:22:49 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 17:05:11 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc ==4)
	{
		if(argv[2][0]== '*')
		{
			res = atoi(argv[1]) * atoi(argv[3]);
			printf("%d", res);
		}
		else if(argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if(argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if(argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));

	}
	printf("\n");
	return (0);
}
