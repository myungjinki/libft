/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohkim <seohkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:57:31 by seohkim           #+#    #+#             */
/*   Updated: 2020/10/15 19:14:26 by seohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_count(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	else if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void		ft_fill(char *str, int n, int i)
{
	if (n == -2147483648LL)
	{
		str[i] = '8';
		n /= 10;
		i--;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n > 9)
	{
		str[i] = '0' + n % 10;
		ft_fill(str, n / 10, i - 1);
	}
	else
		str[i] = '0' + n;
}

char			*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = ft_count(n);
	if (!(str = (char *)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	ft_fill(str, n, i - 1);
	return (str);
}
