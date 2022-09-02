/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 04:03:49 by seapark           #+#    #+#             */
/*   Updated: 2020/10/07 18:58:00 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t i;
	size_t cpylen;
	size_t result;

	dstlen = ft_strlen(dst);
	result = ft_strlen(src);
	if (dstsize < dstlen)
		result += dstsize;
	else
	{
		result += dstlen;
		i = 0;
		cpylen = dstsize - dstlen - 1;
		while (src[i] != 0 && (int)cpylen > 0)
		{
			dst[dstlen] = src[i];
			dstlen++;
			i++;
			cpylen--;
		}
		if (dstsize != dstlen && ft_strlen(src) != 0)
			dst[dstlen] = '\0';
	}
	return (result);
}
