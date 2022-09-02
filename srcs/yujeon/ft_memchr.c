/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 22:55:12 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:40:13 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			a;

	a = n;
	temp = (unsigned char *)s;
	while (a)
	{
		if (*temp == (unsigned char)c)
			return ((void *)s + (n - a));
		a--;
		temp++;
	}
	return (NULL);
}
