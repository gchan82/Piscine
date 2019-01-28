/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0-ft_list_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 07:28:32 by gachan            #+#    #+#             */
/*   Updated: 2019/01/24 07:53:31 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_list_size.c
//
// Write a function that returns the number of elements in the linked list that's passed to it.
//
// note: same as Day11 -ex03
//
//must use prototype:
//int		ft_list_size(t_list *begin_list);
//
//Must use following structure & turn in as file called ft_list.h:
/*
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

*/

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
