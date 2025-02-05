
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

NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/libftprintf.a
RM = rm -rf

PUSH_SRC = ./mandatory/push_swap.c\
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

BONUS_SRC = ./bonus/checker.c\
			./bonus/get_next_line.c\
			./bonus/get_next_line_utils.c\
			./bonus/check_arg.c\
			./bonus/free_all.c\
			./bonus/swap.c\
			./bonus/push.c\
			./bonus/rotate.c\
			./bonus/array.c\
			./bonus/check_spaces.c\
			./bonus/applicout.c\

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

$(BONUS): $(LIBFT) $(FT_PRINTF) $(BOBJ)
	$(CC) $(CFLAGS) $(BOBJ) $(LIBFT) $(FT_PRINTF) -o checker
clean:
	$(MAKE) clean --no-print-directory -C ./libft
	$(MAKE) clean --no-print-directory -C ./ft_printf
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(MAKE) fclean --no-print-directory -C ./libft
	$(MAKE) fclean --no-print-directory -C ./ft_printf
	$(RM) $(NAME)
	$(RM) $(BONUS)

re: fclean all
