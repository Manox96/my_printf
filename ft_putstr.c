/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:11 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 15:43:11 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *counter)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		(*counter)++;
		i++;
	}
}
