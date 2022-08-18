/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:37:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/18 15:41:54 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char				*ft_itoa(int n);
void    ft_str(char *str);
int ft_printstr(char *str);
int ft_printnbr(int n);
int ft_printchar(char c);
int ft_printhex(unsigned int num, const char convert);
int ft_printptr(unsigned long long ptr);
int ft_print_u(unsigned int nb);
int	ft_putchar(char c);

int ft_coversion(va_list args, const char convert);
int ft_printf(const char *str, ...);

#endif