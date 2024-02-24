/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:45:35 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/24 18:12:01 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int  ft_format(va_list args, const char format)
{
    void    *ptr;

    if (format == 'c')
        return (ft_putchar((va_arg(args, int))));
    else if (format == 's')
        return (ft_putstr((va_arg(args, char *))));
    else if (format == 'd' || format == 'i')
        return (ft_putnbr((va_arg(args, int))));
    else if (format == 'X' || format == 'x')
        return (ft_puthexa(va_arg(args, unsigned int), format));
    else if (format == 'p')
    {
        ptr = va_arg(args, void *);
        if (ptr)
            return (ft_putaddress(ptr));
        return (ft_putstr("0x0"));
    }
    else if (format == 'u')
        return (ft_putunsinged(va_arg(args, unsigned int)));
    else if (format == '%')
        return (ft_puchar('%'));
    else
        return (-1);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int i;
    int len;

    i = 0;
    len = 0;
    va_start(args, str);
    while (*(str + i))
    {
        if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
        {
            len += ft_format(args, *(str + i + 1));
            i++;
        }
        else
            len += ft_putchar(*(str + i));
        i++;
    }
    va_end(args);
    return (len);
}

int main()
{
    ft_printf("Hello, %s", deniz);
}