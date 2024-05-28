/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:53:36 by niperez           #+#    #+#             */
/*   Updated: 2024/02/13 18:03:27 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	a[50] = "4636";
	char	b[50] = "ggg5 gdfh65";
	char    c[50] = "";
	printf("r: %d\n",ft_str_is_numeric(a));
	printf("\n");
	printf("r: %d\n",ft_str_is_numeric(b));
	printf("r: %d\n",ft_str_is_numeric(c));
}
*/
