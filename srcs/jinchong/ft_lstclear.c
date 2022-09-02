/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:35:04 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:34:19 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *slist;

	if (lst == 0 || del == 0)
		return ;
	while (*lst)
	{
		slist = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = slist;
	}
	*lst = 0;
}
