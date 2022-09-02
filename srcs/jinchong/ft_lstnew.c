/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 10:31:32 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 00:55:49 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist == 0)
		return (0);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
