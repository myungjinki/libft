/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:48:51 by jinchong          #+#    #+#             */
/*   Updated: 2020/12/01 08:25:01 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		w_cnt(char *s, char c)
{
	size_t		i;
	size_t		x;
	size_t		cnt;

	cnt = 0;
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i > x)
				cnt++;
			x = i + 1;
			s[i] = 0;
		}
		i++;
	}
	if (s[i - 1] != 0)
		cnt++;
	return (cnt);
}

char	**get_arr(char *s, size_t cnt)
{
	size_t		i;
	size_t		j;
	char		**res;

	if (!(res = malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	i = 0;
	j = 0;
	while (j < cnt)
	{
		if (s[i])
		{
			if (!(res[j] = ft_strdup(s + i)))
				return (res);
			i += ft_strlen(res[j]);
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	char		*s2;
	size_t		cnt;

	if (!s || !*s)
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (0);
		*res = 0;
		return (res);
	}
	s2 = ft_strdup(s);
	if (!s2)
		return (0);
	cnt = w_cnt(s2, c);
	res = get_arr(s2, cnt);
	free(s2);
	return (res);
}
