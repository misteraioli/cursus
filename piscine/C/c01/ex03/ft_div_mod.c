/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:50:48 by niperez           #+#    #+#             */
/*   Updated: 2024/02/11 15:57:29 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int 	main(void)
{
	int	d;
	int	m;

	d = 0;
	m = 0;
	printf("%d %d\n", d, m);
	ft_div_mod( 12, 10, &d, &m);
	printf("%d %d\n", d, m);
}
*/
