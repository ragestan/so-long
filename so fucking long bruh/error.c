/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:41 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/09 17:38:35 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_wall(void)
{
	write(2, "Error\n", 7);
	write(2, "map must be surrounded by wall\n", 32);
	exit(1);
}

void	err_collec(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain at least 1 collectible\n", 45);
	exit(1);
}

void	err_exit(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain a 1 exit\n", 31);
	exit(1);
}

void	err_player(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain a 1 starting position\n", 44);
	exit(1);
}

void	err_map(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}
