/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:48:57 by vcodrean          #+#    #+#             */
/*   Updated: 2023/01/03 13:59:53 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nr, char *base)
{
	int		nr_base[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nr == 0)
		result += ft_putchar('0');
	while (nr)
	{
		nr_base[i] = nr % 16;
		nr = nr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nr_base[i]]);
	return (result);
}
