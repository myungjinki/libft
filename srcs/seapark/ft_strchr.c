/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:43:12 by seapark           #+#    #+#             */
/*   Updated: 2020/10/08 15:18:07 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		strlen;

	p = (char *)s;
	strlen = ft_strlen(s) + 1;
	while (strlen != 0)
	{
		if (*p == c)
			return (p);
		p++;
		strlen--;
	}
	return (NULL);
}
