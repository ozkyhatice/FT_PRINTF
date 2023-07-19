/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatice <hatice@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:32:34 by hatice            #+#    #+#             */
/*   Updated: 2023/07/17 20:13:13 by hatice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_format(const char format, va_list *ap)
{
	int		len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*ap, int));
	else if (format == 's')
		len += ft_putstr(va_arg(*ap, char *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(*ap, int));
	else if (format == 'u')
		len += ft_putunsignednbr(va_arg(*ap, unsigned int));
	else if (format == 'p')
	{
		len += ft_putstr("0x");
		len += ft_pointer(va_arg(*ap, size_t));
	}
	else if (format == 'x' || format == 'X')
		len += ft_hexprintf(va_arg(*ap, unsigned int), format);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += printf_format(*format, &ap);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}
