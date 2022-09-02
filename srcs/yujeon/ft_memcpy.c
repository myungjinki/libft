/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 04:42:00 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:40:05 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d_temp;
	unsigned char *s_temp;

	d_temp = (unsigned char *)dst;
	s_temp = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*d_temp = *s_temp;
		d_temp++;
		s_temp++;
		n--;
	}
	return (dst);
}
