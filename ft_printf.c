/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:56:38 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/18 10:56:42 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

size_t ft_strlen(const char *s)
{
    size_t count;

    count = 0;
    while (s[count])
    {
        count++;
    }
    return (count);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    va_start(args, s);
    while(*s)
    {
        ;
    }
}
