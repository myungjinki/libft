/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:52:44 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:37:16 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		iss(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int		signchk(char c, int *sign)
{
	if (c == '-')
	{
		*sign = -1;
		return (1);
	}
	else if (c == '+')
	{
		*sign = 1;
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	char			*s;
	long long int	a;
	int				sign;

	s = (char *)str;
	sign = 1;
	a = 0;
	while (iss(*s))
		s++;
	if (signchk(*s, &sign))
		s++;
	while (*s >= '0' && *s <= '9')
	{
		a = a * 10 + (*s - '0');
		if (sign == 1 && a > 2147483647)
			return (-1);
		else if (sign == -1 && a > 2147483648)
			return (0);
		s++;
	}
	a = sign * a;
	return (a);
}
