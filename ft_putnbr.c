/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:15:59 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 02:17:29 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putnbr(unsigned long int nb)
{
	unsigned long int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	else
		nbr = (unsigned long int)nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10 + 48));
	return (treatnb(nb, 10));
}
