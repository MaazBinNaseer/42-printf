/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:17:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/11 18:12:46 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

// Reading the string 
void ft_str(char *str)
{
    size_t  i;

    i   = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }    
}

//Printing the string 
int ft_printstr(char *str)
{
    size_t  i;
    
    i   = 0;
    if(str == NULL)
    {
        ft_str("null");
    }
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return(i);
}
