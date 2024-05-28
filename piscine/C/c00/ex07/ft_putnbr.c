/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:43 by niperez           #+#    #+#             */
/*   Updated: 2024/02/24 00:01:26 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		ft_putchar('-');
		ft_putnbr(INT_MAX / 10);
		ft_putchar((((INT_MAX % 10) + 1) % 10) + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(0);
	write(1,"\n",1);

	ft_putnbr(42);
	write(1,"\n",1);

	ft_putnbr(-500);
	write(1,"\n",1);

	ft_putnbr(INT_MAX);
	write(1,"\n",1);

	ft_putnbr(INT_MIN);
	write(1,"\n",1);
}
*/
