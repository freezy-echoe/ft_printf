/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:11:18 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 13:00:57 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = (long) nb;
	if (nbr >= 10)
	{
		len += ft_putunbr(nbr / 10);
	}
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}
