/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:12:21 by gachan            #+#    #+#             */
/*   Updated: 2019/01/30 18:49:39 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return	((octet >> 4) | (octet << 4));
}

//DELETE BEFORE TURNIN
//
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int		main()
{

	char c;
	c = 't';
	write(1, &c,1);
	c = swap_bits(c);
	write(1, &c,1);
	return 0;
}
