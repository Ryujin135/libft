/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 19:21:55 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 14:14:01 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[j])
	{
		i = 0;
		while (i < ft_strlen(s2) - 1 && s1[j] && (UC)s2[i] == (UC)s1[j])
		{
			i++;
			j++;
		}
		if (((UC)s1[j] - (UC)s2[i]) == 0)
			return ((char *)(s1 + (j - i)));
		j = (j - i) + 1;
	}
	return (NULL);
}
