/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:17:53 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 06:40:24 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Development mode
 *
 * Create ft_boolean.h file
 * It will compile & run following main:
 *
 * #include "ft_boolean.h"
 *
 * void		ft_putstr(char *str)
 * {
 *		while (*str)
 *			write(1, str++, 1);
 * }
 *
 * t_bool	ft_is_even(int nbr)
 * {
 *		return ((EVEN(nbr)) ? TRUE: FALSE);
 * }
 *
 * int		main(int argc, char **argv)
 * {
 * 		(void)argv;
 * 		if (ft_is_even(argc - 1) == TRUE)
 * 			ft_putstr(EVEN_MSG);
 * 		else
 * 			ft_putstr(ODD_MSG);
 * 		return (SUCCESS);
 * 	}
 *
 *
 * Development mode
 */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define TRUE 1
# define FALSE 0
# define EVEN(x) ((x) % 2) == 0
# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG "I have an odd number of arguments. \n"
# define SUCCESS 0

# include <unistd.h>

typedef int		t_bool;

#endif
