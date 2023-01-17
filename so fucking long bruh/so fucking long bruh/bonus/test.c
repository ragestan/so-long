/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:53:32 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/15 18:43:51 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_enm	*ft_lst(int i, int j, int r)
{
	t_enm	*l;

	l = malloc(sizeof(t_enm));
	if (!l)
		return (0);
	else
	{
		l->i = i;
		l->j = j;
		l->r = r;
		l->next = NULL;
		return (l);
	}
}

void	ft_lstadd_back(t_enm **lst, t_enm *new)
{
	t_enm	*ptr;

	if (lst)
	{
		if (*lst)
		{
			ptr = ft_lstlast(*lst);
			ptr->next = new;
		}
		else
			*lst = new;
	}
}

t_enm	*ft_lstlast(t_enm *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	test(t_data *data, t_enm **a)
{
	int		i;
	int		j;
	int		r;
	t_enm	*next;

	i = 0;
	r = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'M')
			{
				if (data->map[i][j - 1] == '1' || data->map[i][j - 1] == 'C'
					|| data->map[i][j - 1] == 'E' || data->map[i][j - 1] == 'M')
					r = 1;
				next = ft_lst(i, j, r);
				ft_lstadd_back(a, next);
			}
			j++;
		}
		i++;
	}
}
