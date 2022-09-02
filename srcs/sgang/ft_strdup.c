/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgang <sgang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:50:16 by sgang             #+#    #+#             */
/*   Updated: 2020/10/11 03:50:29 by sgang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char *ret;
	char *pos;

	if (!(ret = (char *)malloc(ft_strlen(string) + 1)))
		return (0);
	pos = ret;
	while (*string)
	{
		if (*string == '\0')
			continue ;
		*(pos++) = *(string++);
	}
	*pos = 0;
	return (ret);
}
