/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:59:42 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/29 17:34:41 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (dst == src || len == 0)
		return (dst);
	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (i < len)
	{
		if (dst < src)
			s1[i] = s2[i];
		else
			s1[len - i - 1] = s2[len - i - 1];
		i++;
	}
	return (dst);
}
