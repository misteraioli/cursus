/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:00:36 by niperez           #+#    #+#             */
/*   Updated: 2024/02/16 14:22:56 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
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
	char    c[50] = "&";
	printf("r: %d\n",ft_str_is_printable(a));
	printf("\n");
	printf("r: %d\n",ft_str_is_printable(b));
	printf("r: %d\n",ft_str_is_printable(c));
}
*/
