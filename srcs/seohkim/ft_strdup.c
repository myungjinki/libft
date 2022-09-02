/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:07:26 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/07 21:33:17 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char			*dup_str;
	unsigned int	size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	dup_str = (char *)malloc(sizeof(char) * (size + 1));
	if (dup_str == NULL)
		return (0);
	while (i < size)
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
