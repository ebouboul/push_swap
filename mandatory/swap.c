/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:37:30 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:38:55 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack, char type_stack)
{
	t_list	*tmp;

	if ((ft_lstsize(*stack)) < 2)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
	if (type_stack == 'a')
		write(1, "sa\n", 3);
	else if (type_stack == 'b')
		write(1, "sb\n", 3);
}

void	ft_swap_all(t_list **stack_a, t_list **stack_b, char type)
{
	ft_swap(stack_a, 'y');
	ft_swap(stack_b, 'z');
	if (type == 's')
		write(1, "ss\n", 3);
}
