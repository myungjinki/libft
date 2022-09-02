/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:25:33 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/23 18:35:46 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int val, size_t num)
{
	char	*str2;
	size_t	i;

	str2 = str;
	i = 0;
	while (i < num)
	{
		if (str2[i] == val)
			return (str2 + i);
		i++;
	}
	return (0);
}
