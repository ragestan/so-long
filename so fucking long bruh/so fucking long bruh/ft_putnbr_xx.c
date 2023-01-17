/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:37:48 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:31:04 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	ft_putnbr_xx(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 15)
	{
		i += ft_putnbr_xx (n / 16);
		i += ft_putnbr_xx (n % 16);
	}
	else if (n <= 9)
		i += ft_putchar (n + 48);
	else
		i += ft_putchar (n + 55);
	return (i);
}
