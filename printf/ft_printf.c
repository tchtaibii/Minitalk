/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:11 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/24 21:54:42 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printcent(char c, va_list arguments)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(arguments, int));
	if (c == 's')
		i = ft_putstr(va_arg(arguments, char *));
	if (c == 'p')
	{
		i = ft_putstr("0x");
		i += ft_printp(va_arg(arguments, unsigned long));
	}
	if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(arguments, int));
	if (c == 'u')
		i = ft_putnbr_u(va_arg(arguments, unsigned int));
	if (c == 'x')
		i = ft_printhexlow(va_arg(arguments, unsigned int));
	if (c == 'X')
		i = ft_printhexup(va_arg(arguments, unsigned int));
	if (c == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	char		*str;
	int			i;
	va_list		arguments;

	i = 0;
	va_start(arguments, format);
	str = (char *)format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				return (i);
			i += ft_printcent(*str, arguments);
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	va_end(arguments);
	return (i);
}
