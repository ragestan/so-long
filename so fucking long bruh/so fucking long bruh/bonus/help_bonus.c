/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:42:39 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:47:05 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	draw_help6_bonus(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/chamchon.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}
