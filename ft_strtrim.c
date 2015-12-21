/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:59:35 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/10 16:16:46 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	if (i != -1)
	{
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j++;
	}
	i = i - j + 1;
	if ((str = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	s = s + j;
	j = 0;
	while (j < i)
		str[j++] = *s++;
	str[j] = '\0';
	return (str);
}
