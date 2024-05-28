/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:29:56 by niperez           #+#    #+#             */
/*   Updated: 2024/05/27 20:58:07 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	if (n < -9)
	{
		*count += ft_putchar('-');
		nb = -1 * n;
		ft_putnbr(nb / 10, count);
		*count += ft_putchar((nb % 10) + '0');
	}
	else if (n < 0)
	{
		*count += ft_putchar('-');
		nb = -1 * n;
		ft_putnbr(nb, count);
	}
	else if (n < 10)
		*count += ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10, count);
		*count += ft_putchar((n % 10) + '0');
	}
}

int	ft_print_di(int n)
{
	int	count;

	count = 0;
	ft_putnbr(n, &count);
	return (count);
}
