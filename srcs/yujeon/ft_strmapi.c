/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 03:51:30 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:42:39 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			size;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size)
	{
		res[i] = f(i, s[i]);
		i++;
		size--;
	}
	res[i] = 0;
	return (res);
}
