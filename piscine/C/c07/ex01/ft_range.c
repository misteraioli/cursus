/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:38:09 by niperez           #+#    #+#             */
/*   Updated: 2024/02/28 17:47:38 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	j;

	if (min >= max)
		return (0);
	j = min;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = j + i;
		i++;
	}
	return (tab);
}

/*
int	main(void)
{
	int *tab = ft_range(-2,2);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
}
*/
