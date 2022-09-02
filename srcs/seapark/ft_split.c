/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 16:12:49 by seapark           #+#    #+#             */
/*   Updated: 2020/10/17 15:01:22 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_getsplitlen(char *s, char c)
{
	int		flag;
	int		size;

	flag = 0;
	size = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			size++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (size);
}

static char		**ft_allocate(char **result, char *s, char c)
{
	int		i;
	int		k;
	int		size;

	size = ft_getsplitlen(s, c);
	i = 0;
	while (i < size)
	{
		k = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s++)
			k++;
		if (!(result[i] = (char *)malloc(k + 1)))
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		result[i++][k] = '\0';
	}
	return (result);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	char	*l_s;
	int		size;
	int		i;
	int		k;

	if (s == NULL)
		return (NULL);
	l_s = (char *)s;
	size = ft_getsplitlen(l_s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	result[size] = NULL;
	l_s = (char *)s;
	result = ft_allocate(result, l_s, c);
	i = -1;
	while (i++ < size)
	{
		k = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			result[i][k++] = *s++;
	}
	return (result);
}
