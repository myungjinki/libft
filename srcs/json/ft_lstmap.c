/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:12:39 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/28 00:55:51 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *node;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	node = new_list;
	while (lst)
	{
		if (!(node->next = ft_lstnew(f(lst->content))))
			ft_lstclear(&new_list, del);
		node = node->next;
		lst = lst->next;
	}
	return (new_list);
}
