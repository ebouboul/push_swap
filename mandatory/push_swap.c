/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:08:59 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 21:37:59 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_call_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2
		&& (*stack_a)->value > (*stack_a)->next->value)
		ft_swap(stack_a, 'a');
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort_3(stack_a);
	else if (ft_lstsize(*stack_a) == 5 || ft_lstsize(*stack_a) == 4)
		ft_sort_5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		ft_sort(stack_a, stack_b);
}

int	ft_check_ns(int argc, char **argv)
{
	if (ft_check_null(argc, argv) == 0)
		return (ft_printf("Error\n"));
	if (ft_check_full_space(argc, argv) == 0)
		return (ft_printf("Error\n"));
	return (0);
}

char	*ft_join_to_numbers(int argc, char **argv)
{
	char		*numbers;
	char		*tmp;
	int			i;

	i = 1;
	numbers = NULL;
	while (i < argc)
	{
		tmp = numbers;
		numbers = ft_strjoin(numbers, argv[i++]);
		free(tmp);
	}
	return (numbers);
}

int	main(int argc, char **argv)
{
	char		*numbers;
	char		**num_split;
	t_list		*stack_a;
	t_list		*stack_b;

	if (argc < 2)
		return (0);
	if (ft_check_ns(argc, argv) != 0)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	numbers = ft_join_to_numbers(argc, argv);
	if (ft_check_arg(numbers) == 0)
	{
		free(numbers);
		return (ft_printf("Error\n"));
	}
	num_split = ft_split(numbers, ' ');
	if (ft_split_to_node(num_split, 0, NULL, &stack_a) == 1)
		ft_call_sort(&stack_a, &stack_b);
	ft_free_all_all(numbers, num_split, &stack_a, &stack_b);
}
