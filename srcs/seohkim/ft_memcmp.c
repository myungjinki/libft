/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:31:18 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/08 15:25:52 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	p1;
	unsigned char	p2;

	i = 0;
	while (i < n)
	{
		p1 = *((unsigned char *)ptr1 + i);
		p2 = *((unsigned char *)ptr2 + i);
		if (p1 != p2)
			return (p1 - p2);
		i++;
	}
	return (0);
}
