/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:33:17 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 19:56:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*i;
	size_t	j;

	if (!(i = malloc(nmemb * size)))
		return (0);
	j = 0;
	while (j < size * nmemb)
	{
		*(char *)(i + j) = 0;
		j++;
	}
	return (i);
}
