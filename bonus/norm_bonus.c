/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:59:25 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:23:18 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_norm(t_data *data, int x, int y)
{
	data->map[x][y] = '0';
	data->map[x][y + 1] = 'P';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Hero1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y + 1, x);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x);
	put_str_bonus(data);
}

void	move_norm2(t_data *data, int x, int y)
{
	data->map[x][y] = '0';
	data->map[x + 1][y] = 'P';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Hero1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x + 1);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x);
	put_str_bonus(data);
}

void	move_norm3(t_data *data, int x, int y)
{
	data->map[x][y] = '0';
	data->map[x][y - 1] = 'P';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Hero1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y - 1, x);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x);
	put_str_bonus(data);
}

void	move_norm4(t_data *data, int x, int y)
{
	data->map[x][y] = '0';
	data->map[x - 1][y] = 'P';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Hero1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x - 1);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, y, x);
	put_str_bonus(data);
}

void	check_norm(t_data *data, int i, int j)
{
	if (data->map[i][j] == 'P' && data->map[i][j + 1] == 'M')
		err_path_bonus();
	if (data->map[i][j] == 'P' && data->map[i][j - 1] == 'M'
			&& data->map[i][j - 2] == '1')
		err_path_bonus();
	if (data->map[i][j] == 'P' && data->map[i][j - 1] == 'M'
			&& data->map[i][j - 2] == 'E')
		err_path_bonus();
	if (data->map[i][j] == 'P' && data->map[i][j - 1] == 'M'
			&& data->map[i][j - 2] == 'C')
		err_path_bonus();
	if (data->map[i][j] == 'P' && data->map[i][j - 1] == 'M'
			&& data->map[i][j - 2] == 'M')
		err_path_bonus();
}
