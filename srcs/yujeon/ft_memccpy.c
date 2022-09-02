/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 20:35:31 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/07 21:27:53 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d_temp;
	unsigned char	*s_temp;
	size_t			a;

	d_temp = (unsigned char *)dst;
	s_temp = (unsigned char *)src;
	a = n;
	while (a)
	{
		*d_temp = *s_temp;
		a--;
		if (*s_temp == (unsigned char)c)
			return (dst + (n - a));
		d_temp++;
		s_temp++;
	}
	return (NULL);
}
