/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:38:16 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/15 18:57:06 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *l;
	t_list *tmp;

	l = *lst;
	while (l->next)
	{
		tmp = l;
		del(tmp->content);
		l = l->next;
	}
	del(l->content);
	free(l);
	*lst = NULL;
}
