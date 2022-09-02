/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:29:50 by seapark           #+#    #+#             */
/*   Updated: 2020/10/17 14:59:30 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if (c == '\r' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *s)
{
	unsigned long long		result;
	int						sign;

	sign = 1;
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	result = 0;
	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
			break ;
		result *= 10;
		result += (*s++ - 48);
	}
	if (result > 9223372036854775808U && sign == -1)
		return (0);
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	return (result * sign);
}
