/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 18:14:34 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/28 17:21:51 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int						sign;
	unsigned long long		result;

	sign = 1;
	result = 0;
	while (((*str >= 9) && (*str <= 13)) || *str == 32)
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (result > 9223372036854775807 && (sign == 1))
		return (-1);
	if ((result > 9223372036854775807) && (sign == -1))
		return (0);
	return ((int)sign * result);
}
