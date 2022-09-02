/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 05:23:29 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:37:27 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*s;
	size_t			all;
	unsigned char	*temp;

	all = size * count;
	if (!(s = malloc(all)))
		return (s);
	temp = (unsigned char *)s;
	while (all)
	{
		*temp = 0;
		temp++;
		all--;
	}
	return (s);
}
