/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 02:59:49 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:41:57 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*a;
	int				len;

	len = ft_strlen(s) + 1;
	a = (unsigned char *)s;
	while (len)
	{
		if (*a == (unsigned char)c)
			return ((char *)a);
		a++;
		len--;
	}
	return (0);
}
