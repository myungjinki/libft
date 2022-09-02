/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:32:06 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:15:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ptr, const void *src, unsigned int n)
{
	const void	*d;

	d = ptr;
	if (!ptr && !src)
		return (NULL);
	while (n--)
		*((unsigned char *)d++) = *((unsigned char *)src++);
	return (ptr);
}
