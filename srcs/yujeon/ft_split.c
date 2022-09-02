/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:24:27 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:41:49 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordnum(char const *s, char c)
{
	int		cnt;

	cnt = 1;
	while (*s)
	{
		if (*(s + 1) == '\0')
			break ;
		if (*s == c && *(s + 1) != c)
			cnt++;
		s++;
	}
	return (cnt);
}

static int	size(char const *s, char c)
{
	int		num;

	num = 0;
	while (*s)
	{
		if (*s == c)
			return (num);
		s++;
		num++;
	}
	return (num);
}

static char	**ft_free(char **result, int i)
{
	while (i)
	{
		free(result[i]);
		i--;
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (!s || !(result = (char **)malloc(sizeof(char *) * (wordnum(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!(result[i] = (char *)malloc(sizeof(char) * (size(s, c) + 1))))
				return (ft_free(result, i));
			ft_strlcpy(result[i], s, size(s, c) + 1);
			s = s + size(s, c);
			i++;
		}
	}
	result[i] = 0;
	return (result);
}
