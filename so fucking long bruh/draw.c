/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:48:35 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/10 18:13:47 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_help(t_data *data, int i, int j, t_position g)
{
	if (i != 0 && i != g.x && j != 0 && j != g.y)
	{
		data->img_ptr = mlx_xpm_file_to_image(data->mlx,
				"img/Wall1.xpm", &data->w_img, &data->h_img);
		show(data, j, i);
	}
	else
	{
		data->img_ptr = mlx_xpm_file_to_image(data->mlx,
				"img/Rock1.xpm", &data->w_img, &data->h_img);
		show(data, j, i);
	}
}

void	draw_help2(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"img/Wood1.xpm", &data->w_img, &data->h_img);
	show(data, j, i);
}

void	draw_help3(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"img/Hero1.xpm", &data->w_img, &data->h_img);
	show(data, j, i);
}

void	draw_help4(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Dollar.xpm",
			&data->w_img, &data->h_img);
	show(data, j, i);
}

void	draw_help5(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/door.xpm",
			&data->w_img, &data->h_img);
	show(data, j, i);
}
