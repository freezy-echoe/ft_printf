/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:24:45 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/24 13:48:10 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putvoid(void *p)
{
	uintptr_t	ptr;
	int			len;

	len = 0;
	if (p == 0)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	ptr = (unsigned long long)p;
	len += ft_putstr("0x");
	len += ft_hex_low(ptr);
	return (len);
}
