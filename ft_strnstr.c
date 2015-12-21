/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:03:06 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 13:32:58 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!*s2)
		return ((char *)s1);
	if (n > ft_strlen(s1))
		n = ft_strlen(s1);
	while (j < n)
	{
		i = 0;
		while (s2[i] == s1[j] && j < n)
		{
			i++;
			j++;
		}
		if (!s2[i])
			return ((char*)(s1 + (j - i)));
		j = (j - i) + 1;
	}
	return (NULL);
}
