/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:19:06 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:43:41 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	samechk(char const *set, char c)
{
	size_t		len;
	int			i;

	i = 0;
	len = ft_strlen(set);
	while (len)
	{
		if (set[i] == c)
			return (1);
		i++;
		len--;
	}
	return (0);
}

static int	startchk(char const *s1, char const *set)
{
	int			i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (len)
	{
		if (samechk(set, s1[i]) == 0)
			return (i);
		i++;
		len--;
	}
	return (ft_strlen(s1));
}

static int	endchk(char const *s1, char const *set)
{
	size_t		len;

	len = ft_strlen(s1) - 1;
	while (len)
	{
		if (samechk(set, s1[len]) == 0)
			return (len + 1);
		len--;
	}
	return (ft_strlen(s1));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	int			start;
	int			end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = startchk(s1, set);
	end = endchk(s1, set);
	if (!(trim = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(trim, s1 + start, (end - start + 1));
	return (trim);
}
