/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:37:13 by niperez           #+#    #+#             */
/*   Updated: 2024/05/21 17:55:08 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int test_calloc(void) {
	size_t count = 5;
	size_t size = sizeof(int);
	int *arr;

	arr = ft_calloc(count, size);

	if (arr == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return (1);
	}

	printf("Valeurs initiales de l'array :\n");
	for (size_t i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}

int test_strlcpy(void) {
	char src[] = "Hello, world!";
	char dst[20];

	size_t copied = ft_strlcpy(dst, src, sizeof(dst));
	printf("Copied: %zu\n", copied);
	printf("Destination: %s\n", dst);

	return 0;
}

void	test_itoa(void) {
	printf("%s\n", ft_itoa(-421));
}

int test_memchr(void) {
	const char *s = "Hello, world!";
	int c = 'w';
	size_t n = ft_strlen(s);

	void *result = ft_memchr(s, c, n);

	if (result != NULL) {
		printf("Le caractère '%c' est présent à la position %ld dans la chaîne.\n", c, (char *)result - s);
	} else {
		printf("Le caractère '%c' n'est pas présent dans la chaîne.\n", c);
	}

	return 0;
}

int test_memcmp(void) {
	const char *s1 = "Hello, world!";
	const char *s2 = "Hello, worl";
	size_t n = ft_strlen(s1) + 1;

	int result = ft_memcmp(s1, s2, n);

	if (result < 0) {
		printf("'%s' est inférieur à '%s'\n", s1, s2);
	} else if (result > 0) {
		printf("'%s' est supérieur à '%s'\n", s1, s2);
	} else {
		printf("'%s' est égal à '%s'\n", s1, s2);
	}

	return 0;
}

int test_memcpy(void) {
	char src[20] = "Hello, world!";
	char dst[20];
	size_t n = ft_strlen(src) + 1;

	ft_memcpy(dst, src, n);

	printf("Chaîne copiée : %s\n", dst);

	return 0;
}

int test_memmove() {
	char buffer[] = "Hello, World!";
	size_t n = strlen(buffer);
	int offset = 3; // Décalage pour le chevauchement

	// Affichage du contenu initial du buffer
	printf("Avant memmove:\n");
	printf("buffer: %s\n", buffer);

	// Utilisation de memmove pour déplacer le contenu du buffer
	ft_memmove(buffer + offset, buffer, n - offset);

	// Affichage du contenu après l'utilisation de memmove
	printf("\nAprès memmove:\n");
	printf("buffer: %s\n", buffer);

	return 0;
}

static int	ft_count_words(char const *str, char c) {
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			cpt++;
		i++;
	}
	return (cpt);
}

void	test_split(void) {
	printf("%d ", ft_count_words("....gdf...gf", '.'));
	printf("%d ", ft_count_words("....gdfgf", '.'));
	printf("%d \n", ft_count_words("....gdf.gf..", '.'));

	char **strs = ft_split(".rkr..tgstrhrt.wrhg wh.grthrth", '.');
	printf("nbsep : %d \n",
	ft_count_words(".rkr..tgstrhrt.wrhg wh.grthrth", '.'));
	int	i = 0;
	while (i < ft_count_words(".rkr..tgstrhrt.wrhg wh.grthrth", '.'))
	{
		printf("%d %s\n", i, strs[i]);
		i++;
	}
}

int test_strchr(void) {
	const char *s = "Hello, world!";
	int c = 'o';

	char *result = ft_strchr(s, c);

	if (result == NULL) {
		printf("Caractère '%c' non trouvé dans la chaîne : %s\n", c, s);
	} else {
		printf("Caractère '%c' trouvé à la position : %ld\n", c, result - s);
	}

	return 0;
}

int test_strdup(void) {
	const char *str = "Hello, world!";
	char *dup_str = ft_strdup(str);

	if (dup_str == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return 1;
	}

	printf("Chaîne source: %s\n", str);
	printf("Chaîne dupliquée: %s\n", dup_str);

	free(dup_str); // Libère la mémoire allouée

	return 0;
}

static void uppercase_char(unsigned int index, char *c) {
	// Ajoute l'index au code ASCII du caractère pour obtenir une majuscule
	*c = *c + index;
}

int test_striteri() {
	char str[] = "hello";

	printf("Chaîne avant l'appel de ft_striteri : %s\n", str);

	// Applique la fonction uppercase_char à
	//chaque caractère de la chaîne avec son index comme décalage
	ft_striteri(str, &uppercase_char);

	printf("Chaîne après l'appel de ft_striteri : %s\n", str);

	return 0;
}

int test_strjoin(void) {
	const char *s1 = "Hello, ";
	const char *s2 = "world!";
	char *result = ft_strjoin(s1, s2);

	if (result == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return 1;
	}

	printf("Résultat : %s\n", result);

	free(result); // Libère la mémoire allouée

	return 0;
}

int test_strlcat(void) {
	char dst[20] = "Hello, ";
	const char *src = "world!";
	size_t dstsize = sizeof(dst);

	printf("Chaîne de destination avant : %s\n", dst);
	size_t result = ft_strlcat(dst, src, dstsize);
	printf("Chaîne de destination après : %s\n", dst);
	printf("Longueur totale de la chaîne : %zu\n", result);

	return 0;
}

static char add_index(unsigned int index, char c) {
	// Ajoute l'indice de chaque caractère à sa valeur ASCII
	return c + index;
}

int test_strmapi(void) {
	const char *s = "Hello";
	char *mapped_str = ft_strmapi(s, &add_index);

	if (mapped_str == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return 1;
	}

	printf("Chaîne originale : %s\n", s);
	printf("Chaîne mappée : %s\n", mapped_str);

	free(mapped_str); // Libère la mémoire allouée

	return 0;
}

int test_strcmp(void) {
	const char *s1 = "Hello";
	const char *s2 = "Hello";
	size_t n = 5;

	int result = ft_strncmp(s1, s2, n);

	if (result < 0) {
		printf("'%s' est inférieur à '%s'\n", s1, s2);
	} else if (result > 0) {
		printf("'%s' est supérieur à '%s'\n", s1, s2);
	} else {
		printf("'%s' est égal à '%s'\n", s1, s2);
	}

	return 0;
}

int test_strnstr(void) {
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	size_t len = strlen(haystack);

	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL) {
		printf("La sous-chaîne '%s' a été trouvée à la position : %ld\n", needle, result - haystack);
	} else {
		printf("La sous-chaîne '%s' n'a pas été trouvée dans la chaîne '%s'\n", needle, haystack);
	}

	return 0;
}

int test_strrchr(void) {
	const char *s = "Hello, world!";
	int c = 'o';

	char *result = ft_strrchr(s, c);

	if (result == NULL) {
		printf("Caractère '%c' non trouvé dans la chaîne : %s\n", c, s);
	} else {
		printf("Dernière occurrence du caractère '%c' trouvée à la position : %ld\n", c, result - s);
	}

	return 0;
}

int test_strtrim(void) {
	const char *s1 = "   Hello, world!   xxx";
	const char *set = " x";
	char *trimmed_str = ft_strtrim(s1, set);

	if (trimmed_str == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return 1;
	}

	printf("Chaîne originale : \"%s\"\n", s1);
	printf("Chaîne élaguée : \"%s\"\n", trimmed_str);

	free(trimmed_str); // Libère la mémoire allouée

	return 0;
}

int test_substr(void) {
	const char *s = "Hello, world!";
	unsigned int start = 7; // Début de la sous-chaîne à extraire
	size_t len = 5; // Longueur de la sous-chaîne à extraire

	char *result = ft_substr(s, start, len);

	if (result == NULL) {
		printf("Erreur: Échec de l'allocation de mémoire.\n");
		return 1;
	}

	printf("Sous-chaîne extraite : %s\n", result);

	free(result); // Libère la mémoire allouée

	return 0;
}


int main(void)
{
	return (0);
}
