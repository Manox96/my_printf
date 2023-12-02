/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:32 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/02 16:52:49 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_putnbr(int n, int *counter);
void	ft_puthex(unsigned int n, int *counter, char sign);
void	ft_putdrs(unsigned long adr, int *counter);
void	ft_putunsigned(unsigned int n, int *counteur);

#endif
