/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:48:35 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:53:54 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	draw_help_bonus(t_data *data, int i, int j, t_position g)
{
	if (i != 0 && i != g.x && j != 0 && j != g.y)
	{
		data->img_ptr = mlx_xpm_file_to_image(data->mlx,
				"./textures/Wall1.xpm", &data->w_img, &data->h_img);
		put_er_img_bonus(data);
		show_bonus(data, j, i);
	}
	else
	{
		data->img_ptr = mlx_xpm_file_to_image(data->mlx,
				"./textures/Rock1.xpm", &data->w_img, &data->h_img);
		put_er_img_bonus(data);
		show_bonus(data, j, i);
	}
}

void	draw_help2_bonus(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/Wood1.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	draw_help3_bonus(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/Hero1.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	draw_help4_bonus(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/1-1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	draw_help5_bonus(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/door.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}
