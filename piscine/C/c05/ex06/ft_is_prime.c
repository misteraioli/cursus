/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:52:56 by niperez           #+#    #+#             */
/*   Updated: 2024/02/24 16:36:24 by niperez          ###   ########.fr       */
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

/*
int 	main(void)
{
	printf("%d",ft_is_prime(0));
	printf("%d",ft_is_prime(1));
	printf("%d",ft_is_prime(2));
	printf("%d",ft_is_prime(3));
	printf("%d",ft_is_prime(4));
	printf("%d",ft_is_prime(5));
	printf("%d",ft_is_prime(6));
	printf("%d",ft_is_prime(7));
	printf("%d",ft_is_prime(8));
	printf("%d",ft_is_prime(9));
	printf("%d",ft_is_prime(10));
	printf("%d",ft_is_prime(11));
	printf("%d",ft_is_prime(12));
}
*/
