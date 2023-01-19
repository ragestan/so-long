/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:16:19 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:30:51 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	ft_putnbr_u(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putnbr_u (n / 10);
		i += ft_putnbr_u (n % 10);
	}
	else
	{
		i += ft_putchar (n + 48);
	}
	return (i);
}
