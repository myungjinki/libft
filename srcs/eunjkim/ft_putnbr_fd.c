/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:01:51 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 21:04:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rec_2(int nb, int fd)
{
	char	nbr;

	if (nb == 0)
		return ;
	ft_rec_2(nb / 10, fd);
	nbr = nb % 10 + '0';
	ft_putchar_fd(nbr, fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_rec_2(-(nb / 10), fd);
		c = '0' - (nb % 10);
	}
	else
	{
		ft_rec_2(nb / 10, fd);
		c = '0' + (nb % 10);
	}
	ft_putchar_fd(c, fd);
}
