/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:46:31 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/28 16:23:46 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while ((dstsize > 1) && *src)
	{
		*dst = *src;
		src++;
		dst++;
		dstsize--;
	}
	*dst = 0;
	return (src_len);
}
