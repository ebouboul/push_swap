/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:ft_printf/ft_puthex.c
/*   Created: 2024/05/04 01:23:02 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:23:03 by ebouboul         ###   ########.fr       */
=======
/*   Created: 2023/11/26 18:59:11 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/26 21:57:18 by ebouboul         ###   ########.fr       */
>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7:ft_printf/ft_puthex_x.c
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_put_hex(unsigned int nbr, char *chars)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_put_hex(nbr / 16, chars);
		count += ft_put_hex(nbr % 16, chars);
	}
	else
		count += ft_putchar_c(chars[nbr]);
	return (count);
}

int	ft_puthex_x(unsigned int nbr, int format)
{
	char	*chars;

	if (format == 'x')
		chars = "0123456789abcdef";
	else
		chars = "0123456789ABCDEF";
	return (ft_put_hex(nbr, chars));
}
