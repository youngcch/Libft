/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:13:51 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:50 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*set_tmp(size_t start, size_t end, char const *s1)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc((end - start + 2) * sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	while (i + start <= end)
	{
		tmp[i] = s1[i + start];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	start;
	size_t	end;

	if (!set || !s1)
		return ((char *)s1);
	start = 0;
	while (check_set(s1[start], set) == 1 && s1[start])
		start++;
	if (start == ft_strlen(s1))
	{
		tmp = (char *)malloc(sizeof(char));
		if (!tmp)
			return (0);
		*tmp = '\0';
		return (tmp);
	}
	end = ft_strlen(s1) - 1;
	while (check_set(s1[end], set) == 1 && end > 0)
		end--;
	tmp = set_tmp(start, end, s1);
	if (!tmp)
		return (0);
	return (tmp);
}
