/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:19:42 by seapark           #+#    #+#             */
/*   Updated: 2020/10/08 15:25:21 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		strlen;
	char	*result;

	p = (char *)s;
	result = NULL;
	strlen = ft_strlen(s) + 1;
	while (strlen != 0)
	{
		if (*p == c)
			result = p;
		p++;
		strlen--;
	}
	return (result);
}
