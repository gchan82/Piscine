/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0-hello.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:41:23 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 19:44:17 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
