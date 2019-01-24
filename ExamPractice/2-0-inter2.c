/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-inter2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:06:31 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 15:53:29 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// inter
//
// allowed functions: write
//
// write a program
// takes 2 strings
// outputs characters in both strings
// output is in order of first string
// no duplicates
// *** newline at end of program
// make sure argc = 3!!! (if number of args is not 2, program displays \n)
//
// example:
// input: "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
// output: padinto
//

#include <unistd.h> // write - KEEP
#include <stdio.h> // printf - REMOVE BEFORE TURN-IN
#include <stdlib.h> // malloc, free - REMOVE BEFORE TURN-IN

void solve(char *str1, char *str2) //takes in 2 char strings
{
	//declarations
	int vf[128];
	int i;
					//create a buffer for ascii characters to count occurrences in string1 and string2.

	//assignments
	i = 0;
	//initialize buffer ascii values to 0.
	while (i < 128)		// while (vf[i] != '\0') - doesn't work.
						// maybe bc vf[i] maybe null already, but we want to re-assign these array elements to 0 to serve as counters for each letter of alphabet.
	{
		vf[i] = 0;		//set each array element to zero.
		i++;
	}
	// assign buffer value of 1 for each string2 char.e.g. vf[(int)str2[i]] = 1)
	i = 0;
	while (str2[i])
	{
		if (vf[(int)str2[i]] == 0)
		{
			vf[(int)str2[i]] = 1;
		}
		i++;
	}
	// assign buffer value of 2 for each string1 char that occurred in string2, e.g. vf[(int)str1[i]] = 2)
	i = 0;
	while (str1[i])
	{
		if(vf[(int)str1[i]] == 1)
		{
			vf[(int)str1[i]] = 2;
		}
		i++;
	}
	// write char to screen from string1 & decrement vf, e.g. vf[(int)str1[i]]--;
	i = 0;			// ***reinitialize i = 0 when reusing i.
	while (str1[i])
	{
		if(vf[(int)str1[i]] == 2)
		{
			write(1, &str1[i], 1);
			vf[(int)str1[i]]--;
		}
		i++;
	}
}


int		main(int argc, char **argv) //takes in argc & argv
{
	if (argc == 3)
	{
		solve(argv[1], argv[2]);			// pass argv (string1) & arv (string 2) to solve function.
	}
	write(1, "\n", 1);	// newline at end of program
	return (0);
}
