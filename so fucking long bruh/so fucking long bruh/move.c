/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:46 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/15 21:01:13 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_str(void)
{
	static int	i;

	ft_printf("the number of movement is : %i\n", i++);
}

void	move_help(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x][y + 1] == 'E')
	{
		ft_exit_check(data);
		return ;
	}
	if (data->map[x][y + 1] != '1')
	{
		data->map[x][y] = '0';
		data->map[x][y + 1] = 'P';
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Hero1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y + 1, x);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Wood1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x);
		put_str();
	}
}

void	move_help2(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x + 1][y] == 'E')
	{
		ft_exit_check(data);
		return ;
	}
	if (data->map[x + 1][y] != '1')
	{
		data->map[x][y] = '0';
		data->map[x + 1][y] = 'P';
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Hero1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x + 1);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Wood1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x);
		put_str();
	}
}

void	move_help3(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x][y - 1] == 'E')
	{
		ft_exit_check(data);
		return ;
	}
	if (data->map[x][y - 1] != '1')
	{
		data->map[x][y] = '0';
		data->map[x][y - 1] = 'P';
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Hero1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y - 1, x);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Wood1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x);
		put_str();
	}
}

void	move_help4(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x - 1][y] == 'E')
	{
		ft_exit_check(data);
		return ;
	}
	if (data->map[x - 1][y] != '1')
	{
		data->map[x][y] = '0';
		data->map[x - 1][y] = 'P';
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Hero1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x - 1);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "textures/Wood1.xpm",
				&data->w_img, &data->h_img);
		put_er_img(data);
		show(data, y, x);
		put_str();
	}
}
