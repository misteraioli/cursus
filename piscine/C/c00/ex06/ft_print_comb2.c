/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:09:14 by niperez           #+#    #+#             */
/*   Updated: 2024/02/23 23:58:08 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb1, int nb2)
{
	ft_putchar((nb1 / 10) + '0');
	ft_putchar((nb1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((nb2 / 10) + '0');
	ft_putchar((nb2 % 10) + '0');
	if (nb1 < 100 - 2)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 100 -1)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_print(n1, n2);
			n2++;
		}
		n1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
