/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:28:01 by niperez           #+#    #+#             */
/*   Updated: 2024/05/27 19:51:47 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_s(char *str)
{
	int		count;
	char	*null_str;

	count = 0;
	null_str = "(null)";
	if (str == NULL)
		str = null_str;
	while (*str != '\0')
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
