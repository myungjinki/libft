/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:14:11 by mseo              #+#    #+#             */
/*   Updated: 2020/11/25 22:17:51 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		head = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = head;
	}
	*lst = 0;
}
