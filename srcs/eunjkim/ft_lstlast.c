/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 22:15:54 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:28:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst)
	{
		last = lst;
		while (1)
		{
			if (!(last->next))
				return (last);
			last = last->next;
		}
	}
	else
		return (NULL);
}
