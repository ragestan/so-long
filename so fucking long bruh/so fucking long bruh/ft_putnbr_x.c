/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:19:51 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:30:58 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	ft_putnbr_x(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 15)
	{
		i += ft_putnbr_x (n / 16);
		i += ft_putnbr_x (n % 16);
	}
	else if (n <= 9)
		i += ft_putchar (n + 48);
	else
		i += ft_putchar (n + 87);
	return (i);
}
