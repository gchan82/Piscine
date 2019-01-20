/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:46:49 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 12:58:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays the alphabet in reverse, with even letters in uppercase, and odd letters in lowercase, followed by a newline.
 *
 * allowed functions: write
 *
 * Example output:
 * zYxWuTsRqPoNmLkJiGfEdCbA
 *
 * note: 'A' = 65 (odd in ascii) and therefore uppercase.
 * note: *** followed by a newline ***
 * note: write (part of unistd.h)
 */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 123; //(note: z = 122, a = 97)
	while (i-- > 97)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32); // (i - 32) to Uppercase.
	ft_putchar('\n');
	return (0);
}
