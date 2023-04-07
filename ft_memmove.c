/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:59:56 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:47:21 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (dst == src || len == 0)
		return (dst);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s1 < s2)
	{
		while (len > 0)
		{
			*s1++ = *s2++;
			len--;
		}
	}
	else
	{
		s1 += len - 1;
		s2 += len - 1;
		while (len-- > 0)
			*s1-- = *s2--;
	}
	return (dst);
}
