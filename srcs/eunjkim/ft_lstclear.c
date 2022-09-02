/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 23:03:18 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:27:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *dellist;

	if (!(lst) || !(del))
		return ;
	while (*lst)
	{
		dellist = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = dellist;
	}
}
