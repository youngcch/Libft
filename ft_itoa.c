/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:06:33 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:31:11 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_num(int n)
{
	long long	nbr;
	int			len;

	len = 0;
	nbr = (long long)n;
	if (n == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	nbr;
	size_t		len;
	char		*ch;

	nbr = (long long)n;
	len = size_num(n);
	ch = (char *)malloc((len + 1) * sizeof(char));
	if (!ch)
		return (0);
	if (nbr < 0)
	{
		ch[0] = '-';
		nbr *= -1;
	}
	ch[len--] = '\0';
	while (nbr >= 10)
	{
		ch[len--] = '0' + nbr % 10;
		nbr /= 10;
	}
	ch[len] = '0' + nbr;
	return (ch);
}
