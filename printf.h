/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:49:18 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/18 08:18:28 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

int	ft_printf(const char *format, ...);
int	treat_format(va_list ap, char format);
int	ft_putnbr(unsigned long int nb);
int	ft_putnbr_b(unsigned int nb, char format);
int	ft_putchar(char f);
int	treatnb(int nb, int base);
int	ft_strlen(const char *s);
int	ft_putstr(char *f);
int	ft_putadd(void *p);

#endif