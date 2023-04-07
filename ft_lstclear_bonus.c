/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:59:45 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/28 20:12:17 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*l;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	l = *lst;
	while (l)
	{
		del(l->content);
		tmp = l->next;
		free(l);
		l = tmp;
	}
	*lst = 0;
}
