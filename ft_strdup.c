/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:23:34 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/21 20:04:17 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	int		len;
	int		i;

	len = ft_strlen(s);
	tmp = (char *)malloc ((len + 1) * sizeof(char));
	if (tmp == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
