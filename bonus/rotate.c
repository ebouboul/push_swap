
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:18:06 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:18:07 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "checker.h"

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;

	if ((ft_lstsize(*stack)) < 2)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
}

void	ft_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_rev_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	if ((ft_lstsize(*stack)) < 2)
		return ;
	tmp = ft_lstlast(*stack);
	tmp2 = *stack;
	while (tmp2)
	{
		if (tmp2->next->next == NULL)
		{
			tmp2->next = NULL;
			break ;
		}
		tmp2 = tmp2->next;
	}
	ft_lstadd_front(stack, tmp);

}

void	ft_rev_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
