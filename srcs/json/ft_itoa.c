/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:55:20 by sonleave25        #+#    #+#             */
/*   Updated: 2021/01/28 20:03:28 by json             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	get_len(long n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = (-1) * n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	long			num;

	num = n;
	len = get_len(num);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = 0;
	if (num < 0)
		num = (-1) * num;
	while (--len >= 0)
	{
		if (n < 0 && len == 0)
			str[0] = '-';
		else
		{
			str[len] = num % 10 + '0';
			num = num / 10;
		}
		if (len == 0)
			break ;
	}
	return (str);
}
