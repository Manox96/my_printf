/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:35:34 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 16:52:25 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static void	handle(va_list args, const char *str, int *i, int *counter)
{
	if (str[*i] == '%')
		ft_putchar('%', counter);
	else if (str[*i] == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (str[*i] == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_putnbr(va_arg(args, int), counter);
	else if (str[*i] == 'x' || str[*i] == 'X')
		ft_puthex(va_arg(args, unsigned int), counter, str[*i]);
	else if (str[*i] == 'p')
	{
		ft_putstr("0x", counter);
		ft_putdrs(va_arg(args, unsigned long), counter);
	}
	else if (str[*i] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), counter);
	else if (str[*i] == '\0')
		return ;
	else
		ft_putchar(str[*i], counter);
	(*i)++;
}

int	ft_printf(const char *str, ...)
{
	va_list	allargs;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(allargs, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i++], &c);
		else
		{
			i++;
			handle(allargs, str, &i, &c);
		}
	}
	va_end(allargs);
	return (c);
}
