/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:18:11 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:31:16 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_push(t_list **stack_from, t_list **stack_to)
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
}
