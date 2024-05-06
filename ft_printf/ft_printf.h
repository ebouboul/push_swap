

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar_c(char c);
int	ft_putstr_s(char *s);
int	ft_putnbr_d(int nbr);
int	ft_putpnt_p(unsigned long adr);
int	ft_puthex_x(unsigned int nbr, int format);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_printf(const char *input_str, ...);

#endif