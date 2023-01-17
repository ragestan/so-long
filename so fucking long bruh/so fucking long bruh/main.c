/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:34 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 15:00:45 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_position	ft_w_and_h(t_data *data)
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

int	draw(t_data *data, t_position g)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == '1')
				draw_help(data, i, j, g);
			if (data->map[i][j] == '0')
				draw_help2(data, i, j);
			if (data->map[i][j] == 'P')
				draw_help3(data, i, j);
			if (data->map[i][j] == 'C')
				draw_help4(data, i, j);
			if (data->map[i][j] == 'E')
				draw_help5(data, i, j);
			j++;
		}
		i++;
	}
	return (0);
}

int	move(int keycode, t_data *data)
{
	t_position	g;

	g = ft_w_and_h(data);
	g = hero_position(data, g);
	if (keycode == 53)
		exit(0);
	if (keycode == 2)
		move_help(data, g);
	else if (keycode == 1)
		move_help2(data, g);
	if (keycode == 0)
		move_help3(data, g);
	else if (keycode == 13)
		move_help4(data, g);
	return (0);
}

char	**double_map(t_data *data)
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
		str[i] = ft_strdup(data->map[i]);
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
		name_map(av[1]);
		data.map = maps(av[1], 0);
		g = ft_w_and_h(&data);
		data.mlx = mlx_init();
		data.win = mlx_new_window(data.mlx, (data.w) * 50, (data.h) * 50,
				"zbentalh");
		data.h_img = 50;
		data.w_img = 50;
		draw(&data, g);
		g = hero_position(&data, g);
		check_all(&data, g);
		put_str();
		mlx_hook(data.win, 2, 0, move, &data);
		mlx_hook(data.win, 17, 0, (void *)exit, &data);
		mlx_loop(data.mlx);
	}
	return (0);
}
