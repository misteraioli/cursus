/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:48:11 by niperez           #+#    #+#             */
/*   Updated: 2024/04/10 13:54:10 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	is_safe(int *tab, int i, int j)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (tab[k] == j)
			return (0);
		else if (tab[k] + (i - k) == j || tab[k] - (i - k) == j)
			return (0);
		k++;
	}
	return (1);
}

void	ft_incr(int *tab, int i, int j, int *cpt)
{
	if (i >= 0)
	{
		if (i < 10)
		{
			while (!(is_safe(tab, i, j)) && j < 10)
				j++;
			if (j == 10)
				ft_incr(tab, i -1, tab[i -1] + 1, cpt);
			else
			{
				tab[i] = j;
				ft_incr(tab, i +1, 0, cpt);
			}
		}
		else if (i == 10)
		{
			//ft_print(tab);
			*cpt = *cpt + 1;
			ft_incr(tab, i -1, tab[i -1] +1, cpt);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	cpt;

	cpt = 0;
	ft_incr(tab, 0, 0, &cpt);
	return (cpt);
}


int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
