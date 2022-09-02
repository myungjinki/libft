/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:16:04 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:32:36 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*normlist;
	t_list	*temp;

	if (lst == 0 || f == 0)
		return (0);
	if ((newlist = ft_lstnew(f(lst->content))) == 0)
		return (0);
	lst = lst->next;
	normlist = newlist;
	while (lst)
	{
		if ((temp = ft_lstnew(f(lst->content))) == 0)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		normlist->next = temp;
		normlist = temp;
		lst = lst->next;
	}
	return (newlist);
}
