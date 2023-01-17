/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:12:12 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/14 20:08:47 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strdup_bonus(char *src)
{
	int		i;
	char	*dest;
	char	*j;

	i = 0;
	j = ((dest = (char *)malloc(ft_strlen((char *)src) * sizeof(char) + 1)));
	if (!j)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	help_bonus(char **data, int i, int j)
{
	if (data[i][j] == 'E')
	{
		if (data[i][j - 1] != 'F' && data[i][j + 1] != 'F' &&
			data[i - 1][j] != 'F' && data[i + 1][j] != 'F')
			err_path_bonus();
	}
	return ;
}

void	show_bonus(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr, i * 50, j
		* 50);
}

char	**maps_bonus(char *file, int x)
{
	char	**maps;
	char	*line;
	char	*lines;
	int		fd;

	lines = NULL;
	fd = open(file, O_RDONLY);
	maps = NULL;
	line = get_next_line(fd);
	while (line)
	{
		if (line[0] == '\n')
			err_first_bonus(line, lines);
		lines = ft_strjoin(lines, line);
		free(line);
		line = get_next_line(fd);
	}
	if (lines == NULL)
		err_map_bonus();
	while (lines[x])
		x++;
	if (lines[x - 1] == '\n')
		err_ll_bonus(lines);
	maps = ft_split_bonus(lines, '\n');
	return (free(lines), maps);
}

void	flood_bonus(int x, int y, char **data, char f)
{
	if (data[x][y] == 'P' || data[x][y] == '0' || data[x][y] == 'C')
	{
		data[x][y] = f;
		flood_bonus(x - 1, y, data, f);
		flood_bonus(x + 1, y, data, f);
		flood_bonus(x, y - 1, data, f);
		flood_bonus(x, y + 1, data, f);
	}
}
