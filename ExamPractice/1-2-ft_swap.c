/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2-ft_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 08:52:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/19 09:54:54 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b) // declaration - *a, *b - pointers as parameters.
{
	int copy;

	copy = *a; // *a - dereference: value @ a. This *a not same as *a in line 15.
	*a = *b;
	*b = copy;
	printf("%d", *a);
	printf("%d", *b);
}

int		main(void)
{
	int a = 2;
	int b = 3;

	ft_swap(&a,&b); // pass address to point in line 15.
	return (0);
}
