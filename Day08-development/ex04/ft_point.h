/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:29:17 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 06:33:08 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Development mode
 *
 * Create a file ft_point.h that'll compile the following main:
 *
 * #include "ft_point.h"
 * 
 * void		set_point(t_point *point)
 * {
 *		point->x = 42;
 *		point->y = 21;
 * }
 *
 * int		main(void)
 * {
 *		t_point		point;
 *
 *		set_point(&point);
 *		return (0);
 * }
 *
 * Development mode
 */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct s_point
{
	int x;
	int y;
}				t_point;

#endif
