/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 20:11:48 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/12 20:50:42 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int		ft_isspace(char c)
{
	if (c == ' ' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static int		ft_minus(const char *str, int *minus)
{
	int			i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*minus = -1;
		else if (str[i] == '+')
			*minus = 1;
		i++;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	int			i;
	int			minus;
	long long	result;

	minus = 1;
	result = 0;
	i = ft_minus(str, &minus);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * minus > 2147483647)
			return (-1);
		else if (result * minus < -2147483648)
			return (0);
		else
			result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * minus);
}
