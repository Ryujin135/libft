/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 11:22:03 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 11:25:15 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*lnext;

	list = *alst;
	while (list)
	{
		lnext = list->next;
		del(list->content, list->content_size);
		free(list);
		list = lnext;
	}
	*alst = NULL;
}
