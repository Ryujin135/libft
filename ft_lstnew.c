/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 11:02:07 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 11:51:44 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if ((list = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	list->content = NULL;
	list->next = NULL;
	if (content == NULL)
		list->content_size = 0;
	else
	{
		list->content_size = content_size;
		if ((list->content = (void *)malloc(content_size)) == NULL)
			return (NULL);
		ft_memcpy((list->content), content, content_size);
	}
	return (list);
}
