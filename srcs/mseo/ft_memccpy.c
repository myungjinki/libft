/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:07:25 by mseo              #+#    #+#             */
/*   Updated: 2020/11/03 21:03:22 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*temp;
	const char	*s;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	temp = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		if (temp[i] == (char)c)
			return ((void *)dst + i + 1);
		i++;
	}
	return (NULL);
}
