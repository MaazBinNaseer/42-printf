// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/08/11 17:54:03 by mbin-nas          #+#    #+#             */
// /*   Updated: 2022/08/15 14:55:11 by mbin-nas         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include "ft_printf.h"

// #define RED "\x1b[31m"
// #define GREEN "\x1b[32m"
// #define YELLOW "\x1b[33m"
// #define PURPLE "\x1b[35m"
// #define WHITE  "\x1B[37m" 

// int main(void)
// {
//     //Printing the char 
//     char c = 'x';
//     printf(PURPLE "------------ Printing a character -----------\n");
//     printf(RED "Original Printf: %c\n", c);
//     ft_printf(YELLOW "My print: %c\n",c);
    
//     //Printing the string
//     char str[] = "We are printing the string"; 
//     printf(PURPLE "------------ Printing a string -----------\n");
//     printf(RED "Original Printf: %s\n", str);
//     ft_printf(YELLOW "%s\n", str);

//     //Printing the numbers
//     int n = 1234567;
//     printf(PURPLE "----------- Printing a number -------------\n");
//     printf(RED "Original Printf: %d\n", n);
//     ft_printf(YELLOW "My printf: %d\n", n);
    
//    // Printing the percentage 
//     printf(PURPLE "---------- Printing a percentage ----------\n");
//     printf(RED "Original Printf: %%\n");   
//     ft_printf(YELLOW "My printf: %%\n");
    
//     //Printing the hexadecimal --- Test 1 -- More than 16
//     int a = 36453;
//     int b = 0; 
//     int d = 6;
    
//     printf(PURPLE "---------- Printing a hexadecimal ----------\n");
//     printf(RED "Original Printf - Small x: %x\n", a);
//     printf(RED "Original Printf - Big X: %X\n", a); 
//     ft_printf(YELLOW "My printf: Small x: %x\n", a);
//     ft_printf(YELLOW "My printf: Big X: %X\n", a);
//     // ----- Test 2 for 0
//     printf(WHITE "- Test 2 - 0 -\n");
//     printf(RED "Original Printf - Small x: %x\n", b);
//     printf(RED "Original Printf - Big X: %X\n", b); 
//     ft_printf(YELLOW "My printf: Small x: %x\n", b);
//     ft_printf(YELLOW "My printf: Big X: %X\n", b);
//     // ----- Test 3 for less 9
//     printf(WHITE "- Test 3 - less than 9 -\n");
//     printf(RED "Original Printf - Small x: %x\n", d);
//     printf(RED "Original Printf - Big X: %X\n", d); 
//     ft_printf(YELLOW "My printf: Small x: %x\n", d);
//     ft_printf(YELLOW "My printf: Big X: %X\n", d);
    
//     //Printing a pointer expression 
//     int lol = 12345;
//     int *ptr = &lol;
//     // char st
//     printf(PURPLE "---------- Printing a pointer ----------\n");
//     printf(RED "Original Printf: %p\n", ptr); 
//     ft_printf(YELLOW "My printf: %p\n", ptr);

//     //Printing a %u 
//     unsigned int num = 3000000000;
//     printf(PURPLE "---------- Printing a unsigned long ----------\n");
//     printf(RED "Original Printf: %u\n", num); 
//     ft_printf(YELLOW "My printf: %u\n", num);
    
//     return(0);

// }