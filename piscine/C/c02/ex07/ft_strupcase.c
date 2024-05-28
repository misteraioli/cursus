/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:03:58 by niperez           #+#    #+#             */
/*   Updated: 2024/02/13 18:04:32 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[50] = "4636";
	char	b[50] = "ggg5 gdfh65";
	char    c[50] = "";
	//a = ft_strupcase(&a);
	//b = ft_strupcase(&b);
	//c = ft_strupcase(&c);

	printf("r: %s\n",ft_strupcase(a));
	printf("\n");
	printf("r: %s\n",ft_strupcase(b));
	printf("\n");
	printf("r: %s\n",ft_strupcase(c));
}
*/
