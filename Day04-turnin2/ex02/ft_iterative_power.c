/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:04:52 by gachan            #+#    #+#             */
/*   Updated: 2019/01/12 17:38:17 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int counter;
	int result;

	result = 1;
	counter = 0;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (counter++ < power)
		result *= nb;
	return (result);
}
