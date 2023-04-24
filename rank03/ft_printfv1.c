/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfv1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:43:35 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/28 15:12:10 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	ft_putnbr(long long int number, int base, int *len)
{
	char	*str = "0123456789abcdef";

	if (number < 0)
	{
		number *= -1;
		*len += write(1, "-", 1);
	}
	if (number >= base)
		ft_putnbr((number / base), base, len);
	*len += write(1, &str[number % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int len = 0;
	
	va_list	arg;
	va_start(arg, format);
	
	while (*format)
	{
		if ((*format == '%') && *(format + 1))
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(arg, char *), &len);
			else if (*format == 'd')
				ft_putnbr((long long int)va_arg(arg, int), 10, &len);
			else if (*format == 'x')
				ft_putnbr((long long int)va_arg(arg, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return (va_end(arg), len);
}