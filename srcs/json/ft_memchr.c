/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:13:41 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/07 14:51:21 by sonleave25       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (*(unsigned char *)s && i < n)
	{
		if (*(unsigned char *)s == c)
			return ((void *)s);
		s++;
		i++;
	}
	if ((c == 0) && *(unsigned char *)s == 0)
		return ((void *)s);
	return (0);
}
