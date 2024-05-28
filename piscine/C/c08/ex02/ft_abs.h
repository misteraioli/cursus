/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:48:14 by niperez           #+#    #+#             */
/*   Updated: 2024/03/28 11:32:30 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

//# define ABS(Value) (Value < 0) ? -Value : Value
# define ABS(Value) \
({ \
	int result; \
	if (Value < 0) \
		result = -Value; \
	else \
		result = Value; \
	result; \
})

#endif
