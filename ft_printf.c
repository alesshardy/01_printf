/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:39:53 by apintus           #+#    #+#             */
/*   Updated: 2023/11/29 16:53:12 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_format(char c, va_list args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_format_str(args, len);
	else if (c == 'd' || c == 'i')
		len += ft_digit((long)va_arg(args, int), 10, 0);
	else if (c == 'x')
		len += ft_digit((long)va_arg(args, unsigned int), 16, 0);
	else if (c == 'X')
		len += ft_digit((long)va_arg(args, unsigned int), 16, 1);
	else if (c == 'p')
		len += ft_format_ptr(args, len);
	else if (c == 'u')
		len += ft_digit((long)va_arg(args, unsigned int), 10, 0);
	else if (c == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	len;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			len += ft_format(*(++str), args);
		else
			len += write(1, str, 1);
		++str;
	}
	va_end(args);
	return (len);
}
