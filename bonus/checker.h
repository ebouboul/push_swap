/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:40:49 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:48:17 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "get_next_line.h"

char	**ft_free_all(char **ptr);
int		ft_split_to_node(char **num_split, long tmp_num, t_list *tmp_node,
			t_list **stack_a);
int		ft_check_space(char *s);
int		ft_check_num(t_list **lst, int num);
int		ft_check(char *s);
int		ft_check_arg(char *s);
int		ft_free_all_all(char *numbers, char **num_split, t_list **stack_a,
			t_list **stack_b);
int		ft_check_null(int argc, char **argv);
int		ft_check_spaces(char *argv);
int		ft_check_full_space(int argc, char **argv);
int		ft_check_sort(t_list *stack_a);
void	ft_valid(t_list *stack_a, t_list *stack_b);
// sorting functions
void	ft_swap(t_list **stack);
void	ft_push(t_list **stack_from, t_list **stack_to);
void	ft_swap_all(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack);
void	ft_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_rev_rotate(t_list **stack);
void	ft_rev_rotate_all(t_list **stack_a, t_list **stack_b);

// array
int		*ft_fill_array(t_list *stack);
int		ft_check_array(int *array, int size_arr);
void	ft_sort_array(int *array, int size_arr);

int		application(char *output, t_list **stack_a, t_list **stack_b);
void	call_applic(t_list **stacka, t_list **stackb);
#endif