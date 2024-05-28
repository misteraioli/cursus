/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:47:08 by niperez           #+#    #+#             */
/*   Updated: 2024/02/09 14:01:41 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i + '0');
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/
