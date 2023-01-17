/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:34 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/15 17:37:30 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_position	ft_w_and_h_bonus(t_data *data)
{
	int			i;
	t_position	g;

	i = 0;
	data->w = ft_strlen(data->map[0]);
	while (data->map[i])
		i++;
	data->h = i;
	g.x = i - 1;
	g.y = ft_strlen(data->map[0]) - 1;
	return (g);
}

int	draw_bonus(t_data *data, t_position g)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			draw_idk(data, i, j, g);
			j++;
		}
		i++;
	}
	return (0);
}

int	move_bonus(int keycode, t_data *data)
{
	t_position	g;

	g = ft_w_and_h_bonus(data);
	g = hero_position_bonus(data, g);
	if (keycode == 53)
		exit(0);
	if (keycode == 2)
		move_help_bonus(data, g);
	else if (keycode == 1)
		move_help2_bonus(data, g);
	if (keycode == 0)
		move_help3_bonus(data, g);
	else if (keycode == 13)
		move_help4_bonus(data, g);
	return (0);
}

char	**double_map_bonus(t_data *data)
{
	char	**str;
	int		i;

	i = 0;
	while (data->map[i])
		i++;
	str = malloc((i + 1) * (sizeof(char *)));
	i = 0;
	while (data->map[i])
	{
		str[i] = ft_strdup_bonus(data->map[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(int ac, char **av)
{
	t_data		data;
	t_position	g;

	if (ac == 2)
	{
		data.map = maps_bonus(av[1], 0);
		g = ft_w_and_h_bonus(&data);
		data.mlx = mlx_init();
		data.win = mlx_new_window(data.mlx, (data.w) * 50, (data.h) * 50,
				"zbentalh");
		data.h_img = 50;
		data.w_img = 50;
		draw_bonus(&data, g);
		put_str_bonus(&data);
		g = hero_position_bonus(&data, g);
		check_all_bonus(&data, g);
		mlx_hook(data.win, 2, 0, move_bonus, &data);
		mlx_hook(data.win, 17, 0, (void *)exit, &data);
		mlx_loop_hook(data.mlx, collec_move, &data);
		mlx_loop(data.mlx);
	}
	return (0);
}
