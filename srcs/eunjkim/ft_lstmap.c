/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 21:01:51 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:29:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*newlst;

	if (!(lst) || !(f))
		return (NULL);
	result = NULL;
	while (lst)
	{
		if (!(newlst = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, newlst);
		lst = lst->next;
		newlst = newlst->next;
	}
	return (result);
}
