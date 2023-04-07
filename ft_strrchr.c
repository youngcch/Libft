/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 23:05:24 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:55:45 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*tmp;
	int				i;

	i = 0;
	ch = (unsigned char)c;
	tmp = (char *)s;
	while (tmp[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (tmp[i] == ch)
			return (tmp + i);
		i--;
	}
	return (0);
}
