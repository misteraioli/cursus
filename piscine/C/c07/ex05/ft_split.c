/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:41:36 by niperez           #+#    #+#             */
/*   Updated: 2024/05/18 00:47:42 by niperez          ###   ########.fr       */
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

int	is_in(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	size_tab(char *str, char *charset)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (is_in(str[i], charset))
		i++;
	while (str[i] != '\0')
	{
		if ((is_in(str[i], charset) && !(is_in(str[i + 1], charset))
				&& str[i + 1] != '\0') || str[i + 1] == '\0')
			cpt++;
		i++;
	}
	return (cpt);
}

int	size_str(char *str, int k, char *charset)
{
	int	i;

	i = 0;
	while (!(is_in(str[k + i], charset)) && str[k + i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	i = 0;
	k = 0;
	strs = malloc(size_tab(str, charset) * sizeof(char *) + 1);
	strs[size_tab(str, charset)] = 0;
	while (is_in(str[k], charset))
		k++;
	while (i < size_tab(str, charset))
	{
		j = 0;
		strs[i] = malloc(size_str(str, k, charset) + 1);
		strs[i][size_str(str, k, charset)] = '\0';
		while (size_str(str, k, charset) > 0)
			strs[i][j++] = str[k++];
		while (is_in(str[k], charset))
			k++;
		i++;
	}
	return (strs);
}


int	main(void)
{
	printf("%d ", size_tab("....gdf...gf", "."));
	printf("%d ", size_tab("....gdfgf", "."));
	printf("%d \n", size_tab("....gdf.gf..", "."));

	char **strs = ft_split(".rkr..tgstrhrt.wrhg wh.grthrth", ".");
	printf("nbsep : %d \n", size_tab(".rkr..tgstrhrt.wrhg wh.grthrth", "."));
	int	i = 0;
	while (i < size_tab(".rkr..tgstrhrt.wrhg wh.grthrth", "."))
	{
		printf("%d %s\n", i, strs[i]);
		i++;
	}
}

