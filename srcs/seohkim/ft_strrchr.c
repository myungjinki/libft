/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:45:48 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/07 21:40:10 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(char *s, int c)
{
	size_t	i;
	size_t	ans;

	i = 0;
	ans = 0;
	while (s[i])
	{
		if (s[i] == c)
			ans = i;
		i++;
	}
	if (c == '\0')
		return (s + i);
	else if (ans != 0 || s[0] == c)
		return (s + ans);
	else
		return (0);
}
