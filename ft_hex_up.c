/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:02:39 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 12:56:39 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_hex_up(uintptr_t nbr)
{
	int		len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_hex_up(nbr / 16);
	}
	if ((nbr % 16) < 10)
	{
		len += ft_putchar((nbr % 16) + '0');
	}
	else
	{
		len += ft_putchar((nbr % 16) - 10 + 'A');
	}
	return (len);
}
