/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:15:09 by mseo              #+#    #+#             */
/*   Updated: 2020/11/04 12:22:18 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp;
	const char	*s;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	temp = (char *)dst;
	i = 0;
	s = (const char *)src;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	return (dst);
}
