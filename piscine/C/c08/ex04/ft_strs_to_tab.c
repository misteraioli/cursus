/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:51:31 by niperez           #+#    #+#             */
/*   Updated: 2024/03/28 12:52:49 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/*
#include <stdio.h>

int main() {
    // Exemples à tester
    char *example1 = "Bonjour";
    char *example2 = "Ceci est un exemple";
    char *example3 = "Une autre chaîne de caractères";

    // Test de ft_strlen
    printf("Test de ft_strlen :\n");
    printf("Longueur de la première chaîne : %d\n", ft_strlen(example1));
    printf("Longueur de la deuxième chaîne : %d\n", ft_strlen(example2));
    printf("Longueur de la troisième chaîne : %d\n", ft_strlen(example3));

    // Test de ft_strcpy
    printf("\nTest de ft_strcpy :\n");
    char dest1[100], dest2[100], dest3[100];
	// Supposons une taille suffisamment grande pour les chaînes de destination
    ft_strcpy(dest1, example1);
    ft_strcpy(dest2, example2);
    ft_strcpy(dest3, example3);
    printf("Copie de la première chaîne : %s\n", dest1);
    printf("Copie de la deuxième chaîne : %s\n", dest2);
    printf("Copie de la troisième chaîne : %s\n", dest3);

    // Test de ft_strdup
    printf("\nTest de ft_strdup :\n");
    char *dup1 = ft_strdup(example1);
    char *dup2 = ft_strdup(example2);
    char *dup3 = ft_strdup(example3);
    printf("Duplication de la première chaîne : %s\n", dup1);
    printf("Duplication de la deuxième chaîne : %s\n", dup2);
    printf("Duplication de la troisième chaîne : %s\n", dup3);
    free(dup1); // N'oubliez pas de libérer la mémoire allouée dynamiquement
    free(dup2);
    free(dup3);

    // Test de ft_strs_to_tab
    printf("\nTest de ft_strs_to_tab :\n");
    char *examples[] = {example1, example2, example3};
    struct s_stock_str *tab = ft_strs_to_tab(3, examples);
    if (tab == NULL) {
        printf("Erreur lors de l'allocation du tableau de structures.\n");
        return 1;
    }
    printf("Affichage des éléments du tableau :\n");
    for (int i = 0; tab[i].str != 0; i++) {
        printf("Taille : %d, Chaîne : %s,
			Copie : %s\n", tab[i].size, tab[i].str, tab[i].copy);
    }

    // Libération de la mémoire allouée dynamiquement
    for (int i = 0; tab[i].str != 0; i++) {
        free(tab[i].copy);
    }
    free(tab);

    return 0;
}
*/
