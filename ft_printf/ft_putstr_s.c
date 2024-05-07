/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:43:05 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:43:09 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_s(char *s)
{
	int		i;
	char	*d;

	i = 0;
	if (!s)
	{
		d = "(null)";
		while (d[i])
		{
			if (ft_putchar_c(d[i]) == -1)
				return (-1);
			i++;
		}
	}
	else
	{
		while (s[i])
		{
			ft_putchar_c(s[i]);
			i++;
		}
	}
	return (i);
}
