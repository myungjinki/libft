/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:08:49 by seapark           #+#    #+#             */
/*   Updated: 2020/10/09 15:29:00 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			if ((unsigned char)*s1 > (unsigned char)*s2)
				return (1);
			else
				return (-1);
		}
		if (*s1 == '\0' && *s2 == '\0')
			break ;
		s1++;
		s2++;
		n--;
	}
	return (0);
}
