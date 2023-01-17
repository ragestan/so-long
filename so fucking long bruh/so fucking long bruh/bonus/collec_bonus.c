/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collec_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:08:37 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 13:53:09 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	collec_move(t_data *data)
{
	int				i;
	int				j;
	static int		k;
	static t_enm	*a;

	i = 0;
	if (k == 0)
		test(data, &a);
	k++;
	idk_bonus(data, &a);
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			collec_yes(data, i, j, k);
			if (k == 3500)
				k = 1;
			j++;
		}
		i++;
	}
	return (0);
}

void	yes_help4(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-5.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	yes_help5(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-6.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	yes_help6(t_data *data, int i, int j)
{
	data->img_ptr = mlx_xpm_file_to_image(data->mlx,
			"./textures/1-7.xpm", &data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, j, i);
}

void	draw_idk(t_data *data, int i, int j, t_position g)
{
	if (data->map[i][j] == '1')
		draw_help_bonus(data, i, j, g);
	if (data->map[i][j] == '0')
		draw_help2_bonus(data, i, j);
	if (data->map[i][j] == 'P')
		draw_help3_bonus(data, i, j);
	if (data->map[i][j] == 'C')
		draw_help4_bonus(data, i, j);
	if (data->map[i][j] == 'E')
		draw_help5_bonus(data, i, j);
	if (data->map[i][j] == 'M')
		draw_help6_bonus(data, i, j);
}
