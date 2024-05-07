/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:43:38 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:43:39 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned long n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int				count;
	unsigned long	nb;

	nb = n;
	if (n == 0)
		return (ft_putchar_c('0'));
	count = get_size(n);
	if (nb < 10)
	{
		nb += 48;
		ft_putchar_c(nb);
	}
	else
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	return (count);
}
