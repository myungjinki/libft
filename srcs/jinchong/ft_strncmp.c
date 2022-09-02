/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 16:50:57 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/28 14:15:20 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*str12;
	unsigned char	*str22;

	str12 = (unsigned char *)str1;
	str22 = (unsigned char *)str2;
	i = 0;
	while (i < num && *str12 == *str22 && *str12 && *str22)
	{
		i++;
		str12++;
		str22++;
	}
	if (*str12 == *str22)
		return (0);
	else
	{
		if (i == num)
			return (0);
	}
	return (*str12 - *str22);
}
