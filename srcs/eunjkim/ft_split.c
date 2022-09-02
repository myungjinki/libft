/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:49:36 by marvin            #+#    #+#             */
/*   Updated: 2021/01/27 16:03:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_free_dom(char **result, size_t j)
{
	size_t		i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static void		ft_split_result(char *r, char const *s, size_t start, size_t i)
{
	size_t		idx;

	idx = 0;
	if (!(s) || !(r) || i < 0)
		return ;
	while (idx < i)
	{
		r[idx] = s[start];
		start++;
		idx++;
	}
	r[idx] = 0;
}

static int		ft_find_len(char const *s, char c)
{
	size_t		i;
	size_t		len;

	if (!s)
		return (0);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (len);
}

void			ft_split_len(char const *s, char c, char **result)
{
	size_t		count;
	size_t		idx;
	size_t		k;

	idx = 0;
	k = 0;
	while (idx < ft_strlen(s))
	{
		count = 0;
		if (s[idx] != c)
		{
			while (s[idx + count] != c && s[idx + count])
				count++;
			if (!(result[k] = (char *)malloc(sizeof(char) * (count + 1))))
			{
				ft_free_dom(result, k);
				return ;
			}
			ft_split_result(result[k], s, idx, count);
			k++;
		}
		idx = idx + count + 1;
	}
}

char			**ft_split(char const *s, char c)
{
	char		**result;
	size_t		len;

	if (!s)
		return (NULL);
	len = ft_find_len(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	result[len] = 0;
	if (len == 0)
		return (result);
	ft_split_len(s, c, result);
	return (result);
}
