
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
