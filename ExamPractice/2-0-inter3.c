/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0-inter3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:19:30 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 16:57:43 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes 2 strings
//
// example:
// padinton :w
// paqefwtdjetyiytjneytjoeyjnejeyj
// output: padinto
//
// ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd
// df6ewg4
//
// "rien" "cette phrase ne cache rien"
// rien
//
//

// letter in both strings are output
//
ZZ
#include <unistd.h> //write

int		main(int argc, char **argv)
{


//declarations
int vf[128]; // buffer
int i;
int j;
char *str1 = argv[1];
char *str2 = argv[2];

i = 0;
j = 0;
while (i <= 128)
{
	vf[i] = 0;
	i++;
}
if (argc != 3)
{
	write(1, "\n", 1);
	return (0);
}
if (argc == 3)
{
	i = 0;
	while (str2[i])
	{
		if(vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1;
		i++;

	}
	i = 0;
	while (str1[i])
	{
		if(vf[(int)str1[i]] == 1)
			vf[(int)str1[i]] = 2;
		i++;
	}
	i = 0;
	while(str1[i]) // iterate thru to print str1
	{
		if(vf[(int)str1[i]] == 2)
		{
			write(1, &str1[i], 1);
			vf[(int)str1[i]] = 1; // decrement, so char prints only once.
		}
		i++; // iterate through each char
	}
}

return (0);
}

