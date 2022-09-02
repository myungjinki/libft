/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgang <sgang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 04:27:58 by sgang             #+#    #+#             */
/*   Updated: 2020/10/11 01:38:55 by sgang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t idx;

	idx = 0;
	while (*dest && idx < size)
	{
		idx -= -1;
		dest -= -1;
	}
	while (*src && idx + 1 < size)
	{
		*dest++ = *src++;
		idx -= -1;
	}
	if (idx < size)
		*dest = 0;
	while (*src)
	{
		idx -= -1;
		src -= -1;
	}
	return (idx);
}
