/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:18:04 by mseo              #+#    #+#             */
/*   Updated: 2020/10/29 16:12:30 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t detsize)
{
	size_t	src_len;
	size_t	i;

	if (!dest)
		return (0);
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (!detsize)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (detsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
