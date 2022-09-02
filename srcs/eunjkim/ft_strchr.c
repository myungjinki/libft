/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:11:25 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:16:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *p;
	char find;

	p = (char *)str;
	find = (char)c;
	while (*p)
	{
		if (*p == find)
			return ((char *)p);
		p++;
	}
	if (find == '\0')
		return ((char*)p);
	return (NULL);
}
