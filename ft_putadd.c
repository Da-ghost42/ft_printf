/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:31:59 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/24 05:16:45 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(void *p)
{
	unsigned long	i;
	int				j;

	j = write(1, "0x", 2);
	if (p)
	{
		i = (unsigned long)p;
		j += ft_putnbr_base((unsigned long)p, 'x');
		return (j);
	}
	else
		j += write(1, "0", 1);
	return (j);
}
