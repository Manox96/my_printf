/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:08 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 15:43:07 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *counteur)
{
	unsigned int	nb;

	nb = 0;
	if (n < 0)
	{
		ft_putchar('-', counteur);
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, counteur);
		ft_putnbr(nb % 10, counteur);
	}
	else
		ft_putchar(nb + '0', counteur);
}
