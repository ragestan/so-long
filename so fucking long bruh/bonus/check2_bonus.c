/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:19 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/11 16:42:09 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	cheker_collec(t_data *data)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'C')
				return ;
			j++;
		}
		i++;
	}
	err_collec();
}

void	cheker_wall(t_data *data, int i, int j)
{
	while (data->map[0][j] != '\0')
	{
		if (data->map[0][j] != '1')
			err_wall();
		j++;
	}
	while (data->map[i])
	{
		if (data->map[i][j - 1] != '1')
			err_wall();
		i++;
	}
	while (j > 0)
	{
		j--;
		if (data->map[i - 1][j] != '1')
			err_wall();
	}
	while (i > 0)
	{
		i--;
		if (data->map[i][0] != '1')
			err_wall();
	}
}

void	ft_exit_check(t_data *data)
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
			if (data->map[i][j] == 'C')
				return ;
			j++;
		}
		i++;
	}
	put_str(data);
	write(1, "you won\n", 8);
	exit(1);
}
