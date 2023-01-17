/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:18:56 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:30:48 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	ft_putnbr_a(size_t n)
{
	unsigned int	i;

	i = 0;
	if (n > 15)
	{
		i += ft_putnbr_a (n / 16);
		i += ft_putnbr_a (n % 16);
	}
	else if (n <= 9)
		i += ft_putchar (n + 48);
	else
		i += ft_putchar (n + 87);
	return (i);
}
