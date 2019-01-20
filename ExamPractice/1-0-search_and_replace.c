/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:15:48 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 21:08:43 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// example:
// input: abcdefg search: c replace with: o
// output: abodefg
// allowed functions: write, exit
//
// argv[1] = input string
// argv[2] = search character (one char only)
// argv[3] = replacement character (one char only)

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	// make sure argv[2] & argv[3] are one char only!
	if (argv[2][1] != '\0' || argv[3][1] != '\0') // if the 2nd char @ [1] is not '\0', then there is likely >1 char in these strings.
	{
		write(1, "\n", 1);
		return 0;
	}

	i = 0;
	if(argc == 4)
	{
		while(argv[1][i] != '\0')
		{
			// check to see if argv[2][0] is in argv[1][i]
			if(argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0]; //pass argv[3][0] to argv[1][0]
			write(1, &argv[1][i],1);
			i++; // this works, but less intuitive: argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

