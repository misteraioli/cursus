/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:37:35 by niperez           #+#    #+#             */
/*   Updated: 2024/05/15 19:45:52 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
		{
			if (!('A' <= str[i] && str[i] <= 'Z'))
				return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	a[50] = "lol";
	char	b[50] = "ggg5 gdfh65";
	char    c[50] = "";
	printf("r: %d\n",ft_str_is_alpha(a));
	printf("\n");
	printf("r: %d\n",ft_str_is_alpha(b));
	printf("r: %d\n",ft_str_is_alpha(c));
}
*/
