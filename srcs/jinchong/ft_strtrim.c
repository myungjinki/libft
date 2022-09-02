/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:42:41 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:12:23 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	en;
	char	*res;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	en = ft_strlen(s1 + i);
	if (en)
		while (s1[en + i - 1] != 0 && ft_strchr(set, s1[en + i - 1]) != 0)
			en--;
	if (!(res = malloc(sizeof(char) * en + 1)))
		return (0);
	ft_strlcpy(res, s1 + i, en + 1);
	return (res);
}
