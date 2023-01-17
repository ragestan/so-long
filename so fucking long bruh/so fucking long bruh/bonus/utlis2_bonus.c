/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:03:39 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/12 16:11:08 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_free_bonus(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	checke_valide_path_bonus(char **data, int i, int j, t_position g)
{
	flood_bonus(g.x, g.y, data, 'F');
	while (data[i] != '\0')
	{
		j = 0;
		while (data[i][j])
		{
			if (data[i][j] == 'C')
				err_path_bonus();
			j++;
		}
		i++;
	}
	i = 0;
	while (data[i])
	{
		j = 0;
		while (data[i][j])
		{
			help_bonus(data, i, j);
			j++;
		}
		i++;
	}
	ft_free_bonus(data);
}

t_position	hero_position_bonus(t_data *data, t_position g)
{
	int	i;
	int	j;
	int	z;

	z = 0;
	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			j++;
			if (data->map[i][j] == 'P')
			{
				z++;
				break ;
			}
		}
		if (z != 0)
			break ;
		i++;
	}
	g.x = i;
	g.y = j;
	return (g);
}

static size_t	ft_count_bonus(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_bonus(int n)
{
	char		*str;
	int			i;
	long int	j;

	j = n;
	i = ft_count_bonus(n);
	if (n < 0)
	{
		j = -j;
		i++;
	}
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = j % 10 + '0';
		j /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
