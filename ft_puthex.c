/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:23 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 15:43:46 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int *counter, char sign)
{
	char	*base;

	if (sign == 'x')
		base = "0123456789abcdef" ;
	else if (sign == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_puthex(n / 16, counter, sign);
		ft_puthex(n % 16, counter, sign);
	}
	else
		ft_putchar(base[n], counter);
}
