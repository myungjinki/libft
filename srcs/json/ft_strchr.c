/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:37:33 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/07 14:42:18 by sonleave25       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	c = (char)c;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			return (ptr);
		}
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}