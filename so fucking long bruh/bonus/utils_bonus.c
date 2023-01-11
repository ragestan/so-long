/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:12:12 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/11 16:13:18 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strdup(char *src)
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

void	help(char **data, int i, int j)
{
	if (data[i][j] == 'E')
	{
		if (data[i][j - 1] != 'F' && data[i][j + 1] != 'F' &&
			data[i - 1][j] != 'F' && data[i + 1][j] != 'F')
			err_path();
	}
	return ;
}

void	show(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr, i * 50, j
		* 50);
}

char	**maps(char *file, int x)
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
			err_first(line, lines);
		lines = ft_strjoin(lines, line);
		free(line);
		line = get_next_line(fd);
	}
	if (lines == NULL)
		err_map();
	while (lines[x])
		x++;
	if (lines[x - 1] == '\n')
		err_ll(lines);
	maps = ft_split(lines, '\n');
	return (free(lines), maps);
}

void	flood(int x, int y, char **data, char f)
{
	if (data[x][y] == 'P' || data[x][y] == '0' || data[x][y] == 'C' || data[x][y] == 'M')
	{
		data[x][y] = f;
		flood(x - 1, y, data, f);
		flood(x + 1, y, data, f);
		flood(x, y - 1, data, f);
		flood(x, y + 1, data, f);
	}
}
