/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:17:31 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/22 05:47:23 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char format)
{
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	if (format == 'x')
		base = "0123456789abcdef";
	if (format == 'u')
		base = "0123456789";
	if (nb >= 0 && nb < (unsigned int)ft_strlen(base))
		ft_putchar(base[nb]);
	if (nb >= (unsigned int)ft_strlen(base))
	{
		ft_putnbr_base(nb / ((unsigned int)ft_strlen(base)), format);
		ft_putnbr_base(nb % ((unsigned int)ft_strlen(base)), format);
	}
	return (ft_nbrlen(nb, ft_strlen(base)));
}
