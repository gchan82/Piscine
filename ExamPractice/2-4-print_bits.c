/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-4-print_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:43:01 by gachan            #+#    #+#             */
/*   Updated: 2019/01/23 12:08:07 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: write
//
// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.
//
// Your function must be declared as follows:
//
// void		print_bits(unsigned char octet);
//
// Example, if you pass 2 to print_bits, it will print "00000010"
//
// Input: base-10
// Output: binary

#include <unistd.h> // write

void		print_bits(unsigned char octet)
{
	//declarations
	int i;
	unsigned char bit;
	//assignments
	i = 0;
	//while loop - shift & print to screen each bit position (8 positions)
	while (i < 8)
	{
		bit = (octet >> (7-i) & 1) + '0'; // shift 1st bin 7 pos rt.
										// '0': from char to bin?
		write(1, &bit, 1);
		i++;
	}
}

#include <stdio.h> // printf
#include <stdlib.h> // malloc, atoi

int		main(int ac, char **argv)
{
	ac = 2;
	if(ac==2)
		print_bits(atoi(argv[1]));
	else
		printf("error\n");
	return 0;
}
