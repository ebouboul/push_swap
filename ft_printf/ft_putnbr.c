/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:23:07 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:23:08 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void	ft_putnbr_l(int n, int *sum)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_l('-', sum);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_l(nb / 10, sum);
		ft_putnbr_l(nb % 10, sum);
	}
	else
		ft_putchar_l(nb + 48, sum);
}
