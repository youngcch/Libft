/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:08:41 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:50:29 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_size(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			cnt++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (cnt);
}

static char	*set_word(char *s, char c)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	tmp = (char *)malloc((i + 1) * sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

static void	free_split(char **tmp)
{
	size_t	i;

	i = 0;
	while (*(tmp + i))
	{
		free(*(tmp + i));
		i++;
	}
	free(tmp);
}

static char	**set_split(char **tmp, char *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			tmp[cnt] = set_word(s + i, c);
			if (!tmp[cnt])
			{
				free_split(tmp);
				return (NULL);
			}
			cnt++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	tmp[cnt] = 0;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;

	tmp = (char **)malloc((split_size(s, c) + 1) * sizeof(char *));
	if (!tmp)
		return (0);
	return (set_split(tmp, (char *)s, c));
}
