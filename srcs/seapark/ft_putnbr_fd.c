/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:59:34 by seapark           #+#    #+#             */
/*   Updated: 2020/10/14 17:30:42 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		if (n < 10)
		{
			c = n + 48;
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			c = (n % 10) + 48;
			write(fd, &c, 1);
		}
	}
}