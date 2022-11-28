/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:37:21 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/24 01:10:31 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	spec_treater(va_list arg, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(arg, int));
	else if (format == 'u' || format == 'X' || format == 'x')
		len = ft_putnbr_base(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		len = ft_putadd(va_arg(arg, void *));
	else
		len = ft_putchar(format);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	va_list			arg;
	int				j;

	i = 0;
	j = 0;
	va_start(arg, format);
	while (format[j] && j < ft_strlen((char *)format))
	{
		while (format[j] != '%' && j < ft_strlen((char *)format))
		{
			i += ft_putchar(format[j]);
			j++;
		}
		if (format[j] && format[j] == '%' && j < ft_strlen((char *)format))
		{
			i += spec_treater(arg, format [j + 1]);
			j++;
		}
		j++;
	}
	va_end(arg);
	return (i);
}
