/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:54:02 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 13:00:37 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
