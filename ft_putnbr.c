/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:49:49 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 12:59:38 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = (long) nb;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		len += ft_putnbr(nbr / 10);
	}
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}
