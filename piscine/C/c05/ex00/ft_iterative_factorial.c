/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:50:04 by niperez           #+#    #+#             */
/*   Updated: 2024/02/21 15:33:23 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	facto;
	int	i;

	facto = 1;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			i++;
			facto *= i;
		}
		return (facto);
	}
}

/*
int main(void)
{
	printf("%d",ft_iterative_factorial(4));
}
*/