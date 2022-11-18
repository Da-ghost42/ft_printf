/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:17:06 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 08:23:38 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		j;

	va_start(arg, s);
	i = 0;
	j = 0;
	while (s[i] && i < ft_strlen(s))
	{
		while (s[i] && s[i] != '%' && i < ft_strlen(s))
		{	
			if (ft_putchar(s[i]) < 0)
				return (-1);
			i++;
			j++;
		}
		if (s[i] == '%' && i < ft_strlen(s))
		{
			j += treat_format(arg, s[i + 1]);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (j);
}
int main()
{
	char *p = "hello";
	printf("%% ->%%-> %%-> %% ->%%\n");
	ft_printf("%% ->%%-> %%-> %% ->%%\n");
}