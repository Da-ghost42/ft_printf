/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:47:08 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/23 00:39:33 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

int ft_printf(const char *format,...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int ft_strlen(char *s);
int	ft_nbrlen(long long int nb,int base);
int	ft_putnbr_base(unsigned int nb, char format);
int	ft_putnbr(int nb);
int	ft_putadd(void *p);
#endif
