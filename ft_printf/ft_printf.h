/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:22:52 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:22:53 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_l(char c, int *sum);
void	ft_putnbr_l(int n, int *sum);
void	ft_putstr_l(char *s, int *sum);
void	ft_puthex_l(size_t nb, char format, int *sum);
void	ft_putunbr_l(unsigned int n, int *sum);

#endif