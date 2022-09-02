/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:39:13 by mseo              #+#    #+#             */
/*   Updated: 2020/11/26 23:02:02 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chknbr(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			nbr++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (nbr);
}

static int	chkalpha(char const *s, char c)
{
	size_t	alplen;

	alplen = 0;
	while (s[alplen])
	{
		if (s[alplen] == c)
			break ;
		alplen++;
	}
	return (alplen);
}

static char	**set_all_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char			**str;
	size_t			nbr;
	size_t			i;
	unsigned int	alphachk;

	if (!s)
		return (NULL);
	nbr = chknbr(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (nbr + 1))))
		return (NULL);
	i = 0;
	while (i < nbr)
	{
		while (*s && *s == c)
			s++;
		alphachk = chkalpha(s, c);
		if (!(str[i] = (char *)malloc(sizeof(char) * (alphachk + 1))))
			return (set_all_free(str));
		ft_strlcpy(str[i], s, alphachk + 1);
		i++;
		if (i < nbr)
			s = s + alphachk;
	}
	str[i] = NULL;
	return (str);
}
