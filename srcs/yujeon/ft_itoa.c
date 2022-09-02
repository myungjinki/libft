/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 16:45:24 by yujeon            #+#    #+#             */
/*   Updated: 2020/10/15 19:38:39 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		chksize(int n)
{
	long long int	a;
	int				size;

	size = 1;
	if (n < 0)
		a = (long long int)n * -1;
	else
		a = n;
	a = a / 10;
	while (a)
	{
		a = a / 10;
		size++;
	}
	if (n < 0)
		return (size + 1);
	return (size);
}

char			*ft_itoa(int n)
{
	char			*str;
	long long int	a;

	a = n;
	if (!(str = (char *)malloc(sizeof(char) * (chksize(n) + 1))))
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		*str = '-';
		a = (long long int)n * -1;
	}
	str = str + chksize(n);
	*str = 0;
	while (a)
	{
		str--;
		*str = a % 10 + '0';
		a = a / 10;
	}
	if (n < 0)
		str--;
	return (str);
}
