/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:29:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/21 20:13:17 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes 2 strings and displays, without doubles, the
// characters that appear in both strings, in the order that they appear
// in the first one.
//
// The display will be followed by a \n.
//
// If the number of arguments is not 2, the program displays \n.
//
// Examples:
//
// "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
// output: pandinto
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
	while (str2[i]) {
		if (vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1; // vf stores '1' for char in string2
		i++;
	}

	i = 0;
	while (str1[i]) {
		if (vf[(int)str1[i]] == 1)
			vf[(int)str1[i]] = 2; // vf stores '2' for string1 also having same char.
		i++;
	}

	i = 0;

	while(str1[i])
	{
		if(vf[(int)str1[i]] == 2)
		{
			write(1, &str1[i], 1);
			vf[(int)str1[i]]--; // vf is decremented, so char is only printed once!!
		}
		++i;
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
