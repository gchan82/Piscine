/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:41:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 13:52:12 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print last arg
// place newline

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 1)
		while (*av[ac-1] != '\0') // dereference pointer to array, the last arg [ac-1] on list.
			write(1, av[ac-1]++,1); // display actual value at av indexed @ ac-1. Print to sceen, THEN ++.
	write(1, "\n", 1);
	return (0);
}
