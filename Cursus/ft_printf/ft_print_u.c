/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:30:26 by niperez           #+#    #+#             */
/*   Updated: 2024/05/28 17:09:11 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int n, int *count)
{
	if (n < 10)
		*count += ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10, count);
		*count += ft_putchar((n % 10) + '0');
	}
}

int	ft_print_u(unsigned int n)
{
	int	count;

	count = 0;
	ft_putnbr(n, &count);
	return (count);
}
