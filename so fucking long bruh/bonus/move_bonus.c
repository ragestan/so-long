/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:46 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/11 15:08:24 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_str(t_data *data)
{
	static int	i;
	char		*tmp;

	tmp = ft_itoa(i++);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Rock1.xpm",
			&data->w_img, &data->h_img);
	show(data, 0, 0);
	mlx_string_put(data->mlx, data->win, 20, 20, 0x000000, tmp);
	free(tmp);
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
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Hero1.xpm",
				&data->w_img, &data->h_img);
		show(data, y + 1, x);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Wood1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x);
		put_str(data);
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
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Hero1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x + 1);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Wood1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x);
		put_str(data);
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
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Hero1.xpm",
				&data->w_img, &data->h_img);
		show(data, y - 1, x);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Wood1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x);
		put_str(data);
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
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Hero1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x - 1);
		data->img_ptr = mlx_xpm_file_to_image(data->mlx, "img/Wood1.xpm",
				&data->w_img, &data->h_img);
		show(data, y, x);
		put_str(data);
	}
}
