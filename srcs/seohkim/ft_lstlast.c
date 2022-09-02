/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:18:26 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/10 21:42:38 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t i;
	t_list *tmp;

	i = 0;
	tmp = lst;
	if (!lst)
		return (lst);
	while (tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
