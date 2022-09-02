/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 02:05:47 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *string, int c)
{
	char	*s;
	char	*tmp;
	char	find;
	int		len;

	s = (char *)string;
	find = (char)c;
	len = ft_strlen(string);
	tmp = NULL;
	if (find == '\0')
		return (&s[len]);
	while (*s)
	{
		if (*s == find)
			tmp = s;
		s++;
	}
	return ((char *)tmp);
}
