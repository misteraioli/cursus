/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:22:38 by niperez           #+#    #+#             */
/*   Updated: 2024/05/27 20:15:16 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_is_in(int c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static int	ft_print_args(int c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_c(va_arg(*args, int));
	else if (c == 's')
		count += ft_print_s(va_arg(*args, char *));
	else if (c == 'p')
		count += ft_print_p(va_arg(*args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_print_di(va_arg(*args, int));
	else if (c == 'u')
		count += ft_print_u((unsigned int)va_arg(*args, unsigned int));
	else if (c == 'x')
		count += ft_print_x(va_arg(*args, unsigned int), 0);
	else if (c == 'X')
		count += ft_print_x(va_arg(*args, unsigned int), 1);
	else if (c == '%')
		count += ft_putchar('%');
	else
		return (-1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_is_in(*str, "cspdiuxX%"))
				count += ft_print_args(*str, &args);
			else
			{
				va_end(args);
				return (-1);
			}
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
