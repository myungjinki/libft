/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 21:48:48 by seapark           #+#    #+#             */
/*   Updated: 2020/10/15 14:27:57 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	t_list *lst_next;
	t_list *lst_new;

	if (!(result = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&result, del);
		return (NULL);
	}
	lst_next = result;
	lst = lst->next;
	while (lst)
	{
		if (!(lst_new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_next, lst_new);
		lst_next = lst_new;
		lst = lst->next;
	}
	return (result);
}
