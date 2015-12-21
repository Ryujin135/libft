/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 11:34:57 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 11:41:06 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(f(lst)->content, f(lst)->content_size);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = ft_lstnew(f(lst)->content, f(lst)->content_size)))
			return (NULL);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (new);
}
