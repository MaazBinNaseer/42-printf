/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:33:53 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/09/20 15:15:13 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

//Need to read the characters in the hex
int	ft_readhexlen(unsigned long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

// (1) Need to allocate the convert 'X' with hex
// (2) Then convert the numbers hex to be converted
// (3) Deal with characters that are less 9 and greater than 16
void	ft_puthex(unsigned long num, const char convert)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, convert);
		ft_puthex(num % 16, convert);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (convert == 'x')
				ft_putchar((num - 10 + 'a'));
			if (convert == 'X')
				ft_putchar((num - 10 + 'A'));
			if (convert == 'p')
				ft_putchar((num - 10 + 'a'));
		}
	}
}

int	ft_printhex(unsigned long num, const char convert)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, convert);
	return (ft_readhexlen(num));
}
