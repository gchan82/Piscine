/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-1-maff_revalpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:39:56 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 19:05:08 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// goal: output: zYxWvUtSrQpOnMlKjIhGfEdCbA
//

//allowed function: write
// program
//

#include <unistd.h> //write

/*
int		main(void)
{
	write(1, "zYxW....fEdCbA\n", 27); 
	return (0);
}
*/

//z = 122
//
// -32 to get to Uppercase

void ft_putchar(char c)
{
	write(1, &c,1);
}


int		main(void)
{
	// declarations
	char	letter;
	// assignments
	letter = 'z';
	while (letter >= 'a')
	{
	// ternary operator 
//ternary operator %2 == 0, true-> lowercase, false -> upperase
	((letter % 2) == 0) ? (write(1, &letter,1)) : ft_putchar(letter-32);
	letter--;
	}
	ft_putchar('\n');
	return (0);
}

