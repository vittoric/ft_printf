/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:31:20 by vcodrean          #+#    #+#             */
/*   Updated: 2023/01/19 11:26:14 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen( const char *str);

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	return (write(1, str, len));
}
