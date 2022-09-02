/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:10:36 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/28 14:22:56 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			num_len(int n)
{
	int			len;
	long long	nn;

	len = 0;
	nn = (long long)n;
	if (nn < 0)
	{
		len++;
		nn *= -1;
	}
	while (nn >= 10)
	{
		len++;
		nn /= 10;
	}
	len++;
	return (len);
}

char		*ft_itoa(int n)
{
	int			len;
	int			i;
	long long	nn;
	char		*res;

	i = 0;
	len = num_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = 0;
	nn = n < 0 ? (long long)n * -1 : (long long)n;
	while (i < len)
	{
		if (i == len - 1 && n < 0)
		{
			res[0] = '-';
			break ;
		}
		res[len - i - 1] = nn % 10 + '0';
		nn /= 10;
		i++;
	}
	return (res);
}
