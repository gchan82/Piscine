/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:29:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 19:49:00 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions: write
//
// Note: this has been re-purposed from Inter.c for Union.c

// Write a program that takes 2 strings and displays, without doubles, the
// characters that appears in either one of the strings.
// 
// The display will be in the order characters appear in the command line,
// and will be followed by a \n.
//
// *** NOTE: The solution is to print characters from String1 first,
// Then print characters from String2 (with no repeats). ***
//
// The display will be followed by a \n.
//
// If the number of arguments is not 2, the program displays \n.
//
// Examples for Union.c:
// zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj"
// output: zpadintoqefwjy
//
// Example2 for Union.c:
// ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd
// output: df6vewg4thras
//
// Example3 for Union.c:
// "rien" "cette phrase ne cache rien"
// output: rienct phas
//
// //
//
// This is Inter.c examples (NOT for this project, here for comparison):
// "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
// output: padinto
//
// "ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd
// output: df6ewg4
//
// "rien" "cette phrase ne cache rien"
// output: "rien"
//

#include <unistd.h>

void solve(char *str1, char *str2) {
	int vf[128]; // buffer - stores ascii values of characters
	int	i;

	i = 0;
	while (i < 128)
		vf[i++] = 0;

	i = 0;
	while (str2[i])
	{
		if (vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1; // vf stores '1' for char in string2
		i++;
	}

	i = 0;
	while (str1[i]) 
	{
		if (vf[(int)str1[i]] == 0) // 0 for Union.c, 1 for Inter.c (both str have char)
			vf[(int)str1[i]] = 1; // 1 for Union.c, 2 for Inter.c
								// Inter: vf stores '2' for string1 also having same char
		i++;
	}

	i = 0;

	while(str1[i]) // iterate thru to print string1 chars.
	{
		if(vf[(int)str1[i]] == 1) // change 2 to 1 for Union.c
		{
			write(1, &str1[i], 1);
			vf[(int)str1[i]]--; // vf is decremented, so char is only printed once!!
		}
		++i; // move through string chars
	}
	
	i = 0;

	while(str2[i]) 			// above while loop(9 lines), repeated for str2(for Union)
	{
		if(vf[(int)str2[i]] == 1) // change 2 to 1 for Union.c
		{
			write(1, &str2[i], 1);
			vf[(int)str2[i]]--; // vf is decremented, so char is only printed once!!
		}
		++i; // move through string chars
	}

//	str1[i++]
//	(int)str1[i]++ + '0'

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
