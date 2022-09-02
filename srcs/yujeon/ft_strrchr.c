/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 03:41:41 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:43:25 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*a;
	size_t			len;

	a = (unsigned char *)s;
	len = ft_strlen(s) + 1;
	while (*a)
		a++;
	while (len)
	{
		if (*a == (unsigned char)c)
			return ((char *)a);
		len--;
		a--;
	}
	return (NULL);
}
