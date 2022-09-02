/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:38:00 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/29 16:25:08 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**malloc_error(char **arr_2d)
{
	int	i;

	i = 0;
	while (arr_2d[i])
	{
		free(arr_2d[i]);
		i++;
	}
	free(arr_2d);
	return (NULL);
}

static int		get_arrcnt(char const *s, char c)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			num++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (num);
}

static void		get_next_str(char **next_str, int *len, char c)
{
	int		i;

	*next_str = *next_str + *len;
	i = 0;
	*len = 0;
	while ((**next_str) && (**next_str == c))
	{
		(*next_str)++;
	}
	while (((*next_str)[i] != c) && ((*next_str)[i]))
	{
		(*len)++;
		i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**arr_2d;
	char	*next_str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(arr_2d = (char **)malloc(sizeof(char *) * (get_arrcnt(s, c) + 1))))
		return (NULL);
	next_str = (char *)s;
	while (i < get_arrcnt(s, c))
	{
		get_next_str(&next_str, &len, c);
		if (!(arr_2d[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (malloc_error(arr_2d));
		ft_strlcpy(arr_2d[i], next_str, len + 1);
		i++;
	}
	arr_2d[i] = NULL;
	return (arr_2d);
}
