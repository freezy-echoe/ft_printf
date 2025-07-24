/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:56:38 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 13:01:53 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

int	arg_check(const char c, va_list cpy)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(cpy, int)));
	else if (c == 'c')
		return (ft_putchar((char)va_arg(cpy, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(cpy, char *)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(cpy, unsigned int)));
	else if (c == 'p')
		return (ft_putvoid(va_arg(cpy, void *)));
	else if (c == 'x')
		return (ft_hex_low(va_arg(cpy, unsigned int)));
	else if (c == 'X')
		return (ft_hex_up(va_arg(cpy, unsigned int)));
	else if (c == '%')
		return (ft_percent());
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	count;
	size_t	printed_count;

	va_start(args, s);
	count = 0;
	printed_count = 0;
	while (s[count])
	{
		if (s[count] == '%' && s[count + 1])
		{
			count++;
			printed_count += arg_check(s[count], args);
		}
		else
		{
			printed_count += ft_putchar(s[count]);
		}
		count++;
	}
	va_end(args);
	return (printed_count);
}
