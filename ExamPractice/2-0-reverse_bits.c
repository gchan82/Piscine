/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-reverse_bits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 18:22:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 18:31:57 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reverse bits
//
// input:
// 0010 0110
// output:
// 0110 0100
//
// prototype:
// unsigned char	reverse_bits(unsigned char octet);
//

/*
unsigned char		reverse_bits(unsigned char octet)
{
	return	(((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}
*/


