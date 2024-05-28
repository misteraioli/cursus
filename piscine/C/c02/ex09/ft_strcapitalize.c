/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:23:51 by niperez           #+#    #+#             */
/*   Updated: 2024/02/15 14:46:43 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_alpha(char *str)
{
	if (!('a' <= *str && *str <= 'z'))
	{
		if (!('A' <= *str && *str <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}

int	ft_char_is_numeric(char *str)
{
	if (!('0' <= *str && *str <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_charupcase(char *str)
{
	if ('a' <= *str && *str <= 'z')
	{
		*str = *str - 32;
	}
	return (str);
}

char	*ft_charlowcase(char *str)
{
	if ('A' <= *str && *str <= 'Z')
	{
		*str = *str + 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0' && ft_char_is_alpha(&str[0]))
		ft_charupcase(&str[0]);
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(&str[i -1]) || ft_char_is_numeric(&str[i -1]))
			ft_charlowcase(&str[i]);
		else
			ft_charupcase(&str[i]);
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[100] = "";
	char	b[10000] = "---salut, coMMMent tu vas ? 4--*nte+et+un";
	char    c[50] = " ";

	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",c);
	printf("%s\n",ft_strcapitalize(a));
	printf("%s\n",ft_strcapitalize(b));
}
*/
