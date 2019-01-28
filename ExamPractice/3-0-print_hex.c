/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-print_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 22:06:08 by gachan            #+#    #+#             */
/*   Updated: 2019/01/25 13:05:05 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allowed functions: write
// Write a program that takes a positive(or zero) number expressed
// in base 10,
// and displays it in base 16 (lowercase letters) followed by 
// a newline.
// 
// If the number of paramters is not 1, the program displays
// a newlie.
//
// Examples:
//
// ./print_hex "10" (base-10)
// a (base-16)
//
// ./print_hex "255"
// ff
//
// ./print_hex "5156454"
// 4eae66
//
// ./print_hex
//
//

// 255 (base-10) = 2 * 10^2 + 5 * 10^1 + 5 * 10^0
// ff (base-16) = 15 * 16^1 + 15 * 16^0 = 240 + 15 = 255
// 					f = 15
//
// reference: see joaquim-oliveira-neto soln -->
// convert base-10 to base-16:
//  n % 16
//
//  number to hex value: (between 0-9) (ascii)
//   n % 16 + 48
//
//  number to hex letters (a-f) (to ascii to print): (between 10-15) (ascii)
//   n %16 + -10 + 97
//
//   number to hex value (between 16+) - breakdown # above 16.
//   n / 16 -- use recursion - 
//

#include <unistd.h> //write

// ft_putchar: print char to screen
void ft_putchar(char c)
{
	write(1, &c, 1);
}
// print_hex function
void	print_hex(unsigned int n)
{
	// cover nbrs >= 16, use recursion to put leftover back into print_hex function
	if (n >= 16)
		print_hex(n/16);
	// cover nbrs 0-9
	if (n % 16 <= 9)
		ft_putchar( n % 16 + 48); // 48 == ascii '0'
	// cover nbrs 10-15 (a,b,c,d,e,f)
	if (n % 16 >= 10 && n % 16 < 16)
		ft_putchar( n % 16 + -10 + 97); // -10: hex letters a-f (set to 0)
									// 97: ascii 'a'
	//
}
// ft_atoi function
int		ft_atoi(char *str)
{
	int i;
	int sign; // hold whether sign + or -
	int integer; // take/hold return result/integer

	i = 0;
	sign = +1;
	integer = 0;
	// if end of line, return 0. -- NOT needed for this program.
	if (!str[i])
		return (0);
	// remove \f\r\n\t\v " "
	i = 0; // re-initialize to 0, as safe-guard.
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	// sign *= -1. do nothing for '+'.
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			sign = -1;
	// move 0-9 digits to *10s position, add 0-9 to integer variable.
	while (str[i] >= '0' && str[i] <= '9'  && str[i])
		integer = integer * 10 + str[i++] - '0'; // iterate. add all digits to integer.
	// return sign*integer
	return (sign * integer);
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1])); // input base-10, output base-16
						// atoi: convert char to int -> result to hex fxn
						// print_hex: convert base-10 to base-16.
	}
	write(1, "\n", 1);
	return (0);
}
