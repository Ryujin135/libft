/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:49:20 by rorengo           #+#    #+#             */
/*   Updated: 2015/12/08 16:53:16 by rorengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n > 9 || n < -9)
		ft_putnbr(ft_abs(n / 10));
	ft_putchar(ft_abs(n % 10) + 48);
}