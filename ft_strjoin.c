/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:03:47 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:52:07 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!tmp)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		tmp[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		tmp[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	tmp[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (tmp);
}
