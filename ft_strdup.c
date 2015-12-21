/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:20:58 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/12 13:03:09 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	i;
	char	*str2;

	str2 = (char *)malloc(sizeof(char) * ft_strlen(str1) + 1);
	i = 0;
	if (str2 == NULL || str1 == NULL)
		return (NULL);
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	if (i > ft_strlen(str1))
		return (NULL);
	return (str2);
}
