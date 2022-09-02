/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchong <jinchong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:38:49 by jinchong          #+#    #+#             */
/*   Updated: 2020/11/27 01:11:21 by jinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int ch)
{
	char	*pt;

	pt = str;
	while (*str)
		str++;
	while (str != pt && *str != ch)
		str--;
	if (*str == (char)ch)
		return (str);
	return (0);
}
