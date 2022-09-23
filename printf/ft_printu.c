/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:07:17 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/19 14:45:51 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(long nb)
{
	char	value;
	int		counter;

	counter = 0;
	if (nb == 0)
		return (write(1, "0", 1));
	else if (nb > 9)
	{
		counter += ft_printu(nb / 10);
		counter += ft_printu(nb % 10);
	}
	else
	{
		value = (nb + '0');
		counter += write(1, &value, 1);
	}
	return (counter);
}

// int main()
// {
//     unsigned int n = 123456;
//     printf("%u\n", ft_readu_len(n));
// }