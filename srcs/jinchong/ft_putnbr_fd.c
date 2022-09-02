/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:11:39 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/28 09:10:09 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pnbr(int n, int fd)
{
	char	ch;

	if (n >= 10)
	{
		ft_pnbr(n / 10, fd);
		ch = n % 10 + '0';
		write(fd, &ch, 1);
	}
	else
	{
		ch = n + '0';
		write(fd, &ch, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == INT_MIN)
	{
		write(fd, INT_MIN_STR, 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_pnbr(n, fd);
}
