/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:37:39 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 19:54:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_them(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int		ft_atoi_ing(const char *str, int i, int j)
{
	long long	n;

	n = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (n * j > 2147483647)
			return (-1);
		else if (n * j < -2147483648)
			return (0);
		else
			n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * j);
}

int		ft_atoi(const char *str)
{
	int			i;
	int			j;

	j = 1;
	i = ft_check_them(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	return (ft_atoi_ing(str, i, j));
}
