/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:31:10 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 12:43:51 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays a 'z' character on the standard output.
 *
 * This program (int main makes it a program)
 * simply prints "z" to screen. NO newline.
 *
 * reference: teddav - named 'aff_z.c'.
 * However, this appears to be only_z.c, which should have NO newline.
 *
 * Keys:
 * - use "z" (double quote)
 * - return (0) (int main)
 * - NO new line
 * */

#include <unistd.h>

int		main()
{
	write(1, "z", 1);
	// WRONG: write(1, "\n", 1); // wrong!!!
	return (0);
}
