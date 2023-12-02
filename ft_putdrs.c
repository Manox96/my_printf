/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:26 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 15:49:01 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdrs(unsigned long adr, int *counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (adr >= 16)
	{
		ft_putdrs(adr / 16, counter);
		ft_putdrs(adr % 16, counter);
	}
	else
		ft_putchar(base[adr], counter);
}
