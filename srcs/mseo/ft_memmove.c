/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:25:50 by mseo              #+#    #+#             */
/*   Updated: 2020/10/30 21:52:06 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*temp;
	const char	*s;

	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		temp = (char *)dst;
		s = (const char *)src;
		while (n--)
			*temp++ = *s++;
	}
	else
	{
		temp = (char *)dst + (n - 1);
		s = (char *)src + (n - 1);
		while (n--)
			*temp-- = *s--;
	}
	return (dst);
}
