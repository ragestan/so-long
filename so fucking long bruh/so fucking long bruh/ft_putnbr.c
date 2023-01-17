/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:29:08 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:31:08 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
	}
	else if (n < 0)
	{
		i += ft_putchar ('-');
		n = -n;
		i += ft_putnbr (n);
	}
	else if (n > 9)
	{
		i += ft_putnbr (n / 10);
		i += ft_putnbr (n % 10);
	}
	else
	{
		i += ft_putchar (n + 48);
	}
	return (i);
}
