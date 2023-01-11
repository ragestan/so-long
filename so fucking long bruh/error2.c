/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:11:46 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/10 14:07:22 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_map2(void)
{
	write(2, "Error\n", 7);
	write(2, "The map must only contain \"P C E 0 1\" to be valide\n", 52);
	exit(1);
}

void	err_path(void)
{
	write(2, "Error\n", 7);
	write(2, "there\'s no valid path in the map\n", 34);
	exit(1);
}

void	err_first(char *line, char *lines)
{
	free(line);
	if (lines != NULL)
		free(lines);
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}

void	err_ll(char *lines)
{
	free(lines);
	write(2, "Error\n", 7);
	write(2, "The map must be rectangular\n", 29);
	exit(1);
}
