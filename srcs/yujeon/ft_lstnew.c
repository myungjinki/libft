/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 20:05:27 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:39:50 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *temp;

	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}
