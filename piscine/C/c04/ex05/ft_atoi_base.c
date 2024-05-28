/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:23:36 by niperez           #+#    #+#             */
/*   Updated: 2024/02/27 18:55:59 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_in(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	corresp(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	nb;

	signe = 1;
	i = 0;
	nb = 0;
	if (checkbase(base))
	{
		while ((9 <= str[i] && str[i] <= 14) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				signe *= -1;
			i++;
		}
		while (is_in(str[i], base))
		{
			nb = ft_strlen(base) * nb + corresp(str[i], base);
			i++;
		}
		return (signe * nb);
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_atoi_base("1111", "01"));
}
*/
