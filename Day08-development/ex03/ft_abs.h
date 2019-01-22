/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:21:41 by gachan            #+#    #+#             */
/*   Updated: 2019/01/18 06:38:15 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Development mode
 *
 * Create a macro ABS which replaces its argument by its absolute value
 * #define ABS(Value)
 *
 * Development mode
 */

#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(x) ((x) >= 0 ? x : -x)

#endif
