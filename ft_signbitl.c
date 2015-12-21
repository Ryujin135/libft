/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signbitl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:40:14 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 16:41:25 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_signbitl(long n)
{
	if (n < 0 || (1.0 / n) < 0)
		return (1);
	return (0);
}
