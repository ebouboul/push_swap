<<<<<<< HEAD
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 01:20:12 by ebouboul          #+#    #+#              #
#    Updated: 2024/05/04 01:20:16 by ebouboul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

=======
>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7
NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/libftprintf.a
RM = rm -rf

PUSH_SRC =  ./mandatory/push_swap.c\
 			./mandatory/add_to_list.c\
			./mandatory/check_arg.c\
			./mandatory/free_all.c\
			./mandatory/swap.c\
			./mandatory/push.c\
			./mandatory/rotate.c\
			./mandatory/sort_3_5.c\
			./mandatory/array.c\
			./mandatory/check_spaces.c\
			./mandatory/big_sort.c\



OBJ= $(PUSH_SRC:.c=.o)
BOBJ= $(BONUS_SRC:.c=.o)


all: $(NAME)

bonus: $(BONUS)

$(LIBFT):
		$(MAKE) --no-print-directory -C ./libft
		
$(FT_PRINTF):
		$(MAKE) --no-print-directory -C ./ft_printf
		
$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o push_swap
	@echo "✅IS MAKE✅"

$(BONUS): $(LIBFT) $(FT_PRINTF) $(BOBJ)
	$(CC) $(CFLAGS) $(BOBJ) $(LIBFT) $(FT_PRINTF) -o checker
	@echo "✅BONUS✅"
clean:
	$(MAKE) clean --no-print-directory -C ./libft
	$(MAKE) clean --no-print-directory -C ./ft_printf
	$(RM) $(OBJ) $(BOBJ)
	@echo "🧹IS CLEAN🧹"

fclean: clean
	$(MAKE) fclean --no-print-directory -C ./libft
	$(MAKE) fclean --no-print-directory -C ./ft_printf
	$(RM) $(NAME)
	$(RM) $(BONUS)
	@echo "🧹IS FULL CLEAN🧹"

re: fclean all

.SILENT:
.SECONDARY: $(OBJ) $(BOBJ) $(MAKE) clean --no-print-directory -C ./libft $(MAKE) clean --no-print-directory -C ./ft_printf