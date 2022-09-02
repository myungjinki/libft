/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:16:56 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/15 17:58:02 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t l;

	l = 0;
	while (needle[l])
		l++;
	if (!l)
		return (haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (j < l && i + j < len)
		{
			if (haystack[i + j] != needle[j])
				j = l + 1;
			j++;
		}
		if (j == l)
			return (haystack + i);
		i++;
	}
	return (0);
}
