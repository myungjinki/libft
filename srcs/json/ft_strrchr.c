/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:48:06 by json              #+#    #+#             */
/*   Updated: 2021/01/07 17:17:14 by sonleave25       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	c = (char)c;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			i++;
		}
		s++;
	}
	if (i >= 1)
		return (ptr);
	else
	{
		if (c == 0)
			return ((char *)s);
		return (0);
	}
}
