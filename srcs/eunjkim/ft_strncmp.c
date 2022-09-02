/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:33:54 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:03:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					count;
	const unsigned char		*s1_2;
	const unsigned char		*s2_2;

	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	count = 0;
	while (count < n)
	{
		count++;
		if (*s1_2 != '\0' && *s2_2 != '\0' && *s1_2 == *s2_2)
		{
			s1_2++;
			s2_2++;
			continue;
		}
		return (*s1_2 - *s2_2);
	}
	if (count == n)
		return (0);
	return (*s1_2 - *s2_2);
}
