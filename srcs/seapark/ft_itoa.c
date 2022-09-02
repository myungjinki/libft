/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seapark <seapark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:09:38 by seapark           #+#    #+#             */
/*   Updated: 2020/10/12 13:26:37 by seapark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		getstrlen(int n)
{
	int result;

	result = 1;
	if (n < 0)
		result++;
	while (n /= 10)
		result++;
	return (result);
}

char	*ft_itoa(int n)
{
	long long	long_n;
	int			n_len;
	char		*result;

	long_n = n;
	if (long_n < 0)
		long_n *= -1;
	n_len = getstrlen(n);
	if (!(result = (char *)malloc(n_len + 1)))
		return (NULL);
	result[n_len] = '\0';
	while (n_len)
	{
		result[--n_len] = (long_n % 10) + '0';
		long_n /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
