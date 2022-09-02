/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 00:59:06 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:36:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;
	char	tmp;

	if (fd < 0 || !(s))
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		tmp = s[i];
		ft_putchar_fd(tmp, fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
