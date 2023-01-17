/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:41 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/12 16:04:54 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	err_wall_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "map must be surrounded by wall\n", 32);
	exit(1);
}

void	err_collec_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain at least 1 collectible\n", 45);
	exit(1);
}

void	err_exit_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain a 1 exit\n", 31);
	exit(1);
}

void	err_player_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must contain a 1 starting position\n", 44);
	exit(1);
}

void	err_map_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}
