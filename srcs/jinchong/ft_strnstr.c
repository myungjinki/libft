/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:23 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:11:05 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ch, size_t len)
{
	size_t	i;
	size_t	str_l;
	size_t	ch_l;
	size_t	len2;

	if (ch[0] == 0)
		return ((char *)str);
	str_l = ft_strlen(str);
	ch_l = ft_strlen(ch);
	if (str_l < ch_l || len < ch_l)
		return (0);
	if (str_l > len)
		len2 = len;
	else
		len2 = str_l;
	i = 0;
	while (i + ch_l <= len2)
	{
		if (ft_strncmp(str + i, ch, ch_l) == 0)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
