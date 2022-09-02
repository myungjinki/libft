/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:04:03 by seapark           #+#    #+#             */
/*   Updated: 2020/10/12 16:30:21 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strtrim_start(char const *s1, char const *set)
{
	char	*l_set;
	int		result;
	int		i;

	i = 0;
	l_set = (char *)set;
	result = 0;
	while (*l_set && s1[i])
	{
		if (s1[i] == *l_set)
		{
			result++;
			l_set = (char *)set;
			i++;
			continue ;
		}
		l_set++;
	}
	return (result);
}

static int		ft_strtrim_end(char const *s1, char const *set)
{
	char	*l_set;
	int		result;

	l_set = (char *)set;
	result = ft_strlen(s1) - 1;
	while (*l_set && result > 0)
	{
		if (s1[result] == *l_set)
		{
			result--;
			l_set = (char *)set;
			continue ;
		}
		l_set++;
	}
	return (result);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		size;
	int		end;

	if (s1 == NULL)
		return (NULL);
	end = ft_strtrim_end(s1, set);
	size = end - ft_strtrim_start(s1, set) + 1;
	if (size < 0)
		size = 0;
	if (!(result = (char *)malloc(size + 1)))
		return (NULL);
	result[size] = '\0';
	while (size)
		result[--size] = s1[end--];
	return (result);
}
