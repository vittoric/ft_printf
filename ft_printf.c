/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:15:38 by vcodrean          #+#    #+#             */
/*   Updated: 2022/12/19 17:29:54 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	converter(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
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
			length += converter(args, format[i + 1]);
			i++;
		}
		else
			length += ft_print_char(format[i]);
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
    ft_printf("El caracter es %c\n", c);
    printf("El caracter es %c\n", c);
}
