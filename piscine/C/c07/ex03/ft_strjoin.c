/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:43:35 by niperez           #+#    #+#             */
/*   Updated: 2024/02/29 18:23:21 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*cat;

	cat = malloc(ft_strslen(size, strs) + (size -1) * ft_strlen(sep) + 1);
	if (cat == NULL)
		return (NULL);
	i = 0;
	cat[0] = '\0';
	while (i < size)
	{
		ft_strcat(cat, strs[i]);
		if (i <= size -1)
			ft_strcat(cat, sep);
		i++;
	}
	cat[ft_strslen(size, strs) + (size - 1) * ft_strlen(sep)] = '\0';
	return (cat);
}

/*
int	main(void)
{
	int size = 3;
	char *strs[] = {"salut", "mosieur", "perez"};
	char	*sep = "**";
	printf("%s",ft_strjoin(size, strs, sep));
}
*/
