/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:04:18 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 03:03:00 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putnbr_b(unsigned int nb, char format)
{
	char	*base;
	int		n;

	if (format == 'X')
		base = "123456789ABCDEF";
	if (format == 'x')
		base = "123456789abcdef";
	if (nb < 16)
		ft_putchar(base[nb]);
	if (nb >= 16)
	{
		ft_putnbr_b(nb / 16, format);
		ft_putnbr_b(nb % 16, format);
	}
	return (treatnb(nb, 16));
}
