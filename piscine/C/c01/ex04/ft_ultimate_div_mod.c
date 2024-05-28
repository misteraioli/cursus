/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:52:35 by niperez           #+#    #+#             */
/*   Updated: 2024/02/11 17:34:16 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	va;
	int	vb;

	va = *a;
	vb = *b;
	*a = va / vb;
	*b = va % vb;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 12;
	y = 10;
	printf("%d %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d %d\n", x, y);
}
*/
