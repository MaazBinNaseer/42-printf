/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:18:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/18 15:59:53 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"


//Printing the godamn char 
int ft_printchar(char c)
{
    write(1, &c, 1);
    return (1);
}

//Conversion format
int ft_coversion(va_list args, const char convert)
{
    int count; 

    count = 0;    
    if (convert == 's')
       count =  ft_printstr(va_arg(args, char *));
    else if(convert == 'c')
       count += ft_printchar(va_arg(args, int));
    else if(convert == 'd' || convert == 'i')
        count = ft_printnbr(va_arg(args, int));
    else if (convert == '%')
        count = ft_printchar('%');
    else if(convert == 'p')
        count += ft_printptr(va_arg(args, unsigned long long));
    else if (convert == 'x' || convert == 'X')
        count = ft_printhex(va_arg(args, unsigned int), convert);
    else if (convert == 'u')
        count = ft_print_u(va_arg(args, unsigned int));
    else 
        count += ft_putchar(' ');
    return (count);
}

//Calling the printf function 
int ft_printf(const char *str, ...)
{
    int count;
    va_list args;
    int i;
    
    count = 0;
    va_start(args, str);
    i = 0;
    
    while(str[i])
    {
        if(str[i] == '%')
        {
            count += ft_coversion(args, str[i + 1]);
            i++;   
        }    
        else
            count += ft_printchar(str[i]);
        i++;
    }
    va_end(args);
    return(count);  
}

// int main(void)
// {
//     int i;
//     int j;

//     i = printf(" %c ", '0');
//     j = ft_printf(" %c ", '0');
    
//     printf("\n%d\n%d", i, j );
// }