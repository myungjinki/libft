/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:43:16 by marvin            #+#    #+#             */
/*   Updated: 2021/01/27 16:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findstart(char const *s1, char const *set, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!(ft_strchr(set, s1[i]) || s1[i] == ' '))
			break ;
		i++;
	}
	return (i);
}

int		ft_findend(char const *s1, char const *set, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!(ft_strchr(set, s1[len - i - 1]) || s1[len - i - 1] == ' '))
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (!(ft_strncmp(set, "", ft_strlen(set))))
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	start = ft_findstart(s1, set, len);
	end = ft_findend(s1, set, len);
	if (start >= end)
		return (ft_strdup(""));
	if (!(result = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
