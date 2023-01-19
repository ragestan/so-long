/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:19 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 17:21:45 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	cheker_collec_bonus(t_data *data)
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
	err_collec_bonus();
}

void	cheker_wall_bonus(t_data *data, int i, int j)
{
	while (data->map[0][j] != '\0')
	{
		if (data->map[0][j] != '1')
			err_wall_bonus();
		j++;
	}
	while (data->map[i])
	{
		if (data->map[i][j - 1] != '1')
			err_wall_bonus();
		i++;
	}
	while (j > 0)
	{
		j--;
		if (data->map[i - 1][j] != '1')
			err_wall_bonus();
	}
	while (i > 0)
	{
		i--;
		if (data->map[i][0] != '1')
			err_wall_bonus();
	}
}

void	ft_exit_check_bonus(t_data *data)
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
	put_str_bonus(data);
	write(1, "you won\n", 8);
	exit(0);
}

void	name_map_bonus(char *name)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c = ".ber";
	while (name[i])
		i++;
	i = i - 4;
	while (c[j])
	{
		if (c[j] != name[i])
		{
			write(2, "Error\n", 7);
			write(1, "the name of map must contain .ber\n", 35);
			exit(1);
		}
		i++;
		j++;
	}
	return ;
}

void	more_check(t_data *data)
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
			check_norm(data, i, j);
			j++;
		}
		i++;
	}
}
