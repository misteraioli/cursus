/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:51:10 by niperez           #+#    #+#             */
/*   Updated: 2024/05/28 17:08:57 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n, int *count, char *hex_chars)
{
	unsigned int	nb;

	nb = n;
	if (nb < 16)
		*count += ft_putchar(hex_chars[nb]);
	else
	{
		ft_putnbr(nb / 16, count, hex_chars);
		*count += ft_putchar(hex_chars[nb % 16]);
	}
}

int	ft_print_x(int n, int is_upper_case)
{
	int		count;
	char	*hex_chars;

	count = 0;
	hex_chars = "0123456789abcdef";
	if (is_upper_case)
		hex_chars = "0123456789ABCDEF";
	ft_putnbr(n, &count, hex_chars);
	return (count);
}
