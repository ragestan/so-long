/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_enm_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:47:41 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:52:16 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	idk_help(t_data *data, t_enm *a)
{
	data->map[a->i][a->j] = '0';
	data->map[a->i][a->j - 1] = 'M';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/chamchon.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j - 1, a->i);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j, a->i);
	u_lose_bonus();
}

t_enm	*idk_help1(t_data *data, t_enm *a)
{
	data->map[a->i][a->j] = '0';
	data->map[a->i][a->j - 1] = 'M';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/chamchon.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j - 1, a->i);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j, a->i);
	a->j--;
	return (a);
}

void	idk_help2(t_data *data, t_enm *a)
{
	data->map[a->i][a->j] = '0';
	data->map[a->i][a->j + 1] = 'M';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/chamchon.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j + 1, a->i);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j, a->i);
	u_lose_bonus();
}

t_enm	*idk_help3(t_data *data, t_enm *a)
{
	data->map[a->i][a->j] = '0';
	data->map[a->i][a->j + 1] = 'M';
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/chamchon.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j + 1, a->i);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Wood1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, a->j, a->i);
	a->j++;
	return (a);
}
