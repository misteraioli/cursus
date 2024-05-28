/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:22:37 by niperez           #+#    #+#             */
/*   Updated: 2024/02/20 17:05:14 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nb;

	signe = 1;
	i = 0;
	nb = 0;
	while ((9 <= str[i] && str[i] <= 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = 10 * nb + str[i] - '0';
		i++;
	}
	return (signe * nb);
}

/*
int	main(void)
{
	printf("%d",ft_atoi("    +++---1545s54"));
}
*/
