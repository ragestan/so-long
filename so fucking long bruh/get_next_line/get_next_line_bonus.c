/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:56:39 by zbentalh          #+#    #+#             */
/*   Updated: 2022/10/31 18:02:26 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*line(char *str, int fd)
{
	char	*buffer;
	int		i;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
	{
		free (buffer);
		return (NULL);
	}
	i = 1;
	while (!ft_strchr(str, '\n') && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free (buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*next[2048];
	char		*l;

	l = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	next[fd] = line(next[fd], fd);
	if (next[fd] == NULL)
		return (NULL);
	l = ft_line(next[fd]);
	next[fd] = mzl(next[fd]);
	if (l[0] == '\0')
	{
		free (next[fd]);
		free (l);
		return (NULL);
	}
	return (l);
}
