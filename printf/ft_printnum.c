/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:23:07 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/11 18:28:12 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_printnum(int n)
{
    int len; 
    char *number; 

    len = 0;
    number = ft_itoa(n);
    len = ft_printstr(number);
    free(number);
    return (len);
   
}