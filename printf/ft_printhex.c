/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:33:53 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/13 15:29:07 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

//Need to read the characters in the hex
int ft_readhexlen(unsigned int n)
{
    int len; 

    len = 0;
    while(n != 0)
    {
        len++;
        n = n /16;
    }
    return (len);    
}

// (1) Need to allocate the convert 'X' with hex 
// (2) Then convert the numbers hex to be converted 
// (3) Deal with characters that are less 9 and greater than 16
void ft_puthex(unsigned int num, const char convert)
{
    if(num >= 16)
    {
        ft_puthex(num/16, convert);
        ft_puthex(num%16, convert);
    }
    else 
    {
        if(num <= 9)
            ft_putchar_fd((num + '0'), 0);
        else
        {
            if(convert == 'x')
                ft_putchar_fd((num - 10 + 'a'), 0);
            if(convert == 'X')
                ft_putchar_fd((num - 10 + 'A'), 0);
        }       
    }   
}
//Printing the characters of hex and hardcode 0
int ft_printhex(unsigned int num, const char convert)
{
    if(num == 0)
        return (write(1, "0", 1));
    else
        ft_puthex(num, convert);
        
    return(ft_readhexlen(num));
}