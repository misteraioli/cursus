/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:08:23 by niperez           #+#    #+#             */
/*   Updated: 2024/02/23 23:55:52 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb1, int nb2, int nb3)
{
	ft_putchar(nb1 + '0');
	ft_putchar(nb2 + '0');
	ft_putchar(nb3 + '0');
	if (nb1 < 10 -3)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 < 10 -2)
	{
		n2 = n1 + 1;
		while (n2 < 10 -1)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				ft_print(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
