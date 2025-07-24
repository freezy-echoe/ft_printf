/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:43:45 by bkarimov          #+#    #+#             */
/*   Updated: 2025/07/16 12:50:04 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(const char *str);
int	ft_putunbr(unsigned int nb);
int	ft_putvoid(void *p);
int	ft_printf(const char *s, ...);
int	ft_hex_low(uintptr_t nb);
int	ft_hex_up(uintptr_t nb);
int	ft_percent(void);

#endif
