/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:18:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/12 14:43:16 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"


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
       count =  ft_printchar(va_arg(args, int));
    else if(convert == 'd' || convert == 'i')
        count = ft_printnum(va_arg(args, int));
    else if (convert == '%')
        count = ft_printper();
    
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
            count = ft_coversion(args, str[i + 1]);
            i++;   
        }    
        else
            count = ft_printchar(str[i]);
        i++;
    }
    va_end(args);
    return(count);  
}