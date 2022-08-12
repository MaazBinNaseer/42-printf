/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:54:03 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/12 15:00:30 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define PURPLE "\x1b[35m"

int main(void)
{
    //Printing the string
    char str[] = "We are printing the string"; 
    printf(PURPLE "--------------------------------\n");
    printf( RED "Original Printf: %s\n", str);
    ft_printf(YELLOW "%s\n", str);

    //Printing the numbers
    int n = 1234567;
    printf(PURPLE "--------------------------------\n");
    printf( RED "Original Printf: %d\n", n);
    ft_printf(YELLOW "My printf: %d\n", n);
    
    // Printing the percentage 
    printf(PURPLE "--------------------------------\n");
    printf( RED "Original Printf: %% \n");
    ft_printf(YELLOW "\nMy printf: %% \n", ft_printper());
    
    
    return(0);

}