/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:17:57 by eunjkim           #+#    #+#             */
/*   Updated: 2021/01/29 21:51:55 by eunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			k;

	i = 0;
	k = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		k = 0;
		if (big[i] == little[k])
		{
			while (little[k] != '\0' && big[i + k] == little[k] && i + k < len)
			{
				k++;
			}
			if (little[k] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
