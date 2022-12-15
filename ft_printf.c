/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:15:38 by vcodrean          #+#    #+#             */
/*   Updated: 2022/12/15 17:46:42 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_print_char(int c)
{
    write(1, &c, 1);
    return(1);
}

/*int ft_converter(va_list args, const char format)
{
  
	
}*/

int ft_printf(char const *format, ...)
{
    int     i;
    va_list     pr_unk;
    int     lenght;
    
    char c;
    i = 0;
    lenght = 0;
    va_start(pr_unk, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            printf("HOLA %c\n", c);
            //lenght += ft_converter(pr_unk, format[i + 1]);
            //i++;
        }
        else
            lenght += ft_print_char(format[i]);
            i++;
    }
    va_end(pr_unk);
    return (lenght);
}

int main (void)
{
    char *str;
    int n;
    char c;
    unsigned int un;

    c = 'a';
    ft_printf("(ft_printf)El caracter es %c\n", c);
    printf("(Original)El caracter es %c\n", c);
}

 //type i = va_arg(pr_ink, type)