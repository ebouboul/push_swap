/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:42:42 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:42:43 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(const char *input_str, va_list params, int i);

int	ft_printf(const char *input_str, ...)
{
	va_list	params;
	int		i;
	int		count;

	va_start(params, input_str);
	i = 0;
	count = 0;
	while (input_str[i])
	{
		if (input_str[i] == '%')
		{
			if (input_str[i + 1] == '\0')
				return (count);
			count += check_format(input_str, params, ++i);
		}
		else
			count += ft_putchar_c(input_str[i]);
		if (count < 0)
			return (-1);
		i++;
	}
	va_end(params);
	return (count);
}

static int	check_format(const char *str, va_list par, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_putchar_c(va_arg(par, int));
	else if (str[i] == 's')
		count += ft_putstr_s(va_arg(par, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_putnbr_d(va_arg(par, int));
	else if (str[i] == 'u')
		count += ft_putnbr_unsigned(va_arg(par, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_puthex_x(va_arg(par, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_putpnt_p(va_arg(par, unsigned long));
	else if (str[i] == '%')
		count += ft_putchar_c('%');
	return (count);
}
