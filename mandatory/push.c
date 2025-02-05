/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:18:11 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:37:04 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **stack_from, t_list **stack_to, char type_from)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (ft_lstsize(*stack_from) == 0)
		return ;
	tmp1 = *stack_from;
	*stack_from = (*stack_from)->next;
	tmp2 = *stack_to;
	*stack_to = tmp1;
	(*stack_to)->next = tmp2;
	if (type_from == 'b')
		write(1, "pa\n", 3);
	else if (type_from == 'a')
		write(1, "pb\n", 3);
}
