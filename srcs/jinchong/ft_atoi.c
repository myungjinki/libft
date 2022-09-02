/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 18:16:44 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/30 18:05:10 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_maxmin(const char *str)
{
	size_t		str_l;

	str_l = ft_strlen(str);
	if (ft_strncmp(str, LONG_MAX_STR, str_l) == 0)
		return (-1);
	if (ft_strncmp(str, LONG_MIN_STR, str_l) == 0)
		return (0);
	return (2);
}

int		ft_atoi1(const char *str)
{
	size_t		i;
	size_t		num;
	size_t		minus;

	i = 0;
	num = 0;
	minus = 1;
	while (((9 <= str[i] && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * minus);
}

int		ft_atoi(const char *str)
{
	size_t		i;

	i = 0;
	if (str[i] == 0 || ft_maxmin(str) == 0)
		return (0);
	if (ft_maxmin(str) == -1)
		return (-1);
	return (ft_atoi1(str));
}
