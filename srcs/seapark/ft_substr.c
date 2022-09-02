/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:45:34 by seapark           #+#    #+#             */
/*   Updated: 2020/10/14 16:58:24 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		j;
	char	*result;

	result = (char *)malloc((int)len + 1);
	if (s == NULL || !result)
		return (NULL);
	j = 0;
	result = ft_memset(result, '\0', len + 1);
	if (ft_strlen(s) <= start)
		return (result);
	while (len && s[start] != '\0')
	{
		result[j] = s[start];
		j++;
		start++;
		len--;
	}
	result[j] = '\0';
	return (result);
}
