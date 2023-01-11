/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:26 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/10 18:26:17 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_all(t_data *data, t_position g)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	cheker_map(data);
	cheker_wall(data, 0, 0);
	cheker_collec(data);
	cheker_exit(data);
	cheker_player(data);
	check_map2(data);
	checke_valide_path(double_map(data), i, j, g);
}

void	check_map2(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] != 'P' && data->map[i][j] != 'C'
				&& data->map[i][j] != 'E' && data->map[i][j] != '0'
				&& data->map[i][j] != '1')
				err_map2();
			j++;
		}
		i++;
	}
}

void	cheker_map(t_data *data)
{
	int	i;
	int	j;
	int	z;

	j = 0;
	i = 0;
	z = 0;
	while (data->map[i] != '\0')
	{
		j = 0;
		while (data->map[i][j] != '\0')
			j++;
		if (z == 0)
			z = j;
		else if (z != j)
			err_map();
		i++;
	}
	if (i != j && i != 0 && j != 0)
		return ;
	err_map();
}

void	cheker_player(t_data *data)
{
	int	j;
	int	i;
	int	z;

	i = 0;
	z = 0;
	j = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
				z++;
			j++;
		}
		i++;
	}
	if (z == 1)
		return ;
	err_player();
}

void	cheker_exit(t_data *data)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	z = 0;
	j = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'E')
				z++;
			j++;
		}
		i++;
	}
	if (z == 1)
		return ;
	err_exit();
}
