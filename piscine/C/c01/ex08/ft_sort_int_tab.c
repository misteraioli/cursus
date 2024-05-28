/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:04:15 by niperez           #+#    #+#             */
/*   Updated: 2024/02/11 21:48:03 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	size;

	size = 5;

	int	tab[size];
	tab[0] = 8;
	tab[1] = 6;
	tab[2] = 14;
	tab[3] = 56;
	tab[4] = 4;
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_int_tab(&tab[0], size);
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	
}
*/
