/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:00:55 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 20:25:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_size(int n)
{
	int			i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void			ft_rec(int n, char *result, int j)
{
	int			ni;
	int			jj;

	jj = j;
	if (n == 0)
		return ;
	ft_rec(n / 10, result, --j);
	ni = n % 10;
	result[jj] = '0' + ni;
}

char			*ft_minitoa(int n, int j)
{
	char		*result;

	if (!(result = (char *)malloc(sizeof(char) * (j + 2))))
		return (0);
	ft_rec(-(n / 10), result, j - 1);
	result[j] = '0' - (n % 10);
	result[j + 1] = '\0';
	result[0] = '-';
	return (result);
}

char			*ft_itoa(int n)
{
	char		*result;
	int			j;

	if (n == -0)
	{
		if (!(result = (char *)malloc(sizeof(char) * (2))))
			return (0);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	j = ft_size(n);
	if (n < 0)
		result = ft_minitoa(n, j);
	else
	{
		if (!(result = (char *)malloc(sizeof(char) * (j + 1))))
			return (0);
		ft_rec(n / 10, result, j - 2);
		result[j - 1] = '0' + (n % 10);
		result[j] = '\0';
	}
	return (result);
}
