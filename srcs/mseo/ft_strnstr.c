/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:21:45 by mseo              #+#    #+#             */
/*   Updated: 2020/10/29 16:52:12 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2len;
	size_t	cut1;
	size_t	cut2;

	s2len = ft_strlen(s2);
	if (!s2len)
		return ((char *)s1);
	cut1 = 0;
	cut2 = 0;
	while (s1[cut1] && cut1 < len)
	{
		cut2 = 0;
		while (s1[cut1 + cut2] == s2[cut2] && s2len > cut2 && cut1 + cut2 < len)
		{
			if (cut2 == s2len - 1)
				return ((char *)&s1[cut1]);
			cut2++;
		}
		cut1++;
	}
	return (NULL);
}
