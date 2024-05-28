/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <niperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:57:37 by niperez           #+#    #+#             */
/*   Updated: 2024/05/28 17:09:56 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_print_c(char c);
int	ft_print_s(char *str);
int	ft_print_p(unsigned long long ptr);
int	ft_print_di(int n);
int	ft_print_u(unsigned int n);
int	ft_print_x(int n, int is_upper_case);

#endif
