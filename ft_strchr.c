/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:44:48 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:50:55 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;
	char			*tmp;

	i = 0;
	tmp = (char *)s;
	ch = (unsigned char)c;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == ch)
			return (tmp + i);
		i++;
	}
	if (tmp[i] == ch)
		return (tmp + i);
	return (0);
}
