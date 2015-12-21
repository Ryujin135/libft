/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 11:01:53 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/11 16:16:18 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(const char *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c)
	{
		i++;
		size++;
	}
	return (size);
}

static size_t	ft_sizeall(const char *s, char c)
{
	size_t	sizeall;
	size_t	i;

	sizeall = 0;
	i = 0;
	if (s[i] != c)
		sizeall++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			sizeall++;
		i++;
	}
	return (sizeall);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if ((ret = (char **)malloc(sizeof(char *) * ft_sizeall(s, c) + 1)) == NULL)
		return (NULL);
	while (s[i] && j < ft_sizeall(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		if ((ret[j] = (char *)malloc(sizeof(char) * ft_size(s, c, i))) == NULL)
			return (NULL);
		while (s[i] && s[i] != c)
			ret[j][k++] = s[i++];
		ret[j][k] = '\0';
		k = 0;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
