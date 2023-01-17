/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:46 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 20:15:13 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_str_bonus(t_data *data)
{
	static int	i;
	char		*tmp;

	tmp = ft_itoa_bonus(i++);
	data->img_ptr = mlx_xpm_file_to_image(data->mlx, "./textures/Rock1.xpm",
			&data->w_img, &data->h_img);
	put_er_img_bonus(data);
	show_bonus(data, 0, 0);
	mlx_string_put(data->mlx, data->win, 20, 20, 0x000000, tmp);
	free(tmp);
}

void	move_help_bonus(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x][y + 1] == 'M')
		u_lose_bonus();
	if (data->map[x][y + 1] == 'E')
	{
		ft_exit_check_bonus(data);
		return ;
	}
	if (data->map[x][y + 1] != '1')
		move_norm(data, x, y);
}

void	move_help2_bonus(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x + 1][y] == 'M')
		u_lose_bonus();
	if (data->map[x + 1][y] == 'E')
	{
		ft_exit_check_bonus(data);
		return ;
	}
	if (data->map[x + 1][y] != '1')
		move_norm2(data, x, y);
}

void	move_help3_bonus(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x][y - 1] == 'M')
		u_lose_bonus();
	if (data->map[x][y - 1] == 'E')
	{
		ft_exit_check_bonus(data);
		return ;
	}
	if (data->map[x][y - 1] != '1')
		move_norm3(data, x, y);
}

void	move_help4_bonus(t_data *data, t_position g)
{
	int	x;
	int	y;

	x = g.x;
	y = g.y;
	if (data->map[x - 1][y] == 'M')
		u_lose_bonus();
	if (data->map[x - 1][y] == 'E')
	{
		ft_exit_check_bonus(data);
		return ;
	}
	if (data->map[x - 1][y] != '1')
		move_norm4(data, x, y);
}
