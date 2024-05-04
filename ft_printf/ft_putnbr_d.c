/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:59:01 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/26 21:57:38 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		count += ft_putstr_s("-2147483648");
	else if (nb < 0)
	{
		count += ft_putchar_c('-');
		nb = -nb;
		count += ft_putnbr(nb);
	}
	else
	{
		if (nb >= 10)
		{
			count += ft_putnbr(nb / 10);
			count += ft_putnbr(nb % 10);
		}
		else
			count += ft_putchar_c(nb + 48);
	}
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_putnbr_d(int nbr)
{
	int	count;

	count = 0;
	count += ft_putnbr(nbr);
	if (count < 0)
		return (-1);
	return (count);
}
