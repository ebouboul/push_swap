/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:23:02 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:23:03 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_puthex_l(size_t nb, char format, int *sum)
{
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else if (format == 'X')
		hex = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar_l(hex[nb % 16], sum);
	else
	{
		ft_puthex_l(nb / 16, format, sum);
		ft_putchar_l(hex[nb % 16], sum);
	}
}
