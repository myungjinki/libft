/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:35:29 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:10:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		len;
	size_t	i;

	len = ft_strlen(s) + 1;
	result = malloc(len);
	if (!(result))
		return (NULL);
	i = ft_strlcpy(result, s, len);
	return (result);
}
