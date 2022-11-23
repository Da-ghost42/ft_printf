/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:05:46 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/23 00:38:26 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int nb)
{
	long int	nbr;
	
	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar((nbr + 48));
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(((nbr % 10) + 48));
	}
	nbr = nb;
	return (ft_nbrlen(nbr, 10));
}
