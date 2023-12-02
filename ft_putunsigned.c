/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:17 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 15:43:15 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *counteur)
{
	if (n >= 10)
	{
		ft_putunsigned(n / 10, counteur);
		ft_putunsigned(n % 10, counteur);
	}
	else
		ft_putchar(n + '0', counteur);
}
