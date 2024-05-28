/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:28:57 by niperez           #+#    #+#             */
/*   Updated: 2024/05/27 20:43:08 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr(unsigned long long n, int *count, char *hex_chars)
{
	if (n < 16)
		*count += ft_putchar(hex_chars[n]);
	else
	{
		ft_putnbr(n / 16, count, "0123456789abcdef");
		*count += ft_putchar(hex_chars[n % 16]);
	}
}

int	ft_print_p(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	ft_putnbr(ptr, &count, "0123456789abcdef");
	return (count);
}
