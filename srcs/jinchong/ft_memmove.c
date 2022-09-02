/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 08:13:17 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:00:20 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	if (dst == src || num == 0)
		return (dst);
	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (dst < src)
		while (i < num)
		{
			dst2[i] = src2[i];
			i++;
		}
	else
	{
		while (i < num)
		{
			dst2[num - i - 1] = src2[num - i - 1];
			i++;
		}
	}
	return (dst);
}
