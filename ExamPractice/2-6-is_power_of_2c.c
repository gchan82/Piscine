/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-6-is_power_of_2c.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:52:06 by gachan            #+#    #+#             */
/*   Updated: 2019/01/31 13:56:03 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if(n==0)
		return 0;
	while(n%2 == 0)
		n /= 2;
	return (n==1 ? 1: 0);
}


// DO NOT TURNIN BELOW
#include <stdio.h>

int		main()
{

	printf("%d", is_power_of_2(0));
	return 0;
}
