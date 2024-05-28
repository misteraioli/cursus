/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:45:26 by niperez           #+#    #+#             */
/*   Updated: 2024/02/13 18:07:33 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
