/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:10:46 by niperez           #+#    #+#             */
/*   Updated: 2024/02/24 00:50:16 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *tab)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_incr(int n, int *tab, int *is_over)
{
	int	i;

	i = n -1;
	while (i >= 0 && tab[i] == 10 - n + i)
		i--;
	if (i < 0)
		*is_over = 1;
	else
	{
		tab[i]++;
		i++;
		while (i < n)
		{
			tab[i] = tab[i -1] + 1;
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	is_over;
	int	i;

	is_over = 0;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (is_over == 0)
	{
		ft_print(n, tab);
		ft_incr(n, tab, &is_over);
		if (is_over == 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			is_over = 1;
	}
}

/*
int	main(void)
{
	ft_print_combn(8);
}
*/
