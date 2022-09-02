/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:44:44 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:40:28 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *d_temp;
	unsigned char *s_temp;

	d_temp = (unsigned char *)dst;
	s_temp = (unsigned char *)src;
	if (dst > src)
	{
		while (n)
		{
			n--;
			*(d_temp + n) = *(s_temp + n);
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
