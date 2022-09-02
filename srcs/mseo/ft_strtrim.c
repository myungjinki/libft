/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 17:36:56 by mseo              #+#    #+#             */
/*   Updated: 2020/11/26 22:33:37 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_side(const char *s1, const char *set)
{
	int	i;
	int	s1len;

	s1len = ft_strlen(s1);
	i = 0;
	while (i < s1len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	b_side(const char *s1, const char *set)
{
	int	i;
	int	s1len;

	s1len = ft_strlen(s1);
	i = 0;
	while (i < s1len)
	{
		if (ft_strchr(set, s1[s1len - i - 1]) == 0)
			break ;
		i++;
	}
	return (s1len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		front;
	int		back;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	front = f_side(s1, set);
	back = b_side(s1, set);
	if (front >= back)
		return (ft_strdup(""));
	str = ft_substr(s1, front, back - front);
	return (str);
}
