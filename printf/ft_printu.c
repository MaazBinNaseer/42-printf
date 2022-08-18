/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:07:17 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/18 12:30:27 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_readu_len(unsigned int num)
{
    int len; 
    
    len = 0;
    if(num != 0)
    {
        len++;
        num = num /10;
    }
    return (len);
}

int ft_print_u(unsigned int nb)
{
    char value; 
    
    if(nb == 0)
        return (write(1, "0", 1));
    else if(nb >= 10)
         ft_print_u(nb/10);
    nb = nb % 10; 
    value = (nb + '0');
    write(1, &value, 1);
    
    return(ft_readu_len(nb));     
}