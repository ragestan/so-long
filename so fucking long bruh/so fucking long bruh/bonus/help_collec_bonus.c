/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_collec_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:11:25 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:52:54 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	collec_yes(t_data *data, int i, int j, int k)
{
	if (data->map[i][j] == 'C' && k == 500)
		yes_help(data, i, j);
	if (data->map[i][j] == 'C' && k == 1000)
		yes_help1(data, i, j);
	if (data->map[i][j] == 'C' && k == 1500)
		yes_help2(data, i, j);
	if (data->map[i][j] == 'C' && k == 2000)
		yes_help3(data, i, j);
	if (data->map[i][j] == 'C' && k == 2500)
		yes_help4(data, i, j);
	if (data->map[i][j] == 'C' && k == 3000)
		yes_help5(data, i, j);
	if (data->map[i][j] == 'C' && k == 3500)
		yes_help6(data, i, j);
	else
		return ;
}

void	yes_help(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-1.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	yes_help1(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-2.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	yes_help2(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-3.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	yes_help3(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-4.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}
