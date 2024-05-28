/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:10:40 by niperez           #+#    #+#             */
/*   Updated: 2024/05/26 23:25:18 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/libftprintf.h"
#include <stdio.h>

int main() {
	char character = 'A';
	char string[] = "Hello, World!";
	void *pointer = &character;
	int decimal = 42;
	int prefixed_decimal = 42;
	unsigned int unsigned_decimal = 42;
	int negative_decimal = -42;

	// %c : caractère (char)
	printf("%d\n",
	printf("Caractère : %c\n", character) ==
	ft_printf("Caractère : %c\n", character));
		 // Caractère : A

	// %s : chaîne de caractères (char *)
	printf("%d\n",
	printf("Chaîne de caractères : %s\n", string) ==
	ft_printf("Chaîne de caractères : %s\n", string));
		 // Chaîne de caractères : Hello, World!

	// %p : pointeur (void *) en hexadécimal
	printf("%d\n",
	printf("Pointeur : %p\n", pointer) ==
	ft_printf("Pointeur : %p\n", pointer));
		 // Pointeur : 0x7ffee5d396bf (ou une autre adresse mémoire)

	// %d : entier décimal (int)
	printf("%d\n",
	printf("Entier décimal : %d\n", decimal) ==
	ft_printf("Entier décimal : %d\n", decimal));
		 // Entier décimal : 42

	// %i : entier (int) avec interprétation du préfixe
	printf("%d\n",
	printf("Entier sans préfixe : %i\n", prefixed_decimal) ==
	ft_printf("Entier sans préfixe : %i\n", prefixed_decimal));
		 // Entier sans préfixe : 42
	printf("%d\n",
	printf("Entier avec préfixe 0 : %i\n", 052) ==
	ft_printf("Entier avec préfixe 0 : %i\n", 052));
		 // Entier avec préfixe 0 : 42 (052 est octal pour 42)
	printf("%d\n",
	printf("Entier avec préfixe 0x : %i\n", 0x2A) ==
	ft_printf("Entier avec préfixe 0x : %i\n", 0x2A));
		 // Entier avec préfixe 0x : 42 (0x2A est hexadécimal pour 42)

	// %u : entier décimal non signé
	printf("%d\n",
	printf("Entier décimal non signé : %u\n", unsigned_decimal) ==
	ft_printf("Entier décimal non signé : %u\n", unsigned_decimal));
		 // Entier décimal non signé : 42

	// %x : entier en hexadécimal lowercase
	printf("%d\n",
	printf("Entier en hexadécimal lowercase : %x\n", decimal) ==
	ft_printf("Entier en hexadécimal lowercase : %x\n", decimal));
		 // Entier en hexadécimal lowercase : 2a

	// %X : entier en hexadécimal uppercase
	printf("%d\n",
	printf("Entier en hexadécimal uppercase : %X\n", decimal) ==
	ft_printf("Entier en hexadécimal uppercase : %X\n", decimal));
		 // Entier en hexadécimal uppercase : 2A

	// %% : afficher le caractère % lui-même
	printf("%d\n",
	printf("Afficher %% : %%\n") ==
	ft_printf("Afficher %% : %%\n"));
		 // Afficher % : %

	// Test supplémentaire pour le signe des entiers
	printf("%d\n",
	printf("Entier signé négatif avec %%d : %d\n", negative_decimal) ==
	ft_printf("Entier signé négatif avec %%d : %d\n", negative_decimal));
		 // Entier signé négatif avec %d : -42
	printf("%d\n",
	printf("Entier signé négatif avec %%i : %i\n", negative_decimal) ==
	ft_printf("Entier signé négatif avec %%i : %i\n", negative_decimal));
		 // Entier signé négatif avec %i : -42
	printf("%d\n",
	printf("Entier signé négatif converti en non signé avec %%u : %u\n", (unsigned int)negative_decimal) ==
	ft_printf("Entier signé négatif converti en non signé avec %%u : %u\n", (unsigned int)negative_decimal));
		 // Entier signé négatif converti en non signé avec %u : 4294967254 (ou une autre valeur selon la taille des entiers non signés sur votre système)
		char *str = NULL;
	printf("%d\n",
	printf("%s\n", str) ==
	ft_printf("%s\n", str));

	return 0;
}
