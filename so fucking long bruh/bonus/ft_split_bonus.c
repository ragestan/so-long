/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:13:56 by zbentalh          #+#    #+#             */
/*   Updated: 2023/01/11 15:06:25 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static size_t	ft_strlenlil(char const *str, char charset)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != charset)
		i++;
	return (i);
}

static char	*ft_word(char const *str, char charset)
{
	size_t	j;
	size_t	i;
	char	*word;

	j = ft_strlenlil(str, charset);
	i = 0;
	word = malloc(j + 1);
	if (!word)
		return (0);
	while (str[i] && str[i] != charset)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	ft_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**string;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	string = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!string)
		return (0);
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			string[i] = ft_word(s + j, c);
			i++;
		}
		while (s[j] && s[j] != c)
			j++;
	}
	string[i] = 0;
	return (string);
}
