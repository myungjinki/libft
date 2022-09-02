/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 22:10:34 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/30 16:30:34 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_l;
	char			*res;

	if (s == 0)
		return (0);
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_calloc(1, sizeof(char)));
	s_l = s_l - start;
	if (len < s_l)
		len = len + 1;
	else
		len = s_l + 1;
	res = (char *)malloc(sizeof(char) * len);
	if (res == 0)
		return (0);
	ft_strlcpy(res, s + start, len);
	return (res);
}
