/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applicout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:37:06 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/06 23:37:56 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
    return(0);
}
int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void application(char *output, t_list **stack_a, t_list **stack_b)
{
        if(ft_strcmp(output, "sa\n") == 0)
            ft_swap(stack_a);
        else if(ft_strcmp(output, "sb\n") == 0)
            ft_swap(stack_b);
        else if(ft_strcmp(output, "ss\n") == 0)
            ft_swap_all(stack_a, stack_b);
        else if(ft_strcmp(output, "pb\n") == 0)
            ft_push(stack_a, stack_b);
        else if(ft_strcmp(output, "pa\n") == 0)
            ft_push(stack_a, stack_b);
        else if(ft_strcmp(output, "ra\n") == 0)
            ft_rotate(stack_a);
        else if(ft_strcmp(output, "rb\n") == 0)
            ft_rotate(stack_b);
        else if(ft_strcmp(output, "rr\n") == 0)
            ft_rotate_all(stack_a, stack_b);
        else if(ft_strcmp(output, "rra\n") == 0)
            ft_rev_rotate(stack_a);
        else if(ft_strcmp(output, "rrb\n") == 0)
            ft_rev_rotate(stack_b);
        else if(ft_strcmp(output, "rrr\n") == 0)
            ft_rev_rotate_all(stack_a, stack_b);
}

