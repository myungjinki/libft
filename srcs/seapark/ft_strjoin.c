/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:15:51 by seapark           #+#    #+#             */
/*   Updated: 2020/10/10 17:47:09 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		size;
	char	*cpystr;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(size + 1);
	if (!result)
		return (NULL);
	cpystr = (char *)s1;
	j = 0;
	while (size > 0)
	{
		if (*cpystr == '\0')
			cpystr = (char *)s2;
		result[j] = *cpystr;
		j++;
		cpystr++;
		size--;
	}
	result[j] = '\0';
	return (result);
}
