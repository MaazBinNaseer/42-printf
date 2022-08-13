/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:45 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/13 15:54:31 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_readptrlen(uintptr_t num)
{
    int len;

    len = 0;
    while(num != 0)
    {
        len++;
        num = num/16;
    }
    return (len);
}

void ft_putptr(uintptr_t num)
{
    if (num >= 16)
    {
        ft_putptr(num/16);
        ft_putptr(num%16);  
    }
    else
    {
        if(num <= 9)
            ft_putchar_fd((num + '0'), 0);
        else
            ft_putchar_fd((num - 10 + 'a'), 0);
    }
}

int ft_printptr(unsigned long long ptr)
{
    int print;
    print = 0; 
    print = write(1, "0x", 2);
    
    if(ptr == 0)
        print = write(1, "0", 1);
    else
    {
        ft_putptr(ptr);
        print = ft_readptrlen(ptr);
    }
    return (print);
}