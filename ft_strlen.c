/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:34:47 by vcodrean          #+#    #+#             */
/*   Updated: 2022/12/21 18:37:27 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_strlen( const char *str)
{
	int	size;

	size = 0;
	while (str && str[size])
	{
		++size;
	}
	return (size);
}