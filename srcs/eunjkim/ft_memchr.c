/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:58:37 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:32:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char find;

	find = (unsigned char)value;
	while (num--)
	{
		if (*((unsigned char *)ptr) == find)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
