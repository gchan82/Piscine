/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0-ft_print_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:36:44 by gachan            #+#    #+#             */
/*   Updated: 2019/01/29 19:40:47 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h> // DELETE BEFORE TURNIN

void	ft_print_numbers(void)
{
	write(1, "0123456789\n", 11);
}

// DELETE BELOW BEOFRE TURNIN
int		main()
{
	ft_print_numbers();
	return (0);
}
