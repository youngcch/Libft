/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:18:06 by youngcch          #+#    #+#             */
/*   Updated: 2023/03/23 18:51:11 by youngcch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*node;
	void	*lst_content;

	if (!lst || !f)
		return (0);
	node = 0;
	while (lst)
	{
		lst_content = f(lst->content);
		newnode = ft_lstnew(lst_content);
		if (!newnode)
		{
			del(lst_content);
			ft_lstclear(&node, del);
			return (0);
		}
		ft_lstadd_back(&node, newnode);
		lst = lst->next;
		newnode = newnode->next;
	}
	return (node);
}
