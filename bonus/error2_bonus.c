/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:46 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:45:40 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	err_map2_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must only contain \"P C E 0 1\" to be valide\n", 52);
	exit(1);
}

void	err_path_bonus(void)
{
	write(2, "Error\n", 7);
	write(2, "there\'s no valid path in the map\n", 34);
	exit(1);
}

void	err_first_bonus(char *line, char *lines)
{
	free(line);
	if (lines != NULL)
		free(lines);
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}

void	err_ll_bonus(char *lines)
{
	free(lines);
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}

void	put_er_img_bonus(t_data *data)
{
	if (!data->img_ptr)
	{
		write(2, "Error\n", 7);
		write(1, "Img does not exist\n", 20);
		exit(1);
	}
}
