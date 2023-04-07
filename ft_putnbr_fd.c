/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:45:01 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 17:30:13 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nbr;
	char		ch;

	nbr = (long long)n;
	ch = '0';
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ch += nbr;
		write(fd, &ch, 1);
	}
	else
	{
		ft_putnbr_fd((int)(nbr / 10), fd);
		ft_putnbr_fd((int)(nbr % 10), fd);
	}
}
