/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:49:03 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 08:10:22 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	treat_format(va_list ap, char format)
{
	int	p;

	p = 0;
	if (format == 'c')
		p = ft_putchar(va_arg(ap, int));
	else if (format == 's')
		p = ft_putstr(va_arg(ap, char *));
	else if (format == 'x' || format == 'X')
		p = ft_putnbr_b(va_arg(ap, unsigned int),format);
	else if (format == 'p')
		p = ft_putadd(va_arg(ap,unsigned int));
	else if (format == 'u' || format == 'i' || format == 'd')
		p = ft_putnbr(va_arg(ap, unsigned int));
	else if (format == '%')
		p = ft_putchar('%');
	else
		p = ft_putchar(format);
	return (p);
}
