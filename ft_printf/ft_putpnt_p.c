/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnt_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:59:05 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/26 21:59:07 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nbr)
{
	char	*chars;
	int		count;

	chars = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_putptr(nbr / 16);
		count += ft_putptr(nbr % 16);
	}
	else
		count += ft_putchar_c(chars[nbr]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_putpnt_p(unsigned long adr)
{
	int	count;

	count = 0;
	count += ft_putstr_s("0x");
	if (count < 0)
		return (-1);
	count += ft_putptr(adr);
	if (count < -1)
		return (-1);
	return (count);
}
