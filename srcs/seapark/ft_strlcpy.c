/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 04:03:29 by seapark           #+#    #+#             */
/*   Updated: 2020/10/07 16:42:04 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	int		srclen;

	if (src != NULL)
		srclen = ft_strlen(src);
	else
		return (0);
	if (dst != NULL && dstsize != 0)
	{
		d = dst;
		s = (char *)src;
		while (dstsize > 1 && *s != '\0')
		{
			*d = *s;
			d++;
			s++;
			dstsize--;
		}
		*d = '\0';
	}
	return (srclen);
}
