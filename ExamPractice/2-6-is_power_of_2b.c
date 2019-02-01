/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-6-is_power_of_2b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:26:43 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 13:51:40 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{

	if(n == 0)
		return 0;
	while(n %2 == 0)
		n /= 2;
	return (n==1 ? 1: 0);
}

//DELETE BELOW BEFORE TURNIN
//
#include <stdio.h>
int		main(void)
{
	printf("%d", is_power_of_2(-1));
	return 0;
}
