/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:22:45 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/25 15:07:20 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	wordcount(const char *s, char c, int opt)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (opt == 1)
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i] && s[i] != c)
				count++;
			while (s[i] && s[i] != c)
				i++;
		}
		return (count);
	}
	return (1);
}

static int	wordlen(const char *s, char c, int i)
{
	int	i2;

	i2 = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		i2++;
	}
	return (i2);
}

static char	*putword(const char *str, char charset, int i)
{
	char	*rep;
	int		len;
	int		j;

	j = 0;
	if (!str)
		return (NULL);
	len = wordlen(str, charset, i);
	rep = malloc(sizeof(char) * (len + 1));
	if (!rep)
		return (NULL);
	while (str[i] && str[i] != charset)
	{
		rep[j] = str[i];
		j++;
		i++;
	}
	rep[j] = '\0';
	return (rep);
}

static char	**split2(const char *str, char charset, int j, int i)
{
	char	**rep;

	rep = NULL;
	rep = malloc(sizeof(char *) * (wordcount(str, charset, 1) + 1));
	if (!rep)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
		{
			rep[j] = putword(str, charset, i);
			if (!rep[j++])
				if (wordcount(str, charset, 0))
					return (NULL);
		}
		while (str[i] && str[i] != charset)
			i++;
	}
	rep[j] = 0;
	return (rep);
}

char	**ft_split(char *str, char charset)
{
	char	**rep;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_strjoin("a.out ", str);
	if (!str)
		return (NULL);
	rep = NULL;
	rep = split2(str, charset, j, i);
	if (!rep)
		return (NULL);
	return (rep);
}
