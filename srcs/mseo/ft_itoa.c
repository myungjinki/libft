/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:25:29 by mseo              #+#    #+#             */
/*   Updated: 2020/11/26 22:32:10 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

static int		chklen(int n)
{
	int	count;

	count = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		nlen;
	int		sign;

	nlen = chklen(n);
	sign = (n < 0) ? -1 : 1;
	str = (char *)malloc(sizeof(char) * nlen + 1);
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	nlen--;
	while (nlen >= 0)
	{
		str[nlen] = ft_abs(n % 10) + 48;
		n = ft_abs(n / 10);
		nlen--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
