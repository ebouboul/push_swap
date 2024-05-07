/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:20:05 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:31:46 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort1(t_list *stack_a)
{
	static int	*array;

	array = ft_fill_array(stack_a);
	if (ft_check_array(array, ft_lstsize(stack_a)) == 1)
	{
		free(array);
		return (0);
	}
	free(array);
	return (1);
}

int	ft_split_to_node(char **num_split, long tmp_num, t_list *tmp_node,
		t_list **stack_a)
{
	long	tmp_num2;
	int		i;

	i = 0;
	while (num_split[i])
	{
		tmp_num2 = tmp_num;
		tmp_num = ft_atoi(num_split[i]);
		if (tmp_num > INT_MAX || tmp_num < INT_MIN)
			return (ft_printf("Error\n"));
		if (i != 0)
		{
			if ((ft_check_num(stack_a, tmp_num) == 0 || tmp_num2 == tmp_num)
				&& i != 0)
				return (ft_printf("Error\n"));
		}
		tmp_node = ft_lstnew(tmp_num);
		ft_lstadd_back(stack_a, tmp_node);
		i++;
	}
	if (ft_check_sort1(*stack_a) == 0)
		return (0);
	return (1);
}
