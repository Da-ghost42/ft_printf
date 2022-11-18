/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:21:31 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 08:07:49 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putadd(void *p)
{
	unsigned long	i;
	int				j;

	j = write(1,"0x",2);
	if (p)
	{
		i = (unsigned long)p;
		j += ft_putnbr_b(i, 'x');
		return (j);
	}
	else 
		j += write(1, "0", 1);
		return (j);
}
