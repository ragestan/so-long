/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enm_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:59:56 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/16 16:06:58 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	u_lose_bonus(void)
{
	write(1, "game over you lose\n", 20);
	exit(0);
}

t_enm	*ha(t_data *data, t_enm *tmp)
{
	if (data->map[tmp->i][tmp->j - 1] == 'P' && tmp->r == 0)
		idk_help(data, tmp);
	else if (data->map[tmp->i][tmp->j - 1] == '0' && tmp->r == 0)
		tmp = idk_help1(data, tmp);
	else if (data->map[tmp->i][tmp->j + 1] == 'P' && tmp->r == 1)
		idk_help2(data, tmp);
	else if (data->map[tmp->i][tmp->j + 1] == '0' && tmp->r == 1)
		tmp = idk_help3(data, tmp);
	if (data->map[tmp->i][tmp->j - 1] == '1' || data->map[tmp->i][tmp->j
		- 1] == 'C' || data->map[tmp->i][tmp->j - 1] == 'E'
		|| data->map[tmp->i][tmp->j - 1] == 'M')
		tmp->r = 1;
	else if (data->map[tmp->i][tmp->j + 1] == '1' || data->map[tmp->i][tmp->j
			+ 1] == 'C' || data->map[tmp->i][tmp->j + 1] == 'E'
			|| data->map[tmp->i][tmp->j + 1] == 'M')
		tmp->r = 0;
	return (tmp);
}

int	idk_bonus(t_data *data, t_enm **a)
{
	static int	k;
	t_enm		*tmp;

	tmp = *a;
	if (k++ == 3000)
	{
		while (tmp)
		{
			tmp = ha(data, tmp);
			tmp = tmp->next;
		}
		k = 0;
	}
	return (0);
}
