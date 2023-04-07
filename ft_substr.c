/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:41:14 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:56:03 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = (size_t)(ft_strlen(s) - start);
	if (ft_strlen(s) < start)
	{
		tmp = ft_strdup("");
		return (tmp);
	}
	if (s_len < len)
		len = s_len;
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
