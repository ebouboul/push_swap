src = ft_printf.c
src_p = ft_printf.c ft_putchar_c.c ft_putstr_s.c ft_putnbr_d.c ft_putpnt_p.c ft_puthex_x.c ft_putnbr_u.c

objs := $(src:%.c=%.o)
objsp := $(src_p:%.c=%.o)

NAME = libftprintf.a
cc = cc
ccflags = -Wall -Wextra -Werror


all: $(NAME)

%.o: %.c
	$(cc) $(ccflags) -o $@ -c $<

$(NAME): $(objs) $(objsp)
	ar rcs $(NAME) $(objs) $(objsp)

clean:
	rm -f $(objs) $(objsp)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT: