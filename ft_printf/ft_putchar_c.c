/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:ft_printf/ft_putchar.c
/*   Created: 2024/05/04 01:22:58 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:22:59 by ebouboul         ###   ########.fr       */
=======
/*   Created: 2023/11/26 18:59:14 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/26 21:56:49 by ebouboul         ###   ########.fr       */
>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7:ft_printf/ft_putchar_c.c
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_putchar_c(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
