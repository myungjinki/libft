/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 09:15:34 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:00:48 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t num)
{
	size_t			i;
	unsigned char	*pt;

	pt = str;
	i = 0;
	while (i < num)
	{
		pt[i] = val;
		i++;
	}
	return (str);
}
