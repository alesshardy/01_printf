/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:33:14 by apintus           #+#    #+#             */
/*   Updated: 2023/11/27 14:33:40 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
size_t	ft_format(char c, va_list args);

size_t	ft_putchar(int c);
size_t	ft_putstr(char *str);
size_t	ft_digit(long nbr, int base, int uppercase);
size_t	ft_digit_ptr(unsigned long nbr, unsigned long base);
size_t	ft_format_ptr(va_list args, size_t len);
size_t	ft_format_str(va_list args, size_t len);

#endif
