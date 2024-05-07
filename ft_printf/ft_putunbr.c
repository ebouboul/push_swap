/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:23:19 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:44:15 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_l(unsigned int n, int *sum)
{
	long	nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putunbr_l(nb / 10, sum);
		ft_putunbr_l(nb % 10, sum);
	}
	else
		ft_putchar_l(nb + 48, sum);
}
