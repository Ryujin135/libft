/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 11:17:09 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/09 11:27:47 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	if ((mem = (void *)malloc(size)) == NULL)
		return (NULL);
	while (i < size)
	{
		((char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}
