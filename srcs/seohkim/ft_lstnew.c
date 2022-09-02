/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:05:39 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/10 20:16:02 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *l;

	if (!(l = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
