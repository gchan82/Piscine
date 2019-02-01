/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:50:57 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 19:17:51 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc==4)
	{
		if(argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));	
		else if(argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if(argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if(argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if(argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
