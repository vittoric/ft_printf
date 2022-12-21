/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:15:38 by vcodrean          #+#    #+#             */
/*   Updated: 2022/12/21 18:56:23 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

static int	converter(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	va_start(args, format);
	i = 0;
	length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += converter(format[i + 1], args);
			i++;
		}
		else
			length += ft_putchar(format[i]);
			i++;
	}
	va_end(args);
	return (length);
}

int main (void)
{
    char *str;
    int n;
    char c;
    unsigned int un;

    c = 'a';
	str = "Unicorns dose not exists";
    ft_printf("El caracter es %c\n", c);
    printf("El caracter es %c\n", c);
	ft_printf("La string es: %s\n", str);
    printf("La string es: %s\n", str);
}
