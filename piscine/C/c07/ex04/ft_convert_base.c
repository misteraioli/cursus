/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:02:35 by niperez           #+#    #+#             */
/*   Updated: 2024/05/15 15:55:10 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	checkbase(char *base);
int	is_in(char c, char *base);
int	corresp(char c, char *base);

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

int	sizemalloc(int nbr, int *neg, unsigned int sizebase)
{
	int				j;
	unsigned int	nbi;

	j = 1;
	*neg = 0;
	if (nbr < 0)
	{
		*neg = 1;
		nbi = -nbr;
	}
	else
		nbi = nbr;
	while (nbi >= sizebase)
	{
		nbi = nbi / sizebase;
		j++;
	}
	j += *neg;
	return (j);
}

unsigned int	nbneg(int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int				i;
	int				neg;
	unsigned int	nb;
	unsigned int	sizebase;
	char			*str;

	sizebase = ft_strlen(base);
	str = malloc(sizemalloc(nbr, &neg, sizebase) + 1);
	if (neg == 1)
		str[0] = '-';
	i = sizemalloc(nbr, &neg, sizebase) - 1;
	str[i + 1] = '\0';
	nb = nbneg(nbr);
	while (nb >= sizebase)
	{
		str[i] = base[nb % sizebase];
		nb = nb / sizebase;
		i--;
	}
	str[i] = base[nb];
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (!(checkbase(base_from) && checkbase(base_to)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(nb, base_to));
}


int	main(void)
{
	printf("%s", ft_convert_base("-1111", "01", "0123456789"));
	return (0);
}

