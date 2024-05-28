/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:25:57 by niperez           #+#    #+#             */
/*   Updated: 2024/02/29 16:59:36 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*temp;

	if (*range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	j = min;
	temp = malloc((max - min) * sizeof(int));
	if (temp == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		temp[i] = j + i;
		i++;
	}
	*range = temp;
	return (max - min);
}

/*
int	main(void)
{
	int *tab;
	printf("%d\n", ft_ultimate_range(&tab,-2,2));
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
}
*/
