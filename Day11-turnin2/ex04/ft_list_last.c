/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:59:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/22 11:22:31 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *elem;

	if (!begin_list)
		return (0);
	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (elem);
}
