/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:19:49 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/14 16:23:17 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_copysign(double n1, double n2)
{
	if (n2 < 0 || (1.0 / n2) < n2)
		n1 *= -1;
	return (n1);
}
