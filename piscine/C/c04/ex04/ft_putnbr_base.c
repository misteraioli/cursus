/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:23:06 by niperez           #+#    #+#             */
/*   Updated: 2024/02/27 18:09:39 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base_rec(int nbr, char *base, unsigned int sizebase)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		nb = -nbr;
		ft_putchar('-');
	}
	else
		nb = nbr;
	if (nb < sizebase)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base_rec(nb / sizebase, base, sizebase);
		ft_putchar(base[nb % sizebase]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	sizebase;

	sizebase = ft_strlen(base);
	if (checkbase(base))
		ft_putnbr_base_rec(nbr, base, sizebase);
}

/*
int	main(void)
{
	ft_putnbr_base(-548,"0123456789");
}
*/
