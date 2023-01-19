/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:27:34 by vcodrean          #+#    #+#             */
/*   Updated: 2023/01/19 11:25:42 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen( const char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_print_ptr(uintptr_t ptr);
int		ft_putnbr(int n);
int		ft_print_unsigned(unsigned int num);
int		ft_print_hex(unsigned int nr, char *base);

#endif