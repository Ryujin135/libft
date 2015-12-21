/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:28:06 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/12 12:57:08 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	if (s)
	{
		while (len != 0 && s[start])
		{
			str[i++] = s[start++];
			len--;
		}
		str[i] = '\0';
	}
	return (str);
}
