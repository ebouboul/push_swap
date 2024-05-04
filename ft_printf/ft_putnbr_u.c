/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:ft_printf/ft_putnbr.c
/*   Created: 2024/05/04 01:23:07 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:23:08 by ebouboul         ###   ########.fr       */
=======
/*   Created: 2023/11/26 21:57:56 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/26 21:58:36 by ebouboul         ###   ########.fr       */
>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7:ft_printf/ft_putnbr_u.c
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
