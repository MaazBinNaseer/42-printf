/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:37:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/12 14:08:03 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include "libft.h"
#include <stdarg.h>
#include <unistd.h>



char				*ft_itoa(int n);
void    ft_str(char *str);
int ft_printstr(char *str);
int ft_printper(void);
int ft_printnum(int n);
int ft_printchar(char c);

int ft_coversion(va_list args, const char convert);
int ft_printf(const char *, ...);

#endif