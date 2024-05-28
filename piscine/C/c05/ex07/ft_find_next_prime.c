/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:50 by niperez           #+#    #+#             */
/*   Updated: 2024/02/24 16:37:30 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb +1));
}

/*
int 	main(void)
{
	printf("%d ",ft_find_next_prime(0));
	printf("%d ",ft_find_next_prime(1));
	printf("%d ",ft_find_next_prime(2));
	printf("%d ",ft_find_next_prime(3));
	printf("%d ",ft_find_next_prime(4));
	printf("%d ",ft_find_next_prime(5));
	printf("%d ",ft_find_next_prime(6));
	printf("%d ",ft_find_next_prime(7));
	printf("%d ",ft_find_next_prime(8));
	printf("%d ",ft_find_next_prime(9));
	printf("%d ",ft_find_next_prime(10));
	printf("%d ",ft_find_next_prime(11));
	printf("%d ",ft_find_next_prime(12));
}
*/
