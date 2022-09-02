/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 01:51:46 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:42:18 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				i;
	unsigned int	dsize;
	unsigned int	ssize;
	int				n;
	size_t			alsize;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	alsize = dsize + ssize;
	i = 0;
	n = dstsize - dsize - 1;
	if (dstsize < dsize)
		return (ssize + dstsize);
	else
	{
		while (i < n && src[i])
		{
			dst[dsize] = src[i];
			i++;
			dsize++;
		}
		dst[dsize] = 0;
	}
	return (alsize);
}
