/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:31 by niperez           #+#    #+#             */
/*   Updated: 2024/02/29 11:59:10 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	unsigned int	nbu;
	unsigned int	nbi;
	int				i;
	int				j;
	int				neg;
	char			*str;
	
	j = 1;
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbu = -nbr;
	}
	else
		nbu = nbr;
	nbi = nbu;
	while (nbi >= 10)
	{
		nbi = nbi / 10;
		j++;
	}
	str = malloc(neg+j+1);
	if(neg == 1)
		str[0] = '-';
	str[j + neg] = '\0';
	i = j + neg - 1;
	while (nbu > 9)
	{
		str[i] = nbu % 10 + '0';
		nbu = nbu / 10;
		i--;
	}
	str[i] = nbu + '0';
	return (str);
}

int	main(void)
{
	printf("%s",ft_itoa(-421));
}
