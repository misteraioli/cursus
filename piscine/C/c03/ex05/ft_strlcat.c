/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:53:25 by niperez           #+#    #+#             */
/*   Updated: 2024/02/21 22:38:01 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (destlen >= size)
		return (srclen + size);
	while (src[i] != '\0' && destlen + i < size -1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

/*
int	main(void)
{
	char a[100] = "oui";
	char b[100] = "non";
	printf("%s\n",a);
	printf("%s\n",b);
	int c = ft_strlcat(a,b,6);
	printf("%s\n",a);
	printf("%d\n",c);
}
*/