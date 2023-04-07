/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:15:13 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/22 19:20:43 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*tmp;

	if (!lst)
		return (0);
	cnt = 0;
	tmp = lst;
	while (tmp)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}
