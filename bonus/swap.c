
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:17:58 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:17:59 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "checker.h"

void	ft_swap(t_list **stack)
{
	t_list	*tmp;

	if ((ft_lstsize(*stack)) < 2)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_swap_all(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
