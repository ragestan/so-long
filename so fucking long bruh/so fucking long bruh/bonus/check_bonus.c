/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:26 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 16:59:40 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_all_bonus(t_data *data, t_position g)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	more_check(data);
	cheker_map_bonus(data);
	cheker_wall_bonus(data, 0, 0);
	cheker_collec_bonus(data);
	cheker_exit_bonus(data);
	cheker_player_bonus(data);
	check_map2_bonus(data);
	checke_valide_path_bonus(double_map_bonus(data), i, j, g);
}

void	check_map2_bonus(t_data *data)
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
				&& data->map[i][j] != '1' && data->map[i][j] != 'M')
				err_map2_bonus();
			j++;
		}
		i++;
	}
}

void	cheker_map_bonus(t_data *data)
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
			err_map_bonus();
		i++;
	}
	if (i != 0 && j != 0)
		return ;
	err_map_bonus();
}

void	cheker_player_bonus(t_data *data)
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
	err_player_bonus();
}

void	cheker_exit_bonus(t_data *data)
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
	err_exit_bonus();
}
