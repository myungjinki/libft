/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:10:04 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:04:43 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_l;
	size_t	i;
	char	*result;

	str_l = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * (str_l + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (i < str_l)
	{
		result[i] = str[i];
		i++;
	}
	result[str_l] = 0;
	return (result);
}
